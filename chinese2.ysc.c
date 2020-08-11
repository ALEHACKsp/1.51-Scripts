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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	char* sLocal_51 = NULL;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
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
	var uLocal_70 = 0;
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<165> Local_77 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char[] cLocal_78[8] = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	vector3 vLocal_98 = { 0f, 0f, 0f };
	vector3 vLocal_99 = { 0f, 0f, 0f };
	int iLocal_100 = 0;
	struct<5> Local_101[31];
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	struct<5> Local_109[61];
	float fLocal_110 = 0f;
	int iLocal_111 = 0;
	vector3 vLocal_112 = { 0f, 0f, 0f };
	struct<33> Local_113[26];
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	struct<24> Local_119[26];
	vector3 vLocal_120 = { 0f, 0f, 0f };
	vector3 vLocal_121 = { 0f, 0f, 0f };
	vector3 vLocal_122 = { 0f, 0f, 0f };
	vector3 vLocal_123 = { 0f, 0f, 0f };
	vector3 vLocal_124 = { 0f, 0f, 0f };
	vector3 vLocal_125 = { 0f, 0f, 0f };
	vector3 vLocal_126 = { 0f, 0f, 0f };
	vector3 vLocal_127 = { 0f, 0f, 0f };
	vector3 vLocal_128 = { 0f, 0f, 0f };
	vector3 vLocal_129 = { 0f, 0f, 0f };
	vector3 vLocal_130[21] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	char[] cLocal_131[8] = 0;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	bool bLocal_134 = 0;
	int iLocal_135 = 0;
	struct<6> Local_136[6];
	struct<18> Local_137[4];
	float fLocal_138 = 0f;
	int iLocal_139 = 0;
	int iLocal_140[4] = { 0, 0, 0, 0 };
	int iLocal_141[4] = { 0, 0, 0, 0 };
	vector3 vLocal_142[13] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	char* sLocal_151 = NULL;
	bool bLocal_152 = 0;
	struct<6> Local_153[20];
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	float fLocal_157 = 0f;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	bool bLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169[5] = { 0, 0, 0, 0, 0 };
	int iLocal_170[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_171 = 0;
	vector3 vLocal_172 = { 0f, 0f, 0f };
	var uLocal_173 = 0;
	int iLocal_174 = 0;
	float fLocal_175 = 0f;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	struct<7> Local_184 = { 0, 3, 0, 0, 0, 0, 0 } ;
	var uLocal_185 = 1092616192;
	var uLocal_186 = 1101004800;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 3;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 16;
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
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
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
	vector3 vLocal_384[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<10> Local_385[20];
	bool bLocal_386 = 0;
	int iLocal_387 = 0;
	struct<8> Local_388[27];
	struct<4> Local_389[5];
	struct<7> Local_390[17];
	vector3 vLocal_391[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_392 = 0;
	vector3 vLocal_393[24] = "";
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	vector3 vLocal_397 = { 0f, 0f, 0f };
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	char* sLocal_406 = NULL;
	char* sLocal_407 = NULL;
	int iLocal_408[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_409 = 16;
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
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
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
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
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
	iLocal_31 = 0x00000003;
	fLocal_34 = 80f;
	fLocal_35 = 140f;
	fLocal_36 = 180f;
	iLocal_42 = 0x00000001;
	iLocal_43 = 0x00000041;
	iLocal_44 = 0x00000031;
	iLocal_45 = 0x00000040;
	iLocal_49 = unk_0xAD1355DD1E5D2D9B();
	uLocal_50 = unk_0x817B3657F78A517A();
	iLocal_61 = 0xFFFFFFFF;
	iLocal_62 = 0xFFFFFFFF;
	bLocal_75 = 0x00000001;
	iLocal_90 = 0xFFFFFFFF;
	iLocal_93 = 0xFFFFFFFF;
	fLocal_96 = 0.5f;
	fLocal_97 = 0f;
	iLocal_103 = 0x00000001;
	fLocal_110 = 160f;
	cLocal_131 = "CHI2AUD";
	iLocal_177 = 0xFFFFFFFF;
	iLocal_379 = 0xFFFFFFFF;
	unk_0x7798376279BB5369(0x00000001);
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_444();
		func_443(0x00000002);
	}
	fLocal_110 = 160f;
	while (0x00000001)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			func_135();
			func_133();
			if (iLocal_149 >= 0x00000007)
			{
				func_125();
			}
			func_123();
			func_84();
			func_3();
			func_2();
			func_1();
			unk_0x1A6DFFFEEC27BF4F("m_Chinese2", 0x00000000);
		}
		iLocal_574 = 0x00000000;
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	if (iLocal_402)
	{
		if (unk_0xBD307E66C0669BFC(iLocal_401))
		{
			unk_0x0007C2367F4F23F3(iLocal_401);
			iLocal_402 = 0x00000000;
		}
	}
}

int func_2()
{
	if (iLocal_403)
	{
		if (iLocal_404)
		{
			if (unk_0x13896FDECC859926(sLocal_406))
			{
				if (unk_0xC92DB9682A650680(sLocal_406))
				{
					iLocal_403 = 0x00000000;
					iLocal_404 = 0x00000000;
					return 0x00000001;
				}
			}
		}
		else if (unk_0xC92DB9682A650680(sLocal_406))
		{
			iLocal_403 = 0x00000000;
			return 0x00000001;
		}
	}
	else if (iLocal_405)
	{
		if (unk_0x13896FDECC859926(sLocal_407))
		{
			iLocal_405 = 0x00000000;
		}
	}
	return 0x00000000;
}

void func_3()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 0x00000001)
		{
			switch (Local_153[iVar0 /*6*/])
			{
				case 0x00000000:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0x00000000:
							if (unk_0x22A8E52414415B76())
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 0x00000001:
							func_75(1992.804f, 3053.31f, 45.77715f, 1989.681f, 3055.295f, 49.09001f, 3.25f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
							func_75(1994.427f, 3045.136f, 45.34013f, 1981.903f, 3053.235f, 49.79153f, 9.5f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
							func_75(1985.404f, 3075.057f, 44.84953f, 2017.102f, 3057.435f, 53.71896f, 33f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
							iLocal_144 = unk_0x728870EB733D12A1();
							if (func_74(iLocal_144) && func_73(iLocal_144, 1995.202f, 3062.156f, 46.0491f, 0x00000001) < 5f)
							{
								unk_0xD4D331DFE794EACD(unk_0x134B62B726CEC8E6(iLocal_144), 0x00000003);
							}
							Local_153[iVar0 /*6*/].f_1 = 0x00000000;
							break;
					}
					break;
				
				case 0x00000002:
					if (iLocal_149 >= 0x00000003)
					{
						Local_153[iVar0 /*6*/].f_2 = 0xFFFFFFFF;
					}
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0xFFFFFFFF:
							func_72();
							func_70();
							break;
						
						case 0x00000000:
							if (func_73(unk_0x16F2683693E537C9(), 2442.55f, 4967.51f, 54.35f, 0x00000001) < 1300f || func_69(0x00000027))
							{
								if (func_73(unk_0x16F2683693E537C9(), 2442.55f, 4967.51f, 54.35f, 0x00000001) > 500f)
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 0x00000001:
							if (func_66("PHN2", 0x00000001, unk_0x16F2683693E537C9(), "Trevor", 0x00000008, 0x00000000, "ONEIL", 0xFFFFFFFF, 0x00000000, 0x00000000))
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 0x00000002:
							if (!func_65())
							{
								if (func_35("CHI2_ONEILPH", 0x00000001, unk_0x16F2683693E537C9(), "Trevor", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
								{
									Local_153[iVar0 /*6*/].f_1 = 0x00000000;
								}
							}
							break;
					}
					break;
				
				case 0x00000003:
					if (iLocal_149 >= 0x00000003)
					{
						Local_153[iVar0 /*6*/].f_2 = 0xFFFFFFFF;
						Local_153[iVar0 /*6*/].f_1 = 0x00000000;
					}
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0x00000000:
							if (func_35("CHI2_boom", 0x00000001, unk_0x16F2683693E537C9(), "Trevor", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							iLocal_383 = 0x00000000;
							Local_153[iVar0 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 3000;
							break;
						
						case 0x00000001:
							if (!func_65())
							{
								if (!func_34())
								{
									if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
									{
										if (unk_0x1C0640BA9A7327B3() > Local_153[iVar0 /*6*/].f_5)
										{
											if (iLocal_383 < 0x0000000D)
											{
												if (func_35("DRI1", 0x00000002, unk_0x16F2683693E537C9(), "Trevor", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
												{
													iLocal_383++;
													Local_153[iVar0 /*6*/].f_5 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000FA0, 0x00002710));
												}
											}
											else
											{
												Local_153[iVar0 /*6*/].f_1 = 0x00000000;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 0x00000004:
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						iVar1 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						if (!unk_0xE934758D273C899A(iVar1))
						{
							if (func_33(6f, 0x00000002))
							{
								unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
								Local_153[iVar0 /*6*/].f_1 = 0x00000000;
							}
						}
					}
					else
					{
						Local_153[iVar0 /*6*/].f_1 = 0x00000000;
					}
					break;
				
				case 0x00000005:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0xFFFFFFEC:
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 2460.073f, 4964.176f, 46.2405f, 0x00000001) < 250f)
							{
								unk_0x523BCC9DC80CD82F(joaat("a_m_m_hillbilly_01"));
								unk_0x523BCC9DC80CD82F(0x91868CCD);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 0xFFFFFFED:
							if (unk_0xB87F6CF6E5628C67(joaat("a_m_m_hillbilly_01")) && unk_0xB87F6CF6E5628C67(0x91868CCD))
							{
								unk_0x523BCC9DC80CD82F(joaat("a_m_m_hillbilly_02"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 0xFFFFFFEE:
							if (unk_0xB87F6CF6E5628C67(joaat("a_m_m_hillbilly_02")))
							{
								unk_0x523BCC9DC80CD82F(joaat("burrito"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 0xFFFFFFEF:
							if (unk_0xB87F6CF6E5628C67(joaat("burrito")))
							{
								unk_0x523BCC9DC80CD82F(joaat("a_m_y_methhead_01"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 0xFFFFFFF0:
							if (unk_0xB87F6CF6E5628C67(joaat("a_m_y_methhead_01")))
							{
								unk_0x523BCC9DC80CD82F(joaat("prop_ld_can_01"));
								unk_0x523BCC9DC80CD82F(joaat("prop_cs_fertilizer"));
								unk_0x523BCC9DC80CD82F(joaat("prop_cs_beer_bot_01"));
								unk_0x523BCC9DC80CD82F(joaat("prop_phone_ing"));
								unk_0x523BCC9DC80CD82F(joaat("dubsta"));
								unk_0x3F423BF5B8125A50("misschinese2_bank5");
								unk_0x3F423BF5B8125A50("misschinese2_bank1");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_variations@b");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_intro@left");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_intro@right");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_intro@backward");
								unk_0x3F423BF5B8125A50("misschinese2_barrelRoll");
								unk_0x4942FBD1EF896E39("move_m@gangster@var_e");
								unk_0x4942FBD1EF896E39("move_m@gangster@var_f");
								unk_0x4942FBD1EF896E39("move_m@gangster@generic");
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 0xFFFFFFF1:
							if (unk_0xB87F6CF6E5628C67(joaat("dubsta")))
							{
								func_32(0x00000016, 0x00000000);
								func_32(0x00000008, 0x00000000);
								unk_0xF858EFDE1871B5F2(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 0x00000000, 0x00000001);
								Local_153[iVar0 /*6*/].f_2 = 0x00000001;
							}
							break;
						
						case 0x00000000:
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 2460.073f, 4964.176f, 46.2405f, 0x00000001) < 250f)
							{
								unk_0x523BCC9DC80CD82F(joaat("a_m_m_hillbilly_01"));
								unk_0x523BCC9DC80CD82F(joaat("a_m_m_hillbilly_02"));
								unk_0x523BCC9DC80CD82F(joaat("a_m_y_methhead_01"));
								unk_0x523BCC9DC80CD82F(joaat("prop_ld_can_01"));
								unk_0x523BCC9DC80CD82F(joaat("prop_cs_fertilizer"));
								unk_0x523BCC9DC80CD82F(joaat("burrito"));
								unk_0x523BCC9DC80CD82F(joaat("prop_cs_beer_bot_01"));
								if (iLocal_149 <= 0x00000003)
								{
									unk_0x523BCC9DC80CD82F(joaat("prop_phone_ing"));
									unk_0x523BCC9DC80CD82F(joaat("dubsta"));
								}
								unk_0x3F423BF5B8125A50("misschinese2_bank5");
								unk_0x3F423BF5B8125A50("misschinese2_bank1");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_variations@b");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_intro@left");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_intro@right");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_intro@backward");
								unk_0x3F423BF5B8125A50("misschinese2_barrelRoll");
								unk_0x4942FBD1EF896E39("move_m@gangster@var_e");
								unk_0x4942FBD1EF896E39("move_m@gangster@var_f");
								unk_0x4942FBD1EF896E39("move_m@gangster@generic");
								func_32(0x00000016, 0x00000000);
								func_32(0x00000008, 0x00000000);
								unk_0xF858EFDE1871B5F2(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 0x00000000, 0x00000001);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 0x00000001:
							if (((((((((((((((unk_0xB87F6CF6E5628C67(joaat("a_m_m_hillbilly_01")) && unk_0xB87F6CF6E5628C67(joaat("a_m_m_hillbilly_02"))) && unk_0xB87F6CF6E5628C67(joaat("a_m_y_methhead_01"))) && unk_0xB87F6CF6E5628C67(joaat("burrito"))) && unk_0xB87F6CF6E5628C67(joaat("prop_cs_fertilizer"))) && unk_0xB87F6CF6E5628C67(joaat("prop_cs_beer_bot_01"))) && unk_0xB87F6CF6E5628C67(joaat("prop_ld_can_01"))) && unk_0xB4AE0788C1587752("misschinese2_bank5")) && unk_0xB4AE0788C1587752("misschinese2_bank1")) && unk_0xB4AE0788C1587752("misschinese2_barrelRoll")) && unk_0xB4AE0788C1587752("reaction@male_stand@big_variations@b")) && unk_0xB4AE0788C1587752("reaction@male_stand@big_intro@left")) && unk_0xB4AE0788C1587752("reaction@male_stand@big_intro@right")) && unk_0xB4AE0788C1587752("reaction@male_stand@big_intro@backward")) && ((iLocal_149 <= 0x00000003 && unk_0xB87F6CF6E5628C67(joaat("prop_phone_ing"))) || iLocal_149 > 0x00000003)) && ((iLocal_149 <= 0x00000003 && unk_0xB87F6CF6E5628C67(joaat("dubsta"))) || iLocal_149 > 0x00000003))
							{
								Local_153[iVar0 /*6*/].f_2 = 0x00000004;
							}
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 2460.073f, 4964.176f, 46.2405f, 0x00000001) > 300f)
							{
								unk_0x71199B01895C6202(joaat("a_m_m_hillbilly_01"));
								unk_0x71199B01895C6202(joaat("a_m_m_hillbilly_02"));
								unk_0x71199B01895C6202(joaat("a_m_y_methhead_01"));
								unk_0x71199B01895C6202(joaat("burrito"));
								unk_0x71199B01895C6202(joaat("prop_cs_fertilizer"));
								unk_0x71199B01895C6202(joaat("prop_cs_beer_bot_01"));
								unk_0x71199B01895C6202(joaat("prop_ld_can_01"));
								unk_0x8D17794CE3273D70("misschinese2_bank5");
								unk_0x8D17794CE3273D70("misschinese2_bank1");
								unk_0x8D17794CE3273D70("reaction@male_stand@big_variations@b");
								unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@left");
								unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@right");
								unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@backward");
								unk_0x8D17794CE3273D70("misschinese2_barrelRoll");
								unk_0xDD465543E2028AEA("move_m@gangster@var_e");
								unk_0xDD465543E2028AEA("move_m@gangster@var_f");
								unk_0xDD465543E2028AEA("move_m@gangster@generic");
								unk_0x71199B01895C6202(joaat("prop_phone_ing"));
								unk_0x71199B01895C6202(joaat("dubsta"));
								unk_0xF858EFDE1871B5F2(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 0x00000001, 0x00000001);
								func_31(0x00000016, 0x00000001);
								func_31(0x00000008, 0x00000001);
								if (iLocal_179 != 0x00000000)
								{
									unk_0x25BB71BA267FE042(iLocal_179);
									iLocal_179 = 0x00000000;
								}
								Local_153[iVar0 /*6*/].f_2 = 0xFFFFFFEC;
							}
							break;
						
						case 0x00000004:
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 2460.073f, 4964.176f, 46.2405f, 0x00000001) > 300f)
							{
								Local_153[iVar0 /*6*/].f_2 = 0x00000001;
							}
							else if (iLocal_149 >= 0x00000003 && !func_30(0x00000016))
							{
								func_27();
								Local_153[iVar0 /*6*/].f_1 = 0x00000000;
							}
							break;
						
						case 0x00000005:
							break;
					}
					break;
				
				case 0x00000016:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0xFFFFFFFF:
							if (iLocal_179 != 0x00000000)
							{
								unk_0x25BB71BA267FE042(iLocal_179);
							}
							iLocal_179 = 0x00000000;
							break;
						
						case 0x00000000:
							iLocal_179 = unk_0xFBD08BECC9B87937(2440.492f, 4969.948f, 52.5247f);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 0x00000001:
							if (!unk_0x31609A585163CBAC(iLocal_179))
							{
								iLocal_179 = unk_0xFBD08BECC9B87937(2440.492f, 4969.948f, 52.5247f);
							}
							else
							{
								unk_0x0007C2367F4F23F3(iLocal_179);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 0x00000002:
							Local_153[iVar0 /*6*/].f_1 = 0x00000000;
							break;
					}
					break;
				
				case 0x00000006:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0x00000000:
							func_19(0x00000032, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
							func_19(0x00000033, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
							func_19(0x00000034, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
							func_19(0x00000035, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
							func_19(0x00000036, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 0x00000001:
							break;
					}
					break;
				
				case 0x00000007:
					if (Local_153[iVar0 /*6*/].f_2 == 0x00000000)
					{
						iVar2 = func_18(0x00000008);
						if (iVar2 != 0xFFFFFFFF)
						{
							if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar2 /*33*/]))
							{
								if (unk_0xD1960163A3042274(Local_113[iVar2 /*33*/], 0x6A67A5CC) == 0x00000007)
								{
									iVar2 = func_18(0x00000009);
									if (iVar2 != 0xFFFFFFFF)
									{
										if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar2 /*33*/]))
										{
											if (unk_0xD1960163A3042274(Local_113[iVar2 /*33*/], 0x6A67A5CC) == 0x00000007)
											{
												unk_0x8D17794CE3273D70("misschinese2_bank5");
												Local_153[iVar0 /*6*/].f_1 = 0x00000000;
											}
										}
									}
								}
							}
							else
							{
								iVar2 = func_18(0x00000009);
								if (iVar2 != 0xFFFFFFFF)
								{
									if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar2 /*33*/]))
									{
										if (unk_0xD1960163A3042274(Local_113[iVar2 /*33*/], 0x6A67A5CC) == 0x00000007)
										{
											unk_0x8D17794CE3273D70("misschinese2_bank5");
											Local_153[iVar0 /*6*/].f_1 = 0x00000000;
										}
									}
									else
									{
										unk_0x8D17794CE3273D70("misschinese2_bank5");
									}
								}
							}
						}
					}
					break;
				
				case 0x00000008:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0xFFFFFFFF:
							unk_0xB547E3FFEB27073E();
							break;
						
						case 0x00000000:
							unk_0x7D6CA5F52B3748BF(Vector(58.6179f, 4972.897f, 2445.654f) - Vector(100f, 100f, 100f), Vector(58.6179f, 4972.897f, 2445.654f) + Vector(100f, 100f, 100f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 0x00000001:
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 2473.061f, 4981.482f, 24.64584f, 0x00000001) < 250f)
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 0x00000002:
							unk_0x6A36BC55C7F6D023(0f);
							unk_0xD60411959D5D930B(0f);
							unk_0x1386EF28F7C0195C(0f, 0f);
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 2473.061f, 4981.482f, 24.64584f, 0x00000001) > 250f)
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
					}
					break;
				
				case 0x00000009:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0xFFFFFFFF:
							unk_0x15EA7F4313456B1D(0x00000003, 0x00000001);
							unk_0x15EA7F4313456B1D(0x00000005, 0x00000001);
							unk_0x15EA7F4313456B1D(0x00000001, 0x00000001);
							unk_0x15EA7F4313456B1D(0x00000007, 0x00000001);
							break;
						
						case 0x00000000:
							if (func_73(unk_0x16F2683693E537C9(), 2578.523f, 4982.284f, 51.4416f, 0x00000001) < 500f)
							{
								unk_0x15EA7F4313456B1D(0x00000003, 0x00000000);
								unk_0x15EA7F4313456B1D(0x00000005, 0x00000000);
								unk_0x15EA7F4313456B1D(0x00000001, 0x00000000);
								unk_0x15EA7F4313456B1D(0x00000007, 0x00000000);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 0x00000001:
							if (func_73(unk_0x16F2683693E537C9(), 2578.523f, 4982.284f, 51.4416f, 0x00000001) > 500f)
							{
								unk_0x15EA7F4313456B1D(0x00000003, 0x00000001);
								unk_0x15EA7F4313456B1D(0x00000005, 0x00000001);
								unk_0x15EA7F4313456B1D(0x00000001, 0x00000001);
								unk_0x15EA7F4313456B1D(0x00000007, 0x00000001);
								Local_153[iVar0 /*6*/].f_2 = 0x00000000;
							}
							break;
					}
					break;
				
				case 0x00000019:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0x00000000:
							func_17(unk_0x16F2683693E537C9(), 0x00000095);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 0x00000001:
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								iVar3 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
								func_17(iVar3, 0x00000098);
								func_16(iVar3, 0xFFFFFFFF);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 0x00000002:
							if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								func_17(0x00000000, 0x00000098);
								func_16(0x00000000, 0xFFFFFFFF);
								Local_153[iVar0 /*6*/].f_2 = 0x00000001;
							}
							break;
					}
					break;
				
				case 0x0000000A:
					break;
				
				case 0x0000000B:
					break;
				
				case 0x0000000E:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0x00000000:
							Local_153[iVar0 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 7000;
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 0x00000001:
							if (unk_0x1C0640BA9A7327B3() > Local_153[iVar0 /*6*/].f_5)
							{
								unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2466.385f, 4953.096f, 44.1228f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
								unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 221f);
								unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), 2475.075f, 4945.965f, 44.0228f, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
								unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0xD827C3DB, 0x00000000, 0x00000000, 0x00000000);
								Local_153[iVar0 /*6*/].f_1 = 0x00000000;
							}
							break;
					}
					break;
				
				case 0x0000000D:
					if (unk_0xE3934829A331AF92("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0x00000000))
					{
						unk_0x7B1292B738DF9FAF();
						Local_153[iVar0 /*6*/].f_1 = 0x00000000;
					}
					break;
				
				case 0x0000000C:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0x00000000:
							uLocal_173 = unk_0x57651D42225429CC(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
							if (unk_0xB39672D8C1F6BB48(uLocal_173))
							{
								unk_0xCADC8175C61F28E5(uLocal_173, 0x00000002);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 0x00000001:
							if (unk_0xD92EF3526CDA283F(uLocal_173) == 0x00000003)
							{
								unk_0xCADC8175C61F28E5(uLocal_173, 0x00000004);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 0x00000002:
							if (iLocal_174 == 0x00000001)
							{
								if (unk_0xD92EF3526CDA283F(uLocal_173) == 0x00000005)
								{
									unk_0xCADC8175C61F28E5(uLocal_173, 0x00000006);
									unk_0x8BC9595FD2792B5D("CHI_2_RAYFIRE");
									unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, 0x39918412, 0x00000001);
									unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, 0x0EBECAD2, 0x00000001);
									unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, 0xF139365E, 0x00000000);
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 0x00000003:
							func_15("CHN2_EXPLODE", 0x00000001, "CHN2_EXPLODE");
							Local_153[iVar0 /*6*/].f_1 = 0x00000000;
							break;
					}
					break;
				
				case 0x00000010:
					if (Local_153[iVar0 /*6*/].f_2 != 0xFFFFFFFF)
					{
						if (!unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0x00000000) || !unk_0x762119754C50557A(iLocal_176))
						{
							iLocal_180 = unk_0x4B72871A3BE7B474(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 20f, unk_0x6B7EC7B5B6B57364(joaat("weapon_petrolcan")), 0x00000000, 0x00000000, 0x00000001);
							if (iLocal_180 != 0x00000000)
							{
								if (unk_0xE4EDC4B0E92C078B(iLocal_178))
								{
									unk_0x142CC44DB769B57E(&iLocal_178);
								}
								iLocal_178 = func_13(iLocal_180);
								func_12(0x00000001);
								func_11(0x00000000, 0x0000009D);
							}
						}
						else
						{
							Local_153[iVar0 /*6*/].f_5 = 0x00000000;
							func_12(0x00000000);
							if (unk_0xE4EDC4B0E92C078B(iLocal_178))
							{
								unk_0x142CC44DB769B57E(&iLocal_178);
							}
							func_10(0x0000009D, 0x00000000);
							if (iLocal_167 == 0x00000000)
							{
								iLocal_167 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"));
							}
							else
							{
								func_9(0x0000009E, (iLocal_167 - unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"))), 0x00000001);
							}
						}
						if (func_8())
						{
							func_11(0x00000000, 0x0000009D);
							Local_153[iVar0 /*6*/].f_1 = 0x00000000;
							func_32(0x00000011, 0x00000000);
						}
					}
					break;
				
				case 0x00000012:
					break;
				
				case 0x00000011:
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, 0x00000000, 0x00000001, 0x00000000) && unk_0x1C0640BA9A7327B3() > Local_153[iVar0 /*6*/].f_5)
					{
						if (unk_0xE4EDC4B0E92C078B(iLocal_178))
						{
							unk_0x142CC44DB769B57E(&iLocal_178);
						}
						Local_153[iVar0 /*6*/].f_1 = 0x00000000;
					}
					else
					{
						switch (Local_153[iVar0 /*6*/].f_2)
						{
							case 0x00000000:
								if (!func_65())
								{
									func_7("FRMSHP", 0x00001D4C, 0x00000001);
									Local_153[iVar0 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 2000;
									iLocal_178 = func_5(2450f, 4954f, 45f, 0x00000000);
									Local_153[iVar0 /*6*/].f_2++;
								}
								break;
							}
					}
					break;
				
				case 0x00000014:
					if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0x00000000))
					{
						iLocal_380 = func_18(0x00000004);
						if (iLocal_380 != 0xFFFFFFFF)
						{
							unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000000);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0x00000001))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[iLocal_380 /*33*/]) && unk_0xC844350D5D58C99A(Local_113[iLocal_380 /*33*/].f_14))
						{
							if (unk_0xB4ECF989E2C1DAC8(Local_113[iLocal_380 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 0x00000003) && unk_0xD59B17D2DFF98E26(Local_113[iLocal_380 /*33*/].f_14))
							{
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000001);
							}
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0x00000002))
					{
						if (unk_0xEB6A8945D1AC98A1(Local_113[iLocal_380 /*33*/]))
						{
							unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000002);
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[iLocal_380 /*33*/]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(Local_113[iLocal_380 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 0x00000003))
							{
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000002);
							}
							if (unk_0xD1960163A3042274(Local_113[iLocal_380 /*33*/], 0x87B9A382) == 0x00000002 || unk_0xD1960163A3042274(Local_113[iLocal_380 /*33*/], 0x87B9A382) == 0x00000007)
							{
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000002);
							}
							if (unk_0x4734A6196B611C3B(Local_113[iLocal_380 /*33*/], unk_0x16F2683693E537C9()) || Local_119[iLocal_380 /*24*/].f_3 > 0x00000003)
							{
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000002);
							}
						}
					}
					else if (unk_0xC844350D5D58C99A(Local_113[iLocal_380 /*33*/].f_14) && unk_0xD59B17D2DFF98E26(Local_113[iLocal_380 /*33*/].f_14))
					{
						unk_0x15AFB6CBDE990FB6(Local_113[iLocal_380 /*33*/].f_14, 0x00000000, 0x00000000);
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0x00000004))
					{
						iLocal_381 = func_18(0x00000005);
						if (iLocal_381 != 0xFFFFFFFF)
						{
							unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000004);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0x00000005))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[iLocal_381 /*33*/]))
						{
							if (unk_0xC844350D5D58C99A(Local_113[iLocal_381 /*33*/].f_14))
							{
								if (unk_0xB4ECF989E2C1DAC8(Local_113[iLocal_381 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 0x00000003))
								{
									if (unk_0xD59B17D2DFF98E26(Local_113[iLocal_381 /*33*/].f_14))
									{
										unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000005);
									}
								}
							}
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0x00000006))
					{
						if (unk_0xEB6A8945D1AC98A1(Local_113[iLocal_381 /*33*/]))
						{
							unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000006);
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[iLocal_381 /*33*/]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(Local_113[iLocal_381 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 0x00000003))
							{
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000006);
							}
							if (unk_0xD1960163A3042274(Local_113[iLocal_381 /*33*/], 0x87B9A382) == 0x00000002 || unk_0xD1960163A3042274(Local_113[iLocal_381 /*33*/], 0x87B9A382) == 0x00000007)
							{
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000006);
							}
							if (unk_0x4734A6196B611C3B(Local_113[iLocal_381 /*33*/], unk_0x16F2683693E537C9()) || Local_119[iLocal_381 /*24*/].f_3 > 0x00000003)
							{
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000006);
							}
						}
					}
					else if (unk_0xC844350D5D58C99A(Local_113[iLocal_381 /*33*/].f_14) && unk_0xD59B17D2DFF98E26(Local_113[iLocal_381 /*33*/].f_14))
					{
						unk_0x15AFB6CBDE990FB6(Local_113[iLocal_381 /*33*/].f_14, 0x00000000, 0x00000000);
					}
					break;
				
				case 0x00000015:
					break;
				
				case 0x00000017:
					iVar4 = 0x00000000;
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0x00000001:
							iLocal_170[0x00000000] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.496f, 4970.916f, 44.5112f, 0x00000001, 0x00000001, 0x00000000);
							unk_0xC023D1C4BF532815(iLocal_170[0x00000000], -3.44f, 0f, 38.88f, 0x00000002, 0x00000001);
							iLocal_170[0x00000001] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.863f, 4970.595f, 44.5425f, 0x00000001, 0x00000001, 0x00000000);
							unk_0xC023D1C4BF532815(iLocal_170[0x00000001], -3.44f, 0f, 38.88f, 0x00000002, 0x00000001);
							iLocal_170[0x00000002] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.896f, 4970.417f, 44.5475f, 0x00000001, 0x00000001, 0x00000000);
							unk_0xC023D1C4BF532815(iLocal_170[0x00000002], -3.44f, 0f, 38.88f, 0x00000002, 0x00000001);
							iLocal_170[0x00000003] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.795f, 4970.246f, 44.5525f, 0x00000001, 0x00000001, 0x00000000);
							unk_0xC023D1C4BF532815(iLocal_170[0x00000003], -3.44f, 0f, 38.88f, 0x00000002, 0x00000001);
							iLocal_170[0x00000004] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.204f, 4970.269f, 44.5201f, 0x00000001, 0x00000001, 0x00000000);
							unk_0xC023D1C4BF532815(iLocal_170[0x00000004], -3.44f, 0f, 38.88f, 0x00000002, 0x00000001);
							iLocal_170[0x00000005] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.372f, 4970.744f, 44.51f, 0x00000001, 0x00000001, 0x00000000);
							unk_0xC023D1C4BF532815(iLocal_170[0x00000005], -3.44f, 0f, 38.88f, 0x00000002, 0x00000001);
							iLocal_170[0x00000006] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.372f, 4971.092f, 44.4987f, 0x00000001, 0x00000001, 0x00000000);
							unk_0xC023D1C4BF532815(iLocal_170[0x00000006], -3.44f, 0f, 38.88f, 0x00000002, 0x00000001);
							iLocal_170[0x00000007] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2493.77f, 4971f, 44.6287f, 0x00000001, 0x00000001, 0x00000000);
							unk_0xC023D1C4BF532815(iLocal_170[0x00000007], 3.955f, 0f, 139.68f, 0x00000002, 0x00000001);
							iLocal_170[0x00000008] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2493.98f, 4971.279f, 44.6038f, 0x00000001, 0x00000001, 0x00000000);
							unk_0xC023D1C4BF532815(iLocal_170[0x00000008], 3.955f, 0f, 139.68f, 0x00000002, 0x00000001);
							iLocal_170[0x00000009] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.104f, 4971.438f, 44.5826f, 0x00000001, 0x00000001, 0x00000000);
							unk_0xC023D1C4BF532815(iLocal_170[0x00000009], 3.955f, 0f, 139.68f, 0x00000002, 0x00000001);
							iVar4 = 0x00000000;
							while (iVar4 < iLocal_170)
							{
								unk_0xEF190091B5B9F5EB(iLocal_170[iVar4], 0x00000001);
								unk_0x1E9649458B15960F(iLocal_170[iVar4], 0x00000001);
								iVar4++;
							}
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 0x00000000:
							if (!unk_0xC844350D5D58C99A(iLocal_181) && !unk_0xC844350D5D58C99A(iLocal_182))
							{
								if (unk_0xBF75E4DF4C367CD9(2493.5f, 4969.2f, 43.9f, 1f, 0xC90EB9A6, 0x00000000) && unk_0xBF75E4DF4C367CD9(2493.4f, 4971.8f, 43.6f, 1f, 0x91868CCD, 0x00000000))
								{
									iLocal_181 = unk_0x4B72871A3BE7B474(2493.5f, 4969.2f, 43.9f, 1f, 0xC90EB9A6, 0x00000001, 0x00000000, 0x00000001);
									unk_0x1E9649458B15960F(iLocal_181, 0x00000001);
									unk_0x3124890FDA752DE4(2493.4f, 4971.8f, 43.6f, 1f, 0x91868CCD, 0x00000000);
									iLocal_182 = unk_0x7707E48765093646(0x91868CCD, 2493.427f, 4971.729f, 43.54362f, 0x00000001, 0x00000001, 0x00000000);
									unk_0xC023D1C4BF532815(iLocal_182, -1.436373f, 0.176147f, -36.6601f, 0x00000002, 0x00000001);
									unk_0x1E9649458B15960F(iLocal_182, 0x00000001);
									func_32(0x00000018, 0x00000000);
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							else
							{
								unk_0xF690C84DADBB3551(&iLocal_182);
								iLocal_182 = unk_0x7707E48765093646(0x91868CCD, 2493.427f, 4971.729f, 43.54362f, 0x00000001, 0x00000001, 0x00000000);
								unk_0xC023D1C4BF532815(iLocal_182, -1.436373f, 0.176147f, -36.6601f, 0x00000002, 0x00000001);
								unk_0x1E9649458B15960F(iLocal_182, 0x00000001);
								func_32(0x00000018, 0x00000000);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 0x00000002:
							iVar4 = 0x00000000;
							iVar4 = 0x00000000;
							while (iVar4 < iLocal_170)
							{
								if (unk_0xC844350D5D58C99A(iLocal_170[iVar4]))
								{
									unk_0x1E9649458B15960F(iLocal_170[iVar4], 0x00000000);
								}
								iVar4++;
							}
							Local_153[iVar0 /*6*/].f_1 = 0x00000000;
							Local_153[iVar0 /*6*/].f_1 = 0x00000000;
							break;
					}
					break;
				
				case 0x00000018:
					if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0x00000000))
					{
						if (unk_0xC844350D5D58C99A(iLocal_181))
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (unk_0xB87D13D0C064E9D1(iLocal_181, unk_0x16F2683693E537C9(), 0x00000001) || func_4(unk_0x16F2683693E537C9(), iLocal_181, 0x00000001) < 30f)
								{
									unk_0x1E9649458B15960F(iLocal_181, 0x00000000);
									unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000000);
								}
							}
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0x00000001))
					{
						if (unk_0xC844350D5D58C99A(iLocal_182))
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (unk_0xB87D13D0C064E9D1(iLocal_182, unk_0x16F2683693E537C9(), 0x00000001) || func_4(unk_0x16F2683693E537C9(), iLocal_182, 0x00000001) < 30f)
								{
									unk_0x1E9649458B15960F(iLocal_182, 0x00000000);
									unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000001);
								}
							}
						}
					}
					if ((unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0x00000000) && unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0x00000001)) || iLocal_149 == 0x00000006)
					{
						if (unk_0xC844350D5D58C99A(iLocal_181))
						{
							unk_0x1E9649458B15960F(iLocal_181, 0x00000000);
						}
						if (unk_0xC844350D5D58C99A(iLocal_182))
						{
							unk_0x1E9649458B15960F(iLocal_182, 0x00000000);
						}
						Local_153[iVar0 /*6*/].f_1 = 0x00000000;
					}
					break;
				
				case 0x0000001A:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0xFFFFFFFF:
							if (unk_0xC844350D5D58C99A(Local_113[0x0000000C /*33*/]))
							{
								unk_0xEBA53F35D0085654(&(Local_113[0x0000000C /*33*/]));
							}
							if (unk_0xC844350D5D58C99A(Local_113[0x0000000D /*33*/]))
							{
								unk_0xEBA53F35D0085654(&(Local_113[0x0000000D /*33*/]));
							}
							if (unk_0xC844350D5D58C99A(Local_113[0x0000000E /*33*/]))
							{
								unk_0xEBA53F35D0085654(&(Local_113[0x0000000E /*33*/]));
							}
							unk_0x71199B01895C6202(joaat("ig_janet"));
							unk_0x71199B01895C6202(joaat("ig_old_man1a"));
							unk_0x71199B01895C6202(joaat("ig_old_man2"));
							Local_153[iVar0 /*6*/].f_1 = 0x00000000;
							break;
						
						case 0x00000000:
							unk_0x3F423BF5B8125A50("MISSChinese2_crystalMazeMCS1_IG");
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 0x00000001:
							if (unk_0xB4AE0788C1587752("MISSChinese2_crystalMazeMCS1_IG"))
							{
								if (unk_0x154B5473FBFD0156() || !unk_0x22A8E52414415B76())
								{
									if (unk_0xC844350D5D58C99A(Local_113[0x0000000D /*33*/]) && !unk_0xEB6A8945D1AC98A1(Local_113[0x0000000D /*33*/]))
									{
										unk_0xA47B46945FF6DE74(Local_113[0x0000000D /*33*/], 1986.06f, 3051.708f, 46.2151f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
									}
									if (unk_0xC844350D5D58C99A(Local_113[0x0000000E /*33*/]) && !unk_0xEB6A8945D1AC98A1(Local_113[0x0000000E /*33*/]))
									{
										unk_0xA47B46945FF6DE74(Local_113[0x0000000E /*33*/], 1986.105f, 3051.659f, 46.2151f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
									}
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 0x00000002:
							if (unk_0x4742C50E93110B10(1984.89f, 3052.46f, 46.98f, 0.3f, 0x00000001) && unk_0x4742C50E93110B10(1985.322f, 3053.087f, 46.98f, 0.3f, 0x00000001))
							{
								if (!unk_0xC844350D5D58C99A(Local_113[0x0000000D /*33*/]))
								{
									Local_113[0x0000000D /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0f, 0x00000001, 0x00000001);
								}
								if (!unk_0xC844350D5D58C99A(Local_113[0x0000000E /*33*/]))
								{
									Local_113[0x0000000E /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0f, 0x00000001, 0x00000001);
								}
								if (!unk_0xC844350D5D58C99A(Local_113[0x0000000C /*33*/]))
								{
									Local_113[0x0000000C /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0f, 0x00000001, 0x00000001);
								}
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000001);
								unk_0xC74CB55864B8C5C9(Local_113[0x0000000E /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0x00000000);
								unk_0xF895E10BF4C72645(Local_113[0x0000000E /*33*/], 0x00000001, 0x00000001);
								unk_0x11AD11297DC58CC7(Local_113[0x0000000E /*33*/], 0x00000000);
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000000);
								unk_0xC74CB55864B8C5C9(Local_113[0x0000000D /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0x00000000);
								unk_0xF895E10BF4C72645(Local_113[0x0000000D /*33*/], 0x00000001, 0x00000001);
								unk_0x11AD11297DC58CC7(Local_113[0x0000000D /*33*/], 0x00000000);
								if (!unk_0x69DF961355195C3C(Local_153[iVar0 /*6*/].f_5))
								{
									Local_153[iVar0 /*6*/].f_5 = unk_0xE9744DB7B8CA6965(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 0x00000002);
									unk_0xC90224D9E95E5E3A(Local_153[iVar0 /*6*/].f_5, 0x00000001);
								}
								unk_0x915804B434753CBD(Local_113[0x0000000C /*33*/], Local_153[iVar0 /*6*/].f_5, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_janet", 1000f, -1000f, 0x00000001, 0x00000000, 0x447A0000, 0x00000000);
								unk_0xF895E10BF4C72645(Local_113[0x0000000C /*33*/], 0x00000001, 0x00000001);
								unk_0x11AD11297DC58CC7(Local_113[0x0000000C /*33*/], 0x00000000);
								Local_153[iVar0 /*6*/].f_5 = 0x00000000;
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 0x00000003:
							if (unk_0x154B5473FBFD0156() || !unk_0x22A8E52414415B76())
							{
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000D /*33*/]) && !unk_0xEB6A8945D1AC98A1(Local_113[0x0000000E /*33*/]))
							{
								unk_0x4E885A246A9D983A(Local_113[0x0000000D /*33*/], 0x00000098, 0x00000001);
								unk_0x4E885A246A9D983A(Local_113[0x0000000E /*33*/], 0x00000098, 0x00000001);
								if (unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0x00000000) && unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0x00000001))
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
								else
								{
									if (unk_0xD1960163A3042274(Local_113[0x0000000D /*33*/], 0x3B3A458F) != 0x00000001)
									{
										if (unk_0x4742C50E93110B10(1984.89f, 3052.46f, 46.98f, 0.3f, 0x00000001))
										{
											unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000000);
											unk_0xC74CB55864B8C5C9(Local_113[0x0000000D /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0x00000000);
											unk_0x11AD11297DC58CC7(Local_113[0x0000000D /*33*/], 0x00000000);
										}
									}
									else
									{
										unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000000);
									}
									if (unk_0xD1960163A3042274(Local_113[0x0000000E /*33*/], 0x3B3A458F) != 0x00000001)
									{
										if (unk_0x4742C50E93110B10(1985.322f, 3053.087f, 46.98f, 0.3f, 0x00000001))
										{
											unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000001);
											unk_0xC74CB55864B8C5C9(Local_113[0x0000000E /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0x00000000);
											unk_0x11AD11297DC58CC7(Local_113[0x0000000E /*33*/], 0x00000000);
										}
									}
									else
									{
										unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0x00000001);
									}
								}
							}
							break;
						
						case 0x00000004:
							if (func_73(unk_0x16F2683693E537C9(), 1991.419f, 3054.915f, 47.533f, 0x00000001) > 150f)
							{
								Local_153[iVar0 /*6*/].f_2 = 0xFFFFFFFF;
							}
							break;
						
						case 0x00000006:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000C /*33*/]))
							{
								unk_0xF3268524E9BE6D6E(Local_113[0x0000000C /*33*/], unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0xFADC0A217229F6B5(Local_113[0x0000000C /*33*/], 0x00000001);
								unk_0x6DAD7906B73F064D(&(Local_113[0x0000000C /*33*/]));
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000D /*33*/]))
							{
								unk_0xF3268524E9BE6D6E(Local_113[0x0000000D /*33*/], unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0xFADC0A217229F6B5(Local_113[0x0000000D /*33*/], 0x00000001);
								unk_0x6DAD7906B73F064D(&(Local_113[0x0000000D /*33*/]));
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000E /*33*/]))
							{
								unk_0xF3268524E9BE6D6E(Local_113[0x0000000E /*33*/], unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0xFADC0A217229F6B5(Local_113[0x0000000E /*33*/], 0x00000001);
								unk_0x6DAD7906B73F064D(&(Local_113[0x0000000E /*33*/]));
							}
							Local_153[iVar0 /*6*/].f_2 = 0x00000007;
							break;
						
						case 0x00000007:
							if (func_73(unk_0x16F2683693E537C9(), 1991.419f, 3054.915f, 47.533f, 0x00000001) > 150f)
							{
								Local_153[iVar0 /*6*/].f_2 = 0xFFFFFFFF;
							}
							break;
					}
					break;
				
				case 0x0000001B:
					unk_0x1346A2F19187AF79(2444.176f, 4974.077f, 56.4066f, 30f, 0x472B6F66, 0x00000001);
					unk_0x1346A2F19187AF79(2444.176f, 4974.077f, 56.4066f, 30f, joaat("v_ilev_fh_frntdoor"), 0x00000001);
					Local_153[iVar0 /*6*/].f_1 = 0x00000000;
					break;
				
				case 0x0000001D:
					break;
			}
			if (Local_153[iVar0 /*6*/].f_2 == 0xFFFFFFFF)
			{
				Local_153[iVar0 /*6*/].f_1 = 0x00000000;
				Local_153[iVar0 /*6*/].f_2 = 0x00000000;
				Local_153[iVar0 /*6*/].f_3 = 0x00000000;
				Local_153[iVar0 /*6*/].f_4 = 0x00000000;
				Local_153[iVar0 /*6*/].f_5 = 0x00000000;
			}
		}
		iVar0++;
	}
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

int func_5(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_6(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, iParam1);
	return iVar0;
}

float func_6(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_7(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000000);
}

int func_8()
{
	if (iLocal_93 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		if (Global_11F88[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_11F88[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_11F88[iVar0 /*9*/].f_1 = (Global_11F88[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_11F88[iVar0 /*9*/] != 0xFFFFFFFF)
	{
		if (Global_F129[Global_11F88[iVar0 /*9*/] /*13*/] == 0x00000003)
		{
			if (Global_11F88[iVar0 /*9*/].f_1 > 0x00000001)
			{
				Global_11F88[iVar0 /*9*/].f_1 = 0x00000001;
			}
			if (Global_11F88[iVar0 /*9*/].f_1 < 0x00000000)
			{
				Global_11F88[iVar0 /*9*/].f_1 = 0x00000000;
			}
		}
	}
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_F052 = iParam0;
	if (!Global_F050)
	{
		Global_F050 = 0x00000001;
	}
	if (bParam1)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Global_11F87)
		{
			if (Global_11F88[iVar0 /*9*/] == iParam0)
			{
				Global_11F88[iVar0 /*9*/].f_1 = 0x00000000;
			}
			iVar0++;
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_F050)
	{
	}
	Global_F050 = 0x00000000;
	if (bParam0)
	{
		Global_F051 = 0x00000001;
	}
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Global_11F87)
		{
			if (Global_F129[Global_11F88[iVar0 /*9*/] /*13*/] == 0x00000004)
			{
				Global_11F88[iVar0 /*9*/].f_5 = 0x00000000;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < Global_11F87)
		{
			if (Global_11F88[iVar0 /*9*/] > 0x00000000)
			{
				if (Global_11F88[iVar0 /*9*/] == iParam1)
				{
					Global_11F88[iVar0 /*9*/].f_5 = 0x00000000;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000001)
	{
		if (iLocal_86 == 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Local_109)
			{
				if (unk_0xE4EDC4B0E92C078B(Local_109[iVar0 /*5*/].f_3))
				{
					if (unk_0x4FA921CB56EDB0F8(Local_109[iVar0 /*5*/].f_3) < 0x000000FF)
					{
						unk_0x142CC44DB769B57E(&(Local_109[iVar0 /*5*/].f_3));
					}
					else
					{
						unk_0x7F010F50CE03A8AF(Local_109[iVar0 /*5*/].f_3, 0x00000000);
					}
				}
				iVar0++;
			}
			iLocal_86 = 0x00000001;
		}
	}
	else if (iLocal_86)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Local_109)
		{
			if (unk_0xE4EDC4B0E92C078B(Local_109[iVar0 /*5*/].f_3))
			{
				unk_0x7F010F50CE03A8AF(Local_109[iVar0 /*5*/].f_3, 0x000000FF);
			}
			else
			{
				Local_109[iVar0 /*5*/].f_3 = func_5(Local_109[iVar0 /*5*/], 0x00000000);
				unk_0x54B31D18C3F36EB7(Local_109[iVar0 /*5*/].f_3, 0x00000001);
				unk_0x516E63E474722206(Local_109[iVar0 /*5*/].f_3, 0.4f);
				unk_0x7F010F50CE03A8AF(Local_109[iVar0 /*5*/].f_3, 0x00000000);
				unk_0x61755AC17D8F538E(Local_109[iVar0 /*5*/].f_3, 0x00000005);
				unk_0xF2D30B8ACAF12A39(Local_109[iVar0 /*5*/].f_3, 0x00000000);
			}
			iVar0++;
		}
		iLocal_86 = 0x00000000;
	}
}

int func_13(int iParam0)
{
	return func_14(iParam0, 0x00000001, 0x00000000);
}

int func_14(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_6(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_6(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_6(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_15(char* sParam0, int iParam1, char* sParam2)
{
	iLocal_403 = 0x00000001;
	iLocal_404 = iParam1;
	sLocal_406 = sParam0;
	sLocal_407 = sParam2;
}

void func_16(int iParam0, int iParam1)
{
	Global_F053 = iParam0;
	Global_F054 = iParam1;
}

void func_17(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_F055 = iParam0;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		if (iParam1 == 0xFFFFFFFF || Global_11F88[iVar0 /*9*/] == iParam1)
		{
			if (Global_11F88[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_11F88[iVar0 /*9*/].f_6 = iParam0;
				Global_11F88[iVar0 /*9*/].f_7 = 0x00000001;
				Global_11F88[iVar0 /*9*/].f_8 = 0x00000000;
			}
		}
		iVar0++;
	}
}

int func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_113)
	{
		if (Local_113[iVar0 /*33*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_19(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 0x000000C6)
	{
		if (Global_12B4E)
		{
			Global_2537E2.f_4B.f_E3[iParam0] = iParam1;
		}
		else
		{
			Global_1B416.f_1C58.f_E3[iParam0] = iParam1;
		}
		Global_95FE[iParam0] = iParam2;
		Global_96C5[iParam0] = 0x00000001;
		func_22(iParam0, bParam3, iParam4, 0x00000000);
		func_20(iParam0, iParam1);
	}
}

void func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x0000000C:
			if (iParam1 == 0x00000000)
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0x00000001, 0x00000000);
			}
			break;
		
		case 0x00000047:
			if (iParam1 != 0x00000001)
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 0x00000001, 0x00000000);
			}
			break;
		
		case 0x00000041:
			if (iParam1 == 0x00000001)
			{
				func_21(0x00000000, 0x00000000);
			}
			else
			{
				func_21(0x00000000, 0x00000001);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == 0x00000001)
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0x00000001, 0x00000000);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0x00000000, 0x00000000);
			}
			break;
		
		case 0x000000AE:
			if (iParam1 == 0x00000002)
			{
				unk_0x250BB9A851121D75("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 0x00000025:
			if (iParam1 == 0x00000001)
			{
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0x00000000);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0x00000000);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0x00000000);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0x00000000);
			}
			break;
	}
}

void func_21(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_1AEC4, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1AEC4, iParam0);
	}
	Global_1AEC3 = 0x00000001;
}

bool func_22(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_193787 = 0x00000001;
	bVar0 = 0x00000000;
	Var3.f_4 = 0x00000003;
	Var3.f_8 = 0x00000003;
	Var3.f_40 = 0x00000003;
	Var3.f_4B = 0x00000003;
	Var3.f_5B = 0x00000003;
	func_26(&Var3, iParam0);
	if (func_23())
	{
		iVar1 = Global_1B416.f_1C58.f_E3[iParam0];
	}
	else
	{
		iVar1 = Global_2537E2.f_4B.f_E3[iParam0];
	}
	iVar2 = Global_978C[iParam0];
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !bParam3)
	{
		Global_193787 = 0x00000001;
	}
	else
	{
		bVar5 = 0x00000001;
		if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != unk_0x12AB0310C2281427("standard_global_reg"))
		{
			if (iParam2 == 0x00000000)
			{
				if (Global_95FE[iParam0] && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Var3, 0x00000001) < 200f)
				{
					bVar5 = 0x00000000;
					Global_193787 = 0x00000001;
				}
				if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || unk_0x946BFA82EB988C81(unk_0x16F2683693E537C9()))
				{
					if (!unk_0x757EF87A33649210())
					{
						bVar5 = 0x00000000;
						Global_193787 = 0x00000001;
					}
				}
			}
		}
		if (unk_0xEB880D98B5988D0C() && (!unk_0x991B1F0980C62628() || unk_0x00A15D69BCAA5267() != 0x00000005))
		{
			bVar5 = 0x00000000;
			Global_193787 = 0x00000001;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0x00000000:
					if (iVar1 == 0x00000002)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0x00000000)
						{
							unk_0x77ADAEFF81EAE1E4(Var3, 10f, Var3.f_4[iVar1], 0x00000000);
						}
						if (Var3.f_4[iVar2] != 0x00000000)
						{
							unk_0x3124890FDA752DE4(Var3, 10f, Var3.f_4[iVar2], 0x00000001);
						}
						Global_9C38[iParam0] = 0x00000001;
					}
					bVar0 = 0x00000001;
					break;
				
				case 0x00000001:
					if (iVar1 == 0x00000000)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000001 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000001 /*8*/]));
								Global_193787 = 0x00000001;
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000002 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000002 /*8*/]));
								Global_193787 = 0x00000001;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000000 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0x00000000 /*8*/]));
								Global_193787 = 0x00000001;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_22)) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_22)))
							{
								unk_0x2404539258C5376B(&(Var3.f_22));
								Global_193787 = 0x00000001;
							}
						}
					}
					else if (iVar1 == 0x00000001)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_22)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_22)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_22));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000000 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000000 /*8*/]));
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000002 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000002 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000001 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0x00000001 /*8*/]));
							}
						}
					}
					else if (iVar1 == 0x00000002)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_22)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_22)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_22));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000000 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000000 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000001 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000001 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000002 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0x00000002 /*8*/]));
							}
						}
					}
					Global_9B71[iParam0] = 0x00000001;
					Global_9C38[iParam0] = 0x00000001;
					bVar0 = 0x00000001;
					break;
				
				case 0x00000002:
					iVar6 = unk_0x0D1736C2E221BCEA(Var3, &(Var3.f_2A));
					if (iVar6 != 0x00000000)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_32)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_32)))
							{
								unk_0xFE3926923F5430AD(iVar6, &(Var3.f_32));
							}
						}
						if (iVar1 == 0x00000000)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000001 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000001 /*8*/]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000002 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000002 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000000 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0x00000000 /*8*/]));
								}
							}
						}
						else if (iVar1 == 0x00000001)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000000 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000000 /*8*/]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000002 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000002 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000001 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0x00000001 /*8*/]));
								}
							}
						}
						else if (iVar1 == 0x00000002)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000000 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000000 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000001 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000001 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000002 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0x00000002 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xF1ABF0D4BF2D0A54(iVar6);
						}
					}
					Global_9C38[iParam0] = 0x00000001;
					Global_9B71[iParam0] = 0x00000001;
					bVar0 = 0x00000001;
					break;
				
				case 0x00000003:
					if (unk_0x0EB28750412C3A5A(Var3, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001) < 250f)
					{
						uVar4 = unk_0x57651D42225429CC(Var3, 25f, &(Var3.f_8[0x00000000 /*8*/]));
						if (unk_0xB39672D8C1F6BB48(uVar4))
						{
							if (iVar1 == 0x00000000)
							{
								unk_0xCADC8175C61F28E5(uVar4, 0x00000003);
								Global_9C38[iParam0] = 0x00000001;
								bVar0 = 0x00000001;
							}
							else if (iVar1 == 0x00000001)
							{
								if ((unk_0xD92EF3526CDA283F(uVar4) != 0x00000006 && unk_0xD92EF3526CDA283F(uVar4) != 0x00000007) && unk_0xD92EF3526CDA283F(uVar4) != 0x00000008)
								{
									unk_0xCADC8175C61F28E5(uVar4, 0x0000000A);
									Global_9C38[iParam0] = 0x00000001;
									bVar0 = 0x00000001;
								}
							}
							else if (iVar1 == 0x00000002)
							{
								bVar0 = 0x00000001;
							}
						}
					}
					break;
				
				case 0x00000004:
					if (iVar1 == 0x00000000)
					{
						unk_0x9E5FA221FDB148CD(Var3, 50f, Var3.f_4[0x00000001], Var3.f_4[0x00000000], 0x00000000);
						unk_0x0674E58A79778E99(&(Global_9500[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
					}
					else if (iVar1 == 0x00000001)
					{
						unk_0x2192A5725EC5808C(Var3, 50f, Var3.f_4[0x00000000], Var3.f_4[0x00000001], 0x00000001);
						unk_0x5D96D8530B3D0904(&(Global_9500[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
					}
					bVar0 = 0x00000001;
					break;
			}
			if (bVar0)
			{
				Global_96C5[iParam0] = 0x00000000;
				Global_978C[iParam0] = iVar1;
				if (!func_23())
				{
					if (!Global_99E1[iParam0])
					{
						Global_99E1[iParam0] = 0x00000001;
						Global_9AA8++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_23()
{
	if ((func_25() == 0xFFFFFFFF || func_25() == 0x000003E7) && !func_24() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_24()
{
	return Global_7831;
}

int func_25()
{
	return Global_7830;
}

int func_26(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		uParam0->f_4[iVar0] = 0x00000000;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_40[iVar0] = 0x00000000;
		uParam0->f_4B[iVar0] = 0x00000000;
		uParam0->f_5B[iVar0] = 0x00000000;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0x00000000;
	uParam0->f_21 = 0x00000000;
	StringCopy(&(uParam0->f_22), "", 32);
	StringCopy(&(uParam0->f_2A), "", 32);
	StringCopy(&(uParam0->f_32), "", 32);
	uParam0->f_3A = { 0f, 0f, 0f };
	uParam0->f_3D = { 0f, 0f, 0f };
	uParam0->f_44 = { 0f, 0f, 0f };
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_4A = 0f;
	uParam0->f_4F = { 0f, 0f, 0f };
	uParam0->f_52 = { 0f, 0f, 0f };
	uParam0->f_55 = { 0f, 0f, 0f };
	uParam0->f_58 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0x00000003:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0x00000004:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0x00000000:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 0x00000001:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 0x00000002:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_3A = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_3D = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_40[0x00000000] = 0x00000001;
			uParam0->f_40[0x00000001] = 0x00000000;
			break;
		
		case 0x00000005:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 0x000000C4:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			break;
		
		case 0x00000006:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 0x00000007:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x00000008:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x00000009:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x0000000A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x0000000B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 0x0000000C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "sunkcargoship", 32);
			uParam0->f_44 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_47 = { 190.75f, 31.25f, 21f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			break;
		
		case 0x0000000D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 0x0000000E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "smboat", 32);
			break;
		
		case 0x0000000F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 0x00000010:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000011:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000012:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000013:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000014:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 0x00000015:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_3A = { 814f, -1750f, 20f };
			uParam0->f_3D = { 790f, -1899f, 35f };
			uParam0->f_40[0x00000000] = 0x00000001;
			uParam0->f_40[0x00000001] = 0x00000000;
			uParam0->f_40[0x00000002] = 0x00000000;
			break;
		
		case 0x00000016:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 0x00000017:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 0x00000018:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 0x00000019:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 0x0000001A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 0x0000001B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 0x0000001C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 0x0000001D:
			uParam0->f_3 = 0x00000004;
			uParam0->f_4[0x00000000] = joaat("dt1_05_build1_h");
			uParam0->f_4[0x00000001] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x0000001E:
			uParam0->f_3 = 0x00000004;
			uParam0->f_4[0x00000000] = 0xF9526184;
			uParam0->f_4[0x00000001] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x0000001F:
			uParam0->f_3 = 0x00000004;
			uParam0->f_4[0x00000000] = 0xF4E5BC6D;
			uParam0->f_4[0x00000001] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 0x00000020:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x00000021:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x00000022:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 0x00000023:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 0x00000024:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 0x00000025:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_4F = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_52 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_55 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_58 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_5B[0x00000000] = 0x00000000;
			uParam0->f_5B[0x00000001] = 0x00000001;
			break;
		
		case 0x00000026:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 0x00000027:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 0x00000028:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 0x00000029:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 0x0000002A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 0x0000002B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 0x0000002C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 0x0000002D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 0x0000002E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 0x0000002F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 0x00000030:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_22), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_44 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_47 = { 13.6f, 20f, 8.9f };
			uParam0->f_4A = 48f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000001;
			break;
		
		case 0x00000031:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 0x00000032:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_4F = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_52 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 0x00000037:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 0x00000033:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "farm_burnt", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 0x00000034:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 0x00000035:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 0x00000036:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 0x00000038:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x00000039:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x0000003A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x0000003B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x0000003C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 0x0000003D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 0x0000003E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 0x0000003F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 0x00000040:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 0x00000041:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 0x00000042:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 0x00000043:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 0x00000044:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 0x00000045:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 0x00000046:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x00000047:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x00000048:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x00000049:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x0000004A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x0000004B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 0x0000004C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 0x00000069:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 0x0000006A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 0x0000006B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 0x0000006C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 0x0000006D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 0x0000006E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 0x0000006F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 0x00000070:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 0x0000004D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_55 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_58 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_5B[0x00000000] = 0x00000000;
			uParam0->f_5B[0x00000001] = 0x00000001;
			uParam0->f_5B[0x00000002] = 0x00000000;
			break;
		
		case 0x0000004E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_21 = 0x00000000;
			break;
		
		case 0x0000004F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 0x00000050:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 0x00000071:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 0x00000072:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 0x00000073:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 0x00000057:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 0x00000058:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_4F = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_52 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 0x00000059:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 0x0000005A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 0x0000005B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 0x0000005E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 0x0000005F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_3A = { 1206.8f, 1803f, 43.9f };
			uParam0->f_3D = { 1329f, 2060.4f, 143.9f };
			uParam0->f_40[0x00000000] = 0x00000000;
			uParam0->f_40[0x00000001] = 0x00000001;
			uParam0->f_40[0x00000002] = 0x00000000;
			break;
		
		case 0x00000068:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 0x00000067:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 0x00000066:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 0x0000005C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 0x0000005D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 0x00000076:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 0x00000074:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 0x00000075:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 0x00000077:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 0x00000078:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 0x0000007A:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 0x00000079:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x0000007B:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x0000007C:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x000000AA:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x000000AB:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 0x0000007D:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 0x000000A4:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A5:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A6:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A7:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A8:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A9:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x0000007E:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x0000007F:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000080:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000081:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000082:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000083:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000084:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000085:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000086:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x000000B3:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_44 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_47 = { 5.5f, 3f, 2f };
			uParam0->f_4A = -10f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			break;
		
		case 0x000000AE:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_32), "csr_inMission", 32);
			uParam0->f_21 = 0x00000000;
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 0x000000AF:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_44 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_47 = { 2.5f, 3f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000000;
			break;
		
		case 0x000000B0:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_44 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_47 = { 3f, 1f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000000;
			break;
		
		case 0x000000B1:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_44 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_47 = { 1f, 3f, 2f };
			uParam0->f_4A = -45f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000000;
			break;
		
		case 0x000000B2:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 0x000000AD:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "fakeint", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 0x000000B4:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 0x000000B5:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_2A), "v_hospital", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 0x00000087:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000088:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000089:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008A:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008B:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008C:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008D:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008E:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008F:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000090:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000091:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000092:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000093:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "vb_30_murder", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 0x00000094:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 0x00000095:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 0x00000096:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 0x00000097:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ufo", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 0x00000098:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ufo_eye", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 0x00000099:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 0x0000009A:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 0x0000009B:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 0x000000AC:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_2A), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 0x000000B6:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_4F = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_52 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_55 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_58 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_5B[0x00000000] = 0x00000000;
			uParam0->f_5B[0x00000001] = 0x00000001;
			uParam0->f_5B[0x00000002] = 0x00000001;
			break;
		
		case 0x000000B7:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_4F = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_52 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 0x000000B8:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_4F = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_52 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 0x000000B9:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_4F = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_52 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 0x000000BB:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_4F = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_52 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 0x000000BA:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_4F = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_52 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 0x000000BC:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_4F = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_52 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 0x00000051:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 0x00000052:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 0x00000053:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 0x00000054:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 0x00000055:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 0x00000056:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 0x000000BD:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 0x000000BE:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 0x000000BF:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0x00000000] = 0x00000001;
			uParam0->f_5B[0x00000001] = 0x00000000;
			break;
		
		case 0x000000C0:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0x00000000] = 0x00000001;
			uParam0->f_5B[0x00000001] = 0x00000000;
			break;
		
		case 0x000000C1:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0x00000000] = 0x00000001;
			uParam0->f_5B[0x00000001] = 0x00000000;
			break;
		
		case 0x000000C2:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 0x00000061:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 0x00000062:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 0x00000063:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 0x00000064:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 0x00000065:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 0x000000C3:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 0x000000C5:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 0x0000009C:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x0000009D:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x0000009E:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A3:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x0000009F:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A1:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A2:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A0:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x00000060:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 0x00000001;
}

void func_27()
{
	int iVar0;
	
	func_32(0x0000001B, 0x00000000);
	unk_0x536F1BE96C726C4B(2479.875f, 4980.868f, 44.82052f, 60f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	iLocal_145 = unk_0x122AAB0B1D6F55AD(joaat("burrito"), 2479.579f, 4980.503f, 44.8051f, 341.8158f, 0x00000001, 0x00000001, 0x00000000);
	unk_0xC6A6B4DDD6DC073A(iLocal_145, 0x00000001);
	unk_0x446EA2500F021666(iLocal_145, 0x00000002);
	unk_0xB9FD7450C0DAB575(iLocal_145, 0x40A00000);
	if (iLocal_149 < 0x00000005)
	{
		func_29(0x00000001, 0x00000001, 0x00000004);
		func_29(0x00000001, 0x00000001, 0x00000005);
		func_29(0x00000001, 0x00000001, 0x00000002);
		func_29(0x00000001, 0x00000001, 0x00000001);
		func_29(0x00000001, 0x00000001, 0x00000006);
		func_29(0x00000001, 0x00000001, 0x00000007);
		func_29(0x00000001, 0x00000001, 0x00000003);
		func_29(0x00000001, 0x00000001, 0x00000000);
		func_29(0x00000001, 0x00000001, 0x00000008);
		func_29(0x00000001, 0x00000001, 0x00000009);
	}
	if (iLocal_149 < 0x00000006)
	{
		func_29(0x00000002, 0x00000001, 0x0000000A);
		func_29(0x00000002, 0x00000001, 0x0000000B);
		func_29(0x00000002, 0x00000001, 0x00000012);
		func_29(0x00000002, 0x00000001, 0x00000013);
	}
	if (iLocal_149 < 0x00000007)
	{
		func_29(0x00000002, 0x00000001, 0x0000000C);
		func_29(0x00000002, 0x00000001, 0x0000000D);
		func_29(0x00000002, 0x00000001, 0x0000000E);
		func_29(0x00000002, 0x00000001, 0x0000000F);
		func_29(0x00000002, 0x00000001, 0x00000010);
		func_29(0x00000002, 0x00000001, 0x00000011);
		func_29(0x00000002, 0x00000001, 0x00000014);
		func_29(0x00000005, 0x00000001, 0x00000017);
	}
	if (iLocal_149 == 0x00000007)
	{
		unk_0x3F423BF5B8125A50("DEAD");
		while (!unk_0xB4AE0788C1587752("DEAD"))
		{
			func_28(0x00000143, 0x00000001);
		}
		Local_113[0x0000000F /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_y_methhead_01"), 2436.901f, 4959.1f, 45.8106f, 209.7559f, 0x00000001, 0x00000001);
		unk_0xC6EB89C59F2AF6B8(Local_113[0x0000000F /*33*/], "DEAD", "DEAD_C", 1000f, -1000f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xF895E10BF4C72645(Local_113[0x0000000F /*33*/], 0x00000001, 0x00000000);
		unk_0xCAC78D14D05349E7(Local_113[0x0000000F /*33*/], 0x00000001);
		Local_113[0x00000010 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_m_hillbilly_01"), 2440.266f, 4970.705f, 45.8306f, 15.7982f, 0x00000001, 0x00000001);
		unk_0xC6EB89C59F2AF6B8(Local_113[0x00000010 /*33*/], "DEAD", "DEAD_D", 1000f, -1000f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xF895E10BF4C72645(Local_113[0x00000010 /*33*/], 0x00000001, 0x00000000);
		unk_0xCAC78D14D05349E7(Local_113[0x00000010 /*33*/], 0x00000001);
		Local_113[0x00000011 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_m_hillbilly_02"), 2443.42f, 4974.523f, 45.8106f, 121.834f, 0x00000001, 0x00000001);
		unk_0xC6EB89C59F2AF6B8(Local_113[0x00000011 /*33*/], "DEAD", "DEAD_E", 1000f, -1000f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xF895E10BF4C72645(Local_113[0x00000011 /*33*/], 0x00000001, 0x00000000);
		unk_0xCAC78D14D05349E7(Local_113[0x00000011 /*33*/], 0x00000001);
		Local_113[0x00000012 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_y_methhead_01"), 2448.888f, 4971.561f, 45.8106f, 194.7676f, 0x00000001, 0x00000001);
		unk_0xC6EB89C59F2AF6B8(Local_113[0x00000012 /*33*/], "DEAD", "DEAD_G", 1000f, -1000f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xF895E10BF4C72645(Local_113[0x00000012 /*33*/], 0x00000001, 0x00000000);
		unk_0xCAC78D14D05349E7(Local_113[0x00000012 /*33*/], 0x00000001);
		while (((!unk_0xB4ECF989E2C1DAC8(Local_113[0x0000000F /*33*/], "DEAD", "DEAD_C", 0x00000003) || !unk_0xB4ECF989E2C1DAC8(Local_113[0x00000010 /*33*/], "DEAD", "DEAD_D", 0x00000003)) || !unk_0xB4ECF989E2C1DAC8(Local_113[0x00000011 /*33*/], "DEAD", "DEAD_E", 0x00000003)) || !unk_0xB4ECF989E2C1DAC8(Local_113[0x00000012 /*33*/], "DEAD", "DEAD_G", 0x00000003))
		{
			func_28(0x0000D447, 0x00000001);
			if (((!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000F /*33*/]) && !unk_0xEB6A8945D1AC98A1(Local_113[0x00000010 /*33*/])) && !unk_0xEB6A8945D1AC98A1(Local_113[0x00000011 /*33*/])) && !unk_0xEB6A8945D1AC98A1(Local_113[0x00000012 /*33*/]))
			{
			}
		}
		unk_0xD458AC1C1D29C3B4(Local_113[0x0000000F /*33*/], 0x00000000, 0x00000000);
		unk_0xD458AC1C1D29C3B4(Local_113[0x00000010 /*33*/], 0x00000000, 0x00000000);
		unk_0xD458AC1C1D29C3B4(Local_113[0x00000011 /*33*/], 0x00000000, 0x00000000);
		unk_0xD458AC1C1D29C3B4(Local_113[0x00000012 /*33*/], 0x00000000, 0x00000000);
		unk_0x8D17794CE3273D70("DEAD");
	}
	func_32(0x00000017, 0x00000000);
	iVar0 = 0x00000000;
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000008);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
	iLocal_168 = unk_0xA6FF0828D17CF374(joaat("pickup_health_standard"), 2446.896f, 4990.972f, 45.5477f, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
	if (!unk_0x49083FDB78AC0509(iLocal_148))
	{
		iLocal_148 = unk_0x544B74C043CE9948(2464.956f, 4990.051f, 44.48415f, 2.5f, 3.125f, 2.0625f, 0f, 0x00000000, 0x00000007);
	}
	iLocal_169[0x00000000] = unk_0x2D7B5CDDF12654D2(joaat("pickup_health_standard"), 2444.497f, 4975.956f, 50.565f, 0f, 0f, 100f, iVar0, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
	unk_0x201D37E7F281A9D1(iLocal_169[0x00000000], "V_8_Bed1Rm");
	iLocal_169[0x00000001] = unk_0x2D7B5CDDF12654D2(joaat("pickup_health_standard"), 2443.4f, 4978.52f, 46.8107f, 0f, 0f, 100f, iVar0, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
	unk_0x201D37E7F281A9D1(iLocal_169[0x00000001], "V_8_KitchnRm");
	iLocal_169[0x00000003] = unk_0x2D7B5CDDF12654D2(joaat("pickup_health_standard"), 2441.028f, 4963.851f, 46.5605f, 0f, 0f, -80.6f, iVar0, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
	unk_0x201D37E7F281A9D1(iLocal_169[0x00000003], "V_8_StudyRm");
	iLocal_169[0x00000004] = unk_0x2D7B5CDDF12654D2(joaat("pickup_health_standard"), 2435.165f, 4971.467f, 45.91f, 0f, 0f, -50.4f, iVar0, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
	unk_0x201D37E7F281A9D1(iLocal_169[0x00000004], "V_8_Hall2Rm");
	iVar0 = 0x00000000;
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
	iLocal_169[0x00000002] = unk_0x2D7B5CDDF12654D2(joaat("pickup_weapon_sawnoffshotgun"), 2438.788f, 4970.79f, 50.565f, 0f, 0f, 0f, iVar0, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
	unk_0x201D37E7F281A9D1(iLocal_169[0x00000002], "V_8_Bed1Rm");
}

void func_28(int iParam0, int iParam1)
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	SYSTEM::WAIT(0x00000000);
}

void func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = iParam2;
	Local_113[iVar0 /*33*/].f_1 = iParam0;
	Local_113[iVar0 /*33*/].f_3 = iParam1;
	Local_113[iVar0 /*33*/].f_2 = iParam2;
	Local_113[iVar0 /*33*/].f_5 = 0x00000000;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 0x00000001)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_31(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/] == iParam0)
		{
			Local_153[iVar0 /*6*/].f_2 = 0xFFFFFFFF;
			if (!bParam1)
			{
				Local_153[iVar0 /*6*/].f_1 = 0x00000000;
			}
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 0x00000001)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 0x00000000)
		{
			Local_153[iVar0 /*6*/].f_1 = 0x00000001;
			Local_153[iVar0 /*6*/] = iParam0;
			Local_153[iVar0 /*6*/].f_2 = 0x00000000;
			Local_153[iVar0 /*6*/].f_3 = iParam1;
			Local_153[iVar0 /*6*/].f_4 = 0x00000000;
			Local_153[iVar0 /*6*/].f_5 = 0x00000000;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_33(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000001;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
		{
			if (!unk_0x8B38C0DAEEDB5F9C(iVar0))
			{
				unk_0xE0C0351D5B931E37(iVar0, fParam0, iParam1, 0x00000000);
				return 0x00000000;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	if (unk_0x4024663A44BC1535(unk_0x16F2683693E537C9()))
	{
		return 0x00000001;
	}
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		if (unk_0x8B38C0DAEEDB5F9C(iVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_34()
{
	return Global_181EC.f_159 > 0x00000000;
}

int func_35(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)
{
	if (!iLocal_574)
	{
		iLocal_574 = 0x00000001;
		vLocal_391[0x00000000 /*3*/] = iParam1;
		vLocal_391[0x00000000 /*3*/].f_1 = iParam2;
		vLocal_391[0x00000000 /*3*/].f_2 = sParam3;
		vLocal_391[0x00000001 /*3*/] = iParam4;
		vLocal_391[0x00000001 /*3*/].f_1 = iParam5;
		vLocal_391[0x00000001 /*3*/].f_2 = sParam6;
		vLocal_391[0x00000002 /*3*/] = iParam7;
		vLocal_391[0x00000002 /*3*/].f_1 = iParam8;
		vLocal_391[0x00000002 /*3*/].f_2 = sParam9;
		vLocal_391[0x00000003 /*3*/] = iParam10;
		vLocal_391[0x00000003 /*3*/].f_1 = iParam11;
		vLocal_391[0x00000003 /*3*/].f_2 = sParam12;
		func_64(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_61(iParam1, iParam2, sParam3);
		if (iParam4 != 0xFFFFFFFF)
		{
			func_61(iParam4, iParam5, sParam6);
		}
		if (iParam7 != 0xFFFFFFFF)
		{
			func_61(iParam7, iParam8, sParam9);
		}
		if (iParam10 != 0xFFFFFFFF)
		{
			func_61(iParam10, iParam11, sParam12);
		}
		if (!func_59())
		{
			if (unk_0xD17F06053799A7CA() && unk_0x04E6B3EAA8742BFA())
			{
				if (func_36(&uLocal_409, "CHI2AUD", sParam0, iParam13, 0x00000001, 0x00000000, 0x00000000))
				{
					iLocal_392 = 0x00000001;
					return 0x00000001;
				}
			}
			else if (func_36(&uLocal_409, "CHI2AUD", sParam0, iParam13, 0x00000000, 0x00000000, 0x00000000))
			{
				iLocal_392 = 0x00000000;
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_36(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_58(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_37(sParam2, iParam3, 0x00000000);
}

int func_37(char* sParam0, int iParam1, bool bParam2)
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
					func_57();
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
		if (func_56(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_55();
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
				func_47();
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
				if (func_46())
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
			if (func_45())
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
			func_44();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_43();
		func_38();
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
		func_57();
	}
	return 0x00000000;
}

void func_38()
{
	if (!func_39())
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

int func_39()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_42())
	{
		return 0x00000000;
	}
	if (func_40(unk_0xD803B885F5E47A62()))
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

bool func_40(int iParam0)
{
	return func_41(iParam0, 0x00000014);
}

bool func_41(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_42()
{
	return 0xFFFFFFFF;
}

void func_43()
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

void func_44()
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

int func_45()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_46()
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

void func_47()
{
	if (func_54(0x0000000E))
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
		Global_4C1E = func_48();
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

int func_48()
{
	func_49();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_49()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_52(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_51(unk_0x16F2683693E537C9());
			if (func_50(iVar0) && (!func_54(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_50(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_50(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_52(int iParam0)
{
	if (func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_53(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_54(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_55()
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

bool func_56(int iParam0, int iParam1)
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

void func_57()
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

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_59()
{
	vector3 vVar0;
	
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	if (func_60())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x1CFAC524932A967E(&vVar0);
		if (Global_4BE7 == 0x00000000)
		{
			if (vVar0.y > -119f)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_60()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_61(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_408)
	{
		if (iLocal_408[iVar0] == iParam1)
		{
			func_63(&uLocal_409, iVar0);
			iLocal_408[iVar0] = 0x00000000;
		}
		iVar0++;
	}
	if (iLocal_408[iParam0] != 0x00000000)
	{
		func_63(&uLocal_409, iParam0);
	}
	func_62(&uLocal_409, iParam0, iParam1, sParam2, 0x00000000, 0x00000001);
	iLocal_408[iParam0] = iParam1;
}

void func_62(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_63(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

void func_64(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (unk_0xEA6BC48857E0AC4C(sLocal_51) || !unk_0x7F8A39872A07D2CE(sLocal_51, sParam0))
	{
		sLocal_51 = sParam0;
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000F)
		{
			if (Local_77[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					func_63(&Local_77, iVar0);
				}
			}
			iVar0++;
		}
	}
}

int func_65()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_66(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9)
{
	if (!unk_0xD17F06053799A7CA() || unk_0x04E6B3EAA8742BFA())
	{
		if (func_68(iParam1) != iParam2 || iParam2 == 0x00000000)
		{
			func_61(iParam1, iParam2, sParam3);
		}
		if (iParam4 != 0xFFFFFFFF)
		{
			if (func_68(iParam4) != iParam5 || iParam5 == 0x00000000)
			{
				func_61(iParam4, iParam5, sParam6);
			}
		}
		if (iParam7 != 0xFFFFFFFF)
		{
			if (func_68(iParam7) != iParam8 || iParam8 == 0x00000000)
			{
				func_61(iParam7, iParam8, sParam9);
			}
		}
		if (func_67(&uLocal_409, 0x00000027, "CHI2AUD", sParam0, 0x00000009, 0x00000000, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_67(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_58(uParam0, iParam1, sParam2, iParam5, iParam6, 0x00000000);
	Global_5175 = 0x00000000;
	Global_514C = 0x00000001;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_514A = 0x00000000;
	Global_5179 = 0x00000000;
	Global_517B = 0x00000000;
	Global_280001 = 0x00000000;
	return func_37(sParam3, iParam4, bParam7);
}

int func_68(int iParam0)
{
	return iLocal_408[iParam0];
}

int func_69(int iParam0)
{
	if ((Global_559F || Global_559E) || Global_55A0)
	{
		if (iParam0 == 0x00000082)
		{
		}
		else
		{
			return 0x00000000;
		}
	}
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		if (Global_4C1E.f_1 == 0x0000000A)
		{
			if (Global_1A0F == iParam0)
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
	return 0x00000000;
}

void func_70()
{
	Global_4CD7 = 0x00000000;
	func_71();
}

void func_71()
{
	if (unk_0x1EE04CEA36EF313B() || Global_4C1D == 0x00000001)
	{
		unk_0x8BD0DC8EEFDC56D8();
		Global_5538 = 0x00000000;
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
		Global_4C1E.f_1 = Global_4C20;
		return;
	}
}

void func_72()
{
	Global_4CD7 = 0x00000000;
	func_57();
}

float func_73(int iParam0, vector3 vParam1, bool bParam2)
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

int func_74(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_75(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	func_76(vParam0, vParam1, fParam2, vParam3, fParam4, vParam5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_76(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = 0x00000000;
	}
	bVar2 = 0x00000001;
	iVar3 = 0x00000000;
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0xAF6690C489CC6203(iVar0))
		{
			unk_0x73270B3C9CC833FD(iVar0, 0x00000001, 0x00000000);
			iVar3 = 0x00000001;
		}
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			if (bParam10)
			{
				func_83(iVar0);
			}
			if (unk_0x3D1053F9EB43B7AD(iVar0, vParam0, vParam1, fParam2, 0x00000000, 0x00000001, 0x00000000))
			{
				bVar1 = 0x00000001;
			}
			else
			{
				vVar6 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_80(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = 0x00000001;
					}
				}
			}
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (unk_0x4906F8A34E9F4814(iVar0, joaat("taxi")))
				{
					if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) != unk_0x16F2683693E537C9() && unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) != 0x00000000)
					{
						if (unk_0x0EB28750412C3A5A(vParam0 + vParam1 / Vector(2f, 2f, 2f), unk_0x68F4C0EC296D3901(iVar0, 0x00000001), 0x00000001) < 20f)
						{
							bVar1 = 0x00000001;
							bVar2 = 0x00000000;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_78(iVar0, func_48(), 0x00000001))
				{
					bVar1 = 0x00000000;
				}
			}
			if (bVar1)
			{
				if (!func_77(vParam5))
				{
					if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
					{
						iVar7 = unk_0x134B62B726CEC8E6(iVar0);
						unk_0x064C1B2FD84B6ED5(iVar0, &vVar4, &vVar5);
						if (unk_0xAFB8495D36825275(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							vParam5 = { vParam5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							vParam5 = { vParam5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = 0x00000000;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = 0x00000000;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = 0x00000000;
						}
					}
				}
				if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
				{
					if (bVar2)
					{
						unk_0x28F5E4DA506AC0CA(vParam3, 5f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xD8F6A53F4799FAFE(iVar0, fParam4);
						unk_0xA47B46945FF6DE74(iVar0, vParam3, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
						if (bParam9)
						{
							unk_0x56FDC9ADE35F7DB0(iVar0, 0x00000000, 0x00000001, 0x00000000);
							unk_0x05CA0E7946B27A19(iVar0, 0x00000001);
						}
					}
					else
					{
						if (!unk_0xAF6690C489CC6203(iVar0) || !unk_0x9C77D2D0559097F0(iVar0, 0x00000001))
						{
							unk_0x73270B3C9CC833FD(iVar0, 0x00000001, 0x00000001);
						}
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
						{
							unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iVar0, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						}
						unk_0xA954465BA6FDEFE2(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0x10F452EDECF82313(vParam0, vParam1, fParam2, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (iVar3 == 0x00000001)
			{
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (unk_0xAF6690C489CC6203(iVar0))
					{
						unk_0x046C362CF15F1935(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xAF6690C489CC6203(iVar0))
			{
				unk_0x73270B3C9CC833FD(iVar0, 0x00000001, 0x00000000);
			}
			iVar8 = unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
			{
				unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			}
			iVar9 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
			if (iVar9 <= 0x00000002)
			{
				iVar8 = unk_0xA30B8362589C124A(iVar0, 0x00000000, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
				{
					unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				}
			}
			if (iVar9 <= 0x00000004)
			{
				iVar8 = unk_0xA30B8362589C124A(iVar0, 0x00000001, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
				{
					unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				}
				iVar8 = unk_0xA30B8362589C124A(iVar0, 0x00000002, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
				{
					unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				}
			}
			unk_0xA954465BA6FDEFE2(&iVar0);
		}
	}
}

int func_77(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_78(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_79(iParam1, iVar0, &sVar1, &iVar2))
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

int func_79(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_80(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_82(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &Var7, &Var8);
		vVar6[0x00000000 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[0x00000001 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[0x00000002 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[0x00000003 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_81(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar2, vVar3) || func_81(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar3, vVar5)) || func_81(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar4, vVar5)) || func_81(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar2, vVar4)) || func_81(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar2, vVar3)) || func_81(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar3, vVar5)) || func_81(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar4, vVar5)) || func_81(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar2, vVar4)) || func_81(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar2, vVar3)) || func_81(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar3, vVar5)) || func_81(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar4, vVar5)) || func_81(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar2, vVar4)) || func_81(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar2, vVar3)) || func_81(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar3, vVar5)) || func_81(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar4, vVar5)) || func_81(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar2, vVar4))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_81(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_82(vector3 vParam0)
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

void func_83(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0x6EE94F60DA2A2273(iParam0) <= 200f)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 500f);
			}
			if (unk_0xD96C5EC6FCB061BA(iParam0) <= 700f)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 900f);
			}
			if (unk_0x7F6DC62EA9922664(iParam0) < 0x000000C8)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 500f);
			}
		}
	}
}

void func_84()
{
	if (iLocal_149 >= 0x00000003)
	{
		if (iLocal_149 > 0x00000003)
		{
			func_109(&Local_119, &vLocal_130, vLocal_123, vLocal_124, vLocal_125, vLocal_126, vLocal_122, vLocal_129, vLocal_120, vLocal_121, vLocal_127, vLocal_128);
		}
		func_85();
	}
}

void func_85()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_119)
	{
		if ((!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]) && !unk_0x28072FDD60CE3A6E(Local_113[iVar0 /*33*/], 0x00000001)) || Local_119[iVar0 /*24*/].f_3 == 0x00000001)
		{
			switch (Local_119[iVar0 /*24*/].f_3)
			{
				case 0x00000001:
					switch (Local_113[iVar0 /*33*/].f_1)
					{
						case 0x00000001:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 0x00000002:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2451.818f, 4985.704f, 50.5678f, 227.842f, joaat("weapon_assaultrifle"), 0x00000001, 0x00000000))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000001, 0x00000000);
										func_105(iVar0, 0x00000005, 0x00000000, 0x00000000);
									}
									break;
								
								case 0x00000001:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2455.085f, 4974.466f, 50.5677f, 246.051f, joaat("weapon_assaultrifle"), 0x00000001, 0x00000000))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000001, 0x00000000);
										func_105(iVar0, 0x0000000E, 0x00000000, 0x00000000);
									}
									break;
								
								case 0x00000006:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2461.609f, 4993.675f, 44.9821f, -90f, joaat("weapon_assaultrifle"), 0x00000001, 0x00000000))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000000, 0x00000000);
										func_105(iVar0, 0x00000007, 0x00000000, 0x00000000);
										Local_113[iVar0 /*33*/].f_4 = 0x00000007;
									}
									break;
								
								case 0x00000007:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2462.887f, 4993.614f, 44.9474f, 89.8899f, joaat("weapon_assaultrifle"), 0x00000001, 0x00000000))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000000, 0x00000000);
										func_105(iVar0, 0x00000007, 0x00000001, 0x00000000);
										Local_113[iVar0 /*33*/].f_4 = 0x00000007;
									}
									break;
								
								case 0x00000003:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2460.651f, 4970.813f, 45.5765f, 240.2054f, joaat("weapon_assaultrifle"), 0x00000000, 0x00000000))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000001, 0x00000000, 0x00000000);
										func_105(iVar0, 0x00000010, 0x00000000, 0x00000000);
									}
									break;
								
								case 0x00000000:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2443.138f, 4966.709f, 50.5677f, 246.051f, joaat("weapon_assaultrifle"), 0x00000001, 0x00000000))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000001, 0x00000001, 0x00000000);
										func_105(iVar0, 0x0000000F, 0x00000000, 0x00000000);
									}
									break;
								
								case 0x00000004:
									if (iLocal_149 == 0x00000003)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2457.098f, 4954.283f, 44.1304f, 316.5498f, joaat("weapon_pistol"), 0x00000000, 0x00000000))
										{
											Local_113[iVar0 /*33*/].f_14 = unk_0x7707E48765093646(joaat("prop_cs_fertilizer"), 2460.098f, 4957.283f, 44.1304f, 0x00000001, 0x00000001, 0x00000000);
											Local_113[iVar0 /*33*/].f_5 = 0x00000001;
											func_105(iVar0, 0x00000003, 0x00000000, 0x00000000);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2478.32f, 4982.325f, 44.8913f, 49.5021f, joaat("weapon_pistol"), 0x00000000, 0x00000000))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000000, 0x00000000);
										Local_113[iVar0 /*33*/].f_14 = unk_0x7707E48765093646(joaat("prop_cs_fertilizer"), 2478.444f, 4976.921f, 44.5614f, 0x00000001, 0x00000001, 0x00000000);
										Local_113[iVar0 /*33*/].f_5 = 0x00000001;
										func_105(iVar0, 0x00000002, 0x00000000, 0x00000000);
									}
									break;
								
								case 0x00000005:
									if (iLocal_149 == 0x00000003)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2454.753f, 4951.719f, 44.1445f, 316.5541f, joaat("weapon_pistol"), 0x00000000, 0x00000000))
										{
											Local_113[iVar0 /*33*/].f_14 = unk_0x7707E48765093646(joaat("prop_cs_fertilizer"), 2455.753f, 4952.719f, 44.1445f, 0x00000001, 0x00000001, 0x00000000);
											Local_113[iVar0 /*33*/].f_5 = 0x00000001;
											func_105(iVar0, 0x00000003, 0x00000000, 0x00000000);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2475.873f, 4984.426f, 45.0916f, 45.8993f, joaat("weapon_pistol"), 0x00000000, 0x00000000))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000000, 0x00000000);
										Local_113[iVar0 /*33*/].f_14 = unk_0x7707E48765093646(joaat("prop_cs_fertilizer"), 2476.582f, 4978.492f, 44.5734f, 0x00000001, 0x00000001, 0x00000000);
										Local_113[iVar0 /*33*/].f_5++;
										func_105(iVar0, 0x00000002, 0x00000000, 0x00000000);
									}
									break;
								
								case 0x00000008:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 0x00000001, 0x00000000))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000000, 0x00000000);
										Local_113[iVar0 /*33*/].f_E = unk_0xE9744DB7B8CA6965(2505.451f, 4970.663f, 43.548f, 0f, 0f, 88.725f, 0x00000002);
										func_104(Local_113[iVar0 /*33*/], 20f, 5f, 90f, -90f, 60f);
										unk_0x4F39CC3882DD074E(Local_113[iVar0 /*33*/], "A_M_M_HillBilly_02_WHITE_MINI_02");
										unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_E, "misschinese2_bank5", "peds_shootcans_a", 1000f, -4f, 0x00000001, 0x00000000, 0x447A0000, 0x00000000);
										unk_0xC90224D9E95E5E3A(Local_113[iVar0 /*33*/].f_E, 0x00000001);
										unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0x00000000, 0x00000000);
										func_105(iVar0, 0x00000004, 0x00000000, Local_113[iVar0 /*33*/].f_E);
										func_32(0x00000007, 0x00000000);
									}
									break;
								
								case 0x00000009:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 0x00000001, 0x00000000))
									{
										Local_113[iVar0 /*33*/].f_E = unk_0xE9744DB7B8CA6965(2507.879f, 4970.188f, 43.5f, 0f, 0f, 93.42f, 0x00000002);
										unk_0xC90224D9E95E5E3A(Local_113[iVar0 /*33*/].f_E, 0x00000001);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000000, 0x00000000);
										unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_E, "misschinese2_bank5", "peds_shootcans_b", 1000f, -4f, 0x00000001, 0x00000000, 0x447A0000, 0x00000000);
										unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0x00000000, 0x00000000);
										func_105(iVar0, 0x00000004, 0x00000000, Local_113[iVar0 /*33*/].f_E);
									}
									break;
							}
							if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/]))
							{
								unk_0xE8832A9E16A57A1F(Local_113[iVar0 /*33*/], 0x00000001, 0x00000001);
								unk_0x2051F535F4A99479(Local_113[iVar0 /*33*/], 0x00000001);
							}
							break;
						
						case 0x00000002:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 0x0000000A:
									if (iLocal_149 < 0x00000005)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2458.57f, 4987.584f, 45.8107f, 233.842f, joaat("weapon_pistol"), 0x00000000, 0x00000000))
										{
											func_105(iVar0, 0x0000000E, 0x00000000, 0x00000000);
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000001, 0x00000000);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2454.627f, 4995.726f, 45.2011f, 233.842f, joaat("weapon_pistol"), 0x00000000, 0x00000000))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000001, 0x00000000);
										func_105(iVar0, 0x00000017, 0x00000000, 0x00000000);
									}
									break;
								
								case 0x0000000B:
									if (iLocal_149 < 0x00000005)
									{
										if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2442.994f, 4985.164f, 45.8103f, 303.409f, joaat("weapon_microsmg"), 0x00000000, 0x00000000))
										{
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000001, 0x00000001, 0x00000000);
											func_105(iVar0, 0x0000000E, 0x00000000, 0x00000000);
										}
									}
									else if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2450.371f, 4995.103f, 44.9282f, 303.409f, joaat("weapon_microsmg"), 0x00000000, 0x00000000))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000001, 0x00000001, 0x00000000);
										func_105(iVar0, 0x00000017, 0x00000000, 0x00000000);
									}
									break;
								
								case 0x0000000C:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2433.124f, 4967.804f, 46.293f, 63.7673f, joaat("weapon_pumpshotgun"), 0x00000000, 0x00000001))
									{
										func_105(iVar0, 0x00000019, 0x00000000, 0x00000000);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000001, 0x00000000);
									}
									break;
								
								case 0x0000000D:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2432.091f, 4968.833f, 46.298f, 63.7673f, joaat("weapon_pistol"), 0x00000000, 0x00000001))
									{
										func_105(iVar0, 0x00000019, 0x00000000, 0x00000000);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000001, 0x00000000);
									}
									break;
								
								case 0x0000000E:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2431.485f, 4964.779f, 45.8106f, -137.5f, joaat("weapon_pistol"), 0x00000000, 0x00000001))
									{
										func_105(iVar0, 0x00000019, 0x00000000, 0x00000000);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000001, 0x00000000);
									}
									break;
								
								case 0x0000000F:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2440.385f, 4965.429f, 45.8106f, 63.7673f, joaat("weapon_pumpshotgun"), 0x00000000, 0x00000001))
									{
										func_105(iVar0, 0x00000019, 0x00000000, 0x00000000);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000001, 0x00000000);
									}
									break;
								
								case 0x00000010:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2439.741f, 4964.89f, 45.8106f, 130.3988f, joaat("weapon_microsmg"), 0x00000000, 0x00000001))
									{
										func_105(iVar0, 0x00000019, 0x00000000, 0x00000000);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000001, 0x00000000);
									}
									break;
								
								case 0x00000011:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2438.707f, 4964.094f, 45.8106f, 127.6523f, joaat("weapon_pistol"), 0x00000000, 0x00000001))
									{
										unk_0x298903DD96203C2C(Local_113[iVar0 /*33*/], 0x00000005);
										func_105(iVar0, 0x00000019, 0x00000000, 0x00000000);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000001, 0x00000000);
									}
									break;
								
								case 0x00000012:
									if (iLocal_149 < 0x00000005)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2440.929f, 4976.921f, 45.8106f, -130f, joaat("weapon_pistol"), 0x00000000, 0x00000001))
										{
											func_105(iVar0, 0x00000007, 0x00000000, 0x00000000);
											Local_113[iVar0 /*33*/].f_4 = 0x00000007;
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000000, 0x00000000);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2452.052f, 4956.689f, 43.8957f, 230.7673f, joaat("weapon_pistol"), 0x00000000, 0x00000001))
									{
										func_105(iVar0, 0x00000017, 0x00000000, 0x00000000);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000000, 0x00000000);
									}
									break;
								
								case 0x00000013:
									if (iLocal_149 < 0x00000005)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2442.926f, 4975.148f, 45.8106f, 46.7673f, joaat("weapon_pistol"), 0x00000000, 0x00000001))
										{
											func_105(iVar0, 0x00000007, 0x00000000, 0x00000000);
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000000, 0x00000000);
											Local_113[iVar0 /*33*/].f_4 = 0x00000007;
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2449.338f, 4954.127f, 43.9299f, 46.7673f, joaat("weapon_pistol"), 0x00000000, 0x00000001))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000000, 0x00000000, 0x00000000);
										func_105(iVar0, 0x00000017, 0x00000000, 0x00000000);
									}
									break;
								
								case 0x00000014:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2449.114f, 4981.984f, 45.8102f, 130.7673f, joaat("weapon_microsmg"), 0x00000000, 0x00000001))
									{
										func_105(iVar0, 0x00000007, 0x00000000, 0x00000000);
										Local_113[iVar0 /*33*/].f_4 = 0x00000020;
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000001, 0x00000000, 0x00000000);
									}
									break;
								
								case 0x00000015:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2447.553f, 4980.515f, 45.8096f, 311.7673f, joaat("weapon_microsmg"), 0x00000000, 0x00000001))
									{
										func_105(iVar0, 0x00000007, 0x00000000, 0x00000000);
										Local_113[iVar0 /*33*/].f_4 = 0x00000007;
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0x00000001, 0x00000000, 0x00000000);
									}
									break;
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
							{
								unk_0xE8832A9E16A57A1F(Local_113[iVar0 /*33*/], 0x00000001, 0x00000001);
							}
							break;
						
						case 0x00000005:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 0x00000016:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2439.258f, 4976.201f, 45.8106f, 116.815f, joaat("weapon_unarmed"), 0x00000000, 0x00000001))
									{
										func_105(iVar0, 0x0000001C, 0x00000000, 0x00000000);
									}
									break;
								
								case 0x00000017:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2433.292f, 4968.534f, 42.348f, 105.5f, joaat("weapon_unarmed"), 0x00000000, 0x00000001))
									{
										func_105(iVar0, 0x0000001E, 0x00000000, 0x00000000);
									}
									break;
							}
							break;
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
					{
						unk_0x120A395B0ECB8EA5(Local_113[iVar0 /*33*/], 0x00000001);
						Local_119[iVar0 /*24*/].f_3 = 0x00000003;
						iVar0 = (iVar0 - 0x00000001);
					}
					break;
				
				case 0x00000003:
					if (Local_119[iVar0 /*24*/].f_3 <= 0x00000003)
					{
						switch (Local_113[iVar0 /*33*/].f_3)
						{
							case 0x00000003:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_14))
										{
											if (unk_0x1A5AE8A9B1D42A10(Local_113[iVar0 /*33*/].f_14) && unk_0x32B8283A77B4A240(Local_113[iVar0 /*33*/].f_14))
											{
												unk_0x9F528B1B53FBC5D9(Local_113[iVar0 /*33*/].f_14, Local_113[iVar0 /*33*/], unk_0x4A089F2B762B8D33(Local_113[iVar0 /*33*/], 0x0000EB95), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
												Local_113[iVar0 /*33*/].f_5++;
											}
											if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_14))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 0x00000004)
												{
													unk_0xC6EB89C59F2AF6B8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
												}
												else
												{
													unk_0xC6EB89C59F2AF6B8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
												}
												unk_0xE8832A9E16A57A1F(Local_113[iVar0 /*33*/], 0x00000001, 0x00000001);
												unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0x00000000, 0x00000000);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 0x00000001:
										break;
								}
								break;
							
							case 0x00000002:
								if (Local_113[iVar0 /*33*/].f_5 < 0x00000007)
								{
									func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_19), 0xFFFFFFFF, 0x00000000, 0x00000001, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
								}
								if (unk_0xB4ECF989E2C1DAC8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 0x00000003))
								{
									unk_0x8352CA08CF578D18(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1.4f);
								}
								if (unk_0xB4ECF989E2C1DAC8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 0x00000003))
								{
									unk_0x8352CA08CF578D18(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1.4f);
								}
								if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_14))
								{
									if (Local_113[iVar0 /*33*/].f_5 > 0x00000002 && Local_113[iVar0 /*33*/].f_5 <= 0x00000006)
									{
										if (unk_0xD59B17D2DFF98E26(Local_113[iVar0 /*33*/].f_14))
										{
											Local_113[iVar0 /*33*/].f_C = (func_102(unk_0x68F4C0EC296D3901(Local_113[iVar0 /*33*/], 0x00000001), Local_113[iVar0 /*33*/].f_6, 0x00000001) - unk_0xD9522BA9E27E1349(Local_113[iVar0 /*33*/]));
											Local_113[iVar0 /*33*/].f_C = func_101((Local_113[iVar0 /*33*/].f_C / 4f), -15f, 15f);
											if (!unk_0x869EFD0BC0868856(Local_113[iVar0 /*33*/]))
											{
												unk_0xD8F6A53F4799FAFE(Local_113[iVar0 /*33*/], (unk_0xD9522BA9E27E1349(Local_113[iVar0 /*33*/]) + (SYSTEM::TIMESTEP() * Local_113[iVar0 /*33*/].f_C)));
											}
										}
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_14))
										{
											if (unk_0x1A5AE8A9B1D42A10(Local_113[iVar0 /*33*/].f_14) && unk_0x32B8283A77B4A240(Local_113[iVar0 /*33*/].f_14))
											{
												unk_0x9F528B1B53FBC5D9(Local_113[iVar0 /*33*/].f_14, Local_113[iVar0 /*33*/], unk_0x4A089F2B762B8D33(Local_113[iVar0 /*33*/], 0x0000EB95), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
												func_32(0x00000014, 0x00000000);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
									
									case 0x00000001:
										if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_14))
										{
											if (func_73(Local_113[iVar0 /*33*/], 2495.779f, 5004.715f, 43.87337f, 0x00000001) < 99f)
											{
												if (Local_113[iVar0 /*33*/].f_2 == 0x00000004)
												{
													unk_0xC6EB89C59F2AF6B8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
												}
												else
												{
													unk_0xC6EB89C59F2AF6B8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
												}
												unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0x00000000, 0x00000000);
												unk_0xE8832A9E16A57A1F(Local_113[iVar0 /*33*/], 0x00000001, 0x00000001);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 0x00000002:
										if (unk_0xB4ECF989E2C1DAC8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 0x00000003) || unk_0xB4ECF989E2C1DAC8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 0x00000003))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2466.903f, 4996.254f, 45.5443f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 0x00000003:
										if (unk_0x5A91F08DF773C39D(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0x00000000, 0x00000001, 0x00000000))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2461.332f, 4998.94f, 45.359f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 0x00000004:
										if (unk_0x5A91F08DF773C39D(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0x00000000, 0x00000001, 0x00000000))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2455.984f, 4997.404f, 45.2645f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 0x00000005:
										if (unk_0x5A91F08DF773C39D(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0x00000000, 0x00000001, 0x00000000))
										{
											if (Local_113[iVar0 /*33*/].f_2 == 0x00000005)
											{
												Local_113[iVar0 /*33*/].f_6 = { 2452.091f, 4993.674f, 45.1404f };
												Local_113[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_113[iVar0 /*33*/].f_6 = { 2454.091f, 4995.674f, 45.1404f };
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 0x00000006:
										if (unk_0x5A91F08DF773C39D(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0x00000000, 0x00000001, 0x00000000))
										{
											if (unk_0xB4ECF989E2C1DAC8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 0x00000003))
											{
												unk_0xFB131B855F2FD560(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", -1.5f);
											}
											if (unk_0xB4ECF989E2C1DAC8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 0x00000003))
											{
												unk_0xFB131B855F2FD560(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", -1.5f);
											}
											Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
											if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_14))
											{
												unk_0x15AFB6CBDE990FB6(Local_113[iVar0 /*33*/].f_14, 0x00000000, 0x00000001);
											}
											if (func_74(iLocal_145))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 0x00000004)
												{
													unk_0x79C43E2BAC7C696F(Local_113[iVar0 /*33*/], "move_m@gangster@var_e", 0x3E800000);
													unk_0x5B1D360B9C6F0A09(Local_113[iVar0 /*33*/], iLocal_145, 0xFFFFFFFF, 0xFFFFFFFF, 1f, 0x00000001, 0x00000000);
													func_105(func_18(0x00000006), 0x0000000E, 0x00000000, 0x00000000);
													func_105(func_18(0x00000007), 0x00000021, 0x00000000, 0x00000000);
												}
												else
												{
													unk_0x79C43E2BAC7C696F(Local_113[iVar0 /*33*/], "move_m@gangster@var_f", 0x3E800000);
													unk_0x5B1D360B9C6F0A09(Local_113[iVar0 /*33*/], iLocal_145, 0xFFFFFFFF, 0x00000000, 1f, 0x00000001, 0x00000000);
												}
											}
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_E = 0x00000000;
											Local_113[iVar0 /*33*/].f_F = 0x00000000;
										}
										break;
									
									case 0x00000007:
										func_100(iVar0);
										if (unk_0x405E212DDE472467(Local_113[iVar0 /*33*/], 0x00000000))
										{
											unk_0xE8832A9E16A57A1F(Local_113[iVar0 /*33*/], 0x00000000, 0x00000001);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 0x00000008:
										if (func_74(iLocal_145))
										{
											if (!unk_0xBBA8A868118C90ED(iLocal_145, 0xFFFFFFFF, 0x00000000))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 0x00000004)
												{
													if (!unk_0xBBA8A868118C90ED(iLocal_145, 0x00000000, 0x00000000))
													{
														iVar1 = func_18(0x00000005);
														if (iVar1 >= 0x00000000)
														{
															if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar1 /*33*/]))
															{
																if (unk_0x0E0E6175453415CB(Local_113[iVar1 /*33*/]))
																{
																	func_99();
																	unk_0xE9362E4D600DD12A(0x00000000, iLocal_145, 2367.668f, 5098.645f, 46.8185f, 12f, 0x00000000, joaat("burrito"), 0x000C00A7, 5f, 5f);
																	unk_0xE072601B4380E9DF(0x00000000, iLocal_145, 19f, 0x000C00A7);
																	func_98(&(Local_113[iVar0 /*33*/]), 0x00000000);
																	func_97(0x00000019, 0x00000001);
																	Local_113[iVar0 /*33*/].f_5++;
																}
															}
														}
													}
												}
											}
											if (!unk_0xBBA8A868118C90ED(iLocal_145, 0x00000000, 0x00000000))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 0x00000005)
												{
													Local_113[iVar0 /*33*/].f_5++;
												}
											}
										}
										break;
									
									case 0x00000009:
										break;
								}
								break;
							
							case 0x00000005:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										func_99();
										unk_0x96167B03C5A77156(0x00000000, 2459.646f, 4977.735f, 50.5678f, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
										unk_0x96167B03C5A77156(0x00000000, 2456.221f, 4974.685f, 50.5678f, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
										unk_0x8ABEF95A05CEAA79(0x00000000, 2456.221f, 4974.685f, 50.5678f, 92.5678f, 0x3F400000);
										unk_0xE655C47E46F9A7E4(0x00000000, 92.5678f, 0x00000000);
										func_98(&(Local_113[iVar0 /*33*/]), 0x00000000);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 0x00000001:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 0x0E763797) == 0x00000007)
										{
											func_105(iVar0, 0x00000007, 0x00000000, 0x00002328);
											iVar2 = 0x00000001;
											if (iVar2 != 0xFFFFFFFF)
											{
												func_105(iVar2, 0x00000007, 0x00000000, 0x00002328);
											}
										}
										break;
									
									case 0x00000002:
										func_99();
										unk_0x96167B03C5A77156(0x00000000, 2450.491f, 4986.83f, 50.5677f, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
										unk_0xE655C47E46F9A7E4(0x00000000, 309.5567f, 0x00000000);
										unk_0x78A77CDD64392938(0x00000000, 0x000007D0);
										func_98(&(Local_113[iVar0 /*33*/]), 0x00000000);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 0x00000003:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 0x0E763797) == 0x00000007)
										{
											Local_113[iVar0 /*33*/].f_5 = 0x00000000;
										}
										break;
								}
								break;
							
							case 0x00000006:
								if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 0x3B3A458F) == 0x00000007 && Local_113[iVar0 /*33*/].f_5 > 0x00000001)
								{
									Local_113[iVar0 /*33*/].f_5 = 0x00000000;
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										unk_0x5745EA6329A91E29(Local_113[iVar0 /*33*/], joaat("weapon_unarmed"), 0x00000001);
										unk_0xE655C47E46F9A7E4(Local_113[iVar0 /*33*/], 219f, 0x000005DC);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 0x00000001:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 0x7276D3DF) == 0x00000007)
										{
											unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND_ARMY", 0x00000000, 0x00000000);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 0x00000020:
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
								{
									if (Local_113[iVar0 /*33*/].f_1 == 0x00000001 || func_4(unk_0x16F2683693E537C9(), Local_113[iVar0 /*33*/], 0x00000001) < 20f)
									{
										func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_19), 0xFFFFFFFF, 0x00000000, 0x00000001, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
									}
									if (Local_113[iVar0 /*33*/].f_5 < 0x0000000A)
									{
									}
									switch (Local_113[iVar0 /*33*/].f_5)
									{
										case 0x00000000:
											unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", Local_113[iVar0 /*33*/].f_E, 0x00000000);
											Local_113[iVar0 /*33*/].f_5++;
											break;
										
										case 0x00000001:
											if (func_4(unk_0x16F2683693E537C9(), Local_113[iVar0 /*33*/], 0x00000001) < 10f)
											{
												iVar3 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
												if (iVar3 == 0x00000000)
												{
													unk_0xEB0A515D699A7E90(Local_113[iVar0 /*33*/], "GENERIC_CURSE_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0x00000000);
												}
												else if (iVar3 == 0x00000001)
												{
													unk_0xEB0A515D699A7E90(Local_113[iVar0 /*33*/], "GENERIC_INSULT_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0x00000000);
												}
												else
												{
													unk_0xEB0A515D699A7E90(Local_113[iVar0 /*33*/], "CHAT_STATE", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0x00000000);
												}
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_E = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
											}
											break;
										
										case 0x00000002:
											if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_E)
											{
												Local_113[iVar0 /*33*/].f_5 = 0x00000001;
											}
											break;
										
										case 0x0000000A:
											if (func_35("CHI2_hear", 0x00000008, Local_113[iVar0 /*33*/], "ONEILGUARD1", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
											{
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_E = unk_0x1C0640BA9A7327B3() + 1000;
											}
											break;
										
										case 0x0000000B:
											if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_E)
											{
												unk_0x796BDF31572BB055(Local_113[iVar0 /*33*/], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00001388);
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_E = unk_0x1C0640BA9A7327B3() + 5000;
											}
											break;
										
										case 0x0000000C:
											if (unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), Local_113[iVar0 /*33*/]) && func_73(Local_113[iVar0 /*33*/], 2448.003f, 4982.305f, 45.8519f, 0x00000001) < 10f)
											{
												if (unk_0x1C0640BA9A7327B3() > (Local_113[iVar0 /*33*/].f_E - 0x00000BB8))
												{
													unk_0x96167B03C5A77156(Local_113[iVar0 /*33*/], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
													Local_113[iVar0 /*33*/].f_5 = 0x0000000F;
												}
											}
											else if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_E)
											{
												if (func_35("CHI2_nope", 0x00000008, Local_113[iVar0 /*33*/], "ONEILGUARD1", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
												{
													Local_113[iVar0 /*33*/].f_5++;
												}
											}
											break;
										
										case 0x0000000D:
											func_99();
											unk_0x96167B03C5A77156(0x00000000, 2449.114f, 4981.984f, 45.8102f, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
											unk_0xE655C47E46F9A7E4(0x00000000, 127.6328f, 0x00000BB8);
											func_98(&(Local_113[iVar0 /*33*/]), 0x00000000);
											Local_113[iVar0 /*33*/].f_E = unk_0x1C0640BA9A7327B3() + 3000;
											Local_113[iVar0 /*33*/].f_5++;
											break;
										
										case 0x0000000E:
											if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_E || unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 0x0E763797) == 0x00000007)
											{
												Local_113[iVar0 /*33*/].f_5 = 0x00000000;
											}
											break;
										
										case 0x0000000F:
											if (func_35("CHI2_hear", 0x00000008, Local_113[iVar0 /*33*/], "ONEILGUARD1", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
											break;
										
										case 0x00000010:
											if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 0x2A89B8A7) == 0x00000007)
											{
												Local_113[iVar0 /*33*/].f_E = unk_0x1C0640BA9A7327B3() + 3000;
												Local_113[iVar0 /*33*/].f_5 = 0x0000000C;
											}
											break;
										}
								}
								break;
							
							case 0x00000021:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										Local_113[iVar0 /*33*/].f_E = unk_0x1C0640BA9A7327B3() + 3000;
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 0x00000001:
										if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_E)
										{
											if (func_74(iLocal_145))
											{
												unk_0x5B1D360B9C6F0A09(Local_113[iVar0 /*33*/], iLocal_145, 0x00004E20, 0x00000001, 1f, 0x00000001, 0x00000000);
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_E = 0x00000000;
												Local_113[iVar0 /*33*/].f_F = 0x00000000;
											}
										}
										break;
									
									case 0x00000002:
										func_100(iVar0);
										break;
								}
								break;
							
							case 0x00000007:
								if (Local_113[iVar0 /*33*/].f_1 == 0x00000001 || func_4(unk_0x16F2683693E537C9(), Local_113[iVar0 /*33*/], 0x00000001) < 20f)
								{
									func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_19), 0xFFFFFFFF, 0x00000000, 0x00000001, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										iVar4 = joaat("weapon_unarmed");
										if (unk_0xCAE036C45E7FC720(Local_113[iVar0 /*33*/], &iVar4, 0x00000001))
										{
											unk_0x9294582561BECEE7(Local_113[iVar0 /*33*/], 0x00000000);
										}
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 0x00000001:
										if (!unk_0xCAE036C45E7FC720(Local_113[iVar0 /*33*/], &iVar4, 0x00000001))
										{
											func_99();
											if (iVar0 == 0x00000001)
											{
												if (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000002 /*33*/]))
												{
													unk_0xF96A174EE26D7588(0x00000000, Local_113[0x00000002 /*33*/], 0x000007D0);
												}
											}
											else if (iVar0 == 0x00000002)
											{
												if (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000001 /*33*/]))
												{
													unk_0xF96A174EE26D7588(0x00000000, Local_113[0x00000001 /*33*/], 0x000007D0);
												}
											}
											else if (iVar0 == 0x00000006)
											{
												if (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000007 /*33*/]))
												{
													unk_0xF96A174EE26D7588(0x00000000, Local_113[0x00000007 /*33*/], 0x000007D0);
												}
											}
											else if (iVar0 == 0x00000007)
											{
												if (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000006 /*33*/]))
												{
													unk_0xF96A174EE26D7588(0x00000000, Local_113[0x00000006 /*33*/], 0x000007D0);
												}
											}
											if (Local_113[iVar0 /*33*/].f_E != 0x00000000)
											{
												unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_HANG_OUT_STREET", Local_113[iVar0 /*33*/].f_E, 0x00000000);
											}
											else
											{
												unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_HANG_OUT_STREET", 0x00000000, 0x00000000);
											}
											func_98(&(Local_113[iVar0 /*33*/]), 0x00000000);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_F = unk_0x1C0640BA9A7327B3() + 15000;
										}
										break;
									
									case 0x00000002:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 0x0E763797) == 0x00000007 || unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_F)
										{
											unk_0xA3BF0AA5A2608191(Local_113[iVar0 /*33*/]);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 0x00000003:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 0x0E763797) == 0x00000007)
										{
											if (Local_113[iVar0 /*33*/].f_4 == 0x00000005)
											{
												unk_0x9294582561BECEE7(Local_113[iVar0 /*33*/], 0x00000001);
												Local_113[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 0x00000004:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 0x2AB81462) == 0x00000007)
										{
											if (Local_113[iVar0 /*33*/].f_4 == 0x00000005)
											{
												func_105(iVar0, Local_113[iVar0 /*33*/].f_4, 0x00000002, 0x00000000);
											}
											else
											{
												func_105(iVar0, Local_113[iVar0 /*33*/].f_4, 0x00000000, 0x00000000);
											}
										}
										break;
								}
								break;
							
							case 0x0000000D:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND", 0x00000000, 0x00000000);
										unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0x00000000, 0x00000000);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 0x0000000E:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", 0x00000000, 0x00000000);
										unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0x00000000, 0x00000000);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 0x00000001:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 0x3B3A458F) == 0x00000007)
										{
											Local_113[iVar0 /*33*/].f_5 = 0x00000000;
										}
										break;
								}
								break;
							
							case 0x0000000F:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_BINOCULARS", 0x00000000, 0x00000000);
										unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0x00000000, 0x00000000);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 0x00000010:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0x00000000, 0x00000000);
										unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0x00000000, 0x00000000);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 0x00000011:
								if (Local_113[iVar0 /*33*/].f_5 < 0x0000000A)
								{
									if (unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), Local_113[iVar0 /*33*/]))
									{
										Local_113[iVar0 /*33*/].f_5 = 0x0000000A;
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										unk_0x3F423BF5B8125A50("misscarsteal2peeing");
										Local_113[iVar0 /*33*/].f_5++;
										Local_113[iVar0 /*33*/].f_E = 0x00000000;
										break;
									
									case 0x00000001:
										if (unk_0xB4AE0788C1587752("misscarsteal2peeing"))
										{
											unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0x00000000, 0x00000001);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 0x00000002:
										if (func_4(unk_0x16F2683693E537C9(), Local_113[iVar0 /*33*/], 0x00000001) < 21.6f)
										{
											unk_0xC6EB89C59F2AF6B8(Local_113[iVar0 /*33*/], "misscarsteal2peeing", "peeing_loop", 8f, -8f, 0x000061A8, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_E = unk_0x1C0640BA9A7327B3() + 23000;
										}
										break;
									
									case 0x00000003:
										if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_E)
										{
											Local_113[iVar0 /*33*/].f_E = 0xFFFFFFFF;
											unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0x00000000, 0x00000001);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 0x00000012:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										func_99();
										unk_0x96167B03C5A77156(0x00000000, 2434.891f, 4973.864f, 50.5679f, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
										unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_BINOCULARS", 0x00000000, 0x00000000);
										func_98(&(Local_113[iVar0 /*33*/]), 0x00000000);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 0x00000019:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										switch (Local_113[iVar0 /*33*/].f_2)
										{
											case 0x0000000C:
												if (unk_0x4742C50E93110B10(2433.04f, 4967.87f, 46.28f, 0.8f, 0x00000000))
												{
													unk_0xC74CB55864B8C5C9(Local_113[iVar0 /*33*/], 2433.04f, 4967.87f, 46.28f, 0.8f, 0x00000000);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 0x0000000D:
												if (unk_0x4742C50E93110B10(2432.56f, 4968.38f, 46.27f, 0.8f, 0x00000000))
												{
													unk_0xC74CB55864B8C5C9(Local_113[iVar0 /*33*/], 2432.56f, 4968.38f, 46.27f, 0.8f, 0x00000000);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 0x0000000E:
												if (unk_0x4742C50E93110B10(2433.12f, 4965.59f, 46.27f, 0.8f, 0x00000000))
												{
													unk_0xC74CB55864B8C5C9(Local_113[iVar0 /*33*/], 2433.12f, 4965.59f, 46.27f, 0.8f, 0x00000000);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 0x0000000F:
												if (unk_0x4742C50E93110B10(2439.61f, 4960.99f, 46.27f, 0.4f, 0x00000000))
												{
													unk_0xC74CB55864B8C5C9(Local_113[iVar0 /*33*/], 2439.697f, 4960.996f, 46.28f, 0.4f, 0x00000000);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 0x00000010:
												if (unk_0x4742C50E93110B10(2440.16f, 4962.99f, 46.27f, 0.4f, 0x00000000))
												{
													unk_0xC74CB55864B8C5C9(Local_113[iVar0 /*33*/], 2440.16f, 4962.99f, 46.27f, 0.4f, 0x00000000);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 0x00000011:
												if (unk_0x4742C50E93110B10(2438.23f, 4962.25f, 46.27f, 0.4f, 0x00000000))
												{
													unk_0xC74CB55864B8C5C9(Local_113[iVar0 /*33*/], 2438.23f, 4962.25f, 46.27f, 0.4f, 0x00000000);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
										}
										break;
									
									case 0x00000001:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 0x623A5EFE) == 0x00000007)
										{
											Local_113[iVar0 /*33*/].f_5 = 0x00000000;
										}
										break;
								}
								break;
							
							case 0x0000001C:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_113[iVar0 /*33*/]) || (func_96(unk_0x68F4C0EC296D3901(Local_113[iVar0 /*33*/], 0x00000001), 1f, 0x42C80000) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, 0x00000000, 0x00000001, 0x00000000)))
										{
											unk_0xF9B5DB58254657F1(Local_113[iVar0 /*33*/], 0x00004E20, 0x00000000, 0xFFFFFFFF, 0x00000000);
											Local_113[iVar0 /*33*/].f_5 = 0x00000002;
										}
										break;
									
									case 0x00000002:
										if (func_35("WRK1", 0x00000001, Local_113[iVar0 /*33*/], "CHIN2Goon2", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 0x00000003:
										if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_113[iVar0 /*33*/]) || (func_96(unk_0x68F4C0EC296D3901(Local_113[iVar0 /*33*/], 0x00000001), 1f, 0x42C80000) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, 0x00000000, 0x00000001, 0x00000000)))
										{
											if (func_35("TRV1", 0x00000001, unk_0x16F2683693E537C9(), "TREVOR", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
											{
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_E = unk_0x1C0640BA9A7327B3() + 2000;
											}
										}
										else
										{
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_E = unk_0x1C0640BA9A7327B3() + 2000;
										}
										break;
									
									case 0x00000004:
										if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_E)
										{
											unk_0xF3268524E9BE6D6E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 200f, 0x00030D40, 0x00000000, 0x00000000);
											unk_0xFADC0A217229F6B5(Local_113[iVar0 /*33*/], 0x00000001);
											unk_0x6DAD7906B73F064D(&(Local_113[iVar0 /*33*/]));
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 0x0000001E:
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
								{
									if (Local_113[iVar0 /*33*/].f_5 < 0x00000008)
									{
										if (unk_0x0361981EE62202D8(Local_113[iVar0 /*33*/], 0x00000000, 0x00000002))
										{
											if (!unk_0x440C646F2F11A2A1(Local_113[iVar0 /*33*/], 0x00000000, 0x00000002))
											{
												unk_0x262EF6C6306BEA6C(Local_113[iVar0 /*33*/], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
												unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
												func_94();
												unk_0x11AD11297DC58CC7(Local_113[iVar0 /*33*/], 0x00000000);
												unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
												unk_0x6DF7BF67E86AAE86(Local_113[iVar0 /*33*/], iLocal_116);
												Local_113[iVar0 /*33*/].f_5 = 0x000003E7;
											}
										}
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										unk_0x3F423BF5B8125A50("misschinese2_crystalmaze");
										unk_0x6D0C93EE4FBA9307(joaat("weapon_sawnoffshotgun"), 0x0000001F, 0x00000000);
										unk_0x11AD11297DC58CC7(Local_113[iVar0 /*33*/], 0x00000001);
										unk_0x6DF7BF67E86AAE86(Local_113[iVar0 /*33*/], iLocal_116);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 0x00000001:
										if (unk_0xB4AE0788C1587752("misschinese2_crystalmaze") && unk_0x1787731C4D1D6B19(joaat("weapon_sawnoffshotgun")))
										{
											if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
											{
												iLocal_370 = unk_0xE9744DB7B8CA6965(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 0x00000002);
												unk_0xC90224D9E95E5E3A(iLocal_370, 0x00000001);
												unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], iLocal_370, "misschinese2_crystalmaze", "_cower_loop", 1000f, -8f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
												if (!unk_0xC844350D5D58C99A(iLocal_373))
												{
													iLocal_373 = unk_0x5ACD4E66C7BF0F49(joaat("weapon_sawnoffshotgun"), 0x00000028, 2433.59f, 4969.7f, 42.1854f, 0x00000001, 0x3F800000, 0x00000000, 0x00000000, 0x00000001);
													unk_0xC023D1C4BF532815(iLocal_373, 90f, 0f, 0f, 0x00000002, 0x00000001);
												}
												unk_0x0C8C0C840C2D1AD2(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 0x00000002:
										if ((iLocal_149 == 0x00000004 || iLocal_149 == 0x00000005) || iLocal_149 == 0x00000006)
										{
											if (func_93(0x0000000B))
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										if (iLocal_149 > 0x00000006)
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 0x00000003:
										iLocal_369 = unk_0xE9744DB7B8CA6965(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 0x00000002);
										unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], iLocal_369, "misschinese2_crystalmaze", "_cower_to_stand", 4f, -8f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
										unk_0x0C8C0C840C2D1AD2(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 0x00000004:
										if (func_35("CHI2_DALE", 0x00000004, Local_113[iVar0 /*33*/], "ONEIL", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										if ((unk_0x69DF961355195C3C(iLocal_369) && unk_0xA45992A6CE82FB43(iLocal_369) > 0.98f) || !unk_0x69DF961355195C3C(iLocal_369))
										{
											Local_113[iVar0 /*33*/].f_5 = 0x00000005;
										}
										break;
									
									case 0x00000005:
										if ((unk_0x69DF961355195C3C(iLocal_369) && unk_0xA45992A6CE82FB43(iLocal_369) > 0.98f) || !unk_0x69DF961355195C3C(iLocal_369))
										{
											iLocal_368 = unk_0xE9744DB7B8CA6965(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 0x00000002);
											unk_0xC90224D9E95E5E3A(iLocal_368, 0x00000001);
											unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], iLocal_368, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_E = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x000003E8, 0x000007D0));
										}
										break;
									
									case 0x00000006:
										if (!unk_0x69DF961355195C3C(iLocal_371) || iLocal_371 == 0x00000000)
										{
											if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_E)
											{
												iLocal_371 = unk_0xE9744DB7B8CA6965(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 0x00000002);
												if (unk_0x09AC81E49EA267F7(0x00000000, 0x00000002) == 0x00000001)
												{
													unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], iLocal_371, "misschinese2_crystalmaze", "_stand_loop_a", 4f, -8f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
												}
												else
												{
													unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], iLocal_371, "misschinese2_crystalmaze", "_stand_loop_b", 4f, -8f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
												}
											}
										}
										if (!unk_0x69DF961355195C3C(iLocal_368) || iLocal_368 == 0x00000000)
										{
											if ((unk_0x69DF961355195C3C(iLocal_371) && unk_0xA45992A6CE82FB43(iLocal_371) > 0.98f) || !unk_0x69DF961355195C3C(iLocal_371))
											{
												iLocal_368 = unk_0xE9744DB7B8CA6965(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 0x00000002);
												unk_0xC90224D9E95E5E3A(iLocal_368, 0x00000001);
												unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], iLocal_368, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
												Local_113[iVar0 /*33*/].f_E = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x000003E8, 0x000007D0));
											}
										}
										if (!func_65() || (func_73(unk_0x16F2683693E537C9(), 2430.09f, 4965.93f, 41.55f, 0x00000001) > 3.438f && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2427.079f, 4964.971f, 41.81169f, 2432.589f, 4959.331f, 48.7548f, 3.3125f, 0x00000000, 0x00000001, 0x00000000)))
										{
											func_91();
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 0x00000007:
										if (func_35("CHI2_DALEG", 0x00000004, Local_113[iVar0 /*33*/], "ONEIL", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 0x00000008:
										iLocal_372 = unk_0xE9744DB7B8CA6965(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 0x00000002);
										unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], iLocal_372, "misschinese2_crystalmaze", "_stand_to_aim", 4f, -8f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
										unk_0x96C150704BF4D0C6(iLocal_373, Local_113[iVar0 /*33*/]);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 0x00000009:
										if ((unk_0x69DF961355195C3C(iLocal_372) && unk_0xA45992A6CE82FB43(iLocal_372) > 0.98f) || !unk_0x69DF961355195C3C(iLocal_372))
										{
											unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 0x00000001);
											unk_0xA3BF0AA5A2608191(Local_113[iVar0 /*33*/]);
											unk_0x9BE7E7B6B488CC55(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000001);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 0x0000000A:
										if (!func_65())
										{
											if (func_35("CHI2_DALEA", 0x00000004, Local_113[iVar0 /*33*/], "ONEIL", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
											{
												unk_0x11AD11297DC58CC7(Local_113[iVar0 /*33*/], 0x00000000);
												unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
												Local_113[iVar0 /*33*/].f_E = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000BB8, 0x00000FA0));
												Local_113[iVar0 /*33*/].f_F = 0x00000000;
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 0x0000000B:
										if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_E)
										{
											if (Local_113[iVar0 /*33*/].f_F < 0x00000004)
											{
												if (func_35("CHI2_DALEA", 0x00000004, Local_113[iVar0 /*33*/], "ONEIL", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
												{
													Local_113[iVar0 /*33*/].f_5++;
													Local_113[iVar0 /*33*/].f_E = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000BB8, 0x00000FA0));
													Local_113[iVar0 /*33*/].f_F++;
												}
											}
										}
										break;
									
									case 0x000003E7:
										if (func_35("CHI2_DALEA", 0x00000004, Local_113[iVar0 /*33*/], "ONEIL", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 0x0000001F:
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
								{
									if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(Local_113[iVar0 /*33*/], 0x00000001), 2f, 0x00000001))
									{
										Local_113[iVar0 /*33*/].f_5 = 0x00000005;
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										if (func_90("FRMFLC", 0x00000000, 0x00000000))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 0x00000001:
										if (func_35("WRK2", 0x00000001, Local_113[iVar0 /*33*/], "oneilcook", 0x00000002, unk_0x16F2683693E537C9(), "trevor", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
										{
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_E = unk_0x1C0640BA9A7327B3() + 1300;
										}
										break;
									
									case 0x00000002:
										if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_E)
										{
											unk_0xF9B5DB58254657F1(Local_113[iVar0 /*33*/], 0x00004E20, 0x00000000, 0xFFFFFFFF, 0x00000000);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 0x00000003:
										if (!func_65())
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 0x00000004:
										if (!func_65())
										{
											func_105(iVar0, 0x0000001B, 0x00000000, 0x00000000);
										}
										break;
									
									case 0x00000005:
										unk_0xF3268524E9BE6D6E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 50f, 0x000003E8, 0x00000000, 0x00000000);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 0x00000006:
										if (func_88("WRK2"))
										{
											if (unk_0x40EFDB96B3112BA7() == 0x00000001 || unk_0x40EFDB96B3112BA7() == 0x00000005)
											{
												func_87(0x00000000);
											}
											else
											{
												func_87(0x00000001);
											}
										}
										func_105(iVar0, 0x0000001B, 0x00000000, 0x00000000);
										break;
								}
								break;
							
							case 0x0000001B:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0x00000000:
										func_99();
										unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
										unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0x000F423F, 0x00000000, 0x00000000);
										unk_0x8BE3D040D15AEA1D(0x00000000, 0xFFFFFFFF);
										func_98(&(Local_113[iVar0 /*33*/]), 0x00000000);
										unk_0xFADC0A217229F6B5(Local_113[iVar0 /*33*/], 0x00000001);
										unk_0x6DAD7906B73F064D(&(Local_113[iVar0 /*33*/]));
										if (unk_0xE4EDC4B0E92C078B(Local_113[iVar0 /*33*/].f_13))
										{
											unk_0x142CC44DB769B57E(&(Local_113[iVar0 /*33*/].f_13));
										}
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 0x00000004:
								if (iLocal_376 == 0x00000001)
								{
									if (unk_0x69DF961355195C3C(Local_113[iVar0 /*33*/].f_E))
									{
										unk_0x57E0CF9BF653D99A(Local_113[iVar0 /*33*/].f_E, 0.69f);
									}
									if (iVar0 == 0x00000009)
									{
										iLocal_376 = 0x00000000;
									}
								}
								if (iLocal_377 == 0x00000001)
								{
									if (unk_0x69DF961355195C3C(Local_113[iVar0 /*33*/].f_E))
									{
										unk_0x57E0CF9BF653D99A(Local_113[iVar0 /*33*/].f_E, 0f);
									}
									if (iVar0 == 0x00000009)
									{
										iLocal_377 = 0x00000000;
									}
									Local_113[iVar0 /*33*/].f_5 = 0x00000000;
								}
								if (Local_113[iVar0 /*33*/].f_2 == 0x00000008)
								{
									if (unk_0x69DF961355195C3C(Local_113[iVar0 /*33*/].f_E))
									{
										if (Local_113[iVar0 /*33*/].f_5 == 0x00000000)
										{
											if (!func_30(0x00000017) || iLocal_149 == 0x00000003)
											{
												if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 0x6A67A5CC) == 0x00000001)
												{
													if (unk_0xA45992A6CE82FB43(Local_113[iVar0 /*33*/].f_E) > 0.024f && unk_0xA45992A6CE82FB43(Local_113[iVar0 /*33*/].f_E) < 0.033f)
													{
														iVar5 = 0x00000000;
														if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
														{
															iVar6 = joaat("weapon_unarmed");
															if (unk_0xCAE036C45E7FC720(Local_113[iVar0 /*33*/], &iVar6, 0x00000001))
															{
																unk_0x298903DD96203C2C(Local_113[iVar0 /*33*/], 0x00000064);
																if (iVar6 == joaat("weapon_pistol"))
																{
																	if (func_86(&iVar5))
																	{
																		unk_0x4602DF28F05262E2(Local_113[iVar0 /*33*/], joaat("weapon_pistol"), 0x0000000C);
																		unk_0x2D728BBC95A0267D(Local_113[iVar0 /*33*/], unk_0x68F4C0EC296D3901(iLocal_170[iVar5], 0x00000001), 0x00000000);
																		func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_19), 0xFFFFFFFF, 0x00000000, 0x00000001, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
																		Local_113[iVar0 /*33*/].f_5 = 0x00000001;
																	}
																	else
																	{
																		unk_0x4602DF28F05262E2(Local_113[iVar0 /*33*/], joaat("weapon_pistol"), 0x0000000C);
																		unk_0x2D728BBC95A0267D(Local_113[iVar0 /*33*/], 2493.1f, 4971f, 44.9f, 0x00000000);
																		func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_19), 0xFFFFFFFF, 0x00000000, 0x00000001, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
																		Local_113[iVar0 /*33*/].f_5 = 0x00000001;
																	}
																}
															}
														}
													}
												}
											}
										}
										else if (Local_113[iVar0 /*33*/].f_5 == 0x00000001)
										{
											if (unk_0xA45992A6CE82FB43(Local_113[iVar0 /*33*/].f_E) > 0.04f)
											{
												Local_113[iVar0 /*33*/].f_5 = 0x00000002;
												if (iLocal_374 == 0x00000000)
												{
													unk_0xEB0A515D699A7E90(Local_113[iVar0 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_02", "SPEECH_PARAMS_FORCE_SHOUTED", 0x00000000);
												}
											}
										}
										else if (Local_113[iVar0 /*33*/].f_5 == 0x00000002)
										{
											if (unk_0xA45992A6CE82FB43(Local_113[iVar0 /*33*/].f_E) > 0.6f)
											{
												Local_113[iVar0 /*33*/].f_5 = 0x00000000;
											}
										}
									}
								}
								if (Local_113[iVar0 /*33*/].f_5 == 0x00000003)
								{
									if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 0x7D8F4411) == 0x00000007)
									{
										func_105(iVar0, 0x00000007, 0x00000000, 0x00000000);
									}
								}
								break;
							}
					}
					break;
				
				case 0x00000005:
				case 0x00000006:
					if (Local_119[iVar0 /*24*/].f_14)
					{
						switch (Local_113[iVar0 /*33*/].f_2)
						{
							case 0x00000014:
							case 0x00000015:
							case 0x00000010:
							case 0x0000000C:
							case 0x0000000D:
							case 0x0000000E:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 0x00000001:
										unk_0x17EAEF3CBDBACF1B(Local_113[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, 0x00000000, 0x00000000);
										unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
										unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 0x00000001);
										unk_0xAFF39FB306F8E232(Local_113[iVar0 /*33*/], 0x00000032, 0x00000001);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 0x00000011:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 0x00000001:
										unk_0x17EAEF3CBDBACF1B(Local_113[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, 0x00000000, 0x00000000);
										unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
										unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 0x00000001);
										unk_0xAFF39FB306F8E232(Local_113[iVar0 /*33*/], 0x00000032, 0x00000001);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 0x0000000F:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 0x00000001:
										unk_0x17EAEF3CBDBACF1B(Local_113[iVar0 /*33*/], 2437.982f, 4959.021f, 45.31057f, 2432.93f, 4961.941f, 48.69256f, 3.1875f, 0x00000000, 0x00000000);
										unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
										unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 0x00000001);
										Local_119[iVar0 /*24*/].f_4++;
										break;
									
									case 0x00000002:
										if (func_93(0x00000012))
										{
											unk_0xB3F77607A42FF835(Local_113[iVar0 /*33*/], 0x00000000);
											Local_119[iVar0 /*24*/].f_4++;
										}
										break;
								}
								break;
							
							case 0x0000000A:
							case 0x00000012:
							case 0x00000013:
							case 0x0000000B:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 0x00000001:
										unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
										unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 0x00000001);
										unk_0xAFF39FB306F8E232(Local_113[iVar0 /*33*/], 0x00000032, 0x00000001);
										if (iLocal_114 == 0x00000000)
										{
											unk_0xB3F77607A42FF835(Local_113[iVar0 /*33*/], 0x00000000);
											unk_0xED253B8DDB3FFB77(Local_113[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, 0x00000000, 0x00000000);
											iLocal_114++;
											Local_119[iVar0 /*24*/].f_4++;
										}
										else
										{
											Local_119[iVar0 /*24*/].f_4 = (unk_0x1C0640BA9A7327B3() + iLocal_114 * 4000);
											iLocal_114++;
										}
										Local_113[iVar0 /*33*/].f_1 = 0x00000001;
										break;
									
									case 0x00000002:
										if (func_73(Local_113[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 0x00000001) < 3f)
										{
											unk_0xB3F77607A42FF835(Local_113[iVar0 /*33*/], 0x00000000);
											Local_119[iVar0 /*24*/].f_4++;
										}
										break;
									
									case 0x00000003:
										break;
									
									default:
										if (unk_0x1C0640BA9A7327B3() > Local_119[iVar0 /*24*/].f_4)
										{
											unk_0xB3F77607A42FF835(Local_113[iVar0 /*33*/], 0x00000000);
											unk_0xED253B8DDB3FFB77(Local_113[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, 0x00000000, 0x00000000);
											Local_119[iVar0 /*24*/].f_4 = 0x00000002;
										}
										break;
								}
								break;
							
							case 0x00000001:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 0x00000001:
										unk_0x17EAEF3CBDBACF1B(Local_113[iVar0 /*33*/], 2453.084f, 4969.897f, 50.44285f, 2460.996f, 4977.822f, 53.38035f, 2.9375f, 0x00000000, 0x00000000);
										unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
										unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 0x00000001);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 0x00000000:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 0x00000001:
										unk_0x17EAEF3CBDBACF1B(Local_113[iVar0 /*33*/], 2442.963f, 4964.217f, 50.44285f, 2449.251f, 4970.534f, 53.38035f, 2f, 0x00000000, 0x00000000);
										unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
										unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 0x00000001);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 0x00000002:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 0x00000001:
										unk_0x17EAEF3CBDBACF1B(Local_113[iVar0 /*33*/], 2461.362f, 4976.084f, 50.44285f, 2448.743f, 4988.774f, 53.60143f, 2f, 0x00000000, 0x00000000);
										unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
										unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 0x00000001);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_86(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	*iParam0 = 0x00000000;
	iVar0 = 0x00000000;
	*iParam0 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000A);
	bVar1 = 0x00000000;
	while (!bVar1)
	{
		if (unk_0xC844350D5D58C99A(iLocal_170[*iParam0]) && unk_0x3D1053F9EB43B7AD(iLocal_170[*iParam0], 2495.017f, 4970.17f, 44.21808f, 2493.501f, 4971.556f, 45.40248f, 1.375f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		else
		{
			*iParam0++;
			iVar0++;
			if (*iParam0 == iLocal_170)
			{
				*iParam0 = 0x00000000;
			}
		}
		if (iVar0 == 0x0000000A)
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

void func_87(bool bParam0)
{
	iLocal_392 = 0x00000000;
	if (bParam0)
	{
		func_91();
	}
	else
	{
		func_94();
	}
}

int func_88(char* sParam0)
{
	struct<6> Var0;
	
	Var0 = { func_89() };
	if (unk_0x7F8A39872A07D2CE(&Var0, sParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

struct<6> func_89()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		return Global_4FC8;
	}
	return Var0;
}

bool func_90(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 0x00000001)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_91()
{
	Global_4CD7 = 0x00000000;
	func_92();
}

void func_92()
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

int func_93(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0x00000000 /*8*/]);
	if (iVar0 >= 0x00000000 && iVar0 < Local_388)
	{
		if (Local_388[iVar0 /*8*/] == iParam0)
		{
			if (Local_388[iVar0 /*8*/].f_2)
			{
				return 0x00000001;
			}
		}
		else if (Local_388[iVar0 /*8*/] != 0x00000000)
		{
		}
	}
	return 0x00000000;
}

void func_94()
{
	Global_4CD7 = 0x00000000;
	func_95();
}

void func_95()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

int func_96(vector3 vParam0, float fParam1, float fParam2)
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

int func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_388)
	{
		if (iParam0 == Local_388[iVar0 /*8*/])
		{
			if (iParam1 == 0x00000001)
			{
				Local_388[iVar0 /*8*/].f_2 = 0x00000001;
			}
			else
			{
				Local_388[iVar0 /*8*/].f_2 = 0x00000000;
			}
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_98(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x25644C31B4B6E9F3(iLocal_81, 0x00000001);
	}
	unk_0x75ABDC5F81978924(iLocal_81);
	if (!unk_0x28072FDD60CE3A6E(*iParam0, 0x00000001))
	{
		unk_0x78ADC381772E3D54(*iParam0, iLocal_81);
	}
	unk_0xF82EA857DA10E0CD(&iLocal_81);
}

void func_99()
{
	unk_0xDD353D0E9C789D0E(&iLocal_81);
}

void func_100(int iParam0)
{
	Local_113[iParam0 /*33*/].f_F = (Local_113[iParam0 /*33*/].f_F + SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
	switch (Local_113[iParam0 /*33*/].f_2)
	{
		case 0x00000007:
			if (Local_113[iParam0 /*33*/].f_F > 0x000007D0 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_E, 0x00000000))
			{
				unk_0xDBE4EC9C88839074(Local_113[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 0x00000FA0, 0x00000000, 0x00000002);
				unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_E), 0x00000000);
			}
			else if (Local_113[iParam0 /*33*/].f_F > 0x00001F40 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_E, 0x00000001))
			{
				unk_0xDBE4EC9C88839074(Local_113[iParam0 /*33*/], 2472.297f, 4962.687f, 47.2297f, 0x00001770, 0x00000000, 0x00000002);
				unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_E), 0x00000001);
			}
			break;
		
		case 0x00000005:
			if (Local_113[iParam0 /*33*/].f_F > 0x00000BB8 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_E, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000006 /*33*/]))
				{
					unk_0x0C8C0C840C2D1AD2(Local_113[iParam0 /*33*/], Local_113[0x00000006 /*33*/], 0x00000FA0, 0x00000000, 0x00000002);
					unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_E), 0x00000000);
				}
			}
			else if (Local_113[iParam0 /*33*/].f_F > 0x00002AF8 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_E, 0x00000001))
			{
				unk_0xDBE4EC9C88839074(Local_113[iParam0 /*33*/], 2494.634f, 5001.994f, 46.6624f, 0x00001B58, 0x00000000, 0x00000002);
				unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_E), 0x00000001);
			}
			else if (Local_113[iParam0 /*33*/].f_F > 0x00004E20 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_E, 0x00000002))
			{
				unk_0xDBE4EC9C88839074(Local_113[iParam0 /*33*/], 2477.634f, 4966.994f, 46.6624f, 0x00001B58, 0x00000000, 0x00000002);
				unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_E), 0x00000002);
			}
			break;
		
		case 0x00000004:
			if (Local_113[iParam0 /*33*/].f_F > 0x00000BB8 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_E, 0x00000000))
			{
				unk_0xDBE4EC9C88839074(Local_113[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 0x00001388, 0x00000000, 0x00000002);
				unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_E), 0x00000000);
			}
			else if (Local_113[iParam0 /*33*/].f_F > 0x00002710 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_E, 0x00000001))
			{
				unk_0xDBE4EC9C88839074(Local_113[iParam0 /*33*/], 2461.449f, 4977.48f, 51.7483f, 0x00001770, 0x00000000, 0x00000002);
				unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_E), 0x00000001);
			}
			else if (Local_113[iParam0 /*33*/].f_F > 0x00004650 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_E, 0x00000002))
			{
				unk_0xDBE4EC9C88839074(Local_113[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 0x00001770, 0x00000000, 0x00000002);
				unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_E), 0x00000002);
			}
			break;
	}
}

float func_101(float fParam0, float fParam1, float fParam2)
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

float func_102(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3, int iParam4)
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

int func_103(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0x00000000)
	{
		iParam3 = unk_0xA30EC016B12C03E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x3C583F939C836C5C(iParam0))
		{
			if (iParam8 == 0xFFFFFFFF)
			{
				unk_0xA29E145196B9739D(iParam0, 0x00000001);
			}
			else
			{
				unk_0xE23B4401F4442A7E(iParam0, 0x00000001, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x03E7282D82C7B3B6(iParam0, iParam2);
			unk_0xF8BE15A7B963DB56(iParam0, fParam6);
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x2A065371C9D96655(*uParam1, 0x00000007);
			}
		}
		if (!iParam9 == 0xFFFFFFFF)
		{
			unk_0xFABCB9076292E3BA(iParam0, iParam9);
		}
		unk_0xF947FFD8DA795A7F(iParam0, iParam4);
		unk_0xB46A36D2F28E60DE(iParam0, iParam5);
		*uParam1 = unk_0x380B922C6BB1F223(iParam0);
		if (!iParam9 == 0xFFFFFFFF)
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				if (!iParam8 == 0xFFFFFFFF)
				{
					unk_0x61755AC17D8F538E(*uParam1, iParam8);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					unk_0x64399B11CDD5A727("STRING");
					if (bParam10)
					{
						unk_0xD06AC7C87A34A6AD(sParam7);
					}
					else
					{
						unk_0x6B012227B3921E18(sParam7);
					}
					unk_0x4FA118D51B4F2476(*uParam1);
				}
				unk_0x2A065371C9D96655(*uParam1, 0x00000007);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 0x00000002))
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_6), 0x00000002);
			}
		}
		if (unk_0x405E212DDE472467(iParam0, 0x00000000))
		{
			uParam1->f_1 = unk_0x498C79575FE5BBCE(iParam0);
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 0x00000003))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
				{
					if (!iParam8 == 0xFFFFFFFF)
					{
						unk_0x61755AC17D8F538E(uParam1->f_1, iParam8);
					}
					if (!unk_0xEA6BC48857E0AC4C(sParam7))
					{
						unk_0x64399B11CDD5A727("STRING");
						if (bParam10)
						{
							unk_0xD06AC7C87A34A6AD(sParam7);
						}
						else
						{
							unk_0x6B012227B3921E18(sParam7);
						}
						unk_0x4FA118D51B4F2476(uParam1->f_1);
					}
					unk_0x2A065371C9D96655(uParam1->f_1, 0x00000007);
					unk_0x5D96D8530B3D0904(&(uParam1->f_6), 0x00000003);
				}
			}
			else if (!unk_0xE4EDC4B0E92C078B(uParam1->f_1))
			{
				uParam1->f_1 = 0x00000000;
				unk_0x0674E58A79778E99(&(uParam1->f_6), 0x00000003);
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
		{
			uParam1->f_1 = 0x00000000;
			unk_0x0674E58A79778E99(&(uParam1->f_6), 0x00000003);
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_104(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0x9FA191B317572861(iParam0, fParam1);
		unk_0xB21189153A095FA1(iParam0, fParam2);
		unk_0xCF443519BC24A3CB(iParam0, (fParam3 / 2f));
		unk_0x8979D9784F39DF46(iParam0, fParam4);
		unk_0xBEC9D6BBD21A735F(iParam0, fParam5);
	}
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!unk_0xEB6A8945D1AC98A1(Local_113[iParam0 /*33*/]))
	{
		if (iParam0 >= 0x00000000)
		{
			Local_113[iParam0 /*33*/].f_4 = Local_113[iParam0 /*33*/].f_3;
			Local_113[iParam0 /*33*/].f_3 = iParam1;
			Local_113[iParam0 /*33*/].f_5 = iParam2;
			Local_113[iParam0 /*33*/].f_6 = { 0f, 0f, 0f };
			Local_113[iParam0 /*33*/].f_9 = { 0f, 0f, 0f };
			Local_113[iParam0 /*33*/].f_C = 0f;
			Local_113[iParam0 /*33*/].f_D = 0f;
			Local_113[iParam0 /*33*/].f_E = iParam3;
			Local_113[iParam0 /*33*/].f_F = 0x00000000;
			Local_119[iParam0 /*24*/].f_3 = 0x00000003;
		}
	}
}

void func_106(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	(*iParam0)[iParam1 /*24*/] = uParam2;
	(iParam0[iParam1 /*24*/])->f_8 = iParam3;
	(iParam0[iParam1 /*24*/])->f_14 = iParam4;
	(iParam0[iParam1 /*24*/])->f_15 = iParam5;
	if (iParam1 > iLocal_52)
	{
		iLocal_52 = iParam1 + 1;
	}
}

int func_107(int iParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	iParam1 = iParam1;
	iParam6 = iParam6;
	if (Local_113[iParam0 /*33*/].f_1 != 0x00000001 && Local_113[iParam0 /*33*/].f_1 != 0x00000000)
	{
		iVar0 = unk_0xFBD08BECC9B87937(vParam2);
		if (iVar0 == 0x00000000)
		{
			return 0x00000000;
		}
		else if (!unk_0xBD307E66C0669BFC(iVar0))
		{
			return 0x00000000;
		}
	}
	switch (iLocal_111)
	{
		case 0x00000000:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000002, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000003, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000004, 0x00000001, 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000002, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000004, 0x00000000, 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_y_methhead_01"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000003, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000003:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000000, 0x00000000, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000002, 0x00000001, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000003, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000004, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000004:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000000, 0x00000000, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000003, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_y_methhead_01"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000004, 0x00000001, 0x00000002, 0x00000000);
			break;
		
		case 0x00000006:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000002, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000003, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000004, 0x00000000, 0x00000001, 0x00000000);
			break;
		
		case 0x00000007:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000002, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000003, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000004, 0x00000000, 0x00000002, 0x00000000);
			break;
		
		case 0x00000008:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_y_methhead_01"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000003, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000004, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000000, 0x00000000, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000003, 0x00000001, 0x00000002, 0x00000000);
			break;
		
		case 0x0000000A:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_y_methhead_01"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000003, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000004, 0x00000000, 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000002, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000003, 0x00000002, 0x00000002, 0x00000000);
			break;
		
		case 0x0000000C:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000000, 0x00000000, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000002, 0x00000000, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000003, 0x00000001, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000004, 0x00000001, 0x00000002, 0x00000000);
			break;
		
		case 0x0000000D:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000002, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000003, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000004, 0x00000000, 0x00000002, 0x00000000);
			break;
		
		case 0x0000000E:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_y_methhead_01"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000003, 0x00000000, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000004, 0x00000000, 0x00000002, 0x00000000);
			break;
		
		case 0x0000000F:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000002, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000004, 0x00000000, 0x00000002, 0x00000000);
			break;
		
		case 0x00000010:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_y_methhead_01"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000000, 0x00000000, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000003, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000004, 0x00000001, 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 0x00000001, 0x00000001);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000000, 0x00000000, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000002, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000003, 0x00000001, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0x00000004, 0x00000000, 0x00000001, 0x00000000);
			break;
	}
	if (iLocal_111 > 0x00000011)
	{
		Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_y_methhead_01"), vParam2, fParam3, 0x00000001, 0x00000001);
		unk_0xC743BD39A24D0583(Local_113[iParam0 /*33*/], 0x00000000);
	}
	iLocal_111++;
	if (Local_113[iParam0 /*33*/].f_1 == 0x00000005)
	{
		unk_0x11AD11297DC58CC7(Local_113[iParam0 /*33*/], 0x00000001);
		unk_0x6DF7BF67E86AAE86(Local_113[iParam0 /*33*/], iLocal_117);
	}
	else
	{
		unk_0x262EF6C6306BEA6C(Local_113[iParam0 /*33*/], iParam4, 0x00000BB8, bParam5, 0x00000001);
		unk_0x6DF7BF67E86AAE86(Local_113[iParam0 /*33*/], iLocal_116);
		unk_0x20EC6650986ACDC7(Local_113[iParam0 /*33*/], 0x00000001);
		unk_0xAFF39FB306F8E232(Local_113[iParam0 /*33*/], 0x00000009, 0x00000001);
		unk_0x967762C930C0C5FD(Local_113[iParam0 /*33*/], 120f);
		unk_0x9FA191B317572861(Local_113[iParam0 /*33*/], 22f);
		unk_0xA656189732A3FF4B(Local_113[iParam0 /*33*/], 22f);
		unk_0x4E885A246A9D983A(Local_113[iParam0 /*33*/], 0x00000076, 0x00000000);
		unk_0x67415F01577A142E(Local_113[iParam0 /*33*/], 0x0000000E, 3f);
		if (Local_113[iParam0 /*33*/].f_1 == 0x00000002)
		{
			unk_0x298903DD96203C2C(Local_113[iParam0 /*33*/], 0x0000000C);
		}
		else
		{
			unk_0x298903DD96203C2C(Local_113[iParam0 /*33*/], 0x0000002D);
		}
		unk_0x1365063FA6365BE8(Local_113[iParam0 /*33*/], 0x00000001);
		unk_0x7980D72D61BEF4D5(Local_113[iParam0 /*33*/], 0x00000001);
		unk_0xAFF39FB306F8E232(Local_113[iParam0 /*33*/], 0x0000000F, 0x00000000);
		unk_0xAFF39FB306F8E232(Local_113[iParam0 /*33*/], 0x00000011, 0x00000000);
		func_108(Local_113[iParam0 /*33*/], 0x00000001);
	}
	unk_0x561C1BF2863AB0B1(Local_113[iParam0 /*33*/]);
	unk_0x120A395B0ECB8EA5(Local_113[iParam0 /*33*/], 0x00000001);
	unk_0xCF3472A5A8638B21(Local_113[iParam0 /*33*/], 0f, 0f, 0f);
	unk_0xBD04CCA6FBB81D61(Local_113[iParam0 /*33*/], 0x00000001);
	unk_0xA3E11DAF71FFB396(Local_113[iParam0 /*33*/], 0x00000001);
	unk_0xD458AC1C1D29C3B4(Local_113[iParam0 /*33*/], 0x00000096, 0x00000000);
	return 0x00000001;
}

void func_108(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	if (bParam1)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000040)
		{
			if (Global_F066[iVar0 /*2*/] != 0x00000000)
			{
				if (Global_F066[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (0x00000040 == Global_F065)
	{
		return;
	}
	iVar1 = 0xFFFFFFFF;
	iVar2 = 0x00000000;
	while (iVar1 == 0xFFFFFFFF && iVar2 != 0x00000040)
	{
		if (Global_F066[iVar2 /*2*/] == 0x00000000)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == 0xFFFFFFFF)
	{
		return;
	}
	Global_F066[iVar1 /*2*/] = iParam0;
	Global_F066[iVar1 /*2*/].f_1 = 0x00000007;
	Global_F065++;
}

void func_109(var uParam0, var uParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, vector3 vParam6, vector3 vParam7, vector3 vParam8, vector3 vParam9, vector3 vParam10, vector3 vParam11)
{
	if (iLocal_52 > 0x00000000)
	{
		func_121(uParam0, vParam8, vParam9, vParam6, vParam7);
		func_113(uParam0, uParam1, vParam2, vParam3, vParam4);
		func_110(uParam0, vParam5, vParam6, vParam7, vParam8, vParam9, vParam10, vParam11);
	}
}

void func_110(var uParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, vector3 vParam6, vector3 vParam7)
{
	if (unk_0x19C7D1907D1DDDAB())
	{
		if (bLocal_75)
		{
			if (((iLocal_60 > iLocal_68 || iLocal_69 != iLocal_61) || (iLocal_60 < iLocal_68 && iLocal_60 == 0x00000008)) || (iLocal_60 == 0x0000000A && bLocal_53 == 0x00000000))
			{
				iLocal_67 = 0x00000001;
				iLocal_68 = iLocal_60;
				iLocal_69 = iLocal_61;
			}
			switch (iLocal_67)
			{
				case 0x00000001:
					if (iLocal_61 > 0xFFFFFFFF)
					{
						if (!unk_0x28072FDD60CE3A6E((*uParam0)[iLocal_61 /*24*/], 0x00000001))
						{
							switch (iLocal_60)
							{
								case 0x00000008:
									if (!bLocal_53)
									{
										if (!bLocal_56)
										{
											if (!iLocal_74)
											{
												if (!func_88(vParam5.y))
												{
													func_94();
													if (func_111(vParam5.y, vParam5.z, (*uParam0)[iLocal_61 /*24*/], vParam5.x, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
													{
														iLocal_67 = 0x00000002;
													}
												}
											}
											else
											{
												iLocal_67 = 0x00000002;
											}
										}
										else if (!func_88(vParam4.y))
										{
											func_94();
											if (func_111(vParam4.y, vParam4.z, (*uParam0)[iLocal_61 /*24*/], vParam4.x, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
											{
												iLocal_67 = 0x00000002;
											}
										}
									}
									else
									{
										iLocal_67 = 0x00000002;
									}
									break;
								
								case 0x00000007:
									iLocal_74 = 0x00000000;
									func_94();
									if (func_111(vParam1.y, vParam1.z, (*uParam0)[iLocal_61 /*24*/], vParam1.x, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
									{
										iLocal_67 = 0x00000002;
									}
									break;
								
								case 0x00000005:
									iLocal_74 = 0x00000000;
									func_94();
									if (func_111(vParam6.y, vParam6.z, (*uParam0)[iLocal_61 /*24*/], vParam6.x, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
									{
										iLocal_67 = 0x00000002;
									}
									break;
								
								case 0x00000003:
									if (!bLocal_53 && !iLocal_74)
									{
										func_94();
										if (func_111(vParam7.y, vParam7.z, (*uParam0)[iLocal_61 /*24*/], vParam7.x, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
										{
											iLocal_67 = 0x00000002;
										}
									}
									else
									{
										iLocal_67 = 0x00000002;
									}
									break;
								
								case 0x00000006:
									if (!bLocal_56)
									{
										if (((!func_88(vParam2.y) && !func_88(vParam3.y)) && !func_88(vParam4.y)) && !func_88(vParam5.y))
										{
											iLocal_74 = 0x00000000;
											func_94();
											if (func_111(vParam2.y, vParam2.z, (*uParam0)[iLocal_61 /*24*/], vParam2.x, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
											{
												iLocal_67 = 0x00000002;
											}
										}
									}
									else
									{
										iLocal_67 = 0x00000002;
									}
									break;
								
								case 0x0000000A:
								case 0x00000009:
									if (!bLocal_56)
									{
										if (((!func_88(vParam2.y) && !func_88(vParam3.y)) && !func_88(vParam4.y)) && !func_88(vParam5.y))
										{
											iLocal_74 = 0x00000000;
											func_94();
											if (func_111(vParam3.y, vParam3.z, (*uParam0)[iLocal_61 /*24*/], vParam3.x, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
											{
												iLocal_67 = 0x00000002;
											}
										}
									}
									else
									{
										if (!bLocal_53)
										{
											if (func_111(vParam4.y, vParam4.z, (*uParam0)[iLocal_61 /*24*/], vParam4.x, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
											{
												iLocal_74 = 0x00000000;
												iLocal_67 = 0x00000002;
											}
										}
										iLocal_67 = 0x00000002;
									}
									break;
							}
						}
						else
						{
							iLocal_67 = 0x00000002;
						}
					}
					else
					{
						iLocal_67 = 0x00000002;
					}
					break;
				
				case 0x00000002:
					if (!func_65())
					{
						iLocal_67 = 0x00000000;
					}
					break;
				}
			}
	}
}

int func_111(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)
{
	func_64(sParam0, iParam1, iParam4, iParam7, iParam10);
	func_112(iParam1, iParam2, sParam3);
	if (iParam4 != 0xFFFFFFFF)
	{
		func_112(iParam4, iParam5, sParam6);
	}
	if (iParam7 != 0xFFFFFFFF)
	{
		func_112(iParam7, iParam8, sParam9);
	}
	if (iParam10 != 0xFFFFFFFF)
	{
		func_112(iParam10, iParam11, sParam12);
	}
	if (!func_59())
	{
		if (!unk_0xD17F06053799A7CA())
		{
			if (func_36(&Local_77, cLocal_78, sParam0, iParam13, 0x00000000, 0x00000000, 0x00000000))
			{
				iLocal_80 = 0x00000000;
				return 0x00000001;
			}
			else if (iLocal_79 != unk_0x1C0640BA9A7327B3())
			{
				iLocal_80++;
				iLocal_79 = unk_0x1C0640BA9A7327B3();
				if (iLocal_80 >= 0x0000000A)
				{
					iLocal_80 = 0x00000000;
					return 0x00000001;
				}
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_112(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_76)
	{
		if (iLocal_76[iVar0] == iParam1)
		{
			func_63(&Local_77, iVar0);
			iLocal_76[iVar0] = 0x00000000;
		}
		iVar0++;
	}
	if (iLocal_76[iParam0] != 0x00000000)
	{
		func_63(&Local_77, iParam0);
	}
	func_62(&Local_77, iParam0, iParam1, sParam2, 0x00000000, 0x00000001);
	iLocal_76[iParam0] = iParam1;
}

void func_113(var uParam0, var uParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	bool bVar8;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x28072FDD60CE3A6E((*uParam0)[iVar0 /*24*/], 0x00000001) && !unk_0x9E834FAC6CCB49FB((*uParam0)[iVar0 /*24*/]))
		{
			if (!(uParam0[iVar0 /*24*/])->f_15)
			{
				switch ((uParam0[iVar0 /*24*/])->f_3)
				{
					case 0x00000004:
						if ((unk_0xD3658E8B80B4DE3E((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || unk_0xD3658E8B80B4DE3E((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR")) || unk_0xD1960163A3042274((*uParam0)[iVar0 /*24*/], 0x6A67A5CC) == 0x00000001)
						{
							if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0 /*24*/]))
							{
								unk_0xA3BF0AA5A2608191((*uParam0)[iVar0 /*24*/]);
							}
							if (!unk_0x28072FDD60CE3A6E((*uParam0)[iVar0 /*24*/], 0x00000001))
							{
								unk_0x2ECF845953E95D1B((*uParam0)[iVar0 /*24*/]);
							}
						}
						else if (unk_0xD1960163A3042274((*uParam0)[iVar0 /*24*/], 0x623A5EFE) == 0x00000007)
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0x00000000:
									if (!unk_0x28072FDD60CE3A6E((*uParam0)[iVar0 /*24*/], 0x00000001))
									{
										unk_0x2ECF845953E95D1B((*uParam0)[iVar0 /*24*/]);
									}
									if (!unk_0xD3658E8B80B4DE3E((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") && !unk_0xD3658E8B80B4DE3E((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR"))
									{
										if (unk_0x405E212DDE472467((*uParam0)[iVar0 /*24*/], 0x00000000))
										{
											iVar2 = unk_0x3C66DF04E6EA3587((*uParam0)[iVar0 /*24*/]);
											if (unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
											{
												if (unk_0x20D6474D5F4B9FC6(iVar2))
												{
													vVar3 = { unk_0x56E9E0FD5ACCD35D(iVar2) };
													unk_0xC55F2A0377488064(iVar2);
													unk_0x37806EBF326ECEE9(iVar2, vVar3);
													unk_0x75CDA8644CD3B5F5((*uParam0)[iVar0 /*24*/], 0x00000000, 0x00000000);
												}
											}
										}
										if (!unk_0x405E212DDE472467((*uParam0)[iVar0 /*24*/], 0x00000000))
										{
											switch ((uParam0[iVar0 /*24*/])->f_1)
											{
												case 0x00000002:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0x00000000:
															if ((uParam0[iVar0 /*24*/])->f_A >= 0x00000000)
															{
																if (unk_0xC844350D5D58C99A((*uParam0)[(uParam0[iVar0 /*24*/])->f_A /*24*/]))
																{
																	fVar1 = func_119((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_A /*24*/]);
																	if (fVar1 > -45f && fVar1 < 45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 0x00000001;
																	}
																	else if (fVar1 > -135f && fVar1 <= -45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 0x00000002;
																	}
																	else if (fVar1 >= 45f && fVar1 <= 135f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 0x00000003;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 0x00000004;
																	}
																	(uParam0[iVar0 /*24*/])->f_B = unk_0x1C0640BA9A7327B3() + 500;
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_1 = 0x00000000;
																}
															}
															break;
														
														case 0x00000001:
															if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_B)
															{
																func_99();
																unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
																unk_0xC6EB89C59F2AF6B8(0x00000000, "misschinese2_bank1", "react_forward_small_intro_a", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
																unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
																func_98(uParam0[iVar0 /*24*/], 0x00000000);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 0x00000002:
															if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_B)
															{
																func_99();
																unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
																unk_0xC6EB89C59F2AF6B8(0x00000000, "misschinese2_bank1", "react_left_small_intro_a", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
																unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
																func_98(uParam0[iVar0 /*24*/], 0x00000000);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 0x00000003:
															if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_B)
															{
																func_99();
																unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
																unk_0xC6EB89C59F2AF6B8(0x00000000, "misschinese2_bank1", "react_right_small_intro_a", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
																unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
																func_98(uParam0[iVar0 /*24*/], 0x00000000);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 0x00000004:
															if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_B)
															{
																func_99();
																unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
																unk_0xC6EB89C59F2AF6B8(0x00000000, "misschinese2_bank1", "react_backward_small_intro_a", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
																unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
																func_98(uParam0[iVar0 /*24*/], 0x00000000);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 0x00000007:
													if ((uParam0[iVar0 /*24*/])->f_5 < 0x00000002)
													{
														unk_0xA3BF0AA5A2608191((*uParam0)[iVar0 /*24*/]);
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_63;
														iLocal_63++;
														if (iLocal_63 == 0x00000002)
														{
															iLocal_63 = 0x00000000;
														}
													}
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0x00000000:
															unk_0x5745EA6329A91E29((*uParam0)[iVar0 /*24*/], unk_0xE939991717D9E39F((*uParam0)[iVar0 /*24*/], 0x00000000), 0x00000001);
															func_99();
															if (!unk_0x405E212DDE472467((*uParam0)[iVar0 /*24*/], 0x00000001))
															{
																unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
																unk_0xC6EB89C59F2AF6B8(0x00000000, "misschinese2_bank1", "buddy_shot_b", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
																unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															unk_0x7C8478BF70C1E072(0x00000000, 200f, 0x00000000);
															func_98(uParam0[iVar0 /*24*/], 0x00000000);
															(uParam0[iVar0 /*24*/])->f_5 = unk_0x1C0640BA9A7327B3() + 3000;
															break;
														
														case 0x00000001:
															func_99();
															unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
															iVar4 = func_118();
															unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
															unk_0x7C8478BF70C1E072(0x00000000, 200f, 0x00000000);
															func_98(uParam0[iVar0 /*24*/], 0x00000000);
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x1C0640BA9A7327B3() + iVar4);
															break;
														
														default:
															if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0x00000003))
															{
																if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") < 0.2f)
																{
																	unk_0x4E6D1F54D3FBC5B1((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0.2f);
																}
															}
															if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 0x00000005:
													if ((uParam0[iVar0 /*24*/])->f_5 <= 0x00000002)
													{
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_64;
														iLocal_64++;
														if (iLocal_64 == 0x00000002)
														{
															iLocal_64 = 0x00000000;
														}
													}
													if (!unk_0x405E212DDE472467((*uParam0)[iVar0 /*24*/], 0x00000001))
													{
														switch ((uParam0[iVar0 /*24*/])->f_5)
														{
															case 0x00000000:
																unk_0x11AD11297DC58CC7((*uParam0)[iVar0 /*24*/], 0x00000001);
																unk_0xC6EB89C59F2AF6B8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 4f, -4f, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
																(uParam0[iVar0 /*24*/])->f_5 = 0x00000003;
																break;
															
															case 0x00000001:
																unk_0x11AD11297DC58CC7((*uParam0)[iVar0 /*24*/], 0x00000001);
																unk_0xC6EB89C59F2AF6B8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 4f, -4f, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
																unk_0x5745EA6329A91E29((*uParam0)[iVar0 /*24*/], unk_0xE939991717D9E39F((*uParam0)[iVar0 /*24*/], 0x00000000), 0x00000001);
																(uParam0[iVar0 /*24*/])->f_5 = 0x00000003;
																break;
															
															case 0x00000003:
																if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 0x00000003))
																{
																	if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.95f)
																	{
																		if (func_116(iVar0, uParam0, 0x00000000))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 0x00000004;
																		}
																		else
																		{
																			unk_0xC6EB89C59F2AF6B8((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, unk_0x09AC81E49EA267F7(0x00000FA0, 0x00001770), 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
																			(uParam0[iVar0 /*24*/])->f_5 = 0x00000006;
																		}
																	}
																}
																if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0x00000003))
																{
																	if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.95f)
																	{
																		if (func_116(iVar0, uParam0, 0x00000000))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 0x00000005;
																		}
																		else
																		{
																			unk_0xC6EB89C59F2AF6B8((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_e", 4f, -2f, unk_0x09AC81E49EA267F7(0x00000FA0, 0x00001770), 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
																			(uParam0[iVar0 /*24*/])->f_5 = 0x00000006;
																		}
																	}
																}
																break;
															
															case 0x00000004:
																if (unk_0x755FF954DAE327E1((unk_0xD9522BA9E27E1349((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_12)) < 10f)
																{
																	unk_0xC6EB89C59F2AF6B8((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, unk_0x09AC81E49EA267F7(0x00001770, 0x00002328), 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
																	(uParam0[iVar0 /*24*/])->f_5 = 0x00000006;
																}
																break;
															
															case 0x00000005:
																if (unk_0x755FF954DAE327E1((unk_0xD9522BA9E27E1349((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_12)) < 10f)
																{
																	unk_0xC6EB89C59F2AF6B8((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_f", 4f, -2f, unk_0x09AC81E49EA267F7(0x00001770, 0x00002328), 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
																	(uParam0[iVar0 /*24*/])->f_5 = 0x00000006;
																}
																break;
															
															case 0x00000006:
																if (unk_0xD1960163A3042274((*uParam0)[iVar0 /*24*/], 0x87B9A382) == 0x00000007)
																{
																	(uParam0[iVar0 /*24*/])->f_5 = 0x00000000;
																	(uParam0[iVar0 /*24*/])->f_4++;
																}
																break;
														}
													}
													else
													{
														(uParam0[iVar0 /*24*/])->f_5 = 0x00000000;
														(uParam0[iVar0 /*24*/])->f_4++;
													}
													break;
												
												case 0x00000004:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0x00000000:
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000000, 0x000007D0));
															break;
														
														default:
															if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_3 = 0x00000005;
																(uParam0[iVar0 /*24*/])->f_1 = 0x00000000;
																(uParam0[iVar0 /*24*/])->f_4 = 0x00000000;
															}
															break;
													}
													break;
												
												case 0x00000008:
													if ((uParam0[iVar0 /*24*/])->f_3 != 0x00000006 && (uParam0[iVar0 /*24*/])->f_3 != 0x00000005)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 0x00000005;
														(uParam0[iVar0 /*24*/])->f_4 = 0x00000000;
													}
													break;
												
												case 0x0000000A:
													if ((uParam0[iVar0 /*24*/])->f_3 != 0x00000006)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 0x00000006;
														(uParam0[iVar0 /*24*/])->f_4 = 0x00000000;
													}
													break;
												
												case 0x00000003:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0x00000000:
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000000, 0x000007D0));
															break;
														
														default:
															if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_5)
															{
																if ((uParam0[iVar0 /*24*/])->f_3 != 0x00000006 && (uParam0[iVar0 /*24*/])->f_3 != 0x00000005)
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 0x00000005;
																	(uParam0[iVar0 /*24*/])->f_1 = 0x00000000;
																	(uParam0[iVar0 /*24*/])->f_4 = 0x00000000;
																}
															}
															break;
													}
													break;
												
												case 0x00000001:
													iLocal_62 = iVar0;
													if (func_115(iVar0, uParam0, "", vParam2, vParam3, vParam4, 0x00000000))
													{
														(uParam0[iVar0 /*24*/])->f_3 = 0x00000005;
														(uParam0[iVar0 /*24*/])->f_1 = 0x00000000;
														(uParam0[iVar0 /*24*/])->f_4 = 0x00000000;
													}
													break;
												
												case 0x00000006:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0x00000000:
															if (iLocal_65 == 0x00000000)
															{
																if (!unk_0x405E212DDE472467((*uParam0)[iVar0 /*24*/], 0x00000001))
																{
																	vVar5 = { unk_0x68F4C0EC296D3901((*uParam0)[iVar0 /*24*/], 0x00000001) };
																	vVar6 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
																	fVar7 = unk_0x10FCEF75D66B7A3B(((vVar6.z - vVar5.z) / func_4((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9(), 0x00000000)));
																	if (fVar7 > 20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 0x00000001;
																	}
																	else if (fVar7 < -20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 0x00000002;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 0x00000003;
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 0x00000006;
																	(uParam0[iVar0 /*24*/])->f_1 = 0x0000000A;
																	(uParam0[iVar0 /*24*/])->f_4 = 0x00000000;
																}
																iLocal_65++;
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_3 = 0x00000006;
																(uParam0[iVar0 /*24*/])->f_1 = 0x0000000A;
																(uParam0[iVar0 /*24*/])->f_4 = 0x00000000;
															}
															break;
														
														case 0x00000001:
															func_99();
															unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
															unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x000003E8);
															unk_0xC6EB89C59F2AF6B8(0x00000000, "misschinese2_bank1", "spot_high", 4f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
															unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
															func_98(uParam0[iVar0 /*24*/], 0x00000000);
															(uParam0[iVar0 /*24*/])->f_5 = 0x00000004;
															break;
														
														case 0x00000002:
															func_99();
															unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
															unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x000003E8);
															unk_0xC6EB89C59F2AF6B8(0x00000000, "misschinese2_bank1", "spot_low", 4f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
															unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
															func_98(uParam0[iVar0 /*24*/], 0x00000000);
															(uParam0[iVar0 /*24*/])->f_5 = 0x00000004;
															break;
														
														case 0x00000003:
															func_99();
															unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
															unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x000003E8);
															unk_0xC6EB89C59F2AF6B8(0x00000000, "misschinese2_bank1", "spot_mid", 4f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
															unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
															func_98(uParam0[iVar0 /*24*/], 0x00000000);
															(uParam0[iVar0 /*24*/])->f_5 = 0x00000004;
															break;
														
														case 0x00000004:
															if (bLocal_56)
															{
																if (unk_0x755FF954DAE327E1(func_119((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9())) < 20f)
																{
																	if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high", 0x00000003))
																	{
																		if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high") > func_114(((func_4((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9(), 0x00000001) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 0x00000006;
																			(uParam0[iVar0 /*24*/])->f_1 = 0x0000000A;
																			(uParam0[iVar0 /*24*/])->f_4 = 0x00000000;
																		}
																	}
																	if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid", 0x00000003))
																	{
																		if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid") > func_114(((func_4((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9(), 0x00000001) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 0x00000006;
																			(uParam0[iVar0 /*24*/])->f_1 = 0x0000000A;
																			(uParam0[iVar0 /*24*/])->f_4 = 0x00000000;
																		}
																	}
																	if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low", 0x00000003))
																	{
																		if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low") > func_114(((func_4((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9(), 0x00000001) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 0x00000006;
																			(uParam0[iVar0 /*24*/])->f_1 = 0x0000000A;
																			(uParam0[iVar0 /*24*/])->f_4 = 0x00000000;
																		}
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 0x00000006;
																	(uParam0[iVar0 /*24*/])->f_1 = 0x0000000A;
																	(uParam0[iVar0 /*24*/])->f_4 = 0x00000000;
																}
															}
															break;
													}
													break;
											}
										}
										else
										{
											(uParam0[iVar0 /*24*/])->f_4++;
										}
									}
									break;
								
								case 0x00000001:
									if (!(uParam0[iVar0 /*24*/])->f_15)
									{
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 0x00000003))
										{
											bVar8 = 0x00000001;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.9f)
											{
												bVar8 = 0x00000000;
											}
										}
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0x00000003))
										{
											bVar8 = 0x00000001;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.9f)
											{
												bVar8 = 0x00000000;
											}
										}
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a", 0x00000003))
										{
											bVar8 = 0x00000001;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a") > 0.9f)
											{
												bVar8 = 0x00000000;
											}
										}
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body", 0x00000003))
										{
											bVar8 = 0x00000001;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body") > 0.9f)
											{
												bVar8 = 0x00000000;
											}
										}
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a", 0x00000003))
										{
											bVar8 = 0x00000001;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a") > 0.9f)
											{
												bVar8 = 0x00000000;
											}
										}
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a", 0x00000003))
										{
											bVar8 = 0x00000001;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a") > 0.9f)
											{
												bVar8 = 0x00000000;
											}
										}
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a", 0x00000003))
										{
											bVar8 = 0x00000001;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a") > 0.9f)
											{
												bVar8 = 0x00000000;
											}
										}
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a", 0x00000003))
										{
											bVar8 = 0x00000001;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a") > 0.9f)
											{
												bVar8 = 0x00000000;
											}
										}
										if (!bVar8)
										{
											(uParam0[iVar0 /*24*/])->f_4 = 0x00000002;
											(uParam0[iVar0 /*24*/])->f_5 = unk_0x1C0640BA9A7327B3() + 2000;
											unk_0x6C3AE6E278DB3D0E((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
											unk_0xE8832A9E16A57A1F((*uParam0)[iVar0 /*24*/], 0x00000001, 0x00000001);
											unk_0x26A6B1686E33113F((*uParam0)[iVar0 /*24*/], 0x00000001);
										}
									}
									break;
								
								case 0x00000002:
									if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_5)
									{
										(uParam0[iVar0 /*24*/])->f_3 = 0x00000005;
										(uParam0[iVar0 /*24*/])->f_1 = 0x00000000;
										(uParam0[iVar0 /*24*/])->f_4 = 0x00000000;
									}
									break;
								}
						}
						break;
					
					case 0x00000005:
					case 0x00000006:
						if (unk_0xD3658E8B80B4DE3E((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || unk_0xACCBB8E1BDF4D6BE((*uParam0)[iVar0 /*24*/]))
						{
							if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0 /*24*/]))
							{
								unk_0xA3BF0AA5A2608191((*uParam0)[iVar0 /*24*/]);
							}
						}
						else
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0x00000000:
									(uParam0[iVar0 /*24*/])->f_B = 0x00000000;
									if ((iVar0 == 0x0000000C || iVar0 == 0x0000000D) || iVar0 == 0x0000000E)
									{
									}
									unk_0x5745EA6329A91E29((*uParam0)[iVar0 /*24*/], unk_0xE939991717D9E39F((*uParam0)[iVar0 /*24*/], 0x00000000), 0x00000001);
									unk_0x11AD11297DC58CC7((*uParam0)[iVar0 /*24*/], 0x00000000);
									unk_0xD35BB27936A678E2((*uParam0)[iVar0 /*24*/]);
									unk_0xAFF39FB306F8E232((*uParam0)[iVar0 /*24*/], 0x00000032, 0x00000001);
									unk_0xBAFED2F6486F771A((*uParam0)[iVar0 /*24*/], 0x00000200, 0x00000001);
									(uParam0[iVar0 /*24*/])->f_4++;
									break;
								
								case 0x00000001:
									if (!(uParam0[iVar0 /*24*/])->f_14)
									{
										*(uParam1[0x00000000 /*3*/]) = { *(uParam1[0x00000000 /*3*/]) };
										iLocal_66 = iLocal_66;
										uLocal_70 = uLocal_70;
										unk_0x6C3AE6E278DB3D0E((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
										unk_0xE8832A9E16A57A1F((*uParam0)[iVar0 /*24*/], 0x00000001, 0x00000001);
										unk_0x26A6B1686E33113F((*uParam0)[iVar0 /*24*/], 0x00000001);
										(uParam0[iVar0 /*24*/])->f_4++;
										(uParam0[iVar0 /*24*/])->f_B = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00004E20, 0x000088B8));
									}
									break;
								}
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

float func_114(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

int func_115(int iParam0, var uParam1, char* sParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, bool bParam6)
{
	switch ((uParam1[iParam0 /*24*/])->f_5)
	{
		case 0x00000000:
			if (!unk_0x7F8A39872A07D2CE("chi2_hear", vParam3.y))
			{
				if (func_65())
				{
					if (!func_88(vParam3.y))
					{
						func_91();
					}
				}
				if (func_111(vParam3.y, vParam3.z, (*uParam1)[iParam0 /*24*/], vParam3.x, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
				{
					(uParam1[iParam0 /*24*/])->f_C = { unk_0x68F4C0EC296D3901((*uParam1)[iParam0 /*24*/], 0x00000001) };
					(uParam1[iParam0 /*24*/])->f_12 = unk_0xD9522BA9E27E1349((*uParam1)[iParam0 /*24*/]);
					(uParam1[iParam0 /*24*/])->f_5 = 0x00000000;
					(uParam1[iParam0 /*24*/])->f_5++;
					(uParam1[iParam0 /*24*/])->f_B = unk_0x1C0640BA9A7327B3() + 1000;
				}
			}
			else
			{
				(uParam1[iParam0 /*24*/])->f_C = { unk_0x68F4C0EC296D3901((*uParam1)[iParam0 /*24*/], 0x00000001) };
				(uParam1[iParam0 /*24*/])->f_12 = unk_0xD9522BA9E27E1349((*uParam1)[iParam0 /*24*/]);
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 0x00000001:
			if (unk_0x1C0640BA9A7327B3() > (uParam1[iParam0 /*24*/])->f_B)
			{
				unk_0x796BDF31572BB055((*uParam1)[iParam0 /*24*/], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00001388);
				(uParam1[iParam0 /*24*/])->f_5++;
				(uParam1[iParam0 /*24*/])->f_B = unk_0x1C0640BA9A7327B3() + 5000;
			}
			break;
		
		case 0x00000002:
			if (!unk_0x7F8A39872A07D2CE("chi2_hear", vParam3.y))
			{
				if ((unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), (*uParam1)[iParam0 /*24*/]) || iLocal_73 == 0x00000001) && func_73((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_C, 0x00000001) < (uParam1[iParam0 /*24*/])->f_13)
				{
					if (unk_0x1C0640BA9A7327B3() > ((uParam1[iParam0 /*24*/])->f_B - 0x00000BB8))
					{
						unk_0x96167B03C5A77156((*uParam1)[iParam0 /*24*/], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 1f, 0x00004E20, 0.1f, 0x00000000, 0x471C4000);
						(uParam1[iParam0 /*24*/])->f_F = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
						(uParam1[iParam0 /*24*/])->f_5 = 0x00000005;
					}
				}
				else if (unk_0x1C0640BA9A7327B3() > (uParam1[iParam0 /*24*/])->f_B)
				{
					if (func_111(vParam5.y, vParam5.z, (*uParam1)[iParam0 /*24*/], vParam5.x, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
					{
						if (bParam6)
						{
						}
						(uParam1[iParam0 /*24*/])->f_5++;
					}
				}
			}
			else if (unk_0x1C0640BA9A7327B3() > (uParam1[iParam0 /*24*/])->f_B)
			{
				unk_0xE655C47E46F9A7E4((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_12, 0x000007D0);
				(uParam1[iParam0 /*24*/])->f_5 = 0x00000004;
			}
			break;
		
		case 0x00000003:
			func_99();
			unk_0x96167B03C5A77156(0x00000000, (uParam1[iParam0 /*24*/])->f_C, 1f, 0x00004E20, 0.2f, 0x00001000, 0x471C4000);
			unk_0xE655C47E46F9A7E4(0x00000000, (uParam1[iParam0 /*24*/])->f_12, 0x000007D0);
			func_98(uParam1[iParam0 /*24*/], 0x00000000);
			(uParam1[iParam0 /*24*/])->f_B = unk_0x1C0640BA9A7327B3() + 3000;
			(uParam1[iParam0 /*24*/])->f_5++;
			break;
		
		case 0x00000004:
			if (unk_0xD1960163A3042274((*uParam1)[iParam0 /*24*/], 0x0E763797) == 0x00000007 || (unk_0x7F8A39872A07D2CE("chi2_hear", vParam3.y) && unk_0xD1960163A3042274((*uParam1)[iParam0 /*24*/], 0x7276D3DF) == 0x00000007))
			{
				if (!unk_0x7F8A39872A07D2CE(sParam2, ""))
				{
					unk_0x509B8296EBA9B408((*uParam1)[iParam0 /*24*/], sParam2, 0x00000000, 0x00000001);
				}
				(uParam1[iParam0 /*24*/])->f_4 = 0x00000000;
				(uParam1[iParam0 /*24*/])->f_5 = 0x00000000;
				(uParam1[iParam0 /*24*/])->f_1 = 0x00000000;
				(uParam1[iParam0 /*24*/])->f_2 = 0x00000000;
				if (unk_0x7F8A39872A07D2CE("chi2_hear", vParam3.y))
				{
					(uParam1[iParam0 /*24*/])->f_3 = 0x00000003;
				}
				else
				{
					(uParam1[iParam0 /*24*/])->f_3 = 0x00000002;
				}
				iLocal_62 = 0xFFFFFFFF;
			}
			break;
		
		case 0x00000005:
			if (func_111(vParam3.y, vParam4.z, (*uParam1)[iParam0 /*24*/], vParam3.x, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
			{
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 0x00000006:
			if (func_73((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_F, 0x00000001) < 2f || unk_0xD1960163A3042274((*uParam1)[iParam0 /*24*/], 0x2A89B8A7) == 0x00000007)
			{
				if (!unk_0xEB6A8945D1AC98A1((*uParam1)[iParam0 /*24*/]))
				{
					unk_0xA3BF0AA5A2608191((*uParam1)[iParam0 /*24*/]);
					func_99();
					unk_0xDBE4EC9C88839074(0x00000000, unk_0x68E4ADDDDCD7BDDE((*uParam1)[iParam0 /*24*/], -5f, 3f, 0f), 0x000009C4, 0x00000000, 0x00000002);
					unk_0xDBE4EC9C88839074(0x00000000, unk_0x68E4ADDDDCD7BDDE((*uParam1)[iParam0 /*24*/], 5f, 3f, 0f), 0x000009C4, 0x00000000, 0x00000002);
					func_98(uParam1[iParam0 /*24*/], 0x00000000);
					(uParam1[iParam0 /*24*/])->f_B = unk_0x1C0640BA9A7327B3() + 3000;
					(uParam1[iParam0 /*24*/])->f_5 = 0x00000002;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_116(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 1000f;
	iVar3 = 0xFFFFFFFF;
	if (!unk_0x28072FDD60CE3A6E((*uParam1)[iParam0 /*24*/], 0x00000001))
	{
		iVar0 = 0x00000000;
		while (iVar0 < *uParam1)
		{
			if (unk_0x28072FDD60CE3A6E((*uParam1)[iVar0 /*24*/], 0x00000001) && unk_0xC844350D5D58C99A((*uParam1)[iVar0 /*24*/]))
			{
				fVar2 = func_4((*uParam1)[iVar0 /*24*/], (*uParam1)[iParam0 /*24*/], 0x00000001);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar3 == 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		else
		{
			(uParam1[iParam0 /*24*/])->f_12 = func_119((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/]);
			if (unk_0x755FF954DAE327E1((uParam1[iParam0 /*24*/])->f_12) > 20f)
			{
				if (bParam2)
				{
					unk_0xF96A174EE26D7588(0x00000000, (*uParam1)[iVar3 /*24*/], 0x00000000);
				}
				else
				{
					unk_0xF96A174EE26D7588((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 0x00000000);
				}
				(uParam1[iParam0 /*24*/])->f_12 = func_117((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 0x00000001);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

float func_117(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000000) };
	return func_102(vVar0, vVar1, iParam2);
}

int func_118()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = 0xFFFFFFFF;
	unk_0xC6EB89C59F2AF6B8(0x00000000, "misschinese2_bank1", "reaction_forward_big_intro_a", 4f, -2f, 0x00000578, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000003)
	{
		iVar2 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
		iVar3 = unk_0x09AC81E49EA267F7(0x0000044C, 0x00000708);
		iVar4 = (iVar4 + iVar3);
		if (iVar2 == iVar1)
		{
			iVar2++;
			if (iVar2 > 0x00000002)
			{
				iVar2 = 0x00000000;
			}
		}
		iVar1 = iVar2;
		switch (iVar2)
		{
			case 0x00000000:
				iVar2 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000004);
				switch (iVar2)
				{
					case 0x00000000:
						unk_0xC6EB89C59F2AF6B8(0x00000000, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_a", 4f, -2f, iVar3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						break;
					
					case 0x00000001:
						unk_0xC6EB89C59F2AF6B8(0x00000000, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_b", 4f, -2f, iVar3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						break;
					
					case 0x00000002:
						unk_0xC6EB89C59F2AF6B8(0x00000000, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_c", 4f, -2f, iVar3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						break;
				}
				break;
			
			case 0x00000001:
				iVar2 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000004);
				switch (iVar2)
				{
					case 0x00000000:
						unk_0xC6EB89C59F2AF6B8(0x00000000, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_a", 4f, -2f, iVar3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						break;
					
					case 0x00000001:
						unk_0xC6EB89C59F2AF6B8(0x00000000, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_b", 4f, -2f, iVar3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						break;
					
					case 0x00000002:
						unk_0xC6EB89C59F2AF6B8(0x00000000, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_c", 4f, -2f, iVar3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						break;
				}
				break;
			
			case 0x00000002:
				iVar2 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000004);
				switch (iVar2)
				{
					case 0x00000000:
						unk_0xC6EB89C59F2AF6B8(0x00000000, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_a", 4f, -2f, iVar3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						break;
					
					case 0x00000001:
						unk_0xC6EB89C59F2AF6B8(0x00000000, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_b", 4f, -2f, iVar3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						break;
					
					case 0x00000002:
						unk_0xC6EB89C59F2AF6B8(0x00000000, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_c", 4f, -2f, iVar3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						break;
				}
				break;
		}
		iVar0++;
	}
	return iVar4;
}

float func_119(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xC844350D5D58C99A(iParam1))
	{
		return func_120(iParam0, unk_0x68F4C0EC296D3901(iParam1, 0x00000000));
	}
	return 0f;
}

float func_120(int iParam0, vector3 vParam1)
{
	float fVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			fVar0 = func_102(unk_0x68F4C0EC296D3901(iParam0, 0x00000000), vParam1, 0x00000001);
			return (fVar0 - unk_0xD9522BA9E27E1349(iParam0));
		}
	}
	return 0f;
}

void func_121(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, struct<2> Param7, var uParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	
	if (!bLocal_53 == 0x00000001)
	{
		bLocal_82 = 0x00000000;
		if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000018))
		{
			iVar0 = 0x00000000;
			while (iVar0 < *uParam0)
			{
				if (!unk_0x28072FDD60CE3A6E((*uParam0)[iVar0 /*24*/], 0x00000001))
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iLocal_83 == 0x00000000)
			{
				iLocal_83 = iVar1;
			}
			if (iVar1 < iLocal_83)
			{
				iLocal_83 = iVar1;
				bLocal_82 = 0x00000001;
			}
		}
		iVar2 = 0x00000004;
		while (iVar2 > 0x00000000)
		{
			if (!unk_0x28072FDD60CE3A6E((*uParam0)[iLocal_58 /*24*/], 0x00000001))
			{
				if ((uParam0[iLocal_58 /*24*/])->f_3 > 0x00000003 && (uParam0[iLocal_58 /*24*/])->f_1 > 0x00000001)
				{
					iVar0 = 0x00000000;
					while (iVar0 < *uParam0)
					{
						if (!unk_0x28072FDD60CE3A6E((*uParam0)[iVar0 /*24*/], 0x00000001))
						{
							if (iVar0 != iLocal_58)
							{
								if ((uParam0[iVar0 /*24*/])->f_3 <= 0x00000004)
								{
									if (func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_58 /*24*/], 0x00000001) < 8f)
									{
										if ((unk_0x4D570FEF9D230CE7((*uParam0)[iLocal_58 /*24*/]) != 0x00000000 && unk_0x4D570FEF9D230CE7((*uParam0)[iVar0 /*24*/]) != 0x00000000) || (unk_0x4D570FEF9D230CE7((*uParam0)[iLocal_58 /*24*/]) == 0x00000000 && unk_0x4D570FEF9D230CE7((*uParam0)[iVar0 /*24*/]) == 0x00000000))
										{
											vVar3 = { unk_0x68F4C0EC296D3901((*uParam0)[iVar0 /*24*/], 0x00000001) };
											vVar4 = { unk_0x68F4C0EC296D3901((*uParam0)[iLocal_58 /*24*/], 0x00000000) };
											if (unk_0x755FF954DAE327E1((vVar3.z - vVar4.z)) < 2f)
											{
												(uParam0[iVar0 /*24*/])->f_7 = 0x00000001;
												(uParam0[iVar0 /*24*/])->f_A = iLocal_58;
											}
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
					fVar5 = 10f;
					fVar6 = 11f;
					(uParam0[iLocal_58 /*24*/])->f_16 = 0xFFFFFFFF;
					(uParam0[iLocal_58 /*24*/])->f_17 = 0xFFFFFFFF;
					iVar0 = 0x00000000;
					while (iVar0 < *uParam0)
					{
						if (iVar0 != iLocal_58)
						{
							if (unk_0xC844350D5D58C99A((*uParam0)[iVar0 /*24*/]))
							{
								fVar7 = func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_58 /*24*/], 0x00000001);
								if (fVar7 < 10f)
								{
									fVar8 = func_119((*uParam0)[iLocal_58 /*24*/], (*uParam0)[iVar0 /*24*/]);
									if (fVar8 > -90f && fVar8 < 90f)
									{
										if (fVar7 < fVar5)
										{
											(uParam0[iLocal_58 /*24*/])->f_17 = (uParam0[iLocal_58 /*24*/])->f_16;
											(uParam0[iLocal_58 /*24*/])->f_16 = iVar0;
											fVar6 = fVar5;
											fVar5 = fVar7;
										}
										else if (fVar7 < fVar6)
										{
											fVar6 = fVar7;
											(uParam0[iLocal_58 /*24*/])->f_17 = iVar0;
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
			iLocal_58++;
			if (iLocal_58 >= *uParam0)
			{
				iLocal_58 = 0x00000000;
			}
			iVar2 = (iVar2 - 0x00000001);
		}
	}
	if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
	{
		iVar9 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (unk_0xDF1306B443CD3D15(iVar9, 0x00000000))
		{
			if (unk_0x2F6DBDA9ACD7D3AB(iVar9))
			{
				iVar10 = 0x00000001;
			}
		}
	}
	if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, vLocal_71, fLocal_72))
	{
		bLocal_54 = 0x00000001;
	}
	if (!iLocal_55)
	{
		if (func_88(Param1.f_1) || func_88(Param3.f_1))
		{
			iLocal_59 = unk_0x1C0640BA9A7327B3() + 1000;
			iLocal_55 = 0x00000001;
		}
		if (func_88(Param5.f_1) || func_88(Param7.f_1))
		{
			iLocal_59 = unk_0x1C0640BA9A7327B3() + 1000;
			iLocal_55 = 0x00000001;
		}
	}
	else if (((!func_88(Param1.f_1) && !func_88(Param3.f_1)) && !func_88(Param5.f_1)) && !func_88(Param7.f_1))
	{
		iLocal_55 = 0x00000000;
	}
	else if (unk_0x1C0640BA9A7327B3() > iLocal_59)
	{
		if (func_88(Param1.f_1) || func_88(Param3.f_1))
		{
			bLocal_53 = 0x00000001;
		}
		if (func_88(Param5.f_1) || func_88(Param7.f_1))
		{
			bLocal_56 = 0x00000001;
		}
	}
	iLocal_60 = 0x00000000;
	iVar11 = 0xFFFFFFFF;
	fVar12 = 13f;
	iLocal_57 = 0x00000000;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar13 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
	}
	if (iLocal_62 == 0xFFFFFFFF)
	{
		iLocal_73 = 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x28072FDD60CE3A6E((*uParam0)[iVar0 /*24*/], 0x00000001))
		{
			if ((uParam0[iVar0 /*24*/])->f_3 != 0x00000007)
			{
				(uParam0[iVar0 /*24*/])->f_2 = (uParam0[iVar0 /*24*/])->f_1;
				(uParam0[iVar0 /*24*/])->f_1 = 0x00000000;
				if ((uParam0[iVar0 /*24*/])->f_3 <= 0x00000004)
				{
					if (iLocal_62 == 0xFFFFFFFF)
					{
						if (unk_0xDF1306B443CD3D15(iVar13, 0x00000000))
						{
							if (unk_0x2F6DBDA9ACD7D3AB(iVar13))
							{
								iLocal_73 = 0x00000001;
								fVar12 = 20f;
							}
							if (unk_0xB9F5AD0599FD42F7(iVar13))
							{
								iLocal_73 = 0x00000001;
								fVar12 = 50f;
							}
						}
						if (unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), (*uParam0)[iVar0 /*24*/]) || (unk_0xDF1306B443CD3D15(iVar13, 0x00000000) && unk_0x2F6DBDA9ACD7D3AB(iVar13)))
						{
							if (func_4(unk_0x16F2683693E537C9(), (*uParam0)[iVar0 /*24*/], 0x00000001) < fVar12)
							{
								if ((uParam0[iVar0 /*24*/])->f_8)
								{
									if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0x4D570FEF9D230CE7((*uParam0)[iVar0 /*24*/]))
									{
										fVar12 = func_4(unk_0x16F2683693E537C9(), (*uParam0)[iVar0 /*24*/], 0x00000001);
										iVar11 = iVar0;
										(uParam0[iVar0 /*24*/])->f_1 = 0x00000001;
										(uParam0[iVar0 /*24*/])->f_13 = (fVar12 + 5f);
									}
								}
							}
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_7)
					{
						(uParam0[iVar0 /*24*/])->f_7 = 0x00000000;
						(uParam0[iVar0 /*24*/])->f_1 = 0x00000002;
					}
					if (bLocal_54)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 0x00000003;
					}
					if (bLocal_53)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 0x00000004;
					}
					if (bLocal_82)
					{
					}
					if (!bLocal_82 && !unk_0x869EFD0BC0868856((*uParam0)[iVar0 /*24*/]))
					{
						if (unk_0xFEABCECA098C0A91((*uParam0)[iVar0 /*24*/], 0x0000007D))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 0x00000007;
						}
						if (unk_0xFA4CE147B4D9AEE0((*uParam0)[iVar0 /*24*/], 0x0000007D))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 0x00000007;
							if (unk_0xFEABCECA098C0A91((*uParam0)[iVar0 /*24*/], 0x00000011))
							{
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_9)
						{
							if (unk_0xD15F544473A95FE8(unk_0x68F4C0EC296D3901((*uParam0)[iVar0 /*24*/], 0x00000001), 4f, 0x00000001, 0x00000001))
							{
								(uParam0[iVar0 /*24*/])->f_1 = 0x00000007;
							}
						}
						else if (unk_0xD15F544473A95FE8(unk_0x68F4C0EC296D3901((*uParam0)[iVar0 /*24*/], 0x00000001), 6f, 0x00000001, 0x00000001))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 0x00000007;
						}
						if (unk_0xFEABCECA098C0A91((*uParam0)[iVar0 /*24*/], 0x0000007E))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 0x00000007;
						}
						if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901((*uParam0)[iVar0 /*24*/], 0x00000001), 1f, 0x00000001))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 0x00000007;
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_3 < 0x00000004)
					{
						if ((uParam0[iVar0 /*24*/])->f_16 != 0xFFFFFFFF)
						{
							if (unk_0xC844350D5D58C99A((*uParam0)[(uParam0[iVar0 /*24*/])->f_16 /*24*/]))
							{
								if (unk_0x28072FDD60CE3A6E((*uParam0)[(uParam0[iVar0 /*24*/])->f_16 /*24*/], 0x00000001))
								{
									if (unk_0x6AB6A474D29FA7D8((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_16 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 0x00000005;
									}
								}
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_17 != 0xFFFFFFFF)
						{
							if (unk_0xC844350D5D58C99A((*uParam0)[(uParam0[iVar0 /*24*/])->f_17 /*24*/]))
							{
								if (unk_0x28072FDD60CE3A6E((*uParam0)[(uParam0[iVar0 /*24*/])->f_17 /*24*/], 0x00000001))
								{
									if (unk_0x6AB6A474D29FA7D8((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_17 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 0x00000005;
									}
								}
							}
						}
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 0x00000005)
				{
					if ((uParam0[iVar0 /*24*/])->f_1 == 0x00000000)
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 0x00000004 || unk_0x4734A6196B611C3B((*uParam0)[iVar0 /*24*/], 0x00000000))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 0x00000008;
						}
					}
					if (((unk_0xFEABCECA098C0A91((*uParam0)[iVar0 /*24*/], 0x00000001) || unk_0xFA4CE147B4D9AEE0((*uParam0)[iVar0 /*24*/], 0x00000001)) || (unk_0x4734A6196B611C3B((*uParam0)[iVar0 /*24*/], 0x00000000) && unk_0x25176BBC501E783C((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9()))) || (func_122((*uParam0)[iVar0 /*24*/]) && unk_0xFA4CE147B4D9AEE0((*uParam0)[iVar0 /*24*/], 0x00000001)))
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 0x00000004)
						{
							(uParam0[iVar0 /*24*/])->f_1 = 0x00000009;
						}
						else
						{
							(uParam0[iVar0 /*24*/])->f_1 = 0x00000006;
						}
					}
				}
				if (iVar10 && func_4(unk_0x16F2683693E537C9(), (*uParam0)[iVar0 /*24*/], 0x00000001) < 50f)
				{
					(uParam0[iVar0 /*24*/])->f_1 = 0x00000006;
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 0x00000006)
				{
					if (bLocal_56)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 0x0000000A;
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_1 <= (uParam0[iVar0 /*24*/])->f_2)
				{
					(uParam0[iVar0 /*24*/])->f_1 = (uParam0[iVar0 /*24*/])->f_2;
				}
				else
				{
					(uParam0[iVar0 /*24*/])->f_3 = 0x00000004;
					(uParam0[iVar0 /*24*/])->f_4 = 0x00000000;
					(uParam0[iVar0 /*24*/])->f_5 = 0x00000000;
				}
				if ((uParam0[iVar0 /*24*/])->f_1 > iLocal_60)
				{
					iLocal_60 = (uParam0[iVar0 /*24*/])->f_1;
					iLocal_61 = iVar0;
				}
			}
			else
			{
				(uParam0[iVar0 /*24*/])->f_3 = 0x00000000;
				(uParam0[iVar0 /*24*/])->f_1 = 0x00000000;
			}
			if ((uParam0[iVar0 /*24*/])->f_3 > 0x00000003)
			{
				iLocal_57 = 0x00000001;
			}
		}
		iVar0++;
	}
	if (iLocal_62 == 0xFFFFFFFF)
	{
		if (iVar11 != 0xFFFFFFFF)
		{
			if (0x00000001 > (uParam0[iVar11 /*24*/])->f_1)
			{
				(uParam0[iVar11 /*24*/])->f_1 = 0x00000001;
				iLocal_62 = iVar11;
			}
		}
	}
	else if (unk_0x28072FDD60CE3A6E((*uParam0)[iLocal_62 /*24*/], 0x00000001))
	{
		iLocal_62 = 0xFFFFFFFF;
	}
}

int func_122(int iParam0)
{
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "alert_gunshot", 0x00000003))
	{
		return 0x00000001;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "buddy_shot_b", 0x00000003))
	{
		return 0x00000001;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "reaction_forward_big_intro_a", 0x00000003))
	{
		return 0x00000001;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "alert_body", 0x00000003))
	{
		return 0x00000001;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "react_forward_small_intro_a", 0x00000003))
	{
		return 0x00000001;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "react_backward_small_intro_a", 0x00000003))
	{
		return 0x00000001;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "react_left_small_intro_a", 0x00000003))
	{
		return 0x00000001;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "react_right_small_intro_a", 0x00000003))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_123()
{
	if (iLocal_392)
	{
		if (unk_0xEA6BC48857E0AC4C(&vLocal_397))
		{
			if (func_65())
			{
				if (unk_0x25037C66EB32B076())
				{
					if (!unk_0xD17F06053799A7CA())
					{
						cLocal_393 = { func_124() };
						vLocal_397 = { func_89() };
						StringCopy(&vLocal_397, "", 24);
						if (!unk_0xEA6BC48857E0AC4C(&cLocal_393) && !unk_0x7F8A39872A07D2CE(&cLocal_393, "NULL"))
						{
							vLocal_397 = { func_89() };
							func_91();
						}
						else
						{
							iLocal_392 = 0x00000000;
							StringCopy(&vLocal_397, "", 24);
							StringCopy(&cLocal_393, "", 24);
						}
					}
				}
			}
			else
			{
				iLocal_392 = 0x00000000;
				StringCopy(&vLocal_397, "", 24);
				StringCopy(&cLocal_393, "", 24);
			}
		}
		else
		{
			if (unk_0x25037C66EB32B076())
			{
				if (!func_88(&vLocal_397))
				{
					iLocal_392 = 0x00000000;
					StringCopy(&vLocal_397, "", 24);
					StringCopy(&cLocal_393, "", 24);
				}
			}
			if (!unk_0xEA6BC48857E0AC4C(&vLocal_397))
			{
				vLocal_391[0x00000000 /*3*/] = { vLocal_391[0x00000000 /*3*/] };
			}
		}
	}
}

struct<6> func_124()
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

void func_125()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_132();
		func_131();
		func_129();
		func_126();
	}
}

void func_126()
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	vVar1 = { 0f, 0f, 0f };
	if (iLocal_102 == 0x00000000)
	{
		if (unk_0x49DBEF6684F02E67(&vVar1, Local_109[0x00000000 /*5*/]))
		{
			fVar2 = 0f;
			fVar5 = 999999f;
			iVar0 = 0x00000000;
			while (iVar0 < Local_109)
			{
				if (iVar0 > 0x00000000)
				{
					fVar2 = (fVar2 + unk_0x0EB28750412C3A5A(Local_109[(iVar0 - 0x00000001) /*5*/], Local_109[iVar0 /*5*/], 0x00000001));
				}
				if (Local_109[iVar0 /*5*/].f_4)
				{
					if (unk_0x49DBEF6684F02E67(&vVar1, Local_109[iVar0 /*5*/]))
					{
						fVar4 = unk_0x0EB28750412C3A5A(Local_109[iVar0 /*5*/], vVar1, 0x00000001);
						if (fVar4 < fVar5)
						{
							fVar5 = fVar4;
							fVar6 = fVar2;
							iVar3 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar5 < fLocal_96)
			{
				iVar3 = iVar3;
				iLocal_102 = 0x00000001;
				iLocal_104 = unk_0x1C0640BA9A7327B3();
				fVar6 = fVar6;
				vLocal_99 = { Local_109[iVar3 /*5*/] };
				iLocal_100 = iVar3;
				iLocal_105 = iVar3 * 2;
				iLocal_107 = iLocal_105;
				iLocal_108 = iLocal_105;
				if (iLocal_108 < 0x00000000)
				{
					iLocal_108 = 0x00000000;
				}
				if (iLocal_107 >= Local_109 * 2)
				{
					iLocal_107 = (Local_109 * 2 - 0x00000001);
				}
			}
		}
	}
	if (iLocal_102 == 0x00000001)
	{
		unk_0xE2E72C10BBB7677E();
		fVar7 = (SYSTEM::TO_FLOAT((unk_0x1C0640BA9A7327B3() - iLocal_104)) / fLocal_110);
		iVar8 = (SYSTEM::FLOOR((fVar7 / (1f / 2f))) - 0x00000001);
		iVar9 = (iLocal_105 + iVar8);
		iVar10 = (iLocal_105 - iVar8);
		if (iVar9 >= 0x0000007A)
		{
			iVar9 = 0x00000079;
		}
		if (iVar10 < 0x00000000)
		{
			iVar10 = 0x00000000;
		}
		if (iVar9 > iLocal_107)
		{
			iVar0 = iLocal_107 + 1;
			while (iVar0 <= iVar9)
			{
				iVar11 = (iVar0 / 0x00000002);
				if (iVar11 < Local_109)
				{
					if (Local_109[iVar11 /*5*/].f_4)
					{
						func_127(iVar0, 0x00000001);
					}
					else
					{
						iVar9 = (iVar0 - 0x00000001);
						iVar0 = iVar9 + 1;
					}
				}
				iVar0++;
			}
			iLocal_107 = iVar9;
		}
		if (iVar10 < iLocal_108)
		{
			iVar0 = (iLocal_108 - 0x00000001);
			while (iVar0 >= iVar10)
			{
				iVar11 = (iVar0 / 0x00000002);
				if (iVar11 < Local_109)
				{
					if (Local_109[iVar11 /*5*/].f_4)
					{
						func_127(iVar0, 0x00000001);
					}
					else
					{
						iVar10 = iVar0 + 1;
						iVar0 = (iVar10 - 0x00000001);
					}
				}
				iVar0 = (iVar0 + 0xFFFFFFFF);
			}
			iLocal_108 = iVar10;
		}
		iVar0 = 0x00000000;
		while (iVar0 < Local_101)
		{
			if ((unk_0x1C0640BA9A7327B3() - Local_101[iVar0 /*5*/].f_4) > 0x000003E8)
			{
				unk_0xBB6D217402E588F9(Local_101[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((unk_0x1C0640BA9A7327B3() - Local_101[iVar0 /*5*/].f_4) > 0x00001770)
			{
				unk_0x060876FE4313F6DC(Local_101[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 0x00000000)
	{
		if ((iParam0 % 0x00000002) == 0x00000001)
		{
			iVar0 = (iParam0 / 0x00000002);
			if (iVar0 + 1 < 0x0000003D)
			{
				func_128(Local_109[(iParam0 / 0x00000002) /*5*/] + Local_109[(iParam0 / 0x00000002) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_97, fLocal_97, fLocal_97), iParam1);
			}
		}
		else if ((iParam0 / 0x00000002) < 0x0000003D)
		{
			func_128(Local_109[(iParam0 / 0x00000002) /*5*/] + Vector(fLocal_97, fLocal_97, fLocal_97), iParam1);
		}
	}
}

void func_128(vector3 vParam0, int iParam1)
{
	if (iLocal_103 == 0x00000000)
	{
		iParam1 = 0x00000000;
	}
	unk_0x060876FE4313F6DC(Local_101[iLocal_106 /*5*/]);
	if (Local_101[iLocal_106 /*5*/].f_4 != 0x00000000)
	{
		unk_0xBB6D217402E588F9(Local_101[iLocal_106 /*5*/].f_1, 0.4f, 1f);
	}
	Local_101[iLocal_106 /*5*/].f_4 = unk_0x1C0640BA9A7327B3();
	Local_101[iLocal_106 /*5*/].f_1 = { vParam0 };
	Local_101[iLocal_106 /*5*/] = unk_0xDF107B1FEA1F95CB(vParam0, uLocal_94, iParam1);
	iLocal_106++;
	if (iLocal_106 >= 0x0000001F)
	{
		iLocal_106 = 0x00000000;
	}
}

void func_129()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_89)
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 0x00000001);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000018) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				if (iLocal_95 == 0x00000000)
				{
					unk_0x8B4C4CA774181102(2f, 8f, 0x00000004);
					iLocal_95 = unk_0x1C0640BA9A7327B3() + 250;
				}
				if (unk_0x1C0640BA9A7327B3() > iLocal_95)
				{
					if (!bLocal_85)
					{
						fVar4 = 9999.9f;
						vLocal_98 = { func_130() };
						iVar0 = 0x00000000;
						while (iVar0 < Local_109)
						{
							if (unk_0xE4EDC4B0E92C078B(Local_109[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0x0EB28750412C3A5A(vLocal_98, unk_0xAC14F6E4B17D7835(Local_109[iVar0 /*5*/].f_3), 0x00000001);
								fVar3 = unk_0x0EB28750412C3A5A(Local_109[iVar0 /*5*/], unk_0xAC14F6E4B17D7835(Local_109[iVar0 /*5*/].f_3), 0x00000001);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_109[iVar0 /*5*/] = { vLocal_98 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_91 != 0xFFFFFFFF)
							{
								if (unk_0x51D1D19912234EA0((iLocal_92 - iVar5)) > 0x00000001)
								{
									iLocal_92 = 0xFFFFFFFF;
								}
								if (iLocal_92 == 0xFFFFFFFF)
								{
									iLocal_92 = iLocal_91;
								}
								if (unk_0x51D1D19912234EA0((iLocal_92 - iVar5)) < 0x00000003 && unk_0x51D1D19912234EA0((iLocal_92 - iVar5)) > 0x00000000)
								{
									if (iLocal_92 < iVar5)
									{
										iVar6 = iLocal_92;
										while (iVar6 <= (iVar5 - 0x00000001))
										{
											if (unk_0xE4EDC4B0E92C078B(Local_109[iVar6 /*5*/].f_3))
											{
												if (unk_0x4FA921CB56EDB0F8(Local_109[iVar6 /*5*/].f_3) > 0x00000000)
												{
													unk_0x7F010F50CE03A8AF(Local_109[iVar6 /*5*/].f_3, 0x00000000);
													Local_109[iVar6 /*5*/].f_4 = 0x00000001;
													iLocal_93 = (iLocal_93 - 0x00000001);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_92)
										{
											if (unk_0xE4EDC4B0E92C078B(Local_109[iVar6 /*5*/].f_3))
											{
												if (unk_0x4FA921CB56EDB0F8(Local_109[iVar6 /*5*/].f_3) > 0x00000000)
												{
													unk_0x7F010F50CE03A8AF(Local_109[iVar6 /*5*/].f_3, 0x00000000);
													Local_109[iVar6 /*5*/].f_4 = 0x00000001;
													iLocal_93 = (iLocal_93 - 0x00000001);
												}
											}
											iVar6++;
										}
									}
									iLocal_92 = iLocal_91;
								}
								if (iVar5 == 0x00000000)
								{
									if (unk_0xE4EDC4B0E92C078B(Local_109[iVar5 /*5*/].f_3))
									{
										if (unk_0x4FA921CB56EDB0F8(Local_109[iVar5 /*5*/].f_3) > 0x00000000)
										{
											unk_0x7F010F50CE03A8AF(Local_109[iVar5 /*5*/].f_3, 0x00000000);
											Local_109[iVar5 /*5*/].f_4 = 0x00000001;
											iLocal_93 = (iLocal_93 - 0x00000001);
										}
									}
								}
								if (iVar5 == 0x0000003C)
								{
									if (unk_0xE4EDC4B0E92C078B(Local_109[iVar5 /*5*/].f_3))
									{
										if (unk_0x4FA921CB56EDB0F8(Local_109[iVar5 /*5*/].f_3) > 0x00000000)
										{
											unk_0x7F010F50CE03A8AF(Local_109[iVar5 /*5*/].f_3, 0x00000000);
											Local_109[iVar5 /*5*/].f_4 = 0x00000001;
											iLocal_93 = (iLocal_93 - 0x00000001);
										}
									}
								}
								if (iVar5 < 0x0000003C)
								{
									if (func_77(Local_109[iVar5 + 1 /*5*/]))
									{
										if (unk_0xE4EDC4B0E92C078B(Local_109[iVar5 /*5*/].f_3))
										{
											if (unk_0x4FA921CB56EDB0F8(Local_109[iVar5 /*5*/].f_3) > 0x00000000)
											{
												unk_0x7F010F50CE03A8AF(Local_109[iVar5 /*5*/].f_3, 0x00000000);
												Local_109[iVar5 /*5*/].f_4 = 0x00000001;
												iLocal_93 = (iLocal_93 - 0x00000001);
											}
										}
									}
								}
							}
							iLocal_91 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_91 = 0xFFFFFFFF;
				iLocal_92 = 0xFFFFFFFF;
				iLocal_95 = 0x00000000;
			}
		}
	}
}

Vector3 func_130()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	var uVar4;
	
	iVar0 = unk_0x77E7AA9D423491DC(unk_0x16F2683693E537C9(), 0x00000001);
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		iVar1 = unk_0xF653B9B22DA806A9(iVar0, "Gun_Nuzzle");
		iVar1 = 0x00000001;
		vVar2 = { unk_0xBF584557291FDD31(iVar0, iVar1) };
		vVar2 = { unk_0x8A5E176FF719A014(vVar2, unk_0xD9522BA9E27E1349(iVar0), 0.35f, 0f, -0.15f) };
		unk_0xE82754C349C7B581(vVar2, &uVar4, 0x00000000, 0x00000000);
		vVar3 = { vVar2.x, vVar2.y, uVar4 };
	}
	return vVar3;
}

void func_131()
{
	int iVar0;
	
	if (iLocal_87)
	{
		if (iLocal_102)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Local_101)
			{
				unk_0x060876FE4313F6DC(Local_101[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_87 = 0x00000000;
		iLocal_102 = 0x00000001;
		iLocal_104 = unk_0x1C0640BA9A7327B3();
		iVar0 = 0x00000000;
		while (iVar0 < Local_109)
		{
			Local_109[iVar0 /*5*/].f_4 = 0x00000001;
			iVar0++;
		}
		if (iLocal_90 != 0xFFFFFFFF)
		{
			iLocal_108 = iLocal_90;
			iLocal_107 = iLocal_90;
			iLocal_105 = iLocal_90;
		}
		else
		{
			iLocal_108 = 0xFFFFFFFF;
			iLocal_107 = 0xFFFFFFFF;
			iLocal_105 = iLocal_90;
		}
		iLocal_106 = 0x00000001;
	}
}

void func_132()
{
	if (!iLocal_88)
	{
		iLocal_88 = 0x00000001;
	}
}

void func_133()
{
	int iVar0;
	
	if (iLocal_149 >= 0x00000004)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Local_113)
		{
			if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/]))
			{
				if (!Local_113[iVar0 /*33*/].f_17)
				{
					if (unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
					{
						Local_113[iVar0 /*33*/].f_17 = 0x00000001;
						func_9(0x00000097, 0x00000001, 0x00000000);
					}
				}
				if (unk_0xD09DF7101876AFB8(Local_113[iVar0 /*33*/]) == iLocal_116)
				{
					func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_19), 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
				}
			}
			else if (Local_113[iVar0 /*33*/] != 0x00000000)
			{
				func_134(&(Local_113[iVar0 /*33*/].f_19));
				Local_113[iVar0 /*33*/] = 0x00000000;
			}
			iVar0++;
		}
	}
}

void func_134(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
		bVar0 = 0x00000001;
	}
	if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
	{
		unk_0x142CC44DB769B57E(&(iParam0->f_1));
		bVar0 = 0x00000001;
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_7))
	{
		if (!unk_0x437347B10A200C4B(iParam0->f_7, 0x00000000))
		{
			if (unk_0x3C583F939C836C5C(iParam0->f_7))
			{
				unk_0xA29E145196B9739D(iParam0->f_7, 0x00000000);
			}
		}
		bVar0 = 0x00000001;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_135()
{
	int iVar0;
	
	iVar0 = iLocal_149;
	func_369();
	switch (iLocal_149)
	{
		case 0x00000000:
			func_272();
			break;
		
		case 0x00000001:
			func_269();
			break;
		
		case 0x00000002:
			func_224();
			break;
		
		case 0x00000003:
			func_207();
			break;
		
		case 0x00000004:
			func_206();
			break;
		
		case 0x00000005:
			func_206();
			break;
		
		case 0x00000006:
			func_206();
			break;
		
		case 0x00000007:
			func_202();
			break;
		
		case 0x00000008:
			func_181();
			break;
		
		case 0x00000009:
			func_149();
			break;
	}
	if (iLocal_149 != iVar0)
	{
		iLocal_150 = 0x00000000;
	}
	if (bLocal_152)
	{
		func_136(0x00000000);
	}
}

void func_136(char* sParam0)
{
	while (!unk_0xC92DB9682A650680("CHN2_MISSION_FAIL"))
	{
		func_28(0x00000015, 0x00000001);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		sLocal_151 = sParam0;
	}
	if (unk_0x2EBF5002C6B6A06C(sLocal_151))
	{
		sLocal_151 = "CHFAIL";
	}
	func_138(sLocal_151);
	while (!func_137())
	{
		func_28(0x00000002, 0x00000000);
	}
	func_443(0x00000001);
}

int func_137()
{
	if (Global_3)
	{
		return 0x00000001;
	}
	if (Global_181B8 == 0x00000007 || Global_181B8 == 0x00000008)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_138(char* sParam0)
{
	func_148(sParam0);
	func_139(0x00000000);
}

void func_139(int iParam0)
{
	int iVar0;
	
	if (Global_1B416.f_2378 || func_147(0x00000000))
	{
		iVar0 = func_146();
		if (!func_140(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
		Global_181DC = iParam0;
	}
}

int func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_145();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(0x00001388);
	}
	iVar0 = Global_15D98[iParam0 /*5*/];
	iVar1 = Global_12C5B.f_6D[iVar0 /*4*/];
	func_144(iVar1, 0x00000001);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
	func_141(&(Global_1B416.f_936.f_21B), iVar1);
	if (Global_16AF7 == Global_181DD)
	{
		Global_1B416.f_2378.f_14A[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_15DBC[iVar1 /*34*/].f_F, 0x00000001))
	{
		if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x67E5ECB8FD7F5018(0x00000000);
		}
	}
	Global_1B416.f_2378.f_14A[iVar1 /*6*/].f_2++;
	Global_16AF7 = Global_181DD;
	if (iParam0 == 0xFFFFFFFF)
	{
		if (Global_1B416.f_2378)
		{
		}
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iParam0 /*5*/].f_1, 0x00000004))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iParam0 /*5*/].f_1, 0x00000005))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_141(var uParam0, int iParam1)
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
			if (!func_143(Global_1B416.f_4860[iVar0], &vVar2, &fVar3))
			{
				Global_1B416.f_4860[iVar0] = 0x0000013E;
				func_142(&(uParam0->f_8F8[iVar0]));
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

void func_142(var uParam0)
{
	*uParam0 = 0xFFFFFFF1;
}

int func_143(int iParam0, var uParam1, float fParam2)
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
			return func_143(0x00000008, uParam1, fParam2);
			break;
		
		case 0x0000000A:
			return func_143(0x00000008, uParam1, fParam2);
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

void func_144(int iParam0, bool bParam1)
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

void func_145()
{
	Global_181DB = 0x00000001;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_48())
			{
				case 0x00000000:
					StringCopy(&Global_12C36, "CMN_MARRE", 16);
					break;
				
				case 0x00000001:
					StringCopy(&Global_12C36, "CMN_FARRE", 16);
					break;
				
				case 0x00000002:
					StringCopy(&Global_12C36, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_12C3A, "", 16);
		}
		Global_181DB = 0x00000000;
	}
	else if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_48())
			{
				case 0x00000000:
					StringCopy(&Global_12C36, "CMN_MDIED", 16);
					break;
				
				case 0x00000001:
					StringCopy(&Global_12C36, "CMN_FDIED", 16);
					break;
				
				case 0x00000002:
					StringCopy(&Global_12C36, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_12C3A, "", 16);
		}
		Global_181DB = 0x00000000;
		unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 0x00000019);
	}
}

int func_146()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iVar0 /*5*/].f_1, 0x00000002))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

bool func_147(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_148(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (unk_0x4880526EC51D1C27(sParam0) <= 0x00000010)
		{
			StringCopy(&Global_12C36, sParam0, 16);
			StringCopy(&Global_12C3A, "", 16);
			if (unk_0x192DA571D9133D23())
			{
				unk_0x32BB9995E509E19B();
			}
		}
	}
}

void func_149()
{
	func_176(0x0000002E, 0x00000034);
	func_166(0x00000001, 0x00000031, 0x00000000, 0x00000002, 0x00000030, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000002, 0x00000034, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000003, 0x00000035, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000004, 0x00000036, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000005, 0x00000037, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x00000000, 0x0000001B, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_155(0x00000000, 0x0000000C, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_154();
	if (func_153(0x00000001, 0x00000031))
	{
		func_150();
	}
}

void func_150()
{
	unk_0x790015DC92C918E2();
	func_151(0x00000000, 0x00000000);
	func_443(0x00000000);
}

void func_151(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_F04A)
	{
		Global_F04A = iParam1;
	}
	if (bParam0)
	{
		if ((func_147(0x00000000) && Global_12C44.f_1 == 0x00000001) && func_152(Global_12C44))
		{
		}
		else
		{
			Global_F048 = 0x00000001;
		}
	}
	if (Global_1B416.f_2378 || func_147(0x00000000))
	{
		iVar0 = func_146();
		iVar1 = Global_15D98[iVar0 /*5*/];
		uVar2 = Global_12C5B.f_6D[iVar1 /*4*/];
		if (iVar0 == 0xFFFFFFFF)
		{
			if (Global_1B416.f_2378)
			{
			}
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iVar0 /*5*/].f_1, 0x00000004))
		{
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iVar0 /*5*/].f_1, 0x00000005))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000004);
		unk_0x5D96D8530B3D0904(&Global_12C46, 0x00000001);
		Global_12C56 = uVar2;
		Global_12C57 = unk_0x1C0640BA9A7327B3();
	}
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000047:
			return 0x00000001;
			break;
		
		case 0x00000056:
			return 0x00000001;
			break;
		
		case 0x0000005B:
			return 0x00000001;
			break;
		
		default:
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

int func_153(int iParam0, int iParam1)
{
	if (Local_385[iParam0 /*10*/] == iParam1)
	{
		if (Local_385[iParam0 /*10*/].f_3 == 0x00000001)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_154()
{
	vector3 vVar0;
	
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2432.476f, 4953.242f, 43.05545f, 2466.34f, 4986.15f, 57.25303f, 14.4375f, 0x00000000, 0x00000001, 0x00000000))
	{
		if (vVar0.z < 50f)
		{
			if ((((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2436.762f, 4956.011f, 44.49009f, 2443.38f, 4962.625f, 48.2233f, 1.5f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2447.669f, 4966.554f, 44.95141f, 2452.497f, 4969.825f, 48.89074f, 2.3125f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2454.863f, 4968.686f, 44.95141f, 2460.505f, 4974.409f, 48.82641f, 1.6875f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2459.058f, 4977.546f, 44.95141f, 2460.411f, 4979.302f, 48.82641f, 1.6875f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2457.602f, 4984.746f, 44.73669f, 2461.977f, 4989.49f, 48.47844f, 1.6875f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (!unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9()))
				{
					unk_0x6DAD3F6F3CBD9FAA(unk_0x16F2683693E537C9());
				}
			}
		}
		else if ((((((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2454.179f, 4995.281f, 44.54151f, 2453.096f, 4993.905f, 48.32043f, 1.6875f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2449.401f, 4990.354f, 44.92924f, 2447.717f, 4988.865f, 48.82129f, 1.6875f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2443.906f, 4990.104f, 44.4446f, 2439.007f, 4985.271f, 48.30458f, 1.6875f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2439.602f, 4982.387f, 44.95141f, 2440.797f, 4981.365f, 48.82642f, 1.6875f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2440.259f, 4980.671f, 44.95142f, 2434.769f, 4975.055f, 48.82642f, 1.6875f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2432.165f, 4972.586f, 44.29909f, 2430.114f, 4970.545f, 48.21086f, 1.6875f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2428.46f, 4968.569f, 44.81597f, 2426.632f, 4966.603f, 48.29342f, 1.6875f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (!unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9()))
			{
				unk_0x6DAD3F6F3CBD9FAA(unk_0x16F2683693E537C9());
			}
		}
	}
	else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2455.487f, 4997.566f, 43.1101f, 2423.653f, 4962.837f, 57.34888f, 14.4375f, 0x00000000, 0x00000001, 0x00000000))
	{
		if (vVar0.z < 50f)
		{
			if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2442.913f, 4965.273f, 50.15687f, 2444.49f, 4967.41f, 53.81783f, 1.6875f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2445.239f, 4969.07f, 49.94284f, 2450.365f, 4972.188f, 54.03251f, 2.375f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2452.332f, 4971.817f, 49.94283f, 2457.977f, 4977.583f, 53.88097f, 2.375f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (!unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9()))
				{
					unk_0x6DAD3F6F3CBD9FAA(unk_0x16F2683693E537C9());
				}
			}
		}
		else if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2457.621f, 4978.462f, 49.94283f, 2453.932f, 4982.161f, 53.81783f, 2.375f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2452.054f, 4984.156f, 49.94283f, 2448.12f, 4987.809f, 53.81316f, 2.375f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2442.014f, 4980.539f, 49.94283f, 2435.796f, 4971.945f, 53.90388f, 2.375f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (!unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9()))
			{
				unk_0x6DAD3F6F3CBD9FAA(unk_0x16F2683693E537C9());
			}
		}
	}
}

void func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	if (Local_389[iParam0 /*4*/] != iParam1)
	{
		Local_389[iParam0 /*4*/].f_1 = 0x00000000;
		Local_389[iParam0 /*4*/] = iParam1;
	}
	if (!Local_389[iParam0 /*4*/].f_1)
	{
		if (func_158(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 0x00000001, 0x00000000))
		{
			switch (Local_389[iParam0 /*4*/])
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						unk_0x4701A9E9B58A4878(2f);
						Local_389[iParam0 /*4*/].f_1 = 0x00000001;
					}
					break;
				
				case 0x00000004:
					if (unk_0x5DACDD1CBCA7DFB5(unk_0xD803B885F5E47A62(), 0x00000000))
					{
						if (unk_0x91E3F625EF57450D(0x00000000))
						{
							func_157("USESPEC_KM", 0xFFFFFFFF);
						}
						else
						{
							func_157("USESPEC", 0xFFFFFFFF);
						}
					}
					Local_389[iParam0 /*4*/].f_1 = 0x00000001;
					break;
				
				case 0x00000003:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0x00000000:
							func_157("FRMFLE", 0xFFFFFFFF);
							Local_389[iParam0 /*4*/].f_1 = 0x00000001;
							break;
					}
					break;
				
				case 0x00000005:
					if (!func_65() && !unk_0xD17F06053799A7CA())
					{
						func_7("FRMLK", 0x00001D4C, 0x00000001);
						Local_389[iParam0 /*4*/].f_1 = 0x00000001;
					}
					break;
				
				case 0x00000002:
					func_7("FRMSNP", 0x00001D4C, 0x00000001);
					Local_389[iParam0 /*4*/].f_1 = 0x00000001;
					break;
				
				case 0x0000000B:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0x00000000:
							if (unk_0x5F596B0E13677FE9(unk_0x16F2683693E537C9()))
							{
								Local_389[iParam0 /*4*/].f_3 = unk_0x1C0640BA9A7327B3() + 1000;
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 0x00000001:
							if (unk_0x1C0640BA9A7327B3() > Local_389[iParam0 /*4*/].f_3)
							{
								if (unk_0x91E3F625EF57450D(0x00000000))
								{
									func_157("FRMSTLTH_KM", 0xFFFFFFFF);
								}
								else
								{
									func_157("FRMSTLTH", 0xFFFFFFFF);
								}
								Local_389[iParam0 /*4*/].f_1 = 0x00000001;
							}
							break;
					}
					break;
				
				case 0x00000006:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0x00000000:
							if (unk_0x0A4C9A3D51EAE31F(0x000000D3) != 0x00000000)
							{
								Local_389[iParam0 /*4*/].f_3 = unk_0x1C0640BA9A7327B3() + 4000;
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 0x00000001:
							if (unk_0x1C0640BA9A7327B3() > Local_389[iParam0 /*4*/].f_3)
							{
								iVar0 = joaat("weapon_unarmed");
								unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001);
								if ((iVar0 != joaat("weapon_sniperrifle") && iVar0 != joaat("weapon_heavysniper")) && iVar0 != joaat("weapon_unarmed"))
								{
									if (!unk_0xD17F06053799A7CA() && !unk_0xFEBC1E4EC9E001F0())
									{
										if (!func_65())
										{
											if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
											{
												func_157("FRMSHOT", 0xFFFFFFFF);
												Local_389[iParam0 /*4*/].f_1 = 0x00000001;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 0x00000007:
					func_7("FRMFLC", 0x00001D4C, 0x00000001);
					unk_0xDC5B2F9D0CCE3A10(iLocal_178, "FRMBLIPB");
					Local_389[iParam0 /*4*/].f_1 = 0x00000001;
					break;
				
				case 0x00000008:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0x00000000:
							func_157("FRMPET2", 0xFFFFFFFF);
							Local_389[iParam0 /*4*/].f_2++;
							break;
						
						case 0x00000001:
							if (!func_65())
							{
								func_156("FRMTRL", 0x00001D4C, 0x00000001);
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 0x00000002:
							iVar1 = joaat("weapon_unarmed");
							if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 0x00000001))
							{
								if (iVar1 == joaat("weapon_petrolcan"))
								{
									if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000018))
									{
										unk_0xA37A90C62806D848(0x00000001);
									}
								}
							}
							if (!unk_0xFEBC1E4EC9E001F0())
							{
								func_157("FRMTRL2", 0xFFFFFFFF);
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 0x00000003:
							if (func_8())
							{
								if (!func_65())
								{
									if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != 0x00000000)
									{
										if (!unk_0xE4EDC4B0E92C078B(iLocal_178))
										{
											unk_0x790015DC92C918E2();
											func_7("FRMSHP", 0x00001D4C, 0x00000001);
											iLocal_178 = func_5(2454.895f, 4950.895f, 44.1488f, 0x00000000);
										}
									}
									else if (func_73(unk_0x16F2683693E537C9(), 2454.895f, 4950.895f, 44.1488f, 0x00000001) < 5f)
									{
										unk_0x790015DC92C918E2();
										if (unk_0xE4EDC4B0E92C078B(iLocal_178))
										{
											unk_0x142CC44DB769B57E(&iLocal_178);
										}
										func_7("FRMIGN", 0x00001D4C, 0x00000001);
										unk_0x8BC9595FD2792B5D("CHI_2_SHOOT_GAS");
										Local_389[iParam0 /*4*/].f_2++;
									}
								}
							}
							break;
						
						case 0x00000004:
							if (func_93(0x00000025))
							{
								if (func_90("FRMIGN", 0x00000000, 0x00000000))
								{
									unk_0x790015DC92C918E2();
								}
							}
							if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != 0x00000000)
							{
								Local_389[iParam0 /*4*/].f_2 = 0x00000003;
							}
							break;
					}
					break;
				
				case 0x00000009:
					func_157("FRMMISS", 0xFFFFFFFF);
					Local_389[iParam0 /*4*/].f_1 = 0x00000001;
					break;
				
				case 0x0000000A:
					if (func_93(0x00000022))
					{
						func_7("FRMFRH", 0x00001D4C, 0x00000001);
					}
					else
					{
						func_7("FRMFRG", 0x00001D4C, 0x00000001);
					}
					Local_389[iParam0 /*4*/].f_1 = 0x00000001;
					break;
				
				case 0x0000000C:
					func_7("FRMLEAVE", 0x00000001, 0x00000001);
					if (func_93(0x00000030))
					{
						unk_0x790015DC92C918E2();
						Local_389[iParam0 /*4*/].f_1 = 0x00000001;
					}
					break;
				
				case 0x0000000D:
					func_7("LOSE_WANTED", 0x00001D4C, 0x00000001);
					break;
				}
			}
	}
}

void func_156(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

void func_157(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bLocal_386 = 0x00000000;
	iLocal_387 = 0x00000000;
	if (func_159(&bLocal_386, &iLocal_387, iParam0, iParam1))
	{
		if (func_159(&bLocal_386, &iLocal_387, iParam2, iParam3))
		{
			if (func_159(&bLocal_386, &iLocal_387, iParam4, iParam5))
			{
				if (func_159(&bLocal_386, &iLocal_387, iParam6, iParam7))
				{
				}
			}
		}
	}
	if (bLocal_386)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_159(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 0x00000000:
			*iParam0 = 0x00000001;
			break;
		
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			if (iParam3 == 0x00000000 || (iParam3 != 0x00000000 && func_93(iParam3)))
			{
				*iParam0 = 0x00000001;
			}
			break;
		
		case 0x00000003:
			if (iParam3 == 0x00000000 || (iParam3 != 0x00000000 && func_162(iParam3)))
			{
				*iParam0 = 0x00000001;
			}
			break;
		
		case 0x00000006:
			if (iParam3 == 0x00000000 || (iParam3 != 0x00000000 && func_93(iParam3)))
			{
				*iParam0 = 0x00000001;
			}
			break;
		
		case 0x00000008:
			if (*iParam0)
			{
				return 0x00000000;
			}
			else
			{
				*iParam1 = 0x00000001;
				if (iParam3 == 0x00000000 || (iParam3 != 0x00000000 && func_93(iParam3)))
				{
					*iParam0 = 0x00000001;
				}
			}
			break;
		
		case 0x00000004:
			if (iParam3 != 0x00000000 && func_162(iParam3))
			{
				*iParam0 = 0x00000000;
			}
			break;
		
		case 0x00000005:
			if (iParam3 != 0x00000000 && func_93(iParam3))
			{
				*iParam0 = 0x00000000;
			}
			break;
		
		case 0x00000007:
			if (func_161(iParam3))
			{
				if (func_162(iParam3))
				{
					*iParam0 = 0x00000001;
				}
				else
				{
					*iParam0 = 0x00000000;
				}
			}
			else
			{
				if (func_93(iParam3))
				{
					func_160(iParam3);
				}
				*iParam0 = 0x00000000;
			}
			break;
	}
	return 0x00000001;
}

void func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0x00000000 /*8*/]);
	if (Local_388[iVar0 /*8*/] == iParam0)
	{
		Local_388[iVar0 /*8*/].f_3 = 0x00000001;
	}
}

int func_161(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0x00000000 /*8*/]);
	if (Local_388[iVar0 /*8*/] == iParam0)
	{
		if (Local_388[iVar0 /*8*/].f_3)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_162(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0x00000000 /*8*/]);
	if (iVar0 >= 0x00000000 && iVar0 < Local_388)
	{
		if (Local_388[iVar0 /*8*/] == iParam0)
		{
			if (!Local_388[iVar0 /*8*/].f_2)
			{
				return 0x00000001;
			}
		}
		else if (Local_388[iVar0 /*8*/] != 0x00000000)
		{
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	
	if (Local_390[iParam0 /*7*/] != iParam1)
	{
		Local_390[iParam0 /*7*/].f_1 = 0x00000000;
		Local_390[iParam0 /*7*/] = iParam1;
	}
	if (!Local_390[iParam0 /*7*/].f_1)
	{
		if (func_158(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9))
		{
			if (!Local_390[iParam0 /*7*/].f_2)
			{
				Local_390[iParam0 /*7*/].f_2 = 0x00000001;
			}
			switch (Local_390[iParam0 /*7*/])
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					if (func_35("TRV_WTF", 0x00000001, unk_0x16F2683693E537C9(), "TREVOR", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
					{
						Local_390[iParam0 /*7*/].f_1 = 0x00000001;
					}
					break;
				
				case 0x00000002:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0x00000000:
							Local_390[iParam0 /*7*/].f_4 = unk_0x1C0640BA9A7327B3() + 2000;
							Local_390[iParam0 /*7*/].f_3++;
							break;
						
						case 0x00000001:
							if (unk_0x1C0640BA9A7327B3() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_65())
								{
									Local_390[iParam0 /*7*/].f_4 = unk_0x1C0640BA9A7327B3() + 2000;
								}
								else
								{
									iVar0 = 0x00000000;
									if (func_165(&iVar0, 0x00000002, 0x00000001))
									{
										if (func_35("RAGE", 0x00000001, unk_0x16F2683693E537C9(), "Trevor", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001F40, 0x000036B0));
										}
									}
									else
									{
										Local_390[iParam0 /*7*/].f_1 = 0x00000001;
									}
								}
							}
							break;
					}
					break;
				
				case 0x00000004:
					Local_390[iParam0 /*7*/].f_4 = func_18(0x00000017);
					if (Local_390[iParam0 /*7*/].f_4 != 0xFFFFFFFF)
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("COOKSEE", 0x00000003, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILCOOK", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
							{
								Local_390[iParam0 /*7*/].f_1 = 0x00000001;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 0x00000001;
						}
					}
					break;
				
				case 0x00000003:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0x00000000:
							Local_390[iParam0 /*7*/].f_4 = func_18(0x0000000F);
							Local_390[iParam0 /*7*/].f_5 = func_18(0x00000010);
							if (Local_390[iParam0 /*7*/].f_4 != 0xFFFFFFFF && Local_390[iParam0 /*7*/].f_5 != 0xFFFFFFFF)
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 0x00000001:
							if (unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_4 = Local_390[iParam0 /*7*/].f_5;
								if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 0x00000001;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 0x00000002:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD8", 0x00000005, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 0x00000001;
							}
							break;
						
						case 0x00000003:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD9", 0x00000005, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 0x00000001;
							}
							break;
						
						case 0x00000004:
							if (func_165(&iVar1, 0x00000002, 0x00000001))
							{
								if (iVar1 != Local_390[iParam0 /*7*/].f_4)
								{
									Local_390[iParam0 /*7*/].f_4 = iVar1;
									Local_390[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 0x00000001;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 0x00000001;
							}
							break;
						
						case 0x00000005:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD10", 0x00000005, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
								{
									Local_390[iParam0 /*7*/].f_1 = 0x00000001;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 0x00000001;
							}
							break;
					}
					break;
				
				case 0x00000005:
					Local_390[iParam0 /*7*/].f_4 = func_18(0x00000017);
					if (Local_390[iParam0 /*7*/].f_4 != 0xFFFFFFFF)
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD11", 0x00000006, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
							{
								Local_390[iParam0 /*7*/].f_1 = 0x00000001;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 0x00000001;
						}
					}
					break;
				
				case 0x00000006:
					Local_390[iParam0 /*7*/].f_4 = func_18(0x00000017);
					if (Local_390[iParam0 /*7*/].f_4 != 0xFFFFFFFF)
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD12", 0x00000006, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
							{
								Local_390[iParam0 /*7*/].f_1 = 0x00000001;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 0x00000001;
						}
					}
					break;
				
				case 0x00000007:
					if (func_35("CHI2_drive", 0x00000001, unk_0x16F2683693E537C9(), "TREVOR", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
					{
						Local_390[iParam0 /*7*/].f_1 = 0x00000001;
					}
					break;
				
				case 0x00000009:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0x00000000:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_3 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000003);
							}
							break;
						
						case 0x00000001:
							if (func_35("SEETREVOR", 0x00000003, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon1", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
							{
								Local_390[iParam0 /*7*/].f_1 = 0x00000001;
							}
							break;
						
						case 0x00000002:
							if (func_35("GOON2TREV", 0x00000004, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon2", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
							{
								Local_390[iParam0 /*7*/].f_1 = 0x00000001;
							}
							break;
					}
					break;
				
				case 0x0000000A:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0x00000000:
							if (unk_0x1C0640BA9A7327B3() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_390[iParam0 /*7*/].f_5), 0x00000001, 0x00000001))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 0x00000001:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								if (Local_390[iParam0 /*7*/].f_6 < 0x00000003)
								{
									if (func_35("ONEILGUARD5", 0x00000005, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD1", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
									{
										Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001B58, 0x00002EE0));
										Local_390[iParam0 /*7*/].f_6++;
										Local_390[iParam0 /*7*/].f_3 = 0x00000000;
									}
								}
								else if (Local_390[iParam0 /*7*/].f_6 < 0x00000006)
								{
									if (func_35("ONEILGUARD6", 0x00000006, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD2", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
									{
										Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001B58, 0x00002EE0));
										Local_390[iParam0 /*7*/].f_6++;
										Local_390[iParam0 /*7*/].f_3 = 0x00000000;
									}
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 0x00000001;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0x00000000;
							}
							break;
					}
					break;
				
				case 0x0000000B:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0x00000000:
							if (unk_0x1C0640BA9A7327B3() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_390[iParam0 /*7*/].f_5), 0x00000001, 0x00000001))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 0x00000001:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_390[iParam0 /*7*/].f_6)
								{
									case 0x00000000:
									case 0x00000002:
									case 0x00000005:
									case 0x00000009:
										if (func_35("COOKATT", 0x00000003, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "oneilcook", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001B58, 0x00002EE0));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0x00000000;
										}
										break;
									
									case 0x00000001:
									case 0x00000006:
									case 0x00000008:
									case 0x0000000B:
										if (func_35("GOONATT", 0x00000003, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001B58, 0x00002EE0));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0x00000000;
										}
										break;
									
									case 0x00000003:
									case 0x00000004:
									case 0x00000007:
									case 0x0000000A:
										if (func_35("GOON2ATTO", 0x00000004, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001B58, 0x00002EE0));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0x00000000;
										}
										break;
									
									case 0x0000000C:
										Local_390[iParam0 /*7*/].f_1 = 0x00000001;
										break;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0x00000000;
							}
							break;
					}
					break;
				
				case 0x0000000C:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0x00000000:
							if (unk_0x1C0640BA9A7327B3() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_390[iParam0 /*7*/].f_5), 0x00000002, 0x00000001))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 0x00000001:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_390[iParam0 /*7*/].f_6)
								{
									case 0x00000000:
									case 0x00000002:
									case 0x00000005:
									case 0x00000009:
										if (func_35("GOONIN", 0x00000003, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001770, 0x00002710));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0x00000000;
										}
										break;
									
									case 0x00000001:
									case 0x00000006:
									case 0x00000008:
									case 0x0000000B:
										if (func_35("GOON2ATTI", 0x00000004, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001770, 0x00002710));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0x00000000;
										}
										break;
									
									case 0x00000003:
									case 0x00000004:
									case 0x00000007:
									case 0x0000000A:
										if (func_35("ATTACKIN", 0x00000003, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILCOOK", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001770, 0x00002710));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0x00000000;
										}
										break;
									
									case 0x0000000C:
										Local_390[iParam0 /*7*/].f_1 = 0x00000001;
										break;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0x00000000;
							}
							break;
					}
					break;
				
				case 0x0000000E:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0x00000000:
							iVar2 = 0x00000000;
							while (iVar2 < Local_113)
							{
								if (Local_113[iVar2 /*33*/].f_1 == 0x00000002)
								{
									if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar2 /*33*/]))
									{
										if (unk_0x4734A6196B611C3B(Local_113[iVar2 /*33*/], 0x00000000))
										{
											if (unk_0x25176BBC501E783C(Local_113[iVar2 /*33*/], unk_0x16F2683693E537C9()))
											{
												Local_390[iParam0 /*7*/].f_4 = iVar2;
												Local_390[iParam0 /*7*/].f_3++;
											}
										}
									}
								}
								iVar2++;
							}
							break;
						
						case 0x00000001:
							if (func_35("G2TREVIN", 0x00000004, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "chin2goon2", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
							{
								Local_390[iParam0 /*7*/].f_1 = 0x00000001;
							}
							break;
					}
					break;
				
				case 0x0000000F:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0x00000000:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD3", 0x00000005, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 0x00000001:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD1", 0x00000005, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
								{
									Local_390[iParam0 /*7*/].f_1 = 0x00000001;
								}
							}
							break;
					}
					break;
				
				case 0x00000010:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0x00000000:
							if (func_165(&(Local_390[iParam0 /*7*/].f_4), 0x00000001, 0x00000001))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 0x00000001:
							if (func_35("ONEILGUARD7", 0x00000005, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "oneilguard2", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 0x00000002:
							if (func_35("CHI2_app", 0x00000001, unk_0x16F2683693E537C9(), "Trevor", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
							{
								Local_390[iParam0 /*7*/].f_1 = 0x00000001;
							}
							break;
					}
					break;
				
				case 0x00000011:
					if (func_35("CHI2_app", 0x00000001, unk_0x16F2683693E537C9(), "TREVOR", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
					{
						Local_390[iParam0 /*7*/].f_1 = 0x00000001;
					}
					break;
				
				case 0x00000013:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0x00000000:
							if (func_88("ONEILGUARD4") || func_88("SEETREVOR"))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 0x00000001:
							if (func_35("CHI2_HARD", 0x00000001, unk_0x16F2683693E537C9(), "Trevor", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
							{
								Local_390[iParam0 /*7*/].f_1 = 0x00000001;
							}
							break;
					}
					break;
				
				case 0x00000014:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0x00000000:
							if (unk_0x1C0640BA9A7327B3() > Local_390[iParam0 /*7*/].f_5)
							{
								fVar4 = 999f;
								Local_390[iParam0 /*7*/].f_4 = 0xFFFFFFFF;
								iVar3 = 0x00000000;
								while (iVar3 < Local_113)
								{
									if (Local_113[iVar3 /*33*/].f_1 == 0x00000002)
									{
										if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar3 /*33*/]))
										{
											fVar5 = func_4(unk_0x16F2683693E537C9(), Local_113[iVar3 /*33*/], 0x00000001);
											if (fVar5 < fVar4)
											{
												fVar4 = fVar5;
												Local_390[iParam0 /*7*/].f_4 = iVar3;
											}
										}
									}
									iVar3++;
								}
								if (Local_390[iParam0 /*7*/].f_4 == 0xFFFFFFFF)
								{
									Local_390[iParam0 /*7*/].f_1 = 0x00000001;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 0x00000001:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("CHI2_outs", 0x00000005, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "Oneilguard1", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
								{
									Local_390[iParam0 /*7*/].f_1 = 0x00000001;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_5 = unk_0x1C0640BA9A7327B3() + 6000;
								Local_390[iParam0 /*7*/].f_3 = 0x00000000;
							}
							break;
					}
					break;
				
				case 0x00000012:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0x00000000:
							iVar6 = 0x00000000;
							while (iVar6 < Local_113)
							{
								if (Local_113[iVar6 /*33*/].f_2 == 0x00000008)
								{
									Local_390[iParam0 /*7*/].f_4 = iVar6;
								}
								if (Local_113[iVar6 /*33*/].f_2 == 0x00000009)
								{
									Local_390[iParam0 /*7*/].f_5 = iVar6;
								}
								iVar6++;
							}
							Local_390[iParam0 /*7*/].f_3++;
							break;
						
						case 0x00000001:
							if (!func_65())
							{
								if (unk_0x69DF961355195C3C(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_E))
								{
									if (unk_0xA45992A6CE82FB43(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_E) > 0.15f)
									{
										if (unk_0xA45992A6CE82FB43(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_E) < 0.65f)
										{
											if (func_4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], unk_0x16F2683693E537C9(), 0x00000001) < 30f)
											{
												Local_390[iParam0 /*7*/].f_3 = 0x00000003;
											}
										}
									}
								}
							}
							break;
						
						case 0x00000002:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0x00000001;
							}
							break;
						
						case 0x00000003:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								unk_0xEB0A515D699A7E90(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0x00000000);
								Local_390[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0x00000001;
							}
							break;
						
						case 0x00000004:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (unk_0x69DF961355195C3C(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_E))
								{
									if (unk_0xA45992A6CE82FB43(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_E) > 0.75f)
									{
										Local_390[iParam0 /*7*/].f_3 = 0x00000001;
									}
								}
							}
							break;
					}
					break;
				
				case 0x00000015:
					if (func_35("CHI2_find", 0x00000001, unk_0x16F2683693E537C9(), "TREVOR", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
					{
						unk_0x8B4C4CA774181102(5f, 8f, 0x00000004);
						Local_390[iParam0 /*7*/].f_1 = 0x00000001;
					}
					break;
				
				case 0x0000001A:
					if (func_164())
					{
						if (func_35("CHI2_pourmis", 0x00000001, unk_0x16F2683693E537C9(), "TREVOR", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
						{
							Local_390[iParam0 /*7*/].f_1 = 0x00000001;
						}
					}
					break;
				
				case 0x0000001B:
					if (func_35("CHI2_boom", 0x00000001, unk_0x16F2683693E537C9(), "TREVOR", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
					{
						Local_390[iParam0 /*7*/].f_1 = 0x00000001;
					}
					break;
				
				case 0x00000016:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0x00000000:
							Local_390[iParam0 /*7*/].f_4 = 0x000009C4;
							Local_390[iParam0 /*7*/].f_5 = 0x00000000;
							Local_390[iParam0 /*7*/].f_3 = 0x00000001;
							break;
						
						case 0x00000001:
							Local_390[iParam0 /*7*/].f_4 = (Local_390[iParam0 /*7*/].f_4 - SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
							if (Local_390[iParam0 /*7*/].f_4 <= 0x00000000)
							{
								Local_390[iParam0 /*7*/].f_3 = 0x00000002;
							}
							break;
						
						case 0x00000002:
							if (Local_390[iParam0 /*7*/].f_5 < 0x0000000E)
							{
								if (func_35("CHI2_pour", 0x00000001, unk_0x16F2683693E537C9(), "TREVOR", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
								{
									Local_390[iParam0 /*7*/].f_3 = 0x00000001;
									Local_390[iParam0 /*7*/].f_4 = (0x00002EE0 + unk_0x09AC81E49EA267F7(0x00000BB8, 0x00001388));
									Local_390[iParam0 /*7*/].f_5++;
								}
							}
							break;
					}
					break;
				
				case 0x00000017:
					if (func_35("CHI2_light", 0x00000001, unk_0x16F2683693E537C9(), "TREVOR", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
					{
						Local_390[iParam0 /*7*/].f_1 = 0x00000001;
					}
					break;
				
				case 0x00000018:
					if (func_35("CHI2_boom", 0x00000001, unk_0x16F2683693E537C9(), "TREVOR", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
					{
						Local_390[iParam0 /*7*/].f_1 = 0x00000001;
					}
					break;
				
				case 0x00000019:
					if (func_35("CHI2_burn", 0x00000001, unk_0x16F2683693E537C9(), "TREVOR", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
					{
						Local_390[iParam0 /*7*/].f_1 = 0x00000001;
					}
					break;
				}
			}
	}
}

int func_164()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_109)
	{
		if (Local_109[iVar0 /*5*/].f_4 == 0x00000001)
		{
			if (iVar2 == 0x00000000)
			{
				iVar2 = 0x00000001;
				iVar1++;
				if (iVar1 > 0x00000001)
				{
					return 0x00000001;
				}
			}
		}
		else if (iVar2 == 0x00000001)
		{
			iVar2 = 0x00000000;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 9999f;
	*iParam0 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < Local_113)
	{
		if (Local_113[iVar0 /*33*/].f_1 == iParam1)
		{
			if (iParam2 == 0x00000000 || (iParam2 == 0x00000001 && !unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/])))
			{
				fVar1 = func_4(unk_0x16F2683693E537C9(), Local_113[iVar0 /*33*/], 0x00000001);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					*iParam0 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (*iParam0 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_166(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
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
	
	if (Local_385[iParam0 /*10*/] != iParam1 || Local_385[iParam0 /*10*/].f_1 == 0x00000000)
	{
		Local_385[iParam0 /*10*/] = iParam1;
		Local_385[iParam0 /*10*/].f_1 = 0x00000001;
		Local_385[iParam0 /*10*/].f_3 = 0x00000000;
		Local_385[iParam0 /*10*/].f_6 = 0x00000000;
		Local_385[iParam0 /*10*/].f_4 = 0x00000000;
		Local_385[iParam0 /*10*/].f_7 = 0x00000000;
		Local_385[iParam0 /*10*/].f_8 = 0x00000000;
		Local_385[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_385[iParam0 /*10*/].f_2 && iParam2 == 0x00000000)
	{
		bVar0 = 0x00000001;
	}
	else
	{
		bVar0 = func_158(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
	}
	if (iParam2 == 0x00000001 && !bVar0)
	{
		Local_385[iParam0 /*10*/].f_2 = 0x00000000;
	}
	if (Local_385[iParam0 /*10*/].f_3 == 0x00000000 || Local_385[iParam0 /*10*/].f_6 == 0xFFFFFFFF)
	{
		if (bVar0 == 0x00000001)
		{
			if (!Local_385[iParam0 /*10*/].f_2)
			{
				Local_385[iParam0 /*10*/].f_2 = 0x00000001;
			}
			switch (Local_385[iParam0 /*10*/])
			{
				case 0x00000001:
					break;
				
				case 0x00000002:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							unk_0x8BC9595FD2792B5D("CHI_2_DRIVE_TO_FARMHOUSE");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 0x00000001:
							if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								unk_0x8910D3D58E0132B8("CHI_2_DRIVE_TO_FARMHOUSE");
								Local_385[iParam0 /*10*/].f_3 = 0x00000001;
							}
							break;
					}
					break;
				
				case 0x00000003:
					if (func_73(unk_0x16F2683693E537C9(), 1991.05f, 3054.262f, 46.2147f, 0x00000001) > 250f)
					{
						if (unk_0xC844350D5D58C99A(Local_113[0x0000000B /*33*/]))
						{
							unk_0xEBA53F35D0085654(&(Local_113[0x0000000B /*33*/]));
						}
						if (unk_0xC844350D5D58C99A(Local_113[0x0000000A /*33*/]))
						{
							unk_0xEBA53F35D0085654(&(Local_113[0x0000000A /*33*/]));
						}
						if (unk_0xC844350D5D58C99A(Local_113[0x0000000C /*33*/]))
						{
							unk_0xEBA53F35D0085654(&(Local_113[0x0000000C /*33*/]));
						}
						if (unk_0xC844350D5D58C99A(Local_113[0x0000000D /*33*/]))
						{
							unk_0xEBA53F35D0085654(&(Local_113[0x0000000D /*33*/]));
						}
						if (unk_0xC844350D5D58C99A(Local_113[0x0000000E /*33*/]))
						{
							unk_0xEBA53F35D0085654(&(Local_113[0x0000000E /*33*/]));
						}
						unk_0x71199B01895C6202(joaat("ig_janet"));
						unk_0x71199B01895C6202(joaat("ig_janet"));
						unk_0x71199B01895C6202(joaat("ig_old_man1a"));
						unk_0x71199B01895C6202(joaat("ig_old_man2"));
						unk_0x71199B01895C6202(joaat("ig_taocheng"));
						unk_0x71199B01895C6202(joaat("ig_taostranslator"));
						unk_0x8D17794CE3273D70("misschinese2_crystalmaze");
						unk_0x8D17794CE3273D70("MISSChinese2_crystalMazeMCS1_IG");
						unk_0x8D17794CE3273D70("missrampageintrooutro");
						if (iLocal_379 != 0xFFFFFFFF)
						{
							if (unk_0x49083FDB78AC0509(iLocal_379))
							{
								unk_0xDDABC98CFF1A4C60(iLocal_379);
							}
						}
						unk_0xEFED0CD6E25037B9();
						func_31(0x0000001A, 0x00000001);
						Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					}
					break;
				
				case 0x00000005:
					if (unk_0xE3934829A331AF92("CHI_2_FARMHOUSE_INTRO", "CHINESE2_FARMHOUSE_INTRODUCTION"))
					{
						Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					}
					break;
				
				case 0x00000004:
					if (func_73(unk_0x16F2683693E537C9(), 2457.49f, 4977.095f, 50.56783f, 0x00000001) < 400f)
					{
						func_32(0x0000001B, 0x00000000);
						unk_0xC83E7A5E408DF68C(0x00000001);
						unk_0xFF42993F8A095C58(0x00000001);
						unk_0x0CDF80057190977A("chinese2_farmhouse_cutscene");
						Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					}
					break;
				
				case 0x00000007:
					if ((!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000C /*33*/]) && !unk_0xEB6A8945D1AC98A1(Local_113[0x0000000D /*33*/])) && !unk_0xEB6A8945D1AC98A1(Local_113[0x0000000E /*33*/]))
					{
						if (func_175(0x00000006, 0x00000006) < 0x00000002)
						{
							if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1981.257f, 3050.721f, 41.08995f, 1984.257f, 3055.543f, 49.47314f, 3.0625f, 0x00000000, 0x00000001, 0x00000000))
							{
								if (unk_0xD1960163A3042274(Local_113[0x0000000C /*33*/], 0x08F5AF9D) == 0x00000007)
								{
									unk_0x0C8C0C840C2D1AD2(Local_113[0x0000000D /*33*/], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
									unk_0x0C8C0C840C2D1AD2(Local_113[0x0000000E /*33*/], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
									unk_0x0C8C0C840C2D1AD2(Local_113[0x0000000C /*33*/], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
								}
							}
						}
					}
					break;
				
				case 0x00000008:
					fVar1 = func_73(unk_0x16F2683693E537C9(), 2450.214f, 4979.208f, 60.8422f, 0x00000001);
					if (fVar1 < 900f)
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							iVar4 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
							if (unk_0xDF1306B443CD3D15(iVar4, 0x00000000))
							{
								if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar4)) || unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iVar4)))
								{
									fVar2 = (900f - fVar1);
									if (fVar2 < 0f)
									{
										fVar2 = 0f;
									}
									fVar2 = (fVar2 / 900f);
									fVar2 = (fVar2 * 10000f);
									fVar3 = unk_0x9C66D99E63E8E24C(iVar4);
									fVar2 = (fVar2 * (fVar3 / 35f));
									if (fVar3 > 35f)
									{
										unk_0xEF3C30F70D2ED135(iVar4, 0x00000001, 0f, -fVar2, 0f, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
									}
								}
							}
						}
					}
					break;
				
				case 0x00000009:
					if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "missrampageintrooutro", "trvram_6_1h_run_outro", 0x00000003))
					{
						Local_385[iParam0 /*10*/].f_6 = 0x00000001;
						unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x00000141, 0x00000001);
						if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), unk_0x12AB0310C2281427("walkinterruptible")))
						{
							unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0x9072A713, 0x00000000, 0x00000000, 0x00000000);
							if (func_174())
							{
								unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
								Local_385[iParam0 /*10*/].f_3 = 0x00000001;
							}
						}
					}
					else if (Local_385[iParam0 /*10*/].f_6 == 0x00000001)
					{
						unk_0x8D17794CE3273D70("missrampageintrooutro");
						Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					}
					break;
				
				case 0x00000006:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							if ((!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000C /*33*/]) && !unk_0xEB6A8945D1AC98A1(Local_113[0x0000000D /*33*/])) && !unk_0xEB6A8945D1AC98A1(Local_113[0x0000000E /*33*/]))
							{
								unk_0x6DF7BF67E86AAE86(Local_113[0x0000000C /*33*/], iLocal_154);
								unk_0x6DF7BF67E86AAE86(Local_113[0x0000000D /*33*/], iLocal_154);
								unk_0x6DF7BF67E86AAE86(Local_113[0x0000000E /*33*/], iLocal_154);
								unk_0xAFF39FB306F8E232(Local_113[0x0000000C /*33*/], 0x00000011, 0x00000001);
								unk_0xAFF39FB306F8E232(Local_113[0x0000000D /*33*/], 0x00000011, 0x00000001);
								unk_0xAFF39FB306F8E232(Local_113[0x0000000E /*33*/], 0x00000011, 0x00000001);
								unk_0xE910A68AA670B4AA(Local_113[0x0000000C /*33*/]);
								unk_0xE910A68AA670B4AA(Local_113[0x0000000D /*33*/]);
								unk_0xE910A68AA670B4AA(Local_113[0x0000000E /*33*/]);
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 0x00000001:
							if ((unk_0xEB6A8945D1AC98A1(Local_113[0x0000000C /*33*/]) || unk_0xEB6A8945D1AC98A1(Local_113[0x0000000D /*33*/])) || unk_0xEB6A8945D1AC98A1(Local_113[0x0000000E /*33*/]))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000C /*33*/]))
							{
								if (unk_0x688A90832774AB83(Local_113[0x0000000C /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 0x00000002;
								}
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000D /*33*/]))
							{
								if (unk_0x688A90832774AB83(Local_113[0x0000000D /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 0x00000002;
								}
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000E /*33*/]))
							{
								if (unk_0x688A90832774AB83(Local_113[0x0000000E /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 0x00000002;
								}
							}
							break;
						
						case 0x00000002:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000C /*33*/]))
							{
								unk_0xF3268524E9BE6D6E(Local_113[0x0000000C /*33*/], unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0xFADC0A217229F6B5(Local_113[0x0000000C /*33*/], 0x00000001);
								unk_0x6DAD7906B73F064D(&(Local_113[0x0000000C /*33*/]));
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000D /*33*/]))
							{
								unk_0xF3268524E9BE6D6E(Local_113[0x0000000D /*33*/], unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0xFADC0A217229F6B5(Local_113[0x0000000D /*33*/], 0x00000001);
								unk_0x6DAD7906B73F064D(&(Local_113[0x0000000D /*33*/]));
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000E /*33*/]))
							{
								unk_0xF3268524E9BE6D6E(Local_113[0x0000000E /*33*/], unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0xFADC0A217229F6B5(Local_113[0x0000000E /*33*/], 0x00000001);
								unk_0x6DAD7906B73F064D(&(Local_113[0x0000000E /*33*/]));
								Local_385[iParam0 /*10*/].f_3 = 0x00000001;
							}
							break;
					}
					break;
				
				case 0x0000000A:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							unk_0x0CDF80057190977A("chinese2_explosion_cutscene");
							unk_0xE96F19797E59AB06();
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 0x00000001:
							if (iLocal_166 == 0x00000001)
							{
								if (unk_0xE3934829A331AF92("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0x00000000))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_166 == 0x00000002)
							{
								if (unk_0xE3934829A331AF92("CHINESE2_FARMHOUSE_EXPLOSION_STICKY_BOMB_MASTER", 0x00000000))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_166 == 0x00000003)
							{
								if (unk_0xE3934829A331AF92("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0x00000000))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 0x00000002:
							if (unk_0x23239EF74F22427E())
							{
								Local_385[iParam0 /*10*/].f_6 = 0x0000000A;
							}
							break;
					}
					break;
				
				case 0x0000000B:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000001:
							if (unk_0x1C0640BA9A7327B3() > Local_385[iParam0 /*10*/].f_7)
							{
								if (unk_0x31609A585163CBAC(unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9())))
								{
									unk_0xDA55CDFB97015579(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) + Vector(0f, unk_0x79833B02DBD2A244(0f, 4f), unk_0x79833B02DBD2A244(0f, 4f)), 0x00000010, 1.5f, 0x00000001, 0x00000000, 0x3F800000, 0x00000000);
									Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 - 1f);
									Local_385[iParam0 /*10*/].f_7 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x000000FA, 0x00000208));
								}
								else
								{
									Local_385[iParam0 /*10*/].f_6 = 0x00000002;
								}
							}
							break;
						
						case 0x00000002:
							break;
						
						default:
							iVar5 = 0x00000000;
							while (iVar5 < vLocal_384.x)
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_385[iParam0 /*10*/].f_7, iVar5))
								{
									if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, vLocal_384[iVar5 /*3*/], 5f))
									{
										unk_0x5D96D8530B3D0904(&(Local_385[iParam0 /*10*/].f_7), iVar5);
										if (Local_385[iParam0 /*10*/].f_6 == 0x00000000)
										{
											Local_385[iParam0 /*10*/].f_6 = unk_0x1C0640BA9A7327B3() + 1500;
										}
									}
								}
								iVar5++;
							}
							if (unk_0x1C0640BA9A7327B3() > Local_385[iParam0 /*10*/].f_8)
							{
								Local_385[iParam0 /*10*/].f_8 = 0x00000000;
								iVar5 = 0x00000000;
								while (iVar5 < vLocal_384.x)
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_385[iParam0 /*10*/].f_7, iVar5 + 9) && unk_0xEAE0D21A50E6C7F4(Local_385[iParam0 /*10*/].f_7, iVar5))
									{
										unk_0xDA55CDFB97015579(vLocal_384[iVar5 /*3*/], 0x00000010, 1.5f, 0x00000001, 0x00000000, 0x3F800000, 0x00000000);
										unk_0x5D96D8530B3D0904(&(Local_385[iParam0 /*10*/].f_7), iVar5 + 9);
										iVar5 = 0x00000008;
										Local_385[iParam0 /*10*/].f_8 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000096, 0x00000140));
									}
									iVar5++;
								}
							}
							if (Local_385[iParam0 /*10*/].f_6 != 0x00000000)
							{
								if (unk_0x1C0640BA9A7327B3() > Local_385[iParam0 /*10*/].f_6)
								{
									Local_385[iParam0 /*10*/].f_6 = 0x00000001;
									Local_385[iParam0 /*10*/].f_7 = unk_0x1C0640BA9A7327B3() + 300;
									Local_385[iParam0 /*10*/].f_9 = 16f;
								}
							}
							break;
					}
					break;
				
				case 0x0000000C:
					iVar6 = func_18(0x00000008);
					iVar7 = func_18(0x00000009);
					func_105(iVar6, 0x00000014, 0x00000000, 0x00000000);
					func_105(iVar7, 0x00000014, 0x00000000, 0x00000000);
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x0000002A:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							unk_0xBCB06D7034D8B667("RADIO_01_CLASS_ROCK");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 0x00000001:
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								if (unk_0x3133F8A3F91571F1())
								{
									iLocal_144 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
									if (unk_0xDF1306B443CD3D15(iLocal_144, 0x00000000))
									{
										if (!unk_0x2F6DBDA9ACD7D3AB(iLocal_144))
										{
											Local_385[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
						
						case 0x00000002:
							if (unk_0x13896FDECC859926("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
							break;
						
						case 0x00000003:
							if (unk_0xC92DB9682A650680("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 0x00000004:
							if (func_74(iLocal_144))
							{
								if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_144, 0x00000000))
								{
									if (unk_0x2F6DBDA9ACD7D3AB(iLocal_144))
									{
										Local_385[iParam0 /*10*/].f_7 = (Local_385[iParam0 /*10*/].f_7 + unk_0x1C0640BA9A7327B3() + 7000);
										Local_385[iParam0 /*10*/].f_6++;
									}
								}
							}
							break;
						
						case 0x00000005:
							if (func_74(iLocal_144))
							{
								if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_144, 0x00000000))
								{
									if (unk_0x1C0640BA9A7327B3() > Local_385[iParam0 /*10*/].f_7)
									{
										if (unk_0x0931E02856C8B6A4() != 0x00000006 && unk_0x0931E02856C8B6A4() != 0x00000000)
										{
											if (unk_0x2D4F0B9A42E7273F() != 0x00000000)
											{
												if (func_35("CHI2_rad", 0x00000001, unk_0x16F2683693E537C9(), "Trevor", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
												{
													Local_385[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_385[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_385[iParam0 /*10*/].f_7 = unk_0x1C0640BA9A7327B3() + 5000;
										}
									}
								}
							}
							break;
						
						case 0x00000006:
							if (func_88("CHI2_rad"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 0x00000007:
							if (!func_88("CHI2_rad"))
							{
								if (func_74(iLocal_144))
								{
									if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_144, 0x00000000))
									{
										if (!unk_0x06F8112AA79C53D9(0x00000000, 0x00000055))
										{
											if (unk_0x0931E02856C8B6A4() != 0x00000006)
											{
												if (iLocal_177 == 0xFFFFFFFF)
												{
													iLocal_177 = unk_0xD68EA767274B7444();
													unk_0x4D7F4CC43D4D0DE3(iLocal_177, "Change_Station_Loud", "Radio_Soundset", 0x00000001);
													Local_385[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_385[iParam0 /*10*/].f_6 = 0x00000009;
											}
										}
									}
								}
							}
							break;
						
						case 0x00000008:
							if (!unk_0x06F8112AA79C53D9(0x00000000, 0x00000055))
							{
								if (unk_0xC92DB9682A650680("CHN2_TREV_RADIO_2_FRTA"))
								{
									unk_0x8BC9595FD2792B5D("CHI_2_DRIVE_ROCK_RADIO");
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 0x00000009:
							if (func_74(iLocal_144))
							{
								if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_144, 0x00000000))
								{
									if (unk_0x0931E02856C8B6A4() == 0x00000006)
									{
										if (unk_0x2D4F0B9A42E7273F() != 0x00000000)
										{
											if (func_35("CHI2_radb", 0x00000001, unk_0x16F2683693E537C9(), "Trevor", 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000008))
											{
												Local_385[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_385[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
					}
					break;
				
				case 0x00000030:
					func_31(0x00000009, 0x00000001);
					unk_0x51B096AAC60548C1(1f);
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
					unk_0x34D79252800B23FF(0x00000005);
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x00000031:
					if (!func_96(2448.25f, 4974.92f, 55.11f, 20f, 500f) || func_93(0x00000031))
					{
						if (iLocal_179 != 0x00000000)
						{
							unk_0x25BB71BA267FE042(iLocal_179);
						}
						iLocal_179 = 0x00000000;
						func_19(0x00000032, 0x00000002, 0x00000000, 0x00000001, 0x00000000);
						func_19(0x00000033, 0x00000002, 0x00000000, 0x00000001, 0x00000000);
						func_19(0x00000034, 0x00000002, 0x00000000, 0x00000001, 0x00000000);
						func_19(0x00000035, 0x00000002, 0x00000000, 0x00000001, 0x00000000);
						func_19(0x00000036, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
						func_19(0x00000037, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
						Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					}
					break;
				
				case 0x00000032:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0x00000000))
							{
								Local_385[iParam0 /*10*/].f_7 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"));
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 0x00000001:
							if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0x00000000))
							{
								iVar8 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"));
								if (iVar8 > Local_385[iParam0 /*10*/].f_7)
								{
									Local_385[iParam0 /*10*/].f_7 = iVar8;
								}
								else if (iVar8 < Local_385[iParam0 /*10*/].f_7)
								{
									func_9(0x0000009E, (Local_385[iParam0 /*10*/].f_7 - iVar8), 0x00000000);
									Local_385[iParam0 /*10*/].f_7 = iVar8;
								}
							}
							if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar9, 0x00000001))
							{
								if (iVar9 == joaat("weapon_petrolcan"))
								{
									if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000018))
									{
										if (Local_385[iParam0 /*10*/].f_8 == 0x00000000)
										{
											func_10(0x0000009D, 0x00000000);
											Local_385[iParam0 /*10*/].f_8 = 0x00000001;
										}
									}
									else if (Local_385[iParam0 /*10*/].f_8 == 0x00000001)
									{
										func_11(0x00000000, 0x0000009D);
										Local_385[iParam0 /*10*/].f_8 = 0x00000000;
									}
								}
								else if (Local_385[iParam0 /*10*/].f_8 == 0x00000001)
								{
									func_11(0x00000000, 0x0000009D);
									Local_385[iParam0 /*10*/].f_8 = 0x00000000;
								}
							}
							else if (Local_385[iParam0 /*10*/].f_8 == 0x00000001)
							{
								func_11(0x00000000, 0x0000009D);
								Local_385[iParam0 /*10*/].f_8 = 0x00000000;
							}
							break;
					}
					break;
				
				case 0x00000033:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							Local_385[iParam0 /*10*/].f_7 = 0xFFFFFFFF;
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 0x00000001:
							if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar10, 0x00000001))
							{
								if (iVar10 == joaat("weapon_petrolcan"))
								{
									if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000018))
									{
										if (Local_385[iParam0 /*10*/].f_7 == 0xFFFFFFFF)
										{
											Local_385[iParam0 /*10*/].f_7 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"));
										}
										if (iLocal_93 == 0x00000000)
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + (SYSTEM::TIMESTEP() * 2f));
										}
										else if (iLocal_93 < 0x0000001E && Local_385[iParam0 /*10*/].f_9 < 70f)
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + (SYSTEM::TIMESTEP() * 1.5f));
										}
										else
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + SYSTEM::TIMESTEP());
										}
										iVar11 = SYSTEM::FLOOR((IntToFloat(Local_385[iParam0 /*10*/].f_7) * (1f - (Local_385[iParam0 /*10*/].f_9 / 90f))));
										if (iVar11 > 0x00000000)
										{
											unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), iVar10, iVar11, 0x00000000);
										}
										else
										{
											unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), iVar10, 0x00000000, 0x00000000);
										}
									}
								}
							}
							break;
					}
					break;
				
				case 0x00000034:
					func_15("CHN2_STOP_TRACK", 0x00000000, func_173());
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x00000035:
					unk_0xAFC04933E85FEE35("AZL_CHN2_METH_LAB_FARM_FIRE", 0x00000001, 0x00000001);
					func_172(0x00000001);
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x00000036:
					func_172(0x00000000);
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x00000037:
					unk_0xC83E7A5E408DF68C(0x00000003);
					unk_0xFF42993F8A095C58(0x00000003);
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x00000038:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							if (unk_0xC844350D5D58C99A(Local_113[0x00000004 /*33*/].f_14))
							{
								unk_0xEEEE2E5FA6F78DF0(&(Local_113[0x00000004 /*33*/].f_14));
							}
							if (unk_0xC844350D5D58C99A(Local_113[0x00000005 /*33*/].f_14))
							{
								unk_0xEEEE2E5FA6F78DF0(&(Local_113[0x00000005 /*33*/].f_14));
							}
							iVar12 = 0x00000000;
							while (iVar12 < iLocal_170)
							{
								if (unk_0xC844350D5D58C99A(iLocal_170[iVar12]))
								{
									unk_0xEEEE2E5FA6F78DF0(&(iLocal_170[iVar12]));
								}
								iVar12++;
							}
							unk_0x71199B01895C6202(joaat("prop_cs_beer_bot_01"));
							unk_0x71199B01895C6202(joaat("prop_ld_can_01"));
							unk_0x71199B01895C6202(joaat("prop_cs_fertilizer"));
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 0x00000001:
							if (unk_0xEB6A8945D1AC98A1(Local_113[0x00000017 /*33*/]))
							{
								if (unk_0xC844350D5D58C99A(iLocal_373))
								{
									unk_0xEEEE2E5FA6F78DF0(&iLocal_373);
									unk_0x2914827AC2790D54(joaat("weapon_sawnoffshotgun"));
									Local_385[iParam0 /*10*/].f_3 = 0x00000001;
								}
							}
							break;
					}
					break;
				
				case 0x0000002F:
					if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000B /*33*/]))
					{
						if (!unk_0x65636D4556D82155(Local_113[0x0000000B /*33*/]))
						{
							if (unk_0x1C0640BA9A7327B3() > Local_385[iParam0 /*10*/].f_7)
							{
								if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000B /*33*/]))
								{
									unk_0xEB0A515D699A7E90(Local_113[0x0000000B /*33*/], "WHIMPER", "WAVELOAD_PAIN_MALE", "SPEECH_PARAMS_FORCE_NORMAL", 0x00000000);
									Local_385[iParam0 /*10*/].f_7 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000DAC, 0x00001388));
								}
							}
						}
					}
					break;
				
				case 0x00000029:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							unk_0x523BCC9DC80CD82F(joaat("ig_taocheng"));
							unk_0x523BCC9DC80CD82F(joaat("ig_taostranslator"));
							unk_0x3F423BF5B8125A50("misschinese2_crystalmaze");
							if (iLocal_379 == 0xFFFFFFFF || (iLocal_379 != 0xFFFFFFFF && !unk_0x49083FDB78AC0509(iLocal_379)))
							{
								iLocal_379 = unk_0x544B74C043CE9948(1991.081f, 3054.517f, 46.71474f, 4f, 4f, 4f, 0f, 0x00000000, 0x00000003);
							}
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 0x00000001:
							if ((unk_0xB4AE0788C1587752("misschinese2_crystalmaze") && unk_0xB87F6CF6E5628C67(joaat("ig_taocheng"))) && unk_0xB87F6CF6E5628C67(joaat("ig_taostranslator")))
							{
								if (!unk_0xC844350D5D58C99A(Local_113[0x0000000B /*33*/]))
								{
									Local_113[0x0000000B /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("ig_taocheng"), 1991.988f, 3054.51f, 46.215f, 0f, 0x00000001, 0x00000001);
									unk_0x6DF7BF67E86AAE86(Local_113[0x0000000B /*33*/], iLocal_118);
									unk_0x25C5402CC10F76CD(Local_113[0x0000000B /*33*/], 0x00000000);
								}
								else if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000B /*33*/]))
								{
									unk_0x6DF7BF67E86AAE86(Local_113[0x0000000B /*33*/], iLocal_118);
									unk_0x25C5402CC10F76CD(Local_113[0x0000000B /*33*/], 0x00000000);
								}
								if (!unk_0xC844350D5D58C99A(Local_113[0x0000000A /*33*/]))
								{
									Local_113[0x0000000A /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("ig_taostranslator"), 1991.988f, 3054.51f, 46.215f, 0f, 0x00000001, 0x00000001);
									unk_0x6DF7BF67E86AAE86(Local_113[0x0000000A /*33*/], iLocal_118);
									unk_0x25C5402CC10F76CD(Local_113[0x0000000A /*33*/], 0x00000000);
									unk_0x9A28E8CB86CD4694(Local_113[0x0000000A /*33*/], 0x00000001, 0x00000000, 0x00000001, 0x00000000);
								}
								else if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000A /*33*/]))
								{
									unk_0x6DF7BF67E86AAE86(Local_113[0x0000000A /*33*/], iLocal_118);
									unk_0x25C5402CC10F76CD(Local_113[0x0000000A /*33*/], 0x00000000);
								}
								if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000B /*33*/]))
								{
									if (!unk_0x69DF961355195C3C(Local_385[iParam0 /*10*/].f_7))
									{
										Local_385[iParam0 /*10*/].f_7 = unk_0xE9744DB7B8CA6965(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 0x00000002);
										unk_0xEFC3DF9D33E248D8(Local_385[iParam0 /*10*/].f_7, 0x00000001);
									}
									unk_0x915804B434753CBD(Local_113[0x0000000B /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 0x00000101, 0x00000010, 0x447A0000, 0x00000000);
								}
								if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000A /*33*/]))
								{
									if (!unk_0x69DF961355195C3C(Local_385[iParam0 /*10*/].f_7))
									{
										Local_385[iParam0 /*10*/].f_7 = unk_0xE9744DB7B8CA6965(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 0x00000002);
										unk_0xEFC3DF9D33E248D8(Local_385[iParam0 /*10*/].f_7, 0x00000001);
									}
									unk_0x915804B434753CBD(Local_113[0x0000000A /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 0x00000101, 0x00000010, 0x447A0000, 0x00000000);
								}
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 0x00000002:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000A /*33*/]) && !unk_0xEB6A8945D1AC98A1(Local_113[0x0000000B /*33*/]))
							{
								unk_0x64F9F278AB9DCA2C(Local_113[0x0000000A /*33*/], 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								unk_0x11AD11297DC58CC7(Local_113[0x0000000B /*33*/], 0x00000001);
								unk_0x11AD11297DC58CC7(Local_113[0x0000000A /*33*/], 0x00000001);
								if (!unk_0x69DF961355195C3C(Local_385[iParam0 /*10*/].f_7))
								{
									Local_385[iParam0 /*10*/].f_7 = unk_0xE9744DB7B8CA6965(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 0x00000002);
									unk_0x915804B434753CBD(Local_113[0x0000000B /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 0x00000101, 0x00000010, 0x447A0000, 0x00000000);
									unk_0x915804B434753CBD(Local_113[0x0000000A /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 0x00000101, 0x00000010, 0x447A0000, 0x00000000);
									unk_0xEFC3DF9D33E248D8(Local_385[iParam0 /*10*/].f_7, 0x00000001);
								}
								unk_0x4E885A246A9D983A(Local_113[0x0000000B /*33*/], 0x00000076, 0x00000000);
								unk_0x4E885A246A9D983A(Local_113[0x0000000B /*33*/], 0x000000D0, 0x00000001);
								unk_0x4E885A246A9D983A(Local_113[0x0000000A /*33*/], 0x00000076, 0x00000000);
								unk_0x4E885A246A9D983A(Local_113[0x0000000A /*33*/], 0x000000D0, 0x00000001);
								Local_385[iParam0 /*10*/].f_6 = 0x00000384;
							}
							break;
						
						case 0x00000384:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000B /*33*/]))
							{
								if (!unk_0x869EFD0BC0868856(Local_113[0x0000000B /*33*/]))
								{
									if (unk_0x69DF961355195C3C(Local_385[iParam0 /*10*/].f_7))
									{
										if (unk_0xA45992A6CE82FB43(Local_385[iParam0 /*10*/].f_7) == 1f)
										{
											Local_385[iParam0 /*10*/].f_7 = unk_0xE9744DB7B8CA6965(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 0x00000002);
											unk_0xEFC3DF9D33E248D8(Local_385[iParam0 /*10*/].f_7, 0x00000001);
											if (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003) < 0x00000002)
											{
												unk_0x915804B434753CBD(Local_113[0x0000000B /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_TaoCheng", 1000f, -4f, 0x00000101, 0x00000010, 0x447A0000, 0x00000000);
												if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000A /*33*/]))
												{
													if (!unk_0x869EFD0BC0868856(Local_113[0x0000000A /*33*/]))
													{
														if (!unk_0xEAE0D21A50E6C7F4(Local_385[iParam0 /*10*/].f_8, 0x00000000))
														{
															unk_0x915804B434753CBD(Local_113[0x0000000A /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_taotranslator", 1000f, -4f, 0x00000101, 0x00000010, 0x447A0000, 0x00000000);
														}
													}
												}
											}
											else
											{
												unk_0x915804B434753CBD(Local_113[0x0000000B /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 0x00000101, 0x00000010, 0x447A0000, 0x00000000);
												if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000A /*33*/]))
												{
													if (!unk_0x869EFD0BC0868856(Local_113[0x0000000A /*33*/]))
													{
														if (!unk_0xEAE0D21A50E6C7F4(Local_385[iParam0 /*10*/].f_8, 0x00000000))
														{
															unk_0x915804B434753CBD(Local_113[0x0000000A /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 0x00000101, 0x00000010, 0x447A0000, 0x00000000);
														}
													}
												}
											}
										}
									}
									else
									{
										Local_385[iParam0 /*10*/].f_7 = unk_0xE9744DB7B8CA6965(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 0x00000002);
										unk_0x915804B434753CBD(Local_113[0x0000000B /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 0x00000101, 0x00000010, 0x447A0000, 0x00000000);
										unk_0xEFC3DF9D33E248D8(Local_385[iParam0 /*10*/].f_7, 0x00000001);
									}
								}
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000A /*33*/]))
							{
								if (((unk_0xB87D13D0C064E9D1(Local_113[0x0000000A /*33*/], unk_0x16F2683693E537C9(), 0x00000001) || unk_0x869EFD0BC0868856(Local_113[0x0000000A /*33*/])) || unk_0xEB6A8945D1AC98A1(Local_113[0x0000000B /*33*/])) || (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000A /*33*/]) && unk_0xD1960163A3042274(Local_113[0x0000000A /*33*/], 0x6A67A5CC) == 0x00000002))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_385[iParam0 /*10*/].f_8, 0x00000000))
									{
										unk_0xA3BF0AA5A2608191(Local_113[0x0000000A /*33*/]);
										func_99();
										unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 30f, 0x00004E20, 0x00000000, 0x00000000);
										unk_0x8BE3D040D15AEA1D(0x00000000, 0xFFFFFFFF);
										func_98(&(Local_113[0x0000000A /*33*/]), 0x00000000);
										unk_0x5D96D8530B3D0904(&(Local_385[iParam0 /*10*/].f_8), 0x00000000);
									}
								}
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000B /*33*/]))
							{
								if (((unk_0xB87D13D0C064E9D1(Local_113[0x0000000B /*33*/], unk_0x16F2683693E537C9(), 0x00000001) || unk_0x869EFD0BC0868856(Local_113[0x0000000B /*33*/])) || unk_0xEAE0D21A50E6C7F4(Local_385[iParam0 /*10*/].f_8, 0x00000001)) || (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000B /*33*/]) && unk_0xD1960163A3042274(Local_113[0x0000000B /*33*/], 0x6A67A5CC) == 0x00000002))
								{
									unk_0xD458AC1C1D29C3B4(Local_113[0x0000000B /*33*/], 0x00000000, 0x00000000);
									if (!unk_0x869EFD0BC0868856(Local_113[0x0000000B /*33*/]))
									{
									}
								}
							}
							if (func_73(unk_0x16F2683693E537C9(), 1991.988f, 3054.51f, 46.215f, 0x00000001) > 200f)
							{
								if (unk_0xC844350D5D58C99A(Local_113[0x0000000B /*33*/]) && unk_0xC844350D5D58C99A(Local_113[0x0000000A /*33*/]))
								{
									unk_0xEBA53F35D0085654(&(Local_113[0x0000000B /*33*/]));
									unk_0xEBA53F35D0085654(&(Local_113[0x0000000A /*33*/]));
								}
								unk_0x71199B01895C6202(joaat("ig_taocheng"));
								unk_0x71199B01895C6202(joaat("ig_taostranslator"));
								unk_0x8D17794CE3273D70("misschinese2_crystalmaze");
								if (iLocal_379 != 0xFFFFFFFF)
								{
									if (unk_0x49083FDB78AC0509(iLocal_379))
									{
										unk_0xDDABC98CFF1A4C60(iLocal_379);
									}
								}
								Local_385[iParam0 /*10*/].f_3 = 0x00000001;
							}
							break;
					}
					if (func_73(unk_0x16F2683693E537C9(), 1995.169f, 3062.162f, 46.049f, 0x00000001) < 7f)
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000B /*33*/]))
						{
							if (unk_0xD1960163A3042274(Local_113[0x0000000B /*33*/], 0x08F5AF9D) != 0x00000001)
							{
								unk_0x0C8C0C840C2D1AD2(Local_113[0x0000000B /*33*/], unk_0x16F2683693E537C9(), 0x00000FA0, 0x00000830, 0x00000002);
							}
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000A /*33*/]))
						{
							if (unk_0xD1960163A3042274(Local_113[0x0000000A /*33*/], 0x08F5AF9D) != 0x00000001)
							{
								unk_0x0C8C0C840C2D1AD2(Local_113[0x0000000A /*33*/], unk_0x16F2683693E537C9(), 0x00000FA0, 0x00000830, 0x00000002);
							}
						}
					}
					break;
				
				case 0x0000000D:
					iVar13 = 0x00000000;
					iLocal_382 = 0x00000000;
					iVar13 = 0x00000000;
					while (iVar13 < Local_113)
					{
						if (unk_0xC844350D5D58C99A(Local_113[iVar13 /*33*/]))
						{
							if (unk_0xEB6A8945D1AC98A1(Local_113[iVar13 /*33*/]))
							{
								if (Local_113[iVar13 /*33*/].f_15 == 0x00000000)
								{
									if (((unk_0xF71162D1C14C71E7(Local_113[iVar13 /*33*/]) == 0x176898A6 || unk_0xF71162D1C14C71E7(Local_113[iVar13 /*33*/]) == joaat("weapon_heavysniper")) || unk_0xF71162D1C14C71E7(Local_113[iVar13 /*33*/]) == joaat("weapon_remotesniper")) || unk_0xF71162D1C14C71E7(Local_113[iVar13 /*33*/]) == joaat("weapon_sniperrifle"))
									{
										iLocal_382++;
									}
									Local_113[iVar13 /*33*/].f_15 = 0x00000001;
								}
							}
						}
						iVar13++;
					}
					if (iLocal_382 > 0x00000000)
					{
					}
					if (iLocal_382 > 0x00000001)
					{
						func_171(0x00000096);
						Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					}
					break;
				
				case 0x0000000E:
					func_15("CHN2_SNIPE_START", 0x00000000, "CHN2_EXPLODE");
					unk_0x8B4C4CA774181102(4f, 15f, 0x00000004);
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x0000000F:
					if (func_93(0x00000009))
					{
						func_15("CHN2_SPOTTED", 0x00000000, "CHN2_EXPLODE");
					}
					else
					{
						func_15("CHN2_TO_HOUSE", 0x00000000, "CHN2_EXPLODE");
					}
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x00000010:
					if (unk_0x762119754C50557A(iLocal_176))
					{
						unk_0x40B7230FD4C59AA2(iLocal_176);
					}
					iVar14 = 0x00000000;
					unk_0x5D96D8530B3D0904(&iVar14, 0x00000003);
					unk_0x5D96D8530B3D0904(&iVar14, 0x00000008);
					unk_0x5D96D8530B3D0904(&iVar14, 0x00000001);
					if (!unk_0x762119754C50557A(iLocal_176))
					{
						iLocal_176 = unk_0xA6FF0828D17CF374(joaat("pickup_weapon_petrolcan"), 2436.775f, 4967.487f, 41.4f, iVar14, 0xFFFFFFFF, 0x00000001, 0x00000000);
						unk_0x201D37E7F281A9D1(iLocal_176, "V_8_BasementRm");
						iLocal_178 = func_170(iLocal_176);
						unk_0xDC5B2F9D0CCE3A10(iLocal_178, "FRMBLIP");
					}
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x00000011:
					if (!func_30(0x00000005))
					{
						func_172(0x00000001);
						unk_0x8BC9595FD2792B5D("CHI_2_SHOOTOUT_STEALTH");
						unk_0xB975E4541DDAB1F5(0x00000001);
						Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					}
					break;
				
				case 0x00000013:
					unk_0x8D17794CE3273D70("misschinese2_barrelRoll");
					unk_0xDD465543E2028AEA("move_m@gangster@var_e");
					unk_0xDD465543E2028AEA("move_m@gangster@var_f");
					unk_0xDD465543E2028AEA("move_m@gangster@generic");
					unk_0x8D17794CE3273D70("misschinese2_bank5");
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x00000014:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							Local_385[iParam0 /*10*/].f_7 = unk_0x1C0640BA9A7327B3() + 4000;
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 0x00000001:
							if (unk_0x1C0640BA9A7327B3() > Local_385[iParam0 /*10*/].f_7)
							{
								Local_385[iParam0 /*10*/].f_7 = 0x00000000;
								while (Local_385[iParam0 /*10*/].f_7 < Local_113)
								{
									if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
									{
										if (unk_0x4D570FEF9D230CE7(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]) == 0x00000000)
										{
											Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 = 0x00000005;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_3 = 0x00000007;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_4 = 0x00000000;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_5 = 0x00000000;
											func_105(Local_385[iParam0 /*10*/].f_7, 0x0000001B, 0x00000000, 0x00000000);
											unk_0x6DF7BF67E86AAE86(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], iLocal_117);
											func_134(&(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_19));
										}
									}
									Local_385[iParam0 /*10*/].f_7++;
								}
							}
							break;
					}
					break;
				
				case 0x00000015:
					Local_385[iParam0 /*10*/].f_7 = 0x00000000;
					while (Local_385[iParam0 /*10*/].f_7 < Local_113)
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
						{
							if (unk_0x3D1053F9EB43B7AD(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, 0x00000000, 0x00000001, 0x00000000))
							{
								unk_0xEBA53F35D0085654(&(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]));
							}
						}
						Local_385[iParam0 /*10*/].f_7++;
					}
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x00000016:
					func_15("CHN2_ENTER_HOUSE", 0x00000000, "CHN2_EXPLODE");
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x00000017:
					iVar15 = 0x00000000;
					while (iVar15 < Local_113)
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar15 /*33*/]))
						{
							if (unk_0xB0A50BC6EDB99CA9(Local_113[iVar15 /*33*/]) != unk_0x12AB0310C2281427("V_8_BasementRm"))
							{
								func_105(iVar15, 0x0000001B, 0x00000000, 0x00000000);
								Local_113[iVar15 /*33*/].f_1 = 0x00000005;
								Local_119[iVar15 /*24*/].f_3 = 0x00000007;
								Local_113[iVar15 /*33*/].f_5 = 0x00000000;
							}
						}
						iVar15++;
					}
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x00000018:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							Local_385[iParam0 /*10*/].f_7 = func_18(0x0000000A);
							if (Local_385[iParam0 /*10*/].f_7 != 0xFFFFFFFF)
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 0x00000001:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
							{
								func_105(Local_385[iParam0 /*10*/].f_7, 0x00000012, 0x00000000, 0x00000000);
								Local_385[iParam0 /*10*/].f_3 = 0x00000001;
							}
							else
							{
								Local_385[iParam0 /*10*/].f_3 = 0x00000001;
							}
							break;
					}
					break;
				
				case 0x00000019:
					if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) || func_93(0x00000009))
					{
						unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0x00000001, 0xFFFFFFFF, 0x00000000);
						Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					}
					break;
				
				case 0x0000001A:
					unk_0x8910D3D58E0132B8("CHI_2_SHOOTOUT_STEALTH");
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x0000001B:
					unk_0x8BC9595FD2792B5D("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x0000001C:
					if (unk_0x562F77A7F33D2E46("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
					{
						unk_0x8910D3D58E0132B8("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					}
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x0000002C:
					if (!unk_0x562F77A7F33D2E46("CHI_2_SHOOTOUT_IN_HOUSE"))
					{
						if (func_93(0x0000000C))
						{
							unk_0x8BC9595FD2792B5D("CHI_2_SHOOTOUT_IN_HOUSE");
						}
					}
					else if (func_162(0x0000000C))
					{
						unk_0x8910D3D58E0132B8("CHI_2_SHOOTOUT_IN_HOUSE");
					}
					break;
				
				case 0x0000002D:
					if ((func_93(0x00000009) || (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000008 /*33*/]) && unk_0x4734A6196B611C3B(Local_113[0x00000008 /*33*/], 0x00000000))) || (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000009 /*33*/]) && unk_0x4734A6196B611C3B(Local_113[0x00000009 /*33*/], 0x00000000)))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000008 /*33*/]))
						{
							unk_0x298903DD96203C2C(Local_113[0x00000008 /*33*/], 0x0000002D);
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000009 /*33*/]))
						{
							unk_0x298903DD96203C2C(Local_113[0x00000009 /*33*/], 0x0000002D);
						}
						Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					}
					break;
				
				case 0x0000001D:
					if (func_93(0x00000009))
					{
						Local_385[iParam0 /*10*/].f_7 = 0x00000000;
						while (Local_385[iParam0 /*10*/].f_7 < Local_113)
						{
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
							{
								unk_0x9FA191B317572861(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 60f);
							}
							Local_385[iParam0 /*10*/].f_7++;
						}
						Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					}
					else
					{
						switch (Local_385[iParam0 /*10*/].f_6)
						{
							case 0x00000000:
								if (func_93(0x0000000C))
								{
									Local_385[iParam0 /*10*/].f_7 = 0x00000000;
									while (Local_385[iParam0 /*10*/].f_7 < Local_113)
									{
										if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 == 0x00000001)
											{
												unk_0x9FA191B317572861(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 5f);
											}
										}
										Local_385[iParam0 /*10*/].f_7++;
									}
									Local_385[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 0x00000001:
								if (func_162(0x0000000C))
								{
									Local_385[iParam0 /*10*/].f_7 = 0x00000000;
									while (Local_385[iParam0 /*10*/].f_7 < Local_113)
									{
										if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 == 0x00000001)
											{
												unk_0x9FA191B317572861(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 30f);
											}
										}
										Local_385[iParam0 /*10*/].f_7++;
									}
									Local_385[iParam0 /*10*/].f_6 = 0x00000000;
								}
								break;
							}
					}
					break;
				
				case 0x0000002E:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							unk_0x3F423BF5B8125A50("misschinese2_crystalmaze");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 0x00000001:
							if (unk_0xB4AE0788C1587752("misschinese2_crystalmaze"))
							{
								if (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000017 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_7 = unk_0xE9744DB7B8CA6965(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 0x00000002);
									unk_0xC90224D9E95E5E3A(Local_385[iParam0 /*10*/].f_7, 0x00000001);
									unk_0x915804B434753CBD(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], Local_385[iParam0 /*10*/].f_8, "misschinese2_crystalmaze", "_stand_to_aim", 1000f, -8f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 0x00000002:
							break;
					}
					break;
				
				case 0x0000001E:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							unk_0x523BCC9DC80CD82F(joaat("blazer"));
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 0x00000001:
							if (unk_0xB87F6CF6E5628C67(joaat("blazer")))
							{
								iLocal_146 = unk_0x122AAB0B1D6F55AD(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 0x00000001, 0x00000001, 0x00000000);
								unk_0xB9FD7450C0DAB575(iLocal_146, 0x40A00000);
								Local_385[iParam0 /*10*/].f_3 = 0x00000001;
							}
							break;
					}
					break;
				
				case 0x0000001F:
					unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0x00000000, 0xFFFFFFFF, 0x00000000);
					func_169(0x00000000);
					func_167();
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x00000020:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							if (func_93(0x0000001D))
							{
								if (unk_0xE4EDC4B0E92C078B(iLocal_178))
								{
									unk_0x142CC44DB769B57E(&iLocal_178);
								}
								func_12(0x00000000);
								if (func_90("FRMFLC", 0x00000000, 0x00000000))
								{
									unk_0x790015DC92C918E2();
								}
								func_10(0x0000009D, 0x00000000);
								unk_0x8B4C4CA774181102(3f, 10f, 0x00000004);
								if (iLocal_167 == 0x00000000)
								{
									iLocal_167 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"));
								}
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 0x00000001:
							if (!func_93(0x0000001D))
							{
								func_9(0x0000009E, (iLocal_167 - unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"))), 0x00000001);
								iLocal_180 = unk_0x4B72871A3BE7B474(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 20f, unk_0x6B7EC7B5B6B57364(joaat("weapon_petrolcan")), 0x00000000, 0x00000000, 0x00000001);
								if (iLocal_180 != 0x00000000)
								{
									if (unk_0xE4EDC4B0E92C078B(iLocal_178))
									{
										unk_0x142CC44DB769B57E(&iLocal_178);
									}
									iLocal_178 = func_13(iLocal_180);
									func_12(0x00000001);
									func_11(0x00000000, 0x0000009D);
								}
								Local_385[iParam0 /*10*/].f_6 = 0x00000000;
							}
							break;
					}
					if (func_8())
					{
						func_11(0x00000000, 0x0000009D);
						Local_385[iParam0 /*10*/].f_3 = 0x00000001;
						func_32(0x00000011, 0x00000000);
					}
					break;
				
				case 0x00000021:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							unk_0x29398344B9E5B8A7("arm2_30");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 0x00000001:
							if (unk_0x1C2E18E9C63BEB77("arm2_30"))
							{
								if (func_93(0x0000001D))
								{
									unk_0xA19A5ADE229B4734("arm2_30", 0x00000001, 0x3F800000, 0x3F000000);
									unk_0x721075C23013EA5F("arm2_30", 0x00000002);
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 0x00000002:
							if (!func_93(0x0000001D))
							{
								unk_0xA19A5ADE229B4734("arm2_30", 0x00000000, 0x3F800000, 0x3F000000);
								Local_385[iParam0 /*10*/].f_6 = 0x00000001;
							}
							break;
					}
					break;
				
				case 0x00000022:
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == 0x00000000)
						{
							if (func_73(unk_0x16F2683693E537C9(), 2451.08f, 4961.463f, 44.4392f, 0x00000001) < 20f)
							{
								unk_0x3E48C1351341DC99(0x00000000, 0f, 0f, 0x00000000, 0x00000000);
							}
						}
					}
					break;
				
				case 0x00000023:
					func_15("CHN2_JERRY_CAN", 0x00000000, "CHN2_EXPLODE");
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x00000024:
					func_15("CHN2_EXIT_HOUSE", 0x00000000, "CHN2_EXPLODE");
					unk_0xEB819BD1E585E9CB(iLocal_171, "FarmhouseFire_Ignite", vLocal_172, "CHINESE2_SOUNDS", 0x00000000, 0x00000000, 0x00000000);
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x00000025:
					unk_0x8BC9595FD2792B5D("CHI_2_POUR_GAS");
					Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					break;
				
				case 0x00000026:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							unk_0xAE317D00A5A55DF6("FARMHOUSE_FIRE", 0x00000000, 0xFFFFFFFF);
							unk_0xAE317D00A5A55DF6("FARMHOUSE_FIRE_BG", 0x00000000, 0xFFFFFFFF);
							break;
					}
					break;
				
				case 0x00000027:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0x00000000:
							Local_385[iParam0 /*10*/].f_7 = func_18(0x00000004);
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 0x00000001:
							if (func_73(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 2454.895f, 4950.895f, 44.1488f, 0x00000001) > 100f && func_4(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], unk_0x16F2683693E537C9(), 0x00000001) > 100f)
							{
								iVar16 = func_18(0x00000004);
								func_134(&(Local_113[iVar16 /*33*/].f_19));
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar16 /*33*/]))
								{
									unk_0xFADC0A217229F6B5(Local_113[iVar16 /*33*/], 0x00000001);
									unk_0x6DAD7906B73F064D(&(Local_113[iVar16 /*33*/]));
								}
								Local_113[iVar16 /*33*/] = 0x00000000;
								iVar16 = func_18(0x00000005);
								func_134(&(Local_113[iVar16 /*33*/].f_19));
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar16 /*33*/]))
								{
									unk_0xFADC0A217229F6B5(Local_113[iVar16 /*33*/], 0x00000001);
									unk_0x6DAD7906B73F064D(&(Local_113[iVar16 /*33*/]));
								}
								Local_113[iVar16 /*33*/] = 0x00000000;
								iVar16 = func_18(0x00000007);
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar16 /*33*/]))
								{
									unk_0xFADC0A217229F6B5(Local_113[iVar16 /*33*/], 0x00000001);
									unk_0x6DAD7906B73F064D(&(Local_113[iVar16 /*33*/]));
								}
								func_134(&(Local_113[iVar16 /*33*/].f_19));
								Local_113[iVar16 /*33*/] = 0x00000000;
								if (unk_0xDF1306B443CD3D15(iLocal_145, 0x00000000))
								{
									unk_0x046C362CF15F1935(&iLocal_145);
								}
								Local_385[iParam0 /*10*/].f_3 = 0x00000001;
							}
							break;
					}
					break;
				
				case 0x00000028:
					if (func_107(0x00000018, joaat("a_m_m_hillbilly_01"), 2433.123f, 4960.47f, 45.8218f, 301f, joaat("weapon_smg"), 0x00000001, 0x00000001))
					{
						unk_0x298903DD96203C2C(Local_113[0x00000018 /*33*/], 0x00000064);
						if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000F /*33*/]))
						{
							unk_0x298903DD96203C2C(Local_113[0x0000000F /*33*/], 0x00000064);
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000010 /*33*/]))
						{
							unk_0x298903DD96203C2C(Local_113[0x00000010 /*33*/], 0x00000064);
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000011 /*33*/]))
						{
							unk_0x298903DD96203C2C(Local_113[0x00000011 /*33*/], 0x00000064);
						}
						unk_0x6C3AE6E278DB3D0E(Local_113[0x00000018 /*33*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						unk_0x26A6B1686E33113F(Local_113[0x00000018 /*33*/], 0x00000001);
						unk_0xD458AC1C1D29C3B4(Local_113[0x00000018 /*33*/], 0x000000C8, 0x00000000);
						Local_385[iParam0 /*10*/].f_3 = 0x00000001;
					}
					break;
			}
			if (Local_385[iParam0 /*10*/].f_6 == 0xFFFFFFFF)
			{
				Local_385[iParam0 /*10*/].f_3 = 0x00000001;
				Local_385[iParam0 /*10*/].f_6 = 0x00000000;
				Local_385[iParam0 /*10*/].f_1 = 0x00000000;
			}
		}
	}
}

void func_167()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_109)
	{
		if (!func_168(Local_109[iVar0 /*5*/], 0f, 0f, 0f, 0x00000000))
		{
			unk_0x7800CEC090C01D4D(Local_109[iVar0 /*5*/], 4f);
			unk_0x536F1BE96C726C4B(Local_109[iVar0 /*5*/], 2f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			iVar1 = 0x00000000;
			while (iVar1 < Local_113)
			{
				if (unk_0xC844350D5D58C99A(Local_113[iVar1 /*33*/]))
				{
					vVar2 = { unk_0x68F4C0EC296D3901(Local_113[iVar1 /*33*/], 0x00000000) };
					if (SYSTEM::VDIST2(vVar2, Local_109[iVar0 /*5*/]) < 2f && vVar2.z > 43.9f)
					{
						unk_0xEBA53F35D0085654(&(Local_113[iVar1 /*33*/]));
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_168(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_169(bool bParam0)
{
	int iVar0;
	
	bLocal_89 = 0x00000001;
	iLocal_93 = 0x00000000;
	iLocal_91 = 0xFFFFFFFF;
	iLocal_108 = 0x00000000;
	iLocal_108 = 0x00000000;
	iLocal_102 = 0x00000000;
	if (bParam0 == 0x00000000)
	{
		iLocal_86 = 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_109)
	{
		unk_0x58B5D6A0F1D7754D(Local_109[iVar0 /*5*/], 1f);
		if (!unk_0xE4EDC4B0E92C078B(Local_109[iVar0 /*5*/].f_3))
		{
			if (!func_168(Local_109[iVar0 /*5*/], 0f, 0f, 0f, 0x00000000))
			{
				iLocal_93++;
				Local_109[iVar0 /*5*/].f_3 = func_5(Local_109[iVar0 /*5*/], 0x00000000);
				unk_0x54B31D18C3F36EB7(Local_109[iVar0 /*5*/].f_3, 0x00000001);
				unk_0x516E63E474722206(Local_109[iVar0 /*5*/].f_3, 0.4f);
				unk_0xF2D30B8ACAF12A39(Local_109[iVar0 /*5*/].f_3, 0x00000000);
				if (!bParam0)
				{
					unk_0x7F010F50CE03A8AF(Local_109[iVar0 /*5*/].f_3, 0x00000000);
				}
				unk_0x61755AC17D8F538E(Local_109[iVar0 /*5*/].f_3, 0x00000005);
			}
		}
		else
		{
			Local_109[iVar0 /*5*/] = { unk_0xAC14F6E4B17D7835(Local_109[iVar0 /*5*/].f_3) };
			if (!bParam0)
			{
				unk_0x7F010F50CE03A8AF(Local_109[iVar0 /*5*/].f_3, 0x00000000);
			}
			else
			{
				unk_0x7F010F50CE03A8AF(Local_109[iVar0 /*5*/].f_3, 0x000000FF);
			}
			iLocal_93++;
		}
		Local_109[iVar0 /*5*/].f_4 = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_101)
	{
		Local_101[iVar0 /*5*/].f_1 = { 0f, 0f, 0f };
		Local_101[iVar0 /*5*/].f_4 = 0x00000000;
		iVar0++;
	}
}

int func_170(int iParam0)
{
	int iVar0;
	
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0xA0556E31F2661AF4(iParam0);
	unk_0x516E63E474722206(iVar0, func_6(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	return iVar0;
}

void func_171(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_F049 = 0x00000000;
	if (!Global_F129[iParam0 /*13*/] == 0x00000003)
	{
		return;
	}
	bVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < Global_11F87)
	{
		if (Global_11F88[iVar1 /*9*/] == iParam0)
		{
			bVar0 = 0x00000001;
			Global_11F88[iVar1 /*9*/].f_1 = 0x00000001;
			Global_11F88[iVar1 /*9*/].f_2 = 0f;
			if (Global_11F88[iVar1 /*9*/].f_3 == 0x00000002)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_172(bool bParam0)
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

var func_173()
{
	var uVar0;
	
	return uVar0;
}

int func_174()
{
	if (((((unk_0x0DED1C1B8250FA57(0x00000002, 0x0000001E) != 0x0000007F || unk_0x0DED1C1B8250FA57(0x00000002, 0x0000001F) != 0x0000007F) || unk_0x06F8112AA79C53D9(0x00000002, 0x00000018)) || unk_0x06F8112AA79C53D9(0x00000002, 0x00000019)) || unk_0x0DED1C1B8250FA57(0x00000002, 0x00000002) != 0x0000007F) || unk_0x0DED1C1B8250FA57(0x00000002, 0x00000001) != 0x0000007F)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_175(int iParam0, int iParam1)
{
	if (Local_385[iParam0 /*10*/] == iParam1)
	{
		return Local_385[iParam0 /*10*/].f_6;
	}
	return 0xFFFFFFFF;
}

void func_176(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = (iParam1 - iParam0);
	if (Local_388[0x00000000 /*8*/] != iParam0 && Local_388[iVar0 /*8*/] != iParam1)
	{
		iVar2 = 0x00000000;
		iVar1 = 0x00000000;
		while (iVar1 < Local_388)
		{
			if (iVar1 <= iVar0)
			{
				Local_388[iVar1 /*8*/] = (iParam0 + iVar2);
				Local_388[iVar1 /*8*/].f_1 = 0x00000001;
				Local_388[iVar1 /*8*/].f_2 = 0x00000000;
				Local_388[iVar1 /*8*/].f_3 = 0x00000000;
				iVar2++;
			}
			else
			{
				Local_388[iVar1 /*8*/].f_1 = 0x00000000;
			}
			iVar1++;
		}
	}
	iVar3 = 0x00000000;
	while (iVar3 < Local_388)
	{
		switch (Local_388[iVar3 /*8*/])
		{
			case 0x00000002:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (Local_388[iVar3 /*8*/].f_4 == 0x00000000)
					{
						if (func_90("FRMCHSE_1", 0x00000000, 0x00000000))
						{
							Local_388[iVar3 /*8*/].f_4 = 0x00000001;
						}
					}
					else if (!func_90("FRMCHSE_1", 0x00000000, 0x00000000))
					{
						Local_388[iVar3 /*8*/].f_2 = 0x00000001;
					}
				}
				break;
			
			case 0x00000003:
				Local_388[iVar3 /*8*/].f_2 = 0x00000000;
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
				}
				break;
			
			case 0x00000006:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_162(0x00000007))
					{
						if (unk_0xD15F544473A95FE8(2493.155f, 4970.315f, 43.88038f, 3.25f, 0x00000001, 0x00000001) || unk_0xD3DCEC81D13AAFB1(2493.155f, 4970.315f, 43.88038f, 3.25f, 0x00000001))
						{
							Local_388[iVar3 /*8*/].f_2 = 0x00000001;
						}
					}
					else
					{
						Local_388[iVar3 /*8*/].f_1 = 0x00000000;
					}
				}
				break;
			
			case 0x00000007:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					switch (Local_388[iVar3 /*8*/].f_4)
					{
						case 0x00000000:
							Local_388[iVar3 /*8*/].f_5 = func_18(0x00000008);
							Local_388[iVar3 /*8*/].f_6 = func_18(0x00000009);
							Local_388[iVar3 /*8*/].f_4++;
							break;
						
						case 0x00000001:
							if (Local_388[iVar3 /*8*/].f_5 != 0xFFFFFFFF && Local_388[iVar3 /*8*/].f_6 != 0xFFFFFFFF)
							{
								if (unk_0xC844350D5D58C99A(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]) && unk_0xC844350D5D58C99A(Local_113[Local_388[iVar3 /*8*/].f_6 /*33*/]))
								{
									if (unk_0xEB6A8945D1AC98A1(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]) || unk_0xEB6A8945D1AC98A1(Local_113[Local_388[iVar3 /*8*/].f_6 /*33*/]))
									{
										Local_388[iVar3 /*8*/].f_2 = 0x00000001;
									}
								}
							}
							break;
						}
				}
				break;
			
			case 0x00000009:
				if (bLocal_53)
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
					Local_388[iVar3 /*8*/].f_1 = 0x00000000;
				}
				break;
			
			case 0x0000000B:
				Local_388[iVar3 /*8*/].f_2 = 0x00000000;
				if (unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()) == unk_0x12AB0310C2281427("V_8_BasementRm"))
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
				}
				break;
			
			case 0x0000000C:
				Local_388[iVar3 /*8*/].f_2 = 0x00000000;
				if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != 0x00000000 && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2421.331f, 4954.833f, 25.32829f, 2466.796f, 4996.822f, 66.07018f, 37.1875f, 0x00000000, 0x00000001, 0x00000000))
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
				}
				break;
			
			case 0x0000000D:
				Local_388[iVar3 /*8*/].f_2 = 0x00000000;
				if (func_93(0x0000000C))
				{
					if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, 0x00000000, 0x00000001, 0x00000000))
					{
						Local_388[iVar3 /*8*/].f_2 = 0x00000001;
					}
				}
				break;
			
			case 0x0000000E:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_73(unk_0x16F2683693E537C9(), 2451.517f, 4973.122f, 44.2646f, 0x00000001) < 50f)
					{
						Local_388[iVar3 /*8*/].f_2 = 0x00000001;
					}
				}
				break;
			
			case 0x0000000F:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0x00000000:
						Local_388[iVar3 /*8*/].f_5 = func_18(0x00000011);
						if (Local_388[iVar3 /*8*/].f_5 != 0xFFFFFFFF)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 0x00000001:
						if (unk_0xC844350D5D58C99A(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]))
						{
							if (unk_0xEB6A8945D1AC98A1(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]))
							{
								if (func_73(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/], 2427.851f, 4964.972f, 43.1704f, 0x00000001) < 3f)
								{
									Local_388[iVar3 /*8*/].f_2 = 0x00000001;
									Local_388[iVar3 /*8*/].f_4++;
								}
								else
								{
									Local_388[iVar3 /*8*/].f_1 = 0x00000000;
								}
							}
						}
						break;
				}
				break;
			
			case 0x00000010:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					switch (Local_388[iVar3 /*8*/].f_4)
					{
						case 0x00000000:
							if (!func_30(0x00000005))
							{
								Local_388[iVar3 /*8*/].f_4++;
							}
							break;
						
						case 0x00000001:
							bVar5 = 0x00000000;
							bVar6 = 0x00000000;
							iVar4 = 0x00000000;
							while (iVar4 < Local_113)
							{
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar4 /*33*/]))
								{
									bVar5 = 0x00000001;
									if (Local_113[iVar4 /*33*/].f_1 == 0x00000001)
									{
										bVar6 = 0x00000001;
										iVar4 = Local_113;
									}
								}
								iVar4++;
							}
							if (!bVar5)
							{
								Local_388[iVar3 /*8*/].f_2 = 0x00000001;
							}
							else
							{
								Local_388[iVar3 /*8*/].f_2 = 0x00000000;
							}
							if (bVar6)
							{
								func_97(0x0000000A, 0x00000000);
							}
							else
							{
								func_97(0x0000000A, 0x00000001);
							}
							break;
						}
				}
				break;
			
			case 0x00000017:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_93(0x00000009))
					{
						Local_388[iVar3 /*8*/].f_2 = 0x00000001;
						iVar8 = 0x00000000;
						iVar7 = 0x00000000;
						while (iVar7 < Local_113)
						{
							if (Local_113[iVar7 /*33*/].f_1 == 0x00000001)
							{
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar7 /*33*/]))
								{
									iVar8++;
									if (iVar8 > 0x00000001)
									{
										Local_388[iVar3 /*8*/].f_2 = 0x00000000;
										iVar7 = Local_113;
									}
								}
							}
							iVar7++;
						}
					}
				}
				break;
			
			case 0x00000018:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0x00000000:
						if (func_73(unk_0x16F2683693E537C9(), 2446.674f, 4977.788f, 57.4583f, 0x00000001) < 250f)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 0x00000001:
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							iVar9 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
							if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar9)) || unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iVar9)))
							{
								if (func_73(unk_0x16F2683693E537C9(), 2446.674f, 4977.788f, 57.4583f, 0x00000000) > 700f)
								{
									Local_388[iVar3 /*8*/].f_2 = 0x00000001;
								}
							}
							else
							{
								bVar10 = 0x00000001;
							}
						}
						else
						{
							bVar10 = 0x00000001;
						}
						if (bVar10)
						{
							if (func_73(unk_0x16F2683693E537C9(), 2446.674f, 4977.788f, 57.4583f, 0x00000001) > 250f)
							{
								Local_388[iVar3 /*8*/].f_2 = 0x00000001;
							}
						}
						break;
				}
				break;
			
			case 0x0000001A:
				if (func_73(unk_0x16F2683693E537C9(), 2441.065f, 4968.819f, 45.83075f, 0x00000001) < 2.75f)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000F /*33*/]))
					{
						if (func_73(Local_113[0x0000000F /*33*/], 2439.386f, 4962.049f, 45.9047f, 0x00000001) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 0x00000001;
						}
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000010 /*33*/]))
					{
						if (func_73(Local_113[0x00000010 /*33*/], 2439.386f, 4962.049f, 45.9047f, 0x00000001) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 0x00000001;
						}
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000011 /*33*/]))
					{
						if (func_73(Local_113[0x00000011 /*33*/], 2439.386f, 4962.049f, 45.9047f, 0x00000001) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 0x00000001;
						}
					}
					Local_388[iVar3 /*8*/].f_1 = 0x00000000;
				}
				break;
			
			case 0x0000001B:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0x00000000:
						if (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000004 /*33*/]) && unk_0x0E0E6175453415CB(Local_113[0x00000004 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000005 /*33*/]) && unk_0x0E0E6175453415CB(Local_113[0x00000005 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[0x00000007 /*33*/]) && unk_0x0E0E6175453415CB(Local_113[0x00000007 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						Local_388[iVar3 /*8*/].f_5 = unk_0x1C0640BA9A7327B3() + 8000;
						break;
					
					case 0x00000001:
						if (unk_0xDF1306B443CD3D15(iLocal_145, 0x00000000))
						{
							if (func_96(unk_0x68F4C0EC296D3901(iLocal_145, 0x00000001), 5f, 150f))
							{
								Local_388[iVar3 /*8*/].f_6 = (Local_388[iVar3 /*8*/].f_6 + SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
							}
						}
						if (Local_388[iVar3 /*8*/].f_6 > 0x000005DC)
						{
							Local_388[iVar3 /*8*/].f_2 = 0x00000001;
						}
						if (unk_0x1C0640BA9A7327B3() > Local_388[iVar3 /*8*/].f_5)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 0x0000001E:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0x00000000:
						if (unk_0x762119754C50557A(iLocal_176))
						{
							if (unk_0x797C48AACDB248B0(iLocal_176))
							{
								Local_388[iVar3 /*8*/].f_4++;
							}
						}
						break;
					
					case 0x00000001:
						if (unk_0x762119754C50557A(iLocal_176))
						{
							if (!unk_0x797C48AACDB248B0(iLocal_176))
							{
								if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, 2435.252f, 4966.748f, 41.3476f, 4f))
								{
									Local_388[iVar3 /*8*/].f_2 = 0x00000001;
								}
								Local_388[iVar3 /*8*/].f_4++;
							}
						}
						break;
				}
				break;
			
			case 0x00000008:
				if (iLocal_57 && !bLocal_53)
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
				}
				break;
			
			case 0x00000011:
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2442.819f, 4970.283f, 45.2481f, 2439.625f, 4966.862f, 48.14596f, 3.4375f, 0x00000000, 0x00000001, 0x00000000))
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
				}
				break;
			
			case 0x00000012:
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2434.671f, 4959.104f, 44.85109f, 2440.5f, 4965.189f, 48.1231f, 3.625f, 0x00000000, 0x00000001, 0x00000000))
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
				}
				break;
			
			case 0x00000013:
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2432.467f, 4959.473f, 44.94133f, 2430.797f, 4961.173f, 48.30901f, 1.5625f, 0x00000000, 0x00000001, 0x00000000))
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
				}
				break;
			
			case 0x00000015:
				if (bLocal_56)
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
					Local_388[iVar3 /*8*/].f_1 = 0x00000000;
				}
				break;
			
			case 0x00000020:
				Local_388[iVar3 /*8*/].f_2 = 0x00000000;
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, 0x00000000, 0x00000001, 0x00000000))
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
				}
				break;
			
			case 0x00000021:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0x00000000:
						if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0x00000000))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 0x00000001:
						if (!unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0x00000000))
						{
							Local_388[iVar3 /*8*/].f_2 = 0x00000001;
						}
						break;
				}
				break;
			
			case 0x0000001D:
				Local_388[iVar3 /*8*/].f_2 = 0x00000000;
				switch (Local_388[iVar3 /*8*/].f_5)
				{
					case 0x00000000:
						if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0x00000000))
						{
							Local_388[iVar3 /*8*/].f_5 = 0x0000000A;
						}
						else
						{
							Local_388[iVar3 /*8*/].f_5 = 0x00000014;
						}
						break;
				}
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0x00000000))
				{
					if (Local_388[iVar3 /*8*/].f_5 == 0x00000014)
					{
					}
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
				}
				break;
			
			case 0x00000022:
				if (!Local_388[iVar3 /*8*/].f_2 == 0x00000001)
				{
					if (func_8())
					{
						func_11(0x00000000, 0x0000009D);
						Local_388[iVar3 /*8*/].f_2 = 0x00000001;
					}
				}
				break;
			
			case 0x00000023:
				if (Local_109[0x00000000 /*5*/].f_4 == 0x00000001)
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
				}
				break;
			
			case 0x00000024:
				Local_388[iVar3 /*8*/].f_2 = 0x00000000;
				iVar11 = joaat("weapon_unarmed");
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar11, 0x00000001))
				{
					if (iVar11 == joaat("weapon_petrolcan"))
					{
						if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000018))
						{
							Local_388[iVar3 /*8*/].f_2 = 0x00000001;
						}
					}
				}
				break;
			
			case 0x0000002C:
				if (unk_0x6AD0ABEEDDABA1F8(0xFFFFFFFF, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
				{
					if (!unk_0x6AD0ABEEDDABA1F8(0x00000018, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f) && !unk_0x6AD0ABEEDDABA1F8(0x00000016, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
					{
						Local_388[iVar3 /*8*/].f_2 = 0x00000001;
					}
				}
				break;
			
			case 0x00000029:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0x00000000:
						if (func_180())
						{
							iVar12 = func_179();
							if (iVar12 <= 0x00000011)
							{
								func_97(0x00000025, 0x00000001);
							}
							else
							{
								Local_388[iVar3 /*8*/].f_2 = 0x00000001;
							}
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 0x00000026:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_178(0x00000011))
					{
						Local_388[iVar3 /*8*/].f_2 = 0x00000001;
					}
				}
				break;
			
			case 0x00000028:
				Local_388[iVar3 /*8*/].f_2 = 0x00000000;
				if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != 0x00000000)
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
				}
				break;
			
			case 0x0000002A:
				if (func_73(unk_0x16F2683693E537C9(), 2439.52f, 4969.67f, 52.65f, 0x00000001) > 42.5f)
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
				}
				break;
			
			case 0x0000002B:
				if (func_73(unk_0x16F2683693E537C9(), 2439.52f, 4969.67f, 52.65f, 0x00000001) > 60f)
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
				}
				break;
			
			case 0x00000027:
				if (func_177())
				{
					if (!func_180())
					{
						Local_388[iVar3 /*8*/].f_2 = 0x00000001;
					}
				}
				break;
			
			case 0x0000002F:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0x00000000:
						Local_388[iVar3 /*8*/].f_5 = unk_0x1C0640BA9A7327B3() + 30000;
						Local_388[iVar3 /*8*/].f_4++;
						break;
					
					case 0x00000001:
						if (unk_0x1C0640BA9A7327B3() > Local_388[iVar3 /*8*/].f_5)
						{
							Local_388[iVar3 /*8*/].f_2 = 0x00000001;
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 0x00000030:
				Local_388[iVar3 /*8*/].f_2 = 0x00000000;
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_73(unk_0x16F2683693E537C9(), 2448.25f, 4974.92f, 55.11f, 0x00000001) > 300f)
					{
						Local_388[iVar3 /*8*/].f_2 = 0x00000001;
					}
				}
				break;
			
			case 0x00000033:
				if (func_153(0x00000001, 0x00000031))
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
				}
				break;
			
			case 0x00000031:
				Local_388[iVar3 /*8*/].f_2 = 0x00000000;
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_73(unk_0x16F2683693E537C9(), 2448.25f, 4974.92f, 55.11f, 0x00000001) > 500f)
					{
						Local_388[iVar3 /*8*/].f_2 = 0x00000001;
					}
				}
				break;
			
			case 0x00000032:
				Local_388[iVar3 /*8*/].f_2 = 0x00000000;
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
				{
					Local_388[iVar3 /*8*/].f_2 = 0x00000001;
				}
				break;
		}
		iVar3++;
	}
}

int func_177()
{
	if (iLocal_102 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_178(int iParam0)
{
	if (unk_0xA4F4A1E4DDB4728B(Local_109[iParam0 /*5*/], 0.6f) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_179()
{
	return iLocal_100;
}

int func_180()
{
	int iVar0;
	
	iVar0 = (Local_109 - 0x00000001);
	while (iVar0 >= 0x00000000)
	{
		if (Local_109[iVar0 /*5*/].f_4)
		{
			if (unk_0xA4F4A1E4DDB4728B(Local_109[iVar0 /*5*/], 0.6f) > 0x00000000)
			{
				vLocal_99 = { Local_109[iVar0 /*5*/] };
				iLocal_100 = iVar0;
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000000;
		}
		iVar0 = (iVar0 + 0xFFFFFFFF);
	}
	return 0x00000000;
}

void func_181()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x81CF97025EC59496();
	if ((func_201() && iLocal_150 > 0x00000000) && unk_0x1C0640BA9A7327B3() > iLocal_159)
	{
		while (!unk_0x757EF87A33649210())
		{
			unk_0x53491B90E4FD0E56(0x000003E8);
			func_28(0x0000001C, 0x00000001);
		}
		iLocal_577 = 0x00000000;
		while (!func_200())
		{
			func_28(0x00007E42, 0x00000001);
		}
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2474.97f, 4946.047f, 44.0297f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 230.6937f);
		unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
		unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0x00000000, 0xFFFFFFFF, 0x00000000);
		unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
		unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
		func_192(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		unk_0x5CAFA5DD13658DFE(0x00000000);
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
		unk_0x2FB9A57162E54BAB(0f);
		unk_0xEF6276132B396452(0f, 0x3F800000);
		unk_0x790015DC92C918E2();
		unk_0xBA4AFD9D5C7A6F8D("SLOW_MO_METH_HOUSE_RAYFIRE");
		uLocal_173 = unk_0x57651D42225429CC(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		func_31(0x0000000C, 0x00000001);
		iLocal_158 = 0x00000000;
		iLocal_163 = iLocal_163;
		iLocal_163 = 0x00000063;
		iLocal_150 = 0x00000063;
		iLocal_139 = 0x00000003;
		fLocal_138 = 10000f;
		unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, 0x39918412, 0x00000001);
		unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, 0x0EBECAD2, 0x00000001);
		unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, 0xF139365E, 0x00000000);
		unk_0xE96F19797E59AB06();
		unk_0xBF40D896CA4BDBE7();
		bLocal_165 = 0x00000001;
	}
	unk_0x3FC8DBCC154CA56B();
	switch (iLocal_150)
	{
		case 0x00000000:
			func_200();
			bLocal_165 = 0x00000000;
			iVar0 = 0x00000031;
			while (iVar0 <= 0x00000037)
			{
				Local_109[iVar0 /*5*/] = { Local_109[iVar0 /*5*/] + Vector(0.6f, 0f, 0f) };
				iVar0++;
			}
			if (unk_0x562F77A7F33D2E46("CHI_2_POUR_GAS"))
			{
				unk_0x8910D3D58E0132B8("CHI_2_POUR_GAS");
			}
			if (unk_0x562F77A7F33D2E46("CHI_2_SHOOT_GAS"))
			{
				unk_0x8910D3D58E0132B8("CHI_2_SHOOT_GAS");
			}
			unk_0x8BC9595FD2792B5D("CHI_2_GAS_TRAIL_FIRE");
			iLocal_159 = unk_0x1C0640BA9A7327B3() + 1000;
			unk_0x536F1BE96C726C4B(2570.53f, 4982.057f, 50.6819f, 100f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
			func_87(0x00000000);
			iLocal_392 = 0x00000000;
			func_87(0x00000001);
			unk_0x790015DC92C918E2();
			func_191(2467.775f, 4954.415f, 42.87803f, 2477.089f, 4945.079f, 46.16654f, 4.0625f, 2486.854f, 4939.086f, 43.2578f, 230f, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2455.941f, 4952.801f, 44.112f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			}
			unk_0x9A82EEAF6CA12AEE(1f);
			unk_0x8D17794CE3273D70("misschinese2_barrelRoll");
			unk_0xDD465543E2028AEA("move_m@gangster@var_e");
			unk_0xDD465543E2028AEA("move_m@gangster@var_f");
			unk_0xDD465543E2028AEA("move_m@gangster@generic");
			unk_0x8D17794CE3273D70("misschinese2_bank5");
			unk_0x8D17794CE3273D70("misschinese2_bank1");
			unk_0x8D17794CE3273D70("reaction@male_stand@big_variations@b");
			unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@left");
			unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@right");
			unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@backward");
			unk_0x71199B01895C6202(joaat("a_m_m_hillbilly_02"));
			unk_0x71199B01895C6202(joaat("a_m_y_methhead_01"));
			unk_0x71199B01895C6202(joaat("prop_cs_fertilizer"));
			unk_0x71199B01895C6202(joaat("burrito"));
			unk_0x71199B01895C6202(joaat("prop_cs_beer_bot_01"));
			unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
			iVar1 = 0x00000000;
			while (iVar1 < Local_113)
			{
				if (unk_0xC844350D5D58C99A(Local_113[iVar1 /*33*/]))
				{
					unk_0xEBA53F35D0085654(&(Local_113[iVar1 /*33*/]));
				}
				if (unk_0xC844350D5D58C99A(Local_113[iVar1 /*33*/].f_14))
				{
					unk_0xF690C84DADBB3551(&(Local_113[iVar1 /*33*/].f_14));
				}
				iVar1++;
			}
			iLocal_150++;
			break;
		
		case 0x00000001:
			if (unk_0x757EF87A33649210() && !unk_0x7BCE0E6DD4A1F749())
			{
				unk_0x82E51BCA72537B6C(0x000003E8);
			}
			iLocal_150++;
			break;
	}
	if (iLocal_135)
	{
		iLocal_135 = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 < Local_137)
		{
			iVar2++;
		}
		iVar2 = 0x00000000;
		while (iVar2 < Local_136)
		{
			iVar2++;
		}
	}
	iVar2 = 0x00000000;
	while (iVar2 < Local_137)
	{
		if (iLocal_140[iVar2])
		{
			iLocal_140[iVar2] = 0x00000000;
			Local_137[iVar2 /*18*/] = { unk_0xD06724447386BC29(unk_0xC4648AFC94BA9ACC()) };
			Local_137[iVar2 /*18*/].f_3 = { unk_0x17D61C69BA58F815(unk_0xC4648AFC94BA9ACC(), 0x00000002) };
			Local_137[iVar2 /*18*/].f_E = unk_0x86CC98177DFF41EC(unk_0xC4648AFC94BA9ACC());
		}
		if (iLocal_141[iVar2])
		{
			iLocal_141[iVar2] = 0x00000000;
			Local_137[iVar2 /*18*/].f_6 = { unk_0xD06724447386BC29(unk_0xC4648AFC94BA9ACC()) };
			Local_137[iVar2 /*18*/].f_9 = { unk_0x17D61C69BA58F815(unk_0xC4648AFC94BA9ACC(), 0x00000002) };
			Local_137[iVar2 /*18*/].f_F = unk_0x86CC98177DFF41EC(unk_0xC4648AFC94BA9ACC());
		}
		iVar2++;
	}
	if (iLocal_133)
	{
		iLocal_133 = 0x00000000;
		bLocal_134 = 0x00000000;
		iLocal_174 = 0x00000000;
		unk_0x536F1BE96C726C4B(2431.097f, 4967.043f, 41.3476f, 20f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		func_190();
	}
	if (!bLocal_134)
	{
		if (unk_0x23239EF74F22427E())
		{
			unk_0x44E5AE27B5A88FC7(0x00000005, 0x00000005, 0x00000005, 0x00000005);
			unk_0x9E020FDB27CA9201();
			iLocal_139 = 0xFFFFFFFF;
			unk_0x5CAFA5DD13658DFE(0x00000000);
			func_192(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x3F423BF5B8125A50("misschinese2_crystalmaze");
			bLocal_134 = 0x00000001;
			Local_136[0x00000000 /*6*/] = 0x00000000;
			Local_136[0x00000001 /*6*/] = 0x00000000;
			Local_136[0x00000002 /*6*/] = 0x00000000;
			Local_136[0x00000003 /*6*/] = 0x00000000;
			Local_136[0x00000000 /*6*/].f_4 = 0x00000000;
			Local_136[0x00000000 /*6*/].f_5 = 0x00000000;
			Local_136[0x00000001 /*6*/].f_4 = 0x00000000;
			Local_136[0x00000001 /*6*/].f_5 = 0x00000000;
			Local_136[0x00000002 /*6*/].f_4 = 0x00000000;
			Local_136[0x00000002 /*6*/].f_5 = 0x00000000;
			Local_136[0x00000003 /*6*/].f_4 = 0x00000000;
			Local_136[0x00000003 /*6*/].f_5 = 0x00000000;
			func_32(0x0000000C, 0x00000000);
			unk_0x7B1292B738DF9FAF();
			unk_0x420FE818E70BB523(0x00000004);
			switch (iLocal_166)
			{
				case 0x00000003:
					SYSTEM::SETTIMERA(0x00000000);
					break;
				
				case 0x00000002:
					Local_136[0x00000000 /*6*/] = 0x00000001;
					Local_136[0x00000001 /*6*/] = 0x00000001;
					SYSTEM::SETTIMERA(0x00002A94);
					iLocal_139 = 0x00000002;
					fLocal_138 = 10000f;
					break;
				
				case 0x00000001:
					Local_136[0x00000000 /*6*/] = 0x00000001;
					SYSTEM::SETTIMERA(0x00001900);
					iLocal_139 = 0x00000001;
					fLocal_138 = 10000f;
					break;
			}
			iLocal_143 = 0x00000000;
		}
	}
	if (bLocal_134)
	{
		unk_0x0AEDBE1D61D150AF(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
	}
	if (bLocal_134)
	{
		fLocal_138 = (fLocal_138 + SYSTEM::TIMESTEP());
		if (iLocal_139 == 0xFFFFFFFF || ((iLocal_139 != 0xFFFFFFFF && iLocal_139 < 0x00000004) && fLocal_138 > (Local_137[iLocal_139 /*18*/].f_D / 1000f)))
		{
			iLocal_139++;
			if (iLocal_139 == 0x00000003)
			{
				if (unk_0xB4AE0788C1587752("misschinese2_crystalmaze"))
				{
					iLocal_155 = unk_0x92B061D59B9B540A(0x397ED48C, 0x00000001);
					iLocal_156 = unk_0xE9744DB7B8CA6965(2452.914f, 4962.096f, 45.585f, 0f, 0f, 45f, 0x00000002);
					unk_0x93E9ED66DAB9FBE3(iLocal_155, iLocal_156, "trevor_barn_walk_cam", "misschinese2_crystalmaze");
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_156, "misschinese2_crystalmaze", "trevor_barn_walk", 1000f, -8f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
					}
					unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
					func_190();
					unk_0x98AB0CC3E937A146(0x00000001);
					fLocal_138 = 0f;
				}
			}
			else if (iLocal_139 < 0x00000004)
			{
				unk_0x5CAFA5DD13658DFE(0x00000000);
				iLocal_155 = unk_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", Local_137[iLocal_139 /*18*/], Local_137[iLocal_139 /*18*/].f_3, Local_137[iLocal_139 /*18*/].f_E, 0x00000001, 0x00000002);
				unk_0x86F44313DFA8F00C(iLocal_155, Local_137[iLocal_139 /*18*/].f_6, Local_137[iLocal_139 /*18*/].f_9, Local_137[iLocal_139 /*18*/].f_F, SYSTEM::FLOOR(Local_137[iLocal_139 /*18*/].f_C), Local_137[iLocal_139 /*18*/].f_10, 0x00000001, 0x00000002);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				if (iLocal_139 < 0x00000002)
				{
					func_189(Local_137[iLocal_139 /*18*/].f_11, 0x00000001, 0x00000001);
				}
				else
				{
					func_189(Local_137[iLocal_139 /*18*/].f_11, 0x00000001, 0x00000000);
				}
				fLocal_138 = 0f;
			}
			else if (!bLocal_132)
			{
				unk_0x5CAFA5DD13658DFE(0x00000000);
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				if (func_188() && !bLocal_165)
				{
					unk_0x82A772610883F395("CamPushInNeutral", 0x00000000, 0x00000000);
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
				}
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				unk_0x98AB0CC3E937A146(0x00000000);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				func_187(0x00000000, 0x00000000, 0x00000001, 0x00000000);
				unk_0x8910D3D58E0132B8("CHI_2_GAS_TRAIL_FIRE");
				unk_0xCADC8175C61F28E5(uLocal_173, 0x00000009);
				unk_0x9A82EEAF6CA12AEE(1f);
				unk_0xF59BE6DDBCFD2F1C();
				if (unk_0x757EF87A33649210())
				{
					while (unk_0xD92EF3526CDA283F(uLocal_173) != 0x0000000A)
					{
						func_28(0x0000001D, 0x00000001);
					}
					unk_0x82E51BCA72537B6C(0x000003E8);
				}
				unk_0xBF40D896CA4BDBE7();
				func_182(0x00000009);
			}
		}
		iVar3 = 0x00000000;
		while (iVar3 < Local_136)
		{
			if (!Local_136[iVar3 /*6*/])
			{
				if (iLocal_139 == Local_136[iVar3 /*6*/].f_1 && fLocal_138 > (Local_136[iVar3 /*6*/].f_2 / 1000f))
				{
					switch (iVar3)
					{
						case 0x00000000:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0x00000000:
									iLocal_143 = 0x00000000;
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(vLocal_142[iLocal_143 /*3*/], 0x00000000);
										Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 200;
										Local_136[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 0x00000001:
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 1 /*3*/] / Vector(2f, 2f, 2f), 0x00000000);
										iLocal_143++;
										if (iLocal_143 >= 0x0000000C)
										{
											Local_136[iVar3 /*6*/].f_4 = 0x0000000A;
											Local_136[iVar3 /*6*/] = 0x00000001;
										}
										else
										{
											Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 200;
											Local_136[iVar3 /*6*/].f_4 = 0x00000002;
										}
									}
									break;
								
								case 0x00000002:
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(vLocal_142[iLocal_143 /*3*/], 0x00000000);
										Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 200;
										if (iLocal_143 == 0x00000002)
										{
											Local_136[iVar3 /*6*/].f_4 = 0x00000003;
										}
										else
										{
											Local_136[iVar3 /*6*/].f_4 = 0x00000001;
										}
									}
									break;
								
								case 0x00000003:
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 1 /*3*/] / Vector(2f, 2f, 2f), 0x00000000);
										func_128(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 2 /*3*/] / Vector(2f, 2f, 2f), 0x00000000);
										Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 200;
										Local_136[iVar3 /*6*/].f_4 = 0x00000004;
										iLocal_143 = 0x00000003;
									}
									break;
								
								case 0x00000004:
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(vLocal_142[iLocal_143 /*3*/], 0x00000000);
										func_128(vLocal_142[iLocal_143 + 1 /*3*/], 0x00000000);
										Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 200;
										Local_136[iVar3 /*6*/].f_4 = 0x00000005;
									}
									break;
								
								case 0x00000005:
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 2 /*3*/] / Vector(2f, 2f, 2f), 0x00000000);
										func_128(vLocal_142[iLocal_143 + 1 /*3*/] + vLocal_142[iLocal_143 + 3 /*3*/] / Vector(2f, 2f, 2f), 0x00000000);
										Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 200;
										Local_136[iVar3 /*6*/].f_4 = 0x00000006;
										iLocal_143 = 0x00000005;
									}
									break;
								
								case 0x00000006:
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(vLocal_142[iLocal_143 /*3*/], 0x00000000);
										func_128(vLocal_142[iLocal_143 + 1 /*3*/], 0x00000000);
										Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 200;
										Local_136[iVar3 /*6*/].f_4 = 0x00000002;
										iLocal_143 = 0x00000007;
									}
									break;
							}
							break;
						
						case 0x00000001:
							unk_0xDA55CDFB97015579(2432.534f, 4968.383f, 42.2389f, 0x00000004, 0x3F000000, 0x00000001, 0x00000000, 0x3F800000, 0x00000000);
							Local_136[iVar3 /*6*/] = 0x00000001;
							break;
						
						case 0x00000002:
							iLocal_174 = 0x00000001;
							Local_136[iVar3 /*6*/] = 0x00000001;
							break;
						
						case 0x00000003:
							if (unk_0x9F4FE516EAACCFC5(iLocal_155))
							{
								unk_0x91F5B0244AAE6222(iLocal_155, "LARGE_EXPLOSION_SHAKE", fLocal_157);
								unk_0xDE0127155AF9E64F(iLocal_155, 0.1f);
								Local_136[iVar3 /*6*/] = 0x00000001;
							}
							break;
						
						case 0x00000004:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0x00000000:
									unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2473.208f, 4947.625f, 44.0664f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
									unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 223.493f);
									unk_0x2FB9A57162E54BAB(0f);
									unk_0xEF6276132B396452(-7f, 0x3F800000);
									if (func_188())
									{
										unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0x3F67C6AF, 0x00000001, 0x00000000, 0x00000000);
										unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 1f, 0x00000BB8, 0x00000000, 0x00000001, 0x00000000);
									}
									else
									{
										unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0xD827C3DB, 0x00000001, 0x00000000, 0x00000000);
										unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 1f, 0x000001F4, 0x00000000, 0x00000001, 0x00000000);
									}
									Local_136[iVar3 /*6*/].f_4++;
									break;
								
								case 0x00000001:
									break;
							}
							break;
						
						case 0x00000005:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0x00000000:
									fLocal_175 = 1f;
									Local_136[iVar3 /*6*/].f_4++;
									Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 1300;
									unk_0x62956E22F3B365FF("SLOW_MO_METH_HOUSE_RAYFIRE");
									break;
								
								case 0x00000001:
									fLocal_175 = (fLocal_175 - (SYSTEM::TIMESTEP() * 1f));
									if (fLocal_175 < 0.2f)
									{
										fLocal_175 = 0.2f;
									}
									unk_0x9A82EEAF6CA12AEE(fLocal_175);
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										Local_136[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 0x00000002:
									fLocal_175 = (fLocal_175 + (SYSTEM::TIMESTEP() * 1f));
									if (fLocal_175 > 1f)
									{
										fLocal_175 = 1f;
										Local_136[iVar3 /*6*/].f_4++;
										Local_136[iVar3 /*6*/] = 0x00000001;
									}
									unk_0xBA4AFD9D5C7A6F8D("SLOW_MO_METH_HOUSE_RAYFIRE");
									unk_0x9A82EEAF6CA12AEE(fLocal_175);
									break;
							}
							break;
						}
					}
			}
			iVar3++;
		}
	}
}

void func_182(int iParam0)
{
	func_186();
	func_185();
	func_184();
	func_183();
	if (iParam0 == 0x0000000B)
	{
		iLocal_149++;
	}
	else
	{
		iLocal_149 = iParam0;
	}
}

void func_183()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_390)
	{
		Local_390[iVar0 /*7*/] = 0x00000000;
		Local_390[iVar0 /*7*/].f_1 = 0x00000000;
		Local_390[iVar0 /*7*/].f_3 = 0x00000000;
		Local_390[iVar0 /*7*/].f_2 = 0x00000000;
		Local_390[iVar0 /*7*/].f_4 = 0x00000000;
		Local_390[iVar0 /*7*/].f_5 = 0x00000000;
		Local_390[iVar0 /*7*/].f_6 = 0x00000000;
		iVar0++;
	}
}

void func_184()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_385)
	{
		if (Local_385[iVar0 /*10*/].f_4)
		{
			Local_385[iVar0 /*10*/].f_1 = 0x00000001;
			Local_385[iVar0 /*10*/].f_6 = 0xFFFFFFFF;
			func_166(iVar0, Local_385[iVar0 /*10*/], 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
		}
		Local_385[iVar0 /*10*/] = 0x00000000;
		Local_385[iVar0 /*10*/].f_1 = 0x00000000;
		Local_385[iVar0 /*10*/].f_2 = 0x00000000;
		Local_385[iVar0 /*10*/].f_3 = 0x00000000;
		Local_385[iVar0 /*10*/].f_6 = 0x00000000;
		Local_385[iVar0 /*10*/].f_4 = 0x00000000;
		Local_385[iVar0 /*10*/].f_5 = 0x00000000;
		Local_385[iVar0 /*10*/].f_7 = 0x00000000;
		Local_385[iVar0 /*10*/].f_8 = 0x00000000;
		Local_385[iVar0 /*10*/].f_9 = 0f;
		iVar0++;
	}
}

void func_185()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_388)
	{
		Local_388[iVar0 /*8*/] = 0x00000000;
		Local_388[iVar0 /*8*/].f_1 = 0x00000000;
		Local_388[iVar0 /*8*/].f_2 = 0x00000000;
		Local_388[iVar0 /*8*/].f_3 = 0x00000000;
		Local_388[iVar0 /*8*/].f_4 = 0x00000000;
		Local_388[iVar0 /*8*/].f_5 = 0x00000000;
		iVar0++;
	}
}

void func_186()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_389)
	{
		Local_389[iVar0 /*4*/] = 0x00000000;
		Local_389[iVar0 /*4*/].f_1 = 0x00000000;
		Local_389[iVar0 /*4*/].f_2 = 0x00000000;
		Local_389[iVar0 /*4*/].f_3 = 0x00000000;
		iVar0++;
	}
}

int func_187(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && iParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 0x00000001, iParam3);
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

int func_188()
{
	if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_189(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iLocal_103 = iParam2;
	if (iParam0 > 0xFFFFFFFF)
	{
		iLocal_102 = 0x00000001;
		iLocal_104 = unk_0x1C0640BA9A7327B3();
		iLocal_105 = iParam0 * 2;
		iLocal_107 = iLocal_105;
		if (bParam1)
		{
			iLocal_108 = 0x00000000;
		}
		else
		{
			iLocal_108 = iLocal_105;
		}
		iVar0 = 0x00000000;
		while (iVar0 < Local_109)
		{
			Local_109[iVar0 /*5*/].f_4 = 0x00000001;
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < Local_101)
		{
			unk_0x060876FE4313F6DC(Local_101[iVar0 /*5*/]);
			if (Local_101[iVar0 /*5*/].f_4 != 0x00000000)
			{
				unk_0xBB6D217402E588F9(Local_101[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			Local_101[iVar0 /*5*/].f_4 = 0x00000000;
			iVar0++;
		}
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_101)
	{
		unk_0x060876FE4313F6DC(Local_101[iVar0 /*5*/]);
		Local_101[iVar0 /*5*/].f_4 = 0x00000000;
		iVar0++;
	}
	func_169(0x00000000);
	iVar0 = 0x00000000;
	while (iVar0 < Local_109)
	{
		if (unk_0xE4EDC4B0E92C078B(Local_109[iVar0 /*5*/].f_3))
		{
			unk_0x142CC44DB769B57E(&(Local_109[iVar0 /*5*/].f_3));
		}
		Local_109[iVar0 /*5*/].f_4 = 0x00000000;
		iVar0++;
	}
	iLocal_93 = 0xFFFFFFFF;
}

void func_191(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	func_76(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_192(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_199(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_45())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_187(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_199(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_187(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_197(unk_0xD803B885F5E47A62())) && !func_194(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_193()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_197(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_193()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_194(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_195(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_195(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_196();
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

int func_196()
{
	return Global_1407E9;
}

int func_197(int iParam0)
{
	if (func_194(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_198())
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

bool func_198()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

void func_199(int iParam0)
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

int func_200()
{
	switch (iLocal_577)
	{
		case 0x00000000:
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent001"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent002"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent003"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent004"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent005"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent006"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent007"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent008"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent009"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent010"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent011"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent012"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent013"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent014"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent015"));
			iLocal_577++;
			break;
		
		case 0x00000001:
			if (((((((((((((((unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent")) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent001"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent002"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent003"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent004"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent005"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent006"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent007"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent008"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent009"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent010"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent011"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent012"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent013"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent014"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent015")))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_201()
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

void func_202()
{
	unk_0x81CF97025EC59496();
	func_176(0x0000001C, 0x0000002D);
	func_155(0x00000000, 0x00000007, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_155(0x00000001, 0x00000008, 0x00000002, 0x0000001D, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_155(0x00000002, 0x00000009, 0x00000002, 0x00000023, 0x00000005, 0x00000022, 0x00000001, 0x00000000);
	func_155(0x00000003, 0x0000000A, 0x00000002, 0x0000002A, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x00000000, 0x00000015, 0x00000002, 0x0000001D, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x00000001, 0x00000016, 0x00000002, 0x00000024, 0x00000005, 0x00000022, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x00000002, 0x0000001A, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x00000003, 0x00000017, 0x00000002, 0x00000025, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_204(0x00000004, 0x00000019, 0x00000003, 0x00000017, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000000, 0x0000001E, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000001, 0x0000001F, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000002, 0x00000020, 0x00000001, 0x00000003, 0x00000022, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000003, 0x00000021, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000004, 0x00000022, 0x00000001, 0x00000003, 0x00000022, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000005, 0x00000023, 0x00000000, 0x00000002, 0x0000001D, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000006, 0x00000024, 0x00000000, 0x00000002, 0x00000025, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000007, 0x00000025, 0x00000000, 0x00000002, 0x0000001D, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000008, 0x00000026, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000009, 0x00000038, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x0000000A, 0x0000000B, 0x00000000, 0x00000002, 0x0000002C, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x0000000B, 0x00000032, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x0000000C, 0x00000033, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_203(0x00000000, 0x00000002, 0x00000021, 0x00000005, 0x00000022);
	func_203(0x00000004, 0x00000002, 0x0000002B, 0x00000001, 0x00000000);
	func_203(0x00000002, 0x00000002, 0x00000027, 0x00000001, 0x00000000);
	if (iLocal_166 == 0x00000000)
	{
		if (func_93(0x00000025) && !func_93(0x0000002C))
		{
			iLocal_166 = 0x00000003;
		}
		if (func_93(0x00000029) && !func_93(0x0000002C))
		{
			iLocal_164 = 0x00000001;
			iLocal_166 = 0x00000001;
		}
		if (func_175(0x0000000A, 0x0000000B) == 0x00000002)
		{
			iLocal_166 = 0x00000002;
			iLocal_164 = 0x00000001;
		}
	}
	func_166(0x0000000D, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	if ((((func_93(0x00000025) && func_93(0x00000026)) || iLocal_164) && func_175(0x0000000D, 0x0000000A) == 0x0000000A) && !func_88("CHI2_light"))
	{
		func_203(0x00000001, 0x00000002, 0x00000028, 0x00000001, 0x00000000);
		if (unk_0xE4EDC4B0E92C078B(iLocal_178))
		{
			unk_0x142CC44DB769B57E(&iLocal_178);
		}
		unk_0x8B4C4CA774181102(10f, 5f, 0x00000004);
		func_12(0x00000001);
		func_182(0x0000000B);
	}
}

void func_203(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_158(iParam1, iParam2, iParam3, iParam4, 0x00000001, 0x00000000, 0x00000001, 0x00000000))
	{
		switch (iParam0)
		{
			case 0x00000000:
				func_136("CHFAIL1");
				break;
			
			case 0x00000001:
				func_136("FRMSOON");
				break;
			
			case 0x00000002:
				func_136("FRMTRAI");
				break;
			
			case 0x00000003:
				if (unk_0xC844350D5D58C99A(Local_113[0x0000000B /*33*/]))
				{
					if (unk_0xEB6A8945D1AC98A1(Local_113[0x0000000B /*33*/]))
					{
						func_136("FRMCHI");
					}
				}
				if (unk_0xC844350D5D58C99A(Local_113[0x0000000A /*33*/]))
				{
					if (unk_0xEB6A8945D1AC98A1(Local_113[0x0000000A /*33*/]))
					{
						func_136("FRMCHI2");
					}
				}
				break;
			
			case 0x00000004:
				func_136("CHFAIL2");
				break;
			
			case 0x00000005:
				func_136("FRMGASF");
				break;
			}
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (!Local_390[iParam0 /*7*/].f_1)
	{
		if (func_205(iParam2, iParam3))
		{
			func_163(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0x00000001, 0x00000000);
		}
	}
}

int func_205(int iParam0, int iParam1)
{
	if (Local_390[iParam0 /*7*/] == iParam1)
	{
		if (Local_390[iParam0 /*7*/].f_1)
		{
			return 0x00000001;
		}
	}
	else if (Local_390[iParam0 /*7*/] != 0x00000000)
	{
	}
	return 0x00000000;
}

void func_206()
{
	func_176(0x00000005, 0x0000001F);
	func_155(0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_155(0x00000001, 0x00000003, 0x00000002, 0x00000008, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_155(0x00000002, 0x00000005, 0x00000002, 0x00000009, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_155(0x00000003, 0x0000000B, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_155(0x00000004, 0x00000004, 0x00000002, 0x0000000C, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000000, 0x00000011, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000001, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000002, 0x0000000E, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000003, 0x00000010, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000004, 0x0000000F, 0x00000000, 0x00000002, 0x0000000E, 0x00000006, 0x00000009, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000007, 0x00000013, 0x00000000, 0x00000002, 0x00000009, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000008, 0x00000014, 0x00000000, 0x00000002, 0x0000000C, 0x00000004, 0x00000009, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000009, 0x00000015, 0x00000000, 0x00000002, 0x0000000C, 0x00000004, 0x0000000D, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x0000000A, 0x00000016, 0x00000000, 0x00000002, 0x0000000C, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x0000000B, 0x00000017, 0x00000000, 0x00000002, 0x0000000B, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x0000000C, 0x00000018, 0x00000000, 0x00000002, 0x0000000E, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000005, 0x0000001A, 0x00000000, 0x00000002, 0x0000000B, 0x00000006, 0x00000010, 0x00000006, 0x00000009, 0x00000001, 0x00000000);
	func_166(0x00000006, 0x0000001B, 0x00000000, 0x00000002, 0x00000009, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x0000000E, 0x00000028, 0x00000000, 0x00000002, 0x0000001A, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x0000000D, 0x00000027, 0x00000000, 0x00000002, 0x00000019, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x0000000F, 0x0000001C, 0x00000000, 0x00000002, 0x0000000B, 0x00000006, 0x00000010, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000010, 0x0000001D, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000011, 0x0000002B, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000012, 0x0000002C, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000013, 0x0000002D, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x00000002, 0x00000002, 0x00000002, 0x00000015, 0x00000005, 0x00000010, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x00000003, 0x00000003, 0x00000002, 0x0000000C, 0x00000004, 0x00000011, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x00000004, 0x00000005, 0x00000002, 0x00000012, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x00000005, 0x00000006, 0x00000002, 0x00000013, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x00000006, 0x00000007, 0x00000002, 0x0000001B, 0x00000005, 0x00000009, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x00000007, 0x0000000A, 0x00000002, 0x00000009, 0x00000005, 0x00000015, 0x00000005, 0x0000000C, 0x00000001, 0x00000000);
	func_163(0x00000008, 0x0000000B, 0x00000002, 0x00000009, 0x00000004, 0x00000015, 0x00000005, 0x0000000C, 0x00000001, 0x00000000);
	func_163(0x00000009, 0x0000000E, 0x00000002, 0x00000009, 0x00000004, 0x0000000C, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x0000000A, 0x0000000C, 0x00000002, 0x00000009, 0x00000004, 0x0000000C, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x0000000B, 0x0000000D, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x0000000C, 0x00000010, 0x00000002, 0x00000009, 0x00000004, 0x00000017, 0x00000005, 0x0000000C, 0x00000001, 0x00000000);
	func_163(0x0000000D, 0x00000011, 0x00000002, 0x0000000E, 0x00000005, 0x0000000C, 0x00000004, 0x00000009, 0x00000001, 0x00000000);
	func_163(0x0000000E, 0x00000012, 0x00000003, 0x00000014, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x0000000F, 0x00000013, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_163(0x00000010, 0x00000014, 0x00000002, 0x00000009, 0x00000004, 0x0000000A, 0x00000004, 0x0000000E, 0x00000005, 0x0000000C);
	func_203(0x00000004, 0x00000002, 0x00000018, 0x00000001, 0x00000000);
	func_203(0x00000005, 0x00000002, 0x0000001E, 0x00000001, 0x00000000);
	if (func_93(0x0000000B) && func_93(0x0000001D))
	{
		func_182(0x00000007);
	}
}

void func_207()
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	unk_0xBE5E71AB40D024E0(2004.447f, 3076.807f, 46.6069f, 10f);
	unk_0x4FFA681FBEF02AE5(0x00000001);
	if (((func_201() && iLocal_150 > 0x00000000) && iLocal_150 < 0x00000007) && unk_0x1C0640BA9A7327B3() > iLocal_159)
	{
		iLocal_150 = 0x0000000A;
		iLocal_158 = 0x00000000;
		bLocal_165 = 0x00000001;
	}
	if (iLocal_150 < 0x0000000A)
	{
		if (unk_0x757EF87A33649210() && !unk_0x7BCE0E6DD4A1F749())
		{
			unk_0x82E51BCA72537B6C(0x000003E8);
		}
	}
	if (iLocal_375)
	{
		unk_0x0AEDBE1D61D150AF(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
	}
	unk_0x3FC8DBCC154CA56B();
	switch (iLocal_150)
	{
		case 0x00000000:
			if (unk_0x23239EF74F22427E())
			{
				unk_0xAE1670DD12E839C3("CHI_2_MCS_5", 0x00000008);
				iLocal_374 = 0x00000001;
				bLocal_165 = 0x00000000;
				unk_0x44E5AE27B5A88FC7(0x00000005, 0x00000005, 0x00000005, 0x00000005);
				unk_0x9E020FDB27CA9201();
				unk_0x365391E40B6BA75B(0x00000000);
				iLocal_378 = 0x00000000;
				iLocal_375 = 0x00000001;
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				fVar1 = func_102(2458.223f, 4986.042f, 49.05241f, vVar0, 0x00000001);
				if (fVar1 > 180f)
				{
					fVar1 = (fVar1 - 360f);
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				}
				if (((unk_0xDF1306B443CD3D15(iVar2, 0x00000000) && unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar2))) && unk_0xE934758D273C899A(iVar2)) || ((unk_0xDF1306B443CD3D15(iVar2, 0x00000000) && unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iVar2))) && unk_0xE934758D273C899A(iVar2)))
				{
					if (fVar1 < func_223(-2.5f) && fVar1 > func_223(0.5f))
					{
						iLocal_150 = 0x00000006;
						SYSTEM::SETTIMERA(0x00007530);
						unk_0x0AEDBE1D61D150AF(30000f);
						iLocal_158 = 0x00008CA0/*func_85*/;
					}
					else
					{
						iLocal_150 = 0x00000007;
						SYSTEM::SETTIMERA(0x00008CA0/*func_85*/);
						unk_0x0AEDBE1D61D150AF(36000f);
						iLocal_158 = 0x0000A410;
					}
				}
				else
				{
					if (unk_0xC844350D5D58C99A(iVar2))
					{
						if (unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
						{
							if (!(unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar2)) && unk_0xE934758D273C899A(iVar2)) && !(unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iVar2)) && unk_0xE934758D273C899A(iVar2)))
							{
								unk_0xB9FD7450C0DAB575(iVar2, 0x40A00000);
							}
						}
					}
					if (fVar1 < func_223(-1.33f) && fVar1 > func_223(-1.92f))
					{
						iLocal_150 = 0x00000001;
						SYSTEM::SETTIMERA(0x00000000);
						unk_0x0AEDBE1D61D150AF(0f);
						iLocal_158 = 0x00001770;
					}
					else if (fVar1 < func_223(0.96f) && fVar1 > func_223(-1.33f))
					{
						iLocal_150 = 0x00000002;
						SYSTEM::SETTIMERA(0x00001770);
						unk_0x0AEDBE1D61D150AF(6000f);
						iLocal_158 = 0x00002EE0;
					}
					else if (fVar1 < func_223(2.29f) && fVar1 > func_223(0.96f))
					{
						iLocal_150 = 0x00000003;
						SYSTEM::SETTIMERA(0x00002EE0);
						unk_0x0AEDBE1D61D150AF(12000f);
						iLocal_158 = 0x00004650;
					}
					else if (fVar1 < func_223(-2.81f) || fVar1 > func_223(2.29f))
					{
						iLocal_150 = 0x00000004;
						SYSTEM::SETTIMERA(0x00004650);
						unk_0x0AEDBE1D61D150AF(18000f);
						iLocal_158 = 0x00005DC0;
					}
					else
					{
						SYSTEM::SETTIMERA(0x00005DC0);
						unk_0x0AEDBE1D61D150AF(24000f);
						iLocal_158 = 0x00007530;
						iLocal_150 = 0x00000005;
					}
				}
				iLocal_376 = 0x00000001;
				unk_0x5CAFA5DD13658DFE(0x00000000);
				func_218(&Local_184, 0x00000001, 0x00000000);
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iLocal_84 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					vLocal_112 = { unk_0x56E9E0FD5ACCD35D(iLocal_84) };
					unk_0x1E9649458B15960F(iLocal_84, 0x00000001);
					unk_0x4A4806F9D471E491(iLocal_84, 0x00000000, 0x00000000);
				}
				unk_0x7B1292B738DF9FAF();
				if (iLocal_150 == 0x00000001)
				{
					iLocal_378 = 0x00000001;
					func_75(2559.012f, 4958.518f, 36.02959f, 2585.447f, 4993.435f, 64.62565f, 48f, 2594.651f, 4948.114f, 38.0899f, 283.7287f, 22f, 22f, 15f, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
					if (unk_0xC844350D5D58C99A(iVar2))
					{
						if (unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
						{
							unk_0x56FDC9ADE35F7DB0(iVar2, 0x00000000, 0x00000001, 0x00000000);
						}
					}
					unk_0x536F1BE96C726C4B(2445.139f, 4978.642f, 52.1489f, 150f, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
					unk_0x536F1BE96C726C4B(2578.523f, 4982.284f, 51.4416f, 13f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2578.419f, 4981.901f, 50.587f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 49.2184f);
					unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					unk_0xDEAC6BC509D10068(unk_0x16F2683693E537C9(), 1f);
					unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0xD827C3DB, 0x00000000, 0x00000000, 0x00000000);
					unk_0xDD353D0E9C789D0E(&iVar3);
					unk_0x80AA372E04ED318D(0x00000000, 2570.543f, 4982.002f, 50.6795f, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
					unk_0xE655C47E46F9A7E4(0x00000000, 88.7065f, 0x00000000);
					unk_0x75ABDC5F81978924(iVar3);
					unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), iVar3);
					unk_0xF82EA857DA10E0CD(&iVar3);
					iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000001);
					unk_0xB2ABBA6B919F5CE7(iLocal_155, 2538.6f, 4976.9f, 50.6f, -1.8f, 0f, 93.2f, 0x00001388, 0x00000003, 0x00000002);
					unk_0xB2ABBA6B919F5CE7(iLocal_155, 2536.153f, 4976.7f, 50.5267f, -1.8f, 0f, 93.2f, 0x00001770, 0x00000003, 0x00000002);
					unk_0x5818C8D5303DCCF8(iLocal_155, 34.9f);
					unk_0x34570E685597AE09(iLocal_155, 0x00000000);
				}
				else
				{
					switch (iLocal_150)
					{
						case 0x00000002:
							iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000001);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2426.8f, 5088.3f, 51.2f, 0f, 0f, -169f, 0x00001388, 0x00000003, 0x00000002);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2427.8f, 5087.2f, 51.2f, 0f, 0f, -169.7f, 0x00001770, 0x00000003, 0x00000002);
							unk_0x5818C8D5303DCCF8(iLocal_155, 28.5f);
							unk_0x34570E685597AE09(iLocal_155, 0x00000000);
							break;
						
						case 0x00000003:
							iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000001);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2326.3f, 4985.6f, 51.5f, 0f, 0f, -89.1f, 0x00001388, 0x00000003, 0x00000002);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2328f, 4985.4f, 52.1f, 0f, 0f, -89.1f, 0x00001770, 0x00000003, 0x00000002);
							unk_0x5818C8D5303DCCF8(iLocal_155, 28.5f);
							unk_0x34570E685597AE09(iLocal_155, 0x00000000);
							break;
						
						case 0x00000004:
							iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000001);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2403.6f, 4889.7f, 47.5f, 3.4f, 0f, -19.5f, 0x00001388, 0x00000003, 0x00000002);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, Vector(47.5f, 4889.7f, 2403.6f) + Vector(0.07f, 2.15f, 0.8f), 3.4f, 0f, -19.5f, 0x00001770, 0x00000003, 0x00000002);
							unk_0x5818C8D5303DCCF8(iLocal_155, 29.8f);
							unk_0x34570E685597AE09(iLocal_155, 0x00000000);
							break;
						
						case 0x00000005:
							iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000001);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2493.4f, 4934.8f, 45.7f, 5.2f, 0f, 48f, 0x00001388, 0x00000003, 0x00000002);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, Vector(45.7f, 4934.8f, 2493.4f) + Vector(0f, 1f, -1f), 5.2f, 0f, 48f, 0x00001770, 0x00000003, 0x00000002);
							unk_0x5818C8D5303DCCF8(iLocal_155, 28.5f);
							unk_0x34570E685597AE09(iLocal_155, 0x00000000);
							break;
						
						case 0x00000006:
							iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000001);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 0x00001388, 0x00000003, 0x00000002);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 0x00003A98, 0x00000003, 0x00000002);
							unk_0x5818C8D5303DCCF8(iLocal_155, 28.5f);
							unk_0x34570E685597AE09(iLocal_155, 0x00000000);
							break;
						
						case 0x00000007:
							iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000001);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 0x00001388, 0x00000003, 0x00000002);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 0x00003A98, 0x00000003, 0x00000002);
							unk_0x5818C8D5303DCCF8(iLocal_155, 28.5f);
							unk_0x34570E685597AE09(iLocal_155, 0x00000000);
							break;
						}
				}
				if (iLocal_150 < 0x00000006)
				{
					unk_0x91F5B0244AAE6222(iLocal_155, "Hand_shake", 0.2f);
				}
				else
				{
					unk_0x91F5B0244AAE6222(iLocal_155, "Hand_shake", 0.7f);
				}
				unk_0xE3BB8E05FCEB3FBE(iLocal_155, 0x00000001);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				unk_0x420FE818E70BB523(0x00000004);
				unk_0x8BC9595FD2792B5D("CHI_2_FARMHOUSE_OVERVIEW");
				func_211(0x00000001);
				unk_0x51B096AAC60548C1(0f);
				unk_0x34D79252800B23FF(0x00000000);
				unk_0x790015DC92C918E2();
				unk_0xA37A90C62806D848(0x00000001);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000020);
				func_192(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				iLocal_159 = unk_0x1C0640BA9A7327B3() + 1000;
				iVar4 = 0x00000000;
				while (iVar4 < Local_113)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar4 /*33*/]))
					{
						unk_0x33CE5A9E32EA10B2(Local_113[iVar4 /*33*/], 0x00000001);
					}
					iVar4++;
				}
				iLocal_160 = unk_0x36F2404464202779(0x0000001A, joaat("a_m_y_methhead_01"), 2460.449f, 4976.938f, 45.5765f, 243.4917f, 0x00000001, 0x00000001);
				unk_0x262EF6C6306BEA6C(iLocal_160, joaat("weapon_microsmg"), 0xFFFFFFFF, 0x00000001, 0x00000001);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_160))
				{
					func_99();
					unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
					unk_0x96167B03C5A77156(0x00000000, 2463.016f, 4974.97f, 45.5765f, 1f, 0xFFFFFFFF, 0.5f, 0x00000001, 0x471C4000);
					unk_0x96167B03C5A77156(0x00000000, 2452.833f, 4964.785f, 45.5765f, 1f, 0xFFFFFFFF, 0.5f, 0x00000001, 0x471C4000);
					unk_0x78A77CDD64392938(0x00000000, 0x000001F4);
					unk_0x96167B03C5A77156(0x00000000, 2460.449f, 4976.938f, 45.5765f, 1f, 0xFFFFFFFF, 0.5f, 0x00000000, 0x471C4000);
					func_98(&iLocal_160, 0x00000001);
				}
				iLocal_147 = unk_0x122AAB0B1D6F55AD(joaat("dubsta"), 2479.961f, 4990f, 45.8f, -5.37f, 0x00000001, 0x00000001, 0x00000000);
				func_15("CHN2_MISSION_START", 0x00000001, "CHN2_EXPLODE");
				iLocal_150 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			if (SYSTEM::TIMERA() > iLocal_158)
			{
				unk_0x5CAFA5DD13658DFE(0x00000000);
				iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000001);
				unk_0xB2ABBA6B919F5CE7(iLocal_155, 2445.944f, 4962.986f, 51.4782f, 7.9159f, 0f, 34.5909f, 0x00001388, 0x00000003, 0x00000002);
				unk_0xB2ABBA6B919F5CE7(iLocal_155, 2445.684f, 4963.368f, 51.6659f, 3.6033f, 0f, 34.5909f, 0x00000DAC, 0x00000003, 0x00000002);
				unk_0x5818C8D5303DCCF8(iLocal_155, 34f);
				unk_0x34570E685597AE09(iLocal_155, 0x00000000);
				unk_0x91F5B0244AAE6222(iLocal_155, "Hand_shake", 0.5f);
				iLocal_158 += 3500;
				iLocal_150++;
			}
			break;
		
		case 0x00000004:
			if (SYSTEM::TIMERA() > iLocal_158)
			{
				unk_0x5CAFA5DD13658DFE(0x00000000);
				iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000001);
				unk_0xB2ABBA6B919F5CE7(iLocal_155, 2465.07f, 4946.688f, 45.3372f, 7.1461f, 0f, 30.9281f, 0x00001388, 0x00000003, 0x00000002);
				unk_0xB2ABBA6B919F5CE7(iLocal_155, 2466.011f, 4947.377f, 45.3509f, 7.1461f, 0f, 32.3761f, 0x00000BB8, 0x00000003, 0x00000002);
				unk_0x5818C8D5303DCCF8(iLocal_155, 34f);
				unk_0x34570E685597AE09(iLocal_155, 0x00000000);
				unk_0x91F5B0244AAE6222(iLocal_155, "Hand_shake", 0.5f);
				iLocal_158 += 3000;
				iLocal_150++;
			}
			break;
		
		case 0x00000005:
			iLocal_377 = 0x00000001;
			if (SYSTEM::TIMERA() > iLocal_158)
			{
				iLocal_377 = 0x00000001;
				unk_0x5CAFA5DD13658DFE(0x00000000);
				iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000001);
				unk_0xB2ABBA6B919F5CE7(iLocal_155, 2509.691f, 4971.024f, 44.1325f, 7.2578f, 0f, 88.5226f, 0x00001388, 0x00000003, 0x00000002);
				unk_0xB2ABBA6B919F5CE7(iLocal_155, 2509.415f, 4971.163f, 44.1674f, 6.6554f, 0f, 89.4229f, 0x000009C4, 0x00000003, 0x00000002);
				unk_0x5818C8D5303DCCF8(iLocal_155, 37.34f);
				unk_0x34570E685597AE09(iLocal_155, 0x00000000);
				unk_0x91F5B0244AAE6222(iLocal_155, "Hand_shake", 0.5f);
				iLocal_158 += 2500;
				iLocal_150++;
			}
			break;
		
		case 0x00000006:
			if (SYSTEM::TIMERA() > iLocal_158)
			{
				if (func_210())
				{
					unk_0x790015DC92C918E2();
					unk_0xA37A90C62806D848(0x00000001);
					unk_0xC91CE78BD2816AC6(6.818f);
					if (unk_0xDF1306B443CD3D15(iLocal_147, 0x00000000))
					{
						unk_0x29E8331978B73E7F(iLocal_147, "EXL_2_abandoned_car", 0x00000001, joaat("dubsta"), 0x00000000);
					}
					unk_0x4C902758BEA97C68(0x00000000);
					iLocal_374 = 0x00000000;
					iLocal_150 = 0x0000000B;
				}
			}
			break;
		
		case 0x0000000A:
			if (unk_0xC844350D5D58C99A(iLocal_84) && unk_0xDF1306B443CD3D15(iLocal_84, 0x00000000))
			{
				unk_0x8F741CB9D8AB80F4(iLocal_84);
			}
			if (!unk_0x757EF87A33649210() && !unk_0xD0BB2359EC70FC37())
			{
				unk_0x53491B90E4FD0E56(0x000001F4);
			}
			if ((unk_0x757EF87A33649210() && !unk_0x22A8E52414415B76()) || (unk_0x39B7A3CCD2467CAB() && unk_0xEABED1927EFB48CA(0x00000001)))
			{
				iLocal_150++;
			}
			break;
		
		case 0x0000000B:
			if (unk_0xC844350D5D58C99A(iLocal_84) && unk_0xDF1306B443CD3D15(iLocal_84, 0x00000000))
			{
				unk_0x8F741CB9D8AB80F4(iLocal_84);
			}
			if ((unk_0x757EF87A33649210() && !unk_0x22A8E52414415B76()) || (unk_0x39B7A3CCD2467CAB() && unk_0xEABED1927EFB48CA(0x00000001)))
			{
				unk_0x5CAFA5DD13658DFE(0x00000000);
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				if (func_188() && !bLocal_165)
				{
					unk_0x82A772610883F395("CamPushInNeutral", 0x00000000, 0x00000000);
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
				}
				unk_0xBF40D896CA4BDBE7();
				if (func_73(unk_0x16F2683693E537C9(), 2570.543f, 4982.002f, 50.6795f, 0x00000001) < 15f && func_73(unk_0x16F2683693E537C9(), 2570.543f, 4982.002f, 50.6795f, 0x00000001) > 1f)
				{
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2570.543f, 4982.002f, 50.6795f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 98.21f);
				}
				else if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), func_102(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 2458.223f, 4986.042f, 49.05241f, 0x00000001));
				}
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-6.3f, 0x3F800000);
				unk_0xC91CE78BD2816AC6(6.818f);
				unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				unk_0xE96F19797E59AB06();
				unk_0x8910D3D58E0132B8("CHI_2_FARMHOUSE_OVERVIEW");
				unk_0x790015DC92C918E2();
				unk_0xA37A90C62806D848(0x00000001);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				func_211(0x00000000);
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_sniperrifle"), 0x00000000))
				{
					if (unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_sniperrifle")) < 0x0000000F)
					{
						unk_0x744B6A2DDB2E7563(unk_0x16F2683693E537C9(), joaat("weapon_sniperrifle"), 0x00000032);
					}
				}
				func_192(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				if (unk_0xC844350D5D58C99A(iLocal_160))
				{
					unk_0xEBA53F35D0085654(&iLocal_160);
				}
				iLocal_380 = func_18(0x00000004);
				if (iLocal_380 != 0xFFFFFFFF)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_113[iLocal_380 /*33*/]))
					{
						unk_0xEBA53F35D0085654(&(Local_113[iLocal_380 /*33*/]));
					}
					if (unk_0xC844350D5D58C99A(Local_113[iLocal_380 /*33*/].f_14))
					{
						unk_0xF690C84DADBB3551(&(Local_113[iLocal_380 /*33*/].f_14));
					}
					Local_119[iLocal_380 /*24*/].f_3 = 0x00000001;
					Local_113[iLocal_380 /*33*/].f_5 = 0x00000000;
					Local_113[iLocal_380 /*33*/].f_E = 0x00000000;
					Local_113[iLocal_380 /*33*/].f_3 = 0x00000002;
				}
				iLocal_381 = func_18(0x00000005);
				if (iLocal_381 != 0xFFFFFFFF)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_113[iLocal_381 /*33*/]))
					{
						unk_0xEBA53F35D0085654(&(Local_113[iLocal_381 /*33*/]));
					}
					if (unk_0xC844350D5D58C99A(Local_113[iLocal_381 /*33*/].f_14))
					{
						unk_0xF690C84DADBB3551(&(Local_113[iLocal_381 /*33*/].f_14));
					}
					Local_119[iLocal_381 /*24*/].f_3 = 0x00000001;
					Local_113[iLocal_381 /*33*/].f_5 = 0x00000000;
					Local_113[iLocal_381 /*33*/].f_E = 0x00000000;
					Local_113[iLocal_381 /*33*/].f_3 = 0x00000002;
				}
				func_31(0x00000014, 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_161))
				{
					unk_0xEBA53F35D0085654(&iLocal_161);
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_162))
				{
					unk_0xEBA53F35D0085654(&iLocal_162);
				}
				if (func_74(iLocal_147))
				{
					unk_0xA954465BA6FDEFE2(&iLocal_147);
				}
				if (unk_0xC844350D5D58C99A(iLocal_183))
				{
					unk_0xF690C84DADBB3551(&iLocal_183);
				}
				func_208();
				iLocal_111 = 0x00000000;
				func_27();
				unk_0x71199B01895C6202(joaat("prop_phone_ing"));
				unk_0x71199B01895C6202(joaat("dubsta"));
				iVar5 = 0x00000000;
				while (iVar5 < Local_113)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar5 /*33*/]))
					{
						unk_0x33CE5A9E32EA10B2(Local_113[iVar5 /*33*/], 0x00000000);
					}
					iVar5++;
				}
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-6.3f, 0x3F800000);
				if (unk_0xC844350D5D58C99A(iLocal_84))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_84, 0x00000000))
					{
						unk_0x1E9649458B15960F(iLocal_84, 0x00000000);
						if (unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iLocal_84)))
						{
							unk_0x37806EBF326ECEE9(iLocal_84, vLocal_112);
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_84, 0xFFFFFFFF);
						}
						unk_0x56FDC9ADE35F7DB0(iLocal_84, 0x00000001, 0x00000001, 0x00000000);
						if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iLocal_84)))
						{
							unk_0xC023D1C4BF532815(iLocal_84, 0f, 0f, unk_0xD9522BA9E27E1349(iLocal_84), 0x00000002, 0x00000001);
							unk_0x873BCADC75FF6D20(iLocal_84);
							unk_0x37806EBF326ECEE9(iLocal_84, 1f, 1f, 1f);
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_84, 0xFFFFFFFF);
						}
						if (iLocal_378 == 0x00000000)
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_84, 0xFFFFFFFF);
						}
						unk_0x4A4806F9D471E491(iLocal_84, 0x00000001, 0x00000000);
					}
				}
				unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
				unk_0x94FD98915D03BAC2(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				unk_0xF59BE6DDBCFD2F1C();
				if (unk_0x757EF87A33649210())
				{
					unk_0x82E51BCA72537B6C(0x000003E8);
				}
				unk_0x365391E40B6BA75B(0x00000001);
				func_182(0x0000000B);
			}
			break;
	}
}

void func_208()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iLocal_145))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_145);
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_113)
	{
		if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/]))
		{
			unk_0xEBA53F35D0085654(&(Local_113[iVar0 /*33*/]));
		}
		if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_14))
		{
			unk_0xF690C84DADBB3551(&(Local_113[iVar0 /*33*/].f_14));
		}
		Local_113[iVar0 /*33*/].f_3 = 0x00000000;
		Local_113[iVar0 /*33*/].f_4 = 0x00000000;
		Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_2 = 0x00000019;
		Local_113[iVar0 /*33*/].f_5 = 0x00000000;
		Local_113[iVar0 /*33*/].f_C = 0f;
		Local_113[iVar0 /*33*/].f_D = 0f;
		Local_113[iVar0 /*33*/].f_E = 0x00000000;
		Local_113[iVar0 /*33*/].f_F = 0x00000000;
		Local_113[iVar0 /*33*/].f_11 = 0x00000000;
		Local_113[iVar0 /*33*/].f_10 = 0x00000000;
		Local_113[iVar0 /*33*/].f_15 = 0x00000000;
		Local_113[iVar0 /*33*/].f_16 = 0x00000000;
		Local_119[iVar0 /*24*/].f_3 = 0x00000001;
		iVar0++;
	}
	if (unk_0x762119754C50557A(iLocal_168))
	{
		unk_0x40B7230FD4C59AA2(iLocal_168);
	}
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_169)
	{
		if (unk_0x762119754C50557A(iLocal_169[iVar0]))
		{
			unk_0x40B7230FD4C59AA2(iLocal_169[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_170)
	{
		if (unk_0xC844350D5D58C99A(iLocal_170[iVar0]))
		{
			unk_0xF690C84DADBB3551(&(iLocal_170[iVar0]));
		}
		iVar0++;
	}
	func_209(&Local_119, &uLocal_203, cLocal_131, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 0x00000001);
}

void func_209(var uParam0, var uParam1, char* sParam2, float fParam3, vector3 vParam4, float fParam5, int iParam6)
{
	int iVar0;
	
	iLocal_57 = iLocal_57;
	uLocal_70 = fParam3;
	vLocal_71 = { vParam4 };
	fLocal_72 = fParam5;
	Local_77 = { *uParam1 };
	cLocal_78 = sParam2;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*24*/])->f_1 = 0x00000000;
		(uParam0[iVar0 /*24*/])->f_2 = 0x00000000;
		(uParam0[iVar0 /*24*/])->f_3 = iParam6;
		(uParam0[iVar0 /*24*/])->f_4 = 0x00000000;
		(uParam0[iVar0 /*24*/])->f_5 = 0x00000000;
		(uParam0[iVar0 /*24*/])->f_7 = 0x00000000;
		(uParam0[iVar0 /*24*/])->f_8 = 0x00000000;
		(uParam0[iVar0 /*24*/])->f_A = 0x00000000;
		(uParam0[iVar0 /*24*/])->f_B = 0x00000000;
		(uParam0[iVar0 /*24*/])->f_C = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_F = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_12 = 0f;
		iVar0++;
	}
	bLocal_53 = 0x00000000;
	bLocal_54 = 0x00000000;
	iLocal_55 = 0x00000000;
	bLocal_56 = 0x00000000;
	iLocal_57 = 0x00000000;
	bLocal_75 = 0x00000001;
	iLocal_74 = 0x00000000;
	iLocal_58 = 0x00000000;
	iLocal_60 = 0x00000000;
	iLocal_61 = 0xFFFFFFFF;
	iLocal_62 = 0xFFFFFFFF;
	iLocal_63 = 0x00000000;
	iLocal_64 = 0x00000000;
	iLocal_65 = 0x00000000;
	iLocal_66 = 0x00000000;
	iLocal_67 = 0x00000000;
	iLocal_68 = 0x00000000;
	iLocal_69 = 0x00000000;
	unk_0xFCAFD5C52953EB6C(0xE4DF46D5, 0x0000001F);
	iLocal_52 = 0x00000000;
}

bool func_210()
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

void func_211(bool bParam0)
{
	if (bParam0)
	{
		func_217();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_216(0x00000000))
		{
			func_212(0x00000000);
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

void func_212(int iParam0)
{
	if (func_215())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_214())
		{
			func_213(0x00000001, 0x00000001);
		}
		else
		{
			func_213(0x00000000, 0x00000000);
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
	if (!func_45())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_213(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_216(0x00000000))
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

bool func_214()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_215()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_216(int iParam0)
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

void func_217()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

void func_218(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000001E))
	{
		bParam1 = 0x00000001;
	}
	func_222(iParam0);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xE4EDC4B0E92C078B(iParam0->f_1[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(iParam0->f_1[iVar0]));
		}
		func_221(iVar0, iParam0);
		func_220(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000001F)
	{
		if (iVar0 != 0x00000008)
		{
			unk_0x0674E58A79778E99(&(iParam0->f_D), iVar0);
			unk_0x0674E58A79778E99(&(iParam0->f_E), iVar0);
		}
		iVar0++;
	}
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
	}
	iParam0->f_6 = 0x00000000;
	iParam0->f_C = 0x00000000;
	iParam0->f_F = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[iVar0]))
		{
			unk_0xA245D14CC59CDD36(iParam0->f_11[iVar0], 0x00000001);
			unk_0x7D732AB707BE9152(iParam0->f_11[iVar0], 0x00000001);
			if (bParam2)
			{
				unk_0x4E885A246A9D983A(iParam0->f_11[iVar0], 0x00000020, 0x00000001);
				unk_0x4E885A246A9D983A(iParam0->f_11[iVar0], 0x00000131, 0x00000000);
			}
			unk_0x4E885A246A9D983A(iParam0->f_11[iVar0], 0x0000010C, 0x00000000);
			if (bParam1)
			{
				if (unk_0xBFDE4EE64C4BF2D6(iParam0->f_11[iVar0], func_219()) && iParam0->f_11[iVar0] != unk_0x16F2683693E537C9())
				{
					unk_0x0A94A109271BE75A(iParam0->f_11[iVar0]);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000001D))
			{
				unk_0xD5EF6A937E06E46F(iParam0->f_11[iVar0], 0x00000000, 0xFFFFFFFF, 0x00000000);
			}
			iParam0->f_11[iVar0] = 0x00000000;
		}
		iVar0++;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0x00000001);
		unk_0x7D732AB707BE9152(unk_0x16F2683693E537C9(), 0x00000001);
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (bParam2)
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000001);
		}
	}
	iParam0->f_15 = 0x00000000;
}

int func_219()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

void func_220(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x00000011);
			break;
		
		case 0x00000001:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x00000012);
			break;
		
		case 0x00000002:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x00000013);
			break;
	}
}

void func_221(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x0000000E);
			break;
		
		case 0x00000001:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x0000000F);
			break;
		
		case 0x00000002:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x00000010);
			break;
	}
}

void func_222(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_5))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_5));
	}
}

float func_223(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_224()
{
	int iVar0;
	
	func_176(0x00000001, 0x00000004);
	func_166(0x00000000, 0x00000002, 0x00000000, 0x00000002, 0x00000003, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000001, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000002, 0x00000029, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000003, 0x0000002A, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000004, 0x0000002F, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000005, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000006, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000007, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000008, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x00000009, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_166(0x0000000A, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_155(0x00000000, 0x00000001, 0x00000002, 0x00000002, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	func_203(0x00000003, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
	if ((func_73(unk_0x16F2683693E537C9(), 2458.223f, 4986.042f, 49.05241f, 0x00000000) < 107.9f || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2374.441f, 4930.564f, 34.73784f, 2478.099f, 5077.488f, 60.63246f, 185f, 0x00000000, 0x00000000, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2396.726f, 4887.434f, 33.85329f, 2510.54f, 5003.356f, 58.01184f, 158.25f, 0x00000000, 0x00000000, 0x00000000))
	{
		if (unk_0xE4EDC4B0E92C078B(Local_184.f_5))
		{
			unk_0x661342B9651D16E2(Local_184.f_6, 0x00000000);
		}
		func_182(0x0000000B);
	}
	else
	{
		switch (iLocal_150)
		{
			case 0x00000000:
				func_32(0x00000002, 0x00000000);
				func_32(0x00000003, 0x00000000);
				func_32(0x00000001, 0x00000000);
				func_32(0x00000005, 0x00000000);
				func_268(0x00000005, 0xFFFFFFEC);
				unk_0x51B096AAC60548C1(0f);
				unk_0x34D79252800B23FF(0x00000000);
				iLocal_150++;
				break;
			
			case 0x00000001:
				if (func_228(&Local_184, 2608.151f, 4949.754f, 39.4f, 9f, 9f, 2f, 0x00000001, "FRMCHSE_1", 0x00000001, 0x00000001, 0xFFFFFFFF))
				{
					unk_0x8B4C4CA774181102(6f, 6f, 0x00000003);
					iLocal_150++;
					func_218(&Local_184, 0x00000001, 0x00000000);
					func_31(0x00000003, 0x00000001);
					if (unk_0x562F77A7F33D2E46("CHI_2_DRIVE_TO_FARMHOUSE"))
					{
						unk_0x8910D3D58E0132B8("CHI_2_DRIVE_TO_FARMHOUSE");
					}
					if (unk_0x562F77A7F33D2E46("CHI_2_DRIVE_ROCK_RADIO"))
					{
						unk_0x8910D3D58E0132B8("CHI_2_DRIVE_ROCK_RADIO");
					}
				}
				break;
			
			case 0x00000002:
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
					if (func_226(iVar0, 10f, 0x00000002, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
					{
						if (func_225(0x00000005) > 0x00000002)
						{
							iLocal_150++;
						}
					}
				}
				else
				{
					iLocal_150++;
				}
				break;
			
			case 0x00000003:
				if (func_228(&Local_184, 2573.63f, 4983.677f, 50.6978f, 12f, 12f, 2f, 0x00000000, "FRMCHSE_5", 0x00000001, 0x00000001, 0xFFFFFFFF))
				{
					if (unk_0x562F77A7F33D2E46("CHI_2_DRIVE_ROCK_RADIO"))
					{
						unk_0x8910D3D58E0132B8("CHI_2_DRIVE_ROCK_RADIO");
					}
					unk_0x8B4C4CA774181102(5f, 10f, 0x00000004);
					func_182(0x0000000B);
				}
				if (unk_0xE4EDC4B0E92C078B(Local_184.f_5))
				{
					unk_0x661342B9651D16E2(Local_184.f_6, 0x00000000);
				}
				break;
			}
	}
}

int func_225(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 0x00000001)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return Local_153[iVar0 /*6*/].f_2;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_226(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_227(iParam0);
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

void func_227(int iParam0)
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

bool func_228(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, char* sParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_229(iParam0, vParam1, vParam2, func_267(), func_267(), bParam3, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, sParam4, func_173(), func_173(), func_173(), func_173(), func_173(), 0x00000000, bParam5, func_173(), 0x00000000, 0x00000000, bParam6, iParam7, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x3F800000);
}

int func_229(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_11[0x00000000] = iParam7;
	iParam0->f_11[0x00000001] = iParam8;
	iParam0->f_11[0x00000002] = iParam9;
	iParam0->f_10 = iParam7;
	func_266(iParam0);
	func_265(iParam0);
	func_264();
	if (func_248(iParam0, iParam0->f_11[0x00000000], iParam0->f_11[0x00000001], iParam0->f_11[0x00000002], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0x00000000, 0x00000000, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_247(sParam12);
		func_247(sParam13);
		func_247(sParam14);
		func_247(sParam15);
		if (unk_0x0F1CCD77290EE12F())
		{
			bVar1 = 0x00000000;
			if (unk_0xDF1306B443CD3D15(iParam10, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
					{
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000017))
					{
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000017);
					}
					unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000009);
					bVar1 = 0x00000001;
				}
			}
			else if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
			{
				if (func_245(iParam0, iParam21))
				{
					unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
					{
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
					}
					unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000009);
					bVar1 = 0x00000001;
				}
			}
			else
			{
				bVar1 = 0x00000001;
			}
			if (bVar1)
			{
				func_247(sParam16);
				func_247(sParam19);
				func_247("MORE_SEATS");
				if (bParam18 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
					{
						unk_0x142CC44DB769B57E(&(iParam0->f_5));
						func_247(sParam11);
					}
					if (unk_0xE4EDC4B0E92C078B(*iParam0))
					{
						unk_0x142CC44DB769B57E(iParam0);
					}
					if ((!func_242(iParam0, 0x00000001) && !func_241(iParam0)) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
					{
						if (bParam22)
						{
							func_240(iParam0, "LOSE_WANTED", 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_238(iParam0->f_11[0x00000000], "VEHICLE_POLICE_PURSUIT", 0x00000003);
							}
						}
						unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000000);
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000001);
					}
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
					{
						func_247("LOSE_WANTED");
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000000);
						unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000001);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000001))
					{
						if (!func_242(iParam0, 0x00000001))
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_238(iParam0->f_11[0x00000000], "LOSE_WANTED_LEVEL", 0x00000003);
							}
							unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000001);
						}
					}
					if (!unk_0xE4EDC4B0E92C078B(iParam0->f_5))
					{
						if (unk_0xE4EDC4B0E92C078B(*iParam0))
						{
							unk_0x142CC44DB769B57E(iParam0);
						}
						iParam0->f_5 = func_5(vVar3, 0x00000000);
						if (!iParam23 == 0xFFFFFFFF)
						{
							unk_0xBC8E0A7390523199(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_237(iParam0->f_5, iParam0);
						}
					}
					else if (!func_236(vVar3, unk_0xAC14F6E4B17D7835(iParam0->f_5), 0.1f, 0x00000000))
					{
						unk_0x2F9282246F89FFD1(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_237(iParam0->f_5, iParam0);
						}
					}
					if (!func_242(iParam0, 0x00000002))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000002))
						{
							func_240(iParam0, sParam11, 0x00000000);
							unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000002);
						}
					}
					if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
					{
						if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000000D))
						{
							bParam5 = 0x00000000;
						}
					}
					bVar1 = 0x00000000;
					bVar4 = 0x00000000;
					iVar5 = 0x00000000;
					if ((iParam6 == 0x00000001 || iParam6 == 0x00000003) || iParam6 == 0x00000005)
					{
						bVar4 = 0x00000001;
					}
					if (iParam6 == 0x00000002 || iParam6 == 0x00000003)
					{
						iVar5 = 0x00000001;
					}
					else if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
					{
						iVar5 = 0x00000002;
					}
					if (bParam20)
					{
						unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, vParam2, bParam5, bVar4, iVar5);
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vParam3, vParam4, fParam28, 0x00000000, bVar4, iVar5))
						{
							bVar1 = 0x00000001;
						}
					}
					else if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, vParam2, bParam5, bVar4, iVar5))
					{
						bVar1 = 0x00000001;
					}
					if (bVar1)
					{
						bVar1 = 0x00000001;
						iVar2 = 0x00000000;
						while (iVar2 < 0x00000003)
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[iVar2]))
							{
								if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
								{
									iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
									if (!unk_0xC42A92762C58E1B9(iParam0->f_11[iVar2], iVar0, 0x00000000))
									{
										bVar1 = 0x00000000;
									}
								}
								else if (iParam10 != 0x00000000)
								{
									if (!unk_0xC42A92762C58E1B9(iParam0->f_11[iVar2], iParam10, 0x00000000))
									{
										bVar1 = 0x00000000;
									}
								}
								else if (!unk_0xBFDE4EE64C4BF2D6(iParam0->f_11[iVar2], func_219()) || !func_234(iParam0->f_11[iVar2], 0x00000001))
								{
									bVar1 = 0x00000000;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_231(iParam0))
							{
								func_247(sParam11);
								func_247(sParam16);
								func_247(sParam12);
								func_247(sParam13);
								func_247(sParam14);
								func_247(sParam15);
								func_247("LOSE_WANTED");
								func_247("MORE_SEATS");
								func_247(sParam19);
								func_218(iParam0, 0x00000001, 0x00000000);
								return 0x00000001;
							}
						}
					}
				}
			}
			else if (unk_0xC844350D5D58C99A(iParam10))
			{
				if ((bParam18 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) && (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000016)))
				{
					func_247(sParam16);
					func_247(sParam19);
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_5) || unk_0xE4EDC4B0E92C078B(*iParam0))
					{
						unk_0x142CC44DB769B57E(&(iParam0->f_5));
						unk_0x142CC44DB769B57E(iParam0);
						func_247(sParam11);
					}
					if ((!func_242(iParam0, 0x00000001) && !func_241(iParam0)) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
					{
						if (bParam22)
						{
							func_240(iParam0, "LOSE_WANTED", 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_238(iParam0->f_11[0x00000000], "VEHICLE_POLICE_PURSUIT", 0x00000003);
							}
						}
						unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000000);
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000001);
					}
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
					{
						func_247("LOSE_WANTED");
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000000);
						unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000001);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000001))
					{
						if (!func_242(iParam0, 0x00000001))
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_238(iParam0->f_11[0x00000000], "LOSE_WANTED_LEVEL", 0x00000003);
							}
							unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000001);
						}
					}
					if (unk_0xDF1306B443CD3D15(iParam10, 0x00000000))
					{
						if (!unk_0xE4EDC4B0E92C078B(*iParam0))
						{
							if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
							{
								unk_0x142CC44DB769B57E(&(iParam0->f_5));
								func_247(sParam11);
							}
							*iParam0 = func_230(iParam10, 0x00000000, 0x00000000);
							unk_0x9D7CDDB4B55142AF(*iParam0, 0x00000002);
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
							{
								func_237(*iParam0, iParam0);
							}
						}
						if (!func_242(iParam0, 0x00000002))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000003))
							{
								func_240(iParam0, sParam16, 0x00000000);
								unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
								unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
							}
							else if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
							{
								if (!unk_0x2EBF5002C6B6A06C(sParam19))
								{
									if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
									{
										func_240(iParam0, sParam19, 0x00000000);
										unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
									}
								}
								else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
								{
									func_240(iParam0, sParam16, 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
								}
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000017))
								{
									if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
									{
										func_238(iParam0->f_11[0x00000000], "GET_IN_CAR", 0x00000003);
									}
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000017);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
				{
					unk_0x142CC44DB769B57E(&(iParam0->f_5));
					func_247(sParam11);
				}
				if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
				{
					if (iParam21 > 0x00000000)
					{
						if (!func_242(iParam0, 0x00000002))
						{
							if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000000D))
								{
									iVar6 = 0x00000000;
									iVar7 = 0x00000000;
									iVar2 = 0x00000000;
									while (iVar2 < 0x00000003)
									{
										if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0x09AC81E49EA267F7(0x00000000, iVar6);
									if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[iVar7]))
									{
										func_238(iParam0->f_11[iVar7], "NEED_A_BIGGER_VEHICLE", 0x00000003);
									}
									func_240(iParam0, "MORE_SEATS", 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x0000000D);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000003))
							{
								func_240(iParam0, sParam16, 0x00000000);
								unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
								unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
							{
								if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
								{
									func_240(iParam0, sParam19, 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
								}
							}
						}
					}
					else if (!func_242(iParam0, 0x00000002))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000003))
						{
							func_240(iParam0, sParam16, 0x00000000);
							unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
							unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
						}
						else if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
						{
							if (!unk_0x2EBF5002C6B6A06C(sParam19))
							{
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
								{
									func_240(iParam0, sParam19, 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
							{
								func_240(iParam0, sParam16, 0x00000000);
								unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
		{
			unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000000);
		}
		func_247(sParam11);
		func_247(sParam16);
		func_247(sParam19);
		func_247(sParam16);
		func_247("LOSE_WANTED");
		if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
		{
			unk_0x142CC44DB769B57E(&(iParam0->f_5));
		}
		if (unk_0xE4EDC4B0E92C078B(*iParam0))
		{
			unk_0x142CC44DB769B57E(iParam0);
		}
	}
	unk_0x0674E58A79778E99(&(iParam0->f_D), 0x0000000B);
	unk_0x0674E58A79778E99(&(iParam0->f_D), 0x0000000C);
	return 0x00000000;
}

int func_230(int iParam0, bool bParam1, bool bParam2)
{
	return func_14(iParam0, !bParam1, bParam2);
}

int func_231(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000000C))
	{
		if (func_233(unk_0x16F2683693E537C9()))
		{
			if (func_232(0x00000001, 0x00000000, 0x00000001) || unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000007))
			{
				return 0x00000001;
			}
		}
	}
	else if (func_232(0x00000001, 0x00000000, 0x00000001) || unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000007))
	{
		return 0x00000001;
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

int func_233(int iParam0)
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		fVar0 = unk_0x9C66D99E63E8E24C(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_234(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()) && iParam1)
		{
			if (func_235(unk_0x16F2683693E537C9(), iParam0))
			{
				unk_0x7C27693C5112825F(func_219(), 50f);
				return 0x00000001;
			}
		}
		else if (unk_0xBFDE4EE64C4BF2D6(iParam0, func_219()))
		{
			unk_0x7C27693C5112825F(func_219(), 50f);
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_235(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x0E0E6175453415CB(iParam0))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(iParam1))
				{
					if (unk_0x82CCEAB29E9451DD(iParam1, iVar0))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_236(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x755FF954DAE327E1((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 0x00000001;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_237(int iParam0, int iParam1)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		if (unk_0xE4EDC4B0E92C078B(iParam1->f_6))
		{
			unk_0x661342B9651D16E2(iParam1->f_6, 0x00000000);
		}
		unk_0xB8C3D2D6C4AAEF18(0x00000000);
		unk_0x053C926E5E341906();
		iParam1->f_6 = iParam0;
		unk_0x661342B9651D16E2(iParam0, 0x00000001);
	}
}

void func_238(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_239(iParam2), 0x00000001);
}

int func_239(int iParam0)
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

void func_240(int iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x2EBF5002C6B6A06C(sParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(sParam1, ""))
			{
				func_156(sParam1, 0x00001D4C, 0x00000001);
			}
		}
	}
	iParam0->f_A = unk_0x1C0640BA9A7327B3();
}

int func_241(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0->f_10))
	{
		if (unk_0x65636D4556D82155(iParam0->f_10))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_242(int iParam0, int iParam1)
{
	if (iParam1 != 0x00000001 || unk_0x04E6B3EAA8742BFA())
	{
		if (unk_0xD17F06053799A7CA())
		{
			return 0x00000001;
		}
		if (func_244(iParam0))
		{
			return 0x00000001;
		}
	}
	if (iParam1 != 0x00000002 || unk_0x04E6B3EAA8742BFA())
	{
		if (func_65() && !func_243())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_243()
{
	if (Global_5538 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_244(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x1C0640BA9A7327B3();
	iVar0 = (iVar1 - uParam0->f_A);
	if (iVar0 < 0x00000023)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_245(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (func_246(iVar0, uParam0, iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_246(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		iVar0 = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000003)
		{
			if (unk_0xC844350D5D58C99A(uParam1->f_11[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xD6DF381716822EFE(iParam0);
		if (iParam2 > 0x00000000)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 0x00000001)
				{
					if (!unk_0x4A43A287EB2A2B60(iParam0, 0x00000001))
					{
						return 0x00000001;
					}
				}
				else
				{
					return 0x00000001;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 0x00000001)
			{
				if (!unk_0x4A43A287EB2A2B60(iParam0, 0x00000001))
				{
					return 0x00000001;
				}
			}
			else
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_247(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		unk_0x2F23E8033F1ADDD9(sParam0);
	}
}

int func_248(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0x00000000;
	uParam0->f_11[0x00000000] = uParam1;
	uParam0->f_11[0x00000001] = uParam2;
	uParam0->f_11[0x00000002] = uParam3;
	uParam0->f_10 = uParam1;
	uVar12[0x00000000] = uParam4;
	uVar12[0x00000001] = uParam5;
	uVar12[0x00000002] = uParam6;
	uVar13[0x00000000] = uParam13;
	uVar13[0x00000001] = uParam14;
	uVar13[0x00000002] = uParam15;
	iVar6 = 0x00000001;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	iVar3 = 0x00000000;
	iVar7[0x00000000] = 0x00000000;
	iVar7[0x00000001] = 0x00000000;
	iVar7[0x00000002] = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
		{
			iVar3++;
		}
		if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001D) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001C))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
				{
					unk_0xD5EF6A937E06E46F(uParam0->f_11[iVar0], 0x00000001, 0xFFFFFFFF, 0x00000000);
				}
				if (iVar0 == 0x00000002)
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x0000001C);
				}
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001D) && unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001C))
		{
			if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
			{
				unk_0xD5EF6A937E06E46F(uParam0->f_11[iVar0], 0x00000000, 0xFFFFFFFF, 0x00000000);
			}
			if (iVar0 == 0x00000002)
			{
				unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000001C);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0x00000000)
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001A))
	{
		bVar14 = 0x00000000;
		if (!unk_0xC844350D5D58C99A(uParam0->f_15))
		{
			iVar16 = 0x00000040;
			iVar16 |= 0x00010000;
			iVar16 |= 0x00000800;
			iVar16 |= 0x00000001;
			iVar16 |= 0x00000002;
			iVar16 |= 0x00000004;
			iVar16 |= 0x00000020;
			iVar16 |= 0x00000010;
			iVar16 |= 0x00000008;
			iVar15 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 50f, 0x00000000, iVar16);
			if (unk_0xDF1306B443CD3D15(iVar15, 0x00000000))
			{
				uParam0->f_15 = iVar15;
			}
		}
		if (unk_0xDF1306B443CD3D15(uParam0->f_15, 0x00000000))
		{
			if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(uParam0->f_15, 0x00000001)) < 400f)
			{
				if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000) || !bParam17)
					{
						if (func_246(uParam0->f_15, uParam0, iVar3))
						{
							iVar0 = 0x00000000;
							while (iVar0 < 0x00000003)
							{
								if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
								{
									unk_0xCAF7AE54F764D5AA(uParam0->f_11[iVar0], 1f);
									if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_219()))
									{
										unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
									}
									if (unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492) == 0x00000007 && !func_263(uParam0->f_11[iVar0], uParam0->f_15))
									{
										if (!unk_0x869EFD0BC0868856(uParam0->f_11[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0]))
										{
											unk_0x11AD11297DC58CC7(uParam0->f_11[iVar0], 0x00000001);
											unk_0x5B1D360B9C6F0A09(uParam0->f_11[iVar0], uParam0->f_15, 0x0000EA60, iVar0, 1f, 0x00000001, 0x00000000);
											unk_0xBF541ED34EA81209(uParam0->f_11[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 0x00000001;
						}
						else
						{
							bVar14 = 0x00000001;
						}
					}
					else
					{
						bVar14 = 0x00000001;
					}
				}
				else
				{
					bVar14 = 0x00000001;
				}
			}
			else
			{
				bVar14 = 0x00000001;
			}
		}
		else
		{
			bVar14 = 0x00000001;
		}
		if (bVar14)
		{
			unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000001A);
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000003)
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
				{
					if (!unk_0x81A5359F25512A04(uParam0->f_11[iVar0]) && !uParam0->f_F)
					{
						unk_0xA3BF0AA5A2608191(uParam0->f_11[iVar0]);
					}
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_219()))
					{
						if (func_261(uParam0, uParam0->f_11[iVar0], fParam8, 0x00000001))
						{
							unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_219());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001A))
	{
		if ((!func_260(uParam0) && unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9())) && !unk_0xC844350D5D58C99A(iParam10))
		{
			iVar10 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar10, 0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000000D))
				{
					if (iParam16 == 0x00000004 || iParam16 == 0x00000005)
					{
					}
					if (!func_242(uParam0, 0x00000002))
					{
						iVar17 = 0x00000000;
						iVar18 = 0x00000000;
						iVar0 = 0x00000000;
						while (iVar0 < 0x00000003)
						{
							if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0x09AC81E49EA267F7(0x00000000, iVar17);
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar18]))
						{
							func_238(uParam0->f_11[iVar18], "NEED_A_BIGGER_VEHICLE", 0x00000003);
						}
						func_240(uParam0, "MORE_SEATS", 0x00000000);
						unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x0000000D);
					}
				}
				bVar9 = 0x00000001;
			}
		}
		else
		{
			bVar9 = 0x00000000;
			unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000000D);
			func_247("MORE_SEATS");
		}
		if (!unk_0xC844350D5D58C99A(iParam10))
		{
			if ((!unk_0xEB6A8945D1AC98A1(uParam0->f_11[0x00000000]) || !unk_0xEB6A8945D1AC98A1(uParam0->f_11[0x00000001])) || !unk_0xEB6A8945D1AC98A1(uParam0->f_11[0x00000002]))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001F))
				{
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()) && !func_242(uParam0, 0x00000002))
					{
						iVar10 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						if (func_259(iVar10, uParam0))
						{
							func_240(uParam0, "CMN_VEHSUIT", 0x00000000);
							unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x0000001F);
						}
					}
				}
				else if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000001F);
					func_247("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xDF1306B443CD3D15(iParam10, 0x00000000))
		{
			if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iParam10))
			{
				if (unk_0xBFC0798A6E3417F9(0x00000000, 0x0000004B))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x00000015);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000015))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_D), 0x00000015);
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000003)
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_11[iVar0]))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
				{
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_219()))
					{
						unk_0xFCCF7611216AE801(uParam0->f_11[iVar0], 0x00000001);
					}
					else
					{
						unk_0xFCCF7611216AE801(uParam0->f_11[iVar0], 0x00000000);
					}
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
					{
						iVar10 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						if (unk_0xDF1306B443CD3D15(iVar10, 0x00000000))
						{
							if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_219()))
							{
								if (!func_260(uParam0) && unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
								{
									if (!func_258(uParam0->f_11[iVar0]))
									{
										unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0x437347B10A200C4B(iVar10, 0x00000000))
						{
							if (unk_0x82CCEAB29E9451DD(uParam0->f_11[iVar0], iVar10))
							{
								if (unk_0x70EED0761B82965E(iVar10) && !unk_0xF79A7BCA9E38BBBC(iVar10))
								{
									vVar19 = { unk_0x68F4C0EC296D3901(iVar10, 0x00000001) };
									if (vVar19.z < -1f)
									{
										unk_0x45F014B3D0466974(uParam0->f_11[iVar0], iVar10, 0x00000040);
									}
								}
							}
						}
					}
					bVar8 = 0x00000001;
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_219()))
					{
						if (unk_0x0E0E6175453415CB(uParam0->f_11[iVar0]))
						{
							iVar10 = unk_0x6937EA2286828455(uParam0->f_11[iVar0], 0x00000000);
							if (!unk_0x437347B10A200C4B(iVar10, 0x00000000))
							{
								if (unk_0xDF1306B443CD3D15(iParam10, 0x00000000))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iVar10))
										{
											if (unk_0x9C66D99E63E8E24C(iVar10) > 5f)
											{
												unk_0x45F014B3D0466974(uParam0->f_11[iVar0], iVar10, 0x00001040);
											}
											else
											{
												unk_0x45F014B3D0466974(uParam0->f_11[iVar0], iVar10, 0x00000040);
											}
											bVar8 = 0x00000000;
										}
									}
								}
								else
								{
									if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
									{
										iVar20 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
									}
									if (unk_0xDF1306B443CD3D15(iVar20, 0x00000000))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0x9C66D99E63E8E24C(iVar10) > 5f)
											{
												unk_0x45F014B3D0466974(uParam0->f_11[iVar0], iVar10, 0x00001040);
											}
											else
											{
												unk_0x45F014B3D0466974(uParam0->f_11[iVar0], iVar10, 0x00000040);
											}
											bVar8 = 0x00000000;
										}
									}
								}
							}
						}
					}
					if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_219()))
					{
						iVar21 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
						if (unk_0xC844350D5D58C99A(iVar21))
						{
							if (func_246(iVar21, uParam0, 0x00000000))
							{
								if (func_257(iVar0, uParam0) || !unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001B))
								{
									unk_0xBF541ED34EA81209(uParam0->f_11[iVar0], iVar0);
									func_220(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x0000001B);
									}
								}
							}
							else if (!func_257(iVar0, uParam0))
							{
								if (unk_0x134B62B726CEC8E6(iVar21) == joaat("sentinel2"))
								{
									unk_0xBF541ED34EA81209(uParam0->f_11[iVar0], 0x00000004);
								}
								else
								{
									unk_0xBF541ED34EA81209(uParam0->f_11[iVar0], 0x00000002);
								}
								func_256(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_219()) && !func_255(uParam0->f_11[iVar0], iParam10)) && !func_254(uParam0->f_11[iVar0], iParam10))
					{
						if (func_261(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
						{
							if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_219()))
							{
								if (((!unk_0x869EFD0BC0868856(uParam0->f_11[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0])) && !unk_0x7F69A7C512ACACFD(uParam0->f_11[iVar0])) && !unk_0x81A5359F25512A04(uParam0->f_11[iVar0]))
								{
									iVar11 = unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492);
									if (iVar11 == 0x00000007)
									{
										unk_0xA3BF0AA5A2608191(uParam0->f_11[iVar0]);
									}
									unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_219());
									bVar8 = 0x00000000;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
							{
								uParam0->f_B = unk_0x1C0640BA9A7327B3();
								uParam0->f_1[iVar0] = func_230(uParam0->f_11[iVar0], 0x00000000, 0x00000000);
								unk_0x9D7CDDB4B55142AF(uParam0->f_1[iVar0], 0x00000002);
								if (bParam9)
								{
									func_237(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0x00000000;
					}
					else if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
					{
						if (((func_234(uParam0->f_11[iVar0], 0x00000001) || func_255(uParam0->f_11[iVar0], iParam10)) || iParam12) || (unk_0xDF1306B443CD3D15(iParam10, 0x00000000) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0x00000000)))
						{
							if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
							{
								unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
								func_247(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_237(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0x00000000;
						}
					}
					else if (unk_0xDF1306B443CD3D15(iParam10, 0x00000000))
					{
						if (!unk_0x82CCEAB29E9451DD(uParam0->f_11[iVar0], iParam10))
						{
							if ((unk_0x12DE711B1C681E9E(uParam0->f_11[iVar0], iParam10, 20f, 20f, 5f, 0x00000000, 0x00000001, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000000B)) && !((bParam17 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0x00000000)))
							{
								if (unk_0x0E0E6175453415CB(uParam0->f_11[iVar0]))
								{
									if (!unk_0xC42A92762C58E1B9(uParam0->f_11[iVar0], iParam10, 0x00000000))
									{
										if (!func_234(uParam0->f_11[iVar0], 0x00000001))
										{
											if (func_233(uParam0->f_11[iVar0]))
											{
												iVar11 = unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x1AE73569);
												if (iVar11 == 0x00000007)
												{
													unk_0x75CDA8644CD3B5F5(uParam0->f_11[iVar0], 0x00000000, 0x00000000);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_219()))
									{
										if ((((!unk_0x7F69A7C512ACACFD(uParam0->f_11[iVar0]) && !unk_0x869EFD0BC0868856(uParam0->f_11[iVar0])) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0])) && !unk_0x81A5359F25512A04(uParam0->f_11[iVar0])) && !unk_0x4E861BC5B1EDA7BD(iParam10))
										{
											unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
										}
									}
									iVar11 = unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492);
									if (iVar11 == 0x00000007 && !func_263(uParam0->f_11[iVar0], iParam10))
									{
										if (((((!unk_0x7F69A7C512ACACFD(uParam0->f_11[iVar0]) && !unk_0x7F69A7C512ACACFD(unk_0x16F2683693E537C9())) && !func_253(uParam0->f_11[iVar0], 2f)) && !unk_0x869EFD0BC0868856(uParam0->f_11[iVar0])) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0])) && !unk_0x4E861BC5B1EDA7BD(iParam10))
										{
											unk_0x11AD11297DC58CC7(uParam0->f_11[iVar0], 0x00000001);
											if (unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000000A))
											{
												unk_0xCAF7AE54F764D5AA(uParam0->f_11[iVar0], 1f);
											}
											unk_0x5B1D360B9C6F0A09(uParam0->f_11[iVar0], iParam10, 0x0000EA60, iVar0, 2f, 0x00000001, 0x00000000);
											unk_0x579B0182884711E5(uParam0->f_11[iVar0], 0x00000000);
										}
									}
									else if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0x00000000))
									{
										uParam0->f_1[iVar0] = func_230(uParam0->f_11[iVar0], 0x00000000, 0x00000000);
										unk_0x9D7CDDB4B55142AF(uParam0->f_1[iVar0], 0x00000002);
										iVar6 = 0x00000000;
									}
								}
							}
							else if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_219()))
							{
								if (func_261(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
								{
									if (!unk_0x869EFD0BC0868856(uParam0->f_11[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0]))
									{
										iVar11 = unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492);
										if (iVar11 == 0x00000007)
										{
											unk_0xA3BF0AA5A2608191(uParam0->f_11[iVar0]);
										}
										unk_0x11AD11297DC58CC7(uParam0->f_11[iVar0], 0x00000000);
										unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_219());
									}
								}
							}
						}
						else if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iParam10))
						{
							if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_219()))
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000015))
								{
									unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_219());
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000015))
							{
								unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
								unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x00000015);
							}
						}
						else if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_219()) && !unk_0x4E861BC5B1EDA7BD(iParam10))
						{
							unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
						}
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
					func_247(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000003)
		{
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 0x00000001;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_242(uParam0, 0x00000002))
		{
			if (iVar1 > 0x00000000)
			{
				iVar0 = 0x00000000;
				while (iVar0 < 0x00000003)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
						{
							if (func_258(uParam0->f_11[iVar0]) || unk_0x12DE711B1C681E9E(uParam0->f_11[iVar0], unk_0x16F2683693E537C9(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0x00000000, 0x00000001, 0x00000000))
							{
								iVar1 = (iVar1 - 0x00000001);
								iVar7[iVar0] = 0x00000000;
							}
						}
					}
					else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
					{
						if (!unk_0x12DE711B1C681E9E(uParam0->f_11[iVar0], unk_0x16F2683693E537C9(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0x00000000, 0x00000001, 0x00000000) && !func_258(uParam0->f_11[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x1C0640BA9A7327B3();
			if ((iVar5 - uParam0->f_B) > 0x000005DC || iVar3 == 0x00000001)
			{
				if (iVar1 > 0x00000000)
				{
					if (uParam0->f_C < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 0x00000001)
						{
							if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000005))
							{
								func_240(uParam0, sParam7, 0x00000000);
								unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x00000005);
								uParam0->f_C = iVar1;
							}
							else
							{
								uParam0->f_C = iVar1;
							}
						}
						else
						{
							iVar0 = 0x00000000;
							while (iVar0 < 0x00000003)
							{
								if (iVar7[iVar0])
								{
									if (!func_252(iVar0, uParam0))
									{
										if (!unk_0x2EBF5002C6B6A06C(uVar13[iVar0]))
										{
											if (!unk_0x7F8A39872A07D2CE(uVar13[iVar0], ""))
											{
												func_250(uParam0, uVar12[iVar0], uVar13[iVar0], 0x00000000);
												func_249(iVar0, uParam0);
												uParam0->f_C = iVar1;
											}
										}
										if (!func_252(iVar0, uParam0))
										{
											func_240(uParam0, uVar12[iVar0], 0x00000000);
											func_249(iVar0, uParam0);
											uParam0->f_C = iVar1;
										}
									}
									else
									{
										uParam0->f_C = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_C = 0x00000000;
				}
			}
		}
		unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000000A);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000003)
			{
				if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
					func_247(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_247("MORE_SEATS");
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_249(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x0000000E);
			break;
		
		case 0x00000001:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x0000000F);
			break;
		
		case 0x00000002:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x00000010);
			break;
	}
}

void func_250(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x2EBF5002C6B6A06C(sParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(sParam1, ""))
			{
				func_251(sParam1, sParam2, 0x00001D4C, 0x00000001);
			}
		}
	}
	uParam0->f_A = unk_0x1C0640BA9A7327B3();
}

void func_251(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x12F275EDEEF63A2B(iParam2, 0x00000001);
}

int func_252(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x0000000E);
		
		case 0x00000001:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x0000000F);
		
		case 0x00000002:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x00000010);
		
		default:
	}
	return 0x00000000;
}

int func_253(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000000);
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x9C66D99E63E8E24C(iVar0) > fParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_254(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0xBFDE4EE64C4BF2D6(iParam0, func_219()))
		{
			iVar0 = unk_0x8B157DA177FBCF50(iParam0);
			if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
			{
				if (unk_0x12DE711B1C681E9E(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (iVar0 == iParam1)
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_255(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
			{
				if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_256(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x00000011);
			break;
		
		case 0x00000001:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x00000012);
			break;
		
		case 0x00000002:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x00000013);
			break;
	}
}

int func_257(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x00000011);
		
		case 0x00000001:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x00000012);
		
		case 0x00000002:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x00000013);
		
		default:
	}
	return 0x00000000;
}

int func_258(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				iVar1 = unk_0x3C66DF04E6EA3587(iParam0);
				if (unk_0xDF1306B443CD3D15(iVar1, 0x00000000))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000) && unk_0x12DE711B1C681E9E(iParam0, iVar1, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
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

int func_259(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == joaat("bus") || unk_0x134B62B726CEC8E6(iParam0) == joaat("coach"))
		{
			iVar0 = 0x00000000;
			iVar1 = 0x00000000;
			iVar2 = 0x00000000;
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam1->f_11[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xA30B8362589C124A(iParam0, 0x00000000, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar3))
			{
				if ((iVar3 == uParam1->f_11[0x00000000] || iVar3 == uParam1->f_11[0x00000001]) || iVar3 == uParam1->f_11[0x00000002])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0xA30B8362589C124A(iParam0, 0x00000001, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar4))
			{
				if ((iVar4 == uParam1->f_11[0x00000000] || iVar4 == uParam1->f_11[0x00000001]) || iVar4 == uParam1->f_11[0x00000002])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0xA30B8362589C124A(iParam0, 0x00000002, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar5))
			{
				if ((iVar5 == uParam1->f_11[0x00000000] || iVar5 == uParam1->f_11[0x00000001]) || iVar5 == uParam1->f_11[0x00000002])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_260(var uParam0)
{
	int iVar0;
	
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (func_246(iVar0, uParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_261(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		if (unk_0x0E0E6175453415CB(iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam1, 0x00000000);
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
				{
					if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iVar0))
					{
						if (func_260(uParam0))
						{
							return 0x00000001;
						}
					}
					else if (bParam3)
					{
						return 0x00000001;
					}
				}
				else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam1, fParam2, fParam2, 3f, 0x00000000, 0x00000001, 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
		else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam1, fParam2, fParam2, 3f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (func_246(iVar0, uParam0, 0x00000000))
					{
						if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
						{
							if (func_262(iVar0))
							{
								return 0x00000001;
							}
						}
					}
				}
				else
				{
					return 0x00000001;
				}
			}
			else
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_262(int iParam0)
{
	float fVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		fVar0 = unk_0x9C66D99E63E8E24C(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_263(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
		{
			iVar0 = unk_0x3C66DF04E6EA3587(iParam0);
			if (iVar0 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_264()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		iVar0 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			iVar1 = unk_0xA30B8362589C124A(iVar0, 0x00000000, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar1))
			{
				if (iVar1 != unk_0x16F2683693E537C9())
				{
					if (unk_0xAF6690C489CC6203(iVar1))
					{
						if (!unk_0xE0EC712E4BE1FC42(iVar1, unk_0x16F2683693E537C9()))
						{
							unk_0x0C8C0C840C2D1AD2(iVar1, unk_0x16F2683693E537C9(), 0x000007D0, 0x00000800, 0x00000002);
						}
					}
				}
			}
		}
	}
}

void func_265(var uParam0)
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000019))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000003)
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_11[iVar0]))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
				{
					unk_0x4E885A246A9D983A(uParam0->f_11[iVar0], 0x00000020, 0x00000000);
					unk_0x4E885A246A9D983A(uParam0->f_11[iVar0], 0x00000131, 0x00000001);
					unk_0x4E885A246A9D983A(uParam0->f_11[iVar0], 0x0000010C, 0x00000001);
					unk_0x579B0182884711E5(uParam0->f_11[iVar0], 0x00000000);
				}
			}
			iVar0++;
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x00000019);
	}
}

void func_266(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_11[iVar0]))
		{
			if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
			{
				if (unk_0x0E0E6175453415CB(uParam0->f_11[iVar0]))
				{
					unk_0xA245D14CC59CDD36(uParam0->f_11[iVar0], 0x00000000);
					unk_0x7D732AB707BE9152(uParam0->f_11[iVar0], 0x00000000);
				}
			}
		}
		iVar0++;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x7D732AB707BE9152(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
	}
}

Vector3 func_267()
{
	vector3 vVar0;
	
	return vVar0;
}

int func_268(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000013)
	{
		if (Local_153[iVar0 /*6*/] == iParam0)
		{
			if (Local_153[iVar0 /*6*/].f_1 == 0x00000001)
			{
				Local_153[iVar0 /*6*/].f_2 = iParam1;
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_269()
{
	int iVar0;
	int iVar1;
	
	unk_0x6A36BC55C7F6D023(0f);
	unk_0x1386EF28F7C0195C(0f, 0f);
	switch (iLocal_150)
	{
		case 0x00000000:
			iLocal_144 = unk_0x728870EB733D12A1();
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			if (func_210())
			{
				unk_0x3F423BF5B8125A50("MISSChinese2_crystalMazeMCS1_IG");
				unk_0x523BCC9DC80CD82F(joaat("ig_old_man2"));
				unk_0x523BCC9DC80CD82F(joaat("ig_old_man1a"));
				unk_0x523BCC9DC80CD82F(joaat("ig_janet"));
				unk_0x523BCC9DC80CD82F(joaat("ig_taocheng"));
				unk_0x523BCC9DC80CD82F(joaat("ig_taostranslator"));
				unk_0x3F423BF5B8125A50("misschinese2_crystalmaze");
				unk_0x3F423BF5B8125A50("missrampageintrooutro");
				unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				func_192(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000000]))
				{
					Local_113[0x0000000E /*33*/] = Global_17409.f_9[0x00000002];
					Local_113[0x0000000D /*33*/] = Global_17409.f_9[0x00000001];
					Local_113[0x0000000B /*33*/] = Global_17409.f_9[0x00000004];
					Local_113[0x0000000A /*33*/] = Global_17409.f_9[0x00000003];
					Local_113[0x0000000C /*33*/] = Global_17409.f_9[0x00000000];
					unk_0x73270B3C9CC833FD(Local_113[0x0000000E /*33*/], 0x00000001, 0x00000001);
					unk_0x73270B3C9CC833FD(Local_113[0x0000000D /*33*/], 0x00000001, 0x00000001);
					unk_0x73270B3C9CC833FD(Local_113[0x0000000B /*33*/], 0x00000001, 0x00000001);
					unk_0x73270B3C9CC833FD(Local_113[0x0000000A /*33*/], 0x00000001, 0x00000001);
					unk_0x73270B3C9CC833FD(Local_113[0x0000000C /*33*/], 0x00000001, 0x00000001);
					if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000D /*33*/]))
					{
						unk_0x29E8331978B73E7F(Local_113[0x0000000D /*33*/], "Old_Man1A", 0x00000000, joaat("ig_old_man1a"), 0x00000000);
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000E /*33*/]))
					{
						unk_0x29E8331978B73E7F(Local_113[0x0000000E /*33*/], "Old_Man2", 0x00000000, joaat("ig_old_man2"), 0x00000000);
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000B /*33*/]))
					{
						unk_0x29E8331978B73E7F(Local_113[0x0000000B /*33*/], "tao", 0x00000000, joaat("ig_taocheng"), 0x00000000);
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000A /*33*/]))
					{
						unk_0x29E8331978B73E7F(Local_113[0x0000000A /*33*/], "Taos_Translator", 0x00000000, joaat("ig_taostranslator"), 0x00000000);
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000C /*33*/]))
					{
						unk_0x29E8331978B73E7F(Local_113[0x0000000C /*33*/], "Janet", 0x00000000, joaat("ig_janet"), 0x00000000);
					}
				}
				else
				{
					Local_113[0x0000000D /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0f, 0x00000001, 0x00000001);
					unk_0x29E8331978B73E7F(Local_113[0x0000000D /*33*/], "Old_Man1A", 0x00000000, joaat("ig_old_man1a"), 0x00000000);
					Local_113[0x0000000E /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0f, 0x00000001, 0x00000001);
					unk_0x29E8331978B73E7F(Local_113[0x0000000E /*33*/], "Old_Man2", 0x00000000, joaat("ig_old_man2"), 0x00000000);
					if (unk_0xC844350D5D58C99A(Local_113[0x0000000B /*33*/]))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000B /*33*/]))
						{
							unk_0x29E8331978B73E7F(Local_113[0x0000000B /*33*/], "tao", 0x00000000, joaat("ig_taocheng"), 0x00000000);
						}
					}
					else
					{
						unk_0x29E8331978B73E7F(Local_113[0x0000000B /*33*/], "tao", 0x00000002, joaat("ig_taocheng"), 0x00000000);
					}
					unk_0x29E8331978B73E7F(Local_113[0x0000000A /*33*/], "Taos_Translator", 0x00000002, joaat("ig_taostranslator"), 0x00000000);
					Local_113[0x0000000C /*33*/] = unk_0x36F2404464202779(0x0000001A, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0f, 0x00000001, 0x00000001);
					unk_0x29E8331978B73E7F(Local_113[0x0000000C /*33*/], "Janet", 0x00000000, joaat("ig_janet"), 0x00000000);
				}
				func_271();
				unk_0x4C902758BEA97C68(0x00000000);
				unk_0x420FE818E70BB523(0x00000004);
				unk_0x745CE398A4B0A3C6(1991.22f, 3054.884f, 50.27741f, 87f, 0x00000000);
				unk_0x679C321F8CAA2CFA(1991.22f, 3054.884f, 50.27741f, 87f, 0x00000000);
				unk_0x7D6CA5F52B3748BF(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
				unk_0x10F3BFFADF2CE3DA(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
				func_32(0x00000000, 0x00000000);
				func_32(0x0000001A, 0x00000000);
				iLocal_576 = 0x00000000;
				iLocal_150++;
			}
			break;
		
		case 0x00000001:
			if (unk_0x22A8E52414415B76())
			{
				if (unk_0x757EF87A33649210())
				{
					unk_0x82E51BCA72537B6C(0x000003E8);
				}
				iLocal_150++;
			}
			break;
		
		case 0x00000002:
			if (unk_0x22A8E52414415B76())
			{
				if (iLocal_576 == 0x00000000)
				{
					func_270(0x0000000D);
					iLocal_576++;
				}
			}
			if (!unk_0xC844350D5D58C99A(Local_113[0x0000000D /*33*/]))
			{
				if (unk_0x3148AE92ED70DC30("Old_Man1A", 0x00000000))
				{
					Local_113[0x0000000D /*33*/] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Old_Man1A", 0x00000000));
				}
			}
			if (!unk_0xC844350D5D58C99A(Local_113[0x0000000E /*33*/]))
			{
				if (unk_0x3148AE92ED70DC30("Old_Man2", 0x00000000))
				{
					Local_113[0x0000000E /*33*/] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Old_Man2", 0x00000000));
				}
			}
			if (!unk_0xC844350D5D58C99A(Local_113[0x0000000B /*33*/]))
			{
				if (unk_0x3148AE92ED70DC30("tao", 0x00000000))
				{
					Local_113[0x0000000B /*33*/] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("tao", 0x00000000));
				}
			}
			if (!unk_0xC844350D5D58C99A(Local_113[0x0000000A /*33*/]))
			{
				if (unk_0x3148AE92ED70DC30("Taos_Translator", 0x00000000))
				{
					Local_113[0x0000000A /*33*/] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Taos_Translator", 0x00000000));
				}
			}
			if (!unk_0xC844350D5D58C99A(Local_113[0x0000000C /*33*/]))
			{
				if (unk_0x3148AE92ED70DC30("Janet", 0x00000000))
				{
					Local_113[0x0000000C /*33*/] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Janet", 0x00000000));
				}
			}
			if (unk_0x3148AE92ED70DC30("tao", 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000B /*33*/]))
				{
					unk_0x6DF7BF67E86AAE86(Local_113[0x0000000B /*33*/], iLocal_118);
					unk_0x25C5402CC10F76CD(Local_113[0x0000000B /*33*/], 0x00000000);
					iVar0 = unk_0xE9744DB7B8CA6965(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 0x00000002);
					unk_0x915804B434753CBD(Local_113[0x0000000B /*33*/], iVar0, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 0x00000001, 0x00000010, 0x447A0000, 0x00000000);
				}
			}
			if (unk_0x3148AE92ED70DC30("Taos_Translator", 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_113[0x0000000A /*33*/]))
				{
					unk_0x6DF7BF67E86AAE86(Local_113[0x0000000A /*33*/], iLocal_118);
					unk_0x25C5402CC10F76CD(Local_113[0x0000000A /*33*/], 0x00000000);
					iVar1 = unk_0xE9744DB7B8CA6965(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 0x00000002);
					unk_0x915804B434753CBD(Local_113[0x0000000A /*33*/], iVar1, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 0x00000001, 0x00000010, 0x447A0000, 0x00000000);
				}
			}
			if (unk_0x3148AE92ED70DC30("Trevor", 0x00000000))
			{
				iLocal_144 = unk_0x728870EB733D12A1();
				if (func_74(iLocal_144) && func_73(iLocal_144, 1995.202f, 3062.156f, 46.0491f, 0x00000001) < 5f)
				{
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_144, 0xFFFFFFFF);
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					unk_0x058E3033265DBA9A(unk_0x134B62B726CEC8E6(iLocal_144));
				}
				else if (unk_0xB4AE0788C1587752("missrampageintrooutro"))
				{
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1992.135f, 3057.467f, 46.06f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 325.4678f);
					unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "missrampageintrooutro", "trvram_6_1h_run_outro", 1000f, -4f, 0xFFFFFFFF, 0x00000000, 0.1f, 0x00000000, 0x00000000, 0x00000000);
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
				}
				else
				{
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1992.919f, 3057.906f, 46.0567f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 337.2537f);
					unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0xD827C3DB, 0x00000000, 0x00000000, 0x00000000);
					unk_0xDEAC6BC509D10068(unk_0x16F2683693E537C9(), 1f);
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
				}
			}
			if (unk_0xEABED1927EFB48CA(0x00000000))
			{
				unk_0xF99F2927BEBB5EE7(0x00000006);
				func_192(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 0x3F800000);
				if (unk_0x757EF87A33649210())
				{
					unk_0x90CECE08EA8E77CC(1992.135f, 3057.467f, 46.06f);
				}
				unk_0xBF40D896CA4BDBE7();
				unk_0x8B4C4CA774181102(0f, 7f, 0x00000003);
				func_182(0x0000000B);
			}
			break;
	}
}

void func_270(int iParam0)
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		if (iParam0 == Global_175B2)
		{
			Global_175B6 = 0x00000001;
			return;
		}
	}
}

void func_271()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000009D, 0x00000001);
		unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_17771[iVar0]))
		{
			if (!unk_0x437347B10A200C4B(Global_17771[iVar0], 0x00000000))
			{
				unk_0xAA6B3A4292417750(Global_17771[iVar0], 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xE121AE1BBF90E186(Global_17771[iVar0], 0x00000000);
			}
		}
		iVar0++;
	}
	if ((Global_A1D7 != 0x00000000 && Global_A1D7 != 0x00000003) && Global_A1D7 != 0x00000002)
	{
		unk_0x34D79252800B23FF(0x00000005);
		unk_0x51B096AAC60548C1(1f);
	}
}

void func_272()
{
	int iVar0;
	
	switch (iLocal_150)
	{
		case 0x00000000:
			unk_0xD7992BEF7A9D109E("FRMCHSE", 0x00000000);
			while (!unk_0x67C1D9E5B91B2E37(0x00000000))
			{
				func_28(0x0000001B, 0x00000001);
			}
			func_62(&uLocal_203, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
			func_62(&uLocal_203, 0x00000008, 0x00000000, "PED8", 0x00000000, 0x00000001);
			func_32(0x00000009, 0x00000001);
			func_32(0x0000001D, 0x00000001);
			func_32(0x00000015, 0x00000001);
			func_368();
			unk_0x7800CEC090C01D4D(2442.69f, 4970.348f, 46.33f, 30f);
			unk_0x8225571BCEE038F8("EXTRASUNNY", 120f);
			vLocal_384[0x00000000 /*3*/] = { 2428.47f, 4968.91f, 42.11f };
			vLocal_384[0x00000001 /*3*/] = { 2431.14f, 4972.06f, 42.19f };
			vLocal_384[0x00000002 /*3*/] = { 2433.05f, 4969.22f, 42.26f };
			vLocal_384[0x00000003 /*3*/] = { 2437.71f, 4968.13f, 42.45f };
			vLocal_384[0x00000004 /*3*/] = { 2436.12f, 4964.76f, 42.19f };
			vLocal_384[0x00000005 /*3*/] = { 2432.13f, 4961.97f, 41.35f };
			vLocal_384[0x00000006 /*3*/] = { 2430.07f, 4963.78f, 41.35f };
			vLocal_384[0x00000007 /*3*/] = { 2434f, 4963.04f, 41.53f };
			vLocal_384[0x00000008 /*3*/] = { 2435.637f, 4969.699f, 42.19639f };
			Local_109[0x00000000 /*5*/] = { 2450.376f, 4955.83f, 43.9394f };
			Local_109[0x00000001 /*5*/] = { 2449.815f, 4956.678f, 43.9894f };
			Local_109[0x00000002 /*5*/] = { 2449.606f, 4957.675f, 44.0646f };
			Local_109[0x00000003 /*5*/] = { 2449.739f, 4958.731f, 44.1544f };
			Local_109[0x00000004 /*5*/] = { 2450.141f, 4959.745f, 44.2487f };
			Local_109[0x00000005 /*5*/] = { 2450.685f, 4960.582f, 44.3219f };
			Local_109[0x00000006 /*5*/] = { 2451.492f, 4961.333f, 44.4439f };
			Local_109[0x00000007 /*5*/] = { 2452.174f, 4962.099f, 44.5787f };
			Local_109[0x00000008 /*5*/] = { 2452.717f, 4962.906f, 44.9141f };
			Local_109[0x00000009 /*5*/] = { 2453.35f, 4963.579f, 45.3558f };
			Local_109[0x0000000A /*5*/] = { 2453.754f, 4964.565f, 45.5766f };
			Local_109[0x0000000B /*5*/] = { 2453.226f, 4965.539f, 45.5766f };
			Local_109[0x0000000C /*5*/] = { 2452.472f, 4966.293f, 45.5766f };
			Local_109[0x0000000D /*5*/] = { 2451.869f, 4967.104f, 45.5766f };
			Local_109[0x0000000E /*5*/] = { 2451.529f, 4968.083f, 45.5766f };
			Local_109[0x0000000F /*5*/] = { 2452.327f, 4968.712f, 45.5766f };
			Local_109[0x00000010 /*5*/] = { 2452.796f, 4969.643f, 45.8107f };
			Local_109[0x00000011 /*5*/] = { 2453.261f, 4970.541f, 45.8106f };
			Local_109[0x00000012 /*5*/] = { 2453.58f, 4971.548f, 45.8104f };
			Local_109[0x00000013 /*5*/] = { 2452.808f, 4972.267f, 45.8306f };
			Local_109[0x00000014 /*5*/] = { 2452.049f, 4972.928f, 45.8306f };
			Local_109[0x00000015 /*5*/] = { 2451.241f, 4973.599f, 45.8306f };
			Local_109[0x00000016 /*5*/] = { 2450.248f, 4973.889f, 45.8306f };
			Local_109[0x00000017 /*5*/] = { 2449.207f, 4973.784f, 45.8105f };
			Local_109[0x00000018 /*5*/] = { 2448.172f, 4973.814f, 45.8106f };
			Local_109[0x00000019 /*5*/] = { 2447.153f, 4973.771f, 45.8106f };
			Local_109[0x0000001A /*5*/] = { 2446.138f, 4973.724f, 45.8106f };
			Local_109[0x0000001B /*5*/] = { 2445.128f, 4973.689f, 45.8106f };
			Local_109[0x0000001C /*5*/] = { 2444.256f, 4973.056f, 45.8106f };
			Local_109[0x0000001D /*5*/] = { 2443.669f, 4972.194f, 45.8106f };
			Local_109[0x0000001E /*5*/] = { 2443.119f, 4971.275f, 45.8106f };
			Local_109[0x0000001F /*5*/] = { 2442.661f, 4970.359f, 45.8106f };
			Local_109[0x00000020 /*5*/] = { 2442.267f, 4969.425f, 45.8106f };
			Local_109[0x00000021 /*5*/] = { 2441.708f, 4968.502f, 45.8306f };
			Local_109[0x00000022 /*5*/] = { 2441.264f, 4967.534f, 45.8106f };
			Local_109[0x00000023 /*5*/] = { 2440.873f, 4966.538f, 45.8106f };
			Local_109[0x00000024 /*5*/] = { 2440.382f, 4965.634f, 45.8106f };
			Local_109[0x00000025 /*5*/] = { 2439.71f, 4964.882f, 45.8106f };
			Local_109[0x00000026 /*5*/] = { 2438.933f, 4964.146f, 45.8106f };
			Local_109[0x00000027 /*5*/] = { 2438.166f, 4963.502f, 45.8106f };
			Local_109[0x00000028 /*5*/] = { 2437.555f, 4962.709f, 45.8106f };
			Local_109[0x00000029 /*5*/] = { 2436.901f, 4961.95f, 45.8106f };
			Local_109[0x0000002A /*5*/] = { 2436.075f, 4961.257f, 45.8106f };
			Local_109[0x0000002B /*5*/] = { 2435.08f, 4961.004f, 45.8118f };
			Local_109[0x0000002C /*5*/] = { 2434.066f, 4960.713f, 45.8181f };
			Local_109[0x0000002D /*5*/] = { 2433.045f, 4960.594f, 45.8192f };
			Local_109[0x0000002E /*5*/] = { 2432.065f, 4960.25f, 45.813f };
			Local_109[0x0000002F /*5*/] = { 2431.233f, 4960.809f, 45.8089f };
			Local_109[0x00000030 /*5*/] = { 2430.575f, 4961.574f, 45.5917f };
			Local_109[0x00000031 /*5*/] = { 2429.889f, 4962.028f, 44.9345f };
			Local_109[0x00000032 /*5*/] = { 2429.26f, 4962.595f, 44.2774f };
			Local_109[0x00000033 /*5*/] = { 2428.691f, 4963.279f, 43.6202f };
			Local_109[0x00000034 /*5*/] = { 2428.073f, 4963.911f, 42.9631f };
			Local_109[0x00000035 /*5*/] = { 2428.239f, 4964.922f, 42.9631f };
			Local_109[0x00000036 /*5*/] = { 2428.961f, 4965.455f, 42.3059f };
			Local_109[0x00000037 /*5*/] = { 2429.45f, 4966.224f, 41.8679f };
			Local_109[0x00000038 /*5*/] = { 2430.073f, 4966.82f, 41.3476f };
			Local_109[0x00000039 /*5*/] = { 2431.097f, 4967.043f, 41.3476f };
			Local_109[0x0000003A /*5*/] = { 2431.89f, 4966.403f, 41.3476f };
			Local_109[0x0000003B /*5*/] = { 2432.768f, 4965.902f, 41.3476f };
			Local_109[0x0000003C /*5*/] = { 2433.776f, 4965.613f, 41.3476f };
			Local_136[0x00000000 /*6*/].f_3 = "Table Flames";
			Local_136[0x00000000 /*6*/] = 0x00000000;
			Local_136[0x00000001 /*6*/].f_3 = "Table Explosion";
			Local_136[0x00000001 /*6*/] = 0x00000000;
			Local_136[0x00000002 /*6*/].f_3 = "House Explosion";
			Local_136[0x00000002 /*6*/] = 0x00000000;
			Local_136[0x00000003 /*6*/].f_3 = "Cam Shake";
			Local_136[0x00000003 /*6*/] = 0x00000000;
			Local_136[0x00000004 /*6*/].f_3 = "Position player";
			Local_136[0x00000004 /*6*/] = 0x00000000;
			Local_136[0x00000005 /*6*/].f_3 = "Slow mo";
			Local_136[0x00000005 /*6*/] = 0x00000000;
			Local_136[0x00000000 /*6*/].f_1 = 0x00000002;
			Local_136[0x00000000 /*6*/].f_2 = 1000f;
			Local_136[0x00000001 /*6*/].f_1 = 0x00000002;
			Local_136[0x00000001 /*6*/].f_2 = 4200f;
			Local_136[0x00000002 /*6*/].f_1 = 0x00000003;
			Local_136[0x00000002 /*6*/].f_2 = 0f;
			Local_136[0x00000003 /*6*/].f_1 = 0x00000003;
			Local_136[0x00000003 /*6*/].f_2 = 0f;
			Local_136[0x00000004 /*6*/].f_1 = 0x00000003;
			Local_136[0x00000004 /*6*/].f_2 = 3200f;
			Local_136[0x00000005 /*6*/].f_1 = 0x00000003;
			Local_136[0x00000005 /*6*/].f_2 = 700f;
			Local_137[0x00000000 /*18*/] = { 2454.83f, 4974.96f, 46.4489f };
			Local_137[0x00000000 /*18*/].f_3 = { 2.9627f, 0.077f, 115.874f };
			Local_137[0x00000000 /*18*/].f_E = 39.703f;
			Local_137[0x00000000 /*18*/].f_6 = { 2454.41f, 4974.93f, 46.4691f };
			Local_137[0x00000000 /*18*/].f_9 = { 2.6238f, 0.077f, 114.001f };
			Local_137[0x00000000 /*18*/].f_F = 39.703f;
			Local_137[0x00000000 /*18*/].f_C = 2500f;
			Local_137[0x00000000 /*18*/].f_D = 2500f;
			Local_137[0x00000000 /*18*/].f_10 = 0x00000000;
			Local_137[0x00000000 /*18*/].f_11 = 0x00000012;
			Local_137[0x00000001 /*18*/] = { 2435.41f, 4960.94f, 45.9568f };
			Local_137[0x00000001 /*18*/].f_3 = { 6.677f, 0f, -49.4853f };
			Local_137[0x00000001 /*18*/].f_E = 58.9114f;
			Local_137[0x00000001 /*18*/].f_6 = { 2435.11f, 4960.62f, 45.9441f };
			Local_137[0x00000001 /*18*/].f_9 = { 6.3596f, 0f, -44.8248f };
			Local_137[0x00000001 /*18*/].f_F = 58.9114f;
			Local_137[0x00000001 /*18*/].f_C = 3200f;
			Local_137[0x00000001 /*18*/].f_D = 1900f;
			Local_137[0x00000001 /*18*/].f_10 = 0x00000000;
			Local_137[0x00000001 /*18*/].f_11 = 0x00000022;
			Local_137[0x00000002 /*18*/] = { 2434.77f, 4969.56f, 42.3654f };
			Local_137[0x00000002 /*18*/].f_3 = { 5.2773f, -0.1511f, 132.167f };
			Local_137[0x00000002 /*18*/].f_E = 35.1297f;
			Local_137[0x00000002 /*18*/].f_6 = { 2434.66f, 4969.68f, 42.3657f };
			Local_137[0x00000002 /*18*/].f_9 = { 5.2773f, -0.1511f, 132.167f };
			Local_137[0x00000002 /*18*/].f_F = 35.1297f;
			Local_137[0x00000002 /*18*/].f_C = 3500f;
			Local_137[0x00000002 /*18*/].f_D = 4500f;
			Local_137[0x00000002 /*18*/].f_10 = 0x00000003;
			Local_137[0x00000002 /*18*/].f_11 = 0x00000031;
			Local_137[0x00000003 /*18*/] = { 2472.1f, 4943.1f, 45.3f };
			Local_137[0x00000003 /*18*/].f_3 = { 6f, 0f, 25.3f };
			Local_137[0x00000003 /*18*/].f_E = 33.1297f;
			Local_137[0x00000003 /*18*/].f_6 = { 2472.1f, 4943.1f, 45.3f };
			Local_137[0x00000003 /*18*/].f_9 = { 5.5f, 0f, 35.6f };
			Local_137[0x00000003 /*18*/].f_F = 33.1297f;
			Local_137[0x00000003 /*18*/].f_C = 3500f;
			Local_137[0x00000003 /*18*/].f_D = 3500f;
			Local_137[0x00000003 /*18*/].f_10 = 0x00000000;
			Local_137[0x00000003 /*18*/].f_11 = 0xFFFFFFFF;
			fLocal_157 = 0.06f;
			func_172(0x00000001);
			vLocal_142[0x00000000 /*3*/] = { 2432.74f, 4963.43f, 41.35f };
			vLocal_142[0x00000001 /*3*/] = { 2432.02f, 4962.61f, 41.35f };
			vLocal_142[0x00000002 /*3*/] = { 2431.06f, 4961.83f, 41.35f };
			vLocal_142[0x00000003 /*3*/] = { 2430.84f, 4961.08f, 42.09f };
			vLocal_142[0x00000004 /*3*/] = { 2430.53f, 4962.47f, 42f };
			vLocal_142[0x00000005 /*3*/] = { 2430.81f, 4961.1f, 42.8f };
			vLocal_142[0x00000006 /*3*/] = { 2429.74f, 4961.98f, 42.32f };
			vLocal_142[0x00000007 /*3*/] = { 2433.5f, 4966.76f, 41.35f };
			vLocal_142[0x00000008 /*3*/] = { 2433.24f, 4967.42f, 41.35f };
			vLocal_142[0x00000009 /*3*/] = { 2433.15f, 4967.43f, 42.19f };
			vLocal_142[0x0000000A /*3*/] = { 2432.53f, 4967.89f, 42.4f };
			vLocal_142[0x0000000B /*3*/] = { 2432.48f, 4969.07f, 42.19f };
			vLocal_142[0x0000000C /*3*/] = { 2433.36f, 4969.44f, 42.31f };
			vLocal_130[0x00000000 /*3*/] = { 2552.692f, 4978.566f, 45.32309f };
			vLocal_130[0x00000001 /*3*/] = { 2562.534f, 5013.502f, 47.46302f };
			vLocal_130[0x00000002 /*3*/] = { 2553.885f, 4945.661f, 47.49305f };
			vLocal_130[0x00000003 /*3*/] = { 2515.545f, 4936.428f, 42.88382f };
			vLocal_130[0x00000004 /*3*/] = { 2497.318f, 4967.818f, 43.59557f };
			vLocal_130[0x00000005 /*3*/] = { 2481.376f, 4951.766f, 43.99859f };
			vLocal_130[0x00000006 /*3*/] = { 2522.044f, 4956.372f, 43.71605f };
			vLocal_130[0x00000007 /*3*/] = { 2529.048f, 4985.627f, 43.86848f };
			vLocal_130[0x00000008 /*3*/] = { 2502.503f, 4987.245f, 46.62669f };
			vLocal_130[0x00000009 /*3*/] = { 2464.891f, 4939.949f, 44.25646f };
			vLocal_130[0x0000000A /*3*/] = { 2447.16f, 4940.272f, 44.15766f };
			vLocal_130[0x0000000B /*3*/] = { 2376.537f, 4946.399f, 41.77232f };
			vLocal_130[0x0000000C /*3*/] = { 2395.232f, 4995.63f, 44.68909f };
			vLocal_130[0x0000000D /*3*/] = { 2419.819f, 4991.936f, 45.36976f };
			vLocal_130[0x0000000E /*3*/] = { 2436.319f, 5011.725f, 45.84694f };
			vLocal_130[0x0000000F /*3*/] = { 2407.765f, 5023.079f, 47.77091f };
			vLocal_130[0x00000010 /*3*/] = { 2479.016f, 5028.829f, 42.98806f };
			vLocal_130[0x00000011 /*3*/] = { 2434.704f, 5042.713f, 45.34462f };
			vLocal_130[0x00000012 /*3*/] = { 2513.93f, 5039.333f, 51.02121f };
			vLocal_130[0x00000013 /*3*/] = { 2477.882f, 4986.437f, 44.99511f };
			vLocal_130[0x00000014 /*3*/] = { 2450.058f, 5011.858f, 44.89032f };
			func_209(&Local_119, &uLocal_203, cLocal_131, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 0x00000001);
			func_367(&vLocal_120, "ONEILGUARD4", 0x00000005, "ONEILGUARD1");
			func_367(&vLocal_121, "ONEILGUARD4", 0x00000005, "ONEILGUARD1");
			func_367(&vLocal_125, "CHI2_nope", 0x00000008, "ONEILGUARD1");
			func_367(&vLocal_122, "SEETREVOR", 0x00000003, "chin2goon1");
			func_367(&vLocal_123, "CHI2_hear", 0x00000008, "ONEILGUARD1");
			func_367(&vLocal_124, "CHI2_hear", 0x00000008, "ONEILGUARD1");
			func_367(&vLocal_126, "ONEILGUARD3", 0x00000005, "ONEILGUARD1");
			func_367(&vLocal_127, "ONEILGUARD2", 0x00000005, "ONEILGUARD1");
			func_367(&vLocal_128, "ONEILGUARD4", 0x00000005, "ONEILGUARD1");
			func_367(&vLocal_129, "GOON2TREV", 0x00000004, "CHIN2goon2");
			func_32(0x00000006, 0x00000001);
			func_32(0x00000019, 0x00000001);
			iLocal_144 = unk_0x4EF27AB24893425F();
			unk_0xAB8E2DDC7AF955E0(joaat("bodhi2"), 0x00000001);
			unk_0xF63400DBE3303D26("TAOGROUP", &iLocal_118);
			unk_0x0E2400AB9174FA81(0x00000001, iLocal_118, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, iLocal_118);
			func_17(0x00000000, 0xFFFFFFFF);
			unk_0x2723524E448F4BDD("Chinese2_Lunch", 0x00000000);
			unk_0x2723524E448F4BDD("CHINESE2_HILLBILLIES", 0x00000000);
			if (func_366())
			{
				iVar0 = func_365();
				if (Global_16AF9 == 0x00000001)
				{
					iVar0++;
				}
				switch (iVar0)
				{
					case 0x00000000:
						func_273(0x00000002, 0x00000001, 0x00000000);
						unk_0x82E51BCA72537B6C(0x000003E8);
						break;
					
					case 0x00000001:
						if (Global_16AF9 == 0x00000001)
						{
							func_273(0x00000003, 0x00000001, 0x00000000);
						}
						else
						{
							func_273(0x00000004, 0x00000001, 0x00000000);
							unk_0x82E51BCA72537B6C(0x000003E8);
						}
						break;
					
					case 0x00000002:
						func_273(0x00000006, 0x00000001, 0x00000000);
						unk_0x82E51BCA72537B6C(0x000003E8);
						break;
					
					case 0x00000003:
						func_273(0x00000007, 0x00000001, 0x00000000);
						unk_0x82E51BCA72537B6C(0x000003E8);
						break;
					
					case 0x00000004:
						if (Global_16AF9 == 0x00000001)
						{
							func_273(0x00000008, 0x00000001, 0x00000000);
						}
						else
						{
							func_273(0x00000009, 0x00000001, 0x00000000);
							unk_0x82E51BCA72537B6C(0x000003E8);
						}
						break;
					
					case 0x00000005:
						func_273(0x0000000A, 0x00000001, 0x00000000);
						unk_0x82E51BCA72537B6C(0x000003E8);
						func_150();
						break;
				}
			}
			else if (func_147(0x00000000))
			{
				func_273(0x00000001, 0x00000000, 0x00000001);
			}
			else
			{
				func_182(0x0000000B);
			}
			break;
	}
}

void func_273(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	func_360(0x00000003);
	func_32(0x00000006, 0x00000000);
	iLocal_150 = 0x00000000;
	iLocal_149 = iParam0;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			unk_0x523BCC9DC80CD82F(joaat("ig_old_man2"));
			unk_0x523BCC9DC80CD82F(joaat("ig_old_man1a"));
			unk_0x523BCC9DC80CD82F(joaat("ig_janet"));
			unk_0x523BCC9DC80CD82F(joaat("ig_taocheng"));
			unk_0x523BCC9DC80CD82F(joaat("ig_taostranslator"));
			unk_0xAE1670DD12E839C3("chinese_2_int", 0x00000008);
			while (((((!unk_0xB87F6CF6E5628C67(joaat("ig_old_man2")) || !unk_0xB87F6CF6E5628C67(joaat("ig_old_man1a"))) || !unk_0xB87F6CF6E5628C67(joaat("ig_janet"))) || !unk_0xB87F6CF6E5628C67(joaat("ig_taocheng"))) || !unk_0xB87F6CF6E5628C67(joaat("ig_taostranslator"))) || !unk_0x62A1F4500E8F07E0())
			{
				func_28(0x00000143, 0x00000001);
			}
			while (!func_357(&(Local_113[0x0000000B /*33*/]), 0x00000015, 1985.666f, 3052.661f, 46.2151f, 0x00000000, 0x00000001))
			{
				SYSTEM::WAIT(0x00000000);
			}
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1992.878f, 3057.846f, 46.0568f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 311f);
			unk_0x64F9F278AB9DCA2C(Local_113[0x0000000B /*33*/], 0x00000009, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				func_356(1992.878f, 3057.846f, 46.0568f, 311f, 0x00000001, 0x00000000);
			}
			else
			{
				if (func_74(iLocal_144))
				{
					unk_0xA47B46945FF6DE74(iLocal_144, 1994.387f, 3061.94f, 46.0491f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(iLocal_144, 50.7724f);
				}
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 0x3F800000);
				unk_0x90CECE08EA8E77CC(1992.878f, 3057.846f, 46.0568f);
			}
			unk_0x7D6CA5F52B3748BF(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			unk_0x10F3BFFADF2CE3DA(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
			unk_0x536F1BE96C726C4B(1984.997f, 3052.905f, 46.8556f, 10f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			func_285(0x00000001, 0x00000000, bParam2);
			unk_0x523BCC9DC80CD82F(joaat("ig_taocheng"));
			unk_0x523BCC9DC80CD82F(joaat("ig_taostranslator"));
			unk_0x523BCC9DC80CD82F(joaat("ig_old_man1a"));
			unk_0x523BCC9DC80CD82F(joaat("ig_old_man2"));
			unk_0x523BCC9DC80CD82F(joaat("ig_janet"));
			unk_0x3F423BF5B8125A50("misschinese2_crystalmaze");
			while (((((!unk_0xB87F6CF6E5628C67(joaat("ig_taocheng")) || !unk_0xB87F6CF6E5628C67(joaat("ig_taostranslator"))) || !unk_0xB87F6CF6E5628C67(joaat("ig_old_man1a"))) || !unk_0xB87F6CF6E5628C67(joaat("ig_old_man2"))) || !unk_0xB87F6CF6E5628C67(joaat("ig_janet"))) || !unk_0xB4AE0788C1587752("misschinese2_crystalmaze"))
			{
				func_28(0x00000003, 0x00000001);
			}
			if (!bParam1)
			{
				if (func_74(iLocal_144))
				{
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_144, 0xFFFFFFFF);
					unk_0xA47B46945FF6DE74(iLocal_144, 1994.387f, 3061.94f, 46.0491f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(iLocal_144, 50.7724f);
				}
				else
				{
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1992.878f, 3057.846f, 46.0568f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 311f);
				}
			}
			func_28(0x00000055, 0x00000001);
			func_166(0x00000002, 0x00000029, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
			while (func_175(0x00000002, 0x00000029) != 0x00000384)
			{
				func_166(0x00000002, 0x00000029, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
				func_28(0x00000004, 0x00000001);
			}
			func_32(0x0000001A, 0x00000000);
			if (bParam1)
			{
				if (func_74(iLocal_144))
				{
					func_282(iLocal_144, 0xFFFFFFFF, 0x00000001);
				}
				else
				{
					func_282(0x00000000, 0xFFFFFFFF, 0x00000001);
				}
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				func_356(2574.049f, 4981.824f, 50.44f, 50f, 0x00000001, 0x00000000);
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2570.543f, 4982.002f, 50.6795f, 0x00000000, 0x00000001, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 98.21f);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 0x3F800000);
				unk_0x90CECE08EA8E77CC(2458.508f, 4984.504f, 52.3461f);
				func_28(0x00000143, 0x00000001);
			}
			unk_0xC83E7A5E408DF68C(0x00000001);
			unk_0xFF42993F8A095C58(0x00000001);
			unk_0x51B096AAC60548C1(0f);
			func_285(0x00000000, 0x00000000, 0x00000000);
			unk_0x0CDF80057190977A("chinese2_farmhouse_cutscene");
			func_28(0x00000022, 0x00000001);
			func_32(0x00000005, 0x00000000);
			while (func_30(0x00000005))
			{
				func_3();
				func_28(0x00000005, 0x00000001);
			}
			while (!func_232(0x00000001, 0x00000000, 0x00000001))
			{
				func_28(0x00000006, 0x00000001);
			}
			func_15("CHN2_MISSION_START", 0x00000001, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(0x00000007, 0x00000001);
			}
			while (!unk_0x23239EF74F22427E())
			{
				func_28(0x0000036E, 0x00000001);
			}
			if (bParam1)
			{
				func_282(0x00000000, 0xFFFFFFFF, 0x00000001);
			}
			func_166(0x0000000A, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
			while (!func_153(0x0000000A, 0x00000005))
			{
				func_166(0x0000000A, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
				func_28(0x000000EA, 0x00000001);
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				func_356(func_281(), func_280(), 0x00000001, 0x00000000);
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2570.543f, 4982.002f, 50.6795f, 0x00000000, 0x00000001, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 98.21f);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 0x3F800000);
				unk_0x90CECE08EA8E77CC(2570.543f, 4982.002f, 50.6795f);
				func_28(0x00000143, 0x00000001);
			}
			unk_0xC83E7A5E408DF68C(0x00000001);
			unk_0xFF42993F8A095C58(0x00000001);
			func_285(0x00000000, 0x00000001, 0x00000000);
			unk_0x51B096AAC60548C1(0f);
			func_32(0x00000005, 0x00000000);
			while (func_30(0x00000005))
			{
				func_3();
				func_28(0x00000008, 0x00000001);
			}
			iVar0 = func_279(0x00000002);
			if (iVar0 != 0x00000000 && iVar0 != joaat("weapon_unarmed"))
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iVar0, 0x00000001);
				}
			}
			func_15("CHN2_MISSION_START", 0x00000001, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(0x00000009, 0x00000001);
			}
			if (bParam1)
			{
				if ((unk_0xC844350D5D58C99A(iLocal_144) && unk_0xDF1306B443CD3D15(iLocal_144, 0x00000000)) && func_278())
				{
					func_282(iLocal_144, 0xFFFFFFFF, 0x00000001);
					if (unk_0xDF1306B443CD3D15(iLocal_144, 0x00000000))
					{
						unk_0x56FDC9ADE35F7DB0(iLocal_144, 0x00000001, 0x00000001, 0x00000000);
						if (unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iLocal_144)))
						{
							unk_0x1AEF7184B203A58D(iLocal_144, 15f);
						}
						if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iLocal_144)))
						{
							unk_0x873BCADC75FF6D20(iLocal_144);
							unk_0x37806EBF326ECEE9(iLocal_144, 1f, 1f, 1f);
						}
					}
				}
				else
				{
					func_282(0x00000000, 0xFFFFFFFF, 0x00000001);
				}
			}
			if (unk_0x0EB28750412C3A5A(func_281(), 2570.538f, 4982.031f, 50.6239f, 0x00000001) < 10f)
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2570.538f, 4982.031f, 50.6239f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 98f);
			}
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				func_276(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
			}
			break;
		
		case 0x00000005:
			unk_0xC83E7A5E408DF68C(0x00000001);
			unk_0xFF42993F8A095C58(0x00000001);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2572.01f, 4981.678f, 50.6698f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 90.3911f);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 0x3F800000);
			unk_0x51B096AAC60548C1(0f);
			func_32(0x00000005, 0x00000000);
			func_172(0x00000001);
			while (func_30(0x00000005))
			{
				func_3();
				func_28(0x0000000A, 0x00000001);
			}
			func_285(0x00000000, 0x00000000, 0x00000000);
			func_15("CHN2_TO_HOUSE_RESTART", 0x00000000, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(0x0000000B, 0x00000001);
			}
			func_275(0x00000000, 0x00000001, 0x00000001);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(-7f, 0x3F800000);
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				func_356(2450.871f, 4960.999f, 44.3759f, 351f, 0x00000001, 0x00000000);
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2450.871f, 4960.999f, 44.3759f, 0x00000000, 0x00000001, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 351.3911f);
				unk_0x90CECE08EA8E77CC(2432.982f, 4964.823f, 41.3476f);
				func_28(0x00000145, 0x00000001);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 0x3F800000);
			}
			func_285(0x00000000, 0x00000000, 0x00000000);
			unk_0xC83E7A5E408DF68C(0x00000001);
			unk_0xFF42993F8A095C58(0x00000001);
			SYSTEM::WAIT(0x00000001);
			func_32(0x00000005, 0x00000000);
			func_172(0x00000001);
			while (func_30(0x00000005))
			{
				func_3();
				func_28(0x0000000C, 0x00000001);
			}
			unk_0x51B096AAC60548C1(0f);
			func_15("CHN2_ENTER_HOUSE_RESTART", 0x00000000, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(0x0000000D, 0x00000001);
			}
			func_275(0x00000000, 0x00000001, 0x00000001);
			if (bParam1)
			{
				func_282(0x00000000, 0xFFFFFFFF, 0x00000001);
			}
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				func_276(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
			}
			break;
		
		case 0x00000007:
			if (bParam1)
			{
				func_356(2435.319f, 4966.153f, 41.3476f, 104.2964f, 0x00000001, 0x00000000);
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2435.319f, 4966.153f, 41.3476f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 104.2964f);
				unk_0x90CECE08EA8E77CC(2432.982f, 4964.823f, 41.3476f);
				SYSTEM::WAIT(0x00000001);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 0x3F800000);
			}
			unk_0xC83E7A5E408DF68C(0x00000001);
			unk_0xFF42993F8A095C58(0x00000001);
			func_172(0x00000001);
			func_285(0x00000000, 0x00000000, 0x00000000);
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
			iLocal_179 = unk_0xFBD08BECC9B87937(2432.982f, 4964.823f, 41.3476f);
			while (!unk_0x31609A585163CBAC(iLocal_179))
			{
				iLocal_179 = unk_0xFBD08BECC9B87937(2432.982f, 4964.823f, 41.3476f);
				func_28(0x0000000E, 0x00000001);
			}
			while (!unk_0xBD307E66C0669BFC(iLocal_179))
			{
				func_28(0x0000000F, 0x00000001);
			}
			unk_0x53FD9FD65A68DF82(iLocal_179, 0x00000001);
			unk_0x25BB71BA267FE042(iLocal_179);
			iLocal_179 = 0x00000000;
			unk_0x6D0C93EE4FBA9307(joaat("weapon_petrolcan"), 0x0000001F, 0x00000000);
			unk_0x3F423BF5B8125A50("misschinese2_crystalmaze");
			while (!unk_0x1787731C4D1D6B19(joaat("weapon_petrolcan")) || !unk_0xB4AE0788C1587752("misschinese2_crystalmaze"))
			{
				func_28(0x00000010, 0x00000001);
			}
			func_32(0x0000000B, 0x00000000);
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
			func_32(0x00000005, 0x00000000);
			while (func_30(0x00000005))
			{
				func_3();
				func_28(0x00000011, 0x00000001);
			}
			unk_0x51B096AAC60548C1(0f);
			unk_0x523BCC9DC80CD82F(joaat("blazer"));
			while (!unk_0xB87F6CF6E5628C67(joaat("blazer")))
			{
				func_28(0x00000012, 0x00000001);
			}
			func_274(0x00000000, 0x00000007, 0x00000001);
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0x00001194, 0x00000001, 0x00000001);
			func_169(0x00000000);
			func_15("CHN2_PETROL_RESTART", 0x00000000, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(0x00000013, 0x00000001);
			}
			if (bParam1)
			{
				func_282(0x00000000, 0xFFFFFFFF, 0x00000001);
			}
			break;
		
		case 0x00000008:
			if (bParam1)
			{
				func_356(2453.124f, 4952.071f, 45.125f, 285f, 0x00000001, 0x00000000);
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2453.124f, 4952.071f, 45.125f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 285.8625f);
				unk_0x90CECE08EA8E77CC(2453.124f, 4952.071f, 45.125f);
				SYSTEM::WAIT(0x00000001);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 0x3F800000);
			}
			func_285(0x00000000, 0x00000000, 0x00000000);
			if (!unk_0x23239EF74F22427E())
			{
				unk_0x0CDF80057190977A("chinese2_explosion_cutscene");
			}
			unk_0xC83E7A5E408DF68C(0x00000001);
			unk_0xFF42993F8A095C58(0x00000001);
			unk_0x523BCC9DC80CD82F(joaat("blazer"));
			while (!unk_0xB87F6CF6E5628C67(joaat("blazer")))
			{
				func_28(0x00000014, 0x00000001);
			}
			iLocal_146 = unk_0x122AAB0B1D6F55AD(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 0x00000001, 0x00000001, 0x00000000);
			unk_0xB9FD7450C0DAB575(iLocal_146, 0x40A00000);
			iLocal_179 = unk_0xFBD08BECC9B87937(2432.982f, 4964.823f, 41.3476f);
			while (!unk_0x31609A585163CBAC(iLocal_179))
			{
				iLocal_179 = unk_0xFBD08BECC9B87937(2432.982f, 4964.823f, 41.3476f);
				func_28(0x00000015, 0x00000001);
			}
			while (!unk_0xBD307E66C0669BFC(iLocal_179))
			{
				func_28(0x00000016, 0x00000001);
			}
			iLocal_166 = 0x00000003;
			unk_0x53FD9FD65A68DF82(iLocal_179, 0x00000001);
			unk_0x25BB71BA267FE042(iLocal_179);
			iLocal_179 = 0x00000000;
			while (!unk_0xB87F6CF6E5628C67(joaat("blazer")) || !unk_0x23239EF74F22427E())
			{
				func_28(0x00000018, 0x00000001);
			}
			if (bParam1)
			{
				func_282(0x00000000, 0xFFFFFFFF, 0x00000001);
			}
			while (!unk_0xE3934829A331AF92("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0x00000000))
			{
				func_28(0x00000017, 0x00000001);
			}
			break;
		
		case 0x00000009:
			if (bParam1)
			{
				func_356(2472.3f, 4948.181f, 44.0937f, 220f, 0x00000001, 0x00000000);
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2472.3f, 4948.181f, 44.0937f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 220.8569f);
				unk_0x90CECE08EA8E77CC(2453.124f, 4952.071f, 45.125f);
				SYSTEM::WAIT(0x00000001);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 0x3F800000);
			}
			func_31(0x00000006, 0x00000000);
			unk_0xC83E7A5E408DF68C(0x00000003);
			unk_0xFF42993F8A095C58(0x00000003);
			unk_0x523BCC9DC80CD82F(joaat("blazer"));
			while ((!unk_0xB87F6CF6E5628C67(joaat("blazer")) || !unk_0xAE317D00A5A55DF6("FARMHOUSE_FIRE", 0x00000000, 0xFFFFFFFF)) || !unk_0xAE317D00A5A55DF6("FARMHOUSE_FIRE_BG", 0x00000000, 0xFFFFFFFF))
			{
				func_28(0x00000019, 0x00000001);
			}
			iLocal_146 = unk_0x122AAB0B1D6F55AD(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 0x00000001, 0x00000001, 0x00000000);
			unk_0xB9FD7450C0DAB575(iLocal_146, 0x40A00000);
			func_285(0x00000000, 0x00000000, 0x00000000);
			unk_0x90CECE08EA8E77CC(2453.124f, 4952.071f, 45.125f);
			func_19(0x00000032, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			func_19(0x00000033, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			func_19(0x00000034, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			func_19(0x00000035, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			func_19(0x00000036, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
			func_19(0x00000037, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
			uLocal_173 = unk_0x57651D42225429CC(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
			while (!unk_0xB39672D8C1F6BB48(uLocal_173))
			{
				func_28(0x000000A1, 0x00000001);
			}
			unk_0xCADC8175C61F28E5(uLocal_173, 0x00000009);
			unk_0x77ADAEFF81EAE1E4(2457.15f, 4968.79f, 48.677f, 100f, 0x39918412, 0x00000000);
			unk_0x77ADAEFF81EAE1E4(2457.15f, 4968.79f, 48.677f, 100f, 0x0EBECAD2, 0x00000000);
			unk_0x77ADAEFF81EAE1E4(2457.15f, 4968.79f, 48.677f, 100f, 0xF139365E, 0x00000000);
			if (bParam1)
			{
				func_282(0x00000000, 0xFFFFFFFF, 0x00000001);
			}
			break;
		
		case 0x0000000A:
			func_31(0x00000006, 0x00000000);
			if (bParam1)
			{
				func_356(2625.776f, 4802.217f, 32.5747f, 206f, 0x00000001, 0x00000000);
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2625.776f, 4802.217f, 32.5747f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 206.4254f);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 0x3F800000);
				unk_0x90CECE08EA8E77CC(2625.776f, 4802.217f, 32.5747f);
			}
			unk_0xC83E7A5E408DF68C(0x00000003);
			unk_0xFF42993F8A095C58(0x00000003);
			unk_0xCADC8175C61F28E5(uLocal_173, 0x00000009);
			func_19(0x00000032, 0x00000002, 0x00000000, 0x00000001, 0x00000000);
			func_19(0x00000033, 0x00000002, 0x00000000, 0x00000001, 0x00000000);
			func_19(0x00000034, 0x00000002, 0x00000000, 0x00000001, 0x00000000);
			func_19(0x00000035, 0x00000002, 0x00000000, 0x00000001, 0x00000000);
			func_19(0x00000036, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
			func_19(0x00000037, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
			if (bParam1)
			{
				func_282(0x00000000, 0xFFFFFFFF, 0x00000001);
			}
			break;
	}
}

void func_274(int iParam0, int iParam1, int iParam2)
{
	Local_389[iParam0 /*4*/].f_1 = iParam2;
	Local_389[iParam0 /*4*/] = iParam1;
}

void func_275(int iParam0, int iParam1, int iParam2)
{
	Local_390[iParam0 /*7*/].f_1 = iParam2;
	Local_390[iParam0 /*7*/] = iParam1;
}

Vector3 func_276(int iParam0, vector3 vParam1)
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (unk_0xE82754C349C7B581(vParam1, &uVar0, 0x00000000, 0x00000000))
	{
		vParam1.z = uVar0;
	}
	if (func_277(iParam0))
	{
		unk_0xA47B46945FF6DE74(iParam0, vParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	}
	return vParam1;
}

bool func_277(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

bool func_278()
{
	return Global_19AE3.f_B4A.f_8;
}

var func_279(int iParam0)
{
	if (Global_181DD > 0x00000000)
	{
		return Global_19AE3.f_15[iParam0];
	}
	return Global_18F3B.f_15[iParam0];
}

float func_280()
{
	return Global_19AE3.f_B44.f_3;
}

Vector3 func_281()
{
	return Global_19AE3.f_B44;
}

void func_282(int iParam0, int iParam1, int iParam2)
{
	if (func_366() && func_284())
	{
		while (Global_181B3 != 0x00000006)
		{
			SYSTEM::WAIT(0x00000000);
		}
		unk_0x21387C9EECC2B220(0x00000000);
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
			}
		}
		if (iParam0 != 0x00000000)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC844350D5D58C99A(iParam0))
				{
					if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
					{
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0x00000000))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iParam0, iParam1);
							unk_0xEF6276132B396452(0f, 0x3F800000);
							unk_0x2FB9A57162E54BAB(0f);
							SYSTEM::WAIT(0x00000000);
						}
					}
				}
			}
		}
		if (iParam2 == 0x00000001)
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			}
		}
		unk_0x17EFA7496495F972();
		func_283(0x00000000);
	}
}

void func_283(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 0x0000000D);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x0000000D);
	}
}

bool func_284()
{
	return unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D);
}

void func_285(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (func_355())
		{
			if (func_352(func_354(), 10f, 20f, 9f, 0x00000001))
			{
				func_351();
				while (!func_350())
				{
					func_28(0x0000D4B7, 0x00000001);
				}
				if (bParam2)
				{
					iLocal_144 = func_349(1994.387f, 3061.94f, 46.0491f, 50f);
				}
				else
				{
					iLocal_144 = func_349(0f, 0f, 0f, 0f);
				}
			}
		}
	}
	else if (func_348())
	{
		func_346();
		while (!func_345())
		{
			func_28(0x00000220, 0x00000001);
		}
		iLocal_144 = func_286(0f, 0f, 0f, 0f);
	}
	if (bParam1)
	{
		if (func_278())
		{
			if (unk_0xDF1306B443CD3D15(iLocal_144, 0x00000000))
			{
				unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_144, 0xFFFFFFFF);
			}
		}
	}
}

int func_286(vector3 vParam0, float fParam1)
{
	return func_287(&(Global_19AE3.f_B4A), vParam0, fParam1, 0x00000000);
}

int func_287(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_344(uParam0))
	{
		if (func_168(vParam1, 0f, 0f, 0f, 0x00000000))
		{
			vParam1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_C.f_42 == joaat("monster") || uParam0->f_C.f_42 == joaat("marshall"))
		{
			if (unk_0x0399732A9EBC368E(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0x00000000, 0x00000001))
			{
				vParam1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_343(uParam0))
		{
			unk_0x536F1BE96C726C4B(vParam1, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			func_342(vParam1, 5f, 0x00000000);
			iVar0 = unk_0x122AAB0B1D6F55AD(uParam0->f_C.f_42, vParam1, fParam2, 0x00000001, 0x00000001, 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x08841CDB215AE18F(iVar0, vParam1, 0x00000000, 0x00000000, 0x00000001);
				}
				func_325(iVar0, &(uParam0->f_C), 0x00000000, 0x00000001);
				bVar2 = 0x00000001;
				if (unk_0xA7082C42B8809BF2(uParam0->f_C.f_42) || unk_0x83496B932152D4D4(uParam0->f_C.f_42))
				{
					if (!unk_0xA267CBB20C26B1B9(vParam1.x, vParam1.y, (vParam1.z + 30f), vParam1.x, vParam1.y, (vParam1.z - 30f), &uVar3))
					{
						bVar2 = 0x00000000;
					}
				}
				if (bVar2)
				{
					unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
				}
				if (uParam0->f_7 == 0x00000001)
				{
					if (bParam3)
					{
						if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iVar0)))
						{
							func_324(uParam0->f_B, 0x00000001);
						}
						else if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar0)))
						{
							func_324(uParam0->f_B, 0x00000002);
						}
					}
					unk_0x316958DDB94DF3FC(iVar0, 0x00000000);
					unk_0x626D5ADA3EFAE431(iVar0, 0x00000000);
					unk_0x44A200C9B6E1CEA6(iVar0, 0x00000001);
					func_323(iVar0, uParam0->f_B);
				}
				else if ((!func_321(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_A) && unk_0x7F8A39872A07D2CE(unk_0xBB0808A181D4745C(), "startup_positioning"))
				{
					iVar4 = func_320(iVar0);
					if (iVar4 == 0xFFFFFFFF)
					{
						uParam0->f_A = 0x00000000;
					}
					else
					{
						func_313(iVar4);
					}
				}
				if (((Global_181B8 != 0x0000000D && Global_181B8 != 0x0000000A) && Global_181B8 != 0x0000000B) && Global_181B8 != 0x0000000C)
				{
					if (unk_0x12AB0310C2281427(&(Global_181B8.f_3)) == Global_12A8D)
					{
						if (uParam0->f_C.f_42 == Global_1B416.f_7FE8.f_45[0x00000015 /*78*/].f_42)
						{
							func_310(0x00000018, 0x00000000);
							func_313(0x00000018);
						}
					}
				}
				if (uParam0->f_9 == 0x00000001)
				{
					func_288(iVar0, uParam0->f_B);
				}
				unk_0x71199B01895C6202(uParam0->f_C.f_42);
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_288(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_294(iParam0))
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
	func_289(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

void func_289(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_293(uParam1);
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_292(uParam1->f_42))
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
		func_291(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_290(iVar0 + 1));
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

int func_290(int iParam0)
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

int func_291(int iParam0, var uParam1, var uParam2)
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

int func_292(int iParam0)
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

void func_293(var uParam0)
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

int func_294(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_78(iParam0, 0x00000000, 0x00000000)) || func_78(iParam0, 0x00000001, 0x00000000)) || func_78(iParam0, 0x00000002, 0x00000000)) || func_309(iParam0) != 0x00000091) || func_308(iParam0)) || func_307(iParam0)) || func_306(iParam0)) || func_305(iParam0)) || !func_295(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_307(iParam0))
		{
		}
		if (func_307(iParam0))
		{
		}
		if (func_78(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_78(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_78(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_309(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_295(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_296(iParam0, 0x00000000))
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

int func_296(int iParam0, bool bParam1)
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
		if (!func_304())
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
		if ((((!func_303() && !func_302()) && !func_301()) && !func_300()) && !func_304())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_301())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_299(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_297(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_297(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_298())
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

int func_298()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_299(int iParam0)
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

int func_300()
{
	return 0x00000000;
}

int func_301()
{
	return 0x00000001;
}

int func_302()
{
	return 0x00000001;
}

int func_303()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_304()
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

int func_305(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_296(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_306(int iParam0)
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

int func_307(int iParam0)
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

int func_308(int iParam0)
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

int func_309(int iParam0)
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

void func_310(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_312(iParam0, 0x00000000))
		{
			func_311(iParam0, 0x00000001, 0x00000000);
			func_311(iParam0, 0x00000002, 0x00000000);
			func_311(iParam0, 0x00000003, 0x00000000);
			func_311(iParam0, 0x00000004, 0x00000000);
			func_311(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_311(iParam0, 0x00000000, 0x00000000);
	}
}

void func_311(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_7FE8[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_7FE8[iParam0]), iParam1);
	}
}

bool func_312(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

void func_313(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_317(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			bVar0 = 0x00000001;
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xDF1306B443CD3D15(Global_126B1.f_8B[iParam0], 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_126B1.f_8B[iParam0], 0x00000000))
					{
						bVar0 = 0x00000000;
					}
				}
			}
			if (bVar0)
			{
				unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], 0x00000001, 0x00000001);
				unk_0xA954465BA6FDEFE2(&(Global_126B1.f_8B[iParam0]));
			}
		}
		Global_126B1[iParam0] = 0x00000001;
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000D))
		{
			if (((((iParam0 == 0x00000018 && func_312(iParam0, 0x00000000)) && Global_12A3E.f_42 == 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] != 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] > 0x00000003) && (!func_315(0x00000000, Global_126B1.f_22B[0x00000000 /*21*/].f_C) || !func_315(0x00000001, Global_126B1.f_22B[0x00000000 /*21*/].f_C)))
			{
				func_314(&(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]), &Global_12A3E);
				Global_12A8C = Global_1B416.f_7FE8.f_15D7;
			}
			func_310(iParam0, 0x00000000);
		}
	}
}

void func_314(var uParam0, var uParam1)
{
	uParam1->f_42 = uParam0->f_42;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_3B = { uParam0->f_3B };
	uParam1->f_3E = uParam0->f_3E;
	uParam1->f_3F = uParam0->f_3F;
	uParam1->f_40 = uParam0->f_40;
	uParam1->f_41 = uParam0->f_41;
	uParam1->f_4D = uParam0->f_4D;
	uParam1->f_43 = uParam0->f_43;
	uParam1->f_45 = uParam0->f_45;
	uParam1->f_44 = uParam0->f_44;
	uParam1->f_47 = uParam0->f_47;
	uParam1->f_48 = uParam0->f_48;
	uParam1->f_49 = uParam0->f_49;
	uParam1->f_4A = uParam0->f_4A;
	uParam1->f_4B = uParam0->f_4B;
	uParam1->f_4C = uParam0->f_4C;
}

int func_315(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	if (iParam0 < 0x00000000 || iParam0 >= func_316(&(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/])))
	{
		return 0x00000000;
	}
	return func_296(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0x00000000);
}

int func_316(var uParam0)
{
	return *uParam0;
}

int func_317(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0x00000000;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0x00000000;
	uParam0->f_A = 0x00000000;
	uParam0->f_B = 0x00000000;
	uParam0->f_C = 0x00000091;
	uParam0->f_D = 0xFFFFFFFF;
	uParam0->f_E = 0x00000000;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0x00000000:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_318(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_318(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_318(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_318(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_318(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_318(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_318(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_318(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_318(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			break;
		
		case 0x0000000B:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			break;
		
		case 0x0000000C:
			uParam0->f_E = 0x00000000;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000167;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			uParam0->f_E = 0x00000001;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000167;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			uParam0->f_E = 0x00000002;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000167;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			uParam0->f_E = 0x00000003;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000164;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			uParam0->f_E = 0x00000004;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000164;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			uParam0->f_E = 0x00000005;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000164;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			uParam0->f_E = 0x00000006;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000168;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			uParam0->f_E = 0x00000007;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000168;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			uParam0->f_E = 0x00000008;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000168;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000015:
			uParam0->f_E = 0x00000009;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000165;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000016:
			uParam0->f_E = 0x0000000A;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000165;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			uParam0->f_E = 0x0000000B;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000165;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
			iVar1 = (iParam1 - 0x0000001A);
			uParam0->f_E = (0x0000000C + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = (0x00000000 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000001F:
			iVar1 = (iParam1 - 0x0000001D);
			uParam0->f_E = (0x0000000F + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = (0x00000000 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
			iVar1 = (iParam1 - 0x00000020);
			uParam0->f_E = (0x00000012 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = (0x00000000 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000018:
			uParam0->f_E = 0x00000015;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000019:
			uParam0->f_E = 0x00000016;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_A = 0x0000007E;
			uParam0->f_B = 0x0000007E;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000009);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000025:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_A = 0x0000009D;
			uParam0->f_B = 0x0000009D;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000009);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000026:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000027:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000029:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000028:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002A:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002B:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 0x73920F8E;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002C:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002D:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002E:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002F:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000030:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000031:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000032:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000033:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000034:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000035:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000036:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000037:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000038:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000039:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_D = 0x00000134;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003A:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_D = 0x00000194;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003B:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003C:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_304())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 0x00000191;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003D:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_304())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 0x00000191;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003E:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003F:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_D = 0x00000134;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000040:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000041:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000042:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000043:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x0000000A))
	{
		uParam0->f_4 = Global_1B416.f_7FE8.f_45[uParam0->f_E /*78*/].f_42;
		if (iParam1 == 0x0000000E)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_168(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/] };
		}
		if (Global_1B416.f_7FE8.f_78E[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_1B416.f_7FE8.f_78E[uParam0->f_E];
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000013))
	{
		if (!func_168(Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000001 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000014))
	{
		if (!func_168(Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000000 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_318(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_50(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_319(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_319(int iParam0, var uParam1, int iParam2)
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

int func_320(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[iVar0]) && !unk_0x437347B10A200C4B(Global_126B1.f_1E4[iVar0], 0x00000000)) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[iVar0], 0x00000000))
		{
			unk_0x9412F17E127D9759(iParam0, &iVar1, &iVar2);
			unk_0x9412F17E127D9759(Global_126B1.f_1E4[iVar0], &iVar3, &iVar4);
			if (((unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(Global_126B1.f_1E4[iVar0]) && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_126B1.f_1E4[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_321(int iParam0, vector3 vParam1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_322(iParam0, Global_126B1.f_8B[0x00000026], 0x00000000))
			{
				func_313(0x00000026);
				return 0x00000001;
			}
			break;
		
		case 0x73920F8E:
			if (func_322(iParam0, Global_126B1.f_8B[0x0000002B], 0x00000001))
			{
				func_313(0x0000002B);
				return 0x00000001;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &uVar1);
			iVar3 = 0x00000000;
			while (iVar3 <= (iVar2 - 0x00000001))
			{
				if (func_322(iParam0, uVar1[iVar3], 0x00000001) && func_236(unk_0x68F4C0EC296D3901(uVar1[iVar3], 0x00000001), 2136.133f, 4780.563f, 39.9702f, 5f, 0x00000000))
				{
					if ((!bParam2 || func_168(vParam1, 0f, 0f, 0f, 0x00000000)) || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(uVar1[iVar3], 0x00000001), 0x00000001) < 10f)
					{
						unk_0xA954465BA6FDEFE2(&iParam0);
						return 0x00000001;
					}
					else
					{
						return 0x00000000;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x0000000E]) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[0x0000000E], 0x00000000))
			{
				if (unk_0x134B62B726CEC8E6(Global_126B1.f_1E4[0x0000000E]) == joaat("luxor2") && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_126B1.f_1E4[0x0000000E]))
				{
					func_313(0x0000000E);
					return 0x00000001;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x00000014]) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[0x00000014], 0x00000000))
			{
				if (unk_0x134B62B726CEC8E6(Global_126B1.f_1E4[0x00000014]) == joaat("swift2") && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_126B1.f_1E4[0x00000014]))
				{
					func_313(0x00000014);
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_322(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0x00000000)) && unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
	{
		if (bParam2)
		{
			unk_0x9412F17E127D9759(iParam0, &iVar0, &iVar1);
			unk_0x9412F17E127D9759(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
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

void func_323(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (!unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			Global_1774B[iVar0] = iParam0;
			Global_17755[iVar0] = iParam1;
			Global_1775F[iVar0] = unk_0x134B62B726CEC8E6(iParam0);
			if (unk_0x8E39AC3C76C8AA58(Global_1775F[iVar0]))
			{
				Global_1777B[iParam1 /*3*/][0x00000000] = 0xFFFFFFFF;
			}
			else
			{
				Global_1777B[iParam1 /*3*/][0x00000001] = 0xFFFFFFFF;
			}
			iVar0 = 0x00000009;
		}
		if (iVar0 == 0x00000008)
		{
		}
		iVar0++;
	}
}

void func_324(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (iParam0 == 0x00000091 || Global_17755[iVar0] == iParam0)
			{
				if (iParam1 == 0x00000000 || unk_0x134B62B726CEC8E6(Global_1774B[iVar0]) == func_318(iParam0, iParam1))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_1774B[iVar0], 0x00000000))
					{
						unk_0x73270B3C9CC833FD(Global_1774B[iVar0], 0x00000000, 0x00000001);
						unk_0xA954465BA6FDEFE2(&(Global_1774B[iVar0]));
						Global_17755[iVar0] = 0x00000091;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_325(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (!func_334(iParam0))
		{
			if (unk_0x12AB0310C2281427(&(uParam1->f_1)) != 0x00000000)
			{
				unk_0x55A3C4ED4728EA42(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0x00000000 && *uParam1 < unk_0xBCB9B04D4DA658DF())
			{
				unk_0xA22B35B584F0580A(iParam0, *uParam1);
			}
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 0x0000006F;
			uParam1->f_6 = 0x0000006F;
			uParam1->f_7 = 0x0000006F;
		}
		else if (uParam1->f_42 == joaat("casco"))
		{
			iVar0 = 0x00000001;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_290(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_290(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("sandking") || uParam1->f_42 == joaat("sandking2"))
		{
			iVar1 = 0x00000001;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_290(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_290(iVar1 + 1));
			}
		}
		else if (uParam1->f_42 == 0x1446590A || uParam1->f_42 == 0x8B213907)
		{
			iVar2 = 0x00000001;
			while (iVar2 <= 0x00000009)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_290(iVar2)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_290(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_42 == 0x58F77553)
		{
			iVar3 = 0x00000001;
			while (iVar3 <= 0x00000006)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_290(iVar3)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_290(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_42 == 0x4669D038)
		{
			iVar4 = 0x00000001;
			while (iVar4 <= 0x0000000B)
			{
				if (iVar4 != 0x00000009 && iVar4 != 0x0000000A)
				{
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_290(iVar4)))
					{
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_290(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_42 == 0x98F65A5E)
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 0x0000000A) != 0x00000000)
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000000);
			}
		}
		if (uParam1->f_42 == 0x19DD9ED1)
		{
			unk_0xF4FAAFEE2CE3B86C(iParam0, 0x00000000);
			if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000005) != 0xFFFFFFFF)
			{
				unk_0xF4FAAFEE2CE3B86C(iParam0, 0x00000001);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000D))
		{
			unk_0xBC3B1E7E1CC2D15C(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0x231087BDB2AEBD55(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000C))
		{
			unk_0xAA443C33B073D88B(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0xC15818BDC09EC354(iParam0);
		}
		if (uParam1->f_5 != 0xFFFFFFFF && uParam1->f_6 != 0xFFFFFFFF)
		{
			unk_0xC002508A277213DE(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0x00000000)
		{
			uParam1->f_7 = 0x00000000;
		}
		if (uParam1->f_8 < 0x00000000)
		{
			uParam1->f_8 = 0x00000000;
		}
		unk_0x58A0C35FA7CA6162(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000F) || func_333(iParam0)) || (((uParam1->f_3E == 0x00000000 && uParam1->f_3F == 0x00000000) && uParam1->f_40 == 0x00000000) && uParam1->f_9[0x00000014] > 0x00000000)) && func_332())
		{
			uParam1->f_3E = 0x00000000;
			uParam1->f_3F = 0x00000000;
			uParam1->f_40 = 0x00000000;
		}
		else if ((uParam1->f_3E == 0x00000000 && uParam1->f_3F == 0x00000000) && uParam1->f_40 == 0x00000000)
		{
			uParam1->f_3E = 0x000000FF;
			uParam1->f_3F = 0x000000FF;
			uParam1->f_40 = 0x000000FF;
		}
		unk_0x9F0DB8A295EA8513(iParam0, uParam1->f_3E, uParam1->f_3F, uParam1->f_40);
		if (uParam1->f_41 == 0xFFFFFFFF && !func_292(uParam1->f_42))
		{
			unk_0x8BF0BEF985EB6D43(iParam0, 0x00000000);
		}
		else
		{
			unk_0x8BF0BEF985EB6D43(iParam0, 0x00000000);
			unk_0x8BF0BEF985EB6D43(iParam0, uParam1->f_41);
		}
		unk_0xA22F71BBC8173C39(iParam0, !unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x00000009));
		if (bParam2)
		{
			unk_0x71EDC33E5A423750(iParam0, uParam1->f_46);
		}
		unk_0x85654A532F20966B(iParam0, uParam1->f_4A, uParam1->f_4B, uParam1->f_4C);
		unk_0x7726E33AC3B60544(iParam0, 0x00000002, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001C));
		unk_0x7726E33AC3B60544(iParam0, 0x00000003, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001D));
		unk_0x7726E33AC3B60544(iParam0, 0x00000000, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001E));
		unk_0x7726E33AC3B60544(iParam0, 0x00000001, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001F));
		unk_0x750A9DEB80D6992C(iParam0, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000A));
		if (unk_0x579935D850368851(iParam0) > 0x00000001 && uParam1->f_43 >= 0x00000000)
		{
			unk_0x446EA2500F021666(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > 0xFFFFFFFF && uParam1->f_45 < 0x000000FF)
		{
			if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iParam0)))
			{
				if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iParam0)))
				{
					if (uParam1->f_45 == 0x00000006)
					{
						func_331(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_331(iParam0, uParam1->f_45);
				}
			}
		}
		if (unk_0x587993B327460A82(iParam0, 0x00000000))
		{
			if ((uParam1->f_44 == 0x00000000 || uParam1->f_44 == 0x00000003) || uParam1->f_44 == 0x00000005)
			{
				unk_0x429C172A00A5F89B(iParam0, 0x00000001);
			}
			else
			{
				unk_0x821D9A7077DBCDBC(iParam0, 0x00000001);
			}
		}
		if (bParam3)
		{
			func_326(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!unk_0xAFB8495D36825275(uParam1->f_42) && !unk_0xA7082C42B8809BF2(uParam1->f_42))
		{
			iVar5 = 0x00000000;
			while (iVar5 <= 0x0000000B)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_290(iVar5 + 1)))
				{
					if (!unk_0xDD62D560CFE11A27(iParam0, iVar5 + 1))
					{
						unk_0xD3421E391490133B(iParam0, iVar5 + 1, 0x00000000);
					}
				}
				else if (unk_0xDD62D560CFE11A27(iParam0, iVar5 + 1))
				{
					unk_0xD3421E391490133B(iParam0, iVar5 + 1, 0x00000001);
				}
				iVar5++;
			}
		}
		if ((unk_0x134B62B726CEC8E6(iParam0) == joaat("sheava") || unk_0x134B62B726CEC8E6(iParam0) == joaat("omnis")) || unk_0x134B62B726CEC8E6(iParam0) == joaat("le7b"))
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000000) == 0xFFFFFFFF)
			{
				unk_0xD3421E391490133B(iParam0, 0x00000001, 0x00000000);
			}
		}
		if (((unk_0xC41A9202669A24C4(uParam1->f_42) && unk_0xE7BF3A9C4976022F(iParam0)) && !unk_0x4906F8A34E9F4814(iParam0, 0x81BD2ED0)) && !((((Global_440000.f_127B9 == 0x00000006 || Global_440000.f_127B9 == 0x00000007) || Global_440000.f_127B9 == 0x00000012) || Global_440000.f_127B9 == 0x00000013) && Global_440000.f_2 == 0x00000014))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x00000017))
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x00000016))
				{
					unk_0xB58CA658A628ED02(iParam0, 0x00000002);
				}
				else
				{
					unk_0xB58CA658A628ED02(iParam0, 0x00000003);
				}
			}
			else
			{
				unk_0xB58CA658A628ED02(iParam0, 0x00000004);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001B))
		{
			unk_0xA1093ABB024EC9BD(iParam0, "IgnoredByQuickSave", 0x00000001);
		}
		else
		{
			unk_0xA1093ABB024EC9BD(iParam0, "IgnoredByQuickSave", 0x00000000);
		}
	}
}

int func_326(int iParam0, var uParam1, var uParam2)
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
	unk_0xF95FF0A179413A39(*iParam0, 0x00000000);
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 0x00000011 || iVar1 == 0x00000012) || iVar1 == 0x00000013) || iVar1 == 0x00000014) || iVar1 == 0x00000015)
		{
			unk_0x73BEC6F1685574E6(*iParam0, iVar1, (*uParam1)[iVar0] > 0x00000000);
		}
		else if (iVar1 == 0x00000016)
		{
			if ((*uParam1)[iVar0] > 0x00000000)
			{
				unk_0x73BEC6F1685574E6(*iParam0, iVar1, 0x00000001);
				if ((*uParam1)[iVar0] == 0x00000001)
				{
					unk_0x0CAC3E53DC3F794F(*iParam0, 0x000000FF);
				}
				else
				{
					unk_0x0CAC3E53DC3F794F(*iParam0, ((*uParam1)[iVar0] - 0x00000002));
				}
			}
			else
			{
				unk_0x73BEC6F1685574E6(*iParam0, iVar1, 0x00000000);
			}
		}
		else if (unk_0x0ECB5CA5140957AD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 0x00000001))
		{
			unk_0x7AFDC9F56E7BB635(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0x00000000)
			{
				if (iVar0 == 0x00000017)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 0x00000001), (*uParam2)[0x00000000] > 0x00000000);
				}
				else if (iVar0 == 0x00000018)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 0x00000001), (*uParam2)[0x00000001] > 0x00000000);
				}
				else
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 0x00000001), 0x00000000);
				}
			}
		}
		iVar0++;
	}
	if (func_330(unk_0x134B62B726CEC8E6(*iParam0), 0x00000001) && unk_0x0ECB5CA5140957AD(*iParam0, 0x00000018) != func_329(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)))
	{
		unk_0xEE6A1776A67F70C1(*iParam0, 0x00000018, func_329(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)), 0x00000000);
	}
	func_328(iParam0);
	if (func_327(*iParam0))
	{
		unk_0xD5A0214B20BCBAD8(*iParam0, 0x00000001);
		unk_0x44A200C9B6E1CEA6(*iParam0, 0x00000001);
	}
	return 0x00000001;
}

int func_327(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && unk_0x40B3F576B41FA183(iParam0) > 0x00000000)
	{
		unk_0xF95FF0A179413A39(iParam0, 0x00000000);
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000031)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 0x00000011 || iVar1 == 0x00000012) || iVar1 == 0x00000013) || iVar1 == 0x00000014) || iVar1 == 0x00000015) || iVar1 == 0x00000016)
			{
			}
			else if (unk_0x0ECB5CA5140957AD(iParam0, iVar1) != 0xFFFFFFFF)
			{
				StringCopy(&cVar3, unk_0xAE6250B518DF3C3B(iParam0, iVar1, unk_0x0ECB5CA5140957AD(iParam0, iVar1)), 16);
				iVar2 = unk_0x12AB0310C2281427(&cVar3);
				if (iVar2 != 0x00000000)
				{
					if (iVar2 == unk_0x12AB0310C2281427("MNU_CAGE") || iVar2 == unk_0x12AB0310C2281427("SABRE_CAG"))
					{
						return 0x00000001;
					}
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

void func_328(var uParam0)
{
	switch (unk_0x134B62B726CEC8E6(*uParam0))
	{
		case 0x9A9EB7DE:
			if (unk_0x0ECB5CA5140957AD(*uParam0, 0x00000004) == 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(*uParam0, 0x0000000D, 0x00000000, 0x00000000);
			}
			else
			{
				unk_0x7AFDC9F56E7BB635(*uParam0, 0x0000000D);
			}
			break;
	}
}

int func_329(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
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
						return 0x00000004;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 0x00000003;
				break;
		}
		iVar0 = unk_0x461CAC843A21E4B6(iParam0, 0x00000026);
		iVar1 = unk_0x461CAC843A21E4B6(iParam0, 0x00000018);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 0x00000001);
		if (iVar3 < 0x00000000)
		{
			iVar3 = 0x00000000;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 0x00000001);
		}
		return iVar3;
	}
	return 0x00000000;
}

int func_330(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0x00000001;
			break;
		
		case joaat("sabregt2"):
			if (!Global_40001.f_378B)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_40001.f_378C)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_40001.f_378A)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_40001.f_378D)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_40001.f_378F)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_40001.f_378E)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case joaat("comet3"):
			if (Global_40001.f_48ED)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("diablous2"):
			if (Global_40001.f_48EF)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("fcr2"):
			if (Global_40001.f_48F3)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("elegy"):
			if (Global_40001.f_48F0)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("nero2"):
			if (Global_40001.f_48F7)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("italigtb2"):
			if (Global_40001.f_48F5)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("specter2"):
			if (Global_40001.f_48FA)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x50D4D19F:
			if (Global_40001.f_5091)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x8D4B7A8A:
			if (Global_40001.f_5092)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x8526E2F5:
		case 0x163F8520:
		case 0x67D52852:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x256E92BA:
		case 0x5BA0FF1E:
		case 0x49E25BA1:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x3C26BD0C:
		case 0x8D45DF49:
		case 0x9804F4C7:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0xFE5F0722:
		case 0x93F09558:
		case 0xAE12C99C:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x669EB40A:
		case 0x32174AFC:
		case 0xD556917C:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0xD6FB0F30:
		case 0xAE0A3D4F:
		case 0xB2E046FB:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x27D79225:
		case 0x9B065C9E:
		case 0x8644331A:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x6B73A9BE:
		case 0x817AFAAD:
		case 0x0409D787:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x665F785D:
		case 0x4201A843:
		case 0xC98BBAD6:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_331(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x40B3F576B41FA183(iParam0) > 0x00000000)
	{
		unk_0xF95FF0A179413A39(iParam0, 0x00000000);
		iVar0 = unk_0x0ECB5CA5140957AD(iParam0, 0x00000018);
		iVar1 = unk_0x3A5601978F787E51(iParam0, 0x00000018);
		unk_0x920DACD685EA4957(iParam0, iParam1);
		if (unk_0x134B62B726CEC8E6(iParam0) == joaat("tornado6") || unk_0x134B62B726CEC8E6(iParam0) == 0x9472CD24)
		{
			return;
		}
		if (iVar0 == 0xFFFFFFFF)
		{
			unk_0x7AFDC9F56E7BB635(iParam0, 0x00000018);
		}
		else
		{
			unk_0xEE6A1776A67F70C1(iParam0, 0x00000018, iVar0, iVar1 == 0x00000001);
		}
	}
}

bool func_332()
{
	return unk_0xC146D5FBD23C6954(0x9B328228);
}

int func_333(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003))
			{
				if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
				}
				return unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000004);
			}
		}
	}
	return 0x00000000;
}

int func_334(int iParam0)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!func_340(unk_0xD803B885F5E47A62(), 0xFFFFFFFF))
		{
			iParam0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		}
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_336(unk_0xD803B885F5E47A62()) == 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (func_335(iParam0) != 0xFFFFFFFF)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_335(int iParam0)
{
	if (unk_0xF1D385D359D58F72("FMDeliverableID", 0x00000003))
	{
		if (unk_0x30F813723591D02E(iParam0, "FMDeliverableID"))
		{
			return unk_0x1E2DFB0EF4BB4566(iParam0, "FMDeliverableID");
		}
	}
	return 0xFFFFFFFF;
}

int func_336(int iParam0)
{
	if (func_339(iParam0) == 0x000000E9)
	{
		return func_337(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_337(int iParam0)
{
	if (func_338(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

int func_338(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_339(int iParam0)
{
	if (func_338(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_340(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_341(iParam0, 0x00000001, 0x00000001))
	{
		if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (unk_0x16F2683693E537C9() == unk_0xA30B8362589C124A(iVar0, iParam1, 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_341(int iParam0, bool bParam1, bool bParam2)
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

void func_342(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (func_317(&(Global_126B1.f_22B[0x00000000 /*21*/]), iVar0))
		{
			if (unk_0x0EB28750412C3A5A(vParam0, Global_126B1.f_22B[0x00000000 /*21*/], bParam2) <= fParam1)
			{
				func_313(iVar0);
			}
		}
		iVar0++;
	}
}

int func_343(var uParam0)
{
	if (func_344(uParam0))
	{
		if (unk_0xB87F6CF6E5628C67(uParam0->f_C.f_42))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_344(var uParam0)
{
	if (uParam0->f_C.f_42 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_296(uParam0->f_C.f_42, 0x00000000))
	{
		return 0x00000000;
	}
	if (uParam0->f_C.f_42 == joaat("stunt") && func_236(*uParam0, 1694.62f, 3276.27f, 41.31f, 0x3F000000, 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_345()
{
	return func_343(&(Global_19AE3.f_B4A));
}

void func_346()
{
	func_347(&(Global_19AE3.f_B4A));
}

void func_347(var uParam0)
{
	if (func_344(uParam0))
	{
		unk_0x523BCC9DC80CD82F(uParam0->f_C.f_42);
	}
}

bool func_348()
{
	return func_344(&(Global_19AE3.f_B4A));
}

int func_349(vector3 vParam0, float fParam1)
{
	return func_287(&(Global_18F3B.f_B4A), vParam0, fParam1, 0x00000000);
}

bool func_350()
{
	return func_343(&(Global_18F3B.f_B4A));
}

void func_351()
{
	func_347(&(Global_18F3B.f_B4A));
}

int func_352(int iParam0, vector3 vParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam2 == 0x00000001)
	{
		vParam1 = { func_353() };
	}
	unk_0xA6B02C1DB14DDA13(iParam0, &vVar0, &vVar1);
	if ((vVar1.x - vVar0.x) > vParam1.x)
	{
		return 0x00000000;
	}
	else if ((vVar1.y - vVar0.y) > vParam1.y)
	{
		return 0x00000000;
	}
	else if ((vVar1.z - vVar0.z) > vParam1.z)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

Vector3 func_353()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_354()
{
	return Global_18F3B.f_B4A.f_C.f_42;
}

bool func_355()
{
	return func_344(&(Global_18F3B.f_B4A));
}

void func_356(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_366())
	{
		unk_0x256D93AFAE851A7A(0x00000000);
		unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000002);
		unk_0x21387C9EECC2B220(0x00000001);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
		}
		Global_181B4 = { vParam0 };
		Global_181B7 = fParam1;
		Global_181B3 = 0x00000001;
		if (iParam2 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 0x0000000E);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x0000000E);
		}
		if (iParam3 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 0x00000018);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000018);
		}
		func_283(0x00000001);
	}
}

int func_357(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_50(iParam1))
	{
		iVar0 = func_359(iParam1);
		unk_0x523BCC9DC80CD82F(iVar0);
		if (unk_0xB87F6CF6E5628C67(iVar0))
		{
			if (unk_0xC844350D5D58C99A(*iParam0))
			{
				unk_0xEBA53F35D0085654(iParam0);
			}
			*iParam0 = unk_0x36F2404464202779(0x0000001A, iVar0, vParam2, fParam3, 0x00000000, 0x00000000);
			unk_0x78ED16BE998AECC7(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x36C584991B4C183F(*iParam0, 0x00000003) == 0x00000000)
				{
					unk_0x64F9F278AB9DCA2C(*iParam0, 0x00000005, 0x00000002, 0x00000000, 0x00000000);
				}
			}
			func_358(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x71199B01895C6202(iVar0);
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_358(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000007;
	if (iParam1 == 0x00000013)
	{
		iVar0 = 0x00000003;
	}
	else if (iParam1 == 0x0000000E)
	{
		iVar0 = 0x00000004;
	}
	else if (iParam1 == 0x00000011)
	{
		iVar0 = 0x00000005;
	}
	else
	{
		iVar0 = 0x00000007;
		return 0x00000000;
	}
	Global_17172[(iVar0 - 0x00000003)] = uParam0;
	return 0x00000001;
}

int func_359(int iParam0)
{
	if (!func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_360(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_184();
	func_185();
	func_186();
	func_183();
	unk_0xF59BE6DDBCFD2F1C();
	unk_0xC83E7A5E408DF68C(0x00000003);
	unk_0xFF42993F8A095C58(0x00000003);
	iLocal_392 = 0x00000000;
	iLocal_167 = 0x00000000;
	iLocal_163 = 0x00000000;
	iLocal_150 = 0x00000000;
	iLocal_114 = 0x00000000;
	iLocal_164 = 0x00000000;
	iLocal_374 = 0x00000000;
	iLocal_375 = 0x00000000;
	while (unk_0x39B7A3CCD2467CAB())
	{
		if (unk_0x22A8E52414415B76())
		{
			unk_0x55BE34EDDEA0AC9E(0x00000001);
		}
		else
		{
			unk_0x5C8D148FC238F38A();
		}
		func_28(0x00000000, 0x00000000);
	}
	if (unk_0x762119754C50557A(iLocal_168))
	{
		unk_0x40B7230FD4C59AA2(iLocal_168);
	}
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_169)
	{
		if (unk_0x762119754C50557A(iLocal_169[iVar0]))
		{
			unk_0x40B7230FD4C59AA2(iLocal_169[iVar0]);
		}
		iVar0++;
	}
	iLocal_403 = 0x00000000;
	iLocal_404 = 0x00000000;
	iLocal_405 = 0x00000000;
	sLocal_406 = "";
	sLocal_407 = "";
	func_190();
	iLocal_63 = 0x00000000;
	iLocal_64 = 0x00000000;
	iLocal_65 = 0x00000000;
	unk_0x4701A9E9B58A4878(1f);
	func_364();
	unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	unk_0x5CAFA5DD13658DFE(0x00000000);
	func_192(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	func_28(0x00000020, 0x00000000);
	unk_0x9A82EEAF6CA12AEE(1f);
	unk_0x790015DC92C918E2();
	func_218(&Local_184, 0x00000001, 0x00000000);
	func_72();
	func_70();
	unk_0xB547E3FFEB27073E();
	unk_0xB975E4541DDAB1F5(0x00000000);
	unk_0xF5894FEB702E7E76(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 0x00000001);
	if (iParam0 == 0x00000000)
	{
		unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, 0x39918412, 0x00000001);
		unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, 0x0EBECAD2, 0x00000001);
		unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, 0xF139365E, 0x00000000);
		Global_9AA9 = 0x00000001;
	}
	unk_0xAFC04933E85FEE35("AZL_CHN2_METH_LAB_FARM_FIRE", 0x00000000, 0x00000001);
	if (iParam0 != 0x00000003)
	{
		unk_0x2723524E448F4BDD("Chinese2_Lunch", 0x00000001);
		unk_0x2723524E448F4BDD("CHINESE2_HILLBILLIES", 0x00000000);
	}
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	if (iLocal_379 != 0xFFFFFFFF)
	{
		if (unk_0x49083FDB78AC0509(iLocal_379))
		{
			unk_0xDDABC98CFF1A4C60(iLocal_379);
		}
	}
	if (iParam0 == 0x00000001 || iParam0 == 0x00000002)
	{
		func_362(unk_0x16F2683693E537C9(), 0x00000002);
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_113)
	{
		if (iVar0 == 0x0000000E)
		{
		}
		if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/]))
		{
			if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
			{
				if (iParam0 == 0x00000003)
				{
					unk_0x327AAEE25F323797(Local_113[iVar0 /*33*/]);
				}
			}
			if (iParam0 == 0x00000000 || iParam0 == 0x00000002)
			{
				if (iVar0 == 0x0000000E)
				{
				}
				if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
				{
					unk_0xFADC0A217229F6B5(Local_113[iVar0 /*33*/], 0x00000001);
					unk_0x6DAD7906B73F064D(&(Local_113[iVar0 /*33*/]));
				}
			}
			else
			{
				if (iVar0 == 0x0000000E)
				{
				}
				unk_0xEBA53F35D0085654(&(Local_113[iVar0 /*33*/]));
			}
		}
		Local_113[iVar0 /*33*/].f_3 = 0x00000000;
		Local_113[iVar0 /*33*/].f_4 = 0x00000000;
		Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_2 = 0x00000019;
		Local_113[iVar0 /*33*/].f_5 = 0x00000000;
		Local_113[iVar0 /*33*/].f_C = 0f;
		Local_113[iVar0 /*33*/].f_D = 0f;
		Local_113[iVar0 /*33*/].f_E = 0x00000000;
		Local_113[iVar0 /*33*/].f_F = 0x00000000;
		Local_113[iVar0 /*33*/].f_11 = 0x00000000;
		Local_113[iVar0 /*33*/].f_10 = 0x00000000;
		Local_113[iVar0 /*33*/].f_15 = 0x00000000;
		Local_113[iVar0 /*33*/].f_16 = 0x00000000;
		Local_119[iVar0 /*24*/].f_3 = 0x00000001;
		if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_14))
		{
			unk_0xF690C84DADBB3551(&(Local_113[iVar0 /*33*/].f_14));
		}
		unk_0x51732B934211201A(Local_113[iVar0 /*33*/].f_18);
		iVar0++;
	}
	if (iParam0 != 0x00000003)
	{
		func_361();
	}
	else
	{
		func_209(&Local_119, &uLocal_203, cLocal_131, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 0x00000001);
	}
	if (unk_0xC844350D5D58C99A(iLocal_373))
	{
		unk_0xF690C84DADBB3551(&iLocal_373);
	}
	if (iParam0 != 0x00000000 && iParam0 != 0x00000002)
	{
		unk_0x536F1BE96C726C4B(2438.433f, 4970.416f, 53.1778f, 450f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		unk_0x7800CEC090C01D4D(2442.69f, 4970.348f, 46.33f, 30f);
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_153)
	{
		if ((Local_153[iVar0 /*6*/].f_1 == 0x00000001 && Local_153[iVar0 /*6*/].f_3 == 0x00000000) || Local_153[iVar0 /*6*/].f_3 == 0x00000000)
		{
			Local_153[iVar0 /*6*/].f_2 = 0xFFFFFFFF;
			Local_153[iVar0 /*6*/].f_4 = 0x00000000;
			Local_153[iVar0 /*6*/].f_5 = 0x00000000;
			Local_153[iVar0 /*6*/].f_1 = 0x00000000;
		}
		iVar0++;
	}
	func_3();
	if (unk_0xE4EDC4B0E92C078B(iLocal_178))
	{
		unk_0x142CC44DB769B57E(&iLocal_178);
	}
	iVar1 = 0x00000000;
	while (iVar1 < iLocal_170)
	{
		if (unk_0xC844350D5D58C99A(iLocal_170[iVar1]))
		{
			unk_0xF690C84DADBB3551(&(iLocal_170[iVar1]));
		}
		iVar1++;
	}
	if (unk_0xC844350D5D58C99A(iLocal_144))
	{
		if (iParam0 != 0x00000000 && iParam0 != 0x00000002)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_144, 0x00000000))
			{
				if (unk_0x9C77D2D0559097F0(iLocal_144, 0x00000001))
				{
					if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0x046C362CF15F1935(&iLocal_144);
					}
					else
					{
						unk_0x046C362CF15F1935(&iLocal_144);
					}
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_145))
	{
		if (iParam0 != 0x00000000)
		{
			if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x046C362CF15F1935(&iLocal_145);
			}
			else
			{
				unk_0x046C362CF15F1935(&iLocal_145);
			}
		}
		else
		{
			unk_0x046C362CF15F1935(&iLocal_145);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_146))
	{
		if (func_74(iLocal_146))
		{
			unk_0x046C362CF15F1935(&iLocal_146);
		}
	}
	if (unk_0x762119754C50557A(iLocal_176))
	{
		unk_0x40B7230FD4C59AA2(iLocal_176);
	}
	if (iParam0 == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_181))
		{
			unk_0x1E9649458B15960F(iLocal_181, 0x00000000);
			unk_0xEEEE2E5FA6F78DF0(&iLocal_181);
		}
		if (unk_0xC844350D5D58C99A(iLocal_182))
		{
			unk_0x1E9649458B15960F(iLocal_182, 0x00000000);
			unk_0xEEEE2E5FA6F78DF0(&iLocal_182);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_160))
	{
		unk_0xEBA53F35D0085654(&iLocal_160);
	}
	unk_0x58B5D6A0F1D7754D(2439.687f, 4971.541f, 45.9442f, 150f);
	if (iParam0 != 0x00000002)
	{
		if (unk_0xC844350D5D58C99A(Local_113[0x0000000C /*33*/]))
		{
			unk_0xEBA53F35D0085654(&(Local_113[0x0000000C /*33*/]));
		}
		if (unk_0xC844350D5D58C99A(Local_113[0x0000000D /*33*/]))
		{
			unk_0xEBA53F35D0085654(&(Local_113[0x0000000D /*33*/]));
		}
		if (unk_0xC844350D5D58C99A(Local_113[0x0000000E /*33*/]))
		{
			unk_0xEBA53F35D0085654(&(Local_113[0x0000000E /*33*/]));
		}
		if (unk_0xC844350D5D58C99A(Local_113[0x0000000B /*33*/]))
		{
			unk_0xEBA53F35D0085654(&(Local_113[0x0000000B /*33*/]));
		}
		if (unk_0xC844350D5D58C99A(Local_113[0x0000000A /*33*/]))
		{
			unk_0xEBA53F35D0085654(&(Local_113[0x0000000A /*33*/]));
		}
	}
	unk_0x71199B01895C6202(joaat("a_m_m_hillbilly_01"));
	unk_0x71199B01895C6202(joaat("a_m_m_hillbilly_02"));
	unk_0x71199B01895C6202(joaat("prop_cs_fertilizer"));
	unk_0x71199B01895C6202(joaat("burrito"));
	unk_0x71199B01895C6202(joaat("ig_janet"));
	unk_0x71199B01895C6202(joaat("ig_old_man1a"));
	unk_0x71199B01895C6202(joaat("ig_old_man2"));
	unk_0x71199B01895C6202(joaat("ig_taocheng"));
	unk_0x71199B01895C6202(joaat("ig_taostranslator"));
	unk_0x71199B01895C6202(joaat("ig_janet"));
	unk_0xDD465543E2028AEA("move_m@gangster@var_e");
	unk_0xDD465543E2028AEA("move_m@gangster@var_f");
	unk_0xDD465543E2028AEA("move_m@gangster@generic");
	unk_0x8D17794CE3273D70("misschinese2_barrelRoll");
	unk_0x8D17794CE3273D70("reaction@male_stand@big_variations@b");
	unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@left");
	unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@right");
	unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@backward");
	unk_0x8D17794CE3273D70("misschinese2_bank1");
	unk_0x8D17794CE3273D70("misschinese2_bank5");
	unk_0x8D17794CE3273D70("misschinese2_crystalmazemcs1_ig");
	if (iParam0 != 0x00000003)
	{
		if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0x00000000))
		{
			unk_0x650567883F5E3136(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"));
		}
	}
	iLocal_159 = 0x00000000;
	iLocal_111 = 0x00000000;
	if (unk_0x562F77A7F33D2E46("CHI_2_DRIVE_TO_FARMHOUSE"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_DRIVE_TO_FARMHOUSE");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_DRIVE_ROCK_RADIO"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_DRIVE_ROCK_RADIO");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_FARMHOUSE_OVERVIEW"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_FARMHOUSE_OVERVIEW");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_SHOOTOUT_STEALTH"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_SHOOTOUT_STEALTH");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_POUR_GAS"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_POUR_GAS");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_SHOOT_GAS"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_SHOOT_GAS");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_GAS_TRAIL_FIRE"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_GAS_TRAIL_FIRE");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_RAYFIRE"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_RAYFIRE");
	}
	unk_0xE96F19797E59AB06();
	if (iParam0 != 0x00000000)
	{
		func_15("CHN2_STOP_TRACK", 0x00000000, func_173());
		while (!func_2())
		{
			func_28(0x00000000, 0x00000000);
		}
	}
	if (iParam0 != 0x00000003)
	{
		func_172(0x00000000);
	}
	if (iParam0 != 0x00000000)
	{
		uLocal_173 = unk_0x57651D42225429CC(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		if (iLocal_174)
		{
			if (unk_0xB39672D8C1F6BB48(uLocal_173))
			{
				unk_0xCADC8175C61F28E5(uLocal_173, 0x00000002);
			}
			iLocal_174 = 0x00000000;
		}
	}
}

void func_361()
{
	unk_0x24FB7F7A9C3EBEC5(0xE4DF46D5, 0x0000001F);
}

void func_362(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0x00000000))
		{
			if (iVar0 != 0x00000000 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_363(iParam1, iVar0))
				{
					iVar0 = 0x00000000;
				}
			}
		}
	}
	if (Global_181DD > 0x00000000)
	{
		Global_19AE3.f_15[iParam1] = iVar0;
	}
	else
	{
		Global_18F3B.f_15[iParam1] = iVar0;
	}
}

int func_363(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (Global_181DD > 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000002C)
		{
			if (Global_19AE3.f_32C[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_19AE3.f_32C[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0x00000000)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000033)
		{
			if (Global_19AE3.f_32C[iParam0 /*477*/].f_DD[iVar0 /*5*/] == iParam1)
			{
				if (Global_19AE3.f_32C[iParam0 /*477*/].f_DD[iVar0 /*5*/].f_1 > 0x00000000)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000002C)
		{
			if (Global_18F3B.f_32C[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_18F3B.f_32C[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0x00000000)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000033)
		{
			if (Global_18F3B.f_32C[iParam0 /*477*/].f_DD[iVar0 /*5*/] == iParam1)
			{
				if (Global_18F3B.f_32C[iParam0 /*477*/].f_DD[iVar0 /*5*/].f_1 > 0x00000000)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

void func_364()
{
	int iVar0;
	
	Global_F065 = 0x00000000;
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000040)
	{
		Global_F066[iVar0 /*2*/] = 0x00000000;
		iVar0++;
	}
}

int func_365()
{
	if (!Global_181B8 == 0x0000000A && !Global_181B8 == 0x00000009)
	{
		return 0x00000000;
	}
	return Global_181B8.f_2;
}

int func_366()
{
	if (Global_181B8 == 0x0000000A || Global_181B8 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_367(var uParam0, char* sParam1, int iParam2, char* sParam3)
{
	*uParam0 = sParam3;
	uParam0->f_1 = sParam1;
	uParam0->f_2 = iParam2;
}

void func_368()
{
	unk_0xF63400DBE3303D26("MYFRIEND", &iLocal_115);
	unk_0xF63400DBE3303D26("FOE", &iLocal_116);
	unk_0xF63400DBE3303D26("IGNORE", &iLocal_117);
	unk_0xF63400DBE3303D26("BARpeds", &iLocal_154);
	unk_0x0E2400AB9174FA81(0x00000003, iLocal_154, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(0x00000005, unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()), iLocal_116);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_116, unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()));
	unk_0x0E2400AB9174FA81(0x00000002, iLocal_115, iLocal_117);
	unk_0x0E2400AB9174FA81(0x00000002, iLocal_116, iLocal_117);
	unk_0x0E2400AB9174FA81(0x00000002, iLocal_117, unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()));
	unk_0x0E2400AB9174FA81(0x00000002, iLocal_117, iLocal_116);
}

void func_369()
{
	switch (iLocal_575)
	{
		case 0x00000000:
			if (iLocal_149 >= 0x00000004)
			{
				func_370(0x00000001, "Snipe from hill", 0x00000000, 0x00000000, 0x00000000, 0x00000001);
				iLocal_575++;
			}
			break;
		
		case 0x00000001:
			if (iLocal_149 >= 0x00000004 && iLocal_149 < 0x00000007)
			{
				if (func_93(0x0000000C) || iLocal_149 == 0x00000006)
				{
					func_370(0x00000002, "Inside House", 0x00000000, 0x00000000, 0x00000000, 0x00000001);
					iLocal_575++;
				}
			}
			else if (iLocal_149 == 0x00000007)
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0x00000000))
				{
					func_370(0x00000002, "Inside House", 0x00000000, 0x00000000, 0x00000000, 0x00000001);
					iLocal_575++;
				}
			}
			else if (iLocal_149 > 0x00000007)
			{
				func_370(0x00000002, "Inside House", 0x00000000, 0x00000000, 0x00000000, 0x00000001);
				iLocal_575++;
			}
			break;
		
		case 0x00000002:
			if (iLocal_149 >= 0x00000007)
			{
				func_370(0x00000003, "Pour petrol trail", 0x00000000, 0x00000000, 0x00000000, 0x00000001);
				iLocal_575++;
			}
			break;
		
		case 0x00000003:
			if (iLocal_149 == 0x00000009)
			{
				func_370(0x00000004, "Leave the farm house", 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				iLocal_575++;
			}
			break;
	}
}

void func_370(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 0x00000001)
	{
		if (!unk_0x7F8A39872A07D2CE("FinaleC2", unk_0xBB0808A181D4745C()))
		{
		}
	}
	iVar0 = 0x00000000;
	if (iParam3 == 0x00000001)
	{
		if (iParam0 != Global_181DD)
		{
			iVar0 = 0x00000001;
		}
	}
	else if (iParam0 > Global_181DD)
	{
		iVar0 = 0x00000001;
	}
	if (iVar0 == 0x00000001)
	{
		func_442(0x00000001);
		if (iParam0 <= Global_181DD)
		{
		}
		iVar1 = func_440(unk_0xBB0808A181D4745C(), 0x00000001);
		if (iVar1 != 0xFFFFFFFF && iVar1 != 0x0000005E)
		{
			Global_1B416.f_2378.f_14A[iVar1 /*6*/].f_1 = 0x00000000;
			iVar2 = func_438(iVar1);
			cVar3 = { Global_15DBC[iVar1 /*34*/].f_8 };
			if (iVar1 == 0x0000005A)
			{
				switch (Global_1B416.f_2378.f_63.f_CD[0x00000007])
				{
					case 0x00000001:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 0x00000002:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x353729B0A07DC11A(&cVar3, iVar2, Global_181DD, iParam0);
		}
		else
		{
			iVar4 = func_433(unk_0xBB0808A181D4745C(), 0x00000001);
			if (iVar4 != 0xFFFFFFFF)
			{
				Global_1B416.f_4889[iVar4 /*6*/].f_4 = 0x00000000;
				MemCopy(&uVar5, {func_432(iVar4)}, 0x00000004);
				unk_0x353729B0A07DC11A(&uVar5, 0x00000000, Global_181DD, iParam0);
			}
			else
			{
				iVar6 = func_431(&(Global_181B8.f_3));
				if (iVar6 > 0xFFFFFFFF)
				{
					Global_1B416.f_6195.f_4[iVar6] = 0x00000000;
				}
			}
		}
		Global_16AFA = iParam2;
		Global_181DD = iParam0;
		func_371(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x7F8A39872A07D2CE(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_181DD)
	{
	}
}

void func_371(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_372(&Global_19AE3, unk_0xBB0808A181D4745C(), iParam0, uParam1, iParam3, iParam2);
}

void func_372(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_48();
	uParam0->f_1 = func_420();
	unk_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_396(&(uParam0->f_B44), 0x00000000);
		func_395(unk_0x16F2683693E537C9());
		func_388(unk_0x16F2683693E537C9(), 0x00000000);
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &(uParam0->f_2), 0x00000001);
		if (uParam0->f_2 == 0x00000000 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		uParam0->f_11[iVar1] = Global_1B416.f_936.f_21B.f_126[iVar1];
		if (iVar1 == func_387())
		{
			func_381(unk_0x16F2683693E537C9(), &(uParam0->f_268[iVar1 /*65*/]), 0x00000001, 0xFFFFFFFF);
		}
		else
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000C)
			{
				uParam0->f_268[iVar1 /*65*/][iVar0] = Global_180A5[iVar1 /*65*/][iVar0];
				uParam0->f_268[iVar1 /*65*/].f_D[iVar0] = Global_180A5[iVar1 /*65*/].f_D[iVar0];
				iVar0++;
			}
			uParam0->f_268[iVar1 /*65*/].f_3B = Global_180A5[iVar1 /*65*/].f_3B;
			uParam0->f_268[iVar1 /*65*/].f_3C = Global_180A5[iVar1 /*65*/].f_3C;
			uParam0->f_268[iVar1 /*65*/].f_3D = Global_180A5[iVar1 /*65*/].f_3D;
			uParam0->f_268[iVar1 /*65*/].f_3E = Global_180A5[iVar1 /*65*/].f_3E;
			uParam0->f_268[iVar1 /*65*/].f_3F = Global_180A5[iVar1 /*65*/].f_3F;
			uParam0->f_268[iVar1 /*65*/].f_40 = Global_180A5[iVar1 /*65*/].f_40;
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000009)
			{
				uParam0->f_268[iVar1 /*65*/].f_27[iVar0] = Global_180A5[iVar1 /*65*/].f_27[iVar0];
				uParam0->f_268[iVar1 /*65*/].f_31[iVar0] = Global_180A5[iVar1 /*65*/].f_31[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000002C)
		{
			uParam0->f_32C[iVar1 /*477*/][iVar0 /*5*/] = { Global_1B416.f_936.f_21B.f_12A[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000033)
		{
			uParam0->f_32C[iVar1 /*477*/].f_DD[iVar0 /*5*/] = { Global_1B416.f_936.f_21B.f_12A[iVar1 /*477*/].f_DD[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0x00000000:
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000005]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000006]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000007]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000008]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000009]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000A]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000B]), 0xFFFFFFFF);
				break;
			
			case 0x00000001:
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000005]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000006]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000007]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000008]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000009]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000A]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000B]), 0xFFFFFFFF);
				break;
			
			case 0x00000002:
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000005]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000006]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000007]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000008]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000009]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000A]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000B]), 0xFFFFFFFF);
				break;
		}
		uParam0->f_9[iVar1] = Global_1B416.f_504F.f_E9[iVar1 /*69*/].f_1;
		uParam0->f_D[iVar1] = Global_E53E[iVar1];
		uParam0->f_19[0x00000000 /*295*/][iVar1 /*98*/] = { Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iVar1 /*98*/] };
		uParam0->f_19[0x00000001 /*295*/][iVar1 /*98*/] = { Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iVar1 /*98*/] };
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000003)
		{
			uParam0->f_B16[iVar1 /*15*/][iVar0] = Global_1B416.f_936.f_1ED[iVar1 /*15*/][iVar0];
			uParam0->f_B16[iVar1 /*15*/].f_5[iVar0] = Global_1B416.f_936.f_1ED[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_B16[iVar1 /*15*/].f_A[iVar0] = Global_1B416.f_936.f_1ED[iVar1 /*15*/].f_A[iVar0];
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			uParam0->f_929[iVar1 /*164*/][iVar0] = Global_1B416.f_936[iVar1 /*164*/][iVar0];
			uParam0->f_929[iVar1 /*164*/].f_4[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_8[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_10[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_10[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_14[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_14[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_18[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_18[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_1C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_1C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_20[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_24[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_28[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_2C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_2C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_30[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_30[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_34[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_34[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_38[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_38[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_3C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_3C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_40[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_44[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_48[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_4C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_4C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_50[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_50[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_54[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_54[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_58[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_58[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_5C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_5C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_60[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_64[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_68[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_6C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_6C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_70[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_70[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_74[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_74[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_78[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_78[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_7C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_7C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_80[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_84[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_88[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_8C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_8C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_90[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_90[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_94[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_94[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_98[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_98[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_9C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_9C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_A0[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_A0[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x6FB46C25CCB7E6D5(joaat("sp0_special_ability"), &(uParam0->f_925[0x00000000]), 0xFFFFFFFF);
	unk_0x6FB46C25CCB7E6D5(joaat("sp1_special_ability"), &(uParam0->f_925[0x00000001]), 0xFFFFFFFF);
	unk_0x6FB46C25CCB7E6D5(joaat("sp2_special_ability"), &(uParam0->f_925[0x00000002]), 0xFFFFFFFF);
	uParam0->f_5 = 0x00000091;
	if (iParam4 == 0x00000001)
	{
		func_374(&(uParam0->f_B4A), uParam0, iParam5, 0x00000001, 0x00000001, 0x00000000);
	}
	func_373(&(uParam0->f_BA4));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_373(var uParam0)
{
	*uParam0 = Global_17181;
	uParam0->f_1 = Global_17182;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	return 0x00000001;
}

void func_374(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0x00000000)
	{
		iParam2 = unk_0x16F2683693E537C9();
	}
	if (unk_0xC844350D5D58C99A(iParam2))
	{
		uParam1->f_5 = func_51(iParam2);
	}
	if (func_380(iParam2, &iVar0, iParam3, iParam5))
	{
		func_375(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x4906F8A34E9F4814(iVar0, joaat("skylift")) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
			{
				func_375(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_375(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam2, 0x00000000))
	{
		func_377(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_376(iParam2))
		{
			uParam1->f_3 = 0x00000001;
		}
		else
		{
			uParam1->f_3 = 0x00000000;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_376(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000006)
	{
		if (Global_181B8.f_16[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_377(var uParam0, int iParam1, int iParam2)
{
	func_289(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_379(iParam1, 0x00000091, 0x00000000);
	uParam0->f_B = func_309(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_378(iParam1);
		}
	}
	if (iParam2 == 0x00000001)
	{
		*uParam0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
		uParam0->f_6 = unk_0xD9522BA9E27E1349(iParam1);
		uParam0->f_3 = { unk_0x56E9E0FD5ACCD35D(iParam1) };
		if (unk_0x3D1053F9EB43B7AD(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_12A3A == iParam1)
		{
			uParam0->f_9 = 0x00000001;
		}
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		uParam0->f_8 = 0x00000001;
	}
	else
	{
		uParam0->f_8 = 0x00000000;
	}
}

int func_378(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[iVar0]))
		{
			if (iParam0 == Global_126B1.f_1E4[iVar0])
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_379(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (Global_1774B[iVar0] == iParam0)
			{
				if (iParam1 == 0x00000091 || iParam1 == Global_17755[iVar0])
				{
					if (iParam2 == 0x00000000 || unk_0x134B62B726CEC8E6(iParam0) == func_318(iParam1, iParam2))
					{
						return 0x00000001;
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_380(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				*uParam1 = unk_0x728870EB733D12A1();
			}
			else
			{
				*uParam1 = unk_0x6937EA2286828455(iParam0, 0x00000001);
			}
			if (unk_0xC844350D5D58C99A(*uParam1))
			{
				if (unk_0xDF1306B443CD3D15(*uParam1, 0x00000000))
				{
					if (iParam2 == 0x00000000 || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(*uParam1, 0x00000001), unk_0x68F4C0EC296D3901(iParam0, 0x00000001), 0x00000001) < 100f)
					{
						if (unk_0x4906F8A34E9F4814(*uParam1, joaat("taxi")))
						{
							if (unk_0xA30B8362589C124A(*uParam1, 0xFFFFFFFF, 0x00000000) != iParam0 && unk_0xA30B8362589C124A(*uParam1, 0xFFFFFFFF, 0x00000000) != 0x00000000)
							{
								return 0x00000000;
							}
						}
						if (func_78(*uParam1, func_48(), 0x00000001))
						{
							sVar0 = unk_0xBB0808A181D4745C();
							if (!unk_0x7F8A39872A07D2CE(sVar0, "save_anywhere"))
							{
								return 0x00000000;
							}
							else if (!unk_0x405E212DDE472467(iParam0, 0x00000001))
							{
								return 0x00000000;
							}
						}
						if (iParam3 == 0x00000001)
						{
							if (unk_0x30F813723591D02E(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xB2C7CF65CF9B897C(*uParam1, "IgnoredByQuickSave"))
								{
									return 0x00000000;
								}
							}
						}
						else if (unk_0x4906F8A34E9F4814(*uParam1, joaat("blimp")))
						{
							return 0x00000000;
						}
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

void func_381(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_51(iParam0);
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000C)
		{
			func_386(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000009)
		{
			func_385(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		if (func_50(iVar0))
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
			if (func_384(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_382(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_382(0x000002F0, iParam3, 0x00000000);
			}
			uParam1->f_3C = func_382(0x000002F1, iParam3, 0x00000000);
			uParam1->f_3D = func_382(0x000002F2, iParam3, 0x00000000);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_384(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_382(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_382(0x000002F0, iParam3, 0x00000000);
			}
		}
	}
}

int func_382(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_383(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_383(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_196();
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

int func_384(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_383(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_385(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
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

void func_386(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
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

int func_387()
{
	func_49();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_388(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_51(iParam0);
	if (func_50(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_389(iParam0, &(Global_1B416.f_936.f_21B.f_12A[iVar0 /*477*/]));
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

void func_389(int iParam0, var uParam1)
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
			iVar3 = func_394(iVar0);
			if (iVar3 != 0x00000000)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_394(iVar0));
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
					iVar2 = func_392(Var4, iVar1);
					while (iVar2 != 0x00000000)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_392(Var4, iVar1);
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
			if ((unk_0x310836EE7129BA33(iVar5, &Var7) && !func_391(Var7.f_1)) && iVar9 < 0x00000033)
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
							if (!func_390(Var8.f_3))
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

int func_390(int iParam0)
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

int func_391(int iParam0)
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

int func_392(int iParam0, int iParam1)
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
				iVar1 = func_393(iParam0, &uVar4);
				if (iVar1 != 0xFFFFFFFF)
				{
					iVar2 = 0x00000000;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var5))
						{
							if (!func_390(Var5.f_3))
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

int func_393(int iParam0, var uParam1)
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

int func_394(int iParam0)
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

void func_395(int iParam0)
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
	if (func_50(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_1B416.f_936.f_21B.f_126[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_396(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	uParam0->f_3 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
	uParam0->f_5 = unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9());
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		uParam0->f_4 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x8A22C4C08282BF26(joaat("finale_choice")) > 0x00000000)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000004))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000005))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000006))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000007))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0x0D1736C2E221BCEA(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0x00000000, 0x00000001, 0x00000000))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 0x00000001)
	{
		if (func_399(&iVar0))
		{
			if (func_398(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0x00000000, 0x00000001, 0x00000000))
		{
			iVar3 = func_48();
			if (iVar3 == 0x00000000)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 0x00000001)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 0x00000002)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_397(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_397(vector3 vParam0, char* sParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD1BF3090E1F8300E(vParam0))
	{
		iVar0 = unk_0x0D1736C2E221BCEA(vParam2, sParam1);
		if (!unk_0x31609A585163CBAC(iVar0))
		{
			return 0x00000000;
		}
		iVar1 = unk_0x16804749AA17EEA8(vParam0);
		if (iVar1 == iVar0)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_398(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 0x00000001:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 0x00000002:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 0x00000003:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 0x00000004:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 0x00000005:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 0x00000006:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 0x00000007:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 0x00000008:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 0x00000009:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 0x0000000A:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 0x0000000B:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 0x0000000C:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 0x0000000D:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 0x0000000E:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 0x0000000F:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 0x00000010:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 0x00000011:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 0x00000012:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 0x00000013:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 0x00000014:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 0x00000015:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 0x00000016:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 0x00000017:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 0x00000018:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 0x00000019:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 0x0000001A:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 0x0000001B:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 0x0000001C:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 0x0000001D:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 0x0000001E:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 0x0000001F:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 0x00000020:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 0x00000021:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 0x00000022:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 0x00000023:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 0x00000024:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 0x00000025:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 0x00000026:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 0x00000027:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 0x00000028:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 0x00000029:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 0x0000002A:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 0x0000002B:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 0x0000002C:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 0x0000002D:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x0000002E:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x0000002F:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000030:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000031:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000034:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000032:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000033:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_168(*uParam1, 0f, 0f, 0f, 0x00000000);
}

int func_399(var uParam0)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_34())
		{
			*uParam0 = func_404(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000006, 0xFFFFFFFF, 0x00000000, 0x00000001, 0xFFFFFFFF);
			if (func_403(*uParam0) && !func_400(*uParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_400(int iParam0)
{
	return func_401(iParam0, 0x00000000, 0x00000001);
}

int func_401(int iParam0, int iParam1, bool bParam2)
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
		if (func_25() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_382(func_402(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_402(int iParam0)
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

int func_403(int iParam0)
{
	return func_401(iParam0, 0x00000005, 0x00000001);
}

int func_404(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000034)
	{
		if (iParam1 == 0x00000006 || iParam1 == func_419(iVar0))
		{
			if (!bParam3 || func_418(iVar0))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, func_405(iVar0, 0x00000000), 0x00000001);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == 0xFFFFFFFF)) && (iParam4 || iVar0 != 0x00000015)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_405(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0f, 0f, 0f;
			break;
		
		case 0x00000000:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 0x00000001:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 0x00000002:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 0x00000003:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 0x00000004:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 0x00000005:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 0x00000006:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 0x00000007:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 0x00000008:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 0x00000009:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 0x0000000A:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 0x0000000B:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 0x0000000C:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 0x0000000D:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 0x0000000E:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 0x0000000F:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 0x00000010:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 0x00000011:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 0x00000012:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 0x00000013:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 0x00000014:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 0x00000015:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 0x00000016:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 0x00000017:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 0x00000018:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 0x00000019:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 0x0000001A:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 0x0000001B:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 0x0000001C:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 0x0000001D:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 0x0000001E:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 0x0000001F:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 0x00000020:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 0x00000021:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 0x00000022:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 0x00000023:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 0x00000024:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 0x00000025:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 0x00000026:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 0x00000027:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 0x00000028:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 0x00000029:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 0x0000002A:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 0x0000002B:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 0x0000002C:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 0x0000002D:
			return func_415(Global_189E7);
			break;
		
		case 0x0000002E:
			if (Global_184466 != func_42())
			{
				if (func_414(Global_184466))
				{
					return func_407(0x00000002, 0x00000002);
				}
				else if (func_406(Global_184466))
				{
					return func_407(0x0000002D, 0x00000003);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 0x0000002F:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 0x00000030:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 0x00000031:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 0x00000034:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 0x00000032:
			return Global_19E130;
			break;
		
		case 0x00000033:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_406(int iParam0)
{
	if (iParam0 != func_42())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000001)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000002))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_407(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_184466 != func_42())
	{
		if (iParam1 == 0x00000003)
		{
			if (func_408(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 0x00000002)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000004))
			{
				if (func_408(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000005))
			{
				if (func_408(iParam0, 0x00000002, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_408(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_413(iParam3, &Var0))
	{
		return 0x00000000;
	}
	if (!func_413(iParam1, &vVar1))
	{
		return 0x00000000;
	}
	if (!bParam4)
	{
		Var2 = { func_411(iParam0) };
	}
	else
	{
		Var2 = { func_410(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_409(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_409(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 0x00000001;
}

Vector3 func_409(vector3 vParam0, float fParam1)
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

struct<6> func_410(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 0x00000001:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 0x00000002:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 0x00000003:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 0x00000004:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 0x00000005:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 0x00000006:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 0x00000007:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 0x00000008:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_411(int iParam0)
{
	return func_412(iParam0);
}

struct<6> func_412(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000001:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000013:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000014:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000002:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000003:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000004:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 0x00000005:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 0x00000006:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 0x00000007:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 0x00000008:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 0x00000009:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000A:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 0x0000000B:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000C:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003D:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003E:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000D:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 0x0000000E:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000F:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003F:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000040:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000010:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 0x00000011:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000012:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000041:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000042:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002C:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000015:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000016:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000017:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 0x00000018:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 0x00000019:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 0x0000001A:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000001B:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000001C:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000001D:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000001E:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 0x0000001F:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 0x00000020:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 0x00000021:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000022:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000023:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000024:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000025:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 0x00000026:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 0x00000027:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 0x00000028:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000029:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000002A:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000002B:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000002D:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002E:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002F:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000030:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000031:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000032:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000033:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 0x00000034:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 0x00000035:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 0x00000036:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000037:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000038:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000039:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003A:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003B:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003C:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000043:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000044:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000047:
		case 0x00000045:
		case 0x00000046:
		case 0x00000049:
		case 0x00000048:
		case 0x0000004A:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_413(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		case 0x00000001:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		case 0x00000002:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_414(int iParam0)
{
	if (iParam0 != func_42())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000004)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000005))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_415(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 1060f, -2990f, -35f;
			break;
		
		case 0x00000002:
			return 1060f, -2990f, -35f;
			break;
		
		case 0x00000003:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 0x00000006:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 0x00000007:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 0x00000008:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 0x00000009:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 0x00000004:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 0x00000005:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 0x0000000A:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 0x0000000B:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 0x0000000C:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 0x0000000D:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 0x0000000E:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 0x0000000F:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 0x00000010:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 0x00000011:
			if (func_416() == 0x00000000)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_416()
{
	return func_417(unk_0xD803B885F5E47A62());
}

int func_417(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x0000001C, 0x0000001F);
}

int func_418(int iParam0)
{
	return func_401(iParam0, 0x00000000, 0x00000000);
}

int func_419(int iParam0)
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

var func_420()
{
	var uVar0;
	
	func_430(&uVar0, unk_0x4460E481B9E33ADA());
	func_429(&uVar0, unk_0x8D199E381D262EEF());
	func_428(&uVar0, unk_0xD8A54335F18763BA());
	func_423(&uVar0, unk_0x972A296334C9D57B());
	func_422(&uVar0, unk_0x118229AD063C3C1D());
	func_421(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_421(var uParam0, int iParam1)
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

void func_422(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_423(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_427(*uParam0);
	iVar1 = func_425(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_424(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_424(int iParam0, int iParam1)
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

var func_425(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_426(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_426(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_427(var uParam0)
{
	return uParam0 & 0x0000000F;
}

void func_428(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_429(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_430(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_431(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE("BailBond1", sParam0))
	{
		return 0x00000000;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond2", sParam0))
	{
		return 0x00000001;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond3", sParam0))
	{
		return 0x00000002;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond4", sParam0))
	{
		return 0x00000003;
	}
	return 0xFFFFFFFF;
}

struct<2> func_432(int iParam0)
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

int func_433(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x12AB0310C2281427(sParam0);
	iVar3 = 0x00000000;
	iVar3 = 0x00000000;
	while (iVar3 < 0x0000003F)
	{
		iVar0 = iVar3;
		func_434(iVar0, &sVar1);
		if (unk_0x12AB0310C2281427(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0x00000000)
	{
	}
	return 0xFFFFFFFF;
}

void func_434(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_435(uParam1, "Abigail1", func_437(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_435(uParam1, "Abigail2", func_437(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_435(uParam1, "Barry1", func_437(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_435(uParam1, "Barry2", func_437(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_435(uParam1, "Barry3", func_437(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_435(uParam1, "Barry3A", func_437(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_435(uParam1, "Barry3C", func_437(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_435(uParam1, "Barry4", func_437(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_435(uParam1, "Dreyfuss1", func_437(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_435(uParam1, "Epsilon1", func_437(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_435(uParam1, "Epsilon2", func_437(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_435(uParam1, "Epsilon3", func_437(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_435(uParam1, "Epsilon4", func_437(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_435(uParam1, "Epsilon5", func_437(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_435(uParam1, "Epsilon6", func_437(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_435(uParam1, "Epsilon7", func_437(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_435(uParam1, "Epsilon8", func_437(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_435(uParam1, "Extreme1", func_437(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_435(uParam1, "Extreme2", func_437(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_435(uParam1, "Extreme3", func_437(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_435(uParam1, "Extreme4", func_437(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_435(uParam1, "Fanatic1", func_437(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_436(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_435(uParam1, "Fanatic2", func_437(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_436(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_435(uParam1, "Fanatic3", func_437(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_435(uParam1, "Hao1", func_437(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_435(uParam1, "Hunting1", func_437(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_435(uParam1, "Hunting2", func_437(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_435(uParam1, "Josh1", func_437(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_435(uParam1, "Josh2", func_437(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_435(uParam1, "Josh3", func_437(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_435(uParam1, "Josh4", func_437(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_435(uParam1, "Maude1", func_437(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_435(uParam1, "Minute1", func_437(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_435(uParam1, "Minute2", func_437(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_435(uParam1, "Minute3", func_437(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_435(uParam1, "MrsPhilips1", func_437(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_435(uParam1, "MrsPhilips2", func_437(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_435(uParam1, "Nigel1", func_437(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_435(uParam1, "Nigel1A", func_437(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_435(uParam1, "Nigel1B", func_437(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_436(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_435(uParam1, "Nigel1C", func_437(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_436(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_435(uParam1, "Nigel1D", func_437(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_436(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_435(uParam1, "Nigel2", func_437(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_435(uParam1, "Nigel3", func_437(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_435(uParam1, "Omega1", func_437(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_435(uParam1, "Omega2", func_437(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_435(uParam1, "Paparazzo1", func_437(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_435(uParam1, "Paparazzo2", func_437(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_435(uParam1, "Paparazzo3", func_437(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_435(uParam1, "Paparazzo3A", func_437(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_435(uParam1, "Paparazzo3B", func_437(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_435(uParam1, "Paparazzo4", func_437(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_435(uParam1, "Rampage1", func_437(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_435(uParam1, "Rampage3", func_437(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_435(uParam1, "Rampage4", func_437(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_435(uParam1, "Rampage5", func_437(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_435(uParam1, "Rampage2", func_437(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_436(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_435(uParam1, "TheLastOne", func_437(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_435(uParam1, "Tonya1", func_437(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_435(uParam1, "Tonya2", func_437(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_435(uParam1, "Tonya3", func_437(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_435(uParam1, "Tonya4", func_437(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_435(uParam1, "Tonya5", func_437(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_436(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_435(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_436(int iParam0)
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

struct<2> func_437(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_432(iParam0) };
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

int func_438(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000045:
		case 0x00000046:
			return func_439(Global_1B416.f_2378.f_63.f_CD[0x0000000A]);
			break;
		
		case 0x0000004A:
		case 0x0000004B:
			return func_439(Global_1B416.f_2378.f_63.f_CD[0x00000008]);
			break;
		
		case 0x00000054:
		case 0x00000055:
			return func_439(Global_1B416.f_2378.f_63.f_CD[0x0000000B]);
			break;
		
		case 0x0000005A:
			return func_439(Global_1B416.f_2378.f_63.f_CD[0x00000007]);
			break;
		
		case 0x0000005D:
			return func_439(Global_1B416.f_2378.f_63.f_CD[0x00000009]);
			break;
	}
	return 0x00000000;
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000003:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
			return 0x00000000;
			break;
		
		case 0x00000002:
		case 0x00000004:
		case 0x00000007:
		case 0x00000009:
			return 0x00000001;
			break;
	}
	return 0xFFFFFFFF;
}

int func_440(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = func_441(iVar0, 0x00000001);
	if (iVar1 == 0xFFFFFFFF && !bParam1)
	{
	}
	return iVar1;
}

int func_441(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000005E)
	{
		if (Global_15DBC[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return 0xFFFFFFFF;
}

void func_442(bool bParam0)
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

void func_443(int iParam0)
{
	func_360(iParam0);
	unk_0x365391E40B6BA75B(0x00000001);
	unk_0xCE7D0828D683D536();
	unk_0x51B096AAC60548C1(1f);
	unk_0x34D79252800B23FF(0x00000005);
	unk_0x15EA7F4313456B1D(0x00000003, 0x00000001);
	func_211(0x00000000);
	func_94();
	unk_0x790015DC92C918E2();
	if (unk_0x49083FDB78AC0509(iLocal_148))
	{
		unk_0xDDABC98CFF1A4C60(iLocal_148);
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x650567883F5E3136(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"));
		unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != 0x00000000)
		{
			if (func_73(unk_0x16F2683693E537C9(), 2444.098f, 4977.795f, 48.9959f, 0x00000001) < 100f)
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2463.811f, 4961.747f, 44.176f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 20f);
			}
		}
	}
	if (iParam0 == 0x00000001 || iParam0 == 0x00000002)
	{
		func_19(0x00000032, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		func_19(0x00000033, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		func_19(0x00000034, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		func_19(0x00000035, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		func_19(0x00000036, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		func_19(0x00000037, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_444()
{
	int iVar0;
	
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 0x00000590);
	}
	if (Global_1B416.f_2378 || func_147(0x00000000))
	{
		if (!func_445())
		{
			iVar0 = func_146();
			if (iVar0 != 0xFFFFFFFF)
			{
				if (!func_140(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
				return;
			}
		}
		else
		{
			func_145();
		}
	}
}

int func_445()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

