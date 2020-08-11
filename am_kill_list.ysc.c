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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
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
	struct<617> Local_80 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_81 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_82[4] = { 0, 0, 0, 0 };
	struct<18> Local_83[32];
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86[5] = { 0, 0, 0, 0, 0 };
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91[4] = { 0, 0, 0, 0 };
	struct<8> Local_92[24];
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96[4] = { 0, 0, 0, 0 };
	int iLocal_97[4] = { 0, 0, 0, 0 };
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	struct<42> Local_101[32];
	struct<104> Local_102 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = -1;
	var uLocal_109 = -1;
	var uLocal_110 = -1;
	var uLocal_111 = -1;
	var uLocal_112 = -1;
	var uLocal_113 = -1;
	var uLocal_114 = 0;
	var uLocal_115 = 32;
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
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	var uLocal_542[4] = { 0, 0, 0, 0 };
	int iLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	struct<2> Local_548[10];
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
	struct<2> Local_559[5];
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	int iLocal_564 = 0;
	vector3 vLocal_565 = { 0f, 0f, 0f };
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_572 = 0;
	int iLocal_573[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_574 = 0;
	var uLocal_575[4] = { 0, 0, 0, 0 };
	var uLocal_576[4] = { 0, 0, 0, 0 };
	struct<21> Local_577 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_90 = -100f;
	iLocal_540 = 0xFFFFFFFF;
	iLocal_541 = 0xFFFFFFFF;
	iLocal_568 = 0xFFFFFFFF;
	if (unk_0x8CD06866876216F2() && func_844(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000001))
	{
		func_833(ScriptParam_577);
	}
	else
	{
		func_787();
	}
	while (0x00000001)
	{
		func_786();
		if (func_779())
		{
			func_787();
		}
		else if (func_776(0x00000013))
		{
			func_787();
		}
		if (func_775())
		{
			func_787();
		}
		func_751();
		switch (func_750(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				if ((func_749() == 0x00000001 && Local_80.f_1 != 0xFFFFFFFF) && Local_80.f_2 != 0xFFFFFFFF)
				{
					func_747();
					func_743(0x00000081, Local_80.f_1, Local_80.f_2, 0x00000000);
					if (Global_26B66F.f_13B8 == 0xFFFFFFFF)
					{
						if (!func_742())
						{
							Global_26B66F.f_13B8 = 0x00000000;
						}
						else
						{
							Global_26B66F.f_13B8 = 0x00000001;
						}
					}
					func_741(Local_80.f_1E[0x00000000 /*3*/]);
					Local_83[unk_0x57270EE11514DC67() /*18*/] = 0x00000001;
				}
				else if (func_749() == 0x00000004)
				{
					Local_83[unk_0x57270EE11514DC67() /*18*/] = 0x00000003;
				}
				break;
			
			case 0x00000001:
				if (func_749() == 0x00000001)
				{
					func_736();
					func_735();
					func_717();
					func_417();
					func_164();
					func_163();
					func_162();
				}
				else if (func_749() == 0x00000004)
				{
					Local_83[unk_0x57270EE11514DC67() /*18*/] = 0x00000003;
				}
				break;
			
			case 0x00000003:
				func_161(&(Local_80.f_140));
				if (func_160(&(Local_80.f_140)))
				{
					Local_83[unk_0x57270EE11514DC67() /*18*/] = 0x00000004;
				}
				break;
			
			case 0x00000002:
				Local_83[unk_0x57270EE11514DC67() /*18*/] = 0x00000004;
			
			case 0x00000004:
				func_787();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_749())
			{
				case 0x00000000:
					if (func_145())
					{
						if (func_140())
						{
							func_137(func_139(0x00000081, Local_80.f_1, Local_80.f_2, 0x00000000));
							Local_80 = 0x00000001;
						}
					}
					break;
				
				case 0x00000001:
					func_128();
					func_32();
					func_24();
					if (func_1())
					{
						Local_80 = 0x00000004;
					}
					break;
				
				case 0x00000004:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	if ((unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000000) && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000001)) && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000002))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000B))
		{
			return 0x00000000;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000006))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000B))
		{
			return 0x00000000;
		}
	}
	if (Local_80.f_F1 > 0x00000000)
	{
		if (Local_80 != 0x00000004)
		{
			if (func_23())
			{
				if (Local_80.f_F1 == 0x00000003)
				{
					if (func_21())
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000B))
						{
							return 0x00000001;
						}
					}
				}
				else if (func_19(&(Local_80.f_142), 0x00000BB8, 0x00000000))
				{
					if (func_21())
					{
						return 0x00000001;
					}
				}
			}
		}
		if (Local_80.f_F1 < 0x00000003)
		{
			iVar0 = 0x00000000;
			if (Local_80.f_F1 >= 0x00000001)
			{
				iVar0 = 0x00000001;
				iVar1 = 0x00000000;
				while (iVar1 < unk_0x54EABC0DD106045B())
				{
					if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
					{
						if (!func_16(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1)), 0x00000000))
						{
							if (Local_83[iVar1 /*18*/].f_11 < 0x00000002)
							{
								iVar0 = 0x00000000;
							}
						}
					}
					iVar1++;
				}
			}
			if (iVar0 == 0x00000001)
			{
				if ((!((unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000000) && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000001)) && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000002)) && !unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000006)) && !unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000E))
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x0000000F);
				}
				func_7();
			}
			else if (Local_80.f_F1 < 0x00000003)
			{
				if (func_3())
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000010);
					unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x0000000F);
					func_7();
				}
			}
		}
	}
	return 0x00000000;
}

int func_3()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar0]))
		{
			if (!func_4(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0xD6DF381716822EFE(iParam0) + 1;
	if (iParam4 || !unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 < iVar1)
		{
			iVar2 = func_6(iParam0, (iVar0 - 0x00000001), bParam6, iParam7);
			if (unk_0xC844350D5D58C99A(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x16F2683693E537C9())
				{
				}
				else if (bParam2)
				{
					if (unk_0x34BFC6F0CB887BC2(iVar2))
					{
						iVar3 = unk_0x83FACCC48B68F9D1(iVar2);
						if (((!unk_0xEB6A8945D1AC98A1(iVar2) && iVar3 != func_5()) && func_844(iVar3, 0x00000001, 0x00000001)) || iParam8)
						{
							if (unk_0x179932739160BA96(unk_0x83FACCC48B68F9D1(iVar2)) == 0x00000000)
							{
								if (!bParam5)
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
				}
				else if (iParam1 == 0x00000000)
				{
					return 0x00000000;
				}
				else if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					return 0x00000000;
				}
			}
			iVar0++;
		}
	}
	return 0x00000001;
}

int func_5()
{
	return 0xFFFFFFFF;
}

int func_6(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0xBBA8A868118C90ED(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			iVar0 = unk_0xB0326EA5AFB4EFA7(iParam0, iParam1);
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				if (unk_0xD1960163A3042274(iVar0, 0x1AE73569) == 0x00000001 || unk_0xD1960163A3042274(iVar0, 0xCE98FBB3) == 0x00000001)
				{
					if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iParam0, 0x00000000), unk_0x68F4C0EC296D3901(iVar0, 0x00000000)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = 0xFFFFFFFF;
		}
	}
	return iVar0;
}

void func_7()
{
	if (Local_80.f_F1 != 0x00000003)
	{
		func_9();
		func_8(&(Local_80.f_144), 0x00000000, 0x00000000);
		Local_80.f_F1 = 0x00000003;
	}
}

void func_8(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = unk_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 0x00000001;
}

void func_9()
{
	if (!func_15())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return;
	}
	func_10();
}

void func_10()
{
	func_12();
	func_11(0x00000000);
}

void func_11(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x8CD06866876216F2();
	Global_140749 = 0x00000014;
	StringCopy(&(Global_140749.f_1), "", 32);
	Global_140749.f_9 = 0x00000000;
	if (bVar0)
	{
		Global_140749.f_A = unk_0x2B6E0A53779D29EA();
		Global_140749.f_B = unk_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_140749.f_C), "", 16);
	StringCopy(&(Global_140749.f_10), "", 64);
	StringCopy(&(Global_140749.f_20), "", 64);
	Global_140749.f_34 = 0x00000000;
	Global_140749.f_35 = 0x00000000;
	Global_140749.f_36 = 0x00000000;
	Global_140749.f_37 = 0xFFFFFFFF;
	Global_140749.f_38 = 0x00000000;
	Global_140749.f_3B = 0x00000000;
	if (bParam0)
	{
		return;
	}
}

void func_12()
{
	if (!func_14())
	{
	}
	if (func_15())
	{
		unk_0x400C0D66EFD08603(&(Global_140749.f_C));
		func_13();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_13()
{
	switch (Global_140749)
	{
		case 0x00000014:
			return;
		
		case 0x00000000:
			return;
		
		case 0x00000001:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			return;
		
		case 0x00000002:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			unk_0x6D99DF8263D35CE5(Global_140749.f_35);
			return;
		
		case 0x00000003:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000004:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x00000005:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000006:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000007:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000008:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000009:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 0x0000000A:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		case 0x0000000C:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000D:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000B:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 0x0000000E:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000F:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x00000011:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			return;
		
		case 0x00000010:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000013:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000012:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		default:
	}
}

int func_14()
{
	if (!func_15())
	{
		return 0x00000000;
	}
	unk_0x18B60B994182620C(&(Global_140749.f_C));
	func_13();
	return unk_0xB165082A56EE6E7F();
}

int func_15()
{
	if (Global_140749 == 0x00000014)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_16(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_17(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_17(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_18();
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

int func_18()
{
	return Global_1407E9;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_20(uParam0, bParam2, 0x00000000);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 0x00000001;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_20(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0x00000000)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 0x00000001;
	}
}

int func_21()
{
	int iVar0;
	
	if (!func_22(&(Local_80.f_148)))
	{
		func_20(&(Local_80.f_148), 0x00000000, 0x00000000);
	}
	else if (func_19(&(Local_80.f_148), 0x00004E20, 0x00000000))
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000018)
	{
		if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar0]))
		{
			if (Local_80.f_55[iVar0] < 0x00000004)
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

bool func_22(var uParam0)
{
	return uParam0->f_1;
}

int func_23()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar0]))
		{
			if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000018)
	{
		if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar1]))
		{
			if (!func_31(Local_80.f_30[iVar1]))
			{
				switch (Local_80.f_55[iVar1])
				{
					case 0x00000000:
						if (!unk_0x405E212DDE472467(unk_0x1B50683925F00106(Local_80.f_30[iVar1]), 0x00000000))
						{
							Local_80.f_55[iVar1] = 0x00000001;
						}
						else if (unk_0x405E212DDE472467(unk_0x1B50683925F00106(Local_80.f_30[iVar1]), 0x00000000) && func_30(iVar1))
						{
							Local_80.f_55[iVar1] = 0x00000001;
						}
						break;
					
					case 0x00000001:
						if (Local_80.f_F1 == 0x00000001)
						{
							if (!func_23())
							{
								if (unk_0x405E212DDE472467(unk_0x1B50683925F00106(Local_80.f_30[iVar1]), 0x00000000))
								{
									iVar4 = unk_0x6937EA2286828455(unk_0x1B50683925F00106(Local_80.f_30[iVar1]), 0x00000000);
									if (func_29(iVar4, 250f))
									{
										Local_80.f_55[iVar1] = 0x00000002;
									}
									else if (unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iVar4)))
									{
										if ((iVar1 % 0x00000004) == 0x00000000)
										{
											iVar0 = (iVar1 / 0x00000004);
											if (iVar0 < 0x00000005)
											{
												if (Local_80.f_6E[iVar0] == 0xFFFFFFFF || !func_28(iVar1))
												{
													iVar2 = func_27();
													if (iVar2 != func_5())
													{
														iVar3 = unk_0x9539D44F3E4492F6(iVar2);
														if (!unk_0xEB6A8945D1AC98A1(iVar3))
														{
															if (func_26(iVar4, iVar3, 0x00000001) > 250f)
															{
																Local_80.f_6E[iVar0] = iVar2;
															}
														}
													}
												}
											}
										}
									}
								}
								else
								{
									Local_80.f_55[iVar1] = 0x00000002;
								}
							}
							else
							{
								Local_80.f_55[iVar1] = 0x00000003;
							}
						}
						else
						{
							Local_80.f_55[iVar1] = 0x00000003;
						}
						break;
					
					case 0x00000002:
						if (Local_80.f_F1 == 0x00000001)
						{
							if (func_23())
							{
								Local_80.f_55[iVar1] = 0x00000003;
							}
							else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000006))
							{
								Local_80.f_55[iVar1] = 0x00000003;
							}
							else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_1D0, iVar1))
							{
								Local_80.f_55[iVar1] = 0x00000001;
								unk_0x0674E58A79778E99(&(Local_80.f_1D0), iVar1);
							}
						}
						else
						{
							Local_80.f_55[iVar1] = 0x00000003;
						}
						break;
					
					case 0x00000003:
						if (unk_0xE9FDA1035CFEA94F(unk_0x1B50683925F00106(Local_80.f_30[iVar1])))
						{
							func_25(&(Local_80.f_30[iVar1]));
							Local_80.f_55[iVar1] = 0x00000004;
						}
						break;
					}
				}
		}
		iVar1++;
	}
}

void func_25(var uParam0)
{
	var uVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		uVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&uVar0);
	}
}

float func_26(int iParam0, int iParam1, int iParam2)
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
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, iParam2);
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_5();
	iVar1 = 0x00000000;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (iVar0 == func_5())
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
			{
				if (Local_83[iVar1 /*18*/].f_1 != 0x00000000)
				{
					if (Local_83[iVar1 /*18*/].f_11 == 0x00000001)
					{
						iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 % 0x00000004) == 0x00000000)
	{
		iVar0 = (iParam0 / 0x00000004);
		if (iVar0 < 0x00000005)
		{
			if (Local_80.f_6E[iVar0] != 0xFFFFFFFF)
			{
				iVar3 = Local_80.f_6E[iVar0];
				iVar1 = unk_0x117658E336116132(iVar3);
				if (unk_0x40B8C182D63932FC(iVar1))
				{
					if (func_844(iVar1, 0x00000001, 0x00000001))
					{
						if (unk_0xFB75B0F82CA525F6(iVar1))
						{
							iVar2 = unk_0x7B9C1F53FE442D06(iVar1);
							iVar3 = iVar2;
							if (Local_83[iVar3 /*18*/].f_11 != 0x00000001)
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
				}
				else
				{
					return 0x00000000;
				}
			}
		}
	}
	return 0x00000001;
}

int func_29(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (Local_83[iVar0 /*18*/].f_1 != 0x00000000)
			{
				if (Local_83[iVar0 /*18*/].f_11 == 0x00000001)
				{
					iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
					iVar2 = unk_0x9539D44F3E4492F6(iVar1);
					if (!unk_0xEB6A8945D1AC98A1(iVar2))
					{
						if (func_26(iParam0, iVar2, 0x00000001) < fParam1)
						{
							return 0x00000001;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_30(int iParam0)
{
	int iVar0;
	
	if (!unk_0x405E212DDE472467(unk_0x1B50683925F00106(Local_80.f_30[iParam0]), 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x1B50683925F00106(Local_80.f_30[iParam0]), 0x00000000);
	if (!unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_31(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(uParam0));
	}
	return 0x00000001;
}

void func_32()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_80.f_1CF > 0x00000000)
	{
		if (Local_80.f_1C != Local_80.f_1CF)
		{
			Local_80.f_1C = Local_80.f_1CF;
		}
	}
	switch (Local_80.f_F1)
	{
		case 0x00000000:
			iVar1 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < Local_80.f_1C)
			{
				if (Local_80.f_11[iVar0] == func_5())
				{
				}
				else
				{
					iVar1++;
					if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000004))
					{
					}
				}
				iVar0++;
			}
			func_125();
			func_124();
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000004))
			{
				Local_80.f_1CF = iVar1;
			}
			if (func_122())
			{
				func_115();
				Local_80.f_F1 = 0x00000001;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000004) && func_112() > 0x00000001)
			{
				func_111();
				func_115();
				Local_80.f_F1 = 0x00000001;
			}
			if (!func_742())
			{
				if (unk_0xE5DBF9B6126856CA(Local_80.f_7[0x00000000]))
				{
					if (!func_109(Local_80.f_7[0x00000000]))
					{
						Var2.f_2 = 0x6E2B6F89;
						func_107(Var2, func_108(unk_0xB177666FAB6F4417(Local_80.f_7[0x00000000]), 0x00000001, 0x00000000));
						Local_80.f_F1 = 0x00000002;
					}
				}
			}
			if (Local_80.f_F1 == 0x00000000)
			{
				if (!func_22(&(Local_80.f_14A)))
				{
					if (!func_22(&(Local_80.f_146)))
					{
						func_20(&(Local_80.f_14A), 0x00000000, 0x00000000);
					}
				}
				else if (func_22(&(Local_80.f_146)))
				{
					func_106(&(Local_80.f_14A));
				}
				else if (func_19(&(Local_80.f_14A), func_105(), 0x00000000))
				{
					Var2.f_2 = 0x6E2B6F89;
					func_107(Var2, func_104(0x00000001));
					unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x0000000C);
					func_7();
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000E))
				{
					func_7();
				}
			}
			break;
		
		case 0x00000001:
			func_35();
			func_33();
			func_111();
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000006))
			{
				Local_80.f_F1 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			break;
	}
}

void func_33()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000013))
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000006))
	{
		if (!func_22(&(Local_80.f_14C)))
		{
			func_20(&(Local_80.f_14C), 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000007);
		}
		else if (func_19(&(Local_80.f_14C), func_34(), 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000006);
		}
	}
}

int func_34()
{
	if (func_742())
	{
		return Global_40001.f_2B65;
	}
	return Global_40001.f_2B4E;
}

void func_35()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar2 = 0x00000001;
	bVar3 = 0x00000000;
	if (Local_80.f_116 > 0x00000000)
	{
		if (Local_80.f_117 >= Local_80.f_116)
		{
			if (Local_80.f_FE >= Local_80.f_FF)
			{
				unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000000);
				unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000001);
				unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000002);
				return;
			}
		}
	}
	iVar5 = 0x00000000;
	if (bVar2)
	{
		if (Local_80.f_116 > 0x00000000)
		{
			if (Local_80.f_117 >= Local_80.f_116)
			{
				if (Local_80.f_100[0x00000000] >= 0x00000000)
				{
					iVar5 = (iVar5 + Local_80.f_100[0x00000000]);
				}
				if (Local_80.f_100[0x00000001] >= 0x00000000)
				{
					iVar5 = (iVar5 + Local_80.f_100[0x00000001]);
				}
				if (Local_80.f_100[0x00000002] >= 0x00000000)
				{
					iVar5 = (iVar5 + Local_80.f_100[0x00000002]);
				}
				if (Local_80.f_100[0x00000003] >= 0x00000000)
				{
					iVar5 = (iVar5 + Local_80.f_100[0x00000003]);
				}
				if (iVar5 >= Local_80.f_FF)
				{
					iVar4 = 0x00000000;
					iVar4 = 0x00000000;
					while (iVar4 < 0x00000018)
					{
						if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar4]))
						{
							if (!func_31(Local_80.f_30[iVar4]))
							{
								bVar3 = 0x00000001;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000000);
						unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000001);
						unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000002);
						return;
					}
				}
				bVar3 = 0x00000000;
				iVar4 = 0x00000000;
				iVar4 = 0x00000000;
				while (iVar4 < 0x00000018)
				{
					if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar4]))
					{
						if (!func_31(Local_80.f_30[iVar4]))
						{
							bVar3 = 0x00000001;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_22(&(Local_80.f_15B)))
					{
						func_20(&(Local_80.f_15B), 0x00000000, 0x00000000);
					}
					else if (func_19(&(Local_80.f_15B), 0x00000BB8, 0x00000000))
					{
						unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000000);
						unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000001);
						unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000002);
						return;
					}
				}
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000000) || !unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000001))
	{
		if (Local_80.f_F9 >= func_103())
		{
			unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000000);
			unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000001);
		}
		iVar0 = 0x00000000;
		while (iVar0 < Local_80.f_F2)
		{
			if (unk_0xE9F78D191AD5EDBA(Local_80.f_49[iVar0]))
			{
				if (func_102(iVar0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_F5, iVar0))
					{
						if ((Local_80.f_1B != joaat("hydra") && !func_4(unk_0xB177666FAB6F4417(Local_80.f_49[iVar0]), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001)) || Local_80.f_1B == joaat("hydra"))
						{
							unk_0x0674E58A79778E99(&(Local_80.f_3), 0x00000000);
							if (func_22(&(Local_559[iVar0 /*2*/])))
							{
								func_106(&(Local_559[iVar0 /*2*/]));
							}
						}
						else if (func_4(unk_0xB177666FAB6F4417(Local_80.f_49[iVar0]), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001) && unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_49[iVar0])) == joaat("savage"))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000000))
							{
								unk_0x0674E58A79778E99(&(Local_80.f_3), 0x00000000);
							}
							if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000012))
							{
								func_101(func_104(0x00000001), iVar0);
								unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000012);
							}
						}
						else if (func_100(iVar0) || !func_742())
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000000))
							{
								unk_0x0674E58A79778E99(&(Local_80.f_3), 0x00000000);
							}
							if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_12F, iVar0))
							{
								func_99(func_104(0x00000001), iVar0);
								unk_0x5D96D8530B3D0904(&(Local_80.f_12F), iVar0);
							}
						}
						else
						{
							func_25(&(Local_80.f_49[iVar0]));
							if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_FD, iVar0))
							{
								Local_80.f_FB = (Local_80.f_FB - 0x00000001);
								if (func_98() > 0x00000001)
								{
									if (Local_80.f_FC > 0x00000000)
									{
										Local_80.f_12E++;
										func_97(iVar0, func_104(0x00000001));
									}
								}
								unk_0x5D96D8530B3D0904(&(Local_80.f_FD), iVar0);
							}
							func_106(&(Local_559[iVar0 /*2*/]));
						}
					}
				}
				else if (func_96(iVar0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_FD, iVar0))
					{
						Local_80.f_FB = (Local_80.f_FB - 0x00000001);
						if (func_98() > 0x00000001)
						{
							if (Local_80.f_FC > 0x00000000)
							{
								Local_80.f_12E++;
								func_97(iVar0, func_104(0x00000001));
							}
						}
						if (Local_80.f_1B == joaat("hydra"))
						{
							Local_80.f_FE++;
						}
						unk_0x5D96D8530B3D0904(&(Local_80.f_FD), iVar0);
					}
					if (func_22(&(Local_80.f_150[iVar0 /*2*/])))
					{
						func_106(&(Local_80.f_150[iVar0 /*2*/]));
					}
					func_25(&(Local_80.f_49[iVar0]));
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000000))
					{
						unk_0x0674E58A79778E99(&(Local_80.f_3), 0x00000000);
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_10F, iVar0))
					{
						if (!func_22(&(Local_80.f_150[iVar0 /*2*/])))
						{
							func_20(&(Local_80.f_150[iVar0 /*2*/]), 0x00000000, 0x00000000);
						}
						else if (func_19(&(Local_80.f_150[iVar0 /*2*/]), 0x00001388, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(Local_80.f_10F), iVar0);
						}
						else if (func_19(&(Local_80.f_150[iVar0 /*2*/]), 0x00000BB8, 0x00000000))
						{
							if (unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_49[iVar0])) == joaat("savage"))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000012))
								{
									func_101(func_104(0x00000001), iVar0);
									unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000012);
								}
							}
							else if (func_100(iVar0) || !func_742())
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_12F, iVar0))
								{
									func_99(func_104(0x00000001), iVar0);
									unk_0x5D96D8530B3D0904(&(Local_80.f_12F), iVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0x00000000;
			iVar1 = 0x00000000;
			while (iVar1 < Local_80.f_74)
			{
				if (unk_0xE9F78D191AD5EDBA(Local_80.f_30[(iVar0 * 4 + iVar1)]))
				{
					iVar6 = (iVar0 * 4 + iVar1);
					if (!func_31(Local_80.f_30[(iVar0 * 4 + iVar1)]))
					{
						if (unk_0x405E212DDE472467(unk_0x1B50683925F00106(Local_80.f_30[(iVar0 * 4 + iVar1)]), 0x00000000))
						{
							if (!func_94((iVar0 * 4 + iVar1)))
							{
								unk_0x0674E58A79778E99(&(Local_80.f_3), 0x00000000);
							}
							else if (func_93(iVar6))
							{
								if (!func_19(&(Local_80.f_19E[(iVar0 * 4 + iVar1) /*2*/]), 0x00001388, 0x00000000))
								{
								}
								if (unk_0x3C583F939C836C5C(unk_0x1B50683925F00106(Local_80.f_30[(iVar0 * 4 + iVar1)])))
								{
									func_92(&(Local_92[(iVar0 * 4 + iVar1) /*8*/]));
								}
								func_25(&(Local_80.f_30[(iVar0 * 4 + iVar1)]));
								if (unk_0xEAE0D21A50E6C7F4(Local_80.f_110[func_91(iVar6)], func_90(iVar6)))
								{
									if (Local_80.f_55[(iVar0 * 4 + iVar1)] > 0x00000000)
									{
										func_89((iVar0 * 4 + iVar1), func_104(0x00000001));
										Local_80.f_FE++;
									}
								}
								Local_80.f_55[(iVar0 * 4 + iVar1)] = 0x00000000;
								if (func_22(&(Local_80.f_16C[iVar6 /*2*/])))
								{
									func_106(&(Local_80.f_16C[iVar6 /*2*/]));
								}
								if (unk_0xEAE0D21A50E6C7F4(Local_80.f_113[func_91(iVar6)], func_90(iVar6)))
								{
									unk_0x0674E58A79778E99(&(Local_80.f_113[func_91(iVar6)]), func_90(iVar6));
								}
							}
							else
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_110[func_91(iVar6)], func_90(iVar6)))
								{
									if (!func_22(&(Local_80.f_16C[iVar6 /*2*/])))
									{
										func_20(&(Local_80.f_16C[iVar6 /*2*/]), 0x00000000, 0x00000000);
									}
									else if (func_19(&(Local_80.f_16C[iVar6 /*2*/]), 0x00001B58, 0x00000000))
									{
										unk_0x5D96D8530B3D0904(&(Local_80.f_110[func_91(iVar6)]), func_90(iVar6));
										func_106(&(Local_80.f_16C[iVar6 /*2*/]));
									}
								}
								if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_113[func_91(iVar6)], func_90(iVar6)))
								{
									unk_0x5D96D8530B3D0904(&(Local_80.f_113[func_91(iVar6)]), func_90(iVar6));
								}
							}
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_110[func_91(iVar6)], func_90(iVar6)) || Local_80.f_1B == joaat("hydra"))
					{
						if (!func_19(&(Local_80.f_19E[(iVar0 * 4 + iVar1) /*2*/]), 0x00001388, 0x00000000))
						{
						}
						func_25(&(Local_80.f_30[(iVar0 * 4 + iVar1)]));
						if (unk_0xEAE0D21A50E6C7F4(Local_80.f_110[func_91(iVar6)], func_90(iVar6)))
						{
							if (Local_80.f_55[(iVar0 * 4 + iVar1)] > 0x00000000)
							{
								Local_80.f_FE++;
								func_89((iVar0 * 4 + iVar1), func_104(0x00000001));
							}
						}
						Local_80.f_55[(iVar0 * 4 + iVar1)] = 0x00000000;
						if (unk_0xEAE0D21A50E6C7F4(Local_80.f_113[func_91(iVar6)], func_90(iVar6)))
						{
							unk_0x0674E58A79778E99(&(Local_80.f_113[func_91(iVar6)]), func_90(iVar6));
						}
					}
					else
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_110[func_91(iVar6)], func_90(iVar6)))
						{
							if (!func_22(&(Local_80.f_16C[iVar6 /*2*/])))
							{
								func_20(&(Local_80.f_16C[iVar6 /*2*/]), 0x00000000, 0x00000000);
							}
							else if (func_19(&(Local_80.f_16C[iVar6 /*2*/]), 0x00001B58, 0x00000000))
							{
								unk_0x5D96D8530B3D0904(&(Local_80.f_110[func_91(iVar6)]), func_90(iVar6));
								func_106(&(Local_80.f_16C[iVar6 /*2*/]));
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_113[func_91(iVar6)], func_90(iVar6)))
						{
							unk_0x5D96D8530B3D0904(&(Local_80.f_113[func_91(iVar6)]), func_90(iVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_80.f_F9 < func_103())
			{
				if (func_73(iVar0))
				{
				}
				unk_0x0674E58A79778E99(&(Local_80.f_3), 0x00000000);
			}
			iVar0++;
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000002))
	{
		if (Local_80.f_F7 >= Global_40001.f_27DF)
		{
			unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000002);
		}
		iVar1 = 0x00000000;
		iVar1 = 0x00000000;
		while (iVar1 < Local_80.f_F3)
		{
			if (unk_0xE9F78D191AD5EDBA(Local_80.f_30[(0x00000014 + iVar1)]))
			{
				iVar7 = (0x00000014 + iVar1);
				if (!unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iVar1)]), 0x00000000))
				{
					unk_0x0674E58A79778E99(&(Local_80.f_3), 0x00000002);
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_110[func_91(iVar7)], func_90(iVar7)))
				{
					if (!func_19(&(Local_80.f_19E[(0x00000014 + iVar1) /*2*/]), 0x00001388, 0x00000000))
					{
					}
					if (func_22(&(Local_80.f_16C[iVar7 /*2*/])))
					{
						func_106(&(Local_80.f_16C[iVar7 /*2*/]));
					}
					func_25(&(Local_80.f_30[(0x00000014 + iVar1)]));
					if (Local_80.f_55[(0x00000014 + iVar1)] > 0x00000000)
					{
						Local_80.f_FE++;
						if (func_98() > 0x00000001)
						{
							if (Local_80.f_13D > 0x00000000)
							{
								Local_80.f_13C++;
							}
						}
						func_89((0x00000014 + iVar1), func_104(0x00000001));
					}
					Local_80.f_55[(0x00000014 + iVar1)] = 0x00000000;
					if (unk_0xEAE0D21A50E6C7F4(Local_80.f_113[func_91(iVar7)], func_90(iVar7)))
					{
						unk_0x0674E58A79778E99(&(Local_80.f_113[func_91(iVar7)]), func_90(iVar7));
					}
				}
				else
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_110[func_91(iVar7)], func_90(iVar7)))
					{
						if (!func_22(&(Local_80.f_16C[iVar7 /*2*/])))
						{
							func_20(&(Local_80.f_16C[iVar7 /*2*/]), 0x00000000, 0x00000000);
						}
						else if (func_19(&(Local_80.f_16C[iVar7 /*2*/]), 0x00001B58, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(Local_80.f_110[func_91(iVar7)]), func_90(iVar7));
							func_106(&(Local_80.f_16C[iVar7 /*2*/]));
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_113[func_91(iVar7)], func_90(iVar7)))
					{
						unk_0x5D96D8530B3D0904(&(Local_80.f_113[func_91(iVar7)]), func_90(iVar7));
					}
				}
			}
			if (Local_80.f_F7 < func_72())
			{
				if (func_51(iVar1))
				{
				}
				unk_0x0674E58A79778E99(&(Local_80.f_3), 0x00000002);
			}
			iVar1++;
		}
	}
	func_36();
}

void func_36()
{
	int iVar0;
	int iVar1;
	
	if (func_98() == 0x00000001)
	{
		return;
	}
	if (func_98() == 0x00000002)
	{
		if (Local_80.f_FC > 0x00000000)
		{
			if (Local_80.f_12E > 0x00000000)
			{
				if (Local_80.f_12E >= (Local_80.f_FC - 0x00000001))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0x00000000)
						{
							iVar0 = Local_80.f_117 + 1;
							if (iVar0 < 0x0000000A)
							{
								iVar1 = Local_80.f_118[iVar0];
								if (iVar1 != 0x00000005)
								{
									func_47();
									Local_80.f_117++;
									func_40();
								}
								else if (Local_80.f_13E >= func_39())
								{
									func_47();
									Local_80.f_117++;
									func_40();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 0x00000003)
	{
		if (Local_80.f_13D > 0x00000000)
		{
			if (Local_80.f_13C > 0x00000000)
			{
				if (Local_80.f_13C >= Local_80.f_13D)
				{
					if (Local_80.f_13D >= func_38())
					{
						func_47();
						Local_80.f_117++;
						func_40();
					}
				}
			}
		}
	}
	else if (func_98() == 0x00000004)
	{
		if (Local_80.f_13C > 0x00000000)
		{
			if (Local_80.f_12E > 0x00000000)
			{
				if (Local_80.f_13D > 0x00000000)
				{
					if (Local_80.f_13C >= (Local_80.f_13D - 0x00000002))
					{
						if (Local_80.f_FC > 0x00000000)
						{
							if (Local_80.f_12E >= (Local_80.f_FC - 0x00000002))
							{
								if (func_50() <= func_49())
								{
									if (func_48() <= func_37())
									{
										iVar0 = Local_80.f_117 + 1;
										if (iVar0 < 0x0000000A)
										{
											iVar1 = Local_80.f_118[iVar0];
											if (iVar1 != 0x00000005)
											{
												func_47();
												Local_80.f_117++;
												func_40();
											}
											else if (Local_80.f_13E >= func_39())
											{
												func_47();
												Local_80.f_117++;
												func_40();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 0x00000005)
	{
		if (Local_80.f_FC > 0x00000000)
		{
			if (Local_80.f_12E > 0x00000000)
			{
				if (Local_80.f_12E >= (Local_80.f_FC - 0x00000001))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0x00000000)
						{
							func_47();
							Local_80.f_117++;
							func_40();
						}
					}
				}
			}
		}
	}
}

int func_37()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_80.f_117 + 1;
	if (iVar0 < 0x0000000A)
	{
		iVar1 = Local_80.f_118[iVar0];
		switch (iVar1)
		{
			case 0x00000001:
				return 0x00000063;
				break;
			
			case 0x00000002:
				return 0x00000001;
				break;
			
			case 0x00000004:
				if (func_98() == 0x00000004)
				{
					return 0x00000002;
				}
				else if (func_98() == 0x00000002)
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000005:
				return 0x00000000;
				break;
		}
	}
	else
	{
		return 0x00000063;
	}
	return 0x00000063;
}

int func_38()
{
	return Local_80.f_131[Local_80.f_117];
}

int func_39()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < Local_80.f_116)
	{
		iVar0 = (iVar0 + Local_80.f_131[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_40()
{
	int iVar0;
	
	if (Local_80.f_1D == 0xFFFFFFFF)
	{
		iVar0 = func_46(Local_80.f_1B);
		Local_80.f_1D = unk_0x09AC81E49EA267F7(0x00000000, iVar0);
		if (func_742())
		{
			if (Local_80.f_1B == joaat("hydra"))
			{
				if (Local_80.f_1D == 0x00000002)
				{
					Local_80.f_1D = 0x00000004;
				}
			}
			else if (Local_80.f_1B == joaat("savage"))
			{
				if (Local_80.f_1D == 0x00000000)
				{
					Local_80.f_1D = 0x00000001;
				}
				else if (Local_80.f_1D == 0x00000001)
				{
					Local_80.f_1D = 0x00000002;
				}
				else if (Local_80.f_1D == 0x00000002)
				{
					Local_80.f_1D = 0x00000003;
				}
			}
			else if (Local_80.f_1B == joaat("valkyrie"))
			{
				if (Local_80.f_1D == 0x00000002)
				{
					Local_80.f_1D = 0x00000003;
				}
				else if (Local_80.f_1D == 0x00000003)
				{
					Local_80.f_1D = 0x00000004;
				}
			}
			else if (Local_80.f_1B == joaat("buzzard"))
			{
				if (Local_80.f_1D == 0x00000000)
				{
					Local_80.f_1D = 0x00000001;
				}
				else if (Local_80.f_1D == 0x00000001)
				{
					Local_80.f_1D = 0x00000002;
				}
				else if (Local_80.f_1D == 0x00000002)
				{
					Local_80.f_1D = 0x00000003;
				}
				else if (Local_80.f_1D == 0x00000003)
				{
					Local_80.f_1D = 0x00000004;
				}
			}
		}
		else if (Local_80.f_1B == joaat("savage"))
		{
			if (Local_80.f_1D == 0x00000000)
			{
				Local_80.f_1D = 0x00000001;
			}
			else if (Local_80.f_1D == 0x00000001)
			{
				Local_80.f_1D = 0x00000002;
			}
			else if (Local_80.f_1D == 0x00000002)
			{
				Local_80.f_1D = 0x00000003;
			}
		}
	}
	switch (Local_80.f_1B)
	{
		case joaat("rhino"):
			Local_80.f_118[0x00000000] = 0x00000004;
			Local_80.f_123[0x00000000] = func_45(0x00000004);
			Local_80.f_131[0x00000000] = func_44(0x00000004);
			Local_80.f_118[0x00000001] = 0x00000004;
			Local_80.f_123[0x00000001] = func_45(0x00000004);
			Local_80.f_131[0x00000001] = func_44(0x00000004);
			Local_80.f_118[0x00000002] = 0x00000004;
			Local_80.f_123[0x00000002] = func_45(0x00000004);
			Local_80.f_131[0x00000002] = func_44(0x00000004);
			if (Local_80.f_C <= 0x00000002 || !func_742())
			{
				Local_80.f_116 = 0x00000003;
			}
			else if (Local_80.f_C == 0x00000003)
			{
				Local_80.f_118[0x00000003] = 0x00000004;
				Local_80.f_123[0x00000003] = func_45(0x00000004);
				Local_80.f_131[0x00000003] = func_44(0x00000004);
				Local_80.f_116 = 0x00000004;
			}
			else
			{
				Local_80.f_118[0x00000003] = 0x00000004;
				Local_80.f_123[0x00000003] = func_45(0x00000004);
				Local_80.f_131[0x00000003] = func_44(0x00000004);
				Local_80.f_118[0x00000004] = 0x00000004;
				Local_80.f_123[0x00000004] = func_45(0x00000004);
				Local_80.f_131[0x00000004] = func_44(0x00000004);
				Local_80.f_116 = 0x00000005;
			}
			Local_80.f_FF = func_41();
			if (!func_742())
			{
				Local_80.f_1 = 0x00000000;
			}
			else
			{
				Local_80.f_1 = 0x00000005;
			}
			Local_80.f_2 = Local_80.f_1D;
			switch (Local_80.f_1D)
			{
				case 0x00000000:
					Local_80.f_1E[0x00000000 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_80.f_2B[0x00000000] = 269.414f;
					Local_80.f_1E[0x00000001 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_80.f_2B[0x00000001] = 3.5491f;
					Local_80.f_1E[0x00000002 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_80.f_2B[0x00000002] = 54.4509f;
					Local_80.f_1E[0x00000003 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_80.f_2B[0x00000003] = 178.1948f;
					Local_80.f_9F[0x00000000 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_80.f_AF[0x00000000] = 270.8322f;
					Local_80.f_9F[0x00000001 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_80.f_AF[0x00000001] = 177.3506f;
					Local_80.f_9F[0x00000002 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_80.f_AF[0x00000002] = 318.1089f;
					Local_80.f_9F[0x00000003 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_80.f_AF[0x00000003] = 272.0801f;
					Local_80.f_9F[0x00000004 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_80.f_AF[0x00000004] = 104.0591f;
					Local_80.f_75[0x00000000 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_80.f_94[0x00000000] = 296.4225f;
					Local_80.f_75[0x00000001 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_80.f_94[0x00000001] = 164.9695f;
					Local_80.f_75[0x00000002 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_80.f_94[0x00000002] = 136.0596f;
					Local_80.f_75[0x00000003 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_80.f_94[0x00000003] = 116.379f;
					Local_80.f_75[0x00000004 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_80.f_94[0x00000004] = 86.6586f;
					Local_80.f_75[0x00000005 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_80.f_94[0x00000005] = 74.6822f;
					Local_80.f_75[0x00000006 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_80.f_94[0x00000006] = 206.8863f;
					Local_80.f_75[0x00000007 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_80.f_94[0x00000007] = 267.8581f;
					Local_80.f_75[0x00000008 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_80.f_94[0x00000008] = 267.5856f;
					Local_80.f_75[0x00000009 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_80.f_94[0x00000009] = 325.0964f;
					break;
				
				case 0x00000001:
					Local_80.f_1E[0x00000000 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_80.f_2B[0x00000000] = 194.8062f;
					Local_80.f_1E[0x00000001 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_80.f_2B[0x00000001] = 238.9372f;
					Local_80.f_1E[0x00000002 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_80.f_2B[0x00000002] = 16.3071f;
					Local_80.f_1E[0x00000003 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_80.f_2B[0x00000003] = 209.9883f;
					Local_80.f_75[0x00000000 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_80.f_94[0x00000000] = 221.3913f;
					Local_80.f_75[0x00000001 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_80.f_94[0x00000001] = 246.3415f;
					Local_80.f_75[0x00000002 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_80.f_94[0x00000002] = 213.4087f;
					Local_80.f_75[0x00000003 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_80.f_94[0x00000003] = 100.5405f;
					Local_80.f_75[0x00000004 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_80.f_94[0x00000004] = 289.6017f;
					Local_80.f_75[0x00000005 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_80.f_94[0x00000005] = 285.6456f;
					Local_80.f_75[0x00000006 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_80.f_94[0x00000006] = 310.9245f;
					Local_80.f_75[0x00000007 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_80.f_94[0x00000007] = 46.7117f;
					Local_80.f_75[0x00000008 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_80.f_94[0x00000008] = 35.9192f;
					Local_80.f_75[0x00000009 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_80.f_94[0x00000009] = 207.53f;
					Local_80.f_9F[0x00000000 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_80.f_AF[0x00000000] = 286.6127f;
					Local_80.f_9F[0x00000001 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_80.f_AF[0x00000001] = 124.1428f;
					Local_80.f_9F[0x00000002 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_80.f_AF[0x00000002] = 275.0147f;
					Local_80.f_9F[0x00000003 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_80.f_AF[0x00000003] = 287.91f;
					Local_80.f_9F[0x00000004 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_80.f_AF[0x00000004] = 270.287f;
					break;
				
				case 0x00000002:
					Local_80.f_1E[0x00000000 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_80.f_2B[0x00000000] = 172.439f;
					Local_80.f_1E[0x00000001 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_80.f_2B[0x00000001] = 53.9805f;
					Local_80.f_1E[0x00000002 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_80.f_2B[0x00000002] = 303.2142f;
					Local_80.f_1E[0x00000003 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_80.f_2B[0x00000003] = 218.5974f;
					Local_80.f_75[0x00000000 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_80.f_94[0x00000000] = 264.5842f;
					Local_80.f_75[0x00000001 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_80.f_94[0x00000001] = 133.7932f;
					Local_80.f_75[0x00000002 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_80.f_94[0x00000002] = 205.1215f;
					Local_80.f_75[0x00000003 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_80.f_94[0x00000003] = 66.1065f;
					Local_80.f_75[0x00000004 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_80.f_94[0x00000004] = 7.8064f;
					Local_80.f_75[0x00000005 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_80.f_94[0x00000005] = 358.7563f;
					Local_80.f_75[0x00000006 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_80.f_94[0x00000006] = 142.1748f;
					Local_80.f_75[0x00000007 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_80.f_94[0x00000007] = 247.816f;
					Local_80.f_75[0x00000008 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_80.f_94[0x00000008] = 124.4666f;
					Local_80.f_75[0x00000009 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_80.f_94[0x00000009] = 348.6588f;
					Local_80.f_9F[0x00000000 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_80.f_AF[0x00000000] = 89.8563f;
					Local_80.f_9F[0x00000001 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_80.f_AF[0x00000001] = 163.8004f;
					Local_80.f_9F[0x00000002 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_80.f_AF[0x00000002] = 270.0754f;
					Local_80.f_9F[0x00000003 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_80.f_AF[0x00000003] = 184.9752f;
					Local_80.f_9F[0x00000004 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_80.f_AF[0x00000004] = 90.4555f;
					break;
				
				case 0x00000003:
				case 0x00000004:
					Local_80.f_1E[0x00000000 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_80.f_2B[0x00000000] = 0.5044f;
					Local_80.f_1E[0x00000001 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_80.f_2B[0x00000001] = 179.2507f;
					Local_80.f_1E[0x00000002 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_80.f_2B[0x00000002] = 0.3066f;
					Local_80.f_1E[0x00000003 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_80.f_2B[0x00000003] = 180.2973f;
					Local_80.f_75[0x00000000 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_80.f_94[0x00000000] = 336.7541f;
					Local_80.f_75[0x00000001 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_80.f_94[0x00000001] = 6.0929f;
					Local_80.f_75[0x00000002 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_80.f_94[0x00000002] = 4.2803f;
					Local_80.f_75[0x00000003 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_80.f_94[0x00000003] = 274.985f;
					Local_80.f_75[0x00000004 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_80.f_94[0x00000004] = 267.2555f;
					Local_80.f_75[0x00000005 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_80.f_94[0x00000005] = 6.5529f;
					Local_80.f_75[0x00000006 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_80.f_94[0x00000006] = 89.1724f;
					Local_80.f_75[0x00000007 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_80.f_94[0x00000007] = 348.279f;
					Local_80.f_75[0x00000008 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_80.f_94[0x00000008] = 267.8075f;
					Local_80.f_75[0x00000009 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_80.f_94[0x00000009] = 0.5237f;
					Local_80.f_9F[0x00000000 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_80.f_AF[0x00000000] = 357.9713f;
					Local_80.f_9F[0x00000001 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_80.f_AF[0x00000001] = 269.3234f;
					Local_80.f_9F[0x00000002 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_80.f_AF[0x00000002] = 269.3055f;
					Local_80.f_9F[0x00000003 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_80.f_AF[0x00000003] = 359.1497f;
					Local_80.f_9F[0x00000004 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_80.f_AF[0x00000004] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_80.f_F0 = joaat("insurgent");
			Local_80.f_118[0x00000000] = 0x00000002;
			Local_80.f_123[0x00000000] = func_45(0x00000002);
			Local_80.f_118[0x00000001] = 0x00000004;
			Local_80.f_123[0x00000001] = func_45(0x00000004);
			Local_80.f_131[0x00000001] = func_44(0x00000004);
			Local_80.f_118[0x00000002] = 0x00000002;
			Local_80.f_123[0x00000002] = func_45(0x00000002);
			if (Local_80.f_C <= 0x00000002 || !func_742())
			{
				Local_80.f_118[0x00000003] = 0x00000005;
				Local_80.f_123[0x00000003] = func_45(0x00000005);
				Local_80.f_116 = 0x00000004;
			}
			else if (Local_80.f_C == 0x00000003)
			{
				Local_80.f_118[0x00000003] = 0x00000004;
				Local_80.f_123[0x00000003] = func_45(0x00000004);
				Local_80.f_131[0x00000003] = func_44(0x00000004);
				Local_80.f_118[0x00000004] = 0x00000002;
				Local_80.f_123[0x00000004] = func_45(0x00000002);
				Local_80.f_118[0x00000005] = 0x00000005;
				Local_80.f_123[0x00000005] = func_45(0x00000005);
				Local_80.f_116 = 0x00000006;
			}
			else
			{
				Local_80.f_118[0x00000003] = 0x00000004;
				Local_80.f_123[0x00000003] = func_45(0x00000004);
				Local_80.f_131[0x00000003] = func_44(0x00000004);
				Local_80.f_118[0x00000004] = 0x00000002;
				Local_80.f_123[0x00000004] = func_45(0x00000002);
				Local_80.f_118[0x00000005] = 0x00000004;
				Local_80.f_123[0x00000005] = func_45(0x00000004);
				Local_80.f_131[0x00000005] = func_44(0x00000004);
				Local_80.f_118[0x00000006] = 0x00000005;
				Local_80.f_123[0x00000006] = func_45(0x00000005);
				Local_80.f_116 = 0x00000007;
			}
			Local_80.f_FF = func_41();
			if (!func_742())
			{
				Local_80.f_1 = 0x00000002;
			}
			else
			{
				Local_80.f_1 = 0x00000007;
			}
			Local_80.f_2 = Local_80.f_1D;
			switch (Local_80.f_1D)
			{
				case 0x00000000:
					Local_80.f_1E[0x00000000 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_80.f_2B[0x00000000] = 331.74f;
					Local_80.f_1E[0x00000001 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_80.f_2B[0x00000001] = 327.7335f;
					Local_80.f_1E[0x00000002 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_80.f_2B[0x00000002] = 149.1604f;
					Local_80.f_1E[0x00000003 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_80.f_2B[0x00000003] = 150.6753f;
					Local_80.f_75[0x00000000 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_80.f_94[0x00000000] = 147.2177f;
					Local_80.f_75[0x00000001 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_80.f_94[0x00000001] = 103.9461f;
					Local_80.f_75[0x00000002 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_80.f_94[0x00000002] = 160.822f;
					Local_80.f_75[0x00000003 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_80.f_94[0x00000003] = 205.8375f;
					Local_80.f_75[0x00000004 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_80.f_94[0x00000004] = 124.7328f;
					break;
				
				case 0x00000001:
					Local_80.f_1E[0x00000000 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_80.f_2B[0x00000000] = 344.2504f;
					Local_80.f_1E[0x00000001 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_80.f_2B[0x00000001] = 340.3425f;
					Local_80.f_1E[0x00000002 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_80.f_2B[0x00000002] = 351.5693f;
					Local_80.f_1E[0x00000003 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_80.f_2B[0x00000003] = 354.2446f;
					Local_80.f_75[0x00000000 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_80.f_94[0x00000000] = 245.2865f;
					Local_80.f_75[0x00000001 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_80.f_94[0x00000001] = 74.1185f;
					Local_80.f_75[0x00000002 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_80.f_94[0x00000002] = 10.2312f;
					Local_80.f_75[0x00000003 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_80.f_94[0x00000003] = 222.4017f;
					Local_80.f_75[0x00000004 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_80.f_94[0x00000004] = 150.2763f;
					Local_80.f_75[0x00000005 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_80.f_94[0x00000005] = 105.4526f;
					Local_80.f_75[0x00000006 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_80.f_94[0x00000006] = 88.9429f;
					Local_80.f_75[0x00000007 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_80.f_94[0x00000007] = 51.1733f;
					Local_80.f_75[0x00000008 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_80.f_94[0x00000008] = 169.7083f;
					Local_80.f_75[0x00000009 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_80.f_94[0x00000009] = 29.5849f;
					Local_80.f_F3 = 0x00000003;
					break;
				
				case 0x00000002:
					if (!func_742())
					{
						Local_80.f_1E[0x00000000 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_80.f_2B[0x00000000] = 319.153f;
					}
					else
					{
						Local_80.f_1E[0x00000000 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_80.f_2B[0x00000000] = 319.153f;
						Local_80.f_1E[0x00000001 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_80.f_2B[0x00000001] = 316.7079f;
						Local_80.f_1E[0x00000002 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_80.f_2B[0x00000002] = 316.9623f;
						Local_80.f_1E[0x00000003 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_80.f_2B[0x00000003] = 314.2003f;
					}
					Local_80.f_75[0x00000000 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_80.f_94[0x00000000] = 326.4292f;
					Local_80.f_75[0x00000001 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_80.f_94[0x00000001] = 6.8118f;
					Local_80.f_75[0x00000002 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_80.f_94[0x00000002] = 32.8776f;
					Local_80.f_75[0x00000003 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_80.f_94[0x00000003] = 8.387f;
					Local_80.f_75[0x00000004 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_80.f_94[0x00000004] = 291.5504f;
					Local_80.f_75[0x00000005 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_80.f_94[0x00000005] = 333.1838f;
					Local_80.f_75[0x00000006 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_80.f_94[0x00000006] = 203.8353f;
					Local_80.f_75[0x00000007 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_80.f_94[0x00000007] = 32.2329f;
					Local_80.f_75[0x00000008 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_80.f_94[0x00000008] = 195.4847f;
					Local_80.f_75[0x00000009 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_80.f_94[0x00000009] = 327.4941f;
					Local_80.f_F3 = 0x00000004;
					break;
				
				case 0x00000003:
					if (!func_742())
					{
						Local_80.f_1E[0x00000000 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_80.f_2B[0x00000000] = 156.0209f;
					}
					else
					{
						Local_80.f_1E[0x00000000 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_80.f_2B[0x00000000] = 156.0209f;
						Local_80.f_1E[0x00000001 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_80.f_2B[0x00000001] = 41.8571f;
						Local_80.f_1E[0x00000002 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_80.f_2B[0x00000002] = 305.7411f;
						Local_80.f_1E[0x00000003 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_80.f_2B[0x00000003] = 223.2489f;
					}
					if (func_98() == 0x00000002 || func_98() == 0x00000005)
					{
						Local_80.f_F2 = 0x00000003;
					}
					else
					{
						Local_80.f_F2 = 0x00000004;
					}
					Local_80.f_75[0x00000000 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_80.f_94[0x00000000] = 197.3456f;
					Local_80.f_75[0x00000001 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_80.f_94[0x00000001] = 140.7211f;
					Local_80.f_75[0x00000002 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_80.f_94[0x00000002] = 98.9528f;
					Local_80.f_75[0x00000003 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_80.f_94[0x00000003] = 107.0238f;
					Local_80.f_75[0x00000004 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_80.f_94[0x00000004] = 202.129f;
					Local_80.f_75[0x00000005 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_80.f_94[0x00000005] = 230.1207f;
					Local_80.f_75[0x00000006 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_80.f_94[0x00000006] = 36.194f;
					Local_80.f_75[0x00000007 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_80.f_94[0x00000007] = 48.2522f;
					Local_80.f_75[0x00000008 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_80.f_94[0x00000008] = 296.114f;
					Local_80.f_75[0x00000009 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_80.f_94[0x00000009] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_80.f_F0 = joaat("lazer");
			Local_80.f_118[0x00000000] = 0x00000002;
			Local_80.f_123[0x00000000] = func_45(0x00000002);
			Local_80.f_118[0x00000001] = 0x00000002;
			Local_80.f_123[0x00000001] = func_45(0x00000002);
			Local_80.f_118[0x00000002] = 0x00000002;
			Local_80.f_123[0x00000002] = func_45(0x00000002);
			if (Local_80.f_C <= 0x00000002 || !func_742())
			{
				Local_80.f_116 = 0x00000003;
			}
			else if (Local_80.f_C == 0x00000003)
			{
				Local_80.f_118[0x00000003] = 0x00000002;
				Local_80.f_123[0x00000003] = func_45(0x00000002);
				Local_80.f_118[0x00000004] = 0x00000002;
				Local_80.f_123[0x00000004] = func_45(0x00000002);
				Local_80.f_116 = 0x00000005;
			}
			else
			{
				Local_80.f_118[0x00000003] = 0x00000002;
				Local_80.f_123[0x00000003] = func_45(0x00000002);
				Local_80.f_118[0x00000004] = 0x00000002;
				Local_80.f_123[0x00000004] = func_45(0x00000002);
				Local_80.f_118[0x00000005] = 0x00000002;
				Local_80.f_123[0x00000005] = func_45(0x00000002);
				Local_80.f_116 = 0x00000006;
			}
			Local_80.f_FF = func_41();
			if (!func_742())
			{
				Local_80.f_1 = 0x00000001;
			}
			else
			{
				Local_80.f_1 = 0x00000006;
			}
			Local_80.f_2 = Local_80.f_1D;
			switch (Local_80.f_1D)
			{
				case 0x00000000:
					if (!func_742())
					{
						Local_80.f_1E[0x00000000 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_80.f_2B[0x00000000] = 197.4435f;
					}
					else
					{
						Local_80.f_1E[0x00000000 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_80.f_2B[0x00000000] = 197.4435f;
						Local_80.f_1E[0x00000001 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_80.f_2B[0x00000001] = 197.1133f;
						Local_80.f_1E[0x00000002 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_80.f_2B[0x00000002] = 272.2065f;
						Local_80.f_1E[0x00000003 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_80.f_2B[0x00000003] = 142.941f;
					}
					Local_80.f_9F[0x00000000 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_80.f_AF[0x00000000] = 34.149f;
					Local_80.f_9F[0x00000001 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_80.f_AF[0x00000001] = -26.0182f;
					Local_80.f_9F[0x00000002 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_80.f_AF[0x00000002] = 88.3998f;
					Local_80.f_9F[0x00000003 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_80.f_AF[0x00000003] = -141.7949f;
					Local_80.f_E4[0x00000000] = 0x00002710;
					Local_80.f_E4[0x00000001] = 0x00002710;
					Local_80.f_E4[0x00000002] = 0x00002710;
					Local_80.f_E4[0x00000003] = 0x00002710;
					Local_80.f_75[0x00000000 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_80.f_94[0x00000000] = 143.4012f;
					Local_80.f_75[0x00000001 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_80.f_94[0x00000001] = 212.1136f;
					Local_80.f_75[0x00000002 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_80.f_94[0x00000002] = 95.8248f;
					Local_80.f_75[0x00000003 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_80.f_94[0x00000003] = 113.3084f;
					Local_80.f_75[0x00000004 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_80.f_94[0x00000004] = 260.1329f;
					Local_80.f_F2 = 0x00000004;
					break;
				
				case 0x00000001:
					if (!func_742())
					{
						Local_80.f_1E[0x00000000 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_80.f_2B[0x00000000] = 131.0993f;
					}
					else
					{
						Local_80.f_1E[0x00000000 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_80.f_2B[0x00000000] = 131.0993f;
						Local_80.f_1E[0x00000001 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_80.f_2B[0x00000001] = 127.8408f;
						Local_80.f_1E[0x00000002 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_80.f_2B[0x00000002] = 131.1571f;
						Local_80.f_1E[0x00000003 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_80.f_2B[0x00000003] = 132.943f;
					}
					Local_80.f_9F[0x00000000 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_80.f_AF[0x00000000] = 316.9068f;
					Local_80.f_9F[0x00000001 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_80.f_AF[0x00000001] = 142.3075f;
					Local_80.f_9F[0x00000002 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_80.f_AF[0x00000002] = 93.1231f;
					Local_80.f_9F[0x00000003 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_80.f_AF[0x00000003] = -9.0334f;
					Local_80.f_E4[0x00000000] = 0x00002710;
					Local_80.f_E4[0x00000001] = 0x00002710;
					Local_80.f_E4[0x00000002] = 0x00002710;
					Local_80.f_E4[0x00000003] = 0x00002710;
					Local_80.f_75[0x00000000 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_80.f_94[0x00000000] = 236.3566f;
					Local_80.f_75[0x00000001 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_80.f_94[0x00000001] = 212.7533f;
					Local_80.f_75[0x00000002 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_80.f_94[0x00000002] = 299.3619f;
					Local_80.f_75[0x00000003 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_80.f_94[0x00000003] = 115.7556f;
					Local_80.f_75[0x00000004 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_80.f_94[0x00000004] = 191.3862f;
					Local_80.f_F2 = 0x00000004;
					break;
				
				case 0x00000002:
					Local_80.f_1E[0x00000000 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_80.f_2B[0x00000000] = 176.244f;
					Local_80.f_9F[0x00000000 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_80.f_AF[0x00000000] = 93.8354f;
					Local_80.f_9F[0x00000001 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_80.f_AF[0x00000001] = 250.5173f;
					Local_80.f_9F[0x00000002 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_80.f_AF[0x00000002] = 337.8961f;
					Local_80.f_9F[0x00000003 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_80.f_AF[0x00000003] = 142.1369f;
					Local_80.f_E4[0x00000000] = 0x00002710;
					Local_80.f_E4[0x00000001] = 0x00002710;
					Local_80.f_E4[0x00000002] = 0x00002710;
					Local_80.f_E4[0x00000003] = 0x00002710;
					Local_80.f_75[0x00000000 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_80.f_94[0x00000000] = 208.2624f;
					Local_80.f_75[0x00000001 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_80.f_94[0x00000001] = 349.048f;
					Local_80.f_75[0x00000002 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_80.f_94[0x00000002] = 69.8162f;
					Local_80.f_75[0x00000003 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_80.f_94[0x00000003] = 286.6181f;
					Local_80.f_F2 = 0x00000004;
					Local_80.f_F3 = 0x00000004;
					break;
				
				case 0x00000003:
					Local_80.f_1E[0x00000000 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_80.f_2B[0x00000000] = 292.0822f;
					Local_80.f_1E[0x00000001 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_80.f_2B[0x00000001] = 43.3907f;
					Local_80.f_1E[0x00000002 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_80.f_2B[0x00000002] = 124.2279f;
					Local_80.f_1E[0x00000003 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_80.f_2B[0x00000003] = 129.3366f;
					Local_80.f_9F[0x00000000 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_80.f_AF[0x00000000] = 137.5025f;
					Local_80.f_9F[0x00000001 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_80.f_AF[0x00000001] = 227.9336f;
					Local_80.f_9F[0x00000002 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_80.f_AF[0x00000002] = 6.0299f;
					Local_80.f_9F[0x00000003 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_80.f_AF[0x00000003] = -87.5596f;
					Local_80.f_E4[0x00000000] = 0x00002710;
					Local_80.f_E4[0x00000001] = 0x00002710;
					Local_80.f_E4[0x00000002] = 0x00002710;
					Local_80.f_E4[0x00000003] = 0x00002710;
					Local_80.f_F2 = 0x00000004;
					Local_80.f_75[0x00000000 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_80.f_94[0x00000000] = 338.8487f;
					Local_80.f_75[0x00000001 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_80.f_94[0x00000001] = 272.5443f;
					Local_80.f_75[0x00000002 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_80.f_94[0x00000002] = 223.0158f;
					Local_80.f_75[0x00000003 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_80.f_94[0x00000003] = 355.6682f;
					Local_80.f_75[0x00000004 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_80.f_94[0x00000004] = 179.3658f;
					break;
				
				case 0x00000004:
					if (!func_742())
					{
						Local_80.f_1E[0x00000000 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_80.f_2B[0x00000000] = 331.7771f;
					}
					else
					{
						Local_80.f_1E[0x00000000 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_80.f_2B[0x00000000] = 331.7771f;
						Local_80.f_1E[0x00000001 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_80.f_2B[0x00000001] = 324.1843f;
						Local_80.f_1E[0x00000002 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_80.f_2B[0x00000002] = 330.0586f;
						Local_80.f_1E[0x00000003 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_80.f_2B[0x00000003] = 329.5413f;
					}
					Local_80.f_9F[0x00000000 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_80.f_AF[0x00000000] = 146.9594f;
					Local_80.f_9F[0x00000001 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_80.f_AF[0x00000001] = 137.6555f;
					Local_80.f_9F[0x00000002 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_80.f_AF[0x00000002] = 114.7478f;
					Local_80.f_9F[0x00000003 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_80.f_AF[0x00000003] = -84.6269f;
					Local_80.f_E4[0x00000000] = 0x00002710;
					Local_80.f_E4[0x00000001] = 0x00002710;
					Local_80.f_E4[0x00000002] = 0x00002710;
					Local_80.f_E4[0x00000003] = 0x00002710;
					Local_80.f_F2 = 0x00000004;
					Local_80.f_75[0x00000000 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_80.f_94[0x00000000] = 153.0449f;
					Local_80.f_75[0x00000001 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_80.f_94[0x00000001] = 153.1271f;
					Local_80.f_75[0x00000002 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_80.f_94[0x00000002] = 331.3771f;
					Local_80.f_75[0x00000003 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_80.f_94[0x00000003] = 183.2579f;
					Local_80.f_75[0x00000004 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_80.f_94[0x00000004] = 149.3518f;
					break;
				
				case 0x00000005:
					Local_80.f_1E[0x00000000 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_80.f_2B[0x00000000] = 184.7817f;
					Local_80.f_9F[0x00000000 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_80.f_AF[0x00000000] = 91.7761f;
					Local_80.f_9F[0x00000001 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_80.f_AF[0x00000001] = 269.7376f;
					Local_80.f_9F[0x00000002 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_80.f_AF[0x00000001] = 211.4614f;
					Local_80.f_9F[0x00000003 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_80.f_AF[0x00000003] = 148.9204f;
					Local_80.f_E4[0x00000000] = 0x00002710;
					Local_80.f_E4[0x00000001] = 0x00002710;
					Local_80.f_E4[0x00000002] = 0x00002710;
					Local_80.f_E4[0x00000003] = 0x00002710;
					Local_80.f_F2 = 0x00000004;
					Local_80.f_75[0x00000000 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_80.f_94[0x00000000] = 113.298f;
					Local_80.f_75[0x00000001 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_80.f_94[0x00000001] = 353.0292f;
					Local_80.f_75[0x00000002 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_80.f_94[0x00000002] = 216.1793f;
					Local_80.f_75[0x00000003 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_80.f_94[0x00000003] = 347.4008f;
					Local_80.f_F3 = 0x00000004;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_80.f_F0 = joaat("buzzard");
			Local_80.f_118[0x00000000] = 0x00000002;
			Local_80.f_123[0x00000000] = func_45(0x00000002);
			Local_80.f_131[0x00000000] = func_44(0x00000004);
			Local_80.f_118[0x00000001] = 0x00000004;
			Local_80.f_123[0x00000001] = func_45(0x00000004);
			Local_80.f_131[0x00000001] = func_44(0x00000004);
			Local_80.f_118[0x00000002] = 0x00000002;
			Local_80.f_123[0x00000002] = func_45(0x00000002);
			Local_80.f_131[0x00000002] = func_44(0x00000004);
			if (Local_80.f_C <= 0x00000002 || !func_742())
			{
				Local_80.f_118[0x00000003] = 0x00000005;
				Local_80.f_123[0x00000003] = func_45(0x00000005);
				Local_80.f_116 = 0x00000004;
			}
			else if (Local_80.f_C == 0x00000003)
			{
				Local_80.f_118[0x00000003] = 0x00000004;
				Local_80.f_123[0x00000003] = func_45(0x00000004);
				Local_80.f_131[0x00000003] = func_44(0x00000004);
				Local_80.f_118[0x00000004] = 0x00000002;
				Local_80.f_123[0x00000004] = func_45(0x00000002);
				Local_80.f_118[0x00000005] = 0x00000005;
				Local_80.f_123[0x00000005] = func_45(0x00000005);
				Local_80.f_116 = 0x00000006;
			}
			else
			{
				Local_80.f_118[0x00000003] = 0x00000004;
				Local_80.f_123[0x00000003] = func_45(0x00000004);
				Local_80.f_131[0x00000003] = func_44(0x00000004);
				Local_80.f_118[0x00000004] = 0x00000002;
				Local_80.f_123[0x00000004] = func_45(0x00000002);
				Local_80.f_118[0x00000005] = 0x00000004;
				Local_80.f_123[0x00000005] = func_45(0x00000004);
				Local_80.f_131[0x00000005] = func_44(0x00000004);
				Local_80.f_118[0x00000006] = 0x00000005;
				Local_80.f_123[0x00000006] = func_45(0x00000005);
				Local_80.f_116 = 0x00000007;
			}
			Local_80.f_FF = func_41();
			if (!func_742())
			{
				Local_80.f_1 = 0x00000003;
			}
			else
			{
				Local_80.f_1 = 0x00000008;
			}
			Local_80.f_2 = Local_80.f_1D;
			switch (Local_80.f_1D)
			{
				case 0x00000000:
					if (!func_742())
					{
						Local_80.f_1E[0x00000000 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_80.f_2B[0x00000000] = 290.0732f;
					}
					else
					{
						Local_80.f_1E[0x00000000 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_80.f_2B[0x00000000] = 290.0732f;
						Local_80.f_1E[0x00000001 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_80.f_2B[0x00000001] = 231.5867f;
						Local_80.f_1E[0x00000002 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_80.f_2B[0x00000002] = 49.6234f;
						Local_80.f_1E[0x00000003 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_80.f_2B[0x00000003] = 229.3317f;
					}
					Local_80.f_75[0x00000000 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_80.f_94[0x00000000] = 230.0049f;
					Local_80.f_75[0x00000001 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_80.f_94[0x00000001] = 147.9421f;
					Local_80.f_75[0x00000002 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_80.f_94[0x00000002] = 22.3204f;
					Local_80.f_75[0x00000003 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_80.f_94[0x00000003] = 80.7676f;
					Local_80.f_75[0x00000004 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_80.f_94[0x00000004] = 162.0507f;
					Local_80.f_75[0x00000005 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_80.f_94[0x00000005] = 225.9002f;
					Local_80.f_75[0x00000006 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_80.f_94[0x00000006] = 140.0515f;
					Local_80.f_75[0x00000007 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_80.f_94[0x00000007] = 90.6966f;
					Local_80.f_75[0x00000008 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_80.f_94[0x00000008] = 226.042f;
					Local_80.f_75[0x00000009 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_80.f_94[0x00000009] = 79.7294f;
					Local_80.f_F3 = 0x00000004;
					break;
				
				case 0x00000001:
					Local_80.f_1E[0x00000000 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_80.f_2B[0x00000000] = 122.9714f;
					Local_80.f_1E[0x00000001 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_80.f_2B[0x00000001] = 118.6931f;
					Local_80.f_1E[0x00000002 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_80.f_2B[0x00000002] = 26.5272f;
					Local_80.f_1E[0x00000003 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_80.f_2B[0x00000003] = 211.0638f;
					Local_80.f_75[0x00000000 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_80.f_94[0x00000000] = 203.4084f;
					Local_80.f_75[0x00000001 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_80.f_94[0x00000001] = 123.7895f;
					Local_80.f_75[0x00000002 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_80.f_94[0x00000002] = 115.9053f;
					Local_80.f_75[0x00000003 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_80.f_94[0x00000003] = 330.5807f;
					Local_80.f_75[0x00000004 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_80.f_94[0x00000004] = 116.311f;
					Local_80.f_75[0x00000005 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_80.f_94[0x00000005] = 145.855f;
					Local_80.f_75[0x00000006 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_80.f_94[0x00000006] = 41.353f;
					Local_80.f_75[0x00000007 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_80.f_94[0x00000007] = 266.0158f;
					Local_80.f_75[0x00000008 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_80.f_94[0x00000008] = 290.3963f;
					Local_80.f_75[0x00000009 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_80.f_94[0x00000009] = 243.2495f;
					Local_80.f_F3 = 0x00000004;
					break;
				
				case 0x00000002:
					Local_80.f_1E[0x00000000 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_80.f_2B[0x00000000] = 280.2862f;
					Local_80.f_1E[0x00000001 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_80.f_2B[0x00000001] = 32.9157f;
					Local_80.f_1E[0x00000002 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_80.f_2B[0x00000002] = 106.2954f;
					Local_80.f_1E[0x00000003 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_80.f_2B[0x00000003] = 272.3807f;
					Local_80.f_75[0x00000000 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_80.f_94[0x00000000] = 254.5411f;
					Local_80.f_75[0x00000001 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_80.f_94[0x00000001] = 183.227f;
					Local_80.f_75[0x00000002 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_80.f_94[0x00000002] = 338.6039f;
					Local_80.f_75[0x00000003 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_80.f_94[0x00000003] = 71.8258f;
					Local_80.f_75[0x00000004 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_80.f_94[0x00000004] = 179.6626f;
					Local_80.f_75[0x00000005 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_80.f_94[0x00000005] = 272.7491f;
					Local_80.f_75[0x00000006 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_80.f_94[0x00000006] = 270.8252f;
					Local_80.f_75[0x00000007 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_80.f_94[0x00000007] = 180.4937f;
					Local_80.f_75[0x00000008 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_80.f_94[0x00000008] = 107.4297f;
					Local_80.f_75[0x00000009 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_80.f_94[0x00000009] = 247.5728f;
					break;
				
				case 0x00000003:
					Local_80.f_1E[0x00000000 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_80.f_2B[0x00000000] = 117.7311f;
					Local_80.f_1E[0x00000001 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_80.f_2B[0x00000001] = 46.3958f;
					Local_80.f_1E[0x00000002 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_80.f_2B[0x00000002] = 189.2091f;
					Local_80.f_1E[0x00000003 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_80.f_2B[0x00000003] = 50.0778f;
					Local_80.f_75[0x00000000 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_80.f_94[0x00000000] = 229.5714f;
					Local_80.f_75[0x00000001 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_80.f_94[0x00000001] = 136.4963f;
					Local_80.f_75[0x00000002 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_80.f_94[0x00000002] = 88.3908f;
					Local_80.f_75[0x00000003 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_80.f_94[0x00000003] = 271.8922f;
					Local_80.f_75[0x00000004 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_80.f_94[0x00000004] = 316.4374f;
					Local_80.f_75[0x00000005 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_80.f_94[0x00000005] = 246.1521f;
					Local_80.f_75[0x00000006 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_80.f_94[0x00000006] = 198.8985f;
					Local_80.f_75[0x00000007 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_80.f_94[0x00000007] = 257.2332f;
					Local_80.f_75[0x00000008 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_80.f_94[0x00000008] = 104.7808f;
					Local_80.f_75[0x00000009 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_80.f_94[0x00000009] = 339.2293f;
					break;
				
				case 0x00000004:
					Local_80.f_1E[0x00000000 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_80.f_2B[0x00000000] = 306.7662f;
					Local_80.f_1E[0x00000001 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_80.f_2B[0x00000001] = 303.3918f;
					Local_80.f_1E[0x00000002 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_80.f_2B[0x00000002] = 302.365f;
					Local_80.f_1E[0x00000003 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_80.f_2B[0x00000003] = 304.9788f;
					Local_80.f_75[0x00000000 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_80.f_94[0x00000000] = 30.9787f;
					Local_80.f_75[0x00000001 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_80.f_94[0x00000001] = 97.3626f;
					Local_80.f_75[0x00000002 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_80.f_94[0x00000002] = 218.2636f;
					Local_80.f_75[0x00000003 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_80.f_94[0x00000003] = 257.6324f;
					Local_80.f_75[0x00000004 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_80.f_94[0x00000004] = 244.6777f;
					Local_80.f_75[0x00000005 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_80.f_94[0x00000005] = 12.745f;
					Local_80.f_75[0x00000006 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_80.f_94[0x00000006] = 196.3743f;
					Local_80.f_75[0x00000007 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_80.f_94[0x00000007] = 283.2556f;
					Local_80.f_75[0x00000008 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_80.f_94[0x00000008] = 243.4268f;
					Local_80.f_75[0x00000009 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_80.f_94[0x00000009] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_80.f_F0 = joaat("buzzard");
			Local_80.f_118[0x00000000] = 0x00000002;
			Local_80.f_123[0x00000000] = func_45(0x00000002);
			Local_80.f_118[0x00000001] = 0x00000004;
			Local_80.f_123[0x00000001] = func_45(0x00000004);
			Local_80.f_131[0x00000001] = func_44(0x00000004);
			Local_80.f_118[0x00000002] = 0x00000002;
			Local_80.f_123[0x00000002] = func_45(0x00000002);
			if (Local_80.f_C <= 0x00000002 || !func_742())
			{
				Local_80.f_118[0x00000003] = 0x00000005;
				Local_80.f_123[0x00000003] = func_45(0x00000005);
				Local_80.f_116 = 0x00000004;
			}
			else if (Local_80.f_C == 0x00000003)
			{
				Local_80.f_118[0x00000003] = 0x00000004;
				Local_80.f_123[0x00000003] = func_45(0x00000004);
				Local_80.f_131[0x00000003] = func_44(0x00000004);
				Local_80.f_118[0x00000004] = 0x00000002;
				Local_80.f_123[0x00000004] = func_45(0x00000002);
				Local_80.f_118[0x00000005] = 0x00000005;
				Local_80.f_123[0x00000005] = func_45(0x00000005);
				Local_80.f_116 = 0x00000006;
			}
			else
			{
				Local_80.f_118[0x00000003] = 0x00000004;
				Local_80.f_123[0x00000003] = func_45(0x00000004);
				Local_80.f_131[0x00000003] = func_44(0x00000004);
				Local_80.f_118[0x00000004] = 0x00000002;
				Local_80.f_123[0x00000004] = func_45(0x00000002);
				Local_80.f_118[0x00000005] = 0x00000004;
				Local_80.f_123[0x00000005] = func_45(0x00000004);
				Local_80.f_131[0x00000005] = func_44(0x00000004);
				Local_80.f_118[0x00000006] = 0x00000005;
				Local_80.f_123[0x00000006] = func_45(0x00000005);
				Local_80.f_116 = 0x00000007;
			}
			Local_80.f_FF = func_41();
			if (!func_742())
			{
				Local_80.f_1 = 0x00000004;
			}
			else
			{
				Local_80.f_1 = 0x00000009;
			}
			Local_80.f_2 = Local_80.f_1D;
			switch (Local_80.f_1D)
			{
				case 0x00000000:
					Local_80.f_1E[0x00000000 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_80.f_2B[0x00000000] = 180.7904f;
					Local_80.f_1E[0x00000001 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_80.f_2B[0x00000001] = 269.3001f;
					Local_80.f_1E[0x00000002 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_80.f_2B[0x00000002] = 180.39f;
					Local_80.f_1E[0x00000003 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_80.f_2B[0x00000003] = 276.7351f;
					Local_80.f_75[0x00000000 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_80.f_94[0x00000000] = 329.9165f;
					Local_80.f_75[0x00000001 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_80.f_94[0x00000001] = 264.7702f;
					Local_80.f_75[0x00000002 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_80.f_94[0x00000002] = 359.5203f;
					Local_80.f_75[0x00000003 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_80.f_94[0x00000003] = 111.3101f;
					Local_80.f_75[0x00000004 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_80.f_94[0x00000004] = 176.3058f;
					Local_80.f_75[0x00000005 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_80.f_94[0x00000005] = 213.1969f;
					Local_80.f_75[0x00000006 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_80.f_94[0x00000006] = 275.2275f;
					Local_80.f_75[0x00000007 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_80.f_94[0x00000007] = 220.0349f;
					Local_80.f_75[0x00000008 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_80.f_94[0x00000008] = 359.15f;
					Local_80.f_75[0x00000009 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_80.f_94[0x00000009] = 83.4212f;
					break;
				
				case 0x00000001:
					Local_80.f_1E[0x00000000 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_80.f_2B[0x00000000] = 247.4892f;
					Local_80.f_1E[0x00000001 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_80.f_2B[0x00000001] = 66.129f;
					Local_80.f_1E[0x00000002 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_80.f_2B[0x00000002] = 340.0713f;
					Local_80.f_1E[0x00000003 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_80.f_2B[0x00000003] = 245.7466f;
					Local_80.f_75[0x00000000 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_80.f_94[0x00000000] = 252.6017f;
					Local_80.f_75[0x00000001 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_80.f_94[0x00000001] = 245.262f;
					Local_80.f_75[0x00000002 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_80.f_94[0x00000002] = 44.7945f;
					Local_80.f_75[0x00000003 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_80.f_94[0x00000003] = 255.6518f;
					Local_80.f_75[0x00000004 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_80.f_94[0x00000004] = 124.8391f;
					Local_80.f_75[0x00000005 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_80.f_94[0x00000005] = 188.9979f;
					Local_80.f_75[0x00000006 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_80.f_94[0x00000006] = 159.3613f;
					Local_80.f_75[0x00000007 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_80.f_94[0x00000007] = 5.7762f;
					Local_80.f_75[0x00000008 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_80.f_94[0x00000008] = 89.3388f;
					Local_80.f_75[0x00000009 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_80.f_94[0x00000009] = 85.9158f;
					break;
				
				case 0x00000002:
					Local_80.f_1E[0x00000000 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_80.f_2B[0x00000000] = 310.6241f;
					Local_80.f_1E[0x00000001 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_80.f_2B[0x00000001] = 166.0191f;
					Local_80.f_1E[0x00000002 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_80.f_2B[0x00000002] = 343.1715f;
					Local_80.f_1E[0x00000003 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_80.f_2B[0x00000003] = 342.4984f;
					Local_80.f_75[0x00000000 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_80.f_94[0x00000000] = 248.8594f;
					Local_80.f_75[0x00000001 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_80.f_94[0x00000001] = 195.7758f;
					Local_80.f_75[0x00000002 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_80.f_94[0x00000002] = 28.6127f;
					Local_80.f_75[0x00000003 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_80.f_94[0x00000003] = 296.7476f;
					Local_80.f_75[0x00000004 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_80.f_94[0x00000004] = 240.9422f;
					Local_80.f_75[0x00000005 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_80.f_94[0x00000005] = 2.473f;
					Local_80.f_75[0x00000006 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_80.f_94[0x00000006] = 343.6776f;
					Local_80.f_75[0x00000007 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_80.f_94[0x00000007] = 0.2495f;
					Local_80.f_75[0x00000008 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_80.f_94[0x00000008] = 72.7889f;
					Local_80.f_75[0x00000009 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_80.f_94[0x00000009] = 238.4196f;
					break;
				
				case 0x00000003:
					Local_80.f_1E[0x00000000 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_80.f_2B[0x00000000] = 351.0324f;
					Local_80.f_1E[0x00000001 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_80.f_2B[0x00000001] = 3.5452f;
					Local_80.f_1E[0x00000002 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_80.f_2B[0x00000002] = 7.3237f;
					Local_80.f_1E[0x00000003 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_80.f_2B[0x00000003] = 332.0844f;
					Local_80.f_75[0x00000000 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_80.f_94[0x00000000] = 2.6416f;
					Local_80.f_75[0x00000001 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_80.f_94[0x00000001] = 171.8638f;
					Local_80.f_75[0x00000002 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_80.f_94[0x00000002] = 257.0332f;
					Local_80.f_75[0x00000003 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_80.f_94[0x00000003] = 91.7869f;
					Local_80.f_75[0x00000004 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_80.f_94[0x00000004] = 4.2016f;
					Local_80.f_75[0x00000005 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_80.f_94[0x00000005] = 339.729f;
					Local_80.f_75[0x00000006 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_80.f_94[0x00000006] = 359.2033f;
					Local_80.f_75[0x00000007 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_80.f_94[0x00000007] = 333.6298f;
					Local_80.f_75[0x00000008 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_80.f_94[0x00000008] = 73.2788f;
					Local_80.f_75[0x00000009 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_80.f_94[0x00000009] = 96.8181f;
					break;
				
				case 0x00000004:
					Local_80.f_1E[0x00000000 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_80.f_2B[0x00000000] = 42.1535f;
					Local_80.f_1E[0x00000001 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_80.f_2B[0x00000001] = 315.0261f;
					Local_80.f_1E[0x00000002 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_80.f_2B[0x00000002] = 1.2527f;
					Local_80.f_1E[0x00000003 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_80.f_2B[0x00000003] = 1.9403f;
					Local_80.f_75[0x00000000 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_80.f_94[0x00000000] = 352.9674f;
					Local_80.f_75[0x00000001 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_80.f_94[0x00000001] = 88.8285f;
					Local_80.f_75[0x00000002 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_80.f_94[0x00000002] = 177.2297f;
					Local_80.f_75[0x00000003 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_80.f_94[0x00000003] = 273.1487f;
					Local_80.f_75[0x00000004 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_80.f_94[0x00000004] = 225.394f;
					Local_80.f_75[0x00000005 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_80.f_94[0x00000005] = 175.5423f;
					Local_80.f_75[0x00000006 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_80.f_94[0x00000006] = 191.1842f;
					Local_80.f_75[0x00000007 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_80.f_94[0x00000007] = 269.6831f;
					Local_80.f_75[0x00000008 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_80.f_94[0x00000008] = 29.4203f;
					Local_80.f_75[0x00000009 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_80.f_94[0x00000009] = 287.677f;
					break;
			}
			break;
	}
}

int func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_80.f_FF != 0xFFFFFFFF)
	{
		return Local_80.f_FF;
	}
	if (Local_80.f_116 == 0x00000000)
	{
		return ((0x00000004 * Global_40001.f_27DE) + Global_40001.f_27DF);
	}
	iVar2 = func_98();
	iVar3 = func_43(iVar2);
	iVar4 = func_42(iVar3);
	switch (Local_80.f_1B)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0x00000000;
			while (iVar1 < Local_80.f_116)
			{
				iVar0 = (iVar0 + ((Local_80.f_123[iVar1] * iVar4) + Local_80.f_131[iVar1]));
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case joaat("insurgent"):
			return 0x00000002;
			break;
		
		case joaat("lazer"):
			return 0x00000001;
			break;
		
		case joaat("buzzard"):
			return 0x00000004;
			break;
		
		case joaat("mesa3"):
			return 0x00000004;
			break;
		
		case joaat("savage"):
			return 0x00000004;
			break;
	}
	return 0x00000000;
}

int func_43(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000002:
			if (Local_80.f_1B == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 0x00000004:
			if (Local_80.f_1B == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else
			{
				iVar0 = joaat("mesa3");
			}
			break;
		
		case 0x00000005:
			iVar0 = joaat("savage");
			break;
		
		default:
			if (Local_80.f_1B == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_80.f_1B == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
	}
	return iVar0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000004:
		case 0x00000003:
			if (func_742())
			{
				iVar0 = Global_40001.f_2C76;
			}
			else
			{
				iVar0 = Global_40001.f_2B5E;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000002:
			if (func_742())
			{
				iVar0 = Global_40001.f_2C77;
			}
			else
			{
				iVar0 = Global_40001.f_2B5F;
			}
			break;
		
		case 0x00000005:
			if (func_742())
			{
				iVar0 = Global_40001.f_2C78;
			}
			else
			{
				iVar0 = Global_40001.f_2B60;
			}
			break;
		
		case 0x00000004:
			if (func_742())
			{
				iVar0 = Global_40001.f_2C75;
			}
			else
			{
				iVar0 = Global_40001.f_2B5D;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)
{
	if (!func_742())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 0x00000004;
			
			case joaat("hydra"):
				return 0x00000005;
			
			case joaat("savage"):
				return 0x00000003;
			
			case joaat("valkyrie"):
				return 0x00000005;
			
			case joaat("buzzard"):
				return 0x00000005;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 0x00000004;
			
			case joaat("hydra"):
				return 0x00000003;
			
			case joaat("savage"):
				return 0x00000003;
			
			case joaat("valkyrie"):
				return 0x00000004;
			
			case joaat("buzzard"):
				return 0x00000004;
			}
		
		default:
	}
	return 0x00000005;
}

void func_47()
{
	Local_80.f_FC = 0x00000000;
	Local_80.f_12E = 0x00000000;
	Local_80.f_13D = 0x00000000;
	Local_80.f_13C = 0x00000000;
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000014;
	iVar0 = 0x00000014;
	while (iVar0 <= 0x00000017)
	{
		if (!func_31(Local_80.f_30[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_49()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_80.f_117 + 1;
	if (iVar0 < 0x0000000A)
	{
		iVar1 = Local_80.f_118[iVar0];
		switch (iVar1)
		{
			case 0x00000001:
				return 0x00000063;
				break;
			
			case 0x00000002:
				return 0x00000001;
				break;
			
			case 0x00000004:
				if (func_98() == 0x00000004)
				{
					return 0x00000002;
				}
				else if (func_98() == 0x00000002)
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000005:
				return 0x00000000;
				break;
		}
	}
	else
	{
		return 0x00000063;
	}
	return 0x00000063;
}

int func_50()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000005)
	{
		if (func_109(Local_80.f_49[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	if (Local_80.f_13E == 0x00000000 || Local_80.f_13E == func_39())
	{
		if (func_98() == 0x00000002 || func_98() == 0x00000005)
		{
			return 0x00000000;
		}
	}
	if (func_98() == 0x00000003 || func_98() == 0x00000004)
	{
		if (Local_80.f_13D >= func_38())
		{
			iVar0 = Local_80.f_117 + 1;
			if (iVar0 < 0x0000000A)
			{
				iVar1 = Local_80.f_118[iVar0];
				if (iVar1 == 0x00000005)
				{
					bVar2 = 0x00000001;
				}
			}
			if (!bVar2)
			{
				return 0x00000000;
			}
		}
	}
	else if (Local_80.f_13D == 0x00000002)
	{
		iVar0 = Local_80.f_117 + 1;
		if (iVar0 < 0x0000000A)
		{
			iVar1 = Local_80.f_118[iVar0];
			if (iVar1 == 0x00000005)
			{
				bVar2 = 0x00000001;
			}
		}
		if (!bVar2)
		{
			return 0x00000000;
		}
	}
	if (Local_80.f_13E == func_39())
	{
		return 0x00000000;
	}
	if (Local_80.f_13E == func_71())
	{
		return 0x00000000;
	}
	if (func_98() == 0x00000001)
	{
		return 0x00000000;
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_80.f_30[(0x00000014 + iParam0)]))
	{
		if (func_70(Local_80.f_EF) && unk_0x2358623ECCDB11B3(0x00000000, 0x00000001, 0x00000000, 0x00000000))
		{
			if (func_68(&iVar3))
			{
				if (func_55(Local_80.f_75[iVar3 /*3*/], 0x40C00000, 0x3F800000, 0x3F800000, 0x40A00000, 0x00000001, 0x00000001, 0x00000001, 0x42F00000, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
				{
					if (func_54(&(Local_80.f_30[(0x00000014 + iParam0)]), 0x00000016, Local_80.f_EF, Local_80.f_75[iVar3 /*3*/], Local_80.f_94[iVar3], 0x00000001, 0x00000001, 0x00000001))
					{
						unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), iLocal_94);
						unk_0xE2F0767314863BD8(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), 0x00000001, 0x00000000);
						unk_0xC743BD39A24D0583(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), 0x00000000);
						if (iVar3 == 0x00000008 || iVar3 == 0x00000009)
						{
							unk_0x262EF6C6306BEA6C(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), joaat("weapon_rpg"), 0x000061A8, 0x00000001, 0x00000001);
						}
						else
						{
							unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), joaat("weapon_advancedrifle"), 0x000061A8, 0x00000001);
						}
						fVar6 = (30f * func_53());
						unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), SYSTEM::ROUND(fVar6));
						unk_0x083F03A847B640E9(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), 0x00000001);
						unk_0x3CC33E4E9CE523F4(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), 0x00000002);
						unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), 0x00000000, 0x00000001);
						unk_0x26A6B1686E33113F(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), 0x00000001);
						unk_0xB8AFFA077E15E999(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), 0x00000001);
						unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), 0x0000002A, 0x00000001);
						unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), SYSTEM::ROUND((200f * Global_40001.f_9A)), 0x00000000);
						unk_0x20EC6650986ACDC7(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), 0x00000001);
						unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), 0x00000001);
						unk_0x1365063FA6365BE8(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), 0x00000001);
						unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), 0x00000097, 0x00000000);
						iVar4 = unk_0x7F6DC62EA9922664(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]));
						fVar5 = func_52();
						iVar4 = SYSTEM::ROUND((fVar5 * SYSTEM::TO_FLOAT(iVar4)));
						unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_80.f_30[(0x00000014 + iParam0)]), iVar4, 0x00000000);
						iVar7 = (0x00000014 + iParam0);
						if (unk_0xEAE0D21A50E6C7F4(Local_80.f_110[func_91(iVar7)], func_90(iVar7)))
						{
							unk_0x0674E58A79778E99(&(Local_80.f_110[func_91(iVar7)]), func_90(iVar7));
						}
						Local_80.f_F7++;
						Local_80.f_13D++;
						Local_80.f_FA++;
						Local_80.f_13E++;
						func_106(&(Local_80.f_19E[iVar7 /*2*/]));
						func_20(&(Local_80.f_19E[iVar7 /*2*/]), 0x00000000, 0x00000000);
						if (func_22(&(Local_80.f_16C[iVar7 /*2*/])))
						{
							func_106(&(Local_80.f_16C[iVar7 /*2*/]));
						}
						func_20(&(Local_548[iVar3 /*2*/]), 0x00000000, 0x00000000);
						unk_0xCC7D8FBD1C29250B(unk_0x1B50683925F00106(Local_80.f_30[iVar7]), 0x00000001, iLocal_93);
					}
				}
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_80.f_30[(0x00000014 + iParam0)]))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

var func_52()
{
	if (func_742())
	{
		return Global_40001.f_2C6A;
	}
	return Global_40001.f_2B52;
}

float func_53()
{
	if (func_742())
	{
		return Global_40001.f_2C6C;
	}
	return Global_40001.f_2B54;
}

int func_54(var uParam0, int iParam1, int iParam2, vector3 vParam3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0xA3FA8B6D2780D661(0x00000001))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x36F2404464202779(iParam1, iParam2, vParam3, uParam4, iParam6, bParam5);
	*uParam0 = unk_0xE8C9CB886096272A(iVar0);
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(iVar0, iParam7);
		if (unk_0xECE0BE5313FD8BDA(iVar0))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_55(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_24B2D0.f_2 = 0x00000000;
	if (fParam1 > 0f)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0, fParam1))
		{
			return 0x00000000;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0xEA19D5D9230DBB67(vParam0, fParam2))
		{
			return 0x00000000;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x9DD97B5335E52CB9(vParam0, fParam3, iParam16))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam11)
	{
		if (unk_0xA4F4A1E4DDB4728B(vParam0, 2.5f) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (fParam12 > 0f)
	{
		if (func_62(vParam0, fParam12, 0x00000001, 0x00000001, bParam13, bParam15, bParam9, bParam13))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_56(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0x00000000;
			}
		}
	}
	Global_24B2D0.f_2++;
	return 0x00000001;
}

int func_56(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_844(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_58(unk_0xD803B885F5E47A62()), vParam0, 0x00000001) <= (fVar2 + fParam1))
				{
					if (unk_0x8E28E832BEAC3DCE(vParam0, fParam1))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if (func_844(iVar1, 0x00000001, 0x00000001))
		{
			if (!func_16(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 0x00000001 || (iParam2 == 0x00000000 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_57(iVar1) || !bParam8) && !Global_25033E[iVar1 /*421*/].f_103)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
							{
								if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0x00000000 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
							{
								if (unk_0x0EB28750412C3A5A(func_58(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
								{
									if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
									{
										return 0x00000001;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam6 || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
						{
							if (unk_0x0EB28750412C3A5A(func_58(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
							{
								if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
								{
									return 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_57(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_25033E[iParam0 /*421*/].f_F5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_184507[iVar0 /*876*/].f_34F) && !func_60(Global_184507[iVar0 /*876*/].f_350))
	{
		return Global_184507[iVar0 /*876*/].f_350;
	}
	return func_59(iParam0);
}

Vector3 func_59(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_60(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_61()
{
	return Global_2564C8.f_11;
}

int func_62(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if ((iParam6 == 0x00000001 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0x00000000)
		{
			if (func_844(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 0x00000001 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && uParam7) && bParam4) && func_63(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_59(iVar1), vParam0, 0x00000001) < fParam1)
								{
									return 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_63(int iParam0)
{
	if (func_67(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	Global_265942 = { func_66(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_265942))
	{
		return 0x00000001;
	}
	if (func_64(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_65(iParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_65(iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_65(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_5();
}

struct<13> func_66(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_67(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_66(iParam0) };
		Global_26594F = { func_66(iParam1) };
		if (unk_0xF2EC2A39FF9E838D(&Global_265942))
		{
			if (unk_0xF2EC2A39FF9E838D(&Global_26594F))
			{
				unk_0xD9DA83C40D038174(&Global_2658FC, 0x00000023, &Global_265942);
				unk_0xD9DA83C40D038174(&Global_26591F, 0x00000023, &Global_26594F);
				if (Global_2658FC == Global_26591F)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_68(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000A);
	if (!func_69(Local_80.f_75[iVar0 /*3*/], 0f, 0f, 0f, 0x00000000))
	{
		if (!func_22(&(Local_548[iVar0 /*2*/])) || (func_22(&(Local_548[iVar0 /*2*/])) && func_19(&(Local_548[iVar0 /*2*/]), 0x00002710, 0x00000000)))
		{
			*uParam0 = iVar0;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_69(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_70(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	if (Local_80.f_117 == 0x00000000)
	{
		iVar0 = Local_80.f_131[0x00000000];
	}
	else
	{
		iVar1 = 0x00000000;
		while (iVar1 <= Local_80.f_117)
		{
			iVar0 = (iVar0 + Local_80.f_131[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	switch (Local_80.f_1B)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000A)
			{
				iVar1 = (iVar1 + Local_80.f_131[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000004;
	if (func_98() == 0x00000003)
	{
		return 0x00000000;
	}
	if (Local_80.f_F2 < iVar0)
	{
	}
	if (Local_80.f_FB >= iVar0)
	{
		return 0x00000000;
	}
	if (func_98() > 0x00000001)
	{
		iVar1 = func_88();
		if (Local_80.f_FC >= iVar1)
		{
			return 0x00000000;
		}
	}
	if (func_70(Local_80.f_F0) && func_70(Local_80.f_EF))
	{
		if (func_74(iParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_F5, iParam0))
			{
				Local_80.f_F9++;
				Local_80.f_FB++;
				Local_80.f_FC++;
				unk_0x0674E58A79778E99(&(Local_80.f_F5), iParam0);
				if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000013))
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000013);
				}
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_74(int iParam0)
{
	if (unk_0x2358623ECCDB11B3(0x00000004, 0x00000001, 0x00000000, 0x00000000))
	{
		if (func_80(iParam0))
		{
			if (func_75(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_75(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	if (func_109(Local_80.f_49[iParam0]) && unk_0xEAE0D21A50E6C7F4(Local_80.f_F5, iParam0))
	{
		if (func_79(Local_80.f_49[iParam0]))
		{
			if (Local_80.f_74 <= 0x00000000)
			{
				if (unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0])) == joaat("insurgent"))
				{
					Local_80.f_74 = 0x00000002;
				}
				else
				{
					Local_80.f_74 = unk_0xD6DF381716822EFE(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0])) + 1;
					if (Local_80.f_74 > 0x00000004)
					{
						Local_80.f_74 = 0x00000004;
					}
				}
			}
			iVar6 = 0x00000000;
			while (iVar6 < Local_80.f_74)
			{
				if (!unk_0xE9F78D191AD5EDBA(Local_80.f_30[(iParam0 * 4 + iVar6)]))
				{
					if (func_70(Local_80.f_EF))
					{
						iVar4 = (iVar6 - 0x00000001);
						if (unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0x00000000)
							{
								iVar4 = 0x00000007;
							}
						}
						if (func_78(&(Local_80.f_30[(iParam0 * 4 + iVar6)]), Local_80.f_49[iParam0], 0x00000016, Local_80.f_EF, iVar4, 0x00000001, 0x00000001, 0x00000001))
						{
							unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), iLocal_94);
							unk_0xE2F0767314863BD8(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000001, 0x00000000);
							unk_0xC743BD39A24D0583(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000000);
							unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 0x000061A8, 0x00000000);
							if (func_77())
							{
								unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 0x000061A8, 0x00000001);
							}
							else
							{
								unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 0x000061A8, 0x00000001);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_53());
							unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
							unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000002, 0x00000001);
							unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000003, 0x00000000);
							unk_0x083F03A847B640E9(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000001);
							unk_0x3CC33E4E9CE523F4(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000002);
							unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000000, 0x00000001);
							unk_0x26A6B1686E33113F(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000001);
							unk_0xB8AFFA077E15E999(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000001);
							unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND((200f * Global_40001.f_9A)), 0x00000000);
							unk_0x20EC6650986ACDC7(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000001);
							unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000001);
							unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x0000002A, 0x00000001);
							unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000034, 0x00000001);
							unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000035, 0x00000001);
							unk_0xFCCF7611216AE801(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000001);
							unk_0x35126F52AFE6E6CA(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000001);
							unk_0x028142EA0AE5BA8C(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000001);
							unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000097, 0x00000000);
							if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]))))
							{
								if (iVar6 == 0x00000000)
								{
									unk_0x9FA191B317572861(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_76());
									unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
									unk_0x29CD9554726C7577(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000032);
									unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000034, 0x00000001);
									unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000035, 0x00000001);
									unk_0xAA714ADDDC372E0F(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x914E786F);
								}
								uVar0 = Global_40001.f_2C5A;
								uVar1 = Global_40001.f_2C5B;
								uVar2 = Global_40001.f_2C5C;
								uVar3 = Global_40001.f_2C5D;
								unk_0x67415F01577A142E(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000017, uVar0);
								unk_0x67415F01577A142E(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000018, uVar1);
								unk_0x67415F01577A142E(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000019, uVar2);
								unk_0x67415F01577A142E(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x0000001A, uVar3);
							}
							else if (unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]))))
							{
								unk_0x9FA191B317572861(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_76());
								unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
								unk_0x29CD9554726C7577(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000032);
								unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000034, 0x00000001);
								unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000035, 0x00000001);
								uVar0 = Global_40001.f_2C5A;
								uVar1 = Global_40001.f_2C5B;
								uVar2 = Global_40001.f_2C5C;
								uVar3 = Global_40001.f_2C5D;
								unk_0x67415F01577A142E(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000017, uVar0);
								unk_0x67415F01577A142E(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000018, uVar1);
								unk_0x67415F01577A142E(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000019, uVar2);
								unk_0x67415F01577A142E(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x0000001A, uVar3);
							}
							iVar7 = (iParam0 * 4 + iVar6);
							if (unk_0xEAE0D21A50E6C7F4(Local_80.f_110[func_91(iVar7)], func_90(iVar7)))
							{
								unk_0x0674E58A79778E99(&(Local_80.f_110[func_91(iVar7)]), func_90(iVar7));
							}
							unk_0x1365063FA6365BE8(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000001);
							unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000001);
							unk_0x545E1397F38D9D5A(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000001);
							unk_0xCC7D8FBD1C29250B(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), 0x00000001, iLocal_93);
							Local_80.f_FA++;
							func_106(&(Local_80.f_19E[(iParam0 * 4 + iVar6) /*2*/]));
							func_20(&(Local_80.f_19E[(iParam0 * 4 + iVar6) /*2*/]), 0x00000000, 0x00000000);
							if (func_22(&(Local_80.f_16C[(iParam0 * 4 + iVar6) /*2*/])))
							{
								func_106(&(Local_80.f_16C[(iParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < Local_80.f_74)
			{
				if (!unk_0xE9F78D191AD5EDBA(Local_80.f_30[(iParam0 * 4 + iVar6)]))
				{
					return 0x00000000;
				}
				else if (func_31(Local_80.f_30[(iParam0 * 4 + iVar6)]))
				{
					return 0x00000000;
				}
				else if (!unk_0x82CCEAB29E9451DD(unk_0x1B50683925F00106(Local_80.f_30[(iParam0 * 4 + iVar6)]), unk_0xB177666FAB6F4417(Local_80.f_49[iParam0])))
				{
					return 0x00000000;
				}
				iVar6++;
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_76()
{
	if (func_742())
	{
		return Global_40001.f_2C6D;
	}
	return Global_40001.f_2B55;
}

int func_77()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_78(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xA3FA8B6D2780D661(0x00000001))
	{
		return 0x00000000;
	}
	if (!unk_0xE9F78D191AD5EDBA(uParam1))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(uParam1), 0x00000000))
	{
		return 0x00000000;
	}
	*uParam0 = unk_0xE8C9CB886096272A(unk_0x852A19533F896693(unk_0xB177666FAB6F4417(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x1B50683925F00106(*uParam0), iParam7);
		if (unk_0xECE0BE5313FD8BDA(unk_0x1B50683925F00106(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_79(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		unk_0x8D30F6387EE75385(uParam0);
		return unk_0x526BC32A660C89E6(uParam0);
	}
	return 0x00000000;
}

int func_80(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	vector3 vVar10;
	var uVar11;
	int iVar12;
	
	iVar0 = func_98();
	Local_80.f_F0 = func_43(iVar0);
	if (!unk_0xE9F78D191AD5EDBA(Local_80.f_49[iParam0]))
	{
		iVar2 = 0x00000000;
		while (iVar2 < Local_80.f_74)
		{
			iVar3 = (iParam0 * 4 + iVar2);
			if (unk_0xE9F78D191AD5EDBA(Local_80.f_30[iVar3]))
			{
				return 0x00000000;
			}
			iVar2++;
		}
		if (func_70(Local_80.f_F0) && !unk_0xEAE0D21A50E6C7F4(Local_80.f_F5, iParam0))
		{
			fVar8 = 300f;
			if (unk_0xAFB8495D36825275(Local_80.f_F0) || unk_0xC41A9202669A24C4(Local_80.f_F0))
			{
				fVar7 = 300f;
			}
			else
			{
				fVar7 = 100f;
			}
			if (unk_0xC41A9202669A24C4(Local_80.f_F0))
			{
				fVar8 = 800f;
			}
			iVar9 = 0x00000000;
			while (iVar9 < Local_80.f_F2)
			{
				if (func_87(iVar9))
				{
					func_86(Local_80.f_F0, iVar9, &vVar10, &uVar11);
					if (!func_69(vVar10, 0f, 0f, 0f, 0x00000000))
					{
						if (func_55(vVar10, 0x40C00000, 0x3F800000, 0x3F800000, 0x40A00000, 0x00000001, 0x00000001, 0x00000001, fVar8, 0x00000000, 0xFFFFFFFF, 0x00000001, fVar7, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
						{
							vVar4 = { vVar10 };
							fVar5 = uVar11;
							iVar6 = 0x00000001;
							func_8(&(Local_80.f_BA[iVar9 /*2*/]), 0x00000000, 0x00000000);
							iVar9 = Local_80.f_F2;
						}
					}
				}
				iVar9++;
			}
			if (iVar6 == 0x00000001)
			{
				iVar12 = 0x00000001;
				if (unk_0xAFB8495D36825275(Local_80.f_F0) || unk_0xC41A9202669A24C4(Local_80.f_F0))
				{
					iVar12 = 0x00000000;
				}
				if (func_85(iParam0))
				{
					if (func_82(&(Local_80.f_49[iParam0]), Local_80.f_F0, vVar4, fVar5, 0x00000001, 0x00000001, 0x00000001, 0x00000000, iVar12, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000002);
						unk_0x443C9A6DC182DDD5(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000001);
						unk_0x9A8BCD43DBDDCDCA(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000000, 0x00000000);
						unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000002);
						unk_0x56FDC9ADE35F7DB0(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000001, 0x00000001, 0x00000000);
						unk_0x67E3D6EA8D96FD85(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000000);
						unk_0x60A2E7213232AA6E(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000000);
						if (unk_0xAFB8495D36825275(Local_80.f_F0))
						{
							unk_0x873BCADC75FF6D20(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]));
							unk_0xEF190091B5B9F5EB(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000001);
							unk_0xAC0C6241732E36F6(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]));
							unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000000);
						}
						else if (unk_0xC41A9202669A24C4(Local_80.f_F0))
						{
							unk_0xB58CA658A628ED02(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000003);
							unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000000);
							unk_0xEF190091B5B9F5EB(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000001);
							unk_0xAC0C6241732E36F6(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]));
							unk_0x1AEF7184B203A58D(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 30f);
							unk_0xAD0843E7A197DD40(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000001);
							unk_0x5A3A5A037BA16435(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000001);
							fVar1 = 500f;
							unk_0xD458AC1C1D29C3B4(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), SYSTEM::ROUND(fVar1), 0x00000000);
						}
						else
						{
							unk_0xE8832A9E16A57A1F(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000001, 0x00000001);
						}
						if (func_98() == 0x00000005)
						{
							fVar1 = SYSTEM::TO_FLOAT(func_81());
							unk_0xD458AC1C1D29C3B4(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), SYSTEM::ROUND(fVar1), 0x00000000);
							unk_0x722454E43E496678(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), SYSTEM::ROUND(fVar1));
							unk_0xDC544F7DF5E5164D(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), fVar1);
							unk_0xA4C7B5E63E8F6EB3(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), fVar1);
							unk_0x5DAB50E08C3C504A(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), fVar1);
							unk_0x09C4C5C870748A1F(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000000);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x00DB73D97F9E5DCD(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), fVar1);
							unk_0xF38DA70CA19BFE1E(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), fVar1);
						}
						if (func_22(&(Local_80.f_150[iParam0 /*2*/])))
						{
							func_106(&(Local_80.f_150[iParam0 /*2*/]));
						}
						unk_0x0674E58A79778E99(&(Local_80.f_FD), iParam0);
						unk_0x5D96D8530B3D0904(&(Local_80.f_F5), iParam0);
						unk_0xCC7D8FBD1C29250B(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000001, iLocal_93);
						if (unk_0xEAE0D21A50E6C7F4(Local_80.f_10F, iParam0))
						{
							unk_0x0674E58A79778E99(&(Local_80.f_10F), iParam0);
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_80.f_12F, iParam0))
						{
							unk_0x0674E58A79778E99(&(Local_80.f_12F), iParam0);
						}
						if (Local_80.f_F0 == joaat("hydra") || Local_80.f_F0 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_80.f_49[iParam0]))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

var func_81()
{
	if (func_742())
	{
		return Global_40001.f_2C6B;
	}
	return Global_40001.f_2B53;
}

int func_82(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x468C1AC3ABF95C57(iParam1))
	{
		return 0x00000000;
	}
	if (!unk_0xE75B31D140F2F10B(0x00000001))
	{
		return 0x00000000;
	}
	fVar0 = 1.5f;
	if (iParam1 == 0xFE0A508C)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x28F5E4DA506AC0CA(vParam2, fVar0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0xC844350D5D58C99A(iVar1))
	{
		*uParam0 = unk_0xFBA927257CA38E95(iVar1);
		Global_26B66F.f_1974 = iVar1;
		if (unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam13)
			{
				unk_0x271603AF9C0C7EB3(iVar1, 0x00000001);
			}
			unk_0x120A395B0ECB8EA5(iVar1, iParam8);
			if (unk_0xECE0BE5313FD8BDA(iVar1))
			{
				if (bParam6)
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
				}
				else
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0x00000000);
				}
				if (bParam11)
				{
					unk_0x7F379C0A8EB2F4D0(*uParam0, unk_0xD803B885F5E47A62(), 0x00000001);
				}
			}
			unk_0x750A9DEB80D6992C(iVar1, bParam7);
			unk_0x8E44A2B22BBBAFE4(iVar1, 0x00000001);
			if (bParam10)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 0x00000005, 0x00000005, 1f);
			}
			func_83(vParam2, fParam3, iParam1, iVar1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_83(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_84(unk_0xD803B885F5E47A62(), vParam0, iParam2) > 0xFFFFFFFF)
	{
		if ((Global_24B2D0.f_B60[0x00000001 /*6*/].f_5 == iParam3 && Global_24B2D0.f_B60[0x00000001 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_24B2D0.f_B60[0x00000001 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000002)
		{
			if (iVar0 < 0x00000001)
			{
				Global_24B2D0.f_B60[iVar0 /*6*/] = { Global_24B2D0.f_B60[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_24B2D0.f_B60[0x00000001 /*6*/] = { vParam0 };
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_3 = fParam1;
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_4 = iParam2;
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_5 = iParam3;
	}
}

int func_84(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > 0xFFFFFFFF)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000002)
		{
			if (Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (unk_0x755FF954DAE327E1((Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return 0xFFFFFFFF;
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_83[iVar0 /*18*/].f_6, iParam0))
			{
				iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
				return 0x00000000;
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_86(int iParam0, int iParam1, var uParam2, var uParam3)
{
	bool bVar0;
	
	bVar0 = (unk_0xC41A9202669A24C4(iParam0) || unk_0xAFB8495D36825275(iParam0));
	switch (Local_80.f_1B)
	{
		case joaat("rhino"):
			if (!func_69(Local_80.f_9F[iParam1 /*3*/], 0f, 0f, 0f, 0x00000000))
			{
				*uParam2 = { Local_80.f_9F[iParam1 /*3*/] };
				*uParam3 = Local_80.f_AF[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_69(Local_80.f_9F[iParam1 /*3*/], 0f, 0f, 0f, 0x00000000))
			{
				*uParam2 = { Local_80.f_9F[iParam1 /*3*/] };
				*uParam3 = Local_80.f_AF[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_80.f_1D)
			{
				case 0x00000000:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { -1292.189f, -2572.868f, 22.9452f };
								*uParam3 = 332.6443f;
								break;
							
							case 0x00000001:
								*uParam2 = { -1062.843f, -3502.913f, 23.1484f };
								*uParam3 = 326.474f;
								break;
							
							case 0x00000002:
								*uParam2 = { -1842.189f, -3149.964f, 22.9444f };
								*uParam3 = 177.2589f;
								break;
							
							case 0x00000003:
								*uParam2 = { -1271.333f, -2267.149f, 12.9454f };
								*uParam3 = 243.2036f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { -892.8904f, -2935.942f, 12.9444f };
								*uParam3 = 50.7848f;
								break;
							
							case 0x00000001:
								*uParam2 = { -1290.713f, -2658.844f, 13.0516f };
								*uParam3 = 152.2952f;
								break;
							
							case 0x00000002:
								*uParam2 = { -1157.682f, -2725.707f, 12.9534f };
								*uParam3 = 187.5114f;
								break;
							
							case 0x00000003:
								*uParam2 = { -949.6019f, -3072.991f, 12.9444f };
								*uParam3 = 63.8501f;
								break;
							}
					}
					break;
				
				case 0x00000001:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
							
							case 0x00000001:
								*uParam2 = { 2259.96f, 5608.534f, 63.366f };
								*uParam3 = 171.56f;
								break;
							
							case 0x00000002:
								*uParam2 = { 1042.117f, 4282.784f, 47.277f };
								*uParam3 = 284.7637f;
								break;
							
							case 0x00000003:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							
							case 0x00000001:
								*uParam2 = { 2439.703f, 4993.831f, 44.9932f };
								*uParam3 = 136.377f;
								break;
							
							case 0x00000002:
								*uParam2 = { 1972.487f, 4843.981f, 43.13f };
								*uParam3 = 315.4388f;
								break;
							
							case 0x00000003:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							}
					}
					break;
				
				case 0x00000002:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { -822.0636f, 5744.907f, 16.2672f };
								*uParam3 = 305.7653f;
								break;
							
							case 0x00000001:
								*uParam2 = { 22.328f, 6898.096f, 21.23f };
								*uParam3 = 151.4785f;
								break;
							
							case 0x00000002:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
							
							case 0x00000003:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							
							case 0x00000001:
								*uParam2 = { -38.6174f, 6281.176f, 30.2043f };
								*uParam3 = 32.7307f;
								break;
							
							case 0x00000002:
								*uParam2 = { -313.5567f, 6436.651f, 11.6953f };
								*uParam3 = 129.4952f;
								break;
							
							case 0x00000003:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							}
					}
					break;
				
				case 0x00000003:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { 1490.884f, -1955.97f, 79.7973f };
								*uParam3 = 78.8897f;
								break;
							
							case 0x00000001:
								*uParam2 = { 594.3433f, -1979.466f, 28.9706f };
								*uParam3 = 319.8794f;
								break;
							
							case 0x00000002:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
							
							case 0x00000003:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { 983.6414f, -1848.797f, 30.0987f };
								*uParam3 = 178.6463f;
								break;
							
							case 0x00000001:
								*uParam2 = { 992.1669f, -1506.845f, 30.4275f };
								*uParam3 = 90.1264f;
								break;
							
							case 0x00000002:
								*uParam2 = { 771.2441f, -1620.786f, 29.9058f };
								*uParam3 = 313.4008f;
								break;
							
							case 0x00000003:
								*uParam2 = { 840.4948f, -1950.51f, 27.9516f };
								*uParam3 = 87.2509f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("valkyrie"):
			switch (Local_80.f_1D)
			{
				case 0x00000000:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { -619.1071f, -1856.811f, 38.0408f };
								*uParam3 = 10.5487f;
								break;
							
							case 0x00000001:
								*uParam2 = { -273.1338f, -1627.779f, 40.8488f };
								*uParam3 = 77.2743f;
								break;
							
							case 0x00000002:
								*uParam2 = { -1157.959f, -1697.113f, 40.3479f };
								*uParam3 = 299.9692f;
								break;
							
							case 0x00000003:
								*uParam2 = { -1150.749f, -1708.635f, 40.2485f };
								*uParam3 = 295.9259f;
								break;
							
							case 0x00000004:
								*uParam2 = { -1001.754f, -731.3828f, 85.5368f };
								*uParam3 = 232.7072f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { -648.1588f, -1632.12f, 23.9175f };
								*uParam3 = 145.9387f;
								break;
							
							case 0x00000001:
								*uParam2 = { -850.9597f, -1194.948f, 4.7312f };
								*uParam3 = 2.3024f;
								break;
							
							case 0x00000002:
								*uParam2 = { -513.3444f, -967.2039f, 22.5742f };
								*uParam3 = 111.3599f;
								break;
							
							case 0x00000003:
								*uParam2 = { -720.752f, -1143.745f, 9.6125f };
								*uParam3 = 126.5029f;
								break;
							}
					}
					break;
				
				case 0x00000001:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { 1384.463f, 3175.862f, 49.4674f };
								*uParam3 = 107.9207f;
								break;
							
							case 0x00000001:
								*uParam2 = { 848.3471f, 3587.832f, 42.0217f };
								*uParam3 = 117.8402f;
								break;
							
							case 0x00000002:
								*uParam2 = { -390.1283f, 2557.157f, 99.8288f };
								*uParam3 = 292.5476f;
								break;
							
							case 0x00000003:
								*uParam2 = { 1084.247f, 2367.027f, 53.6989f };
								*uParam3 = 53.4222f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { 654.4302f, 2752.401f, 40.9669f };
								*uParam3 = 192.1139f;
								break;
							
							case 0x00000001:
								*uParam2 = { 91.7939f, 3432.573f, 38.5904f };
								*uParam3 = 246.3809f;
								break;
							
							case 0x00000002:
								*uParam2 = { -361.922f, 2954.955f, 24.1579f };
								*uParam3 = 273.6807f;
								break;
							
							case 0x00000003:
								*uParam2 = { -180.3412f, 2508.928f, 71.8451f };
								*uParam3 = 7.1243f;
								break;
							
							case 0x00000004:
								*uParam2 = { 142.7533f, 2271.567f, 93.6005f };
								*uParam3 = 255.3593f;
								break;
							}
					}
					break;
				
				case 0x00000002:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { -394.287f, 4340.043f, 65.1832f };
								*uParam3 = 263.3693f;
								break;
							
							case 0x00000001:
								*uParam2 = { 1002.483f, 3175.867f, 48.6918f };
								*uParam3 = 0.497f;
								break;
							
							case 0x00000002:
								*uParam2 = { 2325.472f, 3922.296f, 45.2575f };
								*uParam3 = 57.4066f;
								break;
							
							case 0x00000003:
								*uParam2 = { 1962.95f, 4785.836f, 51.8872f };
								*uParam3 = 134.6506f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { 1398.018f, 4520.393f, 52.8047f };
								*uParam3 = 105.7989f;
								break;
							
							case 0x00000001:
								*uParam2 = { 366.9009f, 4432.027f, 61.6888f };
								*uParam3 = 204.5592f;
								break;
							
							case 0x00000002:
								*uParam2 = { 128.2849f, 4454.878f, 80.3457f };
								*uParam3 = 226.3244f;
								break;
							
							case 0x00000003:
								*uParam2 = { -132.4943f, 4295.465f, 41.7475f };
								*uParam3 = 276.3481f;
								break;
							
							case 0x00000004:
								*uParam2 = { 1908.425f, 4607f, 36.8242f };
								*uParam3 = 174.8533f;
								break;
							}
					}
					break;
				
				case 0x00000003:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { 3841.898f, 4234.117f, 15.4291f };
								*uParam3 = 336.9579f;
								break;
							
							case 0x00000001:
								*uParam2 = { 2836.958f, 5957.465f, 362.3982f };
								*uParam3 = 225.8444f;
								break;
							
							case 0x00000002:
								*uParam2 = { 2624.236f, 5310.019f, 52.1567f };
								*uParam3 = 215.63f;
								break;
							
							case 0x00000003:
								*uParam2 = { 2780.447f, 4758.9f, 55.0574f };
								*uParam3 = 326.934f;
								break;
							
							case 0x00000004:
								*uParam2 = { 3201.127f, 4657.409f, 190.8286f };
								*uParam3 = 359.7683f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { 3756.635f, 4434.785f, 11.7586f };
								*uParam3 = 138.6266f;
								break;
							
							case 0x00000001:
								*uParam2 = { 3680.549f, 4492.803f, 23.5887f };
								*uParam3 = 113.1337f;
								break;
							
							case 0x00000002:
								*uParam2 = { 3337.639f, 5482.484f, 19.0418f };
								*uParam3 = 157.3183f;
								break;
							
							case 0x00000003:
								*uParam2 = { 2766.238f, 4974.986f, 32.7262f };
								*uParam3 = 225.2302f;
								break;
							
							case 0x00000004:
								*uParam2 = { 2797.095f, 4923.666f, 33.1334f };
								*uParam3 = 34.0949f;
								break;
							}
					}
					break;
				
				case 0x00000004:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { -1988.479f, -219.2565f, 42.6251f };
								*uParam3 = 325.2252f;
								break;
							
							case 0x00000001:
								*uParam2 = { -1567.165f, -555.6394f, 123.4493f };
								*uParam3 = 24.7442f;
								break;
							
							case 0x00000002:
								*uParam2 = { -713.2371f, 195.5196f, 149.754f };
								*uParam3 = 75.542f;
								break;
							
							case 0x00000003:
								*uParam2 = { -509.8761f, 1187.824f, 333.8082f };
								*uParam3 = 128.2553f;
								break;
							
							case 0x00000004:
								*uParam2 = { -1265.789f, 1493.722f, 203.9673f };
								*uParam3 = 187.8592f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { -1570.476f, 1366.453f, 127.6559f };
								*uParam3 = 115.4139f;
								break;
							
							case 0x00000001:
								*uParam2 = { -1581.127f, 955.6403f, 157.1481f };
								*uParam3 = 39.5031f;
								break;
							
							case 0x00000002:
								*uParam2 = { -1813.683f, 799.5704f, 137.5134f };
								*uParam3 = 188.8774f;
								break;
							
							case 0x00000003:
								*uParam2 = { -1912.698f, 509.3147f, 110.6628f };
								*uParam3 = 70.3926f;
								break;
							
							case 0x00000004:
								*uParam2 = { -2298.497f, 441.8974f, 173.4667f };
								*uParam3 = 1.8886f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("buzzard"):
			switch (Local_80.f_1D)
			{
				case 0x00000000:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { 1351.441f, -641.5107f, 83.2342f };
								*uParam3 = 186.1368f;
								break;
							
							case 0x00000001:
								*uParam2 = { 636.2282f, -434.6195f, 33.632f };
								*uParam3 = 203.6348f;
								break;
							
							case 0x00000002:
								*uParam2 = { 352.4392f, -590.8399f, 83.1657f };
								*uParam3 = 209.917f;
								break;
							
							case 0x00000003:
								*uParam2 = { 375.2908f, -1020.433f, 66.5363f };
								*uParam3 = 271.2396f;
								break;
							
							case 0x00000004:
								*uParam2 = { 345.1868f, -1426.622f, 85.1742f };
								*uParam3 = 284.6382f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { 1248.49f, -1131.338f, 37.2874f };
								*uParam3 = 153.8083f;
								break;
							
							case 0x00000001:
								*uParam2 = { 1396.414f, -1518.39f, 56.7703f };
								*uParam3 = 134.0967f;
								break;
							
							case 0x00000002:
								*uParam2 = { 972.8618f, -1464.828f, 30.3558f };
								*uParam3 = 0.609f;
								break;
							
							case 0x00000003:
								*uParam2 = { 935.6596f, -909.6719f, 39.5752f };
								*uParam3 = 271.1971f;
								break;
							
							case 0x00000004:
								*uParam2 = { 1156.687f, -768.8879f, 56.4831f };
								*uParam3 = 275.3533f;
								break;
							}
					}
					break;
				
				case 0x00000001:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { -137.5082f, -168.3033f, 102.7024f };
								*uParam3 = 160.3978f;
								break;
							
							case 0x00000001:
								*uParam2 = { -174.828f, -214.6927f, 156.6312f };
								*uParam3 = 258.2675f;
								break;
							
							case 0x00000002:
								*uParam2 = { 404.7129f, -24.3335f, 169.3952f };
								*uParam3 = 95.0683f;
								break;
							
							case 0x00000003:
								*uParam2 = { 168.3323f, 668.6285f, 215.7082f };
								*uParam3 = 172.5901f;
								break;
							
							case 0x00000004:
								*uParam2 = { -608.792f, 660.9065f, 165.6164f };
								*uParam3 = 207.7868f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { -166.1217f, -214.9006f, 45.8637f };
								*uParam3 = 257.5103f;
								break;
							
							case 0x00000001:
								*uParam2 = { 33.7482f, -95.8814f, 55.3626f };
								*uParam3 = 73.0413f;
								break;
							
							case 0x00000002:
								*uParam2 = { 36.568f, 47.4427f, 71.3139f };
								*uParam3 = 158.1279f;
								break;
							
							case 0x00000003:
								*uParam2 = { -501.5253f, -67.3569f, 38.6901f };
								*uParam3 = 155.0279f;
								break;
							
							case 0x00000004:
								*uParam2 = { -430.6903f, -423.6864f, 31.7928f };
								*uParam3 = 352.977f;
								break;
							}
					}
					break;
				
				case 0x00000002:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { -468.3117f, 2034.281f, 225.8829f };
								*uParam3 = 183.5655f;
								break;
							
							case 0x00000001:
								*uParam2 = { -1572.228f, 838.9957f, 193.9097f };
								*uParam3 = 278.9509f;
								break;
							
							case 0x00000002:
								*uParam2 = { -175.6009f, -162.3506f, 102.7024f };
								*uParam3 = 12.7537f;
								break;
							
							case 0x00000003:
								*uParam2 = { 494.7073f, 706.4063f, 205.6965f };
								*uParam3 = 75.8614f;
								break;
							
							case 0x00000004:
								*uParam2 = { 821.3636f, 1308.909f, 372.5396f };
								*uParam3 = 113.467f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { -803.5167f, 1295.326f, 257.4832f };
								*uParam3 = 209.5666f;
								break;
							
							case 0x00000001:
								*uParam2 = { -925.5961f, 1124.77f, 218.7065f };
								*uParam3 = 215.2912f;
								break;
							
							case 0x00000002:
								*uParam2 = { -404.5761f, 833.0574f, 224.6128f };
								*uParam3 = 218.3907f;
								break;
							
							case 0x00000003:
								*uParam2 = { -303.0683f, 1010.302f, 232.2905f };
								*uParam3 = 78.2628f;
								break;
							
							case 0x00000004:
								*uParam2 = { 56.7959f, 1080.651f, 220.6167f };
								*uParam3 = 18.8188f;
								break;
							}
					}
					break;
				
				case 0x00000003:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { 377.1972f, 4405.938f, 71.4024f };
								*uParam3 = 157.1671f;
								break;
							
							case 0x00000001:
								*uParam2 = { -210.0587f, 4223.346f, 53.7504f };
								*uParam3 = 206.9778f;
								break;
							
							case 0x00000002:
								*uParam2 = { -318.9394f, 3790.772f, 77.5459f };
								*uParam3 = 258.802f;
								break;
							
							case 0x00000003:
								*uParam2 = { -236.0281f, 3088.237f, 47.229f };
								*uParam3 = 304.6536f;
								break;
							
							case 0x00000004:
								*uParam2 = { 312.2873f, 2783.272f, 54.9498f };
								*uParam3 = 10.4182f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { 1111.445f, 3430.153f, 33.0281f };
								*uParam3 = 351.5004f;
								break;
							
							case 0x00000001:
								*uParam2 = { 940.4324f, 3582.793f, 32.0891f };
								*uParam3 = 71.8698f;
								break;
							
							case 0x00000002:
								*uParam2 = { -177.7739f, 3695.669f, 43.0132f };
								*uParam3 = 195.3546f;
								break;
							
							case 0x00000003:
								*uParam2 = { -241.2375f, 3905.453f, 37.3939f };
								*uParam3 = 207.658f;
								break;
							
							case 0x00000004:
								*uParam2 = { -77.8371f, 3185.706f, 37.1225f };
								*uParam3 = 280.9105f;
								break;
							}
					}
					break;
				
				case 0x00000004:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { 815.4335f, 1311.455f, 372.12f };
								*uParam3 = 258.8483f;
								break;
							
							case 0x00000001:
								*uParam2 = { 609.2955f, 205.9871f, 146.2221f };
								*uParam3 = 316.1886f;
								break;
							
							case 0x00000002:
								*uParam2 = { 1150.014f, 130.2795f, 90.7203f };
								*uParam3 = 340.2898f;
								break;
							
							case 0x00000003:
								*uParam2 = { 1876.22f, 285.6447f, 171.779f };
								*uParam3 = 18.4441f;
								break;
							
							case 0x00000004:
								*uParam2 = { 2105.892f, 1586.21f, 99.9212f };
								*uParam3 = 107.1124f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								*uParam2 = { 1199.866f, 1852.856f, 77.9143f };
								*uParam3 = 147.2836f;
								break;
							
							case 0x00000001:
								*uParam2 = { 1526.959f, 1717.267f, 108.9733f };
								*uParam3 = 116.5075f;
								break;
							
							case 0x00000002:
								*uParam2 = { 1962.413f, 1297.095f, 166.6211f };
								*uParam3 = 14.5081f;
								break;
							
							case 0x00000003:
								*uParam2 = { 958.8857f, 1717.174f, 163.6494f };
								*uParam3 = 280.2715f;
								break;
							
							case 0x00000004:
								*uParam2 = { 703.955f, 777.3345f, 204.8183f };
								*uParam3 = 308.1731f;
								break;
							}
					}
					break;
			}
			break;
	}
}

int func_87(int iParam0)
{
	if (Local_80.f_E4[iParam0] > 0x00000000)
	{
		if (!func_22(&(Local_80.f_CF[iParam0 /*2*/])))
		{
			func_20(&(Local_80.f_CF[iParam0 /*2*/]), 0x00000000, 0x00000000);
			return 0x00000000;
		}
		else if (!func_19(&(Local_80.f_CF[iParam0 /*2*/]), Local_80.f_E4[iParam0], 0x00000000))
		{
			return 0x00000000;
		}
	}
	if (func_22(&(Local_80.f_BA[iParam0 /*2*/])))
	{
		if (!func_19(&(Local_80.f_BA[iParam0 /*2*/]), 0x00004E20, 0x00000000))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

var func_88()
{
	return Local_80.f_123[Local_80.f_117];
}

void func_89(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 0xD8CD795A;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam0;
	if (!iParam1 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000003, iParam1);
	}
}

int func_90(int iParam0)
{
	if (iParam0 < 0x0000001F)
	{
		return iParam0;
	}
	else if (iParam0 < 0x0000003E)
	{
		return (iParam0 - 0x0000001F);
	}
	return (iParam0 - func_91(iParam0) * 31);
}

int func_91(int iParam0)
{
	if (iParam0 < 0x0000001F)
	{
		return 0x00000000;
	}
	else if (iParam0 < 0x0000003E)
	{
		return 0x00000001;
	}
	return (iParam0 / 0x0000001F);
}

void func_92(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xE4EDC4B0E92C078B(*uParam0))
	{
		unk_0x142CC44DB769B57E(uParam0);
		bVar0 = 0x00000001;
	}
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_1))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_1));
		bVar0 = 0x00000001;
	}
	if (unk_0xC844350D5D58C99A(uParam0->f_7))
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_7, 0x00000000))
		{
			if (unk_0x3C583F939C836C5C(uParam0->f_7))
			{
				unk_0xA29E145196B9739D(uParam0->f_7, 0x00000000);
			}
		}
		bVar0 = 0x00000001;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_93(int iParam0)
{
	if (Local_80.f_1B == joaat("hydra"))
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_110[func_91(iParam0)], func_90(iParam0)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_94(int iParam0)
{
	return func_95(iParam0);
}

int func_95(int iParam0)
{
	int iVar0;
	
	if (!unk_0x405E212DDE472467(unk_0x1B50683925F00106(Local_80.f_30[iParam0]), 0x00000000))
	{
		return 0x00000001;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x1B50683925F00106(Local_80.f_30[iParam0]), 0x00000000);
	if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_80.f_10F, iParam0))
		{
			return 0x00000001;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_80.f_10F, iParam0))
		{
			return 0x00000001;
		}
	}
	else
	{
		if (Local_80.f_1B != joaat("hydra"))
		{
			return 0x00000001;
		}
		if (Local_80.f_1B == joaat("hydra"))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_10F, iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_97(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 0x8160D539;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam0;
	if (!iParam1 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000003, iParam1);
	}
}

int func_98()
{
	return Local_80.f_118[Local_80.f_117];
}

void func_99(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 0xAD810679;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam1;
	if (!iParam0 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000003, iParam0);
	}
}

int func_100(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000000))
			{
				if (unk_0x08E69DAA97BC8A31(iVar2, unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), &uVar0))
				{
					return 0x00000001;
				}
			}
			else if (unk_0x6992BDA3F5A14B9E(iVar2, unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), &uVar0))
			{
				return 0x00000001;
			}
		}
		iVar1++;
	}
	return 0x00000000;
}

void func_101(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 0x203CDE21;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam1;
	if (!iParam0 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000003, iParam0);
	}
}

bool func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]));
	if (unk_0xC41A9202669A24C4(iVar0) || unk_0xAFB8495D36825275(iVar0))
	{
		return !unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000000);
	}
	return !unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_80.f_49[iParam0]), 0x00000000);
}

int func_103()
{
	int iVar0;
	int iVar1;
	
	switch (Local_80.f_1B)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000A)
			{
				iVar1 = (iVar1 + Local_80.f_123[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000A)
			{
				iVar1 = (iVar1 + Local_80.f_123[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_104(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_844(iVar2, 0x00000000, 0x00000000))
			{
				if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_105()
{
	if (func_742())
	{
		return Global_40001.f_2C64;
	}
	return Global_40001.f_2B4F;
}

void func_106(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

void func_107(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 0x75BF07BC;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Param0, 0x0000000E, iParam13);
	}
}

int func_108(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_844(iVar2, 0x00000001, 0x00000000))
		{
			if (!unk_0xC42A92762C58E1B9(unk_0x9539D44F3E4492F6(iVar2), iParam0, 0x00000000))
			{
				if (unk_0x08067D4957B73C02(iVar2) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) || !bParam2)
				{
					if (iVar2 != unk_0xD803B885F5E47A62() || iParam1)
					{
						unk_0x5D96D8530B3D0904(&uVar0, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_109(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return !func_110(unk_0xB177666FAB6F4417(uParam0));
	}
	return 0x00000000;
}

int func_110(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
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

void func_111()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000014))
	{
		return;
	}
	if (!func_22(&uLocal_562))
	{
		func_20(&uLocal_562, 0x00000000, 0x00000000);
		return;
	}
	if (!func_19(&uLocal_562, 0x00001388, 0x00000000))
	{
		return;
	}
	iVar0 = func_112();
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < iVar0)
	{
		if (func_4(unk_0xB177666FAB6F4417(Local_80.f_7[iVar1]), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001))
		{
			func_25(&(Local_80.f_7[iVar1]));
		}
		iVar1++;
	}
	unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000014);
}

int func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_80.f_C != 0x00000000)
	{
		return Local_80.f_C;
	}
	if (!func_742())
	{
		Local_80.f_C = 0x00000001;
		return Local_80.f_C;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar2))
		{
			if (!func_16(iVar2, 0x00000000))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < func_114())
	{
		Local_80.f_C = 0x00000002;
	}
	else if (iVar1 < func_113())
	{
		Local_80.f_C = 0x00000003;
	}
	else
	{
		Local_80.f_C = 0x00000004;
	}
	return Local_80.f_C;
}

int func_113()
{
	return Global_40001.f_2B68;
}

int func_114()
{
	return Global_40001.f_2B67;
}

void func_115()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar0]))
		{
			func_121(iVar0);
			func_120(iVar0, Local_80.f_100[iVar0], Local_80.f_16[iVar0]);
		}
		else if (Local_80.f_252[iVar0 /*4*/].f_1 != 0xFFFFFFFF)
		{
			func_121(iVar0);
		}
		iVar0++;
	}
	func_119();
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			func_118(iVar0);
			if (Local_83[iVar0 /*18*/].f_1 != 0x00000000)
			{
				if (Local_83[iVar0 /*18*/].f_9 > 0xFFFFFFFF)
				{
					uVar1 = Local_83[iVar0 /*18*/].f_9;
					func_117(uVar1, Local_83[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_117(0xFFFFFFFF, 0xFFFFFFFF, iVar2);
			}
		}
		else if (Local_80.f_1D1[iVar0 /*4*/].f_1 != 0xFFFFFFFF)
		{
			func_118(iVar0);
		}
		iVar0++;
	}
	func_116();
}

void func_116()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 0x0000001F;
	while (iVar0 >= 0x00000000)
	{
		iVar1 = 0x0000001F;
		while (iVar1 >= 0x00000000)
		{
			if ((iVar1 - 0x00000001) >= 0x00000000)
			{
				if (Local_80.f_1D1[iVar1 /*4*/].f_1 > Local_80.f_1D1[(iVar1 - 0x00000001) /*4*/].f_1)
				{
					uVar2 = Local_80.f_1D1[iVar1 /*4*/].f_1;
					uVar3 = Local_80.f_1D1[iVar1 /*4*/];
					uVar4 = Local_80.f_1D1[iVar1 /*4*/].f_2;
					Local_80.f_1D1[iVar1 /*4*/].f_1 = Local_80.f_1D1[(iVar1 - 0x00000001) /*4*/].f_1;
					Local_80.f_1D1[iVar1 /*4*/] = Local_80.f_1D1[(iVar1 - 0x00000001) /*4*/];
					Local_80.f_1D1[iVar1 /*4*/].f_2 = Local_80.f_1D1[(iVar1 - 0x00000001) /*4*/].f_2;
					Local_80.f_1D1[(iVar1 - 0x00000001) /*4*/].f_1 = uVar2;
					Local_80.f_1D1[(iVar1 - 0x00000001) /*4*/] = uVar3;
					Local_80.f_1D1[(iVar1 - 0x00000001) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + 0xFFFFFFFF);
		}
		iVar0 = (iVar0 + 0xFFFFFFFF);
	}
}

void func_117(int iParam0, int iParam1, int iParam2)
{
	Local_80.f_1D1[iParam2 /*4*/] = iParam0;
	Local_80.f_1D1[iParam2 /*4*/].f_1 = iParam1;
	Local_80.f_1D1[iParam2 /*4*/].f_2 = iParam2;
}

void func_118(int iParam0)
{
	Local_80.f_1D1[iParam0 /*4*/] = 0xFFFFFFFF;
	Local_80.f_1D1[iParam0 /*4*/].f_2 = 0xFFFFFFFF;
	Local_80.f_1D1[iParam0 /*4*/].f_1 = 0xFFFFFFFF;
}

void func_119()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 0x00000003;
	while (iVar0 >= 0x00000000)
	{
		iVar1 = 0x00000003;
		while (iVar1 >= 0x00000000)
		{
			if ((iVar1 - 0x00000001) >= 0x00000000)
			{
				if (Local_80.f_252[iVar1 /*4*/].f_1 > Local_80.f_252[(iVar1 - 0x00000001) /*4*/].f_1)
				{
					uVar2 = Local_80.f_252[iVar1 /*4*/].f_1;
					uVar3 = Local_80.f_252[iVar1 /*4*/];
					uVar4 = Local_80.f_252[iVar1 /*4*/].f_2;
					Local_80.f_252[iVar1 /*4*/].f_1 = Local_80.f_252[(iVar1 - 0x00000001) /*4*/].f_1;
					Local_80.f_252[iVar1 /*4*/] = Local_80.f_252[(iVar1 - 0x00000001) /*4*/];
					Local_80.f_252[iVar1 /*4*/].f_2 = Local_80.f_252[(iVar1 - 0x00000001) /*4*/].f_2;
					Local_80.f_252[(iVar1 - 0x00000001) /*4*/].f_1 = uVar2;
					Local_80.f_252[(iVar1 - 0x00000001) /*4*/] = uVar3;
					Local_80.f_252[(iVar1 - 0x00000001) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + 0xFFFFFFFF);
		}
		iVar0 = (iVar0 + 0xFFFFFFFF);
	}
}

void func_120(int iParam0, var uParam1, var uParam2)
{
	Local_80.f_252[iParam0 /*4*/] = iParam0;
	Local_80.f_252[iParam0 /*4*/].f_1 = uParam1;
	Local_80.f_252[iParam0 /*4*/].f_2 = uParam2;
}

void func_121(int iParam0)
{
	Local_80.f_252[iParam0 /*4*/] = 0xFFFFFFFF;
	Local_80.f_252[iParam0 /*4*/].f_1 = 0xFFFFFFFF;
	Local_80.f_252[iParam0 /*4*/].f_2 = 0xFFFFFFFF;
}

int func_122()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_112();
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < iVar0)
	{
		if (!func_123(iVar1))
		{
			func_106(&(Local_80.f_5));
			return 0x00000000;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_D, iVar1))
		{
			func_106(&(Local_80.f_5));
			return 0x00000000;
		}
		else if (func_4(unk_0xB177666FAB6F4417(Local_80.f_7[iVar1]), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001))
		{
			func_106(&(Local_80.f_5));
			return 0x00000000;
		}
		iVar1++;
	}
	if (!func_22(&(Local_80.f_5)))
	{
		func_20(&(Local_80.f_5), 0x00000000, 0x00000000);
	}
	else if (func_19(&(Local_80.f_5), 0x000005DC, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_123(int iParam0)
{
	if (func_109(Local_80.f_7[iParam0]))
	{
		if (unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_80.f_7[iParam0]), 0xFFFFFFFF, 0x00000000) != 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_742())
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar0]))
		{
			if (func_109(Local_80.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_80.f_C)
	{
		Local_80.f_C = iVar1;
	}
	if (Local_80.f_C <= 0x00000001)
	{
		unk_0x0674E58A79778E99(&(Local_80.f_3), 0x00000008);
		if (!func_109(Local_80.f_7[0x00000000]))
		{
			if (func_109(Local_80.f_7[iVar2]))
			{
				func_25(&(Local_80.f_7[0x00000000]));
				Local_80.f_7[0x00000000] = Local_80.f_7[iVar2];
			}
		}
	}
}

void func_125()
{
	bool bVar0;
	
	if (!func_742())
	{
		if (unk_0xE5DBF9B6126856CA(Local_80.f_7[0x00000000]))
		{
			if (unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_7[0x00000000])) == joaat("valkyrie"))
			{
				bVar0 = Local_80.f_F != 0x00000000;
			}
			else
			{
				bVar0 = Local_80.f_E != 0x00000000;
			}
		}
	}
	else
	{
		bVar0 = unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000009);
	}
	if (bVar0)
	{
		if (Local_80.f_19D == 0xFFFFFFFF)
		{
			Local_80.f_19D = func_127();
		}
		if (!func_22(&(Local_80.f_146)))
		{
			func_20(&(Local_80.f_146), 0x00000000, 0x00000000);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000004))
		{
			if ((Local_80.f_19D - func_126(&(Local_80.f_146), 0x00000000, 0x00000000)) < 0x00000000)
			{
				unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000004);
			}
		}
	}
	else if (func_22(&(Local_80.f_146)))
	{
		func_106(&(Local_80.f_146));
		Local_80.f_19D = (Local_80.f_19D - func_126(&(Local_80.f_146), 0x00000000, 0x00000000));
	}
}

int func_126(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return unk_0x519D13E6C1911A0B(unk_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0);
}

var func_127()
{
	if (func_742())
	{
		return Global_40001.f_2C6E;
	}
	return Global_40001.f_2B56;
}

void func_128()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar5 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		iLocal_96[iVar0] = 0x00000000;
		iLocal_82[iVar0] = 0xFFFFFFFE;
		iLocal_97[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	if (Local_80 != 0x00000004)
	{
		iLocal_87 = 0x00000000;
		while (iLocal_87 < unk_0x54EABC0DD106045B())
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_87)))
			{
				iVar7 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_87));
				if (!func_16(iVar7, 0x00000000))
				{
					if (Local_83[iLocal_87 /*18*/].f_1 != 0x00000000)
					{
						iVar2++;
					}
					iVar1++;
					iVar0 = 0x00000000;
					while (iVar0 < 0x00000004)
					{
						func_135(iLocal_87, iVar0, iVar7);
						iVar0++;
					}
					iVar0 = 0x00000000;
					iVar0 = 0x00000000;
					while (iVar0 < 0x00000005)
					{
						func_134(iLocal_87, iVar0);
						iVar0++;
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000E))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_83[iLocal_87 /*18*/].f_2, 0x00000009))
						{
							iVar6++;
						}
					}
					iVar0 = 0x00000000;
					while (iVar0 <= 0x00000017)
					{
						func_133(iLocal_87, iVar0);
						iVar0++;
					}
					if (!bVar5)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_83[iLocal_87 /*18*/].f_2, 0x00000008))
						{
							bVar5 = 0x00000001;
						}
					}
					func_131(iLocal_87, iVar7);
					if (func_844(iVar7, 0x00000001, 0x00000001))
					{
						iVar0 = 0x00000000;
						iVar0 = 0x00000000;
						while (iVar0 < 0x00000004)
						{
							if (Local_80.f_11[iVar0] == func_5())
							{
								if (unk_0xEAE0D21A50E6C7F4(Local_83[iLocal_87 /*18*/].f_2, (0x00000000 + iVar0)))
								{
									Local_80.f_11[iVar0] = iVar7;
								}
							}
							else if (Local_80.f_11[iVar0] == iVar7 && Local_80.f_F1 == 0x00000000)
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_83[iLocal_87 /*18*/].f_2, (0x00000000 + iVar0)))
								{
									Local_80.f_11[iVar0] = func_5();
								}
							}
							iVar0++;
						}
					}
				}
			}
			iLocal_87++;
		}
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_D, iVar0))
		{
			if (iLocal_96[iVar0] == func_130() && func_123(iVar0))
			{
				unk_0x5D96D8530B3D0904(&(Local_80.f_D), iVar0);
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_E, iVar0))
			{
				if (iLocal_96[iVar0] >= 0x00000001 && func_123(iVar0))
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_E), iVar0);
				}
			}
			else if (iLocal_96[iVar0] == 0x00000000 || !func_123(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_80.f_E, iVar0))
				{
					unk_0x0674E58A79778E99(&(Local_80.f_E), iVar0);
					if (iLocal_96[iVar0] == 0x00000000)
					{
						if (Local_80.f_F1 >= 0x00000001)
						{
							if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar0]))
							{
								func_25(&(Local_80.f_7[iVar0]));
							}
						}
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_F, iVar0) && func_123(iVar0))
			{
				if (iLocal_96[iVar0] >= 0x00000002)
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_F), iVar0);
				}
			}
			else if (iLocal_96[iVar0] <= 0x00000001 || !func_123(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_80.f_F, iVar0))
				{
					unk_0x0674E58A79778E99(&(Local_80.f_F), iVar0);
				}
			}
		}
		else if (iLocal_96[iVar0] < func_130() || !func_123(iVar0))
		{
			unk_0x0674E58A79778E99(&(Local_80.f_D), iVar0);
		}
		if (Local_80.f_10A[iVar0] != iLocal_96[iVar0])
		{
			Local_80.f_10A[iVar0] = iLocal_96[iVar0];
			if (Local_80.f_F1 == 0x00000001)
			{
				if (Local_80.f_10A[iVar0] == 0x00000000)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_268, iVar0))
					{
						unk_0x5D96D8530B3D0904(&(Local_80.f_268), iVar0);
					}
				}
			}
		}
		if (Local_80.f_F1 == 0x00000000)
		{
			if (func_742())
			{
				if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar0]))
				{
					iVar3 = unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]));
					if (iLocal_96[iVar0] >= func_129(iVar3) && func_123(iVar0))
					{
						iLocal_97[iVar0] = 0x00000001;
					}
				}
			}
		}
		if (Local_80.f_F1 == 0x00000001)
		{
			if (Local_80.f_100[iVar0] != iLocal_82[iVar0])
			{
				if (iLocal_82[iVar0] >= 0x00000000)
				{
					if (iLocal_82[iVar0] > Local_80.f_100[iVar0])
					{
						Local_80.f_100[iVar0] = iLocal_82[iVar0];
						bVar4 = 0x00000001;
					}
					else
					{
						iVar8 = (Local_80.f_100[iVar0] - iLocal_82[iVar0]);
						if (Local_80.f_105[iVar0] != iVar8)
						{
							Local_80.f_105[iVar0] = iVar8;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		func_115();
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000B))
	{
		if (!bVar5)
		{
			unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x0000000B);
		}
	}
	iVar0 = 0x00000000;
	iVar9 = 0x00000000;
	if (Local_80.f_F1 == 0x00000000)
	{
		if (func_742())
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000004)
			{
				if (iLocal_97[iVar0])
				{
					iVar9++;
				}
				iVar0++;
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000009))
			{
				if (iVar9 >= 0x00000002)
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000009);
				}
			}
			else if (iVar9 < 0x00000002)
			{
				unk_0x0674E58A79778E99(&(Local_80.f_3), 0x00000009);
			}
		}
	}
	if (Local_80.f_F1 == 0x00000000)
	{
		if (!func_22(&(Local_80.f_168)))
		{
			func_20(&(Local_80.f_168), 0x00000000, 0x00000000);
		}
		else if (func_19(&(Local_80.f_168), 0x00001388, 0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000E))
			{
				if (func_742())
				{
					if (Local_80.f_1B == joaat("valkyrie"))
					{
						if (iVar6 < 0x00000004)
						{
							unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x0000000E);
						}
					}
					else if (iVar6 < 0x00000002)
					{
						unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x0000000E);
					}
				}
				else if (Local_80.f_1B == joaat("valkyrie"))
				{
					if (iVar6 < 0x00000002)
					{
						unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x0000000E);
					}
				}
				else if (iVar6 < 0x00000001)
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x0000000E);
				}
			}
		}
	}
	if (iVar1 > Local_80.f_266)
	{
		Local_80.f_266 = iVar1;
	}
	else
	{
		Local_80.f_265 = (Local_80.f_266 - iVar1);
	}
	if (iVar2 > Local_80.f_267)
	{
		Local_80.f_267 = iVar2;
	}
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case joaat("rhino"):
			return 0x00000001;
		
		case joaat("hydra"):
			return 0x00000001;
		
		case joaat("savage"):
			return 0x00000001;
		
		case joaat("valkyrie"):
			return 0x00000002;
		
		case joaat("buzzard"):
			return 0x00000001;
		
		default:
	}
	return 0x00000063;
}

int func_130()
{
	return Local_80.f_1C;
}

void func_131(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_10, iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_83[iParam0 /*18*/].f_2, 0x0000000C))
		{
			func_132(iParam1, 0x00000001);
			unk_0x5D96D8530B3D0904(&(Local_80.f_10), iParam0);
		}
		else if (Local_80.f_F1 >= 0x00000001)
		{
			if (Local_83[iParam0 /*18*/].f_1 == 0x00000000)
			{
				func_132(iParam1, 0x00000001);
				unk_0x5D96D8530B3D0904(&(Local_80.f_10), iParam0);
			}
			else if (Local_83[iParam0 /*18*/].f_11 >= 0x00000002)
			{
				iVar1 = 0x00000000;
				while (iVar1 < 0x00000004)
				{
					if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar1]))
					{
						if (func_109(Local_80.f_7[iVar1]))
						{
							if (unk_0xC42A92762C58E1B9(unk_0x9539D44F3E4492F6(iParam1), unk_0xB177666FAB6F4417(Local_80.f_7[iVar1]), 0x00000000))
							{
								bVar0 = 0x00000001;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_132(iParam1, 0x00000001);
					unk_0x5D96D8530B3D0904(&(Local_80.f_10), iParam0);
				}
			}
		}
	}
	else if (Local_80.f_F1 < 0x00000001)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_83[iParam0 /*18*/].f_2, 0x0000000C))
		{
			func_132(iParam1, 0x00000000);
			unk_0x0674E58A79778E99(&(Local_80.f_10), iParam0);
		}
	}
}

void func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar0]))
		{
			unk_0xF1259063ADD6A7AF(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), iParam0, iParam1);
		}
		iVar0++;
	}
}

void func_133(int iParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_110[func_91(iParam1)], func_90(iParam1)))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_83[iParam0 /*18*/].f_3[func_91(iParam1)], func_90(iParam1)))
		{
			unk_0x5D96D8530B3D0904(&(Local_80.f_110[func_91(iParam1)]), func_90(iParam1));
			if (Local_83[iParam0 /*18*/].f_11 < 0x00000002)
			{
			}
			if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iParam1]))
			{
				if (!func_31(Local_80.f_30[iParam1]))
				{
					if (!func_94(iParam1))
					{
						unk_0x0674E58A79778E99(&(Local_80.f_110[func_91(iParam1)]), func_90(iParam1));
					}
					else if (!unk_0x405E212DDE472467(unk_0x1B50683925F00106(Local_80.f_30[iParam1]), 0x00000000))
					{
						if (iParam1 >= 0x00000014)
						{
							unk_0x0674E58A79778E99(&(Local_80.f_110[func_91(iParam1)]), func_90(iParam1));
						}
					}
				}
			}
		}
	}
}

void func_134(int iParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_10F, iParam1))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_83[iParam0 /*18*/].f_6, iParam1))
		{
			unk_0x5D96D8530B3D0904(&(Local_80.f_10F), iParam1);
			if (Local_83[iParam0 /*18*/].f_11 < 0x00000002)
			{
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_12F, iParam1))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_FD, iParam1))
				{
					Local_80.f_FB = (Local_80.f_FB - 0x00000001);
					if (func_98() > 0x00000001)
					{
						if (Local_80.f_FC > 0x00000000)
						{
							Local_80.f_12E++;
							func_97(iParam1, func_104(0x00000001));
						}
					}
					unk_0x5D96D8530B3D0904(&(Local_80.f_FD), iParam1);
				}
				if (func_22(&(Local_80.f_150[iParam1 /*2*/])))
				{
					func_106(&(Local_80.f_150[iParam1 /*2*/]));
				}
				func_25(&(Local_80.f_49[iParam1]));
				unk_0x0674E58A79778E99(&(Local_80.f_12F), iParam1);
			}
		}
	}
}

void func_135(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_83[iParam0 /*18*/].f_1, iParam1))
	{
		iLocal_96[iParam1]++;
		if (iLocal_82[iParam1] < 0x00000000)
		{
			if (Local_83[iParam0 /*18*/].f_8 >= 0x00000000)
			{
				if (Local_80.f_105[iParam1] > 0x00000000)
				{
					iLocal_82[iParam1] = Local_80.f_105[iParam1];
				}
				else
				{
					iLocal_82[iParam1] = 0x00000000;
				}
			}
		}
		iLocal_82[iParam1] = (iLocal_82[iParam1] + Local_83[iParam0 /*18*/].f_8);
		if (Local_80.f_F1 >= 0x00000001)
		{
			if (Local_80.f_16[iParam1] == func_5())
			{
				if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iParam1]))
				{
					if (func_109(Local_80.f_7[iParam1]))
					{
						iVar1 = unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_80.f_7[iParam1]), 0xFFFFFFFF, 0x00000000);
						if (iVar1 != 0x00000000)
						{
							if (unk_0x34BFC6F0CB887BC2(iVar1))
							{
								iVar0 = unk_0x83FACCC48B68F9D1(iVar1);
								if (iVar0 == iParam2)
								{
									Local_80.f_16[iParam1] = iParam2;
									func_115();
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_13F, iParam1))
		{
			if (Local_83[iParam0 /*18*/].f_A > 0xFFFFFFFF)
			{
				unk_0x5D96D8530B3D0904(&(Local_80.f_13F), iParam1);
				func_20(&(Local_80.f_15D[iParam1 /*2*/]), 0x00000000, 0x00000000);
			}
		}
	}
	if (Local_80.f_16[iParam1] != func_5())
	{
		if (!unk_0x40B8C182D63932FC(Local_80.f_16[iParam1]))
		{
			iVar0 = func_136(iParam1, 0x00000001);
			if (iVar0 != func_5())
			{
				Local_80.f_16[iParam1] = iVar0;
			}
			else
			{
				Local_80.f_16[iParam1] = func_5();
			}
		}
		else if (func_16(Local_80.f_16[iParam1], 0x00000000))
		{
			Local_80.f_16[iParam1] = func_5();
			func_115();
		}
		else
		{
			iVar1 = unk_0x9539D44F3E4492F6(Local_80.f_16[iParam1]);
			if (!unk_0xEB6A8945D1AC98A1(iVar1))
			{
				if (func_109(Local_80.f_7[iParam1]))
				{
					if (!unk_0xC42A92762C58E1B9(iVar1, unk_0xB177666FAB6F4417(Local_80.f_7[iParam1]), 0x00000000))
					{
						iVar0 = func_136(iParam1, 0x00000001);
						if (iVar0 != func_5())
						{
							Local_80.f_16[iParam1] = iVar0;
						}
						else
						{
							Local_80.f_16[iParam1] = func_5();
						}
					}
				}
			}
		}
	}
}

int func_136(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_5();
	if (iParam0 >= 0x00000000)
	{
		iVar3 = 0x00000000;
		while (iVar3 < unk_0x54EABC0DD106045B())
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar3)))
			{
				if (iVar0 == func_5())
				{
					if (Local_83[iVar3 /*18*/].f_11 == 0x00000001)
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_83[iVar3 /*18*/].f_1, iParam0))
						{
							if (!bParam1)
							{
								iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar3));
							}
							else
							{
								iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar3));
								if (func_109(Local_80.f_7[iParam0]))
								{
									iVar2 = unk_0x9539D44F3E4492F6(iVar1);
									if (!unk_0xEB6A8945D1AC98A1(iVar2))
									{
										if (unk_0xC42A92762C58E1B9(iVar2, unk_0xB177666FAB6F4417(Local_80.f_7[iParam0]), 0x00000000))
										{
											iVar0 = iVar1;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

void func_137(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 0x76289B27;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam0;
	iVar1 = func_138(0x00000001, 0x00000001);
	if (!iVar1 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000003, iVar1);
	}
}

var func_138(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_844(iVar2, 0x00000000, 0x00000000))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_16(iVar2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_139(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0x00000088:
		case 0x0000008B:
		case 0x0000008D:
		case 0x00000085:
		case 0x0000008A:
		case 0x00000090:
		case 0x000000EC:
		case 0x00000096:
			return iParam1;
		
		case 0x00000084:
			switch (iParam2)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000000;
						
						case 0x00000001:
							return 0x00000001;
						
						case 0x00000002:
							return 0x00000002;
						
						case 0x00000003:
							return 0x00000003;
						
						default:
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000004;
						
						case 0x00000001:
							return 0x00000005;
						
						case 0x00000002:
							return 0x00000006;
						
						case 0x00000003:
							return 0x00000007;
						
						default:
					}
					break;
			}
			break;
		
		case 0x00000083:
			switch (iParam3)
			{
				case 0x00000000:
					switch (iParam1)
					{
						case 0x00000000:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000000;
								
								case 0x00000001:
									return 0x00000001;
								
								case 0x00000002:
									return 0x00000002;
								
								case 0x00000003:
									return 0x00000003;
								
								case 0x00000004:
									return 0x00000004;
								
								default:
							}
							break;
						
						case 0x00000001:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000005;
								
								case 0x00000001:
									return 0x00000006;
								
								case 0x00000002:
									return 0x00000007;
								
								case 0x00000003:
									return 0x00000008;
								
								case 0x00000004:
									return 0x00000009;
								
								default:
							}
							break;
						
						case 0x00000002:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x0000000A;
								
								case 0x00000001:
									return 0x0000000B;
								
								case 0x00000002:
									return 0x0000000C;
								
								case 0x00000003:
									return 0x0000000D;
								
								case 0x00000004:
									return 0x0000000E;
								
								default:
							}
							break;
						
						case 0x00000003:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x0000000F;
								
								case 0x00000001:
									return 0x00000010;
								
								case 0x00000002:
									return 0x00000011;
								
								case 0x00000003:
									return 0x00000012;
								
								case 0x00000004:
									return 0x00000013;
								
								default:
							}
							break;
						
						case 0x00000004:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000014;
								
								case 0x00000001:
									return 0x00000015;
								
								case 0x00000002:
									return 0x00000016;
								
								case 0x00000003:
									return 0x00000018;
								
								case 0x00000004:
									return 0x00000019;
								
								default:
							}
							break;
						
						case 0x00000005:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x0000001A;
								
								case 0x00000001:
									return 0x0000001B;
								
								case 0x00000002:
									return 0x0000001C;
								
								case 0x00000003:
									return 0x0000001D;
								
								case 0x00000004:
									return 0x0000001E;
								
								default:
							}
							break;
						
						case 0x00000006:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x0000001F;
								
								case 0x00000001:
									return 0x00000020;
								
								case 0x00000002:
									return 0x00000021;
								
								case 0x00000003:
									return 0x00000022;
								
								case 0x00000004:
									return 0x00000023;
								
								default:
							}
							break;
					}
					break;
				
				case 0x00000001:
					switch (iParam1)
					{
						case 0x00000000:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000000;
								
								case 0x00000001:
									return 0x00000001;
								
								case 0x00000002:
									return 0x00000002;
								
								case 0x00000003:
									return 0x00000003;
								
								case 0x00000004:
									return 0x00000004;
								
								default:
							}
							break;
						
						case 0x00000001:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000005;
								
								case 0x00000001:
									return 0x00000006;
								
								case 0x00000002:
									return 0x00000007;
								
								case 0x00000003:
									return 0x00000008;
								
								case 0x00000004:
									return 0x00000009;
								
								default:
							}
							break;
						
						case 0x00000002:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x0000000A;
								
								case 0x00000001:
									return 0x0000000B;
								
								case 0x00000002:
									return 0x0000000C;
								
								case 0x00000003:
									return 0x0000000D;
								
								case 0x00000004:
									return 0x0000000E;
								
								default:
							}
							break;
					}
					break;
				
				case 0x00000002:
					switch (iParam1)
					{
						case 0x00000000:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000029;
								
								default:
							}
							break;
						
						case 0x00000001:
							switch (iParam2)
							{
								case 0x00000001:
									return 0x0000002A;
								
								default:
							}
							break;
						
						case 0x00000002:
							switch (iParam2)
							{
								case 0x00000002:
									return 0x0000002B;
								
								default:
							}
							break;
						
						case 0x00000003:
							switch (iParam2)
							{
								case 0x00000003:
									return 0x0000002C;
								
								default:
							}
							break;
						
						case 0x00000004:
							switch (iParam2)
							{
								case 0x00000004:
									return 0x0000002D;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 0x00000081:
			switch (iParam1)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000000;
						
						case 0x00000001:
							return 0x00000001;
						
						case 0x00000002:
							return 0x00000002;
						
						case 0x00000003:
							return 0x00000003;
						
						default:
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000004;
						
						case 0x00000001:
							return 0x00000005;
						
						case 0x00000002:
							return 0x00000006;
						
						case 0x00000003:
							return 0x00000007;
						
						case 0x00000004:
							return 0x00000008;
						
						default:
					}
					break;
				
				case 0x00000002:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000009;
						
						case 0x00000001:
							return 0x0000000A;
						
						case 0x00000002:
							return 0x0000000B;
						
						default:
					}
					break;
				
				case 0x00000003:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x0000000C;
						
						case 0x00000001:
							return 0x0000000D;
						
						case 0x00000002:
							return 0x0000000E;
						
						case 0x00000003:
							return 0x0000000F;
						
						case 0x00000004:
							return 0x00000010;
						
						default:
					}
					break;
				
				case 0x00000004:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000011;
						
						case 0x00000001:
							return 0x00000012;
						
						case 0x00000002:
							return 0x00000013;
						
						case 0x00000003:
							return 0x00000014;
						
						case 0x00000004:
							return 0x00000015;
						
						default:
					}
					break;
				
				case 0x00000005:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000016;
						
						case 0x00000001:
							return 0x00000018;
						
						case 0x00000002:
							return 0x00000019;
						
						case 0x00000003:
							return 0x0000001A;
						
						default:
					}
					break;
				
				case 0x00000006:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x0000001B;
						
						case 0x00000001:
							return 0x0000001C;
						
						case 0x00000002:
							return 0x0000001D;
						
						default:
					}
					break;
				
				case 0x00000007:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x0000001E;
						
						case 0x00000001:
							return 0x0000001F;
						
						case 0x00000002:
							return 0x00000020;
						
						default:
					}
					break;
				
				case 0x00000008:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000021;
						
						case 0x00000001:
							return 0x00000022;
						
						case 0x00000002:
							return 0x00000023;
						
						case 0x00000003:
							return 0x00000024;
						
						default:
					}
					break;
				
				case 0x00000009:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000025;
						
						case 0x00000001:
							return 0x00000026;
						
						case 0x00000002:
							return 0x00000027;
						
						case 0x00000003:
							return 0x00000028;
						
						default:
					}
					break;
			}
			break;
		
		case 0x0000008C:
			switch (iParam1)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000000;
						
						case 0x00000001:
							return 0x00000001;
						
						case 0x00000002:
							return 0x00000002;
						
						default:
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000003;
						
						case 0x00000001:
							return 0x00000004;
						
						case 0x00000002:
							return 0x00000005;
						
						default:
					}
					break;
				
				case 0x00000002:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000006;
						
						case 0x00000001:
							return 0x00000007;
						
						case 0x00000002:
							return 0x00000008;
						
						default:
					}
					break;
				
				case 0x00000003:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000009;
						
						case 0x00000001:
							return 0x0000000A;
						
						case 0x00000002:
							return 0x0000000B;
						
						default:
					}
					break;
				
				case 0x00000004:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x0000000C;
						
						case 0x00000001:
							return 0x0000000D;
						
						case 0x00000002:
							return 0x0000000E;
						
						default:
					}
					break;
			}
			break;
		
		case 0x00000092:
			switch (iParam1)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000000;
						
						case 0x00000001:
							return 0x00000001;
						
						case 0x00000002:
							return 0x00000002;
						
						default:
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000003;
						
						case 0x00000001:
							return 0x00000004;
						
						case 0x00000002:
							return 0x00000005;
						
						default:
					}
					break;
				
				case 0x00000002:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000006;
						
						case 0x00000001:
							return 0x00000007;
						
						case 0x00000002:
							return 0x00000008;
						
						default:
					}
					break;
				
				case 0x00000003:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000009;
						
						case 0x00000001:
							return 0x0000000A;
						
						case 0x00000002:
							return 0x0000000B;
						
						default:
					}
					break;
			}
			break;
	}
	return 0xFFFFFFFF;
}

int func_140()
{
	func_112();
	if (func_70(Local_80.f_1B))
	{
		if (func_141())
		{
			unk_0x71199B01895C6202(Local_80.f_1B);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_141()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_80.f_C)
	{
		if (!unk_0xE9F78D191AD5EDBA(Local_80.f_7[iVar0]))
		{
			if (func_70(Local_80.f_1B))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_F4, iVar0))
				{
					unk_0x536F1BE96C726C4B(Local_80.f_1E[iVar0 /*3*/], 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0x5D96D8530B3D0904(&(Local_80.f_F4), iVar0);
				}
				if (func_82(&(Local_80.f_7[iVar0]), Local_80.f_1B, Local_80.f_1E[iVar0 /*3*/], Local_80.f_2B[iVar0], 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
				{
					unk_0xBA2CB24C70C8E726(unk_0xA5FBBC2F619A4DE2(Local_80.f_7[iVar0]), 0x00000001, 0x00000001);
					unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000001);
					unk_0xA6B2C9FCA24AAC6F(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000001);
					unk_0x5980AF2A1EC56A46(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000);
					unk_0x9A8BCD43DBDDCDCA(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000, 0x00000000);
					unk_0x1E9649458B15960F(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000);
					unk_0xEF190091B5B9F5EB(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000001);
					unk_0xAC0C6241732E36F6(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]));
					unk_0x56FDC9ADE35F7DB0(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000001, 0x00000001, 0x00000000);
					unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000001);
					unk_0x67E3D6EA8D96FD85(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000);
					if (unk_0xAFB8495D36825275(Local_80.f_1B) || unk_0xC41A9202669A24C4(Local_80.f_1B))
					{
						unk_0x09C4C5C870748A1F(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000);
						if (unk_0xAFB8495D36825275(Local_80.f_1B))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_144());
						}
						else if (unk_0xC41A9202669A24C4(Local_80.f_1B))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_143());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_142());
						}
						unk_0xD458AC1C1D29C3B4(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), SYSTEM::ROUND(fVar1), 0x00000000);
						unk_0x722454E43E496678(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), SYSTEM::ROUND(fVar1));
						unk_0xDC544F7DF5E5164D(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), fVar1);
						unk_0xA4C7B5E63E8F6EB3(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), fVar1);
						unk_0x5DAB50E08C3C504A(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), fVar1);
						if (unk_0xC41A9202669A24C4(Local_80.f_1B))
						{
							unk_0xAD0843E7A197DD40(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000001);
						}
						if (unk_0xAFB8495D36825275(Local_80.f_1B))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x00DB73D97F9E5DCD(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), fVar1);
							unk_0xF38DA70CA19BFE1E(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), fVar1);
						}
					}
					else
					{
						if (unk_0xAFB8495D36825275(Local_80.f_1B))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_144());
						}
						else if (unk_0xC41A9202669A24C4(Local_80.f_1B))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_143());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_142());
						}
						unk_0xD458AC1C1D29C3B4(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), SYSTEM::ROUND(fVar1), 0x00000000);
						unk_0x722454E43E496678(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), SYSTEM::ROUND(fVar1));
						unk_0xDC544F7DF5E5164D(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), fVar1);
						unk_0xA4C7B5E63E8F6EB3(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), fVar1);
						unk_0x5DAB50E08C3C504A(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), fVar1);
					}
					unk_0xD5A0214B20BCBAD8(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000001);
					if (Local_80.f_1B == joaat("savage"))
					{
					}
					if (unk_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 0x00000003))
					{
						unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), "Not_Allow_As_Saved_Veh", 0x00000001);
					}
					if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003))
					{
						if (unk_0x30F813723591D02E(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), "MPBitset"))
						{
							iVar2 = unk_0x1E2DFB0EF4BB4566(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), "MPBitset");
						}
						unk_0x5D96D8530B3D0904(&iVar2, 0x0000000A);
						unk_0x5D96D8530B3D0904(&iVar2, 0x0000000F);
						unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), "MPBitset", iVar2);
					}
					unk_0xCA84BD02FBA0BEA4(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000, iLocal_93);
					iVar3 = 0x00000000;
					while (iVar3 < 0x00000020)
					{
						unk_0xCA84BD02FBA0BEA4(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000, Global_180837[iVar3]);
						iVar3++;
					}
					unk_0x50782A20AFA26A7D(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000, 0x00000000);
					unk_0x1FC8B874F2C46E6E(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000);
					unk_0xE121AE1BBF90E186(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000001);
					unk_0x6EEAA5C21760E9DB(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000);
					unk_0x60A2E7213232AA6E(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Local_80.f_C)
	{
		if (!unk_0xE9F78D191AD5EDBA(Local_80.f_7[iVar0]))
		{
			return 0x00000000;
		}
		iVar0++;
	}
	return 0x00000001;
}

var func_142()
{
	if (func_742())
	{
		return Global_40001.f_2C68;
	}
	return Global_40001.f_2B63;
}

var func_143()
{
	if (func_742())
	{
		return Global_40001.f_2C69;
	}
	return Global_40001.f_2B64;
}

var func_144()
{
	if (func_742())
	{
		return Global_40001.f_2C67;
	}
	return Global_40001.f_2B62;
}

bool func_145()
{
	int iVar0;
	int iVar1;
	
	if (!func_22(&(Local_80.f_16A)))
	{
		func_20(&(Local_80.f_16A), 0x00000000, 0x00000000);
		return 0x00000000;
	}
	else if (!func_19(&(Local_80.f_16A), 0x00000BB8, 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000A))
	{
		if (func_159(&iVar0))
		{
			if (iVar0 < func_158())
			{
				unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x0000000A);
			}
			else
			{
				iVar1 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000064);
				if ((IntToFloat(iVar1) < (50f * Global_40001.f_2C62) && !Global_40001.f_2C60) || Global_40001.f_2C61)
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000008);
					unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x0000000A);
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x0000000A);
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000A))
	{
		if (Local_80.f_C == 0x00000000)
		{
			func_112();
			return 0x00000000;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000D))
		{
			if (func_154())
			{
				if (!func_152(0x00000081, Local_80.f_1, Local_80.f_2, 0x00000000))
				{
					if (func_146())
					{
						unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x0000000D);
					}
					else
					{
						Local_80.f_1D = 0xFFFFFFFF;
					}
				}
				else
				{
					Local_80.f_1D = 0xFFFFFFFF;
				}
			}
		}
	}
	return unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000D);
}

int func_146()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_112();
	iVar1 = 0x00000000;
	while (iVar1 < iVar0)
	{
		if (func_147(Local_80.f_1E[iVar1 /*3*/], 0x43160000))
		{
			return 0x00000000;
		}
		if (!func_55(Local_80.f_1E[iVar1 /*3*/], 0x40C00000, 0x3F800000, 0x3F800000, 0x40A00000, 0x00000001, 0x00000001, 0x00000001, 0x42F00000, 0x00000000, 0xFFFFFFFF, 0x00000001, 50f, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		iVar1++;
	}
	return 0x00000001;
}

int func_147(vector3 vParam0, float fParam1)
{
	int iVar0[32];
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	
	if (Global_24FD56.f_135.f_E1 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	bVar3 = 0x00000001;
	while (bVar3)
	{
		if (Global_24FD56.f_135[iVar2 /*7*/] != 0xFFFFFFFF)
		{
			iVar0[iVar1] = unk_0x12AB0310C2281427(&(Global_24FD56.f_135[iVar2 /*7*/].f_1));
			iVar1++;
			if (iVar1 == Global_24FD56.f_135.f_E1)
			{
				bVar3 = 0x00000000;
			}
		}
		iVar2++;
		if (iVar2 >= 0x00000020)
		{
			bVar3 = 0x00000000;
		}
	}
	if (iVar1 == 0x00000000)
	{
		return 0x00000000;
	}
	vVar4 = { 0f, 0f, 0f };
	vVar5 = { vParam0 };
	iVar6 = 0x00000000;
	Var7.f_1 = 0xFFFFFFFF;
	Var7.f_2 = 0xFFFFFFFF;
	Var7.f_9 = 0xFFFFFFFF;
	iVar8 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < Global_1403FD)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar2 /*26*/].f_C, 0x0000000B))
		{
			vVar4 = { Global_2401A9[iVar2 /*26*/].f_3 };
			vVar5.z = vVar4.z;
			if (unk_0x0EB28750412C3A5A(vVar4, vVar5, 0x00000001) < fParam1)
			{
				Var7 = { Global_2401A9[iVar2 /*26*/].f_F };
				iVar8 = func_148(&Var7);
				iVar6 = 0x00000000;
				while (iVar6 < iVar1)
				{
					if (iVar8 == iVar0[iVar6])
					{
						return 0x00000001;
					}
					iVar6++;
				}
			}
		}
		iVar2++;
	}
	return 0x00000000;
}

int func_148(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_149(uParam0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			return Global_C2055.f_1A2B5[iVar1 /*13*/].f_3;
		
		case 0x0000003E:
			return Global_E012E.f_24BD[iVar1 /*13*/].f_3;
		
		default:
	}
	return iVar0;
}

int func_149(var uParam0)
{
	int iVar0;
	
	if (unk_0xEA6BC48857E0AC4C(&(uParam0->f_3)))
	{
		return 0xFFFFFFFF;
	}
	if (func_151(uParam0->f_1))
	{
		if (func_150(uParam0))
		{
			return 0x0000270F;
		}
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			if (unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_C2055.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
			{
				if (Global_14010B.f_5)
				{
					return 0xFFFFFFFF;
				}
			}
			iVar0 = 0x00000000;
			while (iVar0 < 0x000004C2)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[iVar0 /*88*/].f_4C, 0x0000000D))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_C2055.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 0xFFFFFFFF;
		
		case 0x0000003E:
			if (unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_E012E.f_25C[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
			{
				if (Global_14010B.f_5)
				{
					return 0xFFFFFFFF;
				}
			}
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000064)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[iVar0 /*88*/].f_4C, 0x0000000D))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_E012E.f_25C[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 0xFFFFFFFF;
		
		case 0x00000028:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_E55BC.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
		{
			if (Global_14010B.f_5)
			{
				return 0xFFFFFFFF;
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000003E)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[iVar0 /*88*/].f_4C, 0x0000000D))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_E55BC.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return 0xFFFFFFFF;
	}
	else if (uParam0->f_2 < 0x00000020)
	{
		return 0xFFFFFFFF;
	}
	return 0xFFFFFFFF;
}

int func_150(var uParam0)
{
	if (Global_249797)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_249797.f_1), &(uParam0->f_3)))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_151(int iParam0)
{
	return iParam0 == 0x0000270F;
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0x00000084:
		case 0x00000090:
		case 0x000000EC:
		case 0x00000096:
			return 0x00000000;
		
		default:
	}
	iVar1 = func_153(iParam0);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000015)
	{
		if (iVar0 < Global_40001.f_1FB0)
		{
			if (Global_263F7A.f_88[iVar0 /*2*/] == iVar1 && Global_263F7A.f_88[iVar0 /*2*/].f_1 == func_139(iParam0, iParam1, iParam2, iParam3))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000088:
			return 0x0000000C;
		
		case 0x0000008B:
			return 0x0000000E;
		
		case 0x0000008D:
			return 0x00000010;
		
		case 0x00000085:
			return 0x00000009;
		
		case 0x0000008A:
			return 0x0000000D;
		
		case 0x00000090:
			return 0x00000011;
		
		case 0x00000084:
			return 0x00000008;
		
		case 0x00000083:
			return 0x0000000A;
		
		case 0x00000092:
			return 0x00000012;
		
		case 0x00000081:
			return 0x0000000B;
		
		case 0x0000008C:
			return 0x0000000F;
		
		case 0x000000EC:
			return 0x00000013;
		
		case 0x00000096:
			return 0x00000014;
		
		default:
	}
	return 0xFFFFFFFF;
}

int func_154()
{
	if (func_156(&(Local_80.f_1B)))
	{
		if (Local_80.f_4)
		{
			func_155();
		}
		func_40();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_155()
{
	Global_19824D = 0x00000001;
	if (!unk_0xEAE0D21A50E6C7F4(Global_26D9AC, 0x00000000))
	{
		unk_0x5D96D8530B3D0904(&Global_26D9AC, 0x00000000);
		unk_0x5D96D8530B3D0904(&Global_19824E, 0x00000000);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_26D9AC, 0x00000001))
	{
		unk_0x5D96D8530B3D0904(&Global_26D9AC, 0x00000001);
		unk_0x5D96D8530B3D0904(&Global_19824E, 0x00000001);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_26D9AC, 0x00000005))
	{
		unk_0x5D96D8530B3D0904(&Global_26D9AC, 0x00000005);
		unk_0x5D96D8530B3D0904(&Global_19824E, 0x00000005);
	}
	if (unk_0x76395FF5E8D5E643(0xEACBE1C2))
	{
		unk_0x1BA7FCEAFCE8D46E(0xEACBE1C2, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0x76395FF5E8D5E643(0xDD5EF4CE))
	{
		unk_0x1BA7FCEAFCE8D46E(0xDD5EF4CE, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0x76395FF5E8D5E643(0xAAFA1005))
	{
		unk_0x1BA7FCEAFCE8D46E(0xAAFA1005, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0x76395FF5E8D5E643(0x2C6E2BFC))
	{
		unk_0x1BA7FCEAFCE8D46E(0x2C6E2BFC, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0x76395FF5E8D5E643(0xB232A0B6))
	{
		unk_0x1BA7FCEAFCE8D46E(0xB232A0B6, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0x76395FF5E8D5E643(0xA405045B))
	{
		unk_0x1BA7FCEAFCE8D46E(0xA405045B, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0x76395FF5E8D5E643(0xCF9D5B8B))
	{
		unk_0x1BA7FCEAFCE8D46E(0xCF9D5B8B, 0x00000000, 0x00000000, 0x00000000);
	}
}

int func_156(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000005);
	switch (iVar0)
	{
		case 0x00000000:
			if (!func_157(joaat("rhino")))
			{
				Local_80.f_1C = 0x00000001;
				*uParam0 = joaat("rhino");
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (!func_157(joaat("hydra")))
			{
				Local_80.f_1C = 0x00000001;
				*uParam0 = joaat("hydra");
				Local_80.f_4 = 0x00000001;
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (!func_157(joaat("savage")))
			{
				Local_80.f_1C = 0x00000004;
				*uParam0 = joaat("savage");
				Local_80.f_4 = 0x00000001;
				return 0x00000001;
			}
			break;
		
		case 0x00000003:
			if (!func_157(joaat("valkyrie")))
			{
				Local_80.f_1C = 0x00000004;
				*uParam0 = joaat("valkyrie");
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (!func_157(joaat("buzzard")))
			{
				Local_80.f_1C = 0x00000004;
				*uParam0 = joaat("buzzard");
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_157(int iParam0)
{
	if (!func_742())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_40001.f_2B58;
				break;
			
			case joaat("hydra"):
				return Global_40001.f_2B5A;
				break;
			
			case joaat("savage"):
				return Global_40001.f_2B59;
				break;
			
			case joaat("buzzard"):
				return Global_40001.f_2B5C;
				break;
			
			case joaat("valkyrie"):
				return Global_40001.f_2B5B;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_40001.f_2C70;
				break;
			
			case joaat("hydra"):
				return Global_40001.f_2C72;
				break;
			
			case joaat("savage"):
				return Global_40001.f_2C71;
				break;
			
			case joaat("buzzard"):
				return Global_40001.f_2C74;
				break;
			
			case joaat("valkyrie"):
				return Global_40001.f_2C73;
				break;
			}
	}
	return 0x00000000;
}

int func_158()
{
	return Global_40001.f_2B66;
}

int func_159(var uParam0)
{
	int iVar0;
	
	if (!func_22(&(Local_80.f_14E)))
	{
		func_20(&(Local_80.f_14E), 0x00000000, 0x00000000);
	}
	else if (func_19(&(Local_80.f_14E), 0x00000BB8, 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
			{
				if (!func_16(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0)), 0x00000000))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_83[iVar0 /*18*/].f_2, 0x00000007))
					{
						*uParam0++;
					}
				}
			}
			iVar0++;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_160(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= 0x000003E8)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_161(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_20(uParam0, 0x00000000, 0x00000000);
		}
	}
}

void func_162()
{
	vector3 vVar0;
	
	if (iLocal_569 < 0x00000004)
	{
		if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iLocal_569]))
		{
			if (unk_0x526BC32A660C89E6(Local_80.f_7[iLocal_569]))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_80.f_7[iLocal_569]), 0x00000000) };
				if (vVar0.z < -25f)
				{
					func_25(&(Local_80.f_7[iLocal_569]));
				}
			}
		}
	}
	iLocal_569++;
	if (iLocal_569 >= 0x00000004)
	{
		iLocal_569 = 0x00000000;
	}
}

void func_163()
{
	if (func_16(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return;
	}
	if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 == 0x00000001)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000D))
		{
			unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000D);
			unk_0x03718F4C6E876DE6(0x00000001, 0x00000000);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000D))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0x03718F4C6E876DE6(0x00000000, 0x00000000);
				unk_0x0674E58A79778E99(&iLocal_85, 0x0000000D);
			}
		}
	}
}

void func_164()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_16(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return;
	}
	if (func_415())
	{
		func_269(0x00000000);
	}
	iVar0 = Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_2E4;
	if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
	{
		Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 = 0x00000000;
	}
	if (iVar0 != func_5())
	{
		if (unk_0x40B8C182D63932FC(iVar0))
		{
			if (unk_0xFB75B0F82CA525F6(iVar0))
			{
				uVar1 = unk_0x7B9C1F53FE442D06(iVar0);
				iVar2 = uVar1;
				iVar3 = Local_83[iVar2 /*18*/].f_11;
				switch (iVar3)
				{
					case 0x00000000:
						func_196();
						func_193(iVar2);
						break;
					
					case 0x00000001:
						func_192();
						func_169();
						func_165(0x00000001);
						break;
					
					case 0x00000002:
						func_165(0x00000000);
						break;
					}
				}
			}
	}
}

void func_165(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000018)
	{
		if (bParam0)
		{
			func_166(Local_80.f_30[iVar0], &(Local_92[iVar0 /*8*/]), 0xBF800000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
		}
		else
		{
			func_166(Local_80.f_30[iVar0], &(Local_92[iVar0 /*8*/]), 0xBF800000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000037, 0xFFFFFFFF, 0x00000001);
		}
		if (unk_0xE4EDC4B0E92C078B(Local_92[iVar0 /*8*/]))
		{
			unk_0xDC5B2F9D0CCE3A10(Local_92[iVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x6ABCCE651368DB93(Local_92[iVar0 /*8*/], 0x00000001);
			}
		}
		if (unk_0xE4EDC4B0E92C078B(Local_92[iVar0 /*8*/].f_1))
		{
			unk_0xDC5B2F9D0CCE3A10(Local_92[iVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x6ABCCE651368DB93(Local_92[iVar0 /*8*/].f_1, 0x00000001);
			}
		}
		if (Local_80.f_1B != joaat("hydra"))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_110[func_91(iVar0)], func_90(iVar0)) || unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar0)], func_90(iVar0)))
			{
				if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar0]))
				{
					func_92(&(Local_92[iVar0 /*8*/]));
				}
			}
		}
		else if ((iVar0 % 0x00000004) == 0x00000000)
		{
			iVar1 = (iVar0 / 0x00000004);
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_10F, iVar1) || unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_6, iVar1))
			{
				if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar0]))
				{
					func_92(&(Local_92[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_166(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		if (func_168())
		{
			Global_2537E2 = unk_0xD803B885F5E47A62();
		}
		if (bParam3)
		{
			func_167(unk_0x1B50683925F00106(uParam0), uParam1, 0x00000001, Global_2537E2, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_167(unk_0x1B50683925F00106(uParam0), uParam1, 0xFFFFFFFF, Global_2537E2, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(*uParam1))
	{
		func_92(uParam1);
	}
}

int func_167(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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
		unk_0xF947FFD8DA795A7F(iParam0, uParam4);
		unk_0xB46A36D2F28E60DE(iParam0, uParam5);
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

bool func_168()
{
	return Global_140856;
}

void func_169()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4[4];
	bool bVar5;
	int iVar6[4];
	var uVar7[4];
	int iVar8;
	int iVar9;
	
	iVar2 = (func_34() - func_126(&(Local_80.f_14C), 0x00000000, 0x00000000));
	if (iLocal_547 == 0x00000000)
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x0000001A))
		{
			if ((unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000000) && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000001)) && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000002))
			{
				iLocal_547 = (func_34() - func_126(&(Local_80.f_14C), 0x00000000, 0x00000000));
				iVar2 = iLocal_547;
			}
		}
	}
	else
	{
		iVar2 = iLocal_547;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x0000000B))
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x0000000A))
	{
		return;
	}
	if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_A >= 0x00000000)
	{
		return;
	}
	if (func_742())
	{
		iVar0 = (((Local_80.f_100[0x00000000] + Local_80.f_100[0x00000001]) + Local_80.f_100[0x00000002]) + Local_80.f_100[0x00000003]);
	}
	else
	{
		iVar0 = Local_80.f_100[0x00000000];
	}
	func_191(iVar2);
	if (iVar2 > 0x00007530)
	{
		iVar3 = 0x00000001;
	}
	else
	{
		iVar3 = 0x00000006;
	}
	if (func_742())
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000004)
		{
			iVar9 = unk_0x117658E336116132(Local_80.f_252[iVar1 /*4*/].f_2);
			if (iVar9 != func_5())
			{
				if (unk_0x40B8C182D63932FC(iVar9))
				{
					sVar4[iVar1] = unk_0x6E524813889AECF8(iVar9);
					iVar6[iVar1] = Local_80.f_252[iVar1 /*4*/].f_1;
					uVar7[iVar1] = Local_80.f_252[iVar1 /*4*/];
					if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_9 == uVar7[iVar1])
					{
						iVar8 = uVar7[iVar1];
						iVar8++;
					}
					uVar7[iVar1]++;
				}
				else
				{
					sVar4[iVar1] = "";
					iVar6[iVar1] = 0xFFFFFFFF;
				}
			}
			else
			{
				sVar4[iVar1] = "";
				iVar6[iVar1] = 0xFFFFFFFF;
			}
			iVar1++;
		}
		if ((func_34() - func_126(&(Local_80.f_14C), 0x00000000, 0x00000000)) >= 0x00000000)
		{
			if (Local_80.f_1B == joaat("rhino") || Local_80.f_1B == joaat("hydra"))
			{
				func_187(sVar4[0x00000000], uVar7[0x00000000], sVar4[0x00000001], uVar7[0x00000001], sVar4[0x00000002], uVar7[0x00000002], sVar4[0x00000003], uVar7[0x00000003], iVar6[0x00000000], iVar6[0x00000001], iVar6[0x00000002], iVar6[0x00000003], iVar2, iVar3, func_188(), iVar8);
			}
			else
			{
				func_185(iVar6[0x00000000], uVar7[0x00000000], iVar6[0x00000001], uVar7[0x00000001], iVar6[0x00000002], uVar7[0x00000002], iVar6[0x00000003], uVar7[0x00000003], iVar2, iVar3, func_188(), iVar8);
			}
		}
	}
	else if (iVar2 >= 0x00000000)
	{
		if (iVar0 > Local_80.f_FF)
		{
			iVar0 = Local_80.f_FF;
		}
		if (Local_80.f_1B == joaat("rhino") || Local_80.f_1B == joaat("hydra"))
		{
			func_184(unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), iVar0, iVar0, Local_80.f_FF, iVar2, iVar3, 0x00000000, func_188());
		}
		else
		{
			func_170(iVar0, iVar0, Local_80.f_FF, iVar2, iVar3, 0x00000000, func_188(), 0x00000001);
		}
		if (bVar5)
		{
			func_115();
		}
	}
}

void func_170(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)
{
	struct<8> Var0;
	char* sVar1;
	
	if (func_181(0x00000000) == 0x00000000)
	{
		return;
	}
	func_180();
	func_179();
	StringCopy(&Var0, "HUD_TEAM", 64);
	if (bParam5)
	{
		func_176(iParam0, &Var0, 0xFFFFFFFF, iParam7, 0x00000005, 0x00000001, "", 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	func_175(iParam1, iParam2, "UW_KLL", 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x000000FF, 0x00000000);
	sVar1 = "HUD_COUNTDOWN";
	if (!func_174(sParam6))
	{
		sVar1 = sParam6;
	}
	func_171(iParam3, sVar1, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, iParam4, 0x00000000, 0x00000000, 0x00000000, iParam4, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
}

void func_171(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_173(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_172(0x00000007, iVar0);
		Global_150976.f_11D2[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_11D2.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_11D2.f_AC[iVar0] = iParam2;
		Global_150976.f_11D2.f_D8[iVar0] = iParam3;
		Global_150976.f_11D2.f_B7[iVar0] = iParam4;
		Global_150976.f_11D2.f_C2[iVar0] = iParam5;
		Global_150976.f_11D2.f_F9[iVar0] = iParam6;
		Global_150976.f_11D2.f_104[iVar0] = iParam7;
		Global_150976.f_11D2.f_CD[iVar0] = iParam8;
		Global_150976.f_11D2.f_13A[iVar0] = iParam9;
		Global_150976.f_11D2.f_145[iVar0] = iParam10;
		Global_150976.f_11D2.f_165[iVar0] = iParam11;
		Global_150976.f_11D2.f_EE[iVar0] = iParam12;
		Global_150976.f_11D2.f_10F[iVar0] = iParam13;
		Global_150976.f_11D2.f_170[iVar0] = iParam14;
		Global_150976.f_11D2.f_17B[iVar0] = iParam15;
		Global_150976.f_11D2.f_186[iVar0] = iParam16;
		Global_150976.f_11D2.f_E3[iVar0] = iParam17;
	}
}

void func_172(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_173(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

int func_174(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 0x00000001;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_175(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_173(0x00000004, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_172(0x00000004, iVar0);
		Global_150976.f_CC8[iVar0] = iParam0;
		Global_150976.f_CC8.f_AC[iVar0] = iParam1;
		StringCopy(&(Global_150976.f_CC8.f_B[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_CC8.f_B7[iVar0] = iParam3;
		Global_150976.f_CC8.f_D8[iVar0] = iParam5;
		Global_150976.f_CC8.f_C2[iVar0] = iParam4;
		Global_150976.f_CC8.f_E3[iVar0] = iParam6;
		Global_150976.f_CC8.f_10E[iVar0] = iParam7;
		Global_150976.f_CC8.f_119[iVar0] = iParam8;
		Global_150976.f_CC8.f_124[iVar0] = iParam9;
		Global_150976.f_CC8.f_12F[iVar0] = iParam10;
		Global_150976.f_CC8.f_13A[iVar0] = iParam11;
		Global_150976.f_CC8.f_145[iVar0] = iParam13;
		Global_150976.f_CC8.f_150[iVar0] = iParam14;
		Global_150976.f_CC8.f_15B[iVar0] = iParam15;
		if (((iParam0 > 0x00000009 && iParam1 > 0x00000009) && unk_0x0EFF6B4415DAF4A1()) && iParam12)
		{
			Global_150976.f_46A = 0x00000001;
		}
	}
}

void func_176(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_173(0x00000006, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_172(0x00000006, iVar0);
		Global_150976.f_F68[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_F68.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_F68.f_B7[iVar0] = iParam3;
		Global_150976.f_F68.f_AC[iVar0] = iParam2;
		Global_150976.f_F68.f_104[iVar0] = iParam4;
		Global_150976.f_F68.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_150976.f_F68.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_150976.f_F68.f_1BB[iVar0] = iParam7;
		Global_150976.f_F68.f_1C6[iVar0] = iParam8;
		Global_150976.f_F68.f_1F1[iVar0] = iParam9;
		Global_150976.f_F68.f_1FC[iVar0] = iParam10;
		Global_150976.f_F68.f_CD[iVar0] = iParam11;
		Global_150976.f_F68.f_D8[iVar0] = iParam12;
		Global_150976.f_F68.f_E3[iVar0] = iParam13;
		Global_150976.f_F68.f_EE[iVar0] = iParam14;
		Global_150976.f_F68.f_F9[iVar0] = iParam15;
		Global_150976.f_F68.f_207[iVar0] = iParam16;
		Global_150976.f_F68.f_212[iVar0] = iParam17;
		Global_150976.f_F68.f_21D[iVar0] = iParam18;
		Global_150976.f_F68.f_228[iVar0] = iParam19;
		Global_150976.f_F68.f_233[iVar0] = iParam20;
		Global_150976.f_F68.f_23E[iVar0] = iParam21;
		Global_150976.f_F68.f_249[iVar0] = iParam22;
		Global_150976.f_F68.f_254[iVar0] = iParam23;
		Global_150976.f_F68.f_25F[iVar0] = iParam24;
		Global_150976.f_F68.f_C2[iVar0] = iParam25;
		if (iParam15 == 0x00000005 && func_178())
		{
			Global_150976.f_46A = 0x00000001;
		}
		if (unk_0x0EFF6B4415DAF4A1())
		{
			iVar2 = 0x00000000;
			unk_0xE5AC5CA7914F5BAE(&iVar3, &iVar4);
			if (iVar3 == 0x00000500 && iVar4 >= 0x000003C0)
			{
				iVar2 = 0x00000001;
			}
			if (iParam0 > 0x05F5E0FF)
			{
				Global_150976.f_46E = 0x00000001;
			}
			else if (iParam0 > 0x0098967F || iVar2)
			{
				Global_150976.f_46D = 0x00000001;
			}
			else if (iParam0 > 0x000003E7)
			{
				Global_150976.f_46A = 0x00000001;
			}
			if (func_177())
			{
				Global_150976.f_46E = 0x00000001;
			}
		}
	}
}

int func_177()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0xE5AC5CA7914F5BAE(&iVar0, &uVar1);
		if (iVar0 <= 0x00000400)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_178()
{
	if (((unk_0xB3260A60545D3F11() == 0x00000008 || unk_0xB3260A60545D3F11() == 0x00000009) || unk_0xB3260A60545D3F11() == 0x0000000A) || unk_0xB3260A60545D3F11() == 0x0000000C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_179()
{
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000007);
	Global_259211 = 0x00000001;
}

void func_180()
{
	Global_150976.f_46A = 0x00000001;
}

int func_181(bool bParam0)
{
	if (func_183())
	{
		return 0x00000000;
	}
	if (func_182())
	{
		return 0x00000000;
	}
	if (!bParam0)
	{
		if (func_844(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001) == 0x00000000)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_182()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0x00000000;
}

bool func_183()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x0000000C);
}

void func_184(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)
{
	char* sVar0;
	
	if (func_181(0x00000000) == 0x00000000)
	{
		return;
	}
	func_179();
	func_180();
	if (bParam6)
	{
		func_176(iParam1, sParam0, 0xFFFFFFFF, 0x00000001, 0x00000005, 0x00000001, "HUD_NUMKILLS", 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	func_175(iParam2, iParam3, "UW_KLL", 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x000000FF, 0x00000000);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_174(sParam7))
	{
		sVar0 = sParam7;
	}
	func_171(iParam4, sVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, iParam5, 0x00000000, 0x00000000, 0x00000000, iParam5, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
}

void func_185(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	if (func_181(0x00000000) == 0x00000000)
	{
		return;
	}
	func_180();
	func_179();
	if (iParam0 > 0xFFFFFFFF)
	{
		Var0 = { func_186(iParam1) };
		iVar1 = 0x00000001;
		if (iParam11 == iParam1)
		{
			iVar1 = 0x00000009;
		}
		func_176(iParam0, &Var0, 0xFFFFFFFF, iVar1, 0x00000007, 0x00000001, "", 0x00000000, 0x00000000, 0x00000000, 0x00000000, iVar1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	if (iParam2 > 0xFFFFFFFF)
	{
		Var0 = { func_186(iParam3) };
		iVar2 = 0x00000001;
		if (iParam11 == iParam3)
		{
			iVar2 = 0x00000009;
		}
		func_176(iParam2, &Var0, 0xFFFFFFFF, iVar2, 0x00000006, 0x00000001, "", 0x00000000, 0x00000000, 0x00000000, 0x00000000, iVar2, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	if (iParam4 > 0xFFFFFFFF)
	{
		Var0 = { func_186(iParam5) };
		iVar3 = 0x00000001;
		if (iParam11 == iParam5)
		{
			iVar3 = 0x00000009;
		}
		func_176(iParam4, &Var0, 0xFFFFFFFF, iVar3, 0x00000005, 0x00000001, "", 0x00000000, 0x00000000, 0x00000000, 0x00000000, iVar3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	if (iParam6 > 0xFFFFFFFF)
	{
		Var0 = { func_186(iParam7) };
		iVar4 = 0x00000001;
		if (iParam11 == iParam7)
		{
			iVar4 = 0x00000009;
		}
		func_176(iParam6, &Var0, 0xFFFFFFFF, iVar4, 0x00000004, 0x00000001, "", 0x00000000, 0x00000000, 0x00000000, 0x00000000, iVar4, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	sVar5 = "HUD_COUNTDOWN";
	if (!func_174(sParam10))
	{
		sVar5 = sParam10;
	}
	func_171(iParam8, sVar5, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, iParam9, 0x00000000, 0x00000000, 0x00000000, iParam9, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
}

struct<16> func_186(int iParam0)
{
	struct<16> Var0;
	
	StringConCat(&Var0, unk_0x19C9F30A7697B43C("HUD_TEAM"), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_187(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	
	if (func_181(0x00000000) == 0x00000000)
	{
		return;
	}
	func_180();
	func_179();
	if (iParam8 > 0xFFFFFFFF)
	{
		iVar0 = 0x00000001;
		if (iParam15 == iParam1)
		{
			iVar0 = 0x00000009;
		}
		func_176(iParam8, sParam0, 0xFFFFFFFF, 0x00000001, 0x00000007, 0x00000001, "", 0x00000000, 0x00000000, 0x00000000, 0x00000000, iVar0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	if (iParam9 > 0xFFFFFFFF)
	{
		iVar1 = 0x00000001;
		if (iParam15 == iParam3)
		{
			iVar1 = 0x00000009;
		}
		func_176(iParam9, sParam2, 0xFFFFFFFF, 0x00000001, 0x00000006, 0x00000001, "", 0x00000000, 0x00000000, 0x00000000, 0x00000000, iVar1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	if (iParam10 > 0xFFFFFFFF)
	{
		iVar2 = 0x00000001;
		if (iParam15 == iParam5)
		{
			iVar2 = 0x00000009;
		}
		func_176(iParam10, sParam4, 0xFFFFFFFF, 0x00000001, 0x00000005, 0x00000001, "", 0x00000000, 0x00000000, 0x00000000, 0x00000000, iVar2, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	if (iParam11 > 0xFFFFFFFF)
	{
		iVar3 = 0x00000001;
		if (iParam15 == iParam7)
		{
			iVar3 = 0x00000009;
		}
		func_176(iParam11, sParam6, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000001, "", 0x00000000, 0x00000000, 0x00000000, 0x00000000, iVar3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	sVar4 = "HUD_COUNTDOWN";
	if (!func_174(sParam14))
	{
		sVar4 = sParam14;
	}
	func_171(iParam12, sVar4, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, iParam13, 0x00000000, 0x00000000, 0x00000000, iParam13, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
}

char* func_188()
{
	return "HUD_COUNTDOWN";
	switch (func_190(unk_0xD803B885F5E47A62()))
	{
		case 0x00000083:
			return "AET_HOT_TARG";
		
		case 0x00000084:
			return "AET_CHK_COLL";
		
		case 0x00000085:
			switch (func_189())
			{
				case 0x00000000:
					return "AET_CHALL_LJ";
				
				case 0x00000001:
					return "AET_CHALL_LS";
				
				case 0x00000002:
					return "AET_CHALL_HS";
				
				case 0x00000003:
					return "AET_CHALL_LST";
				
				case 0x00000004:
					return "AET_CHALL_LW";
				
				case 0x00000005:
					return "AET_CHALL_NC";
				
				case 0x00000006:
					return "AET_CHALL_LP";
				
				case 0x00000007:
					return "AET_CHALL_VS";
				
				case 0x00000008:
					return "AET_CHALL_NM";
				
				case 0x00000009:
					return "AET_CHALL_RD";
				
				case 0x0000000A:
					return "AET_CHALL_LF";
				
				case 0x0000000B:
					return "AET_CHALL_LFL";
				
				case 0x0000000C:
					return "AET_CHALL_LFI";
				
				case 0x0000000D:
					return "AET_CHALL_LB";
				
				case 0x0000000E:
					return "AET_CHALL_MB";
				
				case 0x0000000F:
					return "AET_CHALL_HSH";
				
				case 0x00000010:
					return "AET_CHALL_DB";
				
				case 0x00000011:
					return "AET_CHALL_ML";
				
				case 0x00000012:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 0x00000088:
			return "AET_PENNED";
		
		case 0x0000008A:
			return "AET_PARCEL";
		
		case 0x0000008B:
			return "AET_PROPERTY";
		
		case 0x0000008C:
			return "AET_DDROP";
		
		case 0x0000008D:
			return "AET_KCASTLE";
		
		case 0x00000090:
			return "AET_BLAST";
		
		case 0x00000081:
			return "AET_UWARF";
		
		case 0x00000092:
			return "AET_BEAST";
	}
	return "";
}

int func_189()
{
	if (func_190(unk_0xD803B885F5E47A62()) == 0x00000085)
	{
		return Global_26B66F.f_13B5;
	}
	return 0xFFFFFFFF;
}

int func_190(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/];
	}
	return 0xFFFFFFFF;
}

void func_191(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x6117725E0134737F())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000000))
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_26B66F.f_1363)))
			{
				unk_0xA6C13961116F9033(&(Global_26B66F.f_1363));
			}
			unk_0xBEF52C1D400C0A44(0x00000001);
			unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
			unk_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
			unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000000);
			unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000000);
			if (Global_26B66F.f_136B > 0xFFFFFFFF)
			{
				unk_0x43A06902454A1172(Global_26B66F.f_136B);
				Global_26B66F.f_136B = 0xFFFFFFFF;
			}
			Global_26B66F.f_1361 = 0x00000000;
		}
	}
	else if (iParam0 < 0x00007530)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000000))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000004))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000002))
				{
					if (unk_0x3133F8A3F91571F1())
					{
						if ((!unk_0x7F8A39872A07D2CE(unk_0xE4B65163E4129619(unk_0xFC21F7E0F4D92523()), "OFF") && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && !unk_0xEA6BC48857E0AC4C(&(Global_26B66F.f_1363)))
						{
							StringCopy(&(Global_26B66F.f_1363), "", 32);
							unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
							unk_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
							unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000000);
							unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000000);
							unk_0xBEF52C1D400C0A44(0x00000001);
							unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000002);
						}
					}
				}
				else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000005))
				{
					unk_0xA6C13961116F9033("OFF");
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000001))
			{
				if (iParam0 < 0x00002710)
				{
					unk_0xC92DB9682A650680("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 0x00004E20)
				{
					unk_0xC92DB9682A650680("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0xC92DB9682A650680("FM_COUNTDOWN_30S");
				}
				unk_0x8BC9595FD2792B5D("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000001);
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000004))
			{
				if (iParam0 < 0x00006B6C)
				{
					if (unk_0x0931E02856C8B6A4() != 0x00000000)
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x3F02B7BDF1B316D6())
						{
							StringCopy(&(Global_26B66F.f_1363), unk_0x04DF2A8CF5EBE3B0(), 32);
							unk_0xA6C13961116F9033("OFF");
						}
						unk_0xBEF52C1D400C0A44(0x00000001);
						unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000004);
					}
				}
			}
			if (iParam0 < 0x00002710)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000003))
				{
					Global_26B66F.f_136B = unk_0xD68EA767274B7444();
					unk_0x4D7F4CC43D4D0DE3(Global_26B66F.f_136B, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0x00000000);
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000003);
				}
			}
		}
		else if (iParam0 > 0x00002710)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000000))
			{
				Global_26B66F.f_1361 = 0x00000000;
				Global_26B66F.f_136B = 0xFFFFFFFF;
				unk_0x13896FDECC859926("FM_COUNTDOWN_30S_KILL");
				unk_0xBEF52C1D400C0A44(0x00000000);
				unk_0xC92DB9682A650680("FM_PRE_COUNTDOWN_30S");
				unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000001);
				unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000001);
				unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000001);
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000000);
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000002))
				{
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000002);
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000005);
				}
				else
				{
					unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 0x00000005);
					unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 0x00000002);
				}
			}
		}
	}
	else if (iParam0 < 0x00009C40 && iParam0 > 0x00007530)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000000))
		{
			Global_26B66F.f_1361 = 0x00000000;
			Global_26B66F.f_136B = 0xFFFFFFFF;
			unk_0x13896FDECC859926("FM_COUNTDOWN_30S_KILL");
			unk_0xBEF52C1D400C0A44(0x00000000);
			unk_0xC92DB9682A650680("FM_PRE_COUNTDOWN_30S");
			unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000001);
			unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000001);
			unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000001);
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000000);
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000002);
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000005);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 0x00000002);
				unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 0x00000005);
			}
		}
	}
}

void func_192()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0xE4EDC4B0E92C078B(uLocal_91[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(uLocal_91[iVar0]));
		}
		iVar0++;
	}
}

void func_193(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (!unk_0xE4EDC4B0E92C078B(uLocal_91[iVar0]))
		{
			if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar0]))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_D, iVar0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_83[iParam0 /*18*/].f_1, iVar0))
					{
						uLocal_91[iVar0] = unk_0x5C3B41825F6AC5A0(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]));
						unk_0xBC8E0A7390523199(uLocal_91[iVar0], 0x000001AD);
						func_194(&(uLocal_91[iVar0]), 0x0000001D);
						if (func_742())
						{
							unk_0xDC5B2F9D0CCE3A10(uLocal_91[iVar0], "UW_BLIPC");
						}
						else
						{
							unk_0xDC5B2F9D0CCE3A10(uLocal_91[iVar0], "UW_BLIP");
						}
						unk_0x2A065371C9D96655(uLocal_91[iVar0], 0x00000009);
					}
					else if (unk_0xE4EDC4B0E92C078B(uLocal_91[iVar0]))
					{
						unk_0x142CC44DB769B57E(&(uLocal_91[iVar0]));
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(uLocal_91[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uLocal_91[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_194(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xE4EDC4B0E92C078B(*uParam0))
	{
		uVar0 = func_195(iParam1);
		unk_0x61755AC17D8F538E(*uParam0, uVar0);
	}
}

int func_195(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 0x00000001:
			return 0x00000004;
		
		case 0x00000000:
			return 0x00000004;
		
		case 0x00000006:
			return 0x0000003B;
		
		case 0x00000012:
			return 0x00000002;
		
		case 0x0000000D:
			return 0x00000005;
		
		case 0x00000074:
			return 0x00000026;
		
		case 0x0000001C:
			return 0x00000006;
		
		case 0x0000001D:
			return 0x00000007;
		
		case 0x0000001E:
			return 0x00000008;
		
		case 0x0000001F:
			return 0x00000009;
		
		case 0x00000020:
			return 0x0000000A;
		
		case 0x00000021:
			return 0x0000000B;
		
		case 0x00000022:
			return 0x0000000C;
		
		case 0x00000023:
			return 0x0000000D;
		
		case 0x00000024:
			return 0x0000000E;
		
		case 0x00000025:
			return 0x0000000F;
		
		case 0x00000026:
			return 0x00000010;
		
		case 0x00000027:
			return 0x00000011;
		
		case 0x00000028:
			return 0x00000012;
		
		case 0x00000029:
			return 0x00000013;
		
		case 0x0000002A:
			return 0x00000014;
		
		case 0x0000002B:
			return 0x00000015;
		
		case 0x0000002C:
			return 0x00000016;
		
		case 0x0000002D:
			return 0x00000017;
		
		case 0x0000002E:
			return 0x00000018;
		
		case 0x0000002F:
			return 0x00000019;
		
		case 0x00000030:
			return 0x0000001A;
		
		case 0x00000031:
			return 0x0000001B;
		
		case 0x00000032:
			return 0x0000001C;
		
		case 0x00000033:
			return 0x0000001D;
		
		case 0x00000034:
			return 0x0000001E;
		
		case 0x00000035:
			return 0x0000001F;
		
		case 0x00000036:
			return 0x00000020;
		
		case 0x00000037:
			return 0x00000021;
		
		case 0x00000038:
			return 0x00000022;
		
		case 0x00000039:
			return 0x00000023;
		
		case 0x0000003A:
			return 0x00000024;
		
		case 0x0000003B:
			return 0x00000025;
		
		case 0x00000009:
			return 0x00000039;
		
		case 0x0000000A:
			return 0x00000035;
		
		case 0x00000076:
			return 0x00000039;
		
		case 0x0000000E:
			return 0x00000038;
		
		case 0x00000003:
			return 0x00000037;
		
		case 0x00000015:
			return 0x00000032;
		
		case 0x0000000F:
			return 0x00000033;
		
		case 0x00000014:
			return 0x00000034;
		
		case 0x0000000B:
			return 0x00000036;
		
		case 0x00000017:
			return 0x0000003A;
		
		case 0x0000000C:
			return 0x0000003C;
		
		case 0x00000018:
			return 0x0000003D;
		
		case 0x00000004:
			return 0x0000003E;
		
		default:
	}
	unk_0xA402F6C87C08815C(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 0x01000000) + (iVar1 * 0x00010000)) + iVar2 * 256) + iVar3);
	return 0x00000000;
}

void func_196()
{
	bool bVar0;
	
	bVar0 = func_261();
	if (bVar0)
	{
		if (Local_80.f_19D > 0xFFFFFFFF)
		{
			if ((Local_80.f_19D - func_126(&(Local_80.f_146), 0x00000000, 0x00000000)) >= 0x00000000)
			{
				if (!func_200())
				{
					func_199((Local_80.f_19D - func_126(&(Local_80.f_146), 0x00000000, 0x00000000)));
					func_197((Local_80.f_19D - func_126(&(Local_80.f_146), 0x00000000, 0x00000000)), func_198(0xFFFFFFFF));
				}
			}
			else
			{
				if (!func_200())
				{
					func_197(0x00000000, func_198(0xFFFFFFFF));
				}
				if (unk_0xBFF81ED3B99522C7())
				{
					unk_0x5D96D8530B3D0904(&(Local_80.f_3), 0x00000004);
				}
			}
		}
	}
}

void func_197(int iParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_181(0x00000000) == 0x00000000)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_174(sParam1))
	{
		sVar0 = sParam1;
	}
	func_171(iParam0, sVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
}

char* func_198(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xBB0808A181D4745C();
	return "HUD_STARTING";
	if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0x00000000:
				return "AST_CHALL_LJ";
			
			case 0x00000001:
				return "AST_CHALL_LS";
			
			case 0x00000002:
				return "AST_CHALL_HS";
			
			case 0x00000003:
				return "AST_CHALL_LST";
			
			case 0x00000004:
				return "AST_CHALL_LW";
			
			case 0x00000005:
				return "AST_CHALL_NC";
			
			case 0x00000006:
				return "AST_CHALL_LP";
			
			case 0x00000007:
				return "AST_CHALL_VS";
			
			case 0x00000008:
				return "AST_CHALL_NM";
			
			case 0x00000009:
				return "AST_CHALL_RD";
			
			case 0x0000000A:
				return "AST_CHALL_LF";
			
			case 0x0000000B:
				return "AST_CHALL_LFL";
			
			case 0x0000000C:
				return "AST_CHALL_LFI";
			
			case 0x0000000D:
				return "AST_CHALL_LB";
			
			case 0x0000000E:
				return "AST_CHALL_MB";
			
			case 0x0000000F:
				return "AST_CHALL_HSH";
			
			case 0x00000010:
				return "AST_CHALL_DB";
			
			case 0x00000011:
				return "AST_CHALL_ML";
			
			case 0x00000012:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_199(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x6117725E0134737F())
	{
		Global_26B66F.f_1361 = 0x00000000;
	}
	else if (iParam0 < 0x00001770)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000001))
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0x00000000);
			Global_26B66F.f_1361 = 0x00000000;
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000001);
		}
	}
}

bool func_200()
{
	bool bVar0;
	int iVar1;
	
	if (func_259(0x00000008))
	{
		bVar0 = 0x00000001;
	}
	if (func_259(0x00000000))
	{
		bVar0 = 0x00000001;
	}
	if (!func_251(0x00000081, 0x00000000, 0x00000000))
	{
		bVar0 = 0x00000001;
	}
	if (!func_207(0x00000000, 0x00000001, 0x00000001))
	{
		bVar0 = 0x00000001;
	}
	if (bVar0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x00000009))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar1 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
				if (!unk_0xDF1306B443CD3D15(iVar1, 0x00000000))
				{
					func_205(0x00000000, 0xFFFFFFFF);
					unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x00000009);
				}
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x00000009))
	{
		unk_0x0674E58A79778E99(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x00000009);
	}
	if (Global_195C36)
	{
		bVar0 = 0x00000001;
	}
	if (func_204(unk_0xD803B885F5E47A62()))
	{
		bVar0 = 0x00000001;
	}
	if (func_203(unk_0xD803B885F5E47A62(), 0x00000002))
	{
		bVar0 = 0x00000001;
	}
	if (func_201(unk_0xD803B885F5E47A62()))
	{
		bVar0 = 0x00000001;
	}
	return bVar0;
}

bool func_201(int iParam0)
{
	if (func_202(iParam0))
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000008);
}

bool func_202(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000002);
}

bool func_203(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

int func_204(int iParam0)
{
	if (!func_844(iParam0, 0x00000000, 0x00000001))
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_23;
}

void func_205(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_184488)
		{
			if (!func_259(0x00000000) && !func_259(func_206(iParam1)))
			{
				Global_184488 = 0x00000001;
			}
		}
	}
	else if (Global_184488)
	{
		Global_184488 = 0x00000000;
	}
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000083:
			return 0x0000000A;
		
		case 0x00000084:
			return 0x00000001;
		
		case 0x00000085:
			return 0x00000002;
		
		case 0x00000088:
			return 0x0000000B;
		
		case 0x0000008A:
			return 0x00000005;
		
		case 0x0000008B:
			return 0x00000006;
		
		case 0x00000081:
			return 0x00000008;
		
		case 0x0000008C:
			return 0x00000004;
		
		case 0x0000008D:
			return 0x00000009;
		
		case 0x00000090:
			return 0x00000003;
		
		case 0x00000092:
			return 0x00000007;
		
		case 0x000000EC:
			return 0x0000000C;
		
		case 0x00000096:
			return 0x0000000C;
		
		default:
	}
	return Global_40001.f_5C52;
}

int func_207(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_250(unk_0xD803B885F5E47A62(), 0x0000001D))
	{
		return 0x00000000;
	}
	if (func_203(unk_0xD803B885F5E47A62(), 0x00000015))
	{
		return 0x00000000;
	}
	if (func_203(unk_0xD803B885F5E47A62(), 0x00000019))
	{
		return 0x00000000;
	}
	if (unk_0x09BE1E6DF7B80B43())
	{
		return 0x00000000;
	}
	if (bParam1)
	{
		if (unk_0xF929B1A0A409FF93())
		{
			return 0x00000000;
		}
	}
	if (func_248(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_247())
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		if (func_246(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (func_245())
	{
		return 0x00000000;
	}
	if (bParam0)
	{
		if (func_244(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	else if (func_228(unk_0xD803B885F5E47A62()) == 0x00000003)
	{
		return 0x00000000;
	}
	if (func_227(unk_0xD803B885F5E47A62()) != func_5() && func_227(unk_0xD803B885F5E47A62()) == func_65(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_225(func_226()) && !func_224(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_223())
	{
		return 0x00000000;
	}
	if (func_182())
	{
		return 0x00000000;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0x00000000;
	}
	if (func_221(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!func_219())
	{
		return 0x00000000;
	}
	if (func_203(unk_0xD803B885F5E47A62(), 0x00000000) || func_203(unk_0xD803B885F5E47A62(), 0x00000003))
	{
		return 0x00000000;
	}
	if ((func_203(unk_0xD803B885F5E47A62(), 0x0000000C) || func_203(unk_0xD803B885F5E47A62(), 0x0000000E)) || func_203(unk_0xD803B885F5E47A62(), 0x0000000D))
	{
		return 0x00000000;
	}
	if (func_218(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (!func_217() && !Global_265A4F)
		{
			return 0x00000000;
		}
	}
	if (func_216(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_215())
	{
		return 0x00000000;
	}
	if (Global_195C36)
	{
		return 0x00000000;
	}
	if (func_204(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_214())
	{
		return 0x00000000;
	}
	if (func_212(unk_0xD803B885F5E47A62()) && Global_1843A8.f_AB)
	{
		return 0x00000000;
	}
	if (func_211())
	{
		return 0x00000000;
	}
	if (func_210(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (Global_26B2C2)
	{
		return 0x00000000;
	}
	if (Global_19D9BB)
	{
		return 0x00000000;
	}
	if (!func_209(unk_0xD803B885F5E47A62()))
	{
		if (func_208(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_208(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_19FCF7[iVar0 /*13*/].f_C != 0x00000000;
	}
	return 0x00000000;
}

int func_209(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000007);
	}
	return 0x00000000;
}

int func_210(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x8CD06866876216F2())
	{
		return 0x00000000;
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_265BE1;
	}
	else
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

bool func_211()
{
	return Global_199459.f_1DA;
}

int func_212(int iParam0)
{
	if (func_213(Global_184507[iParam0 /*876*/].f_112.f_1C))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000057:
		case 0x00000058:
		case 0x00000059:
		case 0x0000005A:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_214()
{
	if (Global_40EB30.f_3AF > 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_215()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_216(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000000B);
}

bool func_217()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_218(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_5())
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000000))
	{
		return 0x00000001;
	}
	if (bParam1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (bParam2)
	{
		if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_219()
{
	if (func_220() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_220()
{
	return Global_1406D3.f_12;
}

bool func_221(int iParam0)
{
	return func_222(iParam0);
}

bool func_222(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

bool func_223()
{
	return Global_14086D;
}

int func_224(int iParam0)
{
	if (func_190(iParam0) == 0x000000EC || func_190(iParam0) == 0x00000096)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000057:
		case 0x00000058:
		case 0x00000059:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x0000005A:
		case 0x0000006E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_226()
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1;
}

int func_227(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_23;
}

int func_228(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 0x00000002;
	bVar1 = ((func_243(iParam0) && !func_202(iParam0)) && !unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000008));
	bVar2 = func_244(iParam0);
	bVar3 = func_242();
	uVar4 = func_233();
	if ((bVar1 && (func_209(iParam0) || func_232(iParam0))) || uVar4)
	{
		iVar0 = 0x00000000;
	}
	else if (bVar3 || ((!bVar2 && !func_231(iParam0)) && !func_229(iParam0)))
	{
		iVar0 = 0x00000002;
	}
	else
	{
		iVar0 = 0x00000003;
	}
	if (Global_26B66F.f_1404.f_D8 != iVar0)
	{
		Global_26B66F.f_1404.f_D8 = iVar0;
	}
	return iVar0;
}

bool func_229(int iParam0)
{
	return func_230(iParam0, 0x00000013);
}

bool func_230(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_231(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_230(iParam0, 0x00000009);
	}
	return 0x00000000;
}

int func_232(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

int func_233()
{
	if ((func_230(unk_0xD803B885F5E47A62(), 0x00000015) || func_230(unk_0xD803B885F5E47A62(), 0x00000016)) || func_239())
	{
		return 0x00000001;
	}
	if (func_235())
	{
		func_234(0x00000016);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_234(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

int func_235()
{
	if (func_238(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (((func_242() && !func_237()) || func_203(unk_0xD803B885F5E47A62(), 0x00000015)) || func_203(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			return 0x00000001;
		}
		else
		{
			func_236(0x0000001B);
		}
	}
	return 0x00000000;
}

void func_236(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

bool func_237()
{
	return Global_1406A2.f_1;
}

int func_238(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_239()
{
	return func_240(0x00000166, 0xFFFFFFFF);
}

int func_240(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_241(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_241(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_18();
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

bool func_242()
{
	return Global_1406A2;
}

int func_243(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/] != 0xFFFFFFFF;
	}
	return 0x00000000;
}

bool func_244(int iParam0)
{
	return func_230(iParam0, 0x00000014);
}

bool func_245()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000005;
}

int func_246(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_105.f_4 != 0x00000000 || Global_25033E[iParam0 /*421*/].f_105.f_5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_247()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x00000000);
}

int func_248(int iParam0)
{
	if (func_249(iParam0, 0x00000001, 0x00000000))
	{
		if (Global_184507[iParam0 /*876*/] != 0x00000006)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_249(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_221(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_184507[iParam0 /*876*/] == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_250(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_5, iParam1);
}

bool func_251(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_40001.f_1E06 == 0x00000001)
	{
		if (iParam0 == 0x00000043)
		{
			return 0x00000001;
		}
		if (iParam0 == 0x0000004A)
		{
			return 0x00000001;
		}
		if (func_255(unk_0xD803B885F5E47A62(), 0x00000055))
		{
			if (((((iParam0 == 0x00000040 || iParam0 == 0x0000004D) || iParam0 == 0x0000003D) || iParam0 == 0x00000051) || iParam0 == 0x0000003F) || iParam0 == 0x0000003E)
			{
				return 0x00000001;
			}
		}
		if ((((((((((iParam0 == 0x00000042 || iParam0 == 0x00000074) || iParam0 == 0x00000067) || iParam0 == 0x00000068) || iParam0 == 0x00000069) || iParam0 == 0x00000077) || iParam0 == 0x00000058) || iParam0 == 0x0000004B) || iParam0 == 0x0000005F) || iParam0 == 0x00000041) || iParam0 == 0x00000062)
		{
			return 0x00000001;
		}
	}
	if (iParam0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x0000001F)
	{
		if (Global_40001.f_126E == 0x00000001)
		{
			return 0x00000001;
		}
	}
	if (func_254() || func_253())
	{
		return 0x00000001;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 0x00000020);
	iVar0 = (iVar0 % 0x00000020);
	if (bParam1)
	{
		if (iParam0 == 0x00000003)
		{
			if (func_252())
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	if (bParam2)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1806ED[iVar1], iVar0);
}

int func_252()
{
	int iVar0;
	
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C3, 0x00000017))
	{
		return 0x00000001;
	}
	if (func_254())
	{
		return 0x00000001;
	}
	if (func_253())
	{
		return 0x00000001;
	}
	iVar0 = Global_152E10[func_241(0xFFFFFFFF)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000007))
	{
		unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C3), 0x00000017);
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_253()
{
	return Global_140861;
}

bool func_254()
{
	return Global_140863;
}

bool func_255(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_258())
	{
		return 0x00000000;
	}
	if (func_257())
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000056)
	{
		return 0x00000001;
	}
	uVar0 = func_256(iParam1);
	iVar1 = uVar0;
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_2DA, iVar1);
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000056:
			return 0x00000000;
		
		case 0x00000013:
			return 0x00000001;
		
		case 0x0000000C:
			return 0x00000002;
		
		case 0x0000001F:
			return 0x00000003;
		
		case 0x00000014:
			return 0x00000004;
		
		case 0x00000012:
			return 0x00000005;
		
		case 0x00000002:
			return 0x00000006;
		
		case 0x0000004C:
			return 0x00000007;
		
		case 0x00000016:
			return 0x00000008;
		
		case 0x00000035:
			return 0x00000009;
		
		case 0x00000022:
			return 0x0000000A;
		
		case 0x00000098:
			return 0x0000000B;
		
		case 0x00000055:
			return 0x0000000C;
		
		case 0x00000054:
			return 0x0000000D;
		
		case 0x00000000:
			return 0x0000000E;
		
		case 0x00000001:
			return 0x0000000F;
		
		case 0x00000099:
			return 0x00000010;
		
		case 0x00000097:
			return 0x00000011;
		
		case 0x0000000E:
			return 0x00000012;
		
		case 0x0000000F:
			return 0x00000013;
		
		case 0x00000018:
			return 0x00000014;
		
		case 0x0000001E:
			return 0x00000015;
		
		case 0x0000002E:
			return 0x00000016;
		
		case 0x0000002F:
			return 0x00000017;
		
		case 0x00000036:
			return 0x00000018;
		
		case 0x00000033:
			return 0x00000019;
		
		case 0x0000003C:
			return 0x0000001A;
		
		case 0x0000003E:
			return 0x0000001B;
		
		case 0x00000042:
			return 0x0000001C;
		
		case 0x00000045:
			return 0x0000001D;
		
		case 0x0000009A:
			return 0x0000001E;
		
		case 0x00000052:
			return 0x0000001F;
		
		case 0x0000009D:
			return 0x00000020;
		
		default:
	}
	return 0x00000001;
}

bool func_257()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92, 0x00000003);
}

int func_258()
{
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_254())
	{
		return 0x00000001;
	}
	if (func_253())
	{
		return 0x00000001;
	}
	return func_240(0x00000078, 0xFFFFFFFF);
}

bool func_259(int iParam0)
{
	var uVar0;
	
	uVar0 = func_260(0x000009B0, 0xFFFFFFFF, 0x00000000);
	return unk_0xEAE0D21A50E6C7F4(uVar0, iParam0);
}

int func_260(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		uVar0 = Global_26E2D2[iParam0 /*3*/][func_241(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(uVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

bool func_261()
{
	bool bVar0;
	
	if (!func_742())
	{
		if (Local_80.f_1B == joaat("hydra") || Local_80.f_1B == joaat("rhino"))
		{
			return 0x00000000;
		}
	}
	else if (Local_80.f_1B == joaat("hydra") || Local_80.f_1B == joaat("rhino"))
	{
		if (func_112() == 0x00000002)
		{
			return 0x00000000;
		}
	}
	if (!func_742())
	{
		if (unk_0xE5DBF9B6126856CA(Local_80.f_7[0x00000000]))
		{
			if (unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_7[0x00000000])) == joaat("valkyrie"))
			{
				bVar0 = Local_80.f_F != 0x00000000;
			}
			else
			{
				bVar0 = Local_80.f_E != 0x00000000;
			}
		}
	}
	else
	{
		bVar0 = unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000009);
	}
	if (!func_16(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (bVar0 && !func_200())
		{
			if (func_742())
			{
				if (!func_268("UW_ABTSC"))
				{
					func_262("UW_ABTSC", 0x00000000);
				}
			}
			else if (!func_268("UW_ABTS"))
			{
				func_262("UW_ABTS", 0x00000000);
			}
		}
		else if (func_268("UW_ABTSC") || func_268("UW_ABTS"))
		{
			func_9();
		}
	}
	return bVar0;
}

void func_262(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return;
	}
	if (func_266(sParam0))
	{
		return;
	}
	func_10();
	Global_140749 = 0x00000000;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	func_265();
	func_264(bParam1);
	func_263();
}

void func_263()
{
	unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000001);
}

void func_264(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000000);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_140749.f_3B), 0x00000000);
}

void func_265()
{
	Global_140749.f_A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x05265C00);
	Global_140749.f_B = unk_0x2B6E0A53779D29EA();
}

bool func_266(char* sParam0)
{
	if (!func_15())
	{
		return 0x00000000;
	}
	if (Global_140749 == 0x0000000B)
	{
		return func_267(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C));
}

bool func_267(char* sParam0)
{
	if (!func_15())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

int func_268(char* sParam0)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	if (!func_15())
	{
		return 0x00000000;
	}
	if (Global_140749 == 0x0000000B)
	{
		if (unk_0x7724E025FD444F45(sParam0) > 0x0000003F)
		{
			return 0x00000000;
		}
	}
	else if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return 0x00000000;
	}
	return func_266(sParam0);
}

void func_269(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	bool bVar2;
	
	Var1 = { func_414() };
	bVar2 = 0x00000000;
	if (Local_80.f_1B == joaat("rhino") || Local_80.f_1B == joaat("hydra"))
	{
		bVar2 = 0x00000001;
	}
	if (bVar2)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			Local_101[iVar0 /*42*/] = 0xFFFFFFFF;
			Local_101[iVar0 /*42*/].f_1 = func_5();
			Local_101[iVar0 /*42*/].f_9 = 0x00000000;
			Local_101[iVar0 /*42*/].f_1F = 0xFFFFFFFF;
			if (Local_80.f_1D1[iVar0 /*4*/].f_1 > 0xFFFFFFFF)
			{
				Local_101[iVar0 /*42*/].f_1 = Local_80.f_1D1[iVar0 /*4*/].f_2;
				Local_101[iVar0 /*42*/].f_9 = Local_80.f_1D1[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_413())
			{
				if (Local_102.f_67 != 0x00000081)
				{
					Local_102.f_67 = 0x00000081;
				}
				else
				{
					func_205(0x00000001, 0x00000081);
				}
			}
		}
		else if (Local_102.f_67 != 0x00000081)
		{
			Local_102.f_67 = 0x00000081;
		}
		func_274(&Local_101, &uLocal_100, 0x0000001B, &Local_102, &uLocal_115, 0xFFFFFFFF, 0x00000000, 0x00000000);
		if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 == 0x00000001)
		{
			if (Local_101[0x00000000 /*42*/].f_1 != unk_0xD803B885F5E47A62())
			{
				if (Local_80.f_1D1[0x00000000 /*4*/].f_1 > 0x00000000)
				{
					func_273();
				}
			}
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			Local_101[iVar0 /*42*/] = 0xFFFFFFFF;
			Local_101[iVar0 /*42*/].f_1 = func_5();
			Local_101[iVar0 /*42*/].f_9 = 0x00000000;
			Local_101[iVar0 /*42*/].f_1F = 0xFFFFFFFF;
			Local_101[iVar0 /*42*/].f_27 = 0xFFFFFFFF;
			if (Local_80.f_1D1[iVar0 /*4*/].f_1 > 0xFFFFFFFF)
			{
				Local_101[iVar0 /*42*/].f_27 = Local_80.f_1D1[iVar0 /*4*/] + 1;
				Local_101[iVar0 /*42*/].f_1 = unk_0x117658E336116132(Local_80.f_1D1[iVar0 /*4*/].f_2);
				Local_101[iVar0 /*42*/].f_28 = Local_80.f_1D1[iVar0 /*4*/].f_1;
				Local_101[iVar0 /*42*/].f_9 = Local_80.f_1D1[iVar0 /*4*/].f_1;
				Local_101[iVar0 /*42*/].f_2 = Local_80.f_1D1[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_270();
		if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 == 0x00000001)
		{
			if (Local_80.f_252[0x00000000 /*4*/] > 0x00000000)
			{
				if (Local_80.f_252[0x00000000 /*4*/] != Local_83[unk_0x57270EE11514DC67() /*18*/].f_9)
				{
					if (Local_80.f_100[Local_80.f_252[0x00000000 /*4*/]] > 0x00000000)
					{
						func_273();
					}
				}
			}
		}
		func_274(&Local_101, &uLocal_100, 0x0000001B, &Local_102, &uLocal_115, 0xFFFFFFFF, 0x00000001, 0x00000000);
		if (bParam0)
		{
			if (!func_413())
			{
				if (Local_102.f_67 != 0x00000081)
				{
					Local_102.f_67 = 0x00000081;
				}
				else
				{
					func_205(0x00000001, 0x00000081);
				}
			}
		}
		else if (Local_102.f_67 != 0x00000081)
		{
			Local_102.f_67 = 0x00000081;
		}
	}
}

void func_270()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	
	uLocal_575[0x00000000] = Local_80.f_252[0x00000000 /*4*/];
	uLocal_575[0x00000001] = Local_80.f_252[0x00000001 /*4*/];
	uLocal_575[0x00000002] = Local_80.f_252[0x00000002 /*4*/];
	uLocal_575[0x00000003] = Local_80.f_252[0x00000003 /*4*/];
	iVar3 = Local_80.f_252[0x00000000 /*4*/];
	iVar4 = Local_80.f_252[0x00000001 /*4*/];
	iVar5 = Local_80.f_252[0x00000002 /*4*/];
	iVar6 = Local_80.f_252[0x00000003 /*4*/];
	if (iVar3 != 0xFFFFFFFF)
	{
		uVar7 = Local_80.f_10A[iVar3];
	}
	if (iVar4 != 0xFFFFFFFF)
	{
		uVar8 = Local_80.f_10A[iVar4];
	}
	if (iVar5 != 0xFFFFFFFF)
	{
		uVar9 = Local_80.f_10A[iVar5];
	}
	if (iVar6 != 0xFFFFFFFF)
	{
		uVar10 = Local_80.f_10A[iVar6];
	}
	uLocal_576[0x00000000] = uVar7;
	uLocal_576[0x00000001] = uVar8;
	uLocal_576[0x00000002] = uVar9;
	uLocal_576[0x00000003] = uVar10;
	iVar11 = 0x00000000;
	while (iVar11 < unk_0x0DC0B2DBBD52B0C0())
	{
		iVar2 = func_272(uLocal_575[iVar0], iVar11);
		if (iVar2 != 0xFFFFFFFF)
		{
			Local_101[iVar2 /*42*/].f_9 = Local_80.f_252[iVar0 /*4*/].f_1;
		}
		func_271(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_576[iVar0])
		{
			iVar0++;
			iVar1 = 0x00000000;
		}
		if (iVar0 >= 0x00000004)
		{
			return;
		}
		iVar11++;
	}
}

void func_271(int iParam0, int iParam1)
{
	struct<42> Var0;
	
	if (iParam0 == 0xFFFFFFFF || iParam1 == 0xFFFFFFFF)
	{
		return;
	}
	Var0 = { Local_101[iParam1 /*42*/] };
	Local_101[iParam1 /*42*/] = { Local_101[iParam0 /*42*/] };
	Local_101[iParam0 /*42*/] = { Var0 };
}

int func_272(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0xFFFFFFFF;
	iVar0 = iParam1;
	while (iVar0 <= (unk_0x0DC0B2DBBD52B0C0() - 0x00000001))
	{
		if (iParam0 == Local_101[iVar0 /*42*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = unk_0x0DC0B2DBBD52B0C0();
		}
		iVar0++;
	}
	return iVar1;
}

void func_273()
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C6), 0x00000013);
}

void func_274(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_412(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 0xFFFFFFFF;
	iVar12 = 0xFFFFFFFF;
	iVar14 = 0x00000000;
	iVar15 = 0x00000000;
	uParam3->f_24 = 0x00000000;
	if (func_410() || iParam2 == 0x0000001C)
	{
		if (func_361(uParam1, iParam2, uParam3, Global_180529, 0x00000000, func_415(), sParam7))
		{
			func_360(0x00000001);
			if ((!func_358() && !func_356()) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001))
			{
				if (func_355())
				{
					func_350();
				}
				else
				{
					unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
					if (uParam3->f_1B == 0x00000000)
					{
						func_349(0x00000001);
						Global_180529 = 0x00000000;
						iVar19 = 0xFFFFFFFF;
						if (Global_180606 != 0x00000001)
						{
							func_348(uParam1, 0x00000000, 0x00000000);
							if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000007))
							{
								unk_0x0674E58A79778E99(&(uParam3->f_21), 0x00000007);
							}
						}
						if (iParam2 == 0x0000001C)
						{
							iVar17 = 0x00000000;
							while (iVar17 < 0x00000020)
							{
								iVar1[iVar17] = 0xFFFFFFFF;
								iVar17++;
							}
							iVar17 = 0x00000000;
							while (iVar17 < 0x00000020)
							{
								if (func_844(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
									if (!func_16(iVar3, 0x00000000))
									{
										if ((func_347(iVar3) || Global_25033E[iVar3 /*421*/].f_EC != 0xFFFFFFFF) || func_346(iVar3))
										{
											iVar9 = iVar3;
											if (func_345(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_342(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_339(unk_0xD803B885F5E47A62(), 0x00000000) && func_338(unk_0xD803B885F5E47A62()) != 0x000000BC)
						{
							bVar2 = iVar0 > 0x00000000;
						}
						iVar17 = 0x00000000;
						while (iVar17 < 0x00000020)
						{
							if (func_337())
							{
								if (func_844(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
								}
								else
								{
									iVar3 = func_5();
								}
							}
							else
							{
								iVar3 = (iParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_336(iVar3) && func_333(iVar3, iParam2)) && func_844(iVar3, 0x00000000, 0x00000001))
							{
								iVar9 = iVar3;
								iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
								Var6 = { func_328(iVar3) };
								if (iVar3 == unk_0xD803B885F5E47A62())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x6E524813889AECF8(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_66(iVar3) };
								iVar5 = func_322(iVar3);
								sVar4 = "";
								if (iVar5 != 0x00000000)
								{
									sVar4 = unk_0x5283D58F79627134(iVar5);
								}
								Global_180529++;
								if ((iParam0[iVar17 /*42*/])->f_16 != -1f)
								{
									fVar10 = (iParam0[iVar17 /*42*/])->f_16;
								}
								if ((iParam0[iVar17 /*42*/])->f_1F != 0xFFFFFFFF)
								{
									iVar11 = (iParam0[iVar17 /*42*/])->f_1F;
								}
								if ((iParam0[iVar17 /*42*/])->f_29 != 0xFFFFFFFF)
								{
									iVar12 = (iParam0[iVar17 /*42*/])->f_29;
								}
								iVar8 = (iParam0[iVar17 /*42*/])->f_9;
								if (((iParam0[iVar17 /*42*/])->f_9 != 0xFFFFFFFF || (iParam0[iVar17 /*42*/])->f_16 != -1f) || (iParam0[iVar17 /*42*/])->f_1F != 0xFFFFFFFF)
								{
									if (!func_337())
									{
										iVar15 = 0x00000001;
									}
								}
								if (iParam5 != 0xFFFFFFFF)
								{
									func_317(&iVar8, &fVar10, (iParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_316(iParam5, 0x00000001, 0x00000000, 0x00000000), 16);
								}
								if (bParam6)
								{
									iVar13 = (iParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = 0xFFFFFFFE;
									}
								}
								iVar16 = func_311(iVar3, 0x00000000);
								if (bVar2)
								{
									if (func_310(iVar3, 0x00000001) && iVar1[iVar9] != 0xFFFFFFFF)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
								if ((iParam0[iVar17 /*42*/])->f_27 != 0xFFFFFFFF)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (iParam0[iVar17 /*42*/])->f_27, 16);
								}
								if (func_309(iParam5))
								{
									func_308(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_308(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								unk_0x5D96D8530B3D0904(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0x00000000;
						while (iVar17 < 0x00000020)
						{
							iVar3 = unk_0x117658E336116132(iVar17);
							if (func_844(iVar3, 0x00000000, 0x00000001) && !unk_0xEAE0D21A50E6C7F4(iVar14, iVar3))
							{
								iVar3 = unk_0x117658E336116132(iVar17);
							}
							else
							{
								iVar3 = func_5();
							}
							if (func_336(iVar3))
							{
								if (func_844(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar9 = iVar3;
									iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
									Var6 = { func_328(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_66(iVar3) };
									iVar5 = func_322(iVar3);
									sVar4 = "";
									if (iVar5 != 0x00000000)
									{
										sVar4 = unk_0x5283D58F79627134(iVar5);
									}
									Global_180529++;
									iVar16 = func_311(iVar3, 0x00000001);
									if (bVar2)
									{
										if (func_310(iVar3, 0x00000001))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
									func_287(iVar3, unk_0x6E524813889AECF8(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000B))
						{
							func_284(uParam3, uParam1, iParam2);
						}
						func_106(&(uParam3->f_15));
						func_283();
						uParam3->f_1B = 0x00000002;
					}
					if (uParam3->f_1B == 0x00000002)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000007))
						{
							func_282(uParam3, uParam1);
							func_281(uParam1, 0x00000000, 0x00000001);
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 0x00000007);
						}
						func_282(uParam3, uParam1);
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000B))
						{
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 0x0000000B);
						}
						if (func_277(uParam3))
						{
							Global_180606 = 0x00000001;
						}
						func_275(uParam3);
						if (Global_180606 == 0x00000001)
						{
							uParam3->f_1B = 0x00000000;
						}
						if (Global_180606 == 0x00000002)
						{
							uParam3->f_1B = 0x00000000;
						}
					}
					if (unk_0x83D8570832F172A7(*uParam1))
					{
						unk_0xD9ACBBA59FD5A09E(0x00000007);
						unk_0xEF45C43067063F18(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
						unk_0xD9ACBBA59FD5A09E(0x00000004);
					}
				}
			}
		}
		else
		{
			uParam3->f_1B = 0x00000000;
			func_283();
			func_349(0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000007))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_21), 0x00000007);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000A))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_21), 0x0000000A);
			}
		}
	}
	unk_0xD59EF13BB60323B9();
}

void func_275(var uParam0)
{
	if (!func_22(&(uParam0->f_15)))
	{
		func_20(&(uParam0->f_15), 0x00000000, 0x00000000);
	}
	else if (func_19(&(uParam0->f_15), 0x000000FA, 0x00000000))
	{
		func_106(&(uParam0->f_15));
		func_276(0x00000000);
	}
}

void func_276(bool bParam0)
{
	if (bParam0)
	{
		if (Global_180606 != 0x00000002)
		{
			Global_180606 = 0x00000002;
		}
	}
	else
	{
		switch (Global_180606)
		{
			case 0x00000000:
				Global_180606 = 0x00000001;
				break;
			
			case 0x00000001:
				break;
			
			case 0x00000002:
				break;
			}
	}
}

int func_277(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0x00000000;
	iVar0 = uParam0->f_25;
	iVar3 = unk_0x117658E336116132(uParam0->f_25);
	if (iVar3 != func_5() && func_844(iVar3, 0x00000000, 0x00000001))
	{
		Var2 = { func_66(iVar3) };
		iVar1 = func_280(uParam0, uParam0->f_25);
		if (func_279(Var2))
		{
			switch (iVar1)
			{
				case 0x00000000:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 0x00000001;
							func_278(uParam0, iVar0, 0x00000002);
						}
					}
					else if (unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 0x00000001;
						func_278(uParam0, iVar0, 0x00000001);
					}
					break;
				
				case 0x00000002:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 0x00000001;
							func_278(uParam0, iVar0, 0x00000000);
						}
					}
					else
					{
						iVar4 = 0x00000001;
						func_278(uParam0, iVar0, 0x00000000);
					}
					break;
				
				case 0x00000001:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x74684D5E87B13DBD(&Var2))
						{
							iVar4 = 0x00000001;
							func_278(uParam0, iVar0, 0x00000000);
						}
					}
					else if (!unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 0x00000001;
						func_278(uParam0, iVar0, 0x00000000);
					}
					break;
				}
			}
	}
	uParam0->f_25++;
	if (uParam0->f_25 >= 0x00000020)
	{
		uParam0->f_25 = 0x00000000;
	}
	return iVar4;
}

void func_278(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_279(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 0x0000000D);
}

var func_280(var uParam0, int iParam1)
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_281(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x7E60C62A7CE58FC8(*uParam0, "COLLAPSE"))
	{
		unk_0x1200CC973A2399C8(iParam1);
		unk_0x7E60D21B163E9D56();
	}
	if (iParam2 == 0x00000001)
	{
		if (unk_0x7E60C62A7CE58FC8(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x7E60D21B163E9D56();
		}
	}
}

void func_282(var uParam0, var uParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x0000000A))
	{
		unk_0x7E60C62A7CE58FC8(*uParam1, "SET_HIGHLIGHT");
		unk_0x3CAEA85DA607305E(uParam0->f_23);
		unk_0x7E60D21B163E9D56();
		unk_0x5D96D8530B3D0904(&(uParam0->f_21), 0x0000000A);
	}
}

void func_283()
{
	if (Global_180606 != 0x00000000)
	{
		Global_180606 = 0x00000000;
	}
}

void func_284(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (iVar2 != func_5())
		{
			if (func_844(iVar2, 0x00000000, 0x00000001))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 0xFFFFFFFF)
				{
					iVar1 = func_286(uParam0->f_26[iVar0 /*2*/], 0x00000000, iParam2);
					func_285(uParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_184507[iVar0 /*876*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_285(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		if (unk_0x7E60C62A7CE58FC8(*uParam0, "SET_ICON"))
		{
			unk_0x3CAEA85DA607305E(iParam1);
			unk_0x3CAEA85DA607305E(iParam2);
			if (iParam2 == 0x00000041)
			{
				unk_0x3CAEA85DA607305E(iParam3);
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

int func_286(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000041;
	switch (iParam2)
	{
		case 0x00000015:
			iVar0 = 0x00000000;
			break;
	}
	if (bParam1)
	{
		iVar0 = 0x00000074;
	}
	switch (iParam0)
	{
		case 0x00000002:
			return 0x0000002F;
		
		case 0x00000001:
			return 0x00000031;
		
		default:
	}
	return iVar0;
}

void func_287(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_307() && iParam4 < func_306())
	{
		iParam4 = (iParam4 % 0x00000010);
		iVar0 = iParam4 + 1;
		if (Global_18052B)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_180606 == 0x00000001)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x7E60C62A7CE58FC8(*uParam2, sVar1))
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000008) || uParam3->f_6C == 0x00000006)
			{
				func_305("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(iParam10);
			}
			func_305(sParam1);
			unk_0x3CAEA85DA607305E(iParam11);
			if (uParam3->f_6C == 0x00000006)
			{
				func_305("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(0x00000041);
			}
			unk_0x3CAEA85DA607305E(0xFFFFFFFF);
			func_305("");
			if (uParam3->f_6C == 0x00000006)
			{
				func_305("");
			}
			else
			{
				func_305(&sParam5);
			}
			func_292(uParam3, iParam0);
			unk_0x024BC5F58A72410C(sParam9);
			unk_0x024BC5F58A72410C(sParam9);
			if (func_291(uParam3))
			{
				func_290("DPAD_FRIEND");
			}
			else if (func_289(uParam3))
			{
				func_290("DPAD_FRIEND");
			}
			else if (func_288(uParam3))
			{
				func_290("DPAD_CREW");
			}
			else
			{
				func_290("");
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

bool func_288(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x00000006);
}

bool func_289(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x00000005);
}

void func_290(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_291(var uParam0)
{
	if (func_289(uParam0) && func_288(uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_292(var uParam0, int iParam1)
{
	if (func_304(iParam1))
	{
		unk_0x3CAEA85DA607305E(0x00000079);
	}
	else if (func_297(iParam1))
	{
		unk_0x3CAEA85DA607305E(0x0000007A);
	}
	else if (((unk_0xEAE0D21A50E6C7F4(Global_440000.f_1B, 0x0000000F) && iParam1 > 0xFFFFFFFF) && iParam1 < 0x00000020) && unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam1 /*421*/].f_19D, 0x00000000))
	{
		unk_0x3CAEA85DA607305E(0x0000007B);
	}
	else
	{
		if (func_293())
		{
			uParam0->f_24 = 0x00000000;
		}
		unk_0x1200CC973A2399C8(uParam0->f_24);
	}
}

int func_293()
{
	if (unk_0xA14BB9332558B949())
	{
		if (func_295() || func_294())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

var func_294()
{
	return Global_2564C8.f_F;
}

int func_295()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_294();
	}
	return func_296(Global_440000.f_2F9AE);
}

int func_296(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (Global_40001.f_137E[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_297(int iParam0)
{
	if ((func_844(iParam0, 0x00000000, 0x00000001) && func_301()) && func_298(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_298(int iParam0, bool bParam1)
{
	return func_299(iParam0, bParam1, 0x00000001);
}

int func_299(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (func_300(iParam0, iParam2))
		{
			return 0x00000000;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_5() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_300(int iParam0, int iParam1)
{
	if (iParam0 != func_5())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_5())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_301()
{
	if (func_243(unk_0xD803B885F5E47A62()) || func_303())
	{
		if (!func_302(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_302(int iParam0)
{
	if (func_190(iParam0) == 0x000000EC || func_190(iParam0) == 0x00000096)
	{
		return func_209(iParam0);
	}
	return 0x00000000;
}

int func_303()
{
	switch (func_338(unk_0xD803B885F5E47A62()))
	{
		case 0x000000C1:
		case 0x000000C2:
		case 0x000000C7:
		case 0x000000CD:
		case 0x000000D2:
		case 0x000000BC:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_304(int iParam0)
{
	if (func_293())
	{
		if (func_844(iParam0, 0x00000000, 0x00000001))
		{
			return func_345(iParam0);
		}
	}
	if ((func_844(iParam0, 0x00000000, 0x00000001) && func_301()) && func_300(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_305(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_306()
{
	int iVar0;
	
	if (Global_18052B)
	{
		iVar0 = 0x00000020;
	}
	else
	{
		iVar0 = 0x00000010;
	}
	return iVar0;
}

int func_307()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (Global_18052B)
	{
		iVar0 = 0x00000010;
	}
	return iVar0;
}

void func_308(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_307() && iParam3 < func_306())
	{
		iParam3 = (iParam3 % 0x00000010);
		iVar0 = iParam3 + 1;
		if (Global_18052B)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == 0xFFFFFFFE)
			{
				iParam10 = 0xFFFFFFFF;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_180606 == 0x00000001)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x83D8570832F172A7(*uParam1))
		{
			if (unk_0x7E60C62A7CE58FC8(*uParam1, sVar1))
			{
				unk_0x3CAEA85DA607305E(iParam3);
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0x00000008) || uParam2->f_6C == 0x00000006)
				{
					func_305("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(iParam9);
				}
				if (uParam2->f_6C == 0x00000006 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					func_290(sParam16);
				}
				else
				{
					func_305(&(uParam2->f_1));
				}
				unk_0x3CAEA85DA607305E(iParam11);
				if (uParam2->f_6C == 0x00000006)
				{
					func_305("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(0x00000041);
				}
				if (iParam12 == 0x00000001)
				{
					unk_0x3CAEA85DA607305E(iVar0);
				}
				else
				{
					unk_0x3CAEA85DA607305E(0xFFFFFFFF);
				}
				if (func_337())
				{
					func_305("");
				}
				else if (uParam2->f_6C == 0x00000006 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000005 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000007 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_TWO_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000008 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_68)))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x21994591120B91F0(fParam13, 0x00000001);
					}
					if (iParam10 != 0xFFFFFFFF)
					{
						unk_0x6D99DF8263D35CE5(iParam10);
					}
					unk_0x6B012227B3921E18(&(uParam2->f_68));
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000009)
				{
					unk_0x7ACC3006A87F8B39("FM_AE_CASH");
					unk_0xCBD015EC7E4226BC(iParam10, 0x00000001);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x0000000A)
				{
					if (iParam10 == 0x00000000)
					{
						unk_0x7ACC3006A87F8B39("FM_AE_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 0x00000001);
						unk_0x779B34565F4D71B1();
					}
					else
					{
						unk_0x7ACC3006A87F8B39("FM_NG_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 0x00000001);
						unk_0x779B34565F4D71B1();
					}
				}
				else if (iParam15 > 0xFFFFFFFF)
				{
					if (iParam15 == 0x00000000 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_68)))
					{
						func_290(&(uParam2->f_68));
					}
					else
					{
						func_305("");
					}
				}
				else if (iParam14 != 0xFFFFFFFF)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam14, 0x00000006);
					unk_0x779B34565F4D71B1();
				}
				else if (fParam13 != -1f)
				{
					unk_0x7ACC3006A87F8B39("NUMBER");
					unk_0x21994591120B91F0(fParam13, 0x00000001);
					unk_0x779B34565F4D71B1();
				}
				else if (iParam10 != 0xFFFFFFFF)
				{
					unk_0x3CAEA85DA607305E(iParam10);
				}
				else
				{
					func_305("");
				}
				if (uParam2->f_6C == 0x00000006)
				{
					func_305("");
				}
				else
				{
					func_305(&sParam4);
				}
				func_292(uParam2, iParam0);
				if (iParam12 == 0x00000001 || unk_0xEA6BC48857E0AC4C(sParam8))
				{
					func_305("");
					func_305("");
				}
				else
				{
					unk_0x024BC5F58A72410C(sParam8);
					unk_0x024BC5F58A72410C(sParam8);
				}
				if (func_291(uParam2))
				{
					func_290("DPAD_FRIEND");
				}
				else if (func_289(uParam2))
				{
					func_290("DPAD_FRIEND");
				}
				else if (func_288(uParam2))
				{
					func_290("DPAD_CREW");
				}
				else
				{
					func_290("");
				}
				unk_0x7E60D21B163E9D56();
			}
		}
	}
}

int func_309(int iParam0)
{
	return 0x00000000;
	switch (iParam0)
	{
		case 0x0000000B:
		case 0x0000000C:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

bool func_310(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_345(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_5();
}

int func_311(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000074;
	if ((!bParam1 && func_243(iParam0)) && !func_244(iParam0))
	{
		iVar0 = func_315();
	}
	iVar1 = func_314(iParam0);
	if (!iVar1 == 0xFFFFFFFF)
	{
		return func_312(iVar1);
	}
	return iVar0;
}

int func_312(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		iVar0 = func_313(iParam0);
		switch (iVar0)
		{
			case 0x00000000:
				return 0x000000C0;
			
			case 0x00000001:
				return 0x000000C1;
			
			case 0x00000002:
				return 0x000000C2;
			
			case 0x00000003:
				return 0x000000C3;
			
			case 0x00000004:
				return 0x000000C4;
			
			case 0x00000005:
				return 0x000000C5;
			
			case 0x00000006:
				return 0x000000C6;
			
			case 0x00000007:
				return 0x000000C7;
			
			case 0x00000008:
				return 0x000000C8;
			
			case 0x00000009:
				return 0x000000C9;
			
			case 0x0000000A:
				return 0x000000CA;
			
			case 0x0000000B:
				return 0x000000CB;
			
			case 0x0000000C:
				return 0x000000CC;
			
			case 0x0000000D:
				return 0x000000CD;
			
			case 0x0000000E:
				return 0x000000CE;
			}
		
		default:
	}
	return 0x00000001;
}

var func_313(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_314(int iParam0)
{
	if (!iParam0 == func_5())
	{
		if (func_310(iParam0, 0x00000001))
		{
			return Global_24E4E9.f_332.f_B[func_65(iParam0)];
		}
	}
	return 0xFFFFFFFF;
}

int func_315()
{
	return 0x00000015;
}

char* func_316(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000001:
		case 0x00000006:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000D:
		case 0x0000000B:
		case 0x0000000C:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 0x00000002:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 0x00000007:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 0x00000001)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_317(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_321(iParam3))
	{
		*fParam1 = (func_318(iParam3, iParam2) / 10f);
		return 0x00000001;
	}
	if (func_309(iParam3))
	{
		*fParam1 = (func_318(iParam3, iParam2) / 1000f);
		return 0x00000001;
	}
	*uParam0 = iParam2;
	return 0x00000000;
}

float func_318(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000001:
		case 0x00000006:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000D:
		case 0x0000000B:
		case 0x0000000C:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_320(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 0x00000002:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_319(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_319(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_320(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000002:
		case 0x00000003:
		case 0x00000005:
		case 0x00000004:
		case 0x00000001:
		case 0x00000006:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000D:
		case 0x0000000B:
		case 0x0000000C:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_322(int iParam0)
{
	int iVar0;
	
	iVar0 = func_325(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		func_323(iParam0, 0x00000001);
		return 0x00000000;
	}
	Global_153216[iVar0 /*5*/].f_4 = 0x00000001;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_323(int iParam0, bool bParam1)
{
	if (!func_844(iParam0, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_325(iParam0) != 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1532B9)
	{
		if (iParam0 == Global_1532B9.f_1)
		{
			return;
		}
	}
	if (func_324(iParam0))
	{
		return;
	}
	if (Global_1532DF >= 0x00000020)
	{
		return;
	}
	Global_1532BE[Global_1532DF] = iParam0;
	Global_1532DF++;
	if (bParam1)
	{
	}
}

int func_324(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532DF)
	{
		if (Global_1532BE[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_325(int iParam0)
{
	int iVar0;
	
	if (!func_844(iParam0, 0x00000000, 0x00000001))
	{
		return 0xFFFFFFFF;
	}
	if (Global_1532B7 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532B7)
	{
		if (Global_153216[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_153216[iVar0 /*5*/].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_153216[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_326(iVar0);
			return 0xFFFFFFFF;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_326(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1532B7)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_153216[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_153216[iParam0 /*5*/].f_2 != 0x00000000)
		{
			StringCopy(&cVar1, unk_0x5283D58F79627134(Global_153216[iParam0 /*5*/].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_153216[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1532B7)
	{
		Global_153216[iVar2 /*5*/] = { Global_153216[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_327(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 0x00000001);
}

void func_327(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = func_5();
	uParam0->f_2 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

struct<4> func_328(int iParam0)
{
	struct<4> Var0;
	
	if (func_844(iParam0, 0x00000000, 0x00000001))
	{
		Global_265942 = { func_66(iParam0) };
		if (unk_0xDC30EF462887322E())
		{
			if (func_279(Global_265942))
			{
				if (!unk_0x5B9BB2932920F9CD(&Global_265942))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x4DEB7B48DD0AABA4(0x00000000))
		{
			return Var0;
		}
		if (func_332(&Global_265942))
		{
			Global_2658FC = { func_330(iParam0) };
			func_329(&Global_2658FC, &Var0);
		}
	}
	return Var0;
}

void func_329(var uParam0, var uParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 0x00000023, uParam1);
}

struct<35> func_330(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_331(iParam0))
	{
		return Global_14088D[unk_0xD803B885F5E47A62() /*35*/];
	}
	Var0 = { func_66(iParam0) };
	unk_0xD9DA83C40D038174(&Var1, 0x00000023, &Var0);
	return Var1;
}

int func_331(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_332(var uParam0)
{
	if (unk_0x1963B11DE70153E0())
	{
		if (unk_0x080E9D045AEE5605() && unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_333(int iParam0, int iParam1)
{
	if (iParam1 == 0x0000001B)
	{
		if ((func_202(iParam0) || func_335(iParam0)) || func_201(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_334(iParam0))
	{
		return 0x00000000;
	}
	if ((!func_347(iParam0) && Global_25033E[iParam0 /*421*/].f_EC == 0xFFFFFFFF) && !func_346(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_334(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_8E, 0x00000016);
}

int func_335(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return (unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x0000000A) || unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000009));
	}
	return 0x00000000;
}

int func_336(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0x00000000;
	}
	if (func_16(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_184507[iVar0 /*876*/].f_8E, 0x00000002))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_337()
{
	switch (func_338(unk_0xD803B885F5E47A62()))
	{
		case 0x000000B3:
		case 0x000000B4:
		case 0x000000B6:
		case 0x000000B7:
		case 0x000000B8:
		case 0x000000B9:
		case 0x000000BA:
		case 0x000000BD:
		case 0x000000BE:
		case 0x000000BF:
		case 0x000000C0:
		case 0x000000C3:
		case 0x000000C5:
		case 0x000000C6:
		case 0x000000C8:
		case 0x000000C9:
		case 0x000000CA:
		case 0x000000CB:
		case 0x000000CC:
		case 0x000000CE:
		case 0x000000CF:
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D3:
			return 0x00000001;
		
		default:
	}
	switch (func_190(unk_0xD803B885F5E47A62()))
	{
		case 0x00000083:
		case 0x0000008C:
		case 0x0000008A:
		case 0x00000092:
			return 0x00000001;
			break;
	}
	if (func_244(unk_0xD803B885F5E47A62()))
	{
		switch (func_338(unk_0xD803B885F5E47A62()))
		{
			case 0x00000094:
			case 0x00000097:
			case 0x00000098:
			case 0x00000099:
			case 0x0000009D:
			case 0x0000009F:
			case 0x000000A2:
			case 0x000000A4:
			case 0x0000008E:
				return 0x00000001;
				break;
			}
	}
	if (func_302(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_338(int iParam0)
{
	if (func_238(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_339(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF && func_340(Global_18D84D[iParam0 /*615*/].f_B.f_21))
	{
		return 0x00000001;
	}
	if (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF)
	{
		if (func_340(Global_18D84D[iParam0 /*615*/].f_B.f_20))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_340(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000009B:
		case 0x000000A0:
		case 0x00000099:
		case 0x000000A2:
		case 0x0000009A:
		case 0x000000A3:
		case 0x000000AB:
		case 0x000000AC:
		case 0x000000F0:
		case 0x000000EF:
			return 0x00000001;
		
		default:
	}
	return func_341(iParam0, 0x00000000);
	return 0x00000000;
}

int func_341(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x000000C7:
		case 0x000000CD:
		case 0x000000D2:
		case 0x000000D3:
			return 0x00000001;
		
		default:
	}
	if (iParam1 == 0x00000000)
	{
		switch (iParam0)
		{
			case 0x000000C2:
			case 0x000000C1:
			case 0x000000BD:
			case 0x00000099:
				return 0x00000001;
			}
		
		default:
	}
	return 0x00000000;
}

void func_342(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (func_844(unk_0x117658E336116132(iVar0), 0x00000000, 0x00000001))
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (!func_16(iVar1, 0x00000000))
			{
				if ((func_347(iVar1) || Global_25033E[iVar1 /*421*/].f_EC != 0xFFFFFFFF) || func_346(iVar1))
				{
					if (func_343(iVar1, iParam1, 0x00000000))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_343(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_5())
	{
		if (!bParam2)
		{
			if (func_344(iParam0, iParam1))
			{
				return 0x00000000;
			}
		}
		if (Global_18D84D[iParam0 /*615*/].f_B != func_5())
		{
			return iParam1 == Global_18D84D[iParam0 /*615*/].f_B;
		}
	}
	return 0x00000000;
}

int func_344(int iParam0, int iParam1)
{
	if (iParam1 != func_5())
	{
		if (iParam0 != func_5())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B != func_5())
			{
				if (Global_18D84D[iParam0 /*615*/].f_B == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0x00000000;
}

int func_345(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_5())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

bool func_346(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4 != 0x00000000;
}

int func_347(int iParam0)
{
	if (func_844(iParam0, 0x00000000, 0x00000001))
	{
		if (func_844(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000001))
		{
			if (unk_0xF816C4B5324CB295(iParam0, unk_0xD803B885F5E47A62()) || func_338(iParam0) == 0x000000E9)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_348(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x7E60D21B163E9D56();
	}
}

void func_349(bool bParam0)
{
	if (bParam0)
	{
		if (Global_15038F.f_2 == 0x00000000)
		{
			Global_15038F.f_2 = 0x00000001;
		}
	}
	else if (Global_15038F.f_2 == 0x00000001)
	{
		Global_15038F.f_2 = 0x00000000;
	}
}

void func_350()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001))
	{
		if (func_354())
		{
			func_351();
		}
	}
}

void func_351()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000003)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 != 0x00000000)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			func_352(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
		}
		iVar0++;
	}
}

void func_352(var uParam0, int iParam1)
{
	func_353(uParam0, iParam1);
}

void func_353(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_354()
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 != 0x00000000;
}

int func_355()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000000) && func_354())
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001) && func_354())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_356()
{
	if (func_354())
	{
		if (func_357(Global_2537E2.f_AA3[0x00000000 /*80*/].f_1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_357(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000058:
		case 0x00000057:
		case 0x0000005B:
		case 0x0000005C:
		case 0x00000056:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000059:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x0000005A:
		case 0x0000006E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_358()
{
	if (func_354())
	{
		if (func_359(Global_2537E2.f_AA3[0x00000000 /*80*/].f_1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_359(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
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
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_360(int iParam0)
{
	if (Global_15038F.f_1 != Global_15038F)
	{
		Global_15038F.f_1 = Global_15038F;
	}
	if (Global_15038F != iParam0)
	{
		Global_15038F = iParam0;
	}
}

int func_361(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 0x00000014;
	bVar3 = func_409(iParam1);
	fVar4 = func_408();
	iVar5 = 0xFFFFFFFF;
	if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
	{
		if (func_407())
		{
			if (func_406() > 0x00000000 && Global_18052B)
			{
				unk_0xB8E3919889462ACD();
				unk_0xD668DA5CA4A1D2C8(fVar4);
				unk_0x3584F71E5CA29322(0x00000012);
				if (unk_0xFEBC1E4EC9E001F0())
				{
					unk_0xE19C2AAC820D8ED5();
				}
				unk_0x3584F71E5CA29322(0x0000000A);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_393())
		{
			func_392(uParam0, uParam2, 0x00000001);
			return 0x00000000;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001A))
	{
		func_392(uParam0, uParam2, 0x00000001);
		return 0x00000000;
	}
	if (!func_22(&(uParam2->f_13)))
	{
		if (func_406() == 0x00000001)
		{
			func_391(bVar3, uParam0, 0x00000000);
			func_20(&(uParam2->f_13), 0x00000000, 0x00000000);
			func_392(uParam0, uParam2, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11F0), 0x00000005);
		}
	}
	if (func_22(&(uParam2->f_13)) || bParam5)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xE19C2AAC820D8ED5();
		}
		unk_0x3584F71E5CA29322(0x0000000A);
		if (func_19(&(uParam2->f_13), 0x00002710, 0x00000000) || (func_406() == 0x00000000 && !bParam5))
		{
			func_392(uParam0, uParam2, 0x00000001);
			return 0x00000000;
		}
		else
		{
			if (bVar2 == 0x00000000)
			{
				func_390();
				if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
				{
					unk_0xB8E3919889462ACD();
				}
				unk_0x3584F71E5CA29322(0x00000012);
			}
			if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0x00000000))
			{
				if (bVar2 == 0x00000000)
				{
					func_390();
					if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
					{
						unk_0xB8E3919889462ACD();
					}
					unk_0x3584F71E5CA29322(0x00000012);
				}
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (func_391(bVar3, uParam0, 0x00000000))
				{
					func_348(uParam0, 0x00000000, 0x00000000);
					uVar1 = func_388(iParam1, &(Global_440000.f_2F9B5), bParam4);
					Var0 = { func_386(iParam1) };
					if (bParam4)
					{
						func_383(uParam0, uVar1, "", 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
					}
					else if (iParam1 == 0x0000001B)
					{
						func_378(uParam0, func_380(uParam2), func_379(uParam2), 0xFFFFFFFF);
					}
					else if (iParam1 == 0x0000001C)
					{
						sVar6 = func_371(uParam2);
						if (!unk_0xEA6BC48857E0AC4C(sParam6))
						{
							sVar6 = sParam6;
						}
						func_369(uParam0, sVar6, func_370(), 0xFFFFFFFF);
					}
					else if (func_293())
					{
						uParam2->f_22 = Global_18052A;
						func_383(uParam0, uVar1, &Var0, 0x00000001, 0xFFFFFFFF, Global_18052A, 0x00000001);
					}
					else if (bVar2)
					{
						iVar5 = func_362(iParam1);
						uParam2->f_22 = Global_18052A;
						func_383(uParam0, uVar1, "", 0x00000000, iVar5, Global_18052A, 0x00000001);
					}
					else
					{
						iVar5 = func_362(iParam1);
						func_383(uParam0, uVar1, &Var0, 0x00000001, iVar5, 0xFFFFFFFF, 0x00000001);
					}
					unk_0x5D96D8530B3D0904(&(uParam2->f_21), 0x00000000);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0x00000000))
			{
				Global_180529 = uParam3;
				Global_180528 = 0x00000001;
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (bVar2)
				{
					if (uParam2->f_22 != Global_18052A)
					{
						unk_0x0674E58A79778E99(&(uParam2->f_21), 0x00000000);
					}
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_362(int iParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	if (func_368())
	{
		iVar0 = 0x00000002;
	}
	switch (iParam0)
	{
		case 0x00000028:
			iVar0 = 0x00000016;
			break;
		
		case 0x00000000:
		case 0x0000001F:
		case 0x0000001E:
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
		case 0x00000026:
		case 0x00000027:
			iVar0 = 0x00000003;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000003;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000006;
			break;
		
		case 0x00000003:
			iVar0 = 0x00000005;
			break;
		
		case 0x0000001A:
			iVar0 = 0x00000015;
			break;
		
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
			iVar0 = 0x00000004;
			break;
		
		case 0x00000007:
			iVar0 = 0x0000000A;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x00000011:
			iVar0 = 0x00000002;
			break;
		
		case 0x0000000F:
			iVar0 = 0x00000011;
			break;
		
		case 0x00000010:
			iVar0 = 0x00000012;
			break;
		
		case 0x00000012:
			if (func_367(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 0x00000014;
			}
			if (func_366(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 0x00000013;
			}
			break;
	}
	if (func_365(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 0x00000002;
	}
	if (func_363())
	{
		iVar0 = 0x00000014;
	}
	return iVar0;
}

bool func_363()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_61();
	}
	return func_364(Global_440000.f_2F9AE);
}

int func_364(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_40001.f_1390[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_365(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000004;
}

bool func_366(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

bool func_367(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_368()
{
	return Global_440000.f_1 == 0x00000000;
}

void func_369(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_290(sParam1);
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_290("");
		if (iParam3 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_370()
{
	switch (func_338(unk_0xD803B885F5E47A62()))
	{
		case 0x000000A3:
			return "BD_SORT_1";
			break;
		
		case 0x000000A0:
			return "BD_SORT_4";
			break;
		
		case 0x0000009A:
			return "BD_SORT_3";
			break;
		
		case 0x0000009B:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_371(var uParam0)
{
	switch (uParam0->f_70)
	{
		case 0x00000000:
			return "GR_DPD_E";
			break;
		
		case 0x00000001:
			return "GR_DPD_F";
			break;
		
		case 0x00000002:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_6E)
	{
		case 0x00000000:
			return "GR_DPD_A";
			break;
		
		case 0x00000001:
			return "GR_DPD_B";
			break;
		
		case 0x00000002:
			return "GR_DPD_C";
			break;
		
		case 0x00000003:
			return "GR_DPD_D";
			break;
	}
	switch (func_338(unk_0xD803B885F5E47A62()))
	{
		case 0x000000E9:
			return "H2_DPAD_SET";
			break;
		
		case 0x000000B4:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 0x000000B6:
			return "DEAL_DEALN";
			break;
		
		case 0x000000C2:
			return "PI_BIK_13_0";
			break;
		
		case 0x000000BD:
			return "PI_BIK_4_1";
			break;
		
		case 0x000000C1:
			return "PI_BIK_13_1";
			break;
		
		case 0x000000CD:
			return "PI_BIK_13_3";
			break;
		
		case 0x000000BA:
			return "CELL_BIKER_CK";
			break;
		
		case 0x000000CF:
			return "DV_SH_TITLE";
			break;
		
		case 0x000000D0:
			return "BA_SH_TITLE";
			break;
		
		case 0x000000D1:
			return "SHU_SH_TITLE";
			break;
		
		case 0x000000D2:
			return "PI_BIK_13_4";
			break;
		
		case 0x000000B7:
			return "CELL_BIKER_RESC";
			break;
		
		case 0x000000C7:
			return "CELL_BIKER_SEAR";
			break;
		
		case 0x000000C9:
			return "CELL_BIKER_STAN";
			break;
		
		case 0x0000008E:
			return "PIM_MAGM210";
			break;
		
		case 0x000000A3:
			return "PIM_MAGM608";
			break;
		
		case 0x000000A0:
			return "PIM_MAGM604";
			break;
		
		case 0x0000009A:
			return "PIM_MAGM602";
			break;
		
		case 0x0000009B:
			return "PIM_MAGM603";
			break;
		
		case 0x00000094:
			if (func_374())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 0x00000097:
			if (func_373(0x00000001))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 0x00000098:
			return "PIM_MAGM204";
			break;
		
		case 0x00000099:
			if (func_373(0x00000001))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 0x0000009D:
			return "PIM_MAGM207";
			break;
		
		case 0x0000009F:
			return "PIM_MAGM206";
			break;
		
		case 0x000000A2:
			return "PIM_MAGM607";
			break;
		
		case 0x000000A4:
			return "PIM_MAGM212";
			break;
		
		case 0x000000A6:
			return "GB_DPAD_HEAD";
		
		case 0x000000A7:
			return "GB_DPAD_BUY";
		
		case 0x000000A8:
			return "GB_DPAD_SELL";
		
		case 0x000000A9:
			return "GB_DPAD_DEF";
		
		case 0x000000AA:
			return "GB_DPAD_AIR";
		
		case 0x000000AB:
			return "GB_DPAD_CASH";
		
		case 0x000000AC:
			return "GB_DPAD_SAL";
		
		case 0x000000AD:
			return "GB_DPAD_FRA";
		
		case 0x000000B2:
			return "VEX_TITLEa";
		
		case 0x000000BC:
			return "VEX_TITLEb";
		
		case 0x000000DA:
			return "FRT_MODE";
		
		case 0x000000D9:
			return "FRT_TRNS";
		
		case 0x000000D6:
			return "MODE_PLW";
		
		case 0x000000D7:
			return "MODE_FUL";
		
		case 0x000000D8:
			return "MODE_AA";
		
		case 0x000000DB:
			return "MODE_VEL";
		
		case 0x000000DC:
			return "MODE_RMP";
		
		case 0x000000DD:
			return "MODE_STK";
		
		case 0x000000E1:
			return "GR_TITLEL";
		
		case 0x000000E2:
			return "GRS_TITLEL";
		
		case 0x000000E3:
			return "GRD_TITLEL";
		
		case 0x000000C3:
			return "GB_STEAL_T";
		
		case 0x000000C6:
			return "SC_MENU_TITLE";
		
		case 0x000000BE:
			return "GB_DPAD_BSEL";
		
		case 0x000000BF:
			return "GB_DPAD_BDEF";
		
		case 0x000000B9:
			return "GB_DPAD_GFH";
		
		case 0x000000C5:
			return "GB_DPAD_JB";
		
		case 0x000000B3:
			return "CELL_JOUST";
		
		case 0x000000C8:
			return "CAG_BLIP";
		
		case 0x000000C0:
			if (func_372(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B5))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

bool func_373(bool bParam0)
{
	return func_298(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_374()
{
	return (func_377() && func_375(func_376()));
}

int func_375(int iParam0)
{
	return func_300(iParam0, 0x00000001);
}

int func_376()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23;
}

bool func_377()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000094;
}

void func_378(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_290(sParam1);
		}
		else if (func_190(unk_0xD803B885F5E47A62()) == 0x00000085)
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT_C");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_290("");
		if (iParam3 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_379(var uParam0)
{
	int iVar0;
	
	iVar0 = func_190(unk_0xD803B885F5E47A62());
	if (func_413())
	{
		if (uParam0->f_67 != 0xFFFFFFFF)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 0x00000083:
			return "";
		
		case 0x00000084:
			return "FM_AE_SORT_5";
		
		case 0x00000085:
			switch (func_189())
			{
				case 0x00000000:
					return "FM_AE_SORT_2";
				
				case 0x00000001:
					return "FM_AE_SORT_2";
				
				case 0x00000002:
					return "FM_AE_SORT_3";
				
				case 0x00000003:
					return "FM_AE_SORT_2";
				
				case 0x00000004:
					return "FM_AE_SORT_2";
				
				case 0x00000005:
					return "FM_AE_SORT_2";
				
				case 0x00000006:
					return "FM_AE_SORT_2";
				
				case 0x00000007:
					return "FM_AE_SORT_13";
				
				case 0x00000008:
					return "FM_AE_SORT_4";
				
				case 0x00000009:
					return "FM_AE_SORT_2";
				
				case 0x0000000A:
					return "FM_AE_SORT_2";
				
				case 0x0000000B:
					return "FM_AE_SORT_2";
				
				case 0x0000000C:
					return "FM_AE_SORT_2";
				
				case 0x0000000D:
					return "FM_AE_SORT_2";
				
				case 0x0000000E:
					return "FM_AE_SORT_5";
				
				case 0x0000000F:
					return "FM_AE_SORT_9";
				
				case 0x00000010:
					return "FM_AE_SORT_9";
				
				case 0x00000011:
					return "FM_AE_SORT_9";
				
				case 0x00000012:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 0x00000088:
			return "";
		
		case 0x0000008A:
			return "";
		
		case 0x0000008B:
			return "FM_AE_SORT_10";
		
		case 0x0000008C:
			return "";
		
		case 0x0000008D:
			return "FM_AE_SORT_5";
		
		case 0x00000090:
			return "FM_AE_SORT_1";
		
		case 0x00000081:
			return "FM_AE_SORT_9";
	}
	return "";
}

char* func_380(var uParam0)
{
	int iVar0;
	
	iVar0 = func_190(unk_0xD803B885F5E47A62());
	if (func_413())
	{
		if (uParam0->f_67 != 0xFFFFFFFF)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 0x00000083:
			return "PIM_TA9";
		
		case 0x00000084:
			if (func_382() == 0x00000000)
			{
				return "CPC_TILEL";
			}
			else if (func_382() == 0x00000001)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 0x00000085:
			switch (func_189())
			{
				case 0x00000000:
					return "AMCH_0SLC";
				
				case 0x00000001:
					return "AMCH_1SLC";
				
				case 0x00000002:
					return "AMCH_2SLC";
				
				case 0x00000003:
					return "AMCH_3SLC";
				
				case 0x00000004:
					return "AMCH_4SLC";
				
				case 0x00000005:
					return "AMCH_5SLC";
				
				case 0x00000006:
					return "AMCH_6SLC";
				
				case 0x00000007:
					return "AMCH_7SLC";
				
				case 0x00000008:
					return "AMCH_8SLC";
				
				case 0x00000009:
					return "AMCH_12SLC";
				
				case 0x0000000A:
					return "AMCH_13SLC";
				
				case 0x0000000B:
					return "AMCH_15SLC";
				
				case 0x0000000C:
					return "AMCH_16SLC";
				
				case 0x0000000D:
					return "AMCH_23SLC";
				
				case 0x0000000E:
					return "AMCH_9SLC";
				
				case 0x0000000F:
					return "AMCH_19SLC";
				
				case 0x00000010:
					return "AMCH_20SLC";
				
				case 0x00000011:
					return "AMCH_21SLC";
				
				case 0x00000012:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 0x00000088:
			return "PIM_TA10";
		
		case 0x0000008A:
			return "PIM_TA4";
		
		case 0x0000008B:
			return "PIM_TA5";
		
		case 0x0000008C:
			return "PIM_TA3";
		
		case 0x0000008D:
			return "PIM_TA8";
		
		case 0x00000090:
			return "PIM_TA2";
		
		case 0x00000081:
			if (func_381() == 0x00000001)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 0x00000092:
			return "PIM_TA6";
	}
	return "";
}

int func_381()
{
	return Global_26B66F.f_13B8;
}

int func_382()
{
	if (func_190(unk_0xD803B885F5E47A62()) == 0x00000084)
	{
		return Global_26B66F.f_13B3;
	}
	return 0xFFFFFFFF;
}

void func_383(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_305(uParam1);
		}
		else if (iParam5 != 0xFFFFFFFF)
		{
			unk_0x7ACC3006A87F8B39(uParam1);
			unk_0x6D99DF8263D35CE5(iParam5);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_290(sParam1);
		}
		if (func_407() && iParam6)
		{
			if (func_385())
			{
				iVar0 = 0x00000002;
				iVar1 = 0x00000002;
			}
			else
			{
				iVar0 = 0x00000001;
				iVar1 = 0x00000002;
			}
			unk_0x7ACC3006A87F8B39("LBD_DPD_CNT");
			unk_0x6D99DF8263D35CE5(iVar0);
			unk_0x6D99DF8263D35CE5(iVar1);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_290(sParam2);
		}
		if (iParam4 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (func_384(unk_0xD803B885F5E47A62()))
			{
				unk_0x3CAEA85DA607305E(0x000000A6);
			}
			else if (func_61())
			{
				unk_0x3CAEA85DA607305E(0x000000DC);
			}
		}
		unk_0x7E60D21B163E9D56();
	}
}

int func_384(int iParam0)
{
	if (func_367(iParam0) || func_366(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_385()
{
	return Global_18052B;
}

struct<4> func_386(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_387(unk_0xD803B885F5E47A62()) || func_365(unk_0xD803B885F5E47A62()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x00000011:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000012:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_440000.f_CC, 16);
			break;
	}
	if (func_293() && unk_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_CC, 16);
	}
	return Var0;
}

bool func_387(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000005;
}

char* func_388(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 0x00000014 && (!func_293() || unk_0xEA6BC48857E0AC4C(sParam1)))
	{
		uVar0 = func_389();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 0x00000019)
	{
		if (Global_180619 == 0x00000000)
		{
			Global_180619 = 0x00000001;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		if (Global_180619 == 0x00000001)
		{
			Global_180619 = 0x00000000;
		}
		return sParam1;
	}
	else
	{
		if (Global_180619 == 0x00000000)
		{
			Global_180619 = 0x00000001;
		}
		switch (iParam0)
		{
			case 0x00000000:
			case 0x0000001F:
				return "HUD_LBD_DM";
				break;
			
			case 0x00000001:
				return "HUD_LBD_TDM";
				break;
			
			case 0x00000005:
				return "HUD_LBD_GRCE";
				break;
			
			case 0x00000004:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
			case 0x0000001A:
			case 0x0000000B:
				return "HUD_LBD_RCE";
				break;
			
			case 0x00000007:
				return "HUD_LBD_BRCE";
				break;
			
			case 0x00000012:
			case 0x0000000E:
			case 0x00000011:
			case 0x0000000F:
			case 0x0000000D:
			case 0x0000000C:
			case 0x00000010:
			case 0x00000013:
				return "HUD_TITLEMC";
				break;
			
			case 0x00000003:
				return "HUD_LBD_HRD";
				break;
			
			case 0x00000016:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_389()
{
	if (unk_0xB9110623D4211889())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x4CE7C0420678C221())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xB56AF77A4FB2CF82())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xBADE9A39B01F3DEC())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_390()
{
	Global_A56F = 0x00000001;
}

bool func_391(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xB01F55A0FD1CFD49("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xB01F55A0FD1CFD49("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xB01F55A0FD1CFD49("mp_matchmaking_card");
	}
	return unk_0x83D8570832F172A7(*uParam1);
}

void func_392(var uParam0, var uParam1, bool bParam2)
{
	unk_0x0674E58A79778E99(&(uParam1->f_21), 0x00000007);
	Global_180529 = 0x00000000;
	func_283();
	Global_180528 = 0x00000000;
	uParam1->f_1B = 0x00000000;
	if (bParam2)
	{
		if (func_22(&(uParam1->f_13)))
		{
			func_106(&(uParam1->f_13));
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11F0), 0x00000005);
		}
	}
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		unk_0xE17FDF9E3068281B(uParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam1->f_21, 0x00000000))
	{
		unk_0x0674E58A79778E99(&(uParam1->f_21), 0x00000000);
	}
	unk_0xD668DA5CA4A1D2C8(0f);
}

int func_393()
{
	if (func_405())
	{
		return 0x00000000;
	}
	if (func_245())
	{
		return 0x00000000;
	}
	if (!func_403())
	{
		return 0x00000000;
	}
	if (!func_219())
	{
		return 0x00000000;
	}
	if (func_402(0x00000008, 0xFFFFFFFF))
	{
		return 0x00000000;
	}
	if (func_406() == 0x00000002)
	{
		return 0x00000000;
	}
	if (Global_26B66F.f_11BF)
	{
		return 0x00000000;
	}
	if (func_182())
	{
		return 0x00000000;
	}
	else if (!func_249(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && Global_1403E4[0x00000000 /*4*/] > 0x00000000)
	{
		return 0x00000000;
	}
	if (((func_401(0x00000001) || func_399(0x00000001)) || Global_56C3.f_7C) || Global_56C3)
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (func_398() && Global_19DEEC == 0x00000002)
	{
		return 0x00000000;
	}
	if (func_396(unk_0xD803B885F5E47A62()) && !func_398())
	{
		return 0x00000000;
	}
	if (Global_195C36)
	{
		return 0x00000000;
	}
	if (Global_195C3B)
	{
		return 0x00000000;
	}
	if (func_395(0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000004))
	{
		return 0x00000000;
	}
	if (Global_14E876)
	{
		return 0x00000000;
	}
	if ((Global_19C478.f_2CE.f_5 || Global_19CF82.f_2CE.f_5) || Global_19C0AC.f_2CE.f_5)
	{
		return 0x00000000;
	}
	if ((Global_19E2B1.f_2D4.f_5 || Global_19E2B1.f_2E8.f_2D4.f_5) || Global_19E2B1.f_5D9.f_2D4.f_5)
	{
		return 0x00000000;
	}
	if (func_394(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if ((Global_14E899 || Global_14E89A) || Global_14E89B)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_394(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_4, 0x00000006);
}

bool func_395(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_2D, iParam0);
}

int func_396(int iParam0)
{
	if (func_16(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_397())
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

bool func_397()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

bool func_398()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 0x0000000C) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0x00000000));
}

int func_399(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_400(unk_0x16F2683693E537C9()))
			{
				if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000019) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000044))
				{
					return 0x00000000;
				}
			}
		}
	}
	if (Global_56C3.f_82)
	{
		return 0x00000000;
	}
	if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000013) || (!bParam0 && unk_0x7FEE810EE9E768EB(0x00000000, 0x00000013)))
	{
		return 0x00000001;
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (((unk_0x06F8112AA79C53D9(0x00000000, 0x000000A6) || unk_0x06F8112AA79C53D9(0x00000000, 0x000000A7)) || unk_0x06F8112AA79C53D9(0x00000000, 0x000000A8)) || unk_0x06F8112AA79C53D9(0x00000000, 0x000000A9))
		{
			return 0x00000001;
		}
		if (!bParam0)
		{
			if (((unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A6) || unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A7)) || unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A8)) || unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A9))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_400(int iParam0)
{
	int iVar0;
	
	if (unk_0x18AF0C72ABD5543B())
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0x00000001);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 0x0A914799)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_401(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

bool func_402(int iParam0, int iParam1)
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

int func_403()
{
	if (func_404())
	{
		return 0x00000001;
	}
	if (unk_0x757EF87A33649210())
	{
		return 0x00000000;
	}
	if (unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749())
	{
		return 0x00000000;
	}
	if (unk_0x06980BB66EBA4D95())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_404()
{
	return Global_1406B8;
}

bool func_405()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_406()
{
	return Global_150392.f_44;
}

int func_407()
{
	if (Global_18052A > 0x00000010)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_408()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000014:
		case 0x00000015:
		case 0x0000001B:
		case 0x0000001C:
		case 0x00000028:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_410()
{
	if (func_415())
	{
		return 0x00000001;
	}
	if (func_201(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_413())
	{
		return 0x00000001;
	}
	if (func_243(unk_0xD803B885F5E47A62()))
	{
		switch (func_190(unk_0xD803B885F5E47A62()))
		{
			case 0x00000083:
			case 0x00000084:
			case 0x00000085:
			case 0x00000088:
			case 0x0000008A:
			case 0x0000008B:
			case 0x0000008D:
			case 0x00000090:
			case 0x00000092:
				return 0x00000001;
				break;
			
			case 0x0000008C:
				if (!func_411(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000081:
				if (!func_411(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x000000AE:
				if (!func_411(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x000000AF:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

bool func_411(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000004);
}

int func_412(int iParam0)
{
	if (iParam0 == 0x0000001C)
	{
		if ((func_243(unk_0xD803B885F5E47A62()) && !func_244(unk_0xD803B885F5E47A62())) && !func_302(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
	}
	if (iParam0 == 0x0000001B)
	{
		if (func_238(unk_0xD803B885F5E47A62(), 0x00000000) && func_244(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
		if (func_228(unk_0xD803B885F5E47A62()) == 0x00000003)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_413()
{
	return Global_184488;
}

struct<4> func_414()
{
	struct<4> Var0;
	
	switch (Local_80.f_1B)
	{
		case joaat("rhino"):
			StringCopy(&Var0, "UW_TMRHN", 16);
			break;
		
		case joaat("hydra"):
			StringCopy(&Var0, "UW_TMHYD", 16);
			break;
		
		case joaat("savage"):
			StringCopy(&Var0, "UW_TMSAV", 16);
			break;
		
		case joaat("valkyrie"):
			StringCopy(&Var0, "UW_TMVALK", 16);
			break;
		
		case joaat("buzzard"):
			StringCopy(&Var0, "UW_TMBUZ", 16);
			break;
	}
	return Var0;
}

int func_415()
{
	if (func_416(unk_0xD803B885F5E47A62()))
	{
		return Global_1420BD;
	}
	return 0x00000000;
}

int func_416(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_16(iParam0, 0x00000000))
		{
			return unk_0xB9BE6EF14AC6F8DE(iParam0);
		}
	}
	return 0x00000000;
}

void func_417()
{
	struct<2> Var0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (func_16(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return;
	}
	switch (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11)
	{
		case 0x00000000:
			if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 == 0x00000000)
			{
				if (Local_80.f_F1 == 0x00000000)
				{
					func_747();
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000016))
			{
				if (Local_80.f_1B == joaat("rhino") && Local_80.f_1D == 0x00000002)
				{
					func_716(Local_80.f_1E[0x00000000 /*3*/]);
					unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000016);
				}
				else if (!func_69(Local_80.f_1E[0x00000000 /*3*/], 0f, 0f, 0f, 0x00000000))
				{
					func_716(Local_80.f_1E[0x00000000 /*3*/]);
					unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000016);
				}
			}
			func_715();
			func_709();
			if (Local_80.f_F1 == 0x00000000)
			{
				func_706(0x00000001);
			}
			func_705(0x00000000);
			if (Local_80.f_F1 == 0x00000000)
			{
				if (!Local_80.f_1B == joaat("hydra") && !Local_80.f_1B == joaat("rhino"))
				{
					func_196();
				}
				else if (func_742())
				{
					func_196();
				}
				if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000001))
					{
						func_704(0x00000081);
						func_683(0x00000001);
						unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000001);
						unk_0xDC4BBCD7EBECDC32(0x00000000);
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x00000006))
					{
						if (Local_80.f_1C > 0x00000001 || (Local_80.f_1C == 0x00000001 && func_112() > 0x00000001))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000004))
							{
								Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 = 0x00000000;
								unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x00000006);
							}
						}
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000001))
				{
					unk_0x0674E58A79778E99(&iLocal_85, 0x00000001);
					func_682(0x00000001);
					func_681();
					func_683(0x00000000);
				}
			}
			if (Local_80.f_F1 == 0x00000001)
			{
				func_680(&iVar1, &uVar2);
				iLocal_541 = iVar1;
				func_679(0x00000000);
				if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
				{
					if (!func_678())
					{
						unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000013);
					}
					if (func_268("UW_ABTSC") || func_268("UW_ABTS"))
					{
						func_9();
					}
					unk_0xDC4BBCD7EBECDC32(0x00000000);
					if ((func_677("UW_MINV") || func_677("UW_TIMELA")) || func_677("UW_TIMEL"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					func_192();
					func_666(0x00000081, 0f, 0f, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
					func_656(0x00000001);
					func_655();
					unk_0x51B096AAC60548C1(0.1f);
					iLocal_89 = unk_0x02A813E6E0380440();
					unk_0x34D79252800B23FF(0x00000000);
					func_654(0x00000001);
					func_653(0x00000001);
					if (Local_80.f_1B != joaat("rhino"))
					{
						func_632(0x00000001);
					}
					iLocal_95 = unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9());
					unk_0x6DF7BF67E86AAE86(unk_0x16F2683693E537C9(), iLocal_93);
					unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000001);
					unk_0xC92DB9682A650680("MP_MC_START");
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000B8, 0x00000001);
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000097, 0x00000000);
					func_631(0x00000000);
					Local_83[unk_0x57270EE11514DC67() /*18*/].f_9 = iLocal_541;
					if (!func_742())
					{
						func_630(0x0000003F, "UW_TITLE", "UW_DESC", func_315(), 0xFFFFFFFF, func_315(), 0x00000001, 0x00000000);
					}
					else if (Local_80.f_1B == joaat("hydra") || Local_80.f_1B == joaat("rhino"))
					{
						func_630(0x0000003F, "UW_TITLEC", "UW_DESCC", func_315(), 0xFFFFFFFF, func_315(), 0x00000001, 0x00000000);
					}
					else
					{
						iVar1++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, iVar1, 16);
						func_629(0x0000003F, &Var0, "UW_DESCCT", "UW_TITLE", 0x00003A98, 0xFFFFFFFF, 0xBF800000, "", func_315(), func_315(), 0x00000000);
					}
					Local_81.f_9 = unk_0xDD0E7998AE8AD485();
					func_631(0x00000000);
					func_627(0x00000003, 0x00000000, 0x00000001);
					func_20(&uLocal_555, 0x00000000, 0x00000000);
					Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000001;
				}
				else
				{
					func_192();
					if (func_268("UW_ABTSC") || func_268("UW_ABTS"))
					{
						func_9();
					}
					if (func_624("UW_HELP1", func_626(), func_625(0x00000001)) || func_624("UW_HELP1C", func_626(), func_625(0x00000001)))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000002;
					func_631(0x00000000);
					if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 == 0x00000000)
					{
					}
					else if (!func_623())
					{
					}
				}
			}
			else if (Local_80.f_F1 == 0x00000003)
			{
				func_631(0x00000000);
				if (func_624("UW_HELP1", func_626(), func_625(0x00000001)) || func_624("UW_HELP1C", func_626(), func_625(0x00000001)))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				if (!func_622())
				{
				}
				if (func_268("UW_ABTSC") || func_268("UW_ABTS"))
				{
					func_9();
				}
				func_192();
				Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000003;
			}
			else if (Local_80.f_F1 > 0x00000003)
			{
				if (func_268("UW_ABTSC") || func_268("UW_ABTS"))
				{
					func_9();
				}
				func_631(0x00000000);
				Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000004;
			}
			else
			{
				if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
				{
					func_621();
					func_620();
					if (func_122())
					{
						func_655();
					}
				}
				if (func_742())
				{
					if (func_614(0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000))
					{
						if (func_268("UW_ABTSC") || func_268("UW_ABTS"))
						{
							func_9();
						}
						func_631(0x00000000);
						Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000004;
					}
				}
				else if (Local_80.f_1B == joaat("valkyrie"))
				{
					if (func_614(0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000))
					{
						if (func_268("UW_ABTSC") || func_268("UW_ABTS"))
						{
							func_9();
						}
						func_631(0x00000000);
						Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000004;
					}
				}
			}
			break;
		
		case 0x00000001:
			func_165(0x00000001);
			func_709();
			func_542();
			func_169();
			func_540();
			func_528();
			func_269(0x00000000);
			func_524();
			func_521();
			func_621();
			func_620();
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x0000001A))
			{
				if (!func_520(0x00000037))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x0000000B))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x0000000A))
						{
							if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_A == 0xFFFFFFFF)
							{
								if (!func_742())
								{
									if (!func_268("UW_ATTK"))
									{
										func_262("UW_ATTK", 0x00000000);
									}
								}
								else if (Local_80.f_1B == joaat("hydra") || Local_80.f_1B == joaat("rhino"))
								{
									if (!func_268("UW_ATTK"))
									{
										func_262("UW_ATTK", 0x00000000);
									}
								}
								else if (!func_268("UW_ATTK"))
								{
									func_680(&iVar1, &uVar2);
									iVar1++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar1, 16);
									func_262("UW_ATTK", 0x00000000);
								}
							}
							else if (func_268("UW_ATTK"))
							{
								func_9();
							}
						}
					}
				}
			}
			func_519();
			if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
			{
				if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_A == 0xFFFFFFFF)
				{
					func_655();
				}
			}
			if (!func_844(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
			{
				Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000002;
				func_9();
				unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000015);
			}
			else if (func_182())
			{
				Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000002;
				func_9();
			}
			if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 == 0x00000001)
			{
				if (!func_518())
				{
					unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000017);
					func_9();
					if (iLocal_541 > 0xFFFFFFFF)
					{
						if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iLocal_541]))
						{
							func_25(&(Local_80.f_7[iLocal_541]));
						}
					}
					Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000002;
				}
			}
			if (Local_80.f_F1 == 0x00000003)
			{
				func_682(0x00000001);
				Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000003;
			}
			else if (Local_80.f_F1 > 0x00000003)
			{
				func_682(0x00000001);
				Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000004;
			}
			else if (func_742())
			{
				if (func_614(0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000))
				{
					Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000004;
				}
			}
			break;
		
		case 0x00000002:
			if (Local_80.f_F1 == 0x00000003)
			{
				Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000003;
			}
			else if (Local_80.f_F1 > 0x00000003)
			{
				Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000004;
			}
			func_452();
			if (func_622())
			{
				if (func_190(unk_0xD803B885F5E47A62()) == 0x00000081)
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x0178C60FEA5C5A75())
					{
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000018E, 0x00000000);
						if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000016))
						{
							func_451();
							unk_0x0674E58A79778E99(&iLocal_84, 0x00000016);
						}
						func_681();
						func_448();
						func_446(0x00000000);
						func_444(0x00000000);
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000B8, 0x00000000);
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000097, 0x00000001);
						func_683(0x00000000);
						func_682(0x00000001);
					}
					func_443();
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000008))
			{
				unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000008);
			}
			if (!func_200())
			{
				func_442();
				func_540();
				func_165(0x00000000);
				func_528();
				func_269(0x00000001);
				func_524();
				if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
				{
				}
			}
			else
			{
				func_441();
			}
			func_434();
			func_433();
			func_542();
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000007))
			{
				iVar3 = 0x00000000;
				while (iVar3 < 0x00000018)
				{
					if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar3]))
					{
						if (!func_31(Local_80.f_30[iVar3]))
						{
							unk_0x471081F9164BFC40(unk_0x1B50683925F00106(Local_80.f_30[iVar3]), unk_0xD803B885F5E47A62(), 0x00000000);
						}
					}
					iVar3++;
				}
				iVar3 = 0x00000000;
				while (iVar3 < 0x00000004)
				{
					if (unk_0xE5DBF9B6126856CA(Local_80.f_50[iVar3]))
					{
						if (!func_31(Local_80.f_50[iVar3]))
						{
							unk_0x471081F9164BFC40(unk_0x1B50683925F00106(Local_80.f_50[iVar3]), unk_0xD803B885F5E47A62(), 0x00000000);
						}
					}
					iVar3++;
				}
				unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000007);
			}
			else if (Local_80.f_F7 != iLocal_539)
			{
				iLocal_539 = Local_80.f_F7;
				unk_0x0674E58A79778E99(&iLocal_85, 0x00000007);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x0000000B))
			{
				unk_0x0674E58A79778E99(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x0000000B);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x0000000A))
			{
				unk_0x0674E58A79778E99(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x0000000A);
			}
			if (unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()) == iLocal_93)
			{
				unk_0x6DF7BF67E86AAE86(unk_0x16F2683693E537C9(), iLocal_95);
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x0000001F))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000C))
				{
					func_192();
					unk_0x5D96D8530B3D0904(&iLocal_84, 0x0000001F);
				}
			}
			func_519();
			func_428();
			if (!func_200())
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000E) && !unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000C))
				{
					func_269(0x00000001);
				}
				func_528();
				func_540();
				func_524();
				func_419();
			}
			func_452();
			func_433();
			func_542();
			if (Local_80.f_F1 > 0x00000003)
			{
				Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			func_787();
			break;
	}
	func_418();
}

void func_418()
{
	int iVar0;
	
	if (iLocal_566 != Local_80.f_268)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000004)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_268, iVar0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_566, iVar0))
				{
					if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar0]))
					{
						if (unk_0x526BC32A660C89E6(Local_80.f_7[iVar0]))
						{
							unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000002);
							func_25(&(Local_80.f_7[iVar0]));
							unk_0x5D96D8530B3D0904(&iLocal_566, iVar0);
						}
					}
					else
					{
						unk_0x5D96D8530B3D0904(&iLocal_566, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_419()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000E))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000005))
		{
			if (func_422(0x00000000, 0x00000001, 0x00000001, 0x00000001))
			{
				if (func_742())
				{
					func_421("UW_TFEWC", 0x00007530);
				}
				else
				{
					func_421("UW_TFEW", 0x00007530);
				}
				func_420(0x00000001);
				unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000005);
			}
		}
	}
}

void func_420(int iParam0)
{
	unk_0x2D03DF47CD5D6E35(0x00000003, 0x00000015, 0x000000C8, 0x00000000, 0x00000000);
	if (iParam0 && !func_354())
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0x00000000);
	}
}

void func_421(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam1);
}

int func_422(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xFEBC1E4EC9E001F0())
	{
		return 0x00000000;
	}
	if (func_427())
	{
		return 0x00000000;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0x00000000;
	}
	if (func_405())
	{
		return 0x00000000;
	}
	if (func_247())
	{
		return 0x00000000;
	}
	if (bParam1)
	{
		if (func_249(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
		{
			return 0x00000000;
		}
	}
	if (bParam0)
	{
		if (func_426(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (func_425())
	{
		return 0x00000000;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (bParam3)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (Global_180528)
	{
		return 0x00000000;
	}
	if (func_424())
	{
		return 0x00000000;
	}
	if (func_423())
	{
		return 0x00000000;
	}
	if (func_182())
	{
		return 0x00000000;
	}
	if (Global_12061)
	{
		return 0x00000000;
	}
	if (Global_26DD70)
	{
		return 0x00000000;
	}
	if (func_210(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_423()
{
	return Global_2564C8.f_24F;
}

bool func_424()
{
	return Global_2564C8.f_2E8;
}

bool func_425()
{
	return Global_2537E2.f_BE7.f_242;
}

int func_426(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_D0 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_427()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_428()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_268("UW_EXPL") && !func_268("UW_EXPLC"))
	{
		func_9();
	}
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000004)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, (0x0000001B + iVar2)))
		{
			if (unk_0xE9F78D191AD5EDBA(Local_80.f_7[iVar2]))
			{
				if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_80.f_7[iVar2]), 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&iLocal_84, (0x0000001B + iVar2));
					uLocal_542[iVar2] = unk_0xD68EA767274B7444();
					unk_0xCEAA091B490F8407(uLocal_542[iVar2], "Explosion_Countdown", unk_0xB177666FAB6F4417(Local_80.f_7[iVar2]), "GTAO_FM_Events_Soundset", 0x00000000, 0x00000000);
					unk_0x6F6BA3FE885E6C91(uLocal_542[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_742())
	{
		if (unk_0xE9F78D191AD5EDBA(Local_80.f_7[0x00000000]))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_13F, 0x00000000))
			{
				if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_80.f_7[0x00000000]), 0x00000000))
				{
					if ((func_432() - func_126(&(Local_80.f_144), 0x00000000, 0x00000000)) >= 0x00000000)
					{
						if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000E))
						{
							if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[0x00000000]), 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000))
							{
								if (!func_200())
								{
									func_431();
									func_171((func_432() - func_126(&(Local_80.f_144), 0x00000000, 0x00000000)), "UW_DEST", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
								}
							}
						}
					}
					else
					{
						if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000E))
						{
							if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[0x00000000]), 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000))
							{
								if (!func_200())
								{
									func_431();
									func_171(0x00000000, "UW_DEST", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
								}
							}
						}
						if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
						{
							func_682(0x00000001);
						}
						if (unk_0x526BC32A660C89E6(Local_80.f_7[0x00000000]))
						{
							unk_0xE121AE1BBF90E186(unk_0xB177666FAB6F4417(Local_80.f_7[0x00000000]), 0x00000000);
							unk_0x6EEAA5C21760E9DB(unk_0xB177666FAB6F4417(Local_80.f_7[0x00000000]), 0x00000001);
							if (!unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_7[0x00000000]))))
							{
								unk_0xCCB891029A74A633(unk_0xB177666FAB6F4417(Local_80.f_7[0x00000000]), 0x00000001, 0x00000000, 0xFFFFFFFF);
								func_25(&(Local_80.f_7[0x00000000]));
							}
							else
							{
								unk_0xED2FE8C1F8C4F31C(unk_0xB177666FAB6F4417(Local_80.f_7[0x00000000]), 0x00000001, 0x00000000, 0x00000000);
								func_25(&(Local_80.f_7[0x00000000]));
							}
						}
					}
				}
			}
		}
		func_192();
		if (!func_200())
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x0000000C))
			{
				if (func_109(Local_80.f_7[0x00000000]))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[0x00000000])))
						{
							if (!func_742())
							{
								if (!func_268("UW_EXPL"))
								{
									func_262("UW_EXPL", 0x00000000);
								}
							}
							else if (!func_268("UW_EXPLC"))
							{
								func_262("UW_EXPLC", 0x00000000);
							}
							unk_0x5D96D8530B3D0904(&iLocal_84, 0x0000000C);
						}
					}
				}
			}
			else if (func_268("UW_EXPL") || func_268("UW_EXPLC"))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
					{
						func_9();
					}
				}
			}
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000004)
		{
			if (unk_0xE9F78D191AD5EDBA(Local_80.f_7[iVar0]))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_13F, iVar0))
				{
					if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000))
					{
						if ((func_432() - func_126(&(Local_80.f_144), 0x00000000, 0x00000000)) >= 0x00000000)
						{
							if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000E))
							{
								if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000))
								{
									if (!func_200())
									{
										if (!bVar1)
										{
											func_431();
											func_171((func_432() - func_126(&(Local_80.f_144), 0x00000000, 0x00000000)), "UW_DEST", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
											bVar1 = 0x00000001;
										}
									}
								}
							}
						}
						else
						{
							if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000E))
							{
								if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000))
								{
									if (!func_200())
									{
										if (!bVar1)
										{
											func_431();
											func_171(0x00000000, "UW_DEST", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
											bVar1 = 0x00000001;
										}
									}
								}
							}
							if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
							{
								func_682(0x00000001);
							}
							if (func_429(Local_80.f_7[iVar0]))
							{
								if (unk_0x526BC32A660C89E6(Local_80.f_7[iVar0]))
								{
									unk_0xE121AE1BBF90E186(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000);
									unk_0x6EEAA5C21760E9DB(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000001);
									if (!unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]))))
									{
										unk_0xCCB891029A74A633(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000001, 0x00000000, 0xFFFFFFFF);
										func_25(&(Local_80.f_7[iVar0]));
									}
									else
									{
										unk_0xED2FE8C1F8C4F31C(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000001, 0x00000000, 0x00000000);
										func_25(&(Local_80.f_7[iVar0]));
									}
								}
							}
						}
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x0000000C))
				{
					if (func_109(Local_80.f_7[iVar0]))
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[iVar0])))
							{
								if (!func_200())
								{
									if (!func_742())
									{
										if (!func_268("UW_EXPL"))
										{
											func_262("UW_EXPL", 0x00000000);
										}
									}
									else if (!func_268("UW_EXPLC"))
									{
										func_262("UW_EXPLC", 0x00000000);
									}
									unk_0x5D96D8530B3D0904(&iLocal_84, 0x0000000C);
								}
							}
						}
					}
				}
				else if (func_268("UW_EXPL") || func_268("UW_EXPLC"))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
						{
							func_9();
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_429(var uParam0)
{
	if (unk_0x83F012E6200426DB(uParam0))
	{
		return 0x00000001;
	}
	if (func_430(uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_430(var uParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return 0x00000000;
	}
	if (!unk_0xE5DBF9B6126856CA(uParam0))
	{
		return 0x00000000;
	}
	if (func_79(uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_431()
{
	Global_150976.f_46B = 0x00000001;
}

int func_432()
{
	if (func_742())
	{
		return Global_40001.f_2C6F;
	}
	return Global_40001.f_2B57;
}

void func_433()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000004))
	{
		if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					func_682(0x00000001);
					unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000004);
				}
			}
		}
	}
}

void func_434()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xF4FB3A22FC4991C8(iLocal_88);
	if (unk_0x81A93C8315C28F58(iVar0))
	{
		iVar1 = unk_0x4B2BFE4A3BC248ED(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if (iLocal_88 != unk_0x57270EE11514DC67())
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_567, iLocal_88))
				{
					if (!func_200())
					{
						if (Local_83[iLocal_88 /*18*/].f_11 == 0x00000001)
						{
							unk_0x5D96D8530B3D0904(&iLocal_567, iLocal_88);
							func_435(iVar1, 0x00000037, 0x00000001, 0x00000000);
						}
					}
				}
				else if (func_200())
				{
					func_435(iVar1, 0x00000037, 0x00000000, 0x00000000);
					unk_0x0674E58A79778E99(&iLocal_567, iLocal_88);
				}
				else if (Local_83[iLocal_88 /*18*/].f_11 > 0x00000001)
				{
					unk_0x0674E58A79778E99(&iLocal_567, iLocal_88);
					func_435(iVar1, 0x00000037, 0x00000000, 0x00000000);
				}
			}
		}
	}
	iLocal_88++;
	if (iLocal_88 >= unk_0x54EABC0DD106045B())
	{
		iLocal_88 = 0x00000000;
	}
}

void func_435(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_437(iParam0))
	{
		return;
	}
	if (func_436(&(Global_24DDCF.f_26D[iParam0]), &(Global_24DDCF.f_3D8[iParam0]), &(Global_24DDCF.f_185), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1C8[iParam0] = iParam1;
		}
	}
}

int func_436(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x1727A44C562FBED2(*uParam1) || *uParam1 == unk_0x0D0A574C76D769AC())
		{
			*uParam1 = unk_0x0D0A574C76D769AC();
			*uParam0 = unk_0x0D0A574C76D769AC();
		}
	}
	if (!unk_0x1727A44C562FBED2(*uParam0) || *uParam0 == unk_0x0D0A574C76D769AC())
	{
		if (bParam3)
		{
			if (!unk_0xEAE0D21A50E6C7F4(*uParam2, iParam4))
			{
				*uParam6 = 0x00000001;
				unk_0x5D96D8530B3D0904(uParam2, iParam4);
			}
			*uParam0 = unk_0x0D0A574C76D769AC();
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(*uParam2, iParam4))
			{
				*uParam6 = 0x00000001;
				unk_0x0674E58A79778E99(uParam2, iParam4);
			}
			if (*uParam1 == unk_0x0D0A574C76D769AC())
			{
				*uParam1 = 0xFFFFFFFF;
			}
			*uParam0 = 0xFFFFFFFF;
		}
		return 0x00000001;
	}
	else if (unk_0x1727A44C562FBED2(*uParam1) && !*uParam1 == unk_0x0D0A574C76D769AC())
	{
	}
	return 0x00000000;
}

int func_437(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0x00000001;
	}
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_438())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_438()
{
	switch (func_440())
	{
		case 0x00000000:
			return func_439();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_439()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_440()
{
	return Global_7830;
}

void func_441()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000018)
	{
		if (unk_0xE4EDC4B0E92C078B(Local_92[iVar0 /*8*/]))
		{
			unk_0x142CC44DB769B57E(&(Local_92[iVar0 /*8*/]));
		}
		if (unk_0xE4EDC4B0E92C078B(Local_92[iVar0 /*8*/].f_1))
		{
			unk_0x142CC44DB769B57E(&(Local_92[iVar0 /*8*/].f_1));
		}
		if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar0]))
		{
			if (!func_31(Local_80.f_30[iVar0]))
			{
				if (unk_0x3C583F939C836C5C(unk_0x1B50683925F00106(Local_80.f_30[iVar0])))
				{
					func_92(&(Local_92[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_442()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x0000000B))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000006))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x0000000D))
			{
				if (func_190(unk_0xD803B885F5E47A62()) != 0x00000081)
				{
					if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
					{
						if (!func_520(0x00000041) && !func_520(0x00000042))
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000B))
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000C))
								{
									if (func_422(0x00000000, 0x00000001, 0x00000001, 0x00000001))
									{
										if (func_742())
										{
											func_421("UW_HELIMC", 0xFFFFFFFF);
										}
										else
										{
											func_421("UW_HELIM", 0xFFFFFFFF);
										}
										func_420(0x00000001);
										unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000C);
									}
								}
							}
							else if (!(Local_80.f_1B == joaat("rhino") || Local_80.f_1B == joaat("hydra")))
							{
								if (func_422(0x00000000, 0x00000001, 0x00000001, 0x00000001))
								{
									if (!func_742())
									{
										func_421("UW_TAVAIL", 0x00007530);
									}
									else
									{
										func_421("UW_TAVAILC", 0x00007530);
									}
									func_420(0x00000001);
									unk_0x5D96D8530B3D0904(&iLocal_84, 0x0000000B);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_443()
{
	float fVar0;
	
	if (iLocal_564 != 0x00000000)
	{
		return;
	}
	if (func_22(&uLocal_555))
	{
		iLocal_564 = func_126(&uLocal_555, 0x00000000, 0x00000000);
	}
	fVar0 = SYSTEM::TO_FLOAT(iLocal_564);
	fVar0 = (fVar0 / 60000f);
	iLocal_564 = SYSTEM::FLOOR(fVar0);
	if (iLocal_564 >= 0x00000001)
	{
	}
	else
	{
		iLocal_564 = 0x00000001;
	}
	if (iLocal_564 > Global_40001.f_2CAB)
	{
		iLocal_564 = Global_40001.f_2CAB;
	}
}

void func_444(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_181EC.f_8 = 0x00000001;
	}
	else
	{
		Global_181EC.f_8 = 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		func_445(iVar0);
		iVar0++;
	}
}

void func_445(int iParam0)
{
	Global_181EC.f_B5[iParam0] = 0x00000001;
	Global_181EC.f_B4 = 0x00000001;
}

void func_446(int iParam0)
{
	if (func_447() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_247C05)
	{
		return;
	}
	Global_247C05 = iParam0;
	Global_247C07 = 0x00000000;
	Global_247C08 = 0x00000000;
}

int func_447()
{
	if ((((Global_EC6CD != 0xFFFFFFFF && Global_EC6CD != 0x00000021) && Global_EC6CD != 0x00000023) && Global_EC6CD != 0x00000025) && Global_EC6CD != 0x00000015)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_448()
{
	unk_0x34D79252800B23FF(0x00000005);
	func_450();
	unk_0x51B096AAC60548C1(1f);
	unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000008);
	func_449();
}

void func_449()
{
	if (Global_19824D)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_19824E, 0x00000000))
		{
			unk_0x0674E58A79778E99(&Global_26D9AC, 0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_19824E, 0x00000001))
		{
			unk_0x0674E58A79778E99(&Global_26D9AC, 0x00000001);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_19824E, 0x00000005))
		{
			unk_0x0674E58A79778E99(&Global_26D9AC, 0x00000005);
		}
		if (unk_0x76395FF5E8D5E643(0xEACBE1C2))
		{
			unk_0x1BA7FCEAFCE8D46E(0xEACBE1C2, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0xDD5EF4CE))
		{
			unk_0x1BA7FCEAFCE8D46E(0xDD5EF4CE, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0xAAFA1005))
		{
			unk_0x1BA7FCEAFCE8D46E(0xAAFA1005, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0x2C6E2BFC))
		{
			unk_0x1BA7FCEAFCE8D46E(0x2C6E2BFC, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0xB232A0B6))
		{
			unk_0x1BA7FCEAFCE8D46E(0xB232A0B6, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0xA405045B))
		{
			unk_0x1BA7FCEAFCE8D46E(0xA405045B, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0xCF9D5B8B))
		{
			unk_0x1BA7FCEAFCE8D46E(0xCF9D5B8B, 0x00000001, 0x00000000, 0x00000000);
		}
		Global_19824E = 0x00000000;
	}
	Global_19824D = 0x00000000;
}

void func_450()
{
	if (unk_0x1727A44C562FBED2(Global_26B66F.f_1400))
	{
		if (!Global_26B66F.f_1400 == unk_0x0D0A574C76D769AC() && Global_26B66F.f_13FF < 1f)
		{
			return;
		}
	}
	Global_26B66F.f_1400 = 0xFFFFFFFF;
	Global_26B66F.f_13FF = 1f;
}

void func_451()
{
	Global_247C09 = { 0f, 0f, 0f };
	Global_247C0C = 0x00000000;
}

void func_452()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x0000000D))
	{
		return;
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000006);
	bVar1 = unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000015);
	bVar2 = unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000017);
	bVar3 = Local_83[unk_0x57270EE11514DC67() /*18*/].f_A != 0xFFFFFFFF;
	if (bVar3)
	{
		bVar1 = 0x00000000;
		bVar2 = 0x00000000;
	}
	if (func_622())
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000011))
		{
			if (func_844(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || bVar2)
				{
					if (!func_200())
					{
						if (!func_742())
						{
							if (bVar0)
							{
								func_630(0x00000041, "UW_BIGF", "UW_FAILNX", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
							}
							else if (bVar1)
							{
								if (Local_80.f_1B == joaat("rhino") || Local_80.f_1B == joaat("hydra"))
								{
									func_630(0x00000041, "UW_BIGF", "UW_LSELIM", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
								}
								else if (unk_0xE5DBF9B6126856CA(Local_80.f_7[0x00000000]) && func_109(Local_80.f_7[0x00000000]))
								{
									unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000B);
									unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000010);
									func_630(0x00000042, "UW_BIGE", "UW_LSELIM", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
								}
								else
								{
									func_630(0x00000041, "UW_BIGF", "UW_LSELIM", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
								}
							}
							else if (bVar2)
							{
								func_630(0x00000041, "UW_BIGF", "UW_LSELIM", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
							}
							else if (bVar3 || unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000010))
							{
								func_630(0x00000042, "UW_BIGO", "UW_ABAND", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
							}
						}
						else if (bVar0)
						{
							func_630(0x00000041, "UW_BIGF", "UW_FAILNX", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
						}
						else if (bVar1)
						{
							if (Local_80.f_1B == joaat("rhino") || Local_80.f_1B == joaat("hydra"))
							{
								if (func_517())
								{
									unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000B);
									unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000010);
									func_630(0x00000042, "UW_BIGE", "UW_LSELIMC", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
								}
								else
								{
									func_630(0x00000041, "UW_BIGF", "UW_LSELIM", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
								}
							}
							else if (func_517())
							{
								unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000B);
								unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000010);
								func_630(0x00000042, "UW_BIGE", "UW_LSELIMC", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
							}
							else
							{
								func_630(0x00000041, "UW_BIGF", "UW_LSELIMC", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
							}
						}
						else if (bVar2)
						{
							if (func_517())
							{
								unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000B);
								unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000010);
								func_630(0x00000042, "UW_BIGE", "UW_LSELIMC", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
							}
							else
							{
								func_630(0x00000041, "UW_BIGF", "UW_LSELIMC", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
							}
						}
						else if (bVar3 || unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000010))
						{
							func_630(0x00000042, "UW_BIGO", "UW_ABAND", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
						}
					}
					iVar4 = func_516(0x00000001);
					Local_81.f_6 = (Local_81.f_6 + iVar4);
					if (!Global_40001.f_2CEE)
					{
						if (Local_81.f_6 > 0x00000000)
						{
							func_515(0x00000013, Local_81.f_6);
						}
					}
					Global_2594A0 = iVar4;
					if (iVar4 > 0x00000000)
					{
						if (func_514())
						{
							func_502(0x0C92ECEF, iVar4, &uVar5, 0x00000000, 0x00000001, 0x00000000);
						}
						else
						{
							unk_0x9AC21D04D5646532(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar7 = func_501(0x00000001);
					Local_81.f_7 = (Local_81.f_7 + iVar7);
					func_500();
					func_453(0x00000000, unk_0x16F2683693E537C9(), "", 0x9E79F1A6, 0x092A9843, iVar7, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					Local_81.f_5 = 0x00000002;
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000018E, 0x00000000);
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000010))
					{
						unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x00000008);
					}
					unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000011);
					unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000012);
				}
			}
		}
	}
}

int func_453(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_454(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_454(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_464(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 0xDCB673B3 || iParam4 == 0x8DD87E4F)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_460(unk_0x64430C979F516F7A(iVar1, 0x0000796E, 0f, 0f, 0f), iVar0, 0x00000000, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_455(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_455(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_458(iParam0, 0x00000001) };
	if (iParam0 == func_457(unk_0x16F2683693E537C9()))
	{
		func_456(0x00000001);
	}
	func_460(vVar0, iParam1, 0x00000000, sParam2, iParam3);
}

void func_456(int iParam0)
{
	Global_2537E2.f_763 = iParam0;
}

int func_457(int iParam0)
{
	return iParam0;
}

Vector3 func_458(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x19C7D1907D1DDDAB())
	{
		vVar1 = { unk_0x3B276DB863622D2E(0x00000002) };
	}
	if (iParam0 == func_459(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
	{
		vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	fVar2 = 0f;
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		fVar2 = unk_0xD9522BA9E27E1349(iParam0);
		if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { unk_0x8A5E176FF719A014(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_459(int iParam0)
{
	return iParam0;
}

void func_460(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0x00000000)
	{
		iVar1 = 0xFFFFFFFF;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000014)
		{
			if (Global_2537E2.f_50A[iVar0 /*30*/].f_6 == 0x00000000 || Global_2537E2.f_50A[iVar0 /*30*/].f_6 == 0x00000007)
			{
				iVar1 = iVar0;
				iVar0 = 0x00000014;
			}
			iVar0++;
		}
		if (iVar1 != 0xFFFFFFFF)
		{
			Global_2537E2.f_50A[iVar1 /*30*/] = { vParam0 };
			Global_2537E2.f_50A[iVar1 /*30*/].f_6 = 0x00000001;
			Global_2537E2.f_50A[iVar1 /*30*/].f_4 = func_463(Global_2537E2.f_50A[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_2537E2.f_50A[iVar1 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_50A[iVar1 /*30*/].f_3 = iParam1;
			Global_2537E2.f_50A[iVar1 /*30*/].f_8 = iParam2;
			Global_2537E2.f_50A[iVar1 /*30*/].f_9 = func_462();
			Global_2537E2.f_50A[iVar1 /*30*/].f_A = func_461();
			StringCopy(&(Global_2537E2.f_50A[iVar1 /*30*/].f_16), sParam3, 16);
			Global_2537E2.f_50A[iVar1 /*30*/].f_1A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam4);
		}
	}
}

int func_461()
{
	if (Global_2537E2.f_763)
	{
		Global_2537E2.f_763 = 0x00000000;
		return 0x00000001;
	}
	Global_2537E2.f_763 = 0x00000000;
	return 0x00000000;
}

var func_462()
{
	var uVar0;
	
	uVar0 = Global_2537E2.f_765;
	Global_2537E2.f_765 = 0x00000001;
	return uVar0;
}

float func_463(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0EB28750412C3A5A(unk_0x07DAF5424BC6779A(), vParam0, 0x00000001);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_464(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_465(iParam0, 0x00000000, sParam1, iParam4, iParam5, 0x00000000, iParam6, 0x00000001, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_465(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_499(unk_0xD803B885F5E47A62()) || func_498(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_25A3 > 0x00003E80)
		{
			iVar2 = 0x00003E80;
		}
		else
		{
			iVar2 = Global_40001.f_25A3;
		}
	}
	else if (func_363() || func_496(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_58F6 > 0x00003E80)
		{
			iVar2 = 0x00003E80;
		}
		else
		{
			iVar2 = Global_40001.f_58F6;
		}
	}
	else if (Global_40001.f_19EB > 0x00003A98)
	{
		iVar2 = 0x00003A98;
	}
	else
	{
		iVar2 = Global_40001.f_19EB;
	}
	if (func_174(sParam2))
	{
	}
	if (func_495())
	{
		if (iParam4 < 0x00000001)
		{
			iParam4 = 0x00000001;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_493(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_492(&iVar1);
		}
		if (iParam1 == 0x00000000)
		{
			switch (iParam0)
			{
				case 0x00000002:
					func_490(0x00000000, &iVar1);
					break;
				
				case 0x00000003:
					func_490(0x00000001, &iVar1);
					break;
				
				case 0x00000001:
					func_487(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_19BCBA)
		{
			return 0x00000000;
		}
		if (iParam1 == 0x00000000)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 0x00000001)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 0x00000002 || iParam0 == 0x00000003)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_485(0x0000048C, iVar1, 0xFFFFFFFF);
			if (iParam1 == 0x00000000)
			{
				func_475((func_484(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0x00000000);
				if (iParam8 == 0x00000000)
				{
				}
				if (iParam9 == 0x00000000)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 0xFFFFFFFF)
				{
					func_485(0x0000048D, iVar1, 0xFFFFFFFF);
				}
				func_470(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 0xFFFFFFFF)
			{
				func_466((func_468(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_466((func_468(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_466(int iParam0)
{
	if (func_495())
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_5 = iParam0;
		func_467(joaat("mpply_globalxp"), iParam0);
	}
}

void func_467(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
}

int func_468(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (func_844(iParam0, 0x00000000, 0x00000001))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_469(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_5;
			}
		}
		else
		{
			return func_469(joaat("mpply_globalxp"));
		}
	}
	return 0x00000000;
}

int func_469(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_470(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_66(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_473(func_474(&Var0));
			if (iVar1 == 0x00000000)
			{
				func_472(&Global_152D8B, iParam0);
				func_471(joaat("mpply_crew_local_xp_0"), Global_152D8B);
			}
			else if (iVar1 == 0x00000001)
			{
				func_472(&Global_152D8C, iParam0);
				func_471(joaat("mpply_crew_local_xp_1"), Global_152D8C);
			}
			else if (iVar1 == 0x00000002)
			{
				func_472(&Global_152D8D, iParam0);
				func_471(joaat("mpply_crew_local_xp_2"), Global_152D8D);
			}
			else if (iVar1 == 0x00000003)
			{
				func_472(&Global_152D8E, iParam0);
				func_471(joaat("mpply_crew_local_xp_3"), Global_152D8E);
			}
			else if (iVar1 == 0x00000004)
			{
				func_472(&Global_152D8F, iParam0);
				func_471(joaat("mpply_crew_local_xp_4"), Global_152D8F);
			}
		}
	}
}

void func_471(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_152D86 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_152D89 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_152D8A = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_152D8B = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_152D8C = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_152D8D = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_152D8E = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_152D8F = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_152D90 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_152D91 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_152D92 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_152D93 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_152D94 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_152D95 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_152D96 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_472(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_473(int iParam0)
{
	if (iParam0 == Global_152D86)
	{
		return 0x00000000;
	}
	else if (iParam0 == Global_152D87)
	{
		return 0x00000001;
	}
	else if (iParam0 == Global_152D88)
	{
		return 0x00000002;
	}
	else if (iParam0 == Global_152D89)
	{
		return 0x00000003;
	}
	else if (iParam0 == Global_152D8A)
	{
		return 0x00000004;
	}
	else
	{
		return 0xFFFFFFFF;
	}
	return 0xFFFFFFFF;
}

int func_474(var uParam0)
{
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_258BBD;
		}
	}
	return Global_258BBD;
}

void func_475(int iParam0, int iParam1, int iParam2)
{
	if (func_495())
	{
		if (iParam0 >= 0x6A8C4212)
		{
			iParam0 = 0x6A8C4212;
		}
		if (Global_40001.f_2583 == 0x00000000 && iParam1 != 0xBFCF576C)
		{
			if (iParam2 == 0x00000000)
			{
				if (iParam0 < Global_152E1C[func_241(0xFFFFFFFF)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 0xE0C5CB02, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_241(0xFFFFFFFF)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0x00000000)
		{
			if (iParam0 == 0x00000000)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 0xBAEFBC23, 0xAFCE7619);
				if (iParam2 == 0x00000000)
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0x00000000)
		{
			if (iParam0 < 0x00000000)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 0xA169804B, iParam1);
				return;
			}
		}
		if (func_483(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_481(iParam0, 0x00000001);
		}
		func_480(0x0000027F, iParam0, 0xFFFFFFFF, 0x00000001);
		func_479(0x00000280, func_481(iParam0, 0x00000001), 0xFFFFFFFF, 0x00000001, 0x00000000);
		Global_152E1C[func_241(0xFFFFFFFF)] = iParam0;
		func_476(0xBDDC2B6E, 0x00000007, 0x00000000);
	}
}

void func_476(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_478(iParam1, iParam2))
	{
		iVar0 = func_477();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_477()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000009;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (Global_258B8D[iVar1] == 0x00000000)
		{
			iVar0 = iVar1;
			iVar1 = 0x0000000A;
		}
		iVar1++;
	}
	return iVar0;
}

int func_478(int iParam0, var uParam1)
{
	if (Global_140861)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000016)
	{
		return 0x00000001;
	}
	if ((((((((uParam1 || !Global_14086D) || iParam0 == 0x00000003) || iParam0 == 0x0000000A) || iParam0 == 0x0000000B) || iParam0 == 0x0000001B) || iParam0 == 0x0000001C) || iParam0 == 0x0000001D) || iParam0 == 0x0000001E)
	{
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_479(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_241(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_480(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_241(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_241(iParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_241(iParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_241(iParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_241(iParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_241(iParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_241(iParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_241(iParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_241(iParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_241(iParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_241(iParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_241(iParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_241(iParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_241(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_481(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_482(iParam0, 0x00000000);
}

int func_482(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0x00000000)
	{
	}
	iVar1 = 0x00001F40;
	iVar2 = 0x00000000;
	iVar3 = ((iVar1 - iVar2) / 0x00000002);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000064)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 0x00001F40;
			if (iVar3 == 0x00000000)
			{
				iVar3 = 0x00000001;
			}
			return iVar3;
		}
		if (Global_4713D[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_4713D[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 0x00000001);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 0x00001F40;
}

int func_483(int iParam0)
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

int func_484(int iParam0)
{
	if (Global_1406D3.f_9 == 0x00000000)
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_241(0xFFFFFFFF)];
			}
			else if (func_483(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_241(0xFFFFFFFF)];
	}
	return 0x00000000;
}

void func_485(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_260(iParam0, func_241(iParam2), 0x00000000);
	iVar0 = (iVar0 + iParam1);
	if (!func_486(iParam0))
	{
		func_479(iParam0, iVar0, iParam2, 0x00000001, 0x00000000);
	}
	else
	{
		func_480(iParam0, iVar0, iParam2, 0x00000001);
	}
}

int func_486(int iParam0)
{
	if (Global_152D85)
	{
		switch (iParam0)
		{
			case 0x00000313:
			case 0x00000314:
			case 0x00000315:
			case 0x00000316:
			case 0x00002216:
			case 0x00000309:
			case 0x0000030A:
			case 0x0000030B:
			case 0x0000030C:
			case 0x00002218:
			case 0x000002FF:
			case 0x00000300:
			case 0x00000301:
			case 0x00000302:
			case 0x0000221A:
			case 0x000002F5:
			case 0x000002F6:
			case 0x000002F7:
			case 0x000002F8:
			case 0x0000221C:
			case 0x00000517:
			case 0x00001C41:
			case 0x0000027F:
			case 0x000004FE:
			case 0x000002FC:
			case 0x000002FD:
			case 0x000002FE:
			case 0x0000221B:
			case 0x000004D4:
			case 0x00000754:
			case 0x000008DB:
			case 0x00000B71:
			case 0x00000BF2:
			case 0x00002720:
			case 0x00000BED:
			case 0x00000BEE:
			case 0x00000BEF:
			case 0x00000BF0:
			case 0x00000BF1:
			case 0x00000CA0:
			case 0x00000CA2:
			case 0x00000E34:
			case 0x00000E35:
			case 0x00000E36:
			case 0x00000E37:
			case 0x00000E38:
			case 0x00000E39:
			case 0x00000E3A:
			case 0x00000E3B:
			case 0x00000E3C:
			case 0x00000E3D:
			case 0x00000C9B:
			case 0x00000C95:
			case 0x00000E4F:
			case 0x00000E50:
			case 0x00000E51:
			case 0x00000E52:
			case 0x00000E53:
			case 0x00000E54:
			case 0x00000E69:
			case 0x00000C9E:
			case 0x00000C9D:
			case 0x00000FB4:
			case 0x00000FB3:
			case 0x00000FB7:
			case 0x00000FB6:
			case 0x00000FBA:
			case 0x00000FB9:
			case 0x00000FBD:
			case 0x00000FBC:
			case 0x000017DE:
			case 0x000017DD:
			case 0x00001818:
			case 0x00001817:
			case 0x00001985:
			case 0x00001984:
			case 0x00001992:
			case 0x00001991:
			case 0x0000199F:
			case 0x0000199E:
			case 0x000019A2:
			case 0x000019A1:
			case 0x000019A5:
			case 0x000019A4:
			case 0x00001C73:
			case 0x00001C75:
			case 0x00001C77:
			case 0x0000205A:
			case 0x0000205B:
			case 0x0000205C:
			case 0x0000205D:
			case 0x0000205E:
			case 0x0000205F:
			case 0x00002060:
			case 0x00002061:
			case 0x00002062:
			case 0x00002063:
			case 0x00002064:
			case 0x00002065:
			case 0x00002066:
			case 0x00001F4A:
			case 0x00002156:
			case 0x0000230F:
			case 0x00002311:
			case 0x00002312:
			case 0x00002314:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

void func_487(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		iVar4 = unk_0xF4FB3A22FC4991C8(iVar0);
		if (unk_0x81A93C8315C28F58(iVar4))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(iVar4);
			if (unk_0x08067D4957B73C02(iVar5) != 0xFFFFFFFF)
			{
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_489(unk_0x08067D4957B73C02(iVar5), iVar1, 0x00000000))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_67(unk_0xD803B885F5E47A62(), iVar5))
						{
							bVar3 = 0x00000001;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_488(*iParam0, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 0x00000004)
	{
		iVar2 = 0x00000004;
	}
	if (iVar2 >= 0x00000002)
	{
		iVar7 = SYSTEM::ROUND((func_488(*iParam0, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_488(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_489(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0x00000001)
	{
		if (iParam0 == iParam1)
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if ((iParam0 > 0xFFFFFFFF && iParam1 > 0xFFFFFFFF) && iParam0 == iParam1)
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000000);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000001);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000002);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000003);
				
				default:
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000004);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000005);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000006);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000007);
				
				default:
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000008);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000009);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000A);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000B);
				
				default:
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000C);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000D);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000E);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000F);
				
				default:
			}
			break;
	}
	return 0x00000000;
}

void func_490(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0x00000000;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar3 = iVar0;
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (func_844(iVar4, 0x00000000, 0x00000001))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_67(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = 0x00000001;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			iVar4 = iVar0;
			if (func_844(iVar4, 0x00000001, 0x00000001))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_491(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_67(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = 0x00000001;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_488(*iParam1, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 0x00000004)
	{
		iVar1 = 0x00000004;
	}
	if (iVar1 >= 0x00000001)
	{
		iVar6 = SYSTEM::ROUND((func_488(*iParam1, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_491(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_492(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 0x00000003)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_488(*iParam0, 0x00000064) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_493(int iParam0)
{
	if (iParam0 < 0x00000000)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_484(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_484(unk_0xD803B885F5E47A62());
		}
	}
	if (func_494(0x00001F40, 0x00000000, 0x00000000) > 0x00000000)
	{
		if (func_494(0x00001F40, 0x00000000, 0x00000000) < (iParam0 + func_484(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_494(0x00001F40, 0x00000000, 0x00000000) - func_484(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_494(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0x00000000)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 0x00001F40)
	{
		iParam0 = 0x00001F40;
	}
	return Global_4713D[iParam0];
}

int func_495()
{
	return 0x00000001;
}

int func_496(int iParam0)
{
	return func_497(func_338(iParam0));
}

int func_497(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000E9:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

bool func_498(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_499(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

void func_500()
{
	Global_25920D = 0x00000001;
}

int func_501(bool bParam0)
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000012))
	{
		return 0x00000000;
	}
	if (!bParam0)
	{
		if (func_742())
		{
			return Global_40001.f_2C34;
		}
		else
		{
			return Global_40001.f_2BF7;
		}
	}
	func_443();
	if (func_742())
	{
		iVar0 = (Global_40001.f_2C34 * iLocal_564);
	}
	else
	{
		iVar0 = (Global_40001.f_2BF7 * iLocal_564);
	}
	return iVar0;
}

void func_502(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_514())
	{
		return;
	}
	iVar0 = 0x00000001;
	if (bParam4)
	{
		iVar0 = 0x00000004;
	}
	else if (bParam3)
	{
		iVar0 = 0x00000002;
	}
	else if (bParam5)
	{
		iVar0 = 0x00000008;
	}
	switch (iParam0)
	{
		case 0x9DEFCB5B:
		case 0xDD16A585:
		case 0xAEF994E9:
		case 0x1B14F96B:
		case 0xC571DB3D:
		case 0x61F840EB:
		case 0x847B5E8A:
		case 0x26C85CA3:
		case 0x62A4B6CC:
		case 0xCBBC5D1E:
		case 0x040E0F34:
		case 0x8180486D:
		case 0x15DAFB97:
		case 0x10E398B4:
		case 0x11611C06:
		case 0x467E2916:
		case 0xE13B1F5A:
		case 0x3DC70F44:
		case 0x108CD6EE:
		case 0x79D2BE32:
		case 0x6DA50854:
		case 0x3CF098E4:
		case 0x73AF3590:
		case 0xAD32107E:
		case 0x2A6B291E:
		case 0x6597C63C:
		case 0x5A58E3BD:
		case 0x45F48C05:
		case 0xCA5E1B40:
		case 0xD86D0371:
		case 0x48090EBA:
		case 0xDB72FD6E:
		case 0xD80064A4:
		case 0xE7BA9A2C:
		case 0xD30E80F5:
		case 0x8F9E64E9:
		case 0x7323DAB3:
		case 0x3F79E8B3:
		case 0xF54343EF:
		case 0x7F096F7D:
		case 0x601646D2:
		case 0xE1286116:
		case 0x741DADD0:
		case 0x421452FF:
		case 0x92AEAB9C:
		case 0xB62639D4:
		case 0xF2BEFF3E:
		case 0xB3E76D2C:
		case 0x5D40F1F0:
		case 0xFA3E19A3:
		case 0x2C41A631:
		case 0x7A31F111:
		case 0x978B277B:
		case 0x25CFCEFF:
		case 0x6E53C312:
		case 0x2D80114E:
		case 0x73BA02A6:
		case 0x27A4C3FB:
		case 0xB0AE4A42:
		case 0x75CD3B70:
		case 0x10077806:
		case 0x6F6E2AEA:
		case 0xEBECC7F6:
		case 0xABCC04E3:
		case 0x24D87C9E:
		case 0x3A732240:
		case 0x1A108B80:
		case 0xF7E7A848:
		case 0xC88FBB63:
		case 0xAB4EA4F8:
		case 0x98AE71E5:
		case 0x8F2EC53A:
		case 0xA3DDECA8:
		case 0x798D498F:
		case 0x17FDC07D:
		case 0xBBD76B5A:
		case 0x6405F5A6:
		case 0x31F23149:
		case 0xA4A86838:
		case 0x6C36F5BD:
			if (iParam1 > 0x00000000 || Global_40001.f_6BC0)
			{
				func_503(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			}
			break;
		
		case 0xFE249573:
		case 0xC2C5E339:
		case 0xACA75AAE:
		case 0x628502B3:
		case 0xFC8D0020:
		case 0xB77DD8B4:
		case 0xFD389995:
		case 0xEAFF75BD:
		case 0xC4F96E65:
		case 0x2195C3D1:
		case 0x676706D3:
		case 0x381AE70B:
		case 0xB94DDB9B:
		case 0x89AD02CE:
		case 0xBCD304B8:
		case 0xF97DB87A:
		case 0x129A5B6E:
		case 0x762D6BF6:
		case 0xD89979EE:
		case 0x4D8C639E:
		case 0xA174F633:
		case 0x176D9D54:
		case 0x016B1CDE:
		case 0xBFCBE6B6:
		case 0x6A22D039:
		case 0x862FB02E:
		case 0x8D682613:
		case 0x4CBAC3AA:
		case 0x29358006:
		case 0x5841CC24:
		case 0x5A26EAEF:
		case 0x2183C4D7:
		case 0xF6C6F8D3:
		case 0xAEC77375:
		case 0x267CBC1B:
		case 0x2DC5587F:
		case 0x8A91E076:
		case 0x2AD8ED30:
		case 0x8B70731D:
		case 0x3530C574:
		case 0xAAF2EA7A:
		case 0x506A6AF5:
		case 0x60988977:
		case 0x74EC47CE:
		case 0x0C92ECEF:
		case 0xFC71898E:
		case 0x67878154:
		case 0xA87819A3:
		case 0x06A679FE:
		case 0x5AEF7C87:
		case 0x39B3A1A7:
		case 0x5E0B0A1C:
		case 0xC84D30CC:
		case 0xB8D124BE:
		case 0xF353DF93:
		case 0xCF63BF45:
		case 0x3E7AA93E:
		case 0x21ECDA63:
		case 0xCCFA5F2D:
		case 0x328CD5AA:
		case 0xFD2A7DE7:
		case 0xEE884170:
		case 0x1B9AFE05:
		case 0x5C66709A:
		case 0xF9F62A7C:
		case 0xD8630BC3:
		case 0x23C04B23:
		case 0xEC745CB2:
		case 0x20D60B56:
		case 0x31D3FC9B:
		case 0x50503398:
		case 0x3EBB7442:
		case 0x8107BB89:
		case 0xB6D37A76:
		case 0x6F225978:
		case 0x0CD9EBA6:
		case 0xCBC91B24:
		case 0xD4E9820B:
		case 0x53E15D9D:
		case 0xA1DC5A42:
		case 0xFE5D3D39:
		case 0x46521174:
		case 0x370A42A5:
		case 0xED97AFC1:
		case 0x23F59C7C:
		case 0xFF3F6FB2:
		case 0xED74CC1D:
		case 0x33E1D8F6:
		case 0xC5ED889C:
		case 0xFFC0D962:
		case 0xB99C11F6:
		case 0x8DACDD38:
		case 0x32537662:
		case 0x7353182D:
		case 0x6E63A5AC:
		case 0x7D1FD84C:
		case 0x7462F9E7:
		case 0xBA16F44B:
		case 0x87DF725B:
		case 0xA2228687:
		case 0xC6B7C57F:
		case 0x43ADDE78:
		case 0x4B6A869C:
		case 0xDA2AD714:
		case 0x29849CDA:
		case 0x180D054D:
		case 0xCB511DC2:
		case 0xC0925945:
		case 0xAD5032C1:
		case 0xD54402B0:
		case 0x43D5DFD2:
		case 0xDE8FA2AB:
			func_503(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
	switch (iParam0)
	{
		case 0xB001B7EB:
		case 0x9B0E293D:
		case 0x6F581424:
		case 0xD670D38D:
		case 0xB2C78A3D:
		case 0x367BBE86:
		case 0x178D16AE:
		case 0xEC365EEC:
		case 0x63A19A7F:
			if (iParam1 > 0x00000000 || Global_40001.f_6BC0)
			{
				func_503(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			}
			break;
		
		case 0x49F3549B:
		case 0x4A05F619:
		case 0xBE60A029:
		case 0xE285893D:
		case 0x314FB8B0:
		case 0x9145F938:
		case 0x653BCC2D:
		case 0x3F0A835A:
		case 0x6BEA24A6:
		case 0x1AE83BEC:
		case 0x3126BC47:
		case 0x4ABE30A4:
		case 0xA20EEA82:
		case 0x59E889DD:
		case 0x552534EE:
		case 0x8D9EE291:
		case 0x4B318D68:
		case 0x465B7057:
		case 0x545237BE:
		case 0x0F9590A2:
		case 0x87246378:
		case 0x87B8E853:
		case 0x6374FB50:
		case 0x86DA0F67:
		case 0xB703ED29:
		case 0xECF7C43F:
		case 0xE4315BE0:
		case 0x72CBE556:
		case 0x234B8864:
		case 0x7954FD0F:
		case 0x5D7FD908:
		case 0x48B92E52:
		case 0x7A3568F7:
		case 0x235376A5:
		case 0x69D9B7DA:
		case 0xCDCF2380:
			func_503(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_503(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_514())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_18()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 0x00000001;
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (iParam3 == 0x3FA29128 || iParam3 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	bVar3 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000005)
	{
		if (Global_411012[iVar2 /*85*/].f_42.f_2 == 0x00000000)
		{
			bVar3 = 0x00000001;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0x00000000;
	}
	*uParam0 = 0x00000005;
	iVar4 = 0x7FFFFFFF;
	if ((bVar0 || iVar1) || unk_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_510(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != 0xFFFFFFFF)
				{
					Global_411012[*uParam0 /*85*/].f_42.f_8 = 0x00000001;
					Global_411012[*uParam0 /*85*/].f_42.f_C = 0x00000001;
				}
			}
			Global_411249 = 0x00000001;
			return 0x00000001;
		}
	}
	else
	{
		if (iParam7 & 0x00000002 != 0x00000000)
		{
			Global_411257 = 0x00000001;
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 0x00000001;
			Global_41125B = iParam5;
		}
		if (iParam7 & 0x00000008 != 0x00000000)
		{
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 0x00000001;
			Global_41125B = iParam5;
		}
		bVar5 = 0x00000000;
		if (bVar5)
		{
			func_509(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_504(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_504(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_505(iParam0);
	}
}

void func_505(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_514())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_508(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_411012[iParam0 /*85*/].f_42);
		}
		func_506(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_506(var uParam0)
{
	uParam0->f_42 = 0x00000000;
	uParam0->f_42 = 0x7FFFFFFF;
	uParam0->f_42.f_1 = 0x00000000;
	uParam0->f_42.f_2 = 0x00000000;
	uParam0->f_42.f_3 = 0xA10AED30;
	uParam0->f_42.f_4 = 0x83B4A55B;
	uParam0->f_42.f_5 = 0x00000000;
	uParam0->f_42.f_6 = 0x492B4A93;
	uParam0->f_42.f_7 = 0xBABFD2A5;
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_D = 0x00000000;
	uParam0->f_2 = 0x00000000;
	func_507(&(uParam0->f_E));
	func_507(&(uParam0->f_E.f_D));
	StringCopy(&(uParam0->f_E.f_1A), "", 32);
	StringCopy(&(uParam0->f_E.f_22), "", 24);
	StringCopy(&(uParam0->f_E.f_28), "", 16);
	StringCopy(&(uParam0->f_E.f_2C), "", 32);
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_42.f_8 = 0x00000000;
	uParam0->f_42.f_9 = 0x00000000;
	uParam0->f_42.f_A = 0x00000000;
	uParam0->f_42.f_B = 0x00000000;
	uParam0->f_42.f_D = 0x00000000;
	uParam0->f_42.f_C = 0x00000000;
	uParam0->f_42.f_E = 0x00000000;
	uParam0->f_42.f_F = 0x00000000;
	uParam0->f_42.f_10 = 0x00000000;
	uParam0->f_42.f_12 = 0x00000000;
}

void func_507(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_9 = 0x00000000;
	uParam0->f_A = 0x00000000;
	uParam0->f_B = 0x00000000;
	uParam0->f_C = 0x00000000;
}

int func_508(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_509(int iParam0, var uParam1)
{
	Global_25952B = uParam1;
	Global_25952A = iParam0;
}

int func_510(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_514())
			{
				iParam0 = iVar0 + 900;
			}
			Global_411012[iVar0 /*85*/].f_42.f_2 = 0x00000001;
			Global_411012[iVar0 /*85*/].f_42.f_1 = uParam5;
			Global_411012[iVar0 /*85*/].f_42.f_3 = iParam1;
			Global_411012[iVar0 /*85*/].f_42.f_4 = uParam2;
			Global_411012[iVar0 /*85*/].f_42.f_7 = uParam3;
			Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42 = iParam0;
			Global_411012[iVar0 /*85*/].f_42.f_6 = iParam4;
			Global_411012[iVar0 /*85*/].f_42.f_B = uParam8;
			Global_411012[iVar0 /*85*/].f_42.f_A = uParam7;
			Global_411012[iVar0 /*85*/].f_42.f_D = iParam9;
			Global_411012[iVar0 /*85*/].f_42.f_C = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
			Global_411012[iVar0 /*85*/].f_42.f_12 = 0x00000000;
			Global_411249 = 0x00000000;
			if (bParam6)
			{
				Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000001;
			}
			if (iParam1 == 0xBC537E0D && iParam10)
			{
				func_511(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_511(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0x00000000)
	{
		return;
	}
	vVar0.f_2 = 0x7FFFFFFF;
	vVar0.x = 0x110AC69F;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_42 };
	vVar0.f_2.f_21 = iParam19;
	iVar1 = func_513(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_512();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_512()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_513(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_514()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

void func_515(int iParam0, int iParam1)
{
	if (iParam1 > 0x00000000)
	{
		if (Global_40001.f_5BC1 == 0x00000000 || Global_40001.f_5BC1 == 0x00000001)
		{
			if (!unk_0x0EFF6B4415DAF4A1() || Global_40001.f_5BC1 == 0x00000001)
			{
				Global_26B66F.f_11B = iParam0;
				if (iParam1 > Global_40001.f_19B8)
				{
					iParam1 = Global_40001.f_19B8;
				}
				Global_26B66F.f_11C = iParam1;
				Global_26B66F.f_11D = 0x00000000;
			}
		}
	}
}

int func_516(bool bParam0)
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000012))
	{
		return 0x00000000;
	}
	if (!bParam0)
	{
		if (func_742())
		{
			return Global_40001.f_2C33;
		}
		else
		{
			return Global_40001.f_2BF6;
		}
	}
	func_443();
	if (func_742())
	{
		iVar0 = (Global_40001.f_2C33 * iLocal_564);
	}
	else
	{
		iVar0 = (Global_40001.f_2BF6 * iLocal_564);
	}
	return iVar0;
}

int func_517()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iLocal_541]))
	{
		if (func_109(Local_80.f_7[iLocal_541]))
		{
			bVar0 = 0x00000001;
		}
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000004)
	{
		if (Local_80.f_100[iVar1] > 0x00000000)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_80.f_100[iLocal_541];
	if (!bVar0)
	{
		if (Local_80.f_252[0x00000000 /*4*/] != iLocal_541)
		{
			return 0x00000000;
		}
		else if (iVar3 > 0x00000000)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	else if (Local_80.f_252[0x00000000 /*4*/] == iLocal_541)
	{
		return 0x00000001;
	}
	else
	{
		iVar4 = Local_80.f_100[Local_80.f_252[0x00000000 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_80.f_FF - iVar2);
		if (iVar5 > iVar6)
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

int func_518()
{
	int iVar0;
	var uVar1;
	
	func_680(&iVar0, &uVar1);
	if (iLocal_541 > 0xFFFFFFFF)
	{
		if (func_109(Local_80.f_7[iLocal_541]))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_519()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_80.f_F1 == 0x00000001)
	{
		if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
		{
			if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_A == 0xFFFFFFFF)
			{
				if (!func_22(&uLocal_553) || (func_22(&uLocal_553) && func_19(&uLocal_553, 0x00001388, 0x00000000)))
				{
					if (Local_80.f_1B == joaat("savage") || Local_80.f_1B == joaat("buzzard"))
					{
						iVar1 = iLocal_541;
						if (iVar1 > 0xFFFFFFFF)
						{
							if (func_109(Local_80.f_7[iVar1]))
							{
								iVar0 = unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_80.f_7[iVar1]), 0xFFFFFFFF, 0x00000000);
								if (iVar0 == 0x00000000)
								{
									Local_83[unk_0x57270EE11514DC67() /*18*/].f_A = iVar1;
								}
								else if (unk_0xEB6A8945D1AC98A1(iVar0))
								{
									Local_83[unk_0x57270EE11514DC67() /*18*/].f_A = iVar1;
								}
								else if (!unk_0x34BFC6F0CB887BC2(iVar0))
								{
									Local_83[unk_0x57270EE11514DC67() /*18*/].f_A = iVar1;
								}
							}
						}
					}
					else if (Local_80.f_1B == joaat("valkyrie"))
					{
						iVar1 = iLocal_541;
						if (iVar1 > 0xFFFFFFFF)
						{
							if (func_109(Local_80.f_7[iVar1]))
							{
								iVar0 = unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_80.f_7[iVar1]), 0xFFFFFFFF, 0x00000000);
								if (iVar0 == 0x00000000)
								{
									Local_83[unk_0x57270EE11514DC67() /*18*/].f_A = iVar1;
								}
								else if (unk_0xEB6A8945D1AC98A1(iVar0))
								{
									Local_83[unk_0x57270EE11514DC67() /*18*/].f_A = iVar1;
								}
								else if (!unk_0x34BFC6F0CB887BC2(iVar0))
								{
									Local_83[unk_0x57270EE11514DC67() /*18*/].f_A = iVar1;
								}
								if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_A == 0xFFFFFFFF)
								{
									iVar4 = unk_0x7087E053058E9F6C(joaat("valkyrie"));
									iVar2 = 0x00000000;
									while (iVar2 < iVar4)
									{
										iVar0 = unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_80.f_7[iVar1]), iVar2, 0x00000000);
										if (iVar0 != 0x00000000)
										{
											if (!unk_0xEB6A8945D1AC98A1(iVar0))
											{
												if (unk_0x34BFC6F0CB887BC2(iVar0))
												{
													iVar3++;
												}
											}
										}
										iVar2++;
									}
									if (iVar3 == 0x00000000)
									{
										Local_83[unk_0x57270EE11514DC67() /*18*/].f_A = iVar1;
									}
								}
							}
						}
					}
					func_106(&uLocal_553);
					func_20(&uLocal_553, 0x00000000, 0x00000000);
				}
			}
		}
	}
	iVar2 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000004)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_80.f_13F, iVar2))
		{
			if (unk_0xE9F78D191AD5EDBA(Local_80.f_7[iVar2]))
			{
				if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_80.f_7[iVar2]), 0x00000000))
				{
					if ((func_432() - func_126(&(Local_80.f_15D[iVar2 /*2*/]), 0x00000000, 0x00000000)) >= 0x00000000)
					{
						if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
						{
							if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[iVar2]), 0x00000000))
							{
								if (!func_200())
								{
									func_431();
									func_171((func_432() - func_126(&(Local_80.f_15D[iVar2 /*2*/]), 0x00000000, 0x00000000)), "UW_DEST", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
								}
							}
						}
					}
					else
					{
						if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
						{
							if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[iVar2]), 0x00000000))
							{
								if (!func_200())
								{
									func_431();
									func_171(0x00000000, "UW_DEST", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
								}
							}
						}
						if (unk_0x526BC32A660C89E6(Local_80.f_7[iVar2]))
						{
							unk_0xE121AE1BBF90E186(unk_0xB177666FAB6F4417(Local_80.f_7[iVar2]), 0x00000000);
							unk_0x6EEAA5C21760E9DB(unk_0xB177666FAB6F4417(Local_80.f_7[iVar2]), 0x00000001);
							if (!unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_7[iVar2]))))
							{
								unk_0xCCB891029A74A633(unk_0xB177666FAB6F4417(Local_80.f_7[iVar2]), 0x00000001, 0x00000000, 0xFFFFFFFF);
								func_25(&(Local_80.f_7[iVar2]));
							}
							else
							{
								unk_0xED2FE8C1F8C4F31C(unk_0xB177666FAB6F4417(Local_80.f_7[iVar2]), 0x00000001, 0x00000000, 0x00000000);
								func_25(&(Local_80.f_7[iVar2]));
							}
						}
					}
				}
			}
			if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_A == iVar2)
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000006))
				{
					if (func_422(0x00000000, 0x00000001, 0x00000001, 0x00000001))
					{
						if (func_742())
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000013))
							{
								func_421("UW_NOPILC", 0x00007530);
							}
							else
							{
								func_421("UW_NOGUN", 0x00007530);
							}
						}
						else
						{
							func_421("UW_NOPIL", 0x00007530);
						}
						func_420(0x00000001);
						unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000006);
					}
					else if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000013))
					{
						if (unk_0xFEBC1E4EC9E001F0())
						{
							unk_0xA37A90C62806D848(0x00000001);
						}
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					iVar5 = Local_83[unk_0x57270EE11514DC67() /*18*/].f_A;
					if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar5]))
					{
						if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[iVar5])))
						{
							if (!func_742())
							{
								if (!func_268("UW_EXPL"))
								{
									func_262("UW_EXPL", 0x00000000);
								}
							}
							else if (!func_268("UW_EXPLC"))
							{
								func_262("UW_EXPLC", 0x00000000);
							}
						}
						else if (func_268("UW_EXPL") || func_268("UW_EXPLC"))
						{
							func_9();
						}
					}
					else if (func_268("UW_EXPL") || func_268("UW_EXPLC"))
					{
						func_9();
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_520(int iParam0)
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == iParam0;
}

void func_521()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
	{
		if (Local_80.f_1B == joaat("rhino"))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x0000000B))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x0000000A))
				{
					if (!func_22(&uLocal_549) || (func_22(&uLocal_549) && func_19(&uLocal_549, 0x00001388, 0x00000000)))
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (func_69(vLocal_565, 0f, 0f, 0f, 0x00000000))
							{
								vLocal_565 = { Local_80.f_1E[0x00000000 /*3*/] };
							}
							fVar0 = func_523(unk_0x16F2683693E537C9(), vLocal_565, 0x00000001);
							if (fVar0 > 750f)
							{
								unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x0000000A);
							}
						}
						func_106(&uLocal_549);
						func_20(&uLocal_549, 0x00000000, 0x00000000);
					}
				}
				else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (!func_268("UW_OOB"))
					{
						func_262("UW_OOB", 0x00000000);
					}
					if (!func_22(&uLocal_551))
					{
						iVar2 = unk_0xD68EA767274B7444();
						unk_0xCEAA091B490F8407(iVar2, "Explosion_Countdown", unk_0xB177666FAB6F4417(Local_80.f_7[func_522()]), "GTAO_FM_Events_Soundset", 0x00000000, 0x00000000);
						unk_0x6F6BA3FE885E6C91(iVar2, "Time", 30f);
						func_20(&uLocal_551, 0x00000000, 0x00000000);
					}
					if (func_22(&uLocal_551))
					{
						if ((func_432() - func_126(&uLocal_551, 0x00000000, 0x00000000)) >= 0x00000000)
						{
							func_431();
							func_171((func_432() - func_126(&uLocal_551, 0x00000000, 0x00000000)), "UW_DEST", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
						}
						else
						{
							func_431();
							func_171(0x00000000, "UW_DEST", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
							func_9();
							unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x0000000B);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x0000000B))
					{
						fVar0 = func_523(unk_0x16F2683693E537C9(), Local_80.f_1E[0x00000000 /*3*/], 0x00000001);
						if (fVar0 < 750f)
						{
							unk_0x0674E58A79778E99(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x0000000A);
							func_106(&uLocal_551);
							unk_0x55D0A2DB35045A35(iVar2);
						}
					}
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x0000000B))
	{
		func_682(0x00000001);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			iVar1 = func_522();
			if (iVar1 > 0xFFFFFFFF)
			{
				if (func_109(Local_80.f_7[iVar1]))
				{
					if (unk_0x526BC32A660C89E6(Local_80.f_7[iVar1]))
					{
						unk_0xE121AE1BBF90E186(unk_0xB177666FAB6F4417(Local_80.f_7[iVar1]), 0x00000000);
						unk_0x6EEAA5C21760E9DB(unk_0xB177666FAB6F4417(Local_80.f_7[iVar1]), 0x00000001);
						unk_0xCCB891029A74A633(unk_0xB177666FAB6F4417(Local_80.f_7[iVar1]), 0x00000001, 0x00000000, 0xFFFFFFFF);
						func_25(&(Local_80.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_522()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000004)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar1]))
			{
				if (func_109(Local_80.f_7[iVar1]))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[iVar1])))
						{
							iVar0 = iVar1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_523(int iParam0, vector3 vParam1, int iParam2)
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
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, iParam2);
}

void func_524()
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0xFFFFFFFF;
	if (Local_80.f_1B == joaat("hydra") || Local_80.f_1B == joaat("rhino"))
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000018))
	{
		if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 == 0x00000001)
		{
			func_680(&iVar1, &uVar0);
			if (func_527(iVar1))
			{
				if (iVar1 > 0xFFFFFFFF)
				{
					if (Local_80.f_16[iVar1] != func_5())
					{
						fLocal_90 = unk_0x1259684A0206176B();
						unk_0x98805B30C708287F(-1f);
						func_526(0x00000001, iVar1);
						unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000018);
						func_525(0x00000001);
					}
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000018);
				unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000019);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000019))
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000018))
		{
			if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 > 0x00000001)
			{
				unk_0x98805B30C708287F(fLocal_90);
				func_680(&iVar1, &uVar0);
				if (iVar1 > 0xFFFFFFFF)
				{
					func_526(0x00000000, iVar1);
					unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000019);
					func_525(0x00000000);
				}
			}
		}
	}
}

void func_525(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x0000000F);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000004);
	}
}

void func_526(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			if (func_844(iVar1, 0x00000000, 0x00000001) && iVar1 != unk_0xD803B885F5E47A62())
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_83[iVar0 /*18*/].f_1, iParam1) || !bParam0)
				{
					unk_0x97EEB5EB651FEBAC(iVar1, 0x00000001);
				}
				else if (bParam0)
				{
					unk_0x97EEB5EB651FEBAC(iVar1, 0x00000000);
				}
			}
		}
		iVar0++;
	}
}

bool func_527(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (!bVar0)
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
			{
				if (iVar1 != unk_0x57270EE11514DC67())
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_83[iVar1 /*18*/].f_1, iParam0))
					{
						bVar0 = 0x00000001;
					}
				}
			}
		}
		iVar1++;
	}
	return bVar0;
}

void func_528()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x09BE1E6DF7B80B43())
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x0000000F))
	{
		if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 == 0x00000002)
		{
			if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 == 0x00000000)
			{
				if (Local_80.f_16[0x00000000] != func_5())
				{
					if (func_422(0x00000000, 0x00000000, 0x00000001, 0x00000001))
					{
						if (!func_742())
						{
							if (Local_80.f_1B == joaat("rhino") || Local_80.f_1B == joaat("hydra"))
							{
								if (!func_742())
								{
									func_539("UW_START1P", unk_0x6E524813889AECF8(Local_80.f_16[0x00000000]), 0x00000001, 0x00007530);
								}
								else
								{
									func_539("UW_START1PC", unk_0x6E524813889AECF8(Local_80.f_16[0x00000000]), 0x00000001, 0x00007530);
								}
								func_420(0x00000001);
							}
							else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_F, 0x00000000))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x0000000E))
								{
									if (!func_742())
									{
										func_421("UW_STARTM", 0x00007530);
									}
									else
									{
										func_421("UW_STARTMC", 0x00007530);
									}
									func_420(0x00000001);
								}
							}
							else
							{
								func_539("UW_START1P", unk_0x6E524813889AECF8(Local_80.f_16[0x00000000]), 0x00000001, 0x00007530);
								func_420(0x00000001);
							}
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x0000000E))
						{
							if (!func_742())
							{
								func_421("UW_STARTM", 0x00007530);
							}
							else
							{
								func_421("UW_STARTMC", 0x00007530);
							}
							func_420(0x00000001);
						}
						unk_0x5D96D8530B3D0904(&iLocal_84, 0x0000000F);
					}
				}
			}
		}
	}
	if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 == 0x00000002)
	{
		if (Local_80.f_F1 == 0x00000001)
		{
			if (Local_80.f_1B != joaat("hydra") && Local_80.f_1B != joaat("rhino"))
			{
				if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
				{
					if (iLocal_541 >= 0x00000000)
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000A))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000009))
							{
								if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iLocal_541]))
								{
									if (func_109(Local_80.f_7[iLocal_541]))
									{
										unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000009);
									}
								}
							}
							else if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iLocal_541]))
							{
								if (!func_109(Local_80.f_7[iLocal_541]))
								{
									func_538("UW_TEAMV");
									unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000A);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0x00000000;
	if (!func_742())
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000004)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000006))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, (0x00000010 + iVar1)))
				{
					if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 >= 0x00000002)
					{
						if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 == 0x00000000)
						{
							if ((unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000000) && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000001)) && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000002))
							{
								if (unk_0xE9F78D191AD5EDBA(Local_80.f_7[0x00000000]))
								{
									if (func_109(Local_80.f_7[0x00000000]))
									{
										if (unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_80.f_7[0x00000000]), 0xFFFFFFFF, 0x00000000) != 0x00000000)
										{
											iVar0 = func_537(iVar1, 0x00000000);
											if (iVar0 != func_5())
											{
												func_529("UW_COMP", iVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
											}
											unk_0x5D96D8530B3D0904(&iLocal_84, (0x00000010 + iVar1));
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
}

int func_529(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0xFFFFFFFF;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(iParam2);
		unk_0xD06AC7C87A34A6AD(func_535(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
		}
		else
		{
			Global_265942 = { func_66(iParam1) };
			if (unk_0xD9DA83C40D038174(&Global_2658FC, 0x00000023, &Global_265942))
			{
				iVar2 = 0x00000000;
				if (unk_0x7F8A39872A07D2CE(&(Global_2658FC.f_16), "Leader") && Global_2658FC.f_1E == 0x00000000)
				{
					iVar2 = 0x00000001;
				}
				if (Global_2658FC.f_15 > 0x00000000)
				{
					iVar3 = 0x00000000;
				}
				else
				{
					iVar3 = 0x00000001;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_534(&Var1) };
					}
					iVar0 = unk_0x0D020422A92A2236(iVar3, unk_0x95A6C443DD6B08B2(&Global_2658FC, 0x00000023), &(Global_2658FC.f_11), Global_2658FC.f_1E, iVar2, 0x00000000, Global_2658FC, &Var1, Global_140CF2, Global_140CF3, Global_140CF4);
				}
				else
				{
					iVar0 = unk_0xDCEBC63DB246F9AE(iVar3, unk_0x95A6C443DD6B08B2(&Global_2658FC, 0x00000023), &(Global_2658FC.f_11), Global_2658FC.f_1E, iVar2, 0x00000000, Global_2658FC, Global_140CF2, Global_140CF3, Global_140CF4);
				}
			}
			else
			{
				iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
			}
		}
		func_530(0x0000000E, sParam0, 0x00000001, &Var1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	return iVar0;
}

void func_530(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_533() || !unk_0xA14BB9332558B949()) || !func_16(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return;
	}
	iVar0 = func_531(iParam2);
	if (iVar0 >= 0x00000000 && iVar0 < 0x00000005)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = iParam0;
		Global_197EBE.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000000] = iParam4;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000001] = iParam5;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000002] = iParam6;
		Global_197EBE.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_197EBE.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000000 /*6*/]), sParam9, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000001 /*6*/]), sParam10, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000002 /*6*/]), sParam11, 24);
	}
}

int func_531(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (Global_197EBE - 0x00000001))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_532(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_197EBE++;
	if (Global_197EBE > 0x00000005)
	{
		Global_197EBE = 0x00000005;
		return Global_197EBE;
	}
	return (Global_197EBE - 0x00000001);
}

void func_532(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000004;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 0x00000001) /*53*/] };
		iVar0 = (iVar0 + 0xFFFFFFFF);
	}
}

bool func_533()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

struct<16> func_534(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_535(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_536(&cVar0);
}

var func_536(char[4] cParam0)
{
	return cParam0;
}

int func_537(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar2 = (iParam0 - 0x00000001);
	if (unk_0xE9F78D191AD5EDBA(Local_80.f_7[iParam1]))
	{
		if (func_109(Local_80.f_7[iParam1]))
		{
			iVar1 = unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_80.f_7[iParam1]), iVar2, 0x00000000);
			if (iVar1 != 0x00000000)
			{
				if (unk_0x34BFC6F0CB887BC2(iVar1))
				{
					iVar0 = unk_0x83FACCC48B68F9D1(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_538(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	unk_0x1E64CE678ED5F61E(sParam0);
	iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
	func_530(0x00000000, sParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	return iVar0;
}

void func_539(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0x00000000)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam3);
}

void func_540()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000009))
	{
		if (Local_80.f_F1 == 0x00000001)
		{
			if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
			{
				if (unk_0xC92DB9682A650680("KILL_LIST_START_MUSIC"))
				{
					unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000009);
				}
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x0000000A))
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000009))
		{
			if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 > 0x00000001)
			{
				if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
				{
					if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (unk_0xC92DB9682A650680("MP_MC_FAIL"))
						{
							unk_0x5D96D8530B3D0904(&iLocal_84, 0x0000000A);
						}
					}
					else if (unk_0xC92DB9682A650680("KILL_LIST_STOP_MUSIC"))
					{
						unk_0x5D96D8530B3D0904(&iLocal_84, 0x0000000A);
						func_541();
					}
				}
			}
		}
	}
}

void func_541()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000001))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 0x00000001);
	}
	if (Global_26B66F.f_1361 > 0x00000000)
	{
		unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_KILL");
		unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
		unk_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0xBEF52C1D400C0A44(0x00000001);
		Global_26B66F.f_1361 = 0x00000000;
		unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000000);
		unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000000);
		if (!unk_0x7F8A39872A07D2CE(unk_0xBB0808A181D4745C(), "am_pi_menu"))
		{
			if (Global_26B66F.f_136B > 0xFFFFFFFF)
			{
				unk_0x43A06902454A1172(Global_26B66F.f_136B);
				Global_26B66F.f_136B = 0xFFFFFFFF;
			}
		}
	}
}

void func_542()
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3[2];
	int iVar4;
	int iVar5;
	int iVar6[4];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	bool bVar25;
	int iVar26;
	char* sVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	
	iVar8 = 0x00000001;
	if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x00000008))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x0000001A))
			{
				if ((((unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000000) && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000001)) && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000002)) || (func_742() && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000006))) || (func_742() && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000F)))
				{
					if (!func_22(&uLocal_560))
					{
						func_20(&uLocal_560, 0x00000000, 0x00000000);
					}
					if (func_19(&uLocal_560, 0x000003E8, 0x00000000))
					{
						if (func_268("UW_ATTK"))
						{
							func_9();
						}
						func_613();
						if (func_612())
						{
							iVar13 = func_516(0x00000001);
							if (iVar13 > 0x00000000)
							{
								Local_81.f_6 = (Local_81.f_6 + iVar13);
								if ((!Global_40001.f_2CEE && !unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000008)) || (!Global_40001.f_2CEF && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000008)))
								{
									if (Local_81.f_6 > 0x00000000)
									{
										func_515(0x00000013, Local_81.f_6);
									}
								}
								Global_2594A0 = iVar13;
								if (func_514())
								{
									func_502(0x0C92ECEF, iVar13, &uVar15, 0x00000000, 0x00000001, 0x00000000);
								}
								else
								{
									unk_0x9AC21D04D5646532(iVar13, "AM_KILL_LIST", &uVar16);
								}
							}
							iVar11 = func_501(0x00000001);
							func_500();
							Local_81.f_7 = (Local_81.f_7 + iVar11);
							func_453(0x00000000, unk_0x16F2683693E537C9(), "", 0x9E79F1A6, 0x092A9843, iVar11, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
							Local_81.f_5 = 0x00000002;
							func_630(0x00000041, "UW_BIGF", "UW_DRAWZ", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
						}
						else if (!func_742())
						{
							iVar13 = func_625(0x00000000);
							func_600(&iVar13, 0x00000001);
							iVar13 = (iVar13 + func_516(0x00000001));
							if (iVar13 > 0x00000000)
							{
								Local_81.f_6 = (Local_81.f_6 + iVar13);
								if (!Global_40001.f_2CEE)
								{
									if (Local_81.f_6 > 0x00000000)
									{
										func_515(0x00000013, Local_81.f_6);
									}
								}
								Global_2594A0 = iVar13;
								if (func_514())
								{
									func_502(0x0C92ECEF, iVar13, &uVar17, 0x00000000, 0x00000001, 0x00000000);
								}
								else
								{
									unk_0x9AC21D04D5646532(iVar13, "AM_KILL_LIST", &uVar18);
								}
							}
							iVar11 = func_501(0x00000001);
							iVar11 = (iVar11 + func_599());
							Local_81.f_7 = (Local_81.f_7 + iVar11);
							func_500();
							func_453(0x00000000, unk_0x16F2683693E537C9(), "", 0x9E79F1A6, 0x092A9843, iVar11, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
							Local_81.f_5 = 0x00000001;
							func_629(0x00000040, "", "UW_BIG_BMEXP", "UW_BIGM", 0x00003A98, 0xFFFFFFFF, 0xBF800000, 0x00000000, 0x00000001, 0x00000002, 0x00000000);
						}
						else if (func_598())
						{
							if (!func_597(0x00000001))
							{
								if (!func_268("UW_EXPL") && !func_268("UW_EXPLC"))
								{
									func_9();
								}
								iVar13 = func_625(0x00000000);
								func_600(&iVar13, 0x00000001);
								iVar13 = (iVar13 + func_516(0x00000001));
								Local_81.f_6 = (Local_81.f_6 + iVar13);
								if (!Global_40001.f_2CEF)
								{
									if (Local_81.f_6 > 0x00000000)
									{
										func_515(0x00000013, Local_81.f_6);
									}
								}
								Global_2594A0 = iVar13;
								if (iVar13 > 0x00000000)
								{
									if (func_514())
									{
										func_502(0x0C92ECEF, iVar13, &uVar19, 0x00000000, 0x00000001, 0x00000000);
									}
									else
									{
										unk_0x9AC21D04D5646532(iVar13, "AM_KILL_LIST", &uVar20);
									}
								}
								if (Local_80.f_1B == joaat("rhino") || Local_80.f_1B == joaat("hydra"))
								{
									func_629(0x00000040, "", "UW_WON1P", "UW_BIGM", 0x00003A98, 0xFFFFFFFF, 0xBF800000, 0x00000000, 0x00000001, 0x00000002, 0x00000000);
								}
								else
								{
									func_629(0x00000040, "", "UW_WON", "UW_BIGM", 0x00003A98, 0xFFFFFFFF, 0xBF800000, 0x00000000, 0x00000001, 0x00000002, 0x00000000);
								}
								Local_81.f_5 = 0x00000001;
								iVar11 = func_599();
								iVar11 = (iVar11 + func_501(0x00000001));
								Local_81.f_7 = (Local_81.f_7 + iVar11);
								func_500();
								func_453(0x00000000, unk_0x16F2683693E537C9(), "", 0xCBCDA251, 0x1B5DC75D, iVar11, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								iVar13 = func_516(0x00000001);
								iVar11 = func_501(0x00000001);
								iVar8 = 0x00000000;
								iVar10 = 0x00000000;
								while (iVar10 <= 0x00000003)
								{
									if (Local_80.f_1D1[iVar10 /*4*/].f_1 == Local_80.f_1D1[0x00000000 /*4*/].f_1)
									{
										iVar8++;
										iVar6[iVar10] = 0xFFFFFFFF;
										if (Local_80.f_1B == joaat("hydra") || Local_80.f_1B == joaat("rhino"))
										{
											if (Local_80.f_1D1[iVar10 /*4*/].f_2 > 0xFFFFFFFF)
											{
												if (Local_80.f_1D1[iVar10 /*4*/].f_2 != unk_0xD803B885F5E47A62())
												{
													if (unk_0x40B8C182D63932FC(unk_0x117658E336116132(Local_80.f_1D1[iVar10 /*4*/].f_2)))
													{
														iVar3[iVar4] = unk_0x117658E336116132(Local_80.f_1D1[iVar10 /*4*/].f_2);
														iVar4++;
													}
												}
											}
										}
										else if (iLocal_541 > 0xFFFFFFFF)
										{
											if (iLocal_541 != Local_80.f_1D1[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_80.f_1D1[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_80.f_1B == joaat("hydra") || Local_80.f_1B == joaat("rhino"))
								{
									if (iVar8 > 0x00000002)
									{
										bVar9 = 0x00000001;
									}
									else if (iVar3[0x00000000] == func_5())
									{
										bVar9 = 0x00000001;
									}
									else
									{
										func_596(0x00000044, "UW_DRAWP", unk_0x6E524813889AECF8(iVar3[0x00000000]), 0x00000001, 0x00003A98, "UW_BIGO", 0x00000002);
									}
								}
								else if (iVar8 > 0x00000002)
								{
									bVar9 = 0x00000001;
								}
								else if (iVar6[0x00000000] == 0xFFFFFFFF)
								{
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0x00000000] + 1, 16);
									func_629(0x00000044, &Var0, "UW_DRAWP", "UW_BIGO", 0x00003A98, 0xFFFFFFFF, 0xBF800000, 0x00000000, 0x00000001, 0x00000002, 0x00000000);
								}
								if (bVar9)
								{
									if (!func_742())
									{
										func_630(0x00000044, "UW_BIGO", "UW_DRAW", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
									}
									else
									{
										func_630(0x00000044, "UW_BIGO", "UW_DRAWC", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
									}
								}
								iVar14 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_625(0x00000000)) / SYSTEM::TO_FLOAT(iVar8)));
								iVar12 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_599()) / SYSTEM::TO_FLOAT(iVar8)));
								func_600(&iVar14, 0x00000001);
								iVar13 = (iVar13 + iVar14);
								iVar11 = (iVar11 + iVar12);
								Local_81.f_6 = (Local_81.f_6 + iVar13);
								if (!Global_40001.f_2CEF)
								{
									if (Local_81.f_6 > 0x00000000)
									{
										func_515(0x00000013, Local_81.f_6);
									}
								}
								Global_2594A0 = iVar13;
								if (iVar13 > 0x00000000)
								{
									if (func_514())
									{
										func_502(0x0C92ECEF, iVar13, &uVar21, 0x00000000, 0x00000001, 0x00000000);
									}
									else
									{
										unk_0x9AC21D04D5646532(iVar13, "AM_KILL_LIST", &uVar22);
									}
								}
								Local_81.f_7 = (Local_81.f_7 + iVar11);
								func_500();
								func_453(0x00000000, unk_0x16F2683693E537C9(), "", 0xCBCDA251, 0x1B5DC75D, iVar11, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						else
						{
							func_594(0x00000001);
							iVar13 = func_516(0x00000001);
							iVar11 = func_501(0x00000001);
							Local_81.f_6 = (Local_81.f_6 + iVar13);
							if (!Global_40001.f_2CEF)
							{
								if (Local_81.f_6 > 0x00000000)
								{
									func_515(0x00000013, Local_81.f_6);
								}
							}
							Global_2594A0 = iVar13;
							if (iVar13 > 0x00000000)
							{
								if (func_514())
								{
									func_502(0x0C92ECEF, iVar13, &uVar23, 0x00000000, 0x00000001, 0x00000000);
								}
								else
								{
									unk_0x9AC21D04D5646532(iVar13, "AM_KILL_LIST", &uVar24);
								}
							}
							Local_81.f_7 = (Local_81.f_7 + iVar11);
							func_500();
							func_453(0x00000000, unk_0x16F2683693E537C9(), "", 0xCBCDA251, 0x1B5DC75D, iVar11, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
							if (!func_597(0x00000000))
							{
								iVar5 = Local_80.f_1D1[0x00000000 /*4*/];
								if (!func_268("UW_EXPL") && !func_268("UW_EXPLC"))
								{
									func_9();
								}
								if (Local_80.f_1B == joaat("hydra") || Local_80.f_1B == joaat("rhino"))
								{
									iVar2 = unk_0x117658E336116132(Local_80.f_1D1[0x00000000 /*4*/].f_2);
									if (func_310(iVar2, 0x00000001))
									{
										iVar26 = func_314(iVar2);
										if (iVar26 > 0xFFFFFFFF)
										{
											uVar28 = func_312(iVar26);
											sVar27 = func_588(iVar2);
											bVar25 = 0x00000001;
										}
									}
									if (iVar2 != func_5())
									{
										if (!bVar25)
										{
											if (!func_742())
											{
												func_596(0x00000041, "UW_FWONP", unk_0x6E524813889AECF8(iVar2), 0x00000006, 0x00003A98, "UW_BIGF", 0x00000002);
											}
											else
											{
												func_596(0x00000041, "UW_FWONPC", unk_0x6E524813889AECF8(iVar2), 0x00000006, 0x00003A98, "UW_BIGF", 0x00000002);
											}
										}
										else if (!func_742())
										{
											func_586(0x00000042, "PEN_OVR", "UW_FWONG", sVar27, uVar28, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000002, 0xFFFFFFFF);
										}
										else
										{
											func_586(0x00000042, "PEN_OVR", "UW_FWONGC", sVar27, uVar28, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000002, 0xFFFFFFFF);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar5 + 1, 16);
									if (!func_742())
									{
										func_629(0x00000041, &Var0, "UW_FWONT", "UW_BIGF", 0x00003A98, 0xFFFFFFFF, 0xBF800000, "", 0x00000006, 0x00000002, 0x00000000);
									}
									else
									{
										func_629(0x00000041, &Var0, "UW_FWONTC", "UW_BIGF", 0x00003A98, 0xFFFFFFFF, 0xBF800000, "", 0x00000006, 0x00000002, 0x00000000);
									}
								}
							}
							else
							{
								if (!func_268("UW_EXPL") && !func_268("UW_EXPLC"))
								{
									func_9();
								}
								iVar10 = 0x00000001;
								while (iVar10 <= 0x00000003)
								{
									if (Local_80.f_1D1[iVar10 /*4*/].f_1 == Local_80.f_1D1[0x00000000 /*4*/].f_1)
									{
										iVar8++;
										if (Local_80.f_1B == joaat("hydra") || Local_80.f_1B == joaat("rhino"))
										{
											if (Local_80.f_1D1[iVar10 /*4*/].f_2 > 0xFFFFFFFF)
											{
												if (unk_0x40B8C182D63932FC(unk_0x117658E336116132(Local_80.f_1D1[iVar10 /*4*/].f_2)))
												{
													iVar3[iVar4] = unk_0x117658E336116132(Local_80.f_1D1[iVar10 /*4*/].f_2);
													iVar4++;
												}
											}
										}
										else if (iLocal_541 > 0xFFFFFFFF)
										{
											if (iLocal_541 != Local_80.f_1D1[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_80.f_1D1[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_80.f_1B == joaat("hydra") || Local_80.f_1B == joaat("rhino"))
								{
									if (iVar8 == 0x00000002)
									{
										if (iVar3[0x00000000] != func_5() && unk_0x40B8C182D63932FC(iVar3[0x00000000]))
										{
											if (iVar3[0x00000001] != func_5() && unk_0x40B8C182D63932FC(iVar3[0x00000001]))
											{
												func_549(0x00000044, func_5(), func_5(), 0xFFFFFFFF, "UW_DRAW2P", "UW_BIGF", func_315(), 0x00003A98, func_315(), unk_0x6E524813889AECF8(iVar3[0x00000000]), unk_0x6E524813889AECF8(iVar3[0x00000001]), 0x00000000);
											}
											else
											{
												bVar9 = 0x00000001;
											}
										}
										else
										{
											bVar9 = 0x00000001;
										}
									}
									else
									{
										bVar9 = 0x00000001;
									}
								}
								else if (iVar8 == 0x00000002)
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0x00000000] + 1, 16);
									StringCopy(&Var1, "UW_TM", 16);
									StringIntConCat(&Var1, iVar6[0x00000001] + 1, 16);
									func_629(0x0000000B, &Var0, "UW_DRAW2P", "UW_BIGO", 0x00003A98, 0xFFFFFFFF, 0xBF800000, &Var1, 0x00000001, 0x00000002, 0x00000000);
									bVar9 = 0x00000001;
								}
								else
								{
									bVar9 = 0x00000001;
								}
								if (bVar9)
								{
									func_630(0x00000044, "UW_BIGO", "UW_DRAW", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
								}
							}
						}
						func_653(0x00000000);
						if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 < 0x00000002)
						{
							Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000002;
						}
						unk_0x5D96D8530B3D0904(&iLocal_84, 0x0000000D);
						unk_0x5D96D8530B3D0904(&iLocal_84, 0x0000001A);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000006) || (!func_742() && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000F)))
				{
					if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_A != 0xFFFFFFFF)
					{
						func_630(0x00000042, "UW_BIGO", "UW_ABAND", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
					}
					else
					{
						func_629(0x00000041, "", "UW_FAIL", "UW_BIGF", 0x00003A98, 0xFFFFFFFF, 0xBF800000, 0x00000000, 0x00000006, 0x00000002, 0x00000000);
					}
					func_653(0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_84, 0x0000001A);
					iVar13 = func_516(0x00000001);
					Local_81.f_6 = (Local_81.f_6 + iVar13);
					if (!Global_40001.f_2CEE)
					{
						if (Local_81.f_6 > 0x00000000)
						{
							func_515(0x00000013, Local_81.f_6);
						}
					}
					Global_2594A0 = iVar13;
					if (iVar13 > 0x00000000)
					{
						if (func_514())
						{
							func_502(0x0C92ECEF, iVar13, &uVar29, 0x00000000, 0x00000001, 0x00000000);
						}
						else
						{
							unk_0x9AC21D04D5646532(iVar13, "AM_KILL_LIST", &uVar30);
						}
					}
					iVar11 = func_501(0x00000001);
					Local_81.f_7 = (Local_81.f_7 + iVar11);
					func_500();
					func_453(0x00000000, unk_0x16F2683693E537C9(), "", 0x9E79F1A6, 0x092A9843, iVar11, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					Local_81.f_5 = 0x00000002;
					if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 < 0x00000002)
					{
						Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000002;
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000E))
				{
					func_653(0x00000000);
					unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x00000008);
					if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 < 0x00000003)
					{
						Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000003;
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x0000000B))
				{
					func_629(0x00000041, "", "UW_FAILD", "UW_BIGF", 0x00003A98, 0xFFFFFFFF, 0xBF800000, 0x00000000, 0x00000006, 0x00000002, 0x00000000);
					func_653(0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_84, 0x0000001A);
					unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x00000008);
					iVar13 = func_516(0x00000001);
					Local_81.f_6 = (Local_81.f_6 + iVar13);
					if (!Global_40001.f_2CEE)
					{
						if (Local_81.f_6 > 0x00000000)
						{
							func_515(0x00000013, Local_81.f_6);
						}
					}
					Global_2594A0 = iVar13;
					if (iVar13 > 0x00000000)
					{
						if (func_514())
						{
							func_502(0x0C92ECEF, iVar13, &uVar31, 0x00000000, 0x00000001, 0x00000000);
						}
						else
						{
							unk_0x9AC21D04D5646532(iVar13, "AM_KILL_LIST", &uVar32);
						}
					}
					iVar11 = func_501(0x00000001);
					Local_81.f_7 = (Local_81.f_7 + iVar11);
					func_500();
					func_453(0x00000000, unk_0x16F2683693E537C9(), "", 0x9E79F1A6, 0x092A9843, iVar11, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					Local_81.f_5 = 0x00000002;
					if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 < 0x00000002)
					{
						Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 = 0x00000002;
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000C))
				{
					unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x00000008);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x00000008))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x0000001A))
				{
					if (func_268("UW_ATTK"))
					{
						func_9();
					}
					if (func_543(&uLocal_532, 0x00000001))
					{
						unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x00000008);
					}
					if (!func_268("UW_EXPL") && !func_268("UW_EXPLC"))
					{
						if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_9 > 0xFFFFFFFF)
						{
							if (unk_0xE5DBF9B6126856CA(Local_80.f_7[Local_83[unk_0x57270EE11514DC67() /*18*/].f_9]))
							{
								if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									if (func_109(Local_80.f_7[Local_83[unk_0x57270EE11514DC67() /*18*/].f_9]))
									{
										if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[Local_83[unk_0x57270EE11514DC67() /*18*/].f_9])))
										{
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x00000008))
	{
		unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x00000008);
	}
}

int func_543(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0x00000000 && !func_354()) && !(func_238(unk_0xD803B885F5E47A62(), 0x00000000) && (func_231(unk_0xD803B885F5E47A62()) || func_229(unk_0xD803B885F5E47A62())))) && !func_547(unk_0xD803B885F5E47A62()))
	{
		func_546();
	}
	switch (*uParam0)
	{
		case 0x00000000:
			if (!func_22(&(uParam0->f_3)))
			{
				func_20(&(uParam0->f_3), 0x00000000, 0x00000000);
			}
			else if (func_19(&(uParam0->f_3), 0x000003E8, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000019);
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11EC), 0x00000000);
					func_20(&(uParam0->f_5), 0x00000000, 0x00000000);
				}
				func_20(&(uParam0->f_1), 0x00000000, 0x00000000);
				func_545(uParam0, 0x00000001);
			}
			break;
		
		case 0x00000001:
			if (func_22(&(uParam0->f_5)))
			{
				if (func_19(&(uParam0->f_5), 0x00000BB8, 0x00000000))
				{
					bVar0 = 0x00000001;
				}
			}
			else
			{
				bVar0 = 0x00000001;
			}
			if (bVar0)
			{
				func_544();
				func_545(uParam0, 0x00000002);
			}
			break;
		
		case 0x00000002:
			func_544();
			if (func_19(&(uParam0->f_1), 0x00003A98, 0x00000000))
			{
				if (func_677("AMEV_LBD_HELP"))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				func_545(uParam0, 0x00000003);
			}
			break;
		
		case 0x00000003:
			if (func_19(&(uParam0->f_1), 0x00005BCC, 0x00000000))
			{
				unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0x00000001);
				func_545(uParam0, 0x00000004);
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0x00000001);
			return 0x00000001;
	}
	return 0x00000000;
}

void func_544()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000000))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000002)) && func_844(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && !Global_12061) && !Global_E545) && !unk_0x757EF87A33649210())
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11EC), 0x00000001);
			func_421("AMEV_LBD_HELP", 0xFFFFFFFF);
			func_420(0x00000001);
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0x00000000);
		}
	}
}

void func_545(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_546()
{
	Global_25920E = 0x00000001;
}

int func_547(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_844(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_548(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000002;
			}
		}
	}
	return 0x00000000;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
			return 0x00000000;
			break;
		
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
			break;
		
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
			return 0x00000002;
			break;
		
		case 0x0000002B:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002D:
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
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000070:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000077:
		case 0x00000074:
		case 0x00000076:
		case 0x00000078:
		case 0x00000079:
		case 0x0000007E:
		case 0x0000007F:
		case 0x00000086:
		case 0x00000087:
		case 0x00000088:
		case 0x00000089:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000090:
			return 0x00000003;
			break;
		
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
			return 0x00000004;
			break;
		
		case 0x00000051:
			return 0x00000005;
			break;
		
		case 0x00000052:
			return 0x00000006;
			break;
		
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
			return 0x00000007;
			break;
		
		case 0x00000058:
			return 0x00000008;
			break;
		
		case 0x00000059:
		case 0x0000005A:
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
			return 0x00000009;
			break;
		
		case 0x00000065:
			return 0x0000000A;
			break;
		
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x0000006D:
		case 0x0000006E:
		case 0x0000006F:
			return 0x0000000B;
			break;
		
		case 0x00000075:
			return 0x0000000C;
			break;
		
		case 0x0000007A:
			return 0x0000000D;
			break;
		
		case 0x0000007B:
			return 0x0000000E;
			break;
		
		case 0x0000007C:
			return 0x0000000F;
			break;
		
		case 0x0000007D:
			return 0x00000010;
			break;
		
		case 0x00000080:
		case 0x00000081:
		case 0x00000082:
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
			return 0x00000011;
			break;
		
		case 0x00000091:
			return 0x00000012;
			break;
	}
	return 0xFFFFFFFF;
}

int func_549(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_585(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_11 = iParam1;
	Var0.f_12 = iParam2;
	Var0.f_47 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_48 = iParam8;
	StringCopy(&(Var0.f_19), sParam9, 64);
	StringCopy(&(Var0.f_29), sParam10, 64);
	StringCopy(&(Var0.f_39), sParam11, 16);
	return func_550(&Var0);
}

int func_550(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 0x00000001)
	{
		if (Global_2537E2.f_BE5)
		{
			return 0x00000000;
		}
	}
	func_561(uParam0, uParam0->f_11);
	func_560(uParam0);
	if (func_61())
	{
		func_560(uParam0);
	}
	if (func_559(uParam0->f_1))
	{
		func_552();
		if (Global_2537E2.f_AA3[0x00000000 /*80*/].f_2 == 0x00000000)
		{
			Global_2537E2.f_AA3[0x00000000 /*80*/] = { *uParam0 };
			return 0x00000001;
		}
		if (((Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x0000000D || Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x00000035) || Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x00000036) || Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x0000003A)
		{
			Global_2537E2.f_AA3[0x00000000 /*80*/].f_2 = 0x00000005;
		}
		iVar0 = 0x00000002;
		while (iVar0 >= 0x00000001)
		{
			Global_2537E2.f_AA3[iVar0 + 1 /*80*/] = { Global_2537E2.f_AA3[iVar0 /*80*/] };
			iVar0 = (iVar0 + 0xFFFFFFFF);
		}
		Global_2537E2.f_AA3[0x00000001 /*80*/] = { *uParam0 };
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 == 0x00000000)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0x00000000)
			{
				func_552();
			}
			return 0x00000001;
		}
		else
		{
			if (uParam0->f_1 == 0x00000001)
			{
				func_352(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000002);
				Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			}
			if (uParam0->f_1 == 0x00000056 && !func_551(uParam0->f_45, 0x00000080))
			{
				if (func_357(Global_2537E2.f_AA3[iVar0 /*80*/].f_1))
				{
					Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
					func_352(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_551(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_552()
{
	bool bVar0;
	
	if (Global_2537E2.f_BE6)
	{
		return;
	}
	if (!Global_12C5A)
	{
		Global_12C5A = 0x00000001;
		bVar0 = 0x00000001;
	}
	func_553();
	if (bVar0)
	{
		Global_12C5A = 0x00000000;
	}
}

void func_553()
{
	Global_2537E2.f_BE7 = 0x00000000;
	Global_2537E2.f_BE7.f_242 = 0x00000000;
	func_557(&(Global_2537E2.f_BE7.f_1));
	Global_2537E2.f_BE7.f_1.f_1 = 0x00000000;
	func_554(&(Global_2537E2.f_BE7.f_1));
}

void func_554(var uParam0)
{
	if (uParam0->f_1 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0x00000000;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0x00000000)
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(0x00000000);
			unk_0x7E60D21B163E9D56();
		}
		unk_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0x00000000;
	}
	if (uParam0->f_234)
	{
		unk_0x31A33F7BCB08CB80(0x00000000);
		uParam0->f_234 = 0x00000000;
	}
	if (!Global_12C5A)
	{
		if (!unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
		{
			if (!Global_12C5B)
			{
				if (unk_0x757EF87A33649210() && !func_556(0x00000000))
				{
					unk_0x82E51BCA72537B6C(0x00000320);
				}
			}
		}
	}
	func_555(0x00000000);
}

void func_555(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

bool func_556(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_557(var uParam0)
{
	func_558(uParam0);
	uParam0->f_23A = 0x00000000;
	uParam0->f_1F = 0x00000000;
	uParam0->f_38 = 0x00000000;
	uParam0->f_237 = 0x00000000;
	uParam0->f_239 = 0x00000000;
}

void func_558(var uParam0)
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0x00000000;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0x00000000;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0x00000000;
	uParam0->f_233 = 0x00000000;
	uParam0->f_23C = 0x00000000;
	uParam0->f_234 = 0x00000000;
	uParam0->f_235 = 0x00000000;
	uParam0->f_236 = 0x00000000;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_23E = 0x00000000;
	uParam0->f_23F = 0x00000000;
	uParam0->f_23D = 1f;
}

int func_559(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 0x00000003 || iParam0 == 0x00000004) || iParam0 == 0x00000005) || iParam0 == 0x00000006) || iParam0 == 0x0000000B) || iParam0 == 0x0000000C) || iParam0 == 0x0000001C) || iParam0 == 0x0000001D) || iParam0 == 0x0000001E) || iParam0 == 0x00000018) || iParam0 == 0x00000020) || iParam0 == 0x0000001F) || iParam0 == 0x0000001A) || iParam0 == 0x00000019) || iParam0 == 0x00000038) || iParam0 == 0x00000007) || iParam0 == 0x00000008) || iParam0 == 0x00000009) || iParam0 == 0x0000000A) || iParam0 == 0x00000068) || iParam0 == 0x00000064) || iParam0 == 0x00000067) || iParam0 == 0x00000069) || iParam0 == 0x0000006E)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_560(var uParam0)
{
	if (func_359(uParam0->f_1))
	{
		uParam0->f_48 = func_315();
	}
}

void func_561(var uParam0, int iParam1)
{
	if (func_359(uParam0->f_1))
	{
		uParam0->f_49 = 0x00000001;
	}
	if (iParam1 == func_5() || !func_844(iParam1, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_357(uParam0->f_1))
	{
		if (uParam0->f_47 == 0x00000001)
		{
			uParam0->f_49 = func_562(iParam1, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
		}
	}
}

int func_562(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_396(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0x00000000;
		}
		else
		{
			return 0x00000001;
		}
	}
	if (iParam1 == 0xFFFFFFFE)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
		if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000004)
		{
			if (Global_440000.f_2E673[iVar0] != 0xFFFFFFFF)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_396(unk_0xD803B885F5E47A62()) || (func_584() && func_583())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001F)) && !bParam4)
	{
		iVar1 = func_582();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != 0xFFFFFFFF)
				{
					if (func_844(unk_0x83FACCC48B68F9D1(iVar1), 0x00000000, 0x00000001))
					{
						if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
						{
							if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
							{
								return func_580(iParam1, iParam0, 0x00000000);
							}
							else
							{
								return func_574(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_574(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
			{
				if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
				{
					return func_580(iParam1, iParam0, 0x00000000);
				}
				else
				{
					return func_563(0x00000000, 0xFFFFFFFF, 0x00000000);
				}
			}
			else
			{
				return func_563(0x00000000, 0xFFFFFFFF, 0x00000000);
			}
		}
	}
	if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
	{
		if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
		{
			return func_580(iParam1, iParam0, 0x00000000);
		}
		else
		{
			return func_574(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_574(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_563(bool bParam0, int iParam1, bool bParam2)
{
	return func_564(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_564(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 0x00000003;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_573() || (func_572() && func_570())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_569(iParam2, iVar0);
		}
		else
		{
			return func_569(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 0xFFFFFFFF)
		{
			if (func_489(iVar0, iParam2, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012))
			{
				if (iVar0 == iParam2)
				{
					return func_568(0x00000001);
				}
				else
				{
					return func_568(0x00000000);
				}
			}
			else if (bParam3)
			{
				return 0x0000001C;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000014))
			{
				return func_565(iVar0, iParam2, 0x00000001, 0x00000004);
			}
			else
			{
				return func_565(iVar0, iParam2, 0x00000000, 0x00000004);
			}
		}
		return 0x0000001C;
	}
	if (iVar0 == iParam2 || iParam2 == 0xFFFFFFFF)
	{
		return func_568(0x00000001);
	}
	return func_568(0x00000000);
}

int func_565(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_567(iParam0, iParam1, iParam3);
	if (func_566(Global_440000.f_2F9AE, 0x00000001))
	{
		if (iVar0 == 0x00000001)
		{
			iVar0 = 0x00000000;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0x00000000:
				return 0x0000001C;
			
			case 0x00000001:
				return 0x0000001D;
			
			case 0x00000002:
				return 0x0000001E;
			
			case 0x00000003:
				return 0x0000001F;
			
			case 0x00000004:
				return 0x00000020;
			
			case 0x00000005:
				return 0x00000021;
			
			case 0x00000006:
				return 0x00000022;
			
			case 0x00000007:
				return 0x00000023;
			
			case 0x00000008:
				return 0x00000024;
			
			case 0x00000009:
				return 0x00000025;
			
			case 0x0000000A:
				return 0x00000026;
			
			case 0x0000000B:
				return 0x00000027;
			
			case 0x0000000C:
				return 0x00000028;
			
			case 0x0000000D:
				return 0x00000029;
			
			case 0x0000000E:
				return 0x0000002A;
			
			case 0x0000000F:
				return 0x0000002B;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0x00000000:
				return 0x0000001C;
			
			case 0x00000001:
				return 0x0000001D;
			
			case 0x00000002:
				return 0x0000001E;
			}
		
		default:
	}
	return 0x0000001C;
}

int func_566(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_38DB3 == 0x00000041)
		{
			return 0x00000001;
		}
	}
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000006)
	{
		if (iParam0 == Global_40001.f_233B[iVar0])
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_567(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_489(iParam0, iVar0, 0x00000000))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_568(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000076;
	}
	return 0x00000074;
}

int func_569(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_567(iParam1, iParam0, 0x00000004);
	}
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000000F;
		
		case 0x00000001:
			return 0x00000015;
		
		case 0x00000002:
			return 0x00000018;
		
		case 0x00000003:
			return 0x00000012;
		
		default:
	}
	return 0x0000001C;
}

bool func_570()
{
	if (func_571())
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000004);
}

bool func_571()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 0x0000000C);
}

bool func_572()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0x00000000);
}

int func_573()
{
	if (func_571() && unk_0xA14BB9332558B949())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_574(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 0xFFFFFFFE)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000094)
	{
		bVar1 = 0x00000001;
	}
	iVar2 = iParam0;
	if (iVar2 > 0xFFFFFFFF)
	{
		if (Global_184507[iVar2 /*876*/] == 0x00000094)
		{
			bVar1 = 0x00000001;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != 0xFFFFFFFF)
		{
			if (func_577())
			{
				iVar3 = func_314(iParam0);
				if (!iVar3 == 0xFFFFFFFF)
				{
					return func_312(iVar3);
				}
			}
			if ((func_576(iParam1, iParam0, iVar0, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)) || ((func_489(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000017)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)))
			{
				return func_568(0x00000001);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A))
			{
				return func_575(0x00000001);
			}
			else
			{
				return func_564(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0x00000000)
		{
			if (iParam0 == iParam1 || (Global_18060A == 0x00000001 && Global_180614 == 0x00000000))
			{
				return func_568(0x00000001);
			}
			else
			{
				return func_564(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 0x0000001C;
		}
	}
	iVar4 = func_314(iParam0);
	if (!iVar4 == 0xFFFFFFFF)
	{
		return func_312(iVar4);
	}
	if (bParam3)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_575(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000077;
	}
	return 0x00000074;
}

bool func_576(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 0xFFFFFFFE)
	{
		if (iParam3 == 0x00000000)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 0xFFFFFFFF && unk_0x08067D4957B73C02(iParam1) == 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(iParam1);
	}
	else
	{
		if (iParam3 == 0x00000000)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 0xFFFFFFFF && iParam2 == 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == iParam2;
	}
	return unk_0x08067D4957B73C02(iParam0) == iParam2;
}

int func_577()
{
	if (((func_294() || func_579()) || func_61()) || func_578())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_578()
{
	return Global_2564C8.f_13;
}

var func_579()
{
	return Global_2564C8.f_10;
}

int func_580(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_577())
	{
		iVar2 = func_314(iParam1);
		if (!iVar2 == 0xFFFFFFFF)
		{
			return func_312(iVar2);
		}
	}
	if (iVar1 > 0xFFFFFFFF && iVar1 < 0x00000011)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 0x00000018))
		{
			return 0x00000012;
		}
	}
	if (iParam0 > 0xFFFFFFFF && iParam1 != func_5())
	{
		if (Global_440000.f_2E673[iParam0] != 0xFFFFFFFF && Global_440000.f_2E673[iParam0] <= 0x00000004)
		{
			if (Global_440000.f_2E673[iParam0] == 0x00000000)
			{
				iVar0 = 0x0000000F;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000001)
			{
				iVar0 = 0x00000012;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000002)
			{
				iVar0 = 0x00000018;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000004)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001D))
				{
					iVar0 = 0x00000015;
				}
				else
				{
					iVar0 = 0x00000006;
				}
			}
			else
			{
				iVar0 = Global_440000.f_2E673[iParam0];
			}
		}
		else
		{
			iVar0 = func_564(iParam1, !bParam2, iParam0, 0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 0x0000000D))
		{
			iVar0 = func_581(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 0x0000001D))
		{
			iVar0 = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A) && !func_489(iParam0, unk_0x08067D4957B73C02(iParam1), 0x00000000))
		{
			iVar0 = func_575(0x00000001);
		}
	}
	else
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_581(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = Global_440000.f_38E2F;
			break;
		
		case 0x00000001:
			iVar0 = Global_440000.f_38E30;
			break;
		
		case 0x00000002:
			iVar0 = Global_440000.f_38E31;
			break;
		
		case 0x00000003:
			iVar0 = Global_440000.f_38E32;
			break;
	}
	switch (iVar0)
	{
		case 0x00000000:
			return 0x0000000F;
		
		case 0x00000001:
			return 0x00000015;
		
		case 0x00000002:
			return 0x00000018;
		
		case 0x00000003:
			return 0x00000012;
		
		case 0x00000004:
			return 0x00000006;
		
		case 0x00000005:
			return 0x00000009;
		
		case 0x00000006:
			return 0x00000003;
		
		case 0x00000007:
			return 0x00000001;
		
		case 0x00000008:
			return 0x0000000C;
		
		case 0x00000009:
			return 0x00000002;
		
		default:
	}
	return 0x00000002;
}

var func_582()
{
	return Global_240006.f_2;
}

bool func_583()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000004);
}

bool func_584()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

void func_585(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_11 = func_5();
	uParam1->f_12 = func_5();
	uParam1->f_13 = func_5();
	uParam1->f_14 = func_5();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 0x00000001;
	StringCopy(&(uParam1->f_15), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_10 = 0x00000001;
	uParam1->f_3 = iParam2;
	uParam1->f_47 = 0x00000001;
	uParam1->f_4A = 0x00000001;
	uParam1->f_4B = 0x00000001;
	uParam1->f_4C = 0x00000000;
	uParam1->f_4D = 0x00000000;
	uParam1->f_49 = 0x00000000;
	StringCopy(&(uParam1->f_19), "", 64);
	StringCopy(&(uParam1->f_29), "", 64);
}

int func_586(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar1 = func_5();
	iVar2 = func_5();
	return func_587(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 0x00000002);
}

int func_587(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_585(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	StringCopy(&(Var0.f_19), sParam3, 64);
	StringCopy(&(Var0.f_39), sParam8, 16);
	Var0.f_49 = uParam4;
	Var0.f_47 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_48 = uParam12;
	if (iParam14 != 0x00000002)
	{
		Var0.f_47 = iParam14;
	}
	func_352(&(Var0.f_45), 0x00000004);
	return func_550(&Var0);
}

char* func_588(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		sVar0 = func_593(&(Global_18D84D[iParam0 /*615*/].f_B.f_68));
		return sVar0;
	}
	if (Global_18D84D[iParam0 /*615*/].f_B.f_78 != Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_78)
	{
		sVar0 = func_591(iParam0, 0x00000000);
		return sVar0;
	}
	if (((func_230(iParam0, 0x0000001C) || func_230(unk_0xD803B885F5E47A62(), 0x0000001C)) || func_590(iParam0)) && !func_589(iParam0))
	{
		return func_591(iParam0, 0x00000000);
	}
	iVar1 = func_65(iParam0);
	if (iVar1 != func_5())
	{
		if (iVar1 != unk_0xD803B885F5E47A62())
		{
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0x00000000, 0xFFFFFFFF, 0x00000001))
			{
				return func_591(iVar1, 0x00000000);
			}
		}
	}
	if (iVar1 != func_5())
	{
		sVar0 = func_593(&(Global_18D84D[iVar1 /*615*/].f_B.f_68));
		if (unk_0xEA6BC48857E0AC4C(sVar0))
		{
			return func_591(iVar1, 0x00000000);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_589(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_66(iParam0) };
	if (unk_0xDC30EF462887322E())
	{
		if (unk_0x4DEB7B48DD0AABA4(0x00000000))
		{
			if (unk_0x5B9BB2932920F9CD(&Var0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_590(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_5())
	{
		Var0 = { func_66(iParam0) };
		if (unk_0x33A494591F2C1975() || unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0x4DEB7B48DD0AABA4(0x00000000))
			{
				return 0x00000000;
			}
		}
		else if (unk_0xDC30EF462887322E())
		{
			if (unk_0x4DEB7B48DD0AABA4(0x00000000))
			{
				if (unk_0x5B9BB2932920F9CD(&Var0))
				{
					return 0x00000000;
				}
			}
		}
	}
	return 0x00000001;
}

char* func_591(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_298(iParam0, 0x00000001))
		{
			return func_592();
		}
	}
	return unk_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_592()
{
	return unk_0x19C9F30A7697B43C("GB_REST_ACCM");
}

var func_593(var uParam0)
{
	return uParam0;
}

void func_594(bool bParam0)
{
	if (bParam0)
	{
		if (func_595(0x00000001))
		{
			unk_0x5D96D8530B3D0904(&Global_180713, 0x00000001);
		}
	}
	else if (func_595(0x00000002))
	{
		unk_0x5D96D8530B3D0904(&Global_180713, 0x00000002);
	}
}

int func_595(int iParam0)
{
	int iVar0;
	
	iVar0 = func_260(0x000009E6, 0xFFFFFFFF, 0x00000000);
	if (iParam0 == 0x00000000)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000000) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000001)) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000002))
		{
			return 0x00000000;
		}
	}
	else if (iParam0 == 0x00000001)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000003) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000004)) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000005))
		{
			return 0x00000000;
		}
	}
	else if (iParam0 == 0x00000002)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000006) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000007)) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000008))
		{
			return 0x00000000;
		}
	}
	else if (iParam0 == 0x00000003)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000009) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000A)) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000B))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_596(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_585(iParam0, &Var0, 0xFFFFFFFF, sParam1, sParam5);
	StringCopy(&(Var0.f_19), sParam2, 64);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam6;
	return func_550(&Var0);
}

int func_597(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_680(&iVar1, &iVar2);
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000004)
		{
			if (iVar0 != iVar1)
			{
				if (Local_80.f_100[iVar0] == iVar2)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	else if (Local_80.f_1B == joaat("rhino") || Local_80.f_1B == joaat("hydra"))
	{
		return Local_80.f_1D1[0x00000000 /*4*/].f_1 == Local_80.f_1D1[0x00000001 /*4*/].f_1;
	}
	else
	{
		return Local_80.f_252[0x00000000 /*4*/].f_1 == Local_80.f_252[0x00000001 /*4*/].f_1;
	}
	return 0x00000000;
}

int func_598()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_680(&iVar1, &iVar2);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (iVar0 != iVar1)
		{
			if (Local_80.f_100[iVar0] > iVar2)
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

int func_599()
{
	if (!func_742())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_40001.f_2BF3) * Global_40001.f_2CB1));
	}
	if ((unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000000) && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000001)) && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000002))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_40001.f_2C30) * Global_40001.f_2CB3));
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000006))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_40001.f_2C30) * Global_40001.f_2CB3));
	}
	return 0x00000000;
}

void func_600(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0x00000000)
	{
		if (!func_611())
		{
			if (func_610(0x00000000))
			{
				if (!func_373(0x00000000))
				{
					if (unk_0x40B8C182D63932FC(func_609()))
					{
						if (func_608() == 0x00000064)
						{
							iVar0 = *iParam0;
							*iParam0 = 0x00000000;
						}
						else
						{
							iVar0 = ((*iParam0 / 0x00000064) * func_608());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_606(&iVar0, 0x00000000);
						if (iParam1 == 0x00000001)
						{
							func_605("GB_BCUT_TICK1", func_609(), iVar0, 0x00000000, 0x00000000, 0x00000001);
						}
						func_604(0x00000014);
						func_601(func_609(), iVar0, 0x00000001);
					}
				}
			}
		}
	}
}

void func_601(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_844(iParam0, 0x00000000, 0x00000001))
	{
		Var0 = 0xB2D63074;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_603(iParam0);
		func_602(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000008, func_513(iParam0));
	}
}

void func_602(var uParam0, var uParam1)
{
	*uParam0 = Global_192FD0.f_9;
	*uParam1 = Global_192FD0.f_A;
}

var func_603(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_215;
}

void func_604(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_605(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0xFFFFFFFF;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(func_562(iParam1, 0xFFFFFFFE, 0x00000001, 0x00000000, 0x00000000));
		unk_0xD06AC7C87A34A6AD(func_535(&Var1));
		if (!iParam3 == 0x00000000)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
		func_530(0x0000001B, sParam0, 0x00000001, &Var1, iParam2, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	return iVar0;
}

void func_606(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_607(0x00000001);
	}
	else
	{
		iVar1 = func_607(0x00000000);
	}
	iVar0 = ((*iParam0 / 0x00000064) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_607(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_3066;
}

int func_608()
{
	return Global_40001.f_3065;
}

int func_609()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

bool func_610(bool bParam0)
{
	return func_310(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_611()
{
	return func_345(unk_0xD803B885F5E47A62());
}

int func_612()
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000006) && !unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000F))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (Local_80.f_100[iVar0] > 0x00000000)
		{
			return 0x00000000;
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_613()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (unk_0xE5DBF9B6126856CA(Local_80.f_49[iVar0]))
		{
			if (!func_109(Local_80.f_49[iVar0]))
			{
				func_25(&(Local_80.f_49[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000018)
	{
		if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar0]))
		{
			if (func_31(Local_80.f_30[iVar0]))
			{
				func_25(&(Local_80.f_30[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_614(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_238(unk_0xD803B885F5E47A62(), 0x00000000) || func_339(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (func_231(unk_0xD803B885F5E47A62()) || func_244(unk_0xD803B885F5E47A62()))
		{
			bParam2 = 0x00000000;
		}
	}
	if (unk_0x981819F6C45DDB49() < iParam0)
	{
		if (bParam2)
		{
			func_619(sParam3, sParam4, 0x00000001);
		}
		if (func_618(0x0000001A, 0xFFFFFFFF))
		{
			func_616(0x0000001A, 0xFFFFFFFF);
		}
		return 0x00000001;
	}
	if (func_22(&(Global_1806FA.f_12)))
	{
		if (!func_19(&(Global_1806FA.f_12), 0x00001D4C, 0x00000000))
		{
			return 0x00000000;
		}
		func_106(&(Global_1806FA.f_12));
	}
	if (func_615())
	{
		if (bParam2)
		{
			func_619(sParam3, sParam4, 0x00000000);
		}
		if (func_618(0x0000001A, 0xFFFFFFFF))
		{
			func_616(0x0000001A, 0xFFFFFFFF);
		}
		return 0x00000001;
	}
	if (iParam1 && unk_0x0DC0B2DBBD52B0C0() < iParam0)
	{
		if (bParam2)
		{
			func_619(sParam3, sParam4, 0x00000001);
		}
		if (func_618(0x0000001A, 0xFFFFFFFF))
		{
			func_616(0x0000001A, 0xFFFFFFFF);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_615()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000000);
}

void func_616(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_18();
	}
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x25C34E9F657F1C79(0x00000000, iParam1);
			break;
		
		default:
			uVar1 = func_617(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(uVar1);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x0674E58A79778E99(&iVar0, iParam0);
				unk_0x25C34E9F657F1C79(iVar0, iParam1);
			}
			break;
	}
}

int func_617(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_18();
	}
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x0000038D;
			break;
		
		case 0x00000001:
			iVar0 = 0x0000038E;
			break;
		
		case 0x00000002:
			iVar0 = 0x0000038F;
			break;
		
		case 0x00000003:
			iVar0 = 0x00000390;
			break;
		
		case 0x00000004:
			iVar0 = 0x00000391;
			break;
	}
	return iVar0;
}

bool func_618(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_18();
	}
	uVar0 = func_617(iParam1);
	uVar1 = unk_0x0A4C9A3D51EAE31F(uVar0);
	return unk_0xEAE0D21A50E6C7F4(uVar1, iParam0);
}

void func_619(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000002) && !func_202(unk_0xD803B885F5E47A62())) && !func_201(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEA6BC48857E0AC4C(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xEA6BC48857E0AC4C(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_630(0x00000042, sParam0, sParam1, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000002);
	}
}

void func_620()
{
	Global_26B66F.f_6FF.f_38 = 0x00000001;
}

void func_621()
{
	Global_26B66F.f_6FF.f_36 = 0x00000001;
}

bool func_622()
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C6, 0x0000000B);
}

int func_623()
{
	if (iLocal_541 > 0xFFFFFFFF)
	{
		if (func_109(Local_80.f_7[iLocal_541]))
		{
			if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[iLocal_541])))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

var func_624(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(uParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_625(bool bParam0)
{
	if (!func_742())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_40001.f_2BF2) * Global_40001.f_2CB0));
	}
	if (bParam0)
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_40001.f_2C2F) * Global_40001.f_2CB2));
	}
	if ((unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000000) && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000001)) && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000002))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_40001.f_2C2F) * Global_40001.f_2CB2));
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000006))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_40001.f_2C2F) * Global_40001.f_2CB2));
	}
	return 0x00000000;
}

char* func_626()
{
	if (Local_80.f_1B == joaat("rhino"))
	{
		return "ABLIP_TANK";
	}
	else if (unk_0xC41A9202669A24C4(Local_80.f_1B))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_627(int iParam0, int iParam1, bool bParam2)
{
	if (func_242())
	{
		if (iParam1 == 0x00000001)
		{
			if (Global_26B66F.f_112B == 0xFFFFFFFF)
			{
				Global_26B66F.f_112B = Global_40001.f_6719;
			}
			func_8(&(Global_26B66F.f_1129), 0x00000000, 0x00000000);
			if (bParam2)
			{
				if (Global_26B66F.f_112E == 0xFFFFFFFF)
				{
					Global_26B66F.f_112E = Global_40001.f_671A;
				}
				func_8(&(Global_26B66F.f_112C), 0x00000000, 0x00000000);
			}
			else
			{
				Global_1406A2 = 0x00000000;
				Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0x00000000;
				func_682(0x00000001);
			}
		}
		else
		{
			Global_1406A2 = 0x00000000;
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0x00000000;
			func_682(0x00000001);
		}
		if ((!unk_0xA14BB9332558B949() && !func_628()) && !func_248(unk_0xD803B885F5E47A62()))
		{
			Global_EC6CC = 0x00000000;
		}
		unk_0x6EC9FBED3024FDF5(0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, iParam0);
	}
}

bool func_628()
{
	return Global_2564C8.f_2E4;
}

int func_629(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_585(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_39), sParam1, 16);
	StringCopy(&(Var0.f_3D), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_47 = iParam8;
	Var0.f_48 = iParam9;
	if (iParam10 != 0x00000000)
	{
		func_352(&(Var0.f_45), iParam10);
	}
	return func_550(&Var0);
}

int func_630(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_585(iParam0, &Var0, 0xFFFFFFFF, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	if (iParam7 != 0x00000000)
	{
		func_352(&(Var0.f_45), iParam7);
	}
	return func_550(&Var0);
}

void func_631(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000004);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000004);
	}
}

void func_632(bool bParam0)
{
	int iVar0;
	
	if (unk_0x36C584991B4C183F(unk_0x16F2683693E537C9(), 0x00000005) != 0x00000000)
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
		unk_0x4854B75EFFCB0573(unk_0xD803B885F5E47A62(), func_260(0x00000249, 0xFFFFFFFF, 0x00000000));
		if (func_652())
		{
			unk_0x2DE95ECC33BE3172(unk_0xD803B885F5E47A62(), 0x73268708);
		}
		else if (func_651())
		{
			unk_0x2DE95ECC33BE3172(unk_0xD803B885F5E47A62(), 0x815E52EB);
		}
		if (func_648(0x00000E1A, 0xFFFFFFFF, 0xFFFFFFFF))
		{
		}
		iVar0 = func_260(0x000007F8, 0xFFFFFFFF, 0x00000000);
		unk_0xF8918B9BC7ADC372(unk_0xD803B885F5E47A62(), func_647(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), iVar0));
		if (func_610(0x00000000))
		{
			unk_0x4854B75EFFCB0573(unk_0xD803B885F5E47A62(), func_260(0x00000249, 0xFFFFFFFF, 0x00000000));
		}
		else
		{
			unk_0x4854B75EFFCB0573(unk_0xD803B885F5E47A62(), func_646(Global_26DACD));
		}
		func_645(unk_0xD803B885F5E47A62(), iVar0);
		unk_0xA8084772F05C5AF6(unk_0xD803B885F5E47A62(), 0x00000005, func_638(unk_0x16F2683693E537C9(), iVar0), func_637(unk_0x16F2683693E537C9(), iVar0), 0x00000000);
		func_636(func_260(0x000007F8, 0xFFFFFFFF, 0x00000000), 0x00000001);
		Global_26B66F.f_11F = 0x00000001;
		func_633(unk_0xD803B885F5E47A62(), 0xFFFFFFFF, 0xFFFFFFFF);
		if (bParam0)
		{
		}
	}
}

void func_633(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x8CD06866876216F2())
	{
		func_635();
		if (iParam2 == 0xFFFFFFFF)
		{
			iParam2 = func_260(0x000007F8, 0xFFFFFFFF, 0x00000000);
		}
		unk_0xA8084772F05C5AF6(iParam0, 0x00000005, func_638(unk_0x9539D44F3E4492F6(iParam0), iParam2), func_637(unk_0x9539D44F3E4492F6(iParam0), iParam2), 0x00000000);
		unk_0xF8918B9BC7ADC372(iParam0, func_647(unk_0x9539D44F3E4492F6(iParam0), iParam2));
		unk_0x64F9F278AB9DCA2C(unk_0x9539D44F3E4492F6(iParam0), 0x00000005, func_638(unk_0x9539D44F3E4492F6(iParam0), iParam2), func_637(unk_0x9539D44F3E4492F6(iParam0), iParam2), func_647(unk_0x9539D44F3E4492F6(iParam0), iParam2));
		if (iParam1 == 0xFFFFFFFF)
		{
			iParam1 = func_260(0x00000249, 0xFFFFFFFF, 0x00000000);
		}
		if (func_610(0x00000001) && func_634(iParam0))
		{
			unk_0x4854B75EFFCB0573(iParam0, func_646(Global_26DACD));
		}
		else
		{
			unk_0x4854B75EFFCB0573(iParam0, iParam1);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_1C, 0x00000004))
		{
			unk_0x4854B75EFFCB0573(iParam0, Global_180626);
			unk_0x2DE95ECC33BE3172(iParam0, 0x95DE0B0C);
		}
		func_645(iParam0, iParam2);
		unk_0x9DD8618CA5BF832D(unk_0x9539D44F3E4492F6(iParam0), 0x000000B1, 0x00000001);
	}
}

bool func_634(int iParam0)
{
	return func_230(iParam0, 0x0000000A);
}

void func_635()
{
	Global_12B33 = 0x00000000;
	Global_12B34 = 0xFFFFFFFF;
	Global_12B35 = 0xFFFFFFFF;
	Global_12B36 = 0xFFFFFFFF;
	Global_12B37 = 0xFFFFFFFF;
	Global_12B38 = 0xFFFFFFFF;
}

void func_636(int iParam0, int iParam1)
{
	if (unk_0x8CD06866876216F2())
	{
		func_635();
		func_479(0x000007F8, iParam0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		unk_0xA8084772F05C5AF6(unk_0xD803B885F5E47A62(), 0x00000005, func_638(unk_0x16F2683693E537C9(), iParam0), func_637(unk_0x16F2683693E537C9(), iParam0), 0x00000000);
		func_645(unk_0xD803B885F5E47A62(), iParam0);
		unk_0xF8918B9BC7ADC372(unk_0xD803B885F5E47A62(), func_647(unk_0x16F2683693E537C9(), iParam0));
		if ((iParam1 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && unk_0x36C584991B4C183F(unk_0x16F2683693E537C9(), 0x00000005) != 0x00000000)
		{
			func_633(unk_0xD803B885F5E47A62(), 0xFFFFFFFF, 0xFFFFFFFF);
		}
	}
}

int func_637(int iParam0, int iParam1)
{
	if (iParam1 >= 0x0000003E)
	{
		return (iParam1 - 0x0000003E);
	}
	if (iParam1 > 0x00000033)
	{
		return (iParam1 - 0x00000034);
	}
	if (iParam1 > 0x0000002E)
	{
		return (iParam1 - 0x0000002F);
	}
	if (iParam1 > 0x0000001A)
	{
		return (iParam1 - 0x0000001B);
	}
	if (iParam1 > 0x00000000)
	{
		return (iParam1 - 0x00000001);
	}
	return iParam1;
}

var func_638(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0x36C584991B4C183F(iParam0, 0x00000009) != 0x00000000;
	iVar1 = unk_0x4F4B24509D6989D0(iParam0, 0x00000008, unk_0x36C584991B4C183F(iParam0, 0x00000008), unk_0xDADA8E1DD0D0D9D9(iParam0, 0x00000008));
	iVar2 = unk_0x4F4B24509D6989D0(iParam0, 0x0000000B, unk_0x36C584991B4C183F(iParam0, 0x0000000B), unk_0xDADA8E1DD0D0D9D9(iParam0, 0x0000000B));
	iVar3 = unk_0x4F4B24509D6989D0(iParam0, 0x00000004, unk_0x36C584991B4C183F(iParam0, 0x00000004), unk_0xDADA8E1DD0D0D9D9(iParam0, 0x00000004));
	if ((((!bVar0 == Global_12B33 || !iParam1 == Global_12B34) || !iVar1 == Global_12B35) || !iVar2 == Global_12B36) || !iVar3 == Global_12B37)
	{
		Global_12B33 = bVar0;
		Global_12B34 = iParam1;
		Global_12B35 = iVar1;
		Global_12B36 = iVar2;
		Global_12B37 = iVar3;
		Global_12B38 = func_639(iParam0, iParam1);
		if (iParam1 == 0x0000003F || iParam1 == 0x0000003E)
		{
			if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62())) == joaat("mp_f_freemode_01"))
			{
				if (Global_12B38 == 0x0000003D)
				{
					Global_12B38 = 0x0000004F;
				}
				else if (Global_12B38 == 0x00000027)
				{
					Global_12B38 = 0x0000004F;
				}
				else if (Global_12B38 == 0x0000004C)
				{
					Global_12B38 = 0x00000050;
				}
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62())) == joaat("mp_m_freemode_01"))
			{
				if (Global_12B38 == 0x0000003D)
				{
					Global_12B38 = 0x0000004E;
				}
				else if (Global_12B38 == 0x00000027)
				{
					Global_12B38 = 0x0000004E;
				}
			}
		}
	}
	return Global_12B38;
}

int func_639(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = unk_0x36C584991B4C183F(iParam0, 0x0000000B);
	if (unk_0x36C584991B4C183F(iParam0, 0x00000009) != 0x00000000)
	{
		bVar1 = 0x00000001;
	}
	iVar2 = unk_0x134B62B726CEC8E6(iParam0);
	iVar3 = 0x00000000;
	if (iParam1 > 0x0000003D)
	{
		iVar3 = 0x00000045;
	}
	else if (iParam1 > 0x00000033)
	{
		iVar3 = (iParam1 - 0x00000001);
	}
	else if (iParam1 > 0x0000002E)
	{
		iVar3 = 0x0000001E;
	}
	else if (iParam1 > 0x0000001A)
	{
		iVar3 = 0x00000014;
	}
	else if (iParam1 > 0x00000000)
	{
		iVar3 = 0x00000009;
	}
	else
	{
		iVar3 = 0x00000000;
	}
	uVar4 = unk_0x4F4B24509D6989D0(iParam0, 0x00000008, unk_0x36C584991B4C183F(iParam0, 0x00000008), unk_0xDADA8E1DD0D0D9D9(iParam0, 0x00000008));
	if (unk_0x1A5A491D253EA7BA(uVar4, 0x0E556105, 0x00000008))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, 0xA6A38444, 0x00000008))
			{
				return (0x00000002 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 0x14E0E0C1, 0x00000008))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 0xCB1F4D3B, 0x00000008))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 0xB958A9AE, 0x00000008))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 0x815CB9B7, 0x00000008))
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, 0xA6A38444, 0x00000008))
			{
				return (0x00000007 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 0x14E0E0C1, 0x00000008))
			{
				return (0x00000008 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 0xCB1F4D3B, 0x00000008))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 0xB958A9AE, 0x00000008))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 0x815CB9B7, 0x00000008))
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		return func_644(iParam0, iParam1);
	}
	if (func_643(iParam0))
	{
		if (bVar1)
		{
			return (0x00000008 + iVar3);
		}
		else
		{
			return (0x00000002 + iVar3);
		}
	}
	if (iVar0 > 0x0000000F)
	{
		iVar5 = unk_0x4F4B24509D6989D0(iParam0, 0x0000000B, iVar0, unk_0xDADA8E1DD0D0D9D9(iParam0, 0x0000000B));
		if (unk_0x1A5A491D253EA7BA(iVar5, 0x270BBE67, 0x00000000))
		{
			if (bVar1)
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000002 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xE067789F, 0x00000000))
		{
			if (bVar1)
			{
				return (0x00000006 + iVar3);
			}
			else
			{
				return (0x00000006 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xD575D399, 0x00000000))
		{
			if (iParam1 > 0x00000033)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 0x0000003C;
				}
				else
				{
					return 0x00000035;
				}
			}
			else if (iParam1 > 0x0000002E)
			{
				return 0x00000027;
			}
			else if (iParam1 > 0x0000001A)
			{
				return 0x0000001D;
			}
			else if (iParam1 > 0x00000000)
			{
				return 0x00000012;
			}
			else
			{
				return 0x00000013;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x8FC4EBAA, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000002 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000002 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xED110F62, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000002 + iVar3);
				}
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, 0xC59E7E4C, 0x00000000))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, 0xEDB71453, 0x00000000))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, 0xFC84B1EE, 0x00000000))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000002 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x5B97677D, 0x00000000) && !unk_0x1A5A491D253EA7BA(iVar5, 0x14E0E0C1, 0x00000000))
		{
			iVar6 = func_642(iVar5, 0x00000000);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0x00000000:
						return (0x00000002 + iVar3);
						break;
					
					case 0x00000002:
						if (iParam1 > 0x0000002E)
						{
							return 0x00000027;
						}
						else if (iParam1 > 0x0000001A)
						{
							return 0x0000001D;
						}
						else if (iParam1 > 0x00000000)
						{
							return 0x00000012;
						}
						else
						{
							return 0x00000013;
						}
						break;
					
					default:
						iVar0 = func_641(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 0x00000002:
						return (0x00000007 + iVar3);
						break;
					
					default:
						iVar0 = func_641(iVar5);
						break;
					}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x0ECB259F, 0x00000000))
		{
			if (unk_0x1A5A491D253EA7BA(iVar5, 0xAFAEFEB6, 0x00000000))
			{
				return (0x00000003 + iVar3);
			}
			else
			{
				return (0x00000007 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x17A179AA, 0x00000000))
		{
			iVar7 = func_640(iVar5, 0x00000000);
			switch (iVar7)
			{
				case 0x00000004:
					if (iParam1 > 0x0000002E)
					{
						return 0x00000027;
					}
					else if (iParam1 > 0x0000001A)
					{
						return 0x0000001C;
					}
					else if (iParam1 > 0x00000000)
					{
						return 0x00000011;
					}
					else
					{
						return 0x00000008;
					}
					break;
				
				case 0x00000005:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (0x00000008 + iVar3);
					}
					break;
				
				case 0x00000006:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (0x00000008 + iVar3);
					}
					break;
				
				case 0x00000007:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (0x00000008 + iVar3);
					}
					break;
				
				case 0x0000000B:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (0x00000008 + iVar3);
					}
					break;
				
				case 0x0000000C:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (0x00000008 + iVar3);
					}
					break;
				
				case 0x0000000E:
					if (iParam1 > 0x0000002E)
					{
						return 0x00000027;
					}
					else if (iParam1 > 0x0000001A)
					{
						return 0x0000001D;
					}
					else if (iParam1 > 0x00000000)
					{
						return 0x00000012;
					}
					else
					{
						return 0x00000013;
					}
					break;
				
				default:
					iVar0 = func_641(iVar5);
					break;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xD184A7B3, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000003 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000002 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xBD49DD4F, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000003 + iVar3);
			}
			else if (bVar1)
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000001 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x82A8E806, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000002 + iVar3);
			}
			else
			{
				return (0x00000002 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x6A57B764, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000002 + iVar3);
			}
			else if (bVar1)
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000001 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA028A30D, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000003 + iVar3);
			}
			else
			{
				return (0x00000004 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x75D24E59, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000003 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x7D1DDCDC, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000002 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA7483138, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 0x0000002E)
				{
					return 0x00000027;
				}
				else if (iParam1 > 0x0000001A)
				{
					return 0x0000001D;
				}
				else if (iParam1 > 0x00000000)
				{
					return 0x00000012;
				}
				else
				{
					return 0x00000013;
				}
			}
			else
			{
				return (0x00000004 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x998795B7, 0x00000000) || unk_0x1A5A491D253EA7BA(iVar5, 0x555369F8, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000003 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xB40ECAC5, 0x00000000) || unk_0x1A5A491D253EA7BA(iVar5, 0x66B90CC3, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x1A5A491D253EA7BA(iVar5, 0xAC1983B3, 0x00000000))
				{
					return func_644(iParam0, iParam1) + 15;
				}
				else
				{
					return (0x00000003 + iVar3);
				}
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x36644F6A, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000002 + iVar3);
			}
		}
		else if ((unk_0x1A5A491D253EA7BA(iVar5, 0xBF41032C, 0x00000000) || unk_0x1A5A491D253EA7BA(iVar5, 0x062BE456, 0x00000000)) || unk_0x1A5A491D253EA7BA(iVar5, 0xC4B605F4, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000006 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000007 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x79DC15F7, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 0x0000002E)
				{
					return 0x00000027;
				}
				else if (iParam1 > 0x0000001A)
				{
					return 0x0000001D;
				}
				else if (iParam1 > 0x00000000)
				{
					return 0x00000012;
				}
				else
				{
					return 0x00000013;
				}
			}
			else if (bVar1)
			{
				return (0x00000004 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x878DB15A, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000003 + iVar3);
			}
			else if (bVar1)
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000002 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xC090A35F, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000002 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xAB5F78FD, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000007 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xC12FA4AD, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000002 + iVar3);
				}
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xAF010050, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000003 + iVar3);
			}
			else
			{
				return (0x00000004 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xE5B26DB2, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000003 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xD370C92F, 0x00000000))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_644(iParam0, iParam1);
				}
				else
				{
					return (0x00000002 + iVar3);
				}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x8999B582, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x83896870, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000006 + iVar3);
				}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xD12783AF, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000003 + iVar3);
				}
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xCBFF7957, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000002 + iVar3);
				}
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x29C334E5, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x66385C83, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000002 + iVar3);
				}
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x2C7468FC, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x3EEA0DE7, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x089BA14B, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x1D5CCACD, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xE72ADE66, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000003 + iVar3);
				}
			}
			else
			{
				return (0x00000004 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xF9DF03D2, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000002 + iVar3);
				}
			}
			else
			{
				return (0x00000007 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xD4433897, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000007 + iVar3);
				}
			}
			else
			{
				return (0x00000004 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x082AA07D, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000003 + iVar3);
				}
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xD9C1C6C4, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (0x00000006 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xAF71F225, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000002 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000002 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x81A71690, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000003 + iVar3);
				}
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA624DF8B, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000007 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x387C043F, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA6369AC6, 0x00000000) || unk_0x1A5A491D253EA7BA(iVar5, 0x72E39144, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x9584F963, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xC3C055D9, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xB0F9B04C, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else if (bVar1)
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xDF3A0CD0, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xCE9E6B95, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (0x00000037 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x64C997FD, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else if (bVar1)
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x5118F088, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x7F5D4D24, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x6D1BA8A1, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xEFF352E5, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000003 + iVar3);
			}
			else
			{
				return (0x00000004 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x0C018AC5, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000004 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x39AFE621, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000004 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xD72B2165, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000003 + iVar3);
			}
			else
			{
				return (0x00000004 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xB481DC13, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xC59E7E4C, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x93EC9AE9, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000003 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x0FB6927F, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xED874E1D, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xFAB1E872, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xD36C95D5, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return func_644(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x1D38296B, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x48077F09, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x11C1127D, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x23EBB6D2, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x35F1DAC6, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x47C57E6D, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x127B13D9, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x2429B736, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return func_644(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x6D294950, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xCE0B0BF2, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x27143E03, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x39DB6391, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000003 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x04F6F9C9, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x16C89D6C, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000004 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xFA1863FC, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xD66A9CA1, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xE843C053, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x524A5D78, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xEDB71453, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xFC84B1EE, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x65FF21D5, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x576B84AE, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x8AA9EB2A, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x0EA0F312, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000030 + iVar3);
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x00E7579F, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000030 + iVar3);
			}
			else
			{
				return (0x00000030 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x79E30E5F, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xC970D2A1, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xDFE8FF91, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x807F40AF, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xE60A3052, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x296E7E5B, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 0x00000007;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA6A38444, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x14E0E0C1, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x815CB9B7, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x6FE696CB, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xADFDC1AF, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xAFAEFEB6, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000001 + iVar3);
			}
			else
			{
				return (0x00000001 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA8827D94, 0x00000000))
		{
			if (unk_0x1A5A491D253EA7BA(iVar5, 0x77958CBD, 0x00000000))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_644(iParam0, iParam1) + 15;
				}
				else
				{
					return func_644(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000002 + iVar3);
			}
			else
			{
				return (0x00000002 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xDFC997E7, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x47F86843, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA8827D94, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return func_644(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA8827D94, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xD12783AF, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xD12783AF, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xC7FFFB13, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x8999B582, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000004 + iVar3);
			}
			else
			{
				return func_644(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA8827D94, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x9CD35738, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA8827D94, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000002 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA8827D94, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA8827D94, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return func_644(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xC7FFFB13, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x17B94D0E, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x752833F4, 0x00000000) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000001 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x78CBC617, 0x00000000) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (0x00000008 + iVar3);
			}
			else
			{
				return (0x00000002 + iVar3);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xABE76B56, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (0x00000003 + iVar3);
			}
			else
			{
				return (0x00000008 + iVar3);
			}
		}
		else if ((unk_0x1A5A491D253EA7BA(iVar5, 0x87B7C5E2, 0x00000000) || unk_0x1A5A491D253EA7BA(iVar5, 0x1319D76E, 0x00000000)) || unk_0x1A5A491D253EA7BA(iVar5, 0xCEC22D5D, 0x00000000))
		{
			return (0x00000007 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_641(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0x00000000:
				if (bVar1)
				{
					return (0x00000002 + iVar3);
				}
				else
				{
					return (0x00000001 + iVar3);
				}
				break;
			
			case 0x00000001:
				if (bVar1)
				{
					return (0x00000002 + iVar3);
				}
				else
				{
					return (0x00000001 + iVar3);
				}
				break;
			
			case 0x00000002:
				if (bVar1)
				{
					return (0x00000007 + iVar3);
				}
				else
				{
					return (0x00000007 + iVar3);
				}
				break;
			
			case 0x00000003:
				if (bVar1)
				{
					return (0x00000003 + iVar3);
				}
				else
				{
					return (0x00000003 + iVar3);
				}
				break;
			
			case 0x00000004:
				if (bVar1)
				{
					return (0x00000003 + iVar3);
				}
				else
				{
					return (0x00000003 + iVar3);
				}
				break;
			
			case 0x00000005:
				if (bVar1)
				{
					return (0x00000002 + iVar3);
				}
				else
				{
					return (0x00000001 + iVar3);
				}
				break;
			
			case 0x00000006:
				if (bVar1)
				{
					return (0x00000002 + iVar3);
				}
				else
				{
					return (0x00000002 + iVar3);
				}
				break;
			
			case 0x00000007:
				if (bVar1)
				{
					return (0x00000003 + iVar3);
				}
				else
				{
					return (0x00000003 + iVar3);
				}
				break;
			
			case 0x00000008:
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000001 + iVar3);
				}
				break;
			
			case 0x00000009:
				if (bVar1)
				{
					return (0x00000002 + iVar3);
				}
				else
				{
					return (0x00000001 + iVar3);
				}
				break;
			
			case 0x0000000A:
				if (bVar1)
				{
					return (0x00000003 + iVar3);
				}
				else
				{
					return (0x00000003 + iVar3);
				}
				break;
			
			case 0x0000000B:
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000002 + iVar3);
				}
				break;
			
			case 0x0000000C:
				if (bVar1)
				{
					return (0x00000002 + iVar3);
				}
				else
				{
					return (0x00000001 + iVar3);
				}
				break;
			
			case 0x0000000D:
				if (bVar1)
				{
					return (0x00000007 + iVar3);
				}
				else
				{
					return (0x00000002 + iVar3);
				}
				break;
			
			case 0x0000000E:
				if (bVar1)
				{
					return (0x00000006 + iVar3);
				}
				else
				{
					return (0x00000006 + iVar3);
				}
				break;
			
			case 0x0000000F:
				if (bVar1)
				{
					return (0x00000002 + iVar3);
				}
				else
				{
					return (0x00000005 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0x00000000:
				if (bVar1)
				{
					return (0x00000002 + iVar3);
				}
				else
				{
					return (0x00000001 + iVar3);
				}
				break;
			
			case 0x00000001:
				if (bVar1)
				{
					return (0x00000007 + iVar3);
				}
				else
				{
					return (0x00000007 + iVar3);
				}
				break;
			
			case 0x00000002:
				if (bVar1)
				{
					return (0x00000004 + iVar3);
				}
				else
				{
					return (0x00000003 + iVar3);
				}
				break;
			
			case 0x00000003:
				if (bVar1)
				{
					return (0x00000006 + iVar3);
				}
				else
				{
					return (0x00000005 + iVar3);
				}
				break;
			
			case 0x00000004:
				if (bVar1)
				{
					return (0x00000002 + iVar3);
				}
				else
				{
					return (0x00000001 + iVar3);
				}
				break;
			
			case 0x00000005:
				if (bVar1)
				{
					return (0x00000002 + iVar3);
				}
				else
				{
					return (0x00000001 + iVar3);
				}
				break;
			
			case 0x00000006:
				if (bVar1)
				{
					return (0x00000007 + iVar3);
				}
				else
				{
					return (0x00000007 + iVar3);
				}
				break;
			
			case 0x00000007:
				if (bVar1)
				{
					return (0x00000007 + iVar3);
				}
				else
				{
					return (0x00000007 + iVar3);
				}
				break;
			
			case 0x00000008:
				if (bVar1)
				{
					return (0x00000007 + iVar3);
				}
				else
				{
					return (0x00000007 + iVar3);
				}
				break;
			
			case 0x00000009:
				return (0x00000002 + iVar3);
				break;
			
			case 0x0000000A:
				if (bVar1)
				{
					return (0x00000007 + iVar3);
				}
				else
				{
					return (0x00000007 + iVar3);
				}
				break;
			
			case 0x0000000B:
				if (bVar1)
				{
					return (0x00000002 + iVar3);
				}
				else
				{
					return (0x00000001 + iVar3);
				}
				break;
			
			case 0x0000000C:
				if (bVar1)
				{
					return (0x00000002 + iVar3);
				}
				else
				{
					return (0x00000001 + iVar3);
				}
				break;
			
			case 0x0000000D:
				if (bVar1)
				{
					return (0x00000002 + iVar3);
				}
				else
				{
					return (0x00000001 + iVar3);
				}
				break;
			
			case 0x0000000E:
				if (bVar1)
				{
					return (0x00000008 + iVar3);
				}
				else
				{
					return (0x00000004 + iVar3);
				}
				break;
			
			case 0x0000000F:
				if (bVar1)
				{
					return (0x00000002 + iVar3);
				}
				else
				{
					return (0x00000001 + iVar3);
				}
				break;
			}
	}
	return (0x00000001 + iVar3);
	return 0x00000000;
}

int func_640(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	if (unk_0x1A5A491D253EA7BA(iParam0, 0x086366E0, iParam1))
	{
		iVar0 = 0x00000000;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x6F19B453, iParam1))
	{
		iVar0 = 0x00000001;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x7D8A5134, iParam1))
	{
		iVar0 = 0x00000002;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0xD29CFB58, iParam1))
	{
		iVar0 = 0x00000003;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x6105982B, iParam1))
	{
		iVar0 = 0x00000004;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x28D427C5, iParam1))
	{
		iVar0 = 0x00000005;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x36A2C362, iParam1))
	{
		iVar0 = 0x00000006;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x8C676EEE, iParam1))
	{
		iVar0 = 0x00000007;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x1A540AC5, iParam1))
	{
		iVar0 = 0x00000008;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x0FCAF5B3, iParam1))
	{
		iVar0 = 0x00000009;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0xBCC696C3, iParam1))
	{
		iVar0 = 0x0000000A;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0xCF14BB5F, iParam1))
	{
		iVar0 = 0x0000000B;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x092AAF8A, iParam1))
	{
		iVar0 = 0x0000000C;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0xD7E4CCFF, iParam1))
	{
		iVar0 = 0x0000000D;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x221E6171, iParam1))
	{
		iVar0 = 0x0000000E;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0xF44F85D4, iParam1))
	{
		iVar0 = 0x0000000F;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x4ED03ADC, iParam1))
	{
		iVar0 = 0x00000010;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x20AA5E89, iParam1))
	{
		iVar0 = 0x00000011;
	}
	return iVar0;
}

int func_641(int iParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	if (iParam0 == 0x00000000)
	{
		return iVar0;
	}
	if (unk_0x1A5A491D253EA7BA(iParam0, 0x30F1B77D, 0x00000000))
	{
		iVar0 = 0x00000000;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x7A814A9B, 0x00000000))
	{
		iVar0 = 0x00000001;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x893BE810, 0x00000000))
	{
		iVar0 = 0x00000002;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x56F58384, 0x00000000))
	{
		iVar0 = 0x00000003;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0xC19E5934, 0x00000000))
	{
		iVar0 = 0x00000004;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x73DE3DB1, 0x00000000))
	{
		iVar0 = 0x00000005;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x88CC678D, 0x00000000))
	{
		iVar0 = 0x00000006;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x7A164A21, 0x00000000))
	{
		iVar0 = 0x00000007;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0xF971C8DA, 0x00000000))
	{
		iVar0 = 0x00000008;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0xACDBAFAF, 0x00000000))
	{
		iVar0 = 0x00000009;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0xF75E1F71, 0x00000000))
	{
		iVar0 = 0x0000000A;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x012432FD, 0x00000000))
	{
		iVar0 = 0x0000000B;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x1288D5C6, 0x00000000))
	{
		iVar0 = 0x0000000C;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x2C460944, 0x00000000))
	{
		iVar0 = 0x0000000D;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0xA056F170, 0x00000000))
	{
		iVar0 = 0x0000000E;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0xBEE62E92, 0x00000000))
	{
		iVar0 = 0x0000000F;
	}
	return iVar0;
}

int func_642(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	if (unk_0x1A5A491D253EA7BA(uParam0, 0xCC23B7A3, iParam1))
	{
		iVar0 = 0x00000000;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0xB9F8134C, iParam1))
	{
		iVar0 = 0x00000001;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0xCC38B7D1, iParam1))
	{
		iVar0 = 0x00000002;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0xB9D11302, iParam1))
	{
		iVar0 = 0x00000003;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0xAFAEFEB6, iParam1))
	{
		iVar0 = 0x00000004;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x9D585A09, iParam1))
	{
		iVar0 = 0x00000005;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x827B244F, iParam1))
	{
		iVar0 = 0x00000006;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x70DD8114, iParam1))
	{
		iVar0 = 0x00000007;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x65F36B40, iParam1))
	{
		iVar0 = 0x00000008;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x5472C83F, iParam1))
	{
		iVar0 = 0x00000009;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x61D7669C, iParam1))
	{
		iVar0 = 0x0000000A;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x29AD7649, iParam1))
	{
		iVar0 = 0x0000000B;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x1772D1D4, iParam1))
	{
		iVar0 = 0x0000000C;
	}
	else if (unk_0x1A5A491D253EA7BA(iParam0, 0x0CE1BCB2, iParam1))
	{
		iVar0 = 0x0000000D;
	}
	return iVar0;
}

int func_643(int iParam0)
{
	if (unk_0x1A5A491D253EA7BA(unk_0x4F4B24509D6989D0(iParam0, 0x00000004, unk_0x36C584991B4C183F(iParam0, 0x00000004), unk_0xDADA8E1DD0D0D9D9(iParam0, 0x00000004)), 0x3EB5290F, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_644(int iParam0, int iParam1)
{
	if (iParam1 > 0x00000045)
	{
		return 0x00000045;
	}
	if (iParam1 > 0x0000003D)
	{
		return 0x0000003D;
	}
	if (iParam1 == 0x00000035 || iParam1 == 0x00000036)
	{
		return 0x0000003D;
	}
	if (iParam1 > 0x00000033)
	{
		return 0x00000033;
	}
	if (iParam1 > 0x0000002E)
	{
		return 0x00000033;
	}
	if (iParam1 > 0x0000001A)
	{
		return 0x00000032;
	}
	if (iParam1 > 0x00000000)
	{
		return 0x00000031;
	}
	return 0x00000030;
}

void func_645(int iParam0, int iParam1)
{
	if (iParam1 > 0x0000003D)
	{
		unk_0xF1C520A9D38679DE(iParam0, 0x93321CAD);
	}
	else if (iParam1 > 0x00000033)
	{
		unk_0xF1C520A9D38679DE(iParam0, 0x4BAA1F65);
	}
	else if (iParam1 > 0x0000002E)
	{
		unk_0xF1C520A9D38679DE(iParam0, 0x694D27C4);
	}
	else if (iParam1 > 0x0000001A)
	{
		unk_0xF1C520A9D38679DE(iParam0, 0x4C28BD84);
	}
	else if (iParam1 > 0x00000000)
	{
		unk_0xF1C520A9D38679DE(iParam0, 0x4BAA1F65);
	}
	else
	{
		unk_0x76101DD10F826BF0(iParam0);
	}
}

int func_646(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 0x00000001:
			return 0x00000009;
			break;
		
		case 0x00000002:
			return 0x00000009;
			break;
		
		case 0x00000003:
			return 0x00000003;
			break;
		
		case 0x00000004:
			return 0x00000003;
			break;
		
		case 0x00000005:
			return 0x00000008;
			break;
		
		case 0x00000006:
			return 0x00000008;
			break;
		
		case 0x00000007:
			return 0x0000000B;
			break;
		
		case 0x00000008:
			return 0x0000000B;
			break;
		
		case 0x00000009:
			return 0x00000006;
			break;
		
		case 0x0000000A:
			return 0x00000006;
			break;
		
		case 0x0000000B:
			return 0x0000000A;
			break;
		
		case 0x0000000C:
			return 0x0000000A;
			break;
	}
	return 0x00000000;
}

int func_647(int iParam0, int iParam1)
{
	return 0x00000000;
}

int func_648(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_18();
	}
	iVar1 = func_650(iParam0, iParam1);
	uVar2 = func_649(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_649(int iParam0)
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

int func_650(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_18();
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

bool func_651()
{
	return unk_0xC146D5FBD23C6954(0x55292CC7);
}

bool func_652()
{
	return unk_0xC146D5FBD23C6954(0xC40B8B70);
}

void func_653(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C6, 0x0000000B))
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C6), 0x0000000B);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C6, 0x0000000B))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C6), 0x0000000B);
	}
}

void func_654(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C6, 0x00000009))
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C6), 0x00000009);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C6, 0x00000009))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C6), 0x00000009);
	}
}

void func_655()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
	}
}

void func_656(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000007))
		{
			if (((!func_244(unk_0xD803B885F5E47A62()) && !func_201(unk_0xD803B885F5E47A62())) && !func_665(unk_0xD803B885F5E47A62())) && !func_210(unk_0xD803B885F5E47A62()))
			{
				if (func_242())
				{
					func_627(0x00000002, 0x00000000, 0x00000001);
					func_664();
				}
				if (func_259(0x00000000))
				{
					iVar0 = func_260(0x000009B0, 0xFFFFFFFF, 0x00000000);
					unk_0x0674E58A79778E99(&iVar0, 0x00000000);
					func_664();
				}
				if (func_259(func_206(func_190(unk_0xD803B885F5E47A62()))))
				{
					iVar0 = func_260(0x000009B0, 0xFFFFFFFF, 0x00000000);
					unk_0x0674E58A79778E99(&iVar0, func_206(func_190(unk_0xD803B885F5E47A62())));
					func_664();
				}
				if (func_663())
				{
					func_664();
				}
				if (func_190(unk_0xD803B885F5E47A62()) > 0xFFFFFFFF)
				{
					unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000007);
					if (func_224(unk_0xD803B885F5E47A62()))
					{
						func_662();
					}
					func_659(func_661(func_190(unk_0xD803B885F5E47A62())));
				}
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000007))
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000007);
		func_657();
	}
}

void func_657()
{
	if (func_658())
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000011);
	}
}

bool func_658()
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000011);
}

void func_659(int iParam0)
{
	int iVar0;
	
	if (Global_40001.f_217B)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Global_200000[func_660() /*10930*/].f_181E.f_100F[iVar0 /*3*/] == iParam0)
		{
			if (Global_14073A.f_1[iVar0] == 0xFFFFFFFF)
			{
				Global_14073A.f_1[iVar0] = iParam0;
				Global_14073A = 0x00000001;
				return;
			}
		}
		iVar0++;
	}
}

int func_660()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

int func_661(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000096:
			return 0x00000043;
		
		case 0x000000EC:
			return 0x00000043;
		
		case 0x00000085:
			return 0x00000045;
		
		default:
	}
	return 0x00000044;
}

void func_662()
{
	if (!func_658())
	{
		Global_26B66F.f_19B1 = unk_0x2B6E0A53779D29EA();
		unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000011);
	}
}

int func_663()
{
	if (Global_2537E2.f_484.f_5 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_664()
{
	if (func_663())
	{
		Global_2537E2.f_484.f_10 = 0x00000001;
	}
}

bool func_665(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		if (((func_242() && !func_237()) || func_203(unk_0xD803B885F5E47A62(), 0x00000015)) || func_203(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			return 0x00000001;
		}
		if (func_22(&(Global_1806FA.f_D)))
		{
			if (!func_19(&(Global_1806FA.f_D), Global_40001.f_E, 0x00000000))
			{
				return 0x00000001;
			}
			func_106(&(Global_1806FA.f_D));
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x0000000A))
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000009);
}

void func_666(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000001);
	if (iParam0 != 0x00000085)
	{
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000001);
	}
	Global_26B66F.f_136B = 0xFFFFFFFF;
	bVar0 = (func_238(unk_0xD803B885F5E47A62(), 0x00000000) && func_231(unk_0xD803B885F5E47A62()));
	if (bParam6)
	{
		func_675(func_676(iParam0), 0x00000001);
	}
	else
	{
		func_674(iParam0, 0xFFFFFFFF);
		if (func_202(unk_0xD803B885F5E47A62()))
		{
			Global_1806FA.f_3 = iParam0;
		}
		else
		{
			func_704(iParam0);
		}
		Global_1806FA.f_4 = 0xFFFFFFFF;
		if (func_202(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000005);
		}
		if (((func_242() && !func_237()) || func_203(unk_0xD803B885F5E47A62(), 0x00000015)) || func_203(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000004);
		}
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000011);
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000014);
		if (func_673(iParam0))
		{
			func_672();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_671(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x51B096AAC60548C1(fParam2);
			if (iParam0 == 0x00000092)
			{
				unk_0x34D79252800B23FF(0x00000000);
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			}
		}
		if (func_670(iParam0))
		{
			unk_0x34D79252800B23FF(0x00000000);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000008);
		}
		if (bParam3)
		{
			if (!Global_247C05)
			{
				func_446(0x00000001);
				if (func_595(0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000009);
				}
				if (!bParam6)
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000E);
				}
			}
		}
		if (bParam4)
		{
			func_444(0x00000001);
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000C);
		}
		if (bParam5)
		{
			func_669();
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000C);
		}
		if (!bParam6)
		{
			if (func_667(iParam0))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000015);
			}
		}
	}
	Global_2658D5 = 0x00000001;
}

int func_667(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000081:
		case 0x00000083:
		case 0x0000008D:
		case 0x00000088:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x00000090:
		case 0x00000092:
		case 0x000000EC:
		case 0x00000096:
			return 0x00000001;
		
		default:
	}
	if (func_668())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_668()
{
	switch (func_189())
	{
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_669()
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1362), 0x00000000);
}

int func_670(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000088:
		case 0x00000090:
		case 0x00000081:
			return 0x00000001;
		
		case 0x0000008D:
			if (func_232(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_671(float fParam0)
{
	float fVar0;
	
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_438())
	{
		return;
	}
	fVar0 = (Global_26B66F.f_13FF - fParam0);
	if (unk_0x1727A44C562FBED2(Global_26B66F.f_1400))
	{
		if (!Global_26B66F.f_1400 == unk_0x0D0A574C76D769AC() && unk_0x755FF954DAE327E1(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_26B66F.f_13FF = fParam0;
	Global_26B66F.f_1400 = unk_0x0D0A574C76D769AC();
}

void func_672()
{
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_C8 = 0x00000000;
	unk_0x0674E58A79778E99(&(Global_26B66F.f_11D1), 0x00000001);
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000088:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_674(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 0xFFFFFFFF || iParam1 != 0xFFFFFFFF)
	{
		iVar0 = iParam0;
		if (iVar0 == 0xFFFFFFFF)
		{
			iVar0 = iParam1;
		}
		if (func_259(0x00000000) || func_259(func_206(iVar0)))
		{
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000002);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000002);
		}
	}
}

void func_675(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
	}
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000086:
			return 0x00000015;
		
		case 0x000000FE:
			return 0x00000019;
		
		default:
	}
	return 0x00000000;
}

bool func_677(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_678()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_80.f_1B != joaat("valkyrie"))
	{
		return 0x00000001;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	iVar1 = unk_0x7087E053058E9F6C(joaat("valkyrie"));
	iVar2 = 0x00000000;
	while (iVar2 < iVar1)
	{
		iVar4 = unk_0xA30B8362589C124A(iVar0, iVar2, 0x00000000);
		if (iVar4 != 0x00000000)
		{
			if (!unk_0xEB6A8945D1AC98A1(iVar4))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar4))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	if (iVar3 > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_679(bool bParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (unk_0xAFE0D3608EDA7039(iVar0))
		{
			unk_0xE121AE1BBF90E186(iVar0, bParam0);
			unk_0x6EEAA5C21760E9DB(iVar0, !bParam0);
		}
	}
}

void func_680(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_1, iVar0))
		{
			*iParam0 = iVar0;
			*uParam1 = Local_80.f_100[iVar0];
		}
		iVar0++;
	}
}

void func_681()
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if (iVar0 != 0xFFFFFFFF)
	{
		Global_18D84D[iVar0 /*615*/] = 0xFFFFFFFF;
	}
}

void func_682(bool bParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (!func_242())
		{
			if (func_844(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000156, 0x00000000);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000007A, 0x00000000);
			}
			unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 1f);
			unk_0x2F82E0AC5EC27DF2(0x00000000);
			unk_0xDC4BBCD7EBECDC32(0x00000001);
			if (Global_1406A2.f_1 == 0x00000000 || Global_1406A2.f_2 == 0x00000001)
			{
				Global_1406A2.f_2 = 0x00000000;
				if (bParam0)
				{
					unk_0x03718F4C6E876DE6(0x00000000, 0x00000000);
				}
			}
		}
		else
		{
			if (func_844(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000156, 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000007A, 0x00000001);
				unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 0.5f);
				if (Global_1406A2.f_1 == 0x00000000 || Global_1406A2.f_2 == 0x00000001)
				{
					unk_0x03718F4C6E876DE6(0x00000001, 0x00000000);
				}
			}
			unk_0x2F82E0AC5EC27DF2(0x00000001);
			unk_0xDC4BBCD7EBECDC32(0x00000000);
		}
	}
}

void func_683(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000000))
		{
			Global_259486 = func_190(unk_0xD803B885F5E47A62());
			if (Global_259486 == 0xFFFFFFFF)
			{
				Global_259486 = Global_1806FA.f_4;
			}
			if (func_703(Global_259486) == 0x00000000)
			{
				if (func_702(0x00000001) > 0x00000000)
				{
					func_701(0x0000001A, 0xFFFFFFFF);
				}
			}
			if (func_242())
			{
				func_627(0x00000002, 0x00000000, 0x00000001);
				func_664();
			}
			if (func_259(0x00000000))
			{
				iVar1 = func_260(0x000009B0, 0xFFFFFFFF, 0x00000000);
				unk_0x0674E58A79778E99(&iVar1, 0x00000000);
				func_664();
			}
			if (func_259(func_206(func_190(unk_0xD803B885F5E47A62()))))
			{
				iVar1 = func_260(0x000009B0, 0xFFFFFFFF, 0x00000000);
				unk_0x0674E58A79778E99(&iVar1, func_206(func_190(unk_0xD803B885F5E47A62())));
				func_664();
			}
			if (func_663())
			{
				func_664();
			}
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000000);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000000))
	{
		if ((!func_223() && !func_700()) && !func_699())
		{
			Global_259486 = 0xFFFFFFFF;
			func_616(0x0000001A, 0xFFFFFFFF);
		}
		else if (func_703(Global_259486) == 0x00000000)
		{
			iVar0 = func_686(0x00000001);
			if (iVar0 > 0x00000000)
			{
				func_684(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_485(0x0000078C, 0x00000001, 0xFFFFFFFF);
				func_684(joaat("mpply_activity_ended"), 0x00000001);
			}
		}
		else if (func_618(0x0000001A, 0xFFFFFFFF))
		{
			Global_259486 = 0xFFFFFFFF;
			func_616(0x0000001A, 0xFFFFFFFF);
		}
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000000);
	}
}

void func_684(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_469(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_685(iParam0))
	{
		func_467(iParam0, iVar0);
	}
	else
	{
		func_471(iParam0, iVar0);
	}
}

int func_685(int iParam0)
{
	if (Global_152D85)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_686(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000002;
	iVar1 = 0x00000000;
	if (Global_259029 == 0x00000000)
	{
		return 0x00000000;
	}
	if (func_699())
	{
		if (unk_0xA14BB9332558B949() || (func_698() || func_696()))
		{
			Global_258C0C = 0x00000001;
		}
	}
	Global_259029 = 0x00000000;
	if (Global_141378)
	{
		iVar0 = 0x00000001;
	}
	if (Global_258C0C)
	{
		iVar0 = 0x00000001;
	}
	if (Global_258C0B)
	{
		iVar0 = 0x00000001;
	}
	if (func_551(Global_1B04A.f_1, 0x00000020))
	{
		iVar0 = 0x00000001;
	}
	if (Global_258BBE)
	{
		iVar0 = 0x00000001;
	}
	if (func_695(0x00000200))
	{
		iVar0 = 0x00000001;
	}
	if (func_694(0x00000080))
	{
		iVar0 = 0x00000001;
	}
	if (Global_141390 == 0x00000001 && iVar1 == 0x00000000)
	{
		iVar0 = 0x00000000;
	}
	if (func_168())
	{
		iVar0 = 0x00000000;
	}
	if (Global_258DF8)
	{
		iVar0 = 0x00000002;
	}
	if (iParam0 == 0x00000000)
	{
		if (!func_692())
		{
			if (Global_440000.f_30296 == 0x00000000)
			{
				iVar0 = 0x00000000;
			}
		}
	}
	if (func_16(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		iVar0 = 0x00000000;
	}
	if (func_691())
	{
		iVar0 = 0x00000000;
	}
	if ((Global_258C0C || Global_258C0B) || Global_141378)
	{
		if (func_696())
		{
			iVar0 = 0x00000000;
		}
	}
	Global_258DF8 = 0x00000000;
	Global_258C0B = 0x00000000;
	Global_258C0C = 0x00000000;
	Global_141378 = 0x00000000;
	Global_258BBE = 0x00000000;
	func_689(&(Global_1B04A.f_1), 0x00000020);
	func_688(0x00000200);
	func_687(0x00000080);
	return iVar0;
}

void func_687(int iParam0)
{
	Global_1B083 = (Global_1B083 - (Global_1B083 && iParam0));
}

void func_688(int iParam0)
{
	Global_1B084 = (Global_1B084 - (Global_1B084 && iParam0));
}

void func_689(var uParam0, int iParam1)
{
	func_690(uParam0, iParam1);
}

void func_690(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_691()
{
	if (((Global_18061C || Global_1805FE) || func_16(unk_0xD803B885F5E47A62(), 0x00000000)) || func_584())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_692()
{
	switch (func_693())
	{
		case 0x0000000F:
		case 0x0000000E:
		case 0x0000000B:
		case 0x0000000D:
		case 0x0000000C:
		case 0x0000007A:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_693()
{
	return Global_2567E2.f_1.f_B06;
}

bool func_694(int iParam0)
{
	return (Global_1B083 && iParam0) != 0x00000000;
}

bool func_695(int iParam0)
{
	return (Global_1B084 && iParam0) != 0x00000000;
}

int func_696()
{
	if (func_703(Global_259486))
	{
		return 0x00000000;
	}
	if (func_697(unk_0xD803B885F5E47A62(), 0x00000092))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_697(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/] == iParam1)
	{
		return func_232(iParam0);
	}
	return 0x00000000;
}

int func_698()
{
	if (func_703(Global_259486))
	{
		return 0x00000000;
	}
	if (func_232(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_699()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1406A9, 0x00000000);
}

bool func_700()
{
	return Global_14084E;
}

void func_701(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_18();
	}
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x25C34E9F657F1C79(0x00000000, iParam1);
			break;
		
		default:
			uVar1 = func_617(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(uVar1);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x5D96D8530B3D0904(&iVar0, iParam0);
				unk_0x25C34E9F657F1C79(iVar0, iParam1);
			}
			break;
	}
}

int func_702(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000002;
	iVar1 = 0x00000000;
	if (Global_141390 == 0x00000001 && iVar1 == 0x00000000)
	{
		iVar0 = 0x00000000;
	}
	if (func_168())
	{
		iVar0 = 0x00000000;
	}
	if (iParam0 == 0x00000000)
	{
		if (!func_692())
		{
			if (Global_440000.f_30296 == 0x00000000)
			{
				iVar0 = 0x00000000;
			}
		}
	}
	if (func_16(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		iVar0 = 0x00000000;
	}
	if (func_691())
	{
		iVar0 = 0x00000000;
	}
	Global_259029 = 0x00000001;
	return iVar0;
}

int func_703(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000083:
			if (Global_40001.f_2C7D)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000084:
			if (Global_40001.f_2C7F)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000085:
			if (Global_40001.f_2C7C)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000088:
			if (Global_40001.f_2C80)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000008A:
			if (Global_40001.f_2C81)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000008B:
			if (Global_40001.f_2C82)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000081:
			if (Global_40001.f_2C7E)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000008C:
			if (Global_40001.f_2C83)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000008D:
			if (Global_40001.f_2C84)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000090:
			if (Global_40001.f_2C85)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000092:
			if (Global_40001.f_2C86)
			{
				return 0x00000001;
			}
			break;
		
		case 0x000000EC:
		case 0x00000096:
			break;
	}
	return 0x00000000;
}

void func_704(int iParam0)
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/] = iParam0;
}

void func_705(int iParam0)
{
	Global_259116 = iParam0;
}

void func_706(int iParam0)
{
	if (func_200())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000000))
			{
				if ((((func_708(0x0000EA60) && !unk_0xFEBC1E4EC9E001F0()) && !func_405()) && !unk_0x798A3F1296751F46()) && func_422(0x00000000, 0x00000001, 0x00000001, 0x00000001))
				{
					if (!func_742())
					{
						func_707("UW_HELP1", func_626(), func_625(0x00000001), 0x00007530);
					}
					else
					{
						func_707("UW_HELP1C", func_626(), func_625(0x00000001), 0x00007530);
					}
					func_420(0x00000000);
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000000);
				}
			}
			break;
	}
}

void func_707(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(uParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam3);
}

bool func_708(int iParam0)
{
	return unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(Global_24D547, unk_0x2B6E0A53779D29EA())) > iParam0;
}

void func_709()
{
	int iVar0;
	
	unk_0x0674E58A79778E99(&iLocal_85, 0x0000000F);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		func_710(iVar0);
		iVar0++;
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000F))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000F))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000F);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000F))
	{
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000F);
	}
}

void func_710(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
	if (unk_0xE9F78D191AD5EDBA(Local_80.f_7[iParam0]))
	{
		if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_80.f_7[iParam0]), 0x00000000))
		{
			if (Local_80.f_F1 == 0x00000000)
			{
			}
		}
		if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_80.f_7[iParam0]), 0x00000000))
		{
			if (!func_200())
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_1, iParam0))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000F))
						{
							if (unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()) == unk_0xB177666FAB6F4417(Local_80.f_7[iParam0]))
							{
								unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000F);
							}
						}
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[iParam0]), 0x00000000))
						{
							if (func_714("UW_HELP2", func_626()) || func_714("UW_HELP2C", func_626()))
							{
								unk_0xA37A90C62806D848(0x00000001);
							}
							if (!func_411(unk_0xD803B885F5E47A62()))
							{
								func_631(0x00000001);
							}
							iVar0 = func_713(unk_0x16F2683693E537C9(), 0x00000000);
							if (func_624("UW_HELP1", func_626(), func_625(0x00000001)) || func_624("UW_HELP1C", func_626(), func_625(0x00000001)))
							{
								unk_0xA37A90C62806D848(0x00000001);
							}
							if (Local_80.f_1CF != 0xFFFFFFFF)
							{
								if (iVar0 > (Local_80.f_1CF - 0x00000002))
								{
									iVar0 = (Local_80.f_1CF - 0x00000002);
									if (iVar0 < 0xFFFFFFFF)
									{
										iVar0 = 0xFFFFFFFF;
									}
								}
							}
							unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), (0x00000000 + iVar0 + 1));
							unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_1), iParam0);
							Local_83[unk_0x57270EE11514DC67() /*18*/].f_9 = iParam0;
							unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000018E, 0x00000001);
							func_192();
							iLocal_568 = iVar0;
						}
						else if (Local_80.f_F1 == 0x00000000)
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000001))
							{
								if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
								{
									if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_80.f_7[iParam0]), 0x00000001)) < 2500f)
									{
										if (func_422(0x00000000, 0x00000001, 0x00000001, 0x00000001))
										{
											if (!func_742())
											{
												func_712("UW_HELP2", func_626(), 0x00007530);
											}
											else
											{
												func_712("UW_HELP2C", func_626(), 0x00007530);
											}
											func_420(0x00000001);
											unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000001);
										}
									}
								}
							}
							if (!func_242())
							{
								if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000002))
								{
									unk_0x0674E58A79778E99(&iLocal_85, 0x00000002);
								}
								if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
								{
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000004))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x0000000C))
										{
											unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x0000000C);
										}
										if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
										{
											if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_80.f_7[iParam0]), 0x00000001)) < 2500f)
											{
												if (func_422(0x00000000, 0x00000001, 0x00000001, 0x00000001))
												{
													if (!func_742())
													{
														func_421("UW_COPS", 0x00007530);
													}
													else
													{
														func_421("UW_COPSC", 0x00007530);
													}
													func_420(0x00000001);
													unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000004);
												}
											}
										}
									}
									else if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_80.f_7[iParam0]), 0x00000001)) > 10000f)
									{
										unk_0x0674E58A79778E99(&iLocal_84, 0x00000004);
									}
								}
								else
								{
									if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000004))
									{
										unk_0x0674E58A79778E99(&iLocal_84, 0x00000004);
									}
									if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x0000000C))
									{
										unk_0x0674E58A79778E99(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x0000000C);
									}
								}
							}
							else
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x0000000C))
								{
									unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x0000000C);
								}
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000002))
								{
									if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_80.f_7[iParam0]), 0x00000001)) < 2500f)
									{
										if (func_422(0x00000000, 0x00000001, 0x00000001, 0x00000001))
										{
											if (!func_742())
											{
												func_421("UW_PASSMD", 0x00007530);
											}
											else
											{
												func_421("UW_PASSMD", 0x00007530);
											}
											func_420(0x00000001);
											unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000002);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 == 0x00000000)
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[iParam0]), 0x00000000))
							{
								iVar2 = 0x00000000;
								while (iVar2 < Local_80.f_1C)
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, (0x00000000 + iVar2)))
									{
										func_9();
										unk_0x0674E58A79778E99(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), (0x00000000 + iVar2));
									}
									iVar2++;
								}
								if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_1, iParam0))
								{
									unk_0x0674E58A79778E99(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_1), iParam0);
								}
								if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_9 != 0xFFFFFFFF)
								{
									Local_83[unk_0x57270EE11514DC67() /*18*/].f_9 = 0xFFFFFFFF;
								}
								if (func_677("UW_TIMEL"))
								{
									unk_0xA37A90C62806D848(0x00000001);
								}
								if (func_677("UW_TIMELA"))
								{
									unk_0xA37A90C62806D848(0x00000001);
								}
								if (func_411(unk_0xD803B885F5E47A62()))
								{
									func_631(0x00000000);
								}
								unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000018E, 0x00000000);
							}
							else
							{
								if (Local_80.f_F1 == 0x00000000 && !unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000004))
								{
									iVar0 = func_713(unk_0x16F2683693E537C9(), 0x00000000);
									if (Local_80.f_1CF != 0xFFFFFFFF)
									{
										if (iVar0 > (Local_80.f_1CF - 0x00000002))
										{
											iVar0 = (Local_80.f_1CF - 0x00000002);
										}
									}
									if (iVar0 != iLocal_568)
									{
										unk_0x0674E58A79778E99(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_1), iParam0);
										unk_0x0674E58A79778E99(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), (0x00000000 + iLocal_568 + 1));
									}
								}
								bVar1 = 0x00000000;
								if (func_261())
								{
									if (Local_80.f_19D > 0xFFFFFFFF)
									{
										iVar3 = (Local_80.f_19D - func_126(&(Local_80.f_146), 0x00000000, 0x00000000));
										if (iVar3 < 0x000007D0)
										{
											bVar1 = 0x00000001;
										}
									}
								}
								func_711(bVar1);
								if (unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_7[iParam0])) == joaat("rhino"))
								{
									unk_0xE6A9CBAC5F976EB8(unk_0xB177666FAB6F4417(Local_80.f_7[iParam0]));
								}
								if (!func_22(&uLocal_98))
								{
									func_20(&uLocal_98, 0x00000000, 0x00000000);
								}
								else if (func_19(&uLocal_98, 0x000007D0, 0x00000000))
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000009) || !func_742())
									{
										if (func_677("UW_MINV"))
										{
										}
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000005))
										{
											if (Local_80.f_1C > 0x00000001 || (Local_80.f_1C == 0x00000001 && func_112() > 0x00000001))
											{
												if (func_22(&(Local_80.f_146)))
												{
													if (!unk_0xFEBC1E4EC9E001F0())
													{
														if (func_112() > 0x00000001)
														{
															func_421("UW_TIMELA", 0x00007530);
														}
														else
														{
															func_421("UW_TIMEL", 0x00007530);
														}
														func_420(0x00000001);
														unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000005);
													}
												}
											}
										}
									}
									else if (func_742())
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000009))
										{
											if (unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_7[iParam0])) != joaat("valkyrie"))
											{
												if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x0000000E))
												{
													if (!unk_0xFEBC1E4EC9E001F0())
													{
														func_421("UW_MINV", 0x00007530);
														func_420(0x00000001);
														unk_0x5D96D8530B3D0904(&iLocal_84, 0x0000000E);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_80.f_F1 == 0x00000000)
					{
						if (unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_7[iParam0])) == joaat("valkyrie"))
						{
							if (!func_677("UW_VALK") && !func_677("UW_VALKC"))
							{
								unk_0xC6436D1B1063CD1D();
								if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000008))
								{
									unk_0x0674E58A79778E99(&iLocal_84, 0x00000008);
								}
							}
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000008))
							{
								if (!unk_0xFEBC1E4EC9E001F0())
								{
									iVar6 = 0x00000000;
									iVar4 = unk_0xD6DF381716822EFE(unk_0xB177666FAB6F4417(Local_80.f_7[iParam0])) + 1;
									iVar5 = 0x00000000;
									while (iVar5 < iVar4)
									{
										if (!unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_80.f_7[iParam0]), (iVar5 - 0x00000001), 0x00000000))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 0x00000001)
									{
										if (!func_742())
										{
											func_421("UW_VALK", 0x00007530);
										}
										else
										{
											func_421("UW_VALKC", 0x00007530);
										}
										func_420(0x00000001);
										unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000008);
									}
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000008))
									{
										if (func_742())
										{
											iVar7 = 0x00000000;
											iVar7 = 0x00000000;
											while (iVar7 < 0x00000004)
											{
												if (!bVar8)
												{
													if (iVar7 != iParam0)
													{
														iVar5 = 0x00000000;
														iVar6 = 0x00000000;
														if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar7]))
														{
															if (func_109(Local_80.f_7[iVar7]))
															{
																iVar5 = 0x00000000;
																while (iVar5 < iVar4)
																{
																	if (!unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_80.f_7[iVar7]), (iVar5 - 0x00000001), 0x00000000))
																	{
																		iVar6++;
																	}
																	iVar5++;
																}
																if (iVar6 > 0x00000001)
																{
																	bVar8 = 0x00000001;
																}
															}
														}
													}
												}
												iVar7++;
											}
											if (!bVar8)
											{
												func_421("UW_VALKC", 0x00007530);
												func_420(0x00000001);
												unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000008);
											}
										}
									}
								}
							}
						}
					}
					if (Local_80.f_F1 == 0x00000001)
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_1, iParam0))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000006))
							{
								if (func_109(Local_80.f_7[iParam0]))
								{
									if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
									{
										if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[iParam0])))
										{
											if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000007))
											{
												if ((unk_0xBFC0798A6E3417F9(0x00000000, 0x0000004B) || unk_0x06F8112AA79C53D9(0x00000000, 0x0000004B)) || unk_0x7FEE810EE9E768EB(0x00000000, 0x0000004B))
												{
													unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000007);
												}
											}
											if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000007))
											{
												if (!unk_0xFEBC1E4EC9E001F0())
												{
													if (func_742())
													{
														func_421("UW_EXITVC", 0x00007530);
													}
													else
													{
														func_421("UW_EXITV", 0x00007530);
													}
													func_420(0x00000001);
													unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000006);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				iVar10 = 0x00000000;
				while (iVar10 < 0x00000004)
				{
					if (unk_0xE9F78D191AD5EDBA(Local_80.f_7[iVar10]))
					{
						if (unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_80.f_7[iVar10]), 0x00000000))
						{
							if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_80.f_7[iVar10]), 0x00000000))
							{
								bVar11 = 0x00000001;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_259(0x00000000))
					{
						iVar9 = func_260(0x000009B0, 0xFFFFFFFF, 0x00000000);
						unk_0x0674E58A79778E99(&iVar9, 0x00000000);
						func_479(0x000009B0, iVar9, 0xFFFFFFFF, 0x00000001, 0x00000000);
						func_664();
						if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x00000009))
						{
							unk_0x0674E58A79778E99(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x00000009);
						}
					}
					if (func_259(0x00000008))
					{
						iVar9 = func_260(0x000009B0, 0xFFFFFFFF, 0x00000000);
						unk_0x0674E58A79778E99(&iVar9, 0x00000008);
						func_479(0x000009B0, iVar9, 0xFFFFFFFF, 0x00000001, 0x00000000);
						func_664();
						if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x00000009))
						{
							unk_0x0674E58A79778E99(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x00000009);
						}
					}
				}
				else
				{
					if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
					{
						Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 = 0x00000000;
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x0000000C))
					{
						unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x0000000C);
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000E))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (func_109(Local_80.f_7[iParam0]))
						{
							if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_80.f_7[iParam0]), 0x00000001)) < 2500f)
							{
								if (func_422(0x00000000, 0x00000001, 0x00000001, 0x00000001))
								{
									if (!func_251(0x00000081, 0x00000000, 0x00000000))
									{
										if (!func_742())
										{
											func_421("UW_TUT", 0xFFFFFFFF);
										}
										else
										{
											func_421("UW_TUTC", 0xFFFFFFFF);
										}
										func_420(0x00000001);
										unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000E);
									}
									else
									{
										if (!func_742())
										{
											func_421("UW_HIDE", 0xFFFFFFFF);
										}
										else
										{
											func_421("UW_HIDEC", 0xFFFFFFFF);
										}
										func_420(0x00000001);
										unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000E);
									}
								}
							}
						}
					}
				}
			}
			if (func_844(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001) && Local_83[unk_0x57270EE11514DC67() /*18*/].f_1 != 0x00000000)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11F0, 0x00000001))
				{
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11F0), 0x00000001);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11F0, 0x00000001))
			{
				unk_0x0674E58A79778E99(&(Global_26B66F.f_11F0), 0x00000001);
			}
		}
	}
}

void func_711(bool bParam0)
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000047, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000048, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003C, 0x00000001);
	if (bParam0)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
	}
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000045, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000046, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000005C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000044, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000005B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004A, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000056, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000051, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000052, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000063, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000064, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000041, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000069, 0x00000001);
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
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000033, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000002F, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000018, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000101, 0x00000001);
}

void func_712(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(uParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam2);
}

int func_713(int iParam0, int iParam1)
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

var func_714(char* sParam0, char* sParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(uParam1);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_715()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0xE9F78D191AD5EDBA(Local_80.f_7[iVar0]) && unk_0x526BC32A660C89E6(Local_80.f_7[iVar0]))
		{
			iVar1 = unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]);
			if (unk_0xC844350D5D58C99A(iVar1) && !unk_0x437347B10A200C4B(iVar1, 0x00000000))
			{
				unk_0xC40EC0110EAA9BD5(iVar1, 0x00000001);
			}
		}
		iVar0++;
	}
}

void func_716(vector3 vParam0)
{
	Global_247C09 = { vParam0 };
	Global_247C0C = 0x00000001;
}

void func_717()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
		switch (iVar1)
		{
			case 0x000000B9:
				func_733(iVar0);
				break;
			
			case 0x000000AE:
				func_718(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_718(int iParam0)
{
	int iVar0;
	
	unk_0x218F818E64020C17(0x00000001, iParam0, &iVar0, 0x00000002);
	switch (iVar0)
	{
		case 0x8160D539:
			func_732(iParam0);
			break;
		
		case 0xD8CD795A:
			func_731(iParam0);
			break;
		
		case 0x9D332E23:
			func_730(iParam0);
			break;
		
		case 0x8B632B3D:
			func_729(iParam0);
			break;
		
		case 0x3E7013AB:
			func_728(iParam0);
			break;
		
		case 0x203CDE21:
			func_725(iParam0);
			break;
		
		case 0xAD810679:
			func_719(iParam0);
			break;
	}
}

void func_719(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		iVar4 = vVar0.z;
		if (!unk_0xE5DBF9B6126856CA(Local_80.f_49[iVar4]))
		{
			return;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_6, iVar4))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_10F, iVar4))
			{
				if (func_100(iVar4))
				{
					if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_80.f_49[iVar4]), 0x00000000))
					{
						if (unk_0x08E69DAA97BC8A31(unk_0xD803B885F5E47A62(), unk_0xB177666FAB6F4417(Local_80.f_49[iVar4]), &uVar3))
						{
							bVar6 = 0x00000001;
						}
					}
					else if (unk_0x6992BDA3F5A14B9E(unk_0xD803B885F5E47A62(), unk_0xB177666FAB6F4417(Local_80.f_49[iVar4]), &uVar3))
					{
						bVar6 = 0x00000001;
					}
				}
				else if (!func_742())
				{
					if (Local_80.f_1D1[0x00000000 /*4*/].f_1 > 0x00000000)
					{
						iVar7 = unk_0x117658E336116132(Local_80.f_1D1[0x00000000 /*4*/].f_2);
						if (iVar7 != func_5())
						{
							if (iVar7 == unk_0xD803B885F5E47A62())
							{
								bVar6 = 0x00000001;
							}
						}
					}
					else if (unk_0xE5DBF9B6126856CA(Local_80.f_7[0x00000000]))
					{
						if (func_109(Local_80.f_7[0x00000000]))
						{
							iVar9 = unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_80.f_7[0x00000000]), 0xFFFFFFFF, 0x00000000);
							if (iVar9 != 0x00000000)
							{
								if (unk_0x34BFC6F0CB887BC2(iVar9))
								{
									iVar8 = unk_0x83FACCC48B68F9D1(iVar9);
									if (iVar8 == unk_0xD803B885F5E47A62())
									{
										bVar6 = 0x00000001;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar6)
		{
			if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 < 0x00000002)
			{
				iVar2 = func_724();
				iVar10 = unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_49[iVar4]));
				iVar5 = iVar4 * 4;
				if (func_723(iVar10))
				{
					iVar1 = func_42(iVar10);
					iVar12 = iVar5;
					while (iVar12 <= (iVar5 + (iVar1 - 0x00000001)))
					{
						if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar12]) && !unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar12)], func_90(iVar12)))
						{
							iVar11++;
							unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar12)]), func_90(iVar12));
						}
						iVar12++;
					}
					Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 = (Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 + iVar11);
					iVar2 = (iVar2 * iVar11);
				}
				else
				{
					Local_83[unk_0x57270EE11514DC67() /*18*/].f_8++;
				}
				if (Local_81.f_B == 0x00000000)
				{
					Local_81.f_B = unk_0xDD0E7998AE8AD485();
				}
				if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 <= func_722())
				{
					Local_81.f_7 = (Local_81.f_7 + iVar2);
					func_721(0x00000000, "", 0xCBCDA251, 0x092A9843, iVar2, 0x00000001, 0xFFFFFFFF, 0x00000000);
					func_720();
				}
			}
			unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_6), iVar4);
		}
	}
}

void func_720()
{
	if (!func_22(&uLocal_557) || (func_22(&uLocal_557) && func_19(&uLocal_557, 0x000007D0, 0x00000000)))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Kill_List_Counter", "GTAO_FM_Events_Soundset", 0x00000000);
		func_106(&uLocal_557);
		func_20(&uLocal_557, 0x00000000, 0x00000000);
	}
}

var func_721(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_464(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_722()
{
	if (func_742())
	{
		return Global_40001.f_2C32;
	}
	return Global_40001.f_2BF5;
}

bool func_723(int iParam0)
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_724()
{
	if (func_742())
	{
		return Global_40001.f_2C31;
	}
	return Global_40001.f_2BF4;
}

void func_725(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		iVar4 = vVar0.z;
		if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_6, iVar4))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_10F, iVar4))
			{
				if (func_727(iVar4))
				{
					bVar6 = 0x00000001;
				}
				else if (!func_726(iVar4))
				{
					if (func_100(iVar4))
					{
						if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_80.f_49[iVar4]), 0x00000000))
						{
							if (unk_0x08E69DAA97BC8A31(unk_0xD803B885F5E47A62(), unk_0xB177666FAB6F4417(Local_80.f_49[iVar4]), &uVar3))
							{
								bVar6 = 0x00000001;
							}
						}
						else if (unk_0x6992BDA3F5A14B9E(unk_0xD803B885F5E47A62(), unk_0xB177666FAB6F4417(Local_80.f_49[iVar4]), &uVar3))
						{
							bVar6 = 0x00000001;
						}
					}
					else if (!func_742())
					{
						if (Local_80.f_1D1[0x00000000 /*4*/].f_1 > 0x00000000)
						{
							iVar7 = unk_0x117658E336116132(Local_80.f_1D1[0x00000000 /*4*/].f_2);
							if (iVar7 != func_5())
							{
								if (iVar7 == unk_0xD803B885F5E47A62())
								{
									bVar6 = 0x00000001;
								}
							}
						}
						else if (unk_0xE5DBF9B6126856CA(Local_80.f_7[0x00000000]))
						{
							if (func_109(Local_80.f_7[0x00000000]))
							{
								iVar9 = unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_80.f_7[0x00000000]), 0xFFFFFFFF, 0x00000000);
								if (iVar9 != 0x00000000)
								{
									if (unk_0x34BFC6F0CB887BC2(iVar9))
									{
										iVar8 = unk_0x83FACCC48B68F9D1(iVar9);
										if (iVar8 == unk_0xD803B885F5E47A62())
										{
											bVar6 = 0x00000001;
										}
									}
								}
							}
						}
					}
				}
				if (bVar6)
				{
					if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 < 0x00000002)
					{
						iVar1 = func_42(joaat("savage"));
						iVar5 = iVar4 * 4;
						iVar11 = 0x00000000;
						iVar10 = iVar5;
						while (iVar10 <= (iVar5 + (iVar1 - 0x00000001)))
						{
							if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar10]) && !unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar10)], func_90(iVar10)))
							{
								iVar11++;
								unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar10)]), func_90(iVar10));
							}
							iVar10++;
						}
						Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 = (Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 + iVar11);
						iVar2 = (iVar2 * iVar11);
						if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 <= func_722())
						{
							iVar2 = func_724();
							iVar2 = (iVar2 * iVar1);
							Local_81.f_7 = (Local_81.f_7 + iVar2);
							func_721(0x00000000, "", 0xCBCDA251, 0x092A9843, iVar2, 0x00000001, 0xFFFFFFFF, 0x00000000);
							func_720();
							if (Local_81.f_B == 0x00000000)
							{
								Local_81.f_B = unk_0xDD0E7998AE8AD485();
							}
						}
						unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_6), iVar4);
					}
				}
			}
		}
	}
}

int func_726(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (Local_83[iVar0 /*18*/].f_B[iParam0] > 0x00000000)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_727(int iParam0)
{
	int iVar0;
	
	if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_B[iParam0] == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (iVar0 != unk_0x57270EE11514DC67())
			{
				if (Local_83[iVar0 /*18*/].f_B[iParam0] > Local_83[unk_0x57270EE11514DC67() /*18*/].f_B[iParam0])
				{
					return 0x00000000;
				}
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_728(int iParam0)
{
	vector3 vVar0;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (unk_0x15673EFF6BDD825C("am_kill_list", 0xFFFFFFFF, 0x00000000) != func_5())
		{
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			unk_0x5D96D8530B3D0904(&(Local_80.f_1D0), vVar0.z);
		}
	}
}

void func_729(int iParam0)
{
	vector3 vVar0;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		unk_0x5D96D8530B3D0904(&uLocal_544, vVar0.z);
	}
}

void func_730(int iParam0)
{
	vector3 vVar0;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		unk_0x5D96D8530B3D0904(&uLocal_545, vVar0.z);
	}
}

void func_731(int iParam0)
{
	vector3 vVar0;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(vVar0.z)], func_90(vVar0.z)))
		{
			unk_0x0674E58A79778E99(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(vVar0.z)]), func_90(vVar0.z));
		}
	}
}

void func_732(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		iVar1 = vVar0.z;
		if (unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_6, iVar1))
		{
			unk_0x0674E58A79778E99(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_6), iVar1);
		}
	}
}

void func_733(int iParam0)
{
	struct<6> Var0;
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
	var uVar12;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &Var0, 0x0000000D))
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000005)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_6, iVar1))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_10F, iVar1))
				{
					if (unk_0xC844350D5D58C99A(Var0))
					{
						if (unk_0xE2F1E99DD161A861(Var0))
						{
							if (unk_0xE5DBF9B6126856CA(Local_80.f_49[iVar1]))
							{
								if (unk_0xC844350D5D58C99A(unk_0xB177666FAB6F4417(Local_80.f_49[iVar1])))
								{
									if (unk_0x96A5FE5834B81CE7(Var0) == unk_0xB177666FAB6F4417(Local_80.f_49[iVar1]))
									{
										if (unk_0xC844350D5D58C99A(Var0.f_1))
										{
											if (unk_0xEC560E589DF8370E(Var0.f_1))
											{
												if (unk_0x940C1429253D3B1B(Var0.f_1) == unk_0x16F2683693E537C9())
												{
													if (Var0.f_5)
													{
														iVar4 = unk_0x134B62B726CEC8E6(Var0);
														if (Local_80.f_1B == joaat("hydra"))
														{
															if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 < 0x00000002)
															{
																iVar7 = func_724();
																if (func_723(iVar4))
																{
																	iVar2 = func_42(iVar4);
																	Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 = (Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 + iVar2);
																	iVar7 = (iVar7 * iVar2);
																}
																else
																{
																	Local_83[unk_0x57270EE11514DC67() /*18*/].f_8++;
																}
																if (Local_81.f_B == 0x00000000)
																{
																	Local_81.f_B = unk_0xDD0E7998AE8AD485();
																}
																if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 <= func_722())
																{
																	Local_81.f_7 = (Local_81.f_7 + iVar7);
																	func_721(0x00000000, "", 0xCBCDA251, 0x092A9843, iVar7, 0x00000001, 0xFFFFFFFF, 0x00000000);
																	func_720();
																}
															}
															unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_6), iVar1);
														}
														else if (iVar4 == joaat("buzzard"))
														{
															iVar9 = 0xFFFFFFFF;
															iVar9 = 0xFFFFFFFF;
															while (iVar9 <= 0x00000003)
															{
																iVar6 = unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_80.f_49[iVar1]), iVar9, 0x00000000);
																if (iVar6 != 0x00000000)
																{
																	iVar8 = func_734(iVar6);
																	if (iVar8 > 0xFFFFFFFF)
																	{
																		if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_110[func_91(iVar8)], func_90(iVar8)))
																		{
																			if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar8)], func_90(iVar8)))
																			{
																				unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar8)]), func_90(iVar8));
																				iVar7 = func_724();
																				Local_83[unk_0x57270EE11514DC67() /*18*/].f_8++;
																				if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 <= func_722())
																				{
																					Local_81.f_7 = (Local_81.f_7 + iVar7);
																					func_721(0x00000000, "", 0xCBCDA251, 0x092A9843, iVar7, 0x00000001, 0xFFFFFFFF, 0x00000000);
																					func_720();
																				}
																				if (unk_0x3C583F939C836C5C(unk_0x1B50683925F00106(Local_80.f_30[iVar8])))
																				{
																					func_92(&(Local_92[iVar8 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar9++;
															}
															unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_6), iVar1);
														}
													}
													else if (!func_109(Local_80.f_49[iVar1]))
													{
													}
												}
												else if (Var0.f_5)
												{
													if (unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(Var0.f_1)))
													{
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Local_80.f_1B != joaat("hydra"))
		{
			iVar1 = 0x00000000;
			while (iVar1 <= 0x00000013)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_110[func_91(iVar1)], func_90(iVar1)))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar1)], func_90(iVar1)))
					{
						if (unk_0xC844350D5D58C99A(Var0))
						{
							if (unk_0xEC560E589DF8370E(Var0))
							{
								if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar1]))
								{
									if (unk_0xC844350D5D58C99A(unk_0xB177666FAB6F4417(Local_80.f_30[iVar1])))
									{
										if (unk_0x940C1429253D3B1B(Var0) == unk_0x1B50683925F00106(Local_80.f_30[iVar1]))
										{
											if (Var0.f_5)
											{
												if (unk_0xC844350D5D58C99A(Var0.f_1))
												{
													if (unk_0xEC560E589DF8370E(Var0.f_1))
													{
														iVar5 = unk_0x940C1429253D3B1B(Var0.f_1);
														if (unk_0x34BFC6F0CB887BC2(iVar5))
														{
															if (iVar5 == unk_0x16F2683693E537C9())
															{
																if (Var0.f_5)
																{
																	iVar7 = func_724();
																	if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 < 0x00000002)
																	{
																		Local_83[unk_0x57270EE11514DC67() /*18*/].f_8++;
																		if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 <= func_722())
																		{
																			func_721(0x00000000, "", 0xCBCDA251, 0x092A9843, iVar7, 0x00000001, 0xFFFFFFFF, 0x00000000);
																			Local_81.f_7 = (Local_81.f_7 + iVar7);
																			func_720();
																		}
																	}
																	if (Local_81.f_B == 0x00000000)
																	{
																		Local_81.f_B = unk_0xDD0E7998AE8AD485();
																	}
																	unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar1)]), func_90(iVar1));
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (iVar1 < 0x00000005)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_6, iVar1))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_10F, iVar1))
						{
							if (unk_0xC844350D5D58C99A(Var0))
							{
								if (unk_0xE2F1E99DD161A861(Var0))
								{
									if (unk_0xE5DBF9B6126856CA(Local_80.f_49[iVar1]))
									{
										if (unk_0xC844350D5D58C99A(unk_0xB177666FAB6F4417(Local_80.f_49[iVar1])))
										{
											if (unk_0x96A5FE5834B81CE7(Var0) == unk_0xB177666FAB6F4417(Local_80.f_49[iVar1]))
											{
												if (unk_0x134B62B726CEC8E6(Var0) == joaat("savage"))
												{
													if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar1)], func_90(iVar1)))
													{
														if (Var0.f_5)
														{
															if (unk_0xC844350D5D58C99A(Var0.f_1))
															{
																if (unk_0xEC560E589DF8370E(Var0.f_1))
																{
																	iVar5 = unk_0x940C1429253D3B1B(Var0.f_1);
																	if (unk_0x34BFC6F0CB887BC2(iVar5))
																	{
																		if (iVar5 == unk_0x16F2683693E537C9())
																		{
																			if (Var0.f_5)
																			{
																				if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 < 0x00000002)
																				{
																					iVar2 = func_42(joaat("savage"));
																					Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 = (Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 + iVar2);
																					iVar7 = func_724();
																					iVar7 = (iVar7 * iVar2);
																					if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 <= func_722())
																					{
																						func_721(0x00000000, "", 0xCBCDA251, 0x092A9843, iVar7, 0x00000001, 0xFFFFFFFF, 0x00000000);
																						Local_81.f_7 = (Local_81.f_7 + iVar7);
																						func_720();
																						if (Local_81.f_B == 0x00000000)
																						{
																							Local_81.f_B = unk_0xDD0E7998AE8AD485();
																						}
																					}
																					iVar10 = iVar1 * 4;
																					unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar10)]), func_90(iVar10));
																					unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar10 + 1)]), func_90(iVar10 + 1));
																					unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar10 + 2)]), func_90(iVar10 + 2));
																					unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar10 + 3)]), func_90(iVar10 + 3));
																					unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_6), iVar1);
																				}
																			}
																		}
																	}
																	else if (func_727(iVar1))
																	{
																		if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 < 0x00000002)
																		{
																			iVar2 = func_42(joaat("savage"));
																			Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 = (Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 + iVar2);
																			if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 <= func_722())
																			{
																				iVar7 = func_724();
																				iVar7 = (iVar7 * iVar2);
																				Local_81.f_7 = (Local_81.f_7 + iVar7);
																				func_721(0x00000000, "", 0xCBCDA251, 0x092A9843, iVar7, 0x00000001, 0xFFFFFFFF, 0x00000000);
																				func_720();
																				if (Local_81.f_B == 0x00000000)
																				{
																					Local_81.f_B = unk_0xDD0E7998AE8AD485();
																				}
																			}
																			iVar10 = iVar1 * 4;
																			unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar10)]), func_90(iVar10));
																			unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar10 + 1)]), func_90(iVar10 + 1));
																			unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar10 + 2)]), func_90(iVar10 + 2));
																			unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar10 + 3)]), func_90(iVar10 + 3));
																			unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_6), iVar1);
																		}
																	}
																	else if (func_726(iVar1))
																	{
																	}
																	else if (unk_0x6992BDA3F5A14B9E(iVar11, Var0, &uVar12))
																	{
																		if (iVar11 == unk_0xD803B885F5E47A62())
																		{
																			if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 < 0x00000002)
																			{
																				iVar2 = func_42(joaat("savage"));
																				Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 = (Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 + iVar2);
																				if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 <= func_722())
																				{
																					iVar7 = func_724();
																					iVar7 = (iVar7 * iVar2);
																					Local_81.f_7 = (Local_81.f_7 + iVar7);
																					func_721(0x00000000, "", 0xCBCDA251, 0x092A9843, iVar7, 0x00000001, 0xFFFFFFFF, 0x00000000);
																					func_720();
																					if (Local_81.f_B == 0x00000000)
																					{
																						Local_81.f_B = unk_0xDD0E7998AE8AD485();
																					}
																				}
																				iVar10 = iVar1 * 4;
																				unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar10)]), func_90(iVar10));
																				unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar10 + 1)]), func_90(iVar10 + 1));
																				unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar10 + 2)]), func_90(iVar10 + 2));
																				unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar10 + 3)]), func_90(iVar10 + 3));
																				unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_6), iVar1);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (unk_0xC844350D5D58C99A(Var0.f_1))
															{
																if (unk_0xEC560E589DF8370E(Var0.f_1))
																{
																	iVar5 = unk_0x940C1429253D3B1B(Var0.f_1);
																	if (unk_0x34BFC6F0CB887BC2(iVar5))
																	{
																		if (iVar5 == unk_0x16F2683693E537C9())
																		{
																			iVar3 = unk_0xDD0E7998AE8AD485();
																			Local_83[unk_0x57270EE11514DC67() /*18*/].f_B[iVar1] = iVar3;
																		}
																	}
																}
															}
															if (!unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(Var0), 0x00000000))
															{
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				iVar1++;
			}
			iVar1 = 0x00000014;
			while (iVar1 <= 0x00000017)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_110[func_91(iVar1)], func_90(iVar1)))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar1)], func_90(iVar1)))
					{
						if (unk_0xC844350D5D58C99A(Var0))
						{
							if (unk_0xEC560E589DF8370E(Var0))
							{
								if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar1]))
								{
									if (unk_0xC844350D5D58C99A(unk_0xB177666FAB6F4417(Local_80.f_30[iVar1])))
									{
										if (unk_0x940C1429253D3B1B(Var0) == unk_0x1B50683925F00106(Local_80.f_30[iVar1]))
										{
											if (Var0.f_5)
											{
												if (unk_0xC844350D5D58C99A(Var0.f_1))
												{
													if (unk_0xEC560E589DF8370E(Var0.f_1))
													{
														iVar5 = unk_0x940C1429253D3B1B(Var0.f_1);
														if (unk_0x34BFC6F0CB887BC2(iVar5))
														{
															if (iVar5 == unk_0x16F2683693E537C9())
															{
																if (Var0.f_5)
																{
																	if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_11 < 0x00000002)
																	{
																		Local_83[unk_0x57270EE11514DC67() /*18*/].f_8++;
																		if (Local_83[unk_0x57270EE11514DC67() /*18*/].f_8 <= func_722())
																		{
																			iVar7 = func_724();
																			Local_81.f_7 = (Local_81.f_7 + iVar7);
																			if (Local_81.f_B == 0x00000000)
																			{
																				Local_81.f_B = unk_0xDD0E7998AE8AD485();
																			}
																			func_721(0x00000000, "", 0xCBCDA251, 0x092A9843, iVar7, 0x00000001, 0xFFFFFFFF, 0x00000000);
																			func_720();
																		}
																	}
																	unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar1)]), func_90(iVar1));
																}
															}
														}
													}
												}
												else
												{
													unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_3[func_91(iVar1)]), func_90(iVar1));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar1]))
				{
				}
				iVar1++;
			}
		}
	}
}

int func_734(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000018)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar1]))
			{
				if (unk_0x1B50683925F00106(Local_80.f_30[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_735()
{
	int iVar0;
	int iVar1;
	
	if (Local_80.f_1B != joaat("hydra"))
	{
		if (iLocal_570 == 0x00000000)
		{
			iLocal_570 = 0x00000014;
		}
		if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iLocal_570]))
		{
			if (!func_31(Local_80.f_30[iLocal_570]))
			{
				iVar0 = unk_0x9F18A5EDC7374D59(unk_0x1B50683925F00106(Local_80.f_30[iLocal_570]));
				if (iLocal_571[iLocal_570] != iVar0)
				{
					iLocal_571[iLocal_570] = iVar0;
					unk_0x4A13379C8009DF6F(Local_80.f_30[iLocal_570], 0x00000001);
				}
			}
		}
		iLocal_570++;
		if (iLocal_570 == 0x00000017)
		{
			iLocal_570 = 0x00000014;
		}
	}
	if (Local_80.f_1B != joaat("hydra") && Local_80.f_1B != joaat("rhino"))
	{
		if (!bLocal_574)
		{
			if (func_98() == 0x00000005)
			{
				iVar1 = 0x00000000;
				while (iVar1 < 0x00000005)
				{
					if (unk_0xE5DBF9B6126856CA(Local_80.f_49[iVar1]))
					{
						if (func_109(Local_80.f_49[iVar1]))
						{
							if (unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_80.f_49[iVar1])) == joaat("savage"))
							{
								unk_0x4A13379C8009DF6F(Local_80.f_49[iVar1], 0x00000001);
								bLocal_574 = 0x00000001;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (unk_0xE5DBF9B6126856CA(Local_80.f_49[iLocal_572]))
	{
		if (func_109(Local_80.f_49[iLocal_572]))
		{
			iVar0 = unk_0x9F18A5EDC7374D59(unk_0x1B50683925F00106(Local_80.f_49[iLocal_572]));
			if (iLocal_573[iLocal_572] != iVar0)
			{
				iLocal_573[iLocal_572] = iVar0;
				if (!bLocal_574)
				{
					unk_0x4A13379C8009DF6F(Local_80.f_49[iLocal_572], 0x00000001);
				}
			}
		}
	}
	iLocal_572++;
	if (iLocal_572 == 0x00000005)
	{
		iLocal_572 = 0x00000000;
	}
}

void func_736()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar9 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000018)
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_546, iVar0))
		{
			if (Local_80.f_55[iVar0] != 0x00000002)
			{
				unk_0x0674E58A79778E99(&iLocal_546, iVar0);
			}
		}
		if (unk_0xE5DBF9B6126856CA(Local_80.f_30[iVar0]))
		{
			func_740(iVar0);
			if (!func_31(Local_80.f_30[iVar0]))
			{
				switch (Local_80.f_55[iVar0])
				{
					case 0x00000001:
						if (unk_0x526BC32A660C89E6(Local_80.f_30[iVar0]))
						{
							if (unk_0x405E212DDE472467(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0x00000000))
							{
								iVar2 = unk_0x6937EA2286828455(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0x00000000);
								iVar1 = unk_0x134B62B726CEC8E6(iVar2);
								if (unk_0xAFB8495D36825275(iVar1))
								{
									if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0xB41F1A34) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0xB41F1A34) != 0x00000000)
									{
										if (unk_0xA30B8362589C124A(iVar2, 0xFFFFFFFF, 0x00000000) == unk_0x1B50683925F00106(Local_80.f_30[iVar0]))
										{
											iVar5 = func_27();
											if (iVar5 != func_5())
											{
												iVar6 = unk_0x9539D44F3E4492F6(iVar5);
												if (!unk_0xEB6A8945D1AC98A1(iVar6))
												{
													if (func_26(iVar2, iVar6, 0x00000001) > 250f)
													{
														vVar3 = { unk_0x68F4C0EC296D3901(iVar6, 0x00000001) };
														unk_0x9AFA0796FDCABCD5(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), iVar2, 0x00000000, iVar6, vVar3, 0x00000004, 50f, 5f, -1f, 0x00000000, 0x00000064, -1f, 0x00001000);
													}
												}
											}
										}
									}
								}
								else if (unk_0xC41A9202669A24C4(iVar1))
								{
									if (unk_0xA30B8362589C124A(iVar2, 0xFFFFFFFF, 0x00000000) == unk_0x1B50683925F00106(Local_80.f_30[iVar0]))
									{
										iVar11 = 0x00000001;
										iVar10 = (iVar0 / 0x00000004);
									}
									if ((unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0xB41F1A34) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0xB41F1A34) != 0x00000000) || ((iVar11 && iVar10 < 0x00000005) && iLocal_86[iVar10] != Local_80.f_6E[iVar10]))
									{
										if (unk_0xA30B8362589C124A(iVar2, 0xFFFFFFFF, 0x00000000) == unk_0x1B50683925F00106(Local_80.f_30[iVar0]))
										{
											iVar9 = Local_80.f_6E[iVar10];
											if (iVar9 > 0xFFFFFFFF)
											{
												iVar5 = unk_0x117658E336116132(iVar9);
												if (iVar5 != func_5())
												{
													iVar6 = unk_0x9539D44F3E4492F6(iVar5);
													if (!unk_0xEB6A8945D1AC98A1(iVar6))
													{
														vVar3 = { unk_0x68F4C0EC296D3901(iVar6, 0x00000001) };
														unk_0x0C4243AF9A434F34(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), iVar2, 0x00000000, iVar6, vVar3, 0x00000004, 50f, 5f, -1f, 0x00000064, 0x00000032, 0x00000001);
														if (iLocal_86[iVar10] != Local_80.f_6E[iVar10])
														{
															iLocal_86[iVar10] = Local_80.f_6E[iVar10];
														}
													}
												}
											}
										}
									}
								}
								else if (((unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0xB41F1A34) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0xB41F1A34) != 0x00000000) && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0x4DE5C290) != 0x00000000) && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0x4DE5C290) != 0x00000001)
								{
									if (unk_0xA30B8362589C124A(iVar2, 0xFFFFFFFF, 0x00000000) == unk_0x1B50683925F00106(Local_80.f_30[iVar0]))
									{
										iVar5 = func_27();
										if (iVar5 != func_5())
										{
											iVar6 = unk_0x9539D44F3E4492F6(iVar5);
											if (!unk_0xEB6A8945D1AC98A1(iVar6))
											{
												fVar7 = func_26(iVar2, iVar6, 0x00000001);
												if (fVar7 > 500f)
												{
													unk_0x67E0EAF9D59392C7(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), unk_0x68F4C0EC296D3901(iVar6, 0x00000001), 2f, iVar2, 0x00000001, 0x000C0025, 0xBF800000, 0x00000000, 0x41A00000, 0x00000000, 30f, 0x40800000);
												}
												else if (fVar7 > 250f)
												{
													unk_0x89258193691A7600(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), iVar2, iVar6, 0x00000004, 30f, 0x000C0025, 5f, 5f, 0x00000001);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 0x00000002:
						if (unk_0x526BC32A660C89E6(Local_80.f_30[iVar0]))
						{
							if (!func_23())
							{
								if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0xAA05B492) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0xAA05B492) != 0x00000000)
								{
									if (unk_0x405E212DDE472467(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0x00000000))
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_546, iVar0))
										{
											iVar8 = func_739(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0x43898000);
											if (iVar8 > 0xFFFFFFFF)
											{
												unk_0x7C8478BF70C1E072(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 299f, 0x00000000);
											}
											else if (!unk_0xEAE0D21A50E6C7F4(iLocal_546, iVar0))
											{
												func_738(iVar0, func_104(0x00000001));
												unk_0x5D96D8530B3D0904(&iLocal_546, iVar0);
											}
										}
									}
									else
									{
										unk_0x7C8478BF70C1E072(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 299f, 0x00000000);
									}
								}
							}
						}
						break;
					
					case 0x00000003:
						if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0xF10822AA) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0xF10822AA) != 0x00000000)
						{
							vVar4 = { func_737() };
							unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_80.f_30[iVar0]));
							unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), 0x00000001);
							unk_0xEEB67C3D0A71A47B(unk_0x1B50683925F00106(Local_80.f_30[iVar0]), vVar4, 10000f, 0x000F423F, 0x00000000, 0x00000000);
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

Vector3 func_737()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar0]))
		{
			return unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000);
		}
		iVar0++;
	}
	return Local_80.f_1E[0x00000000 /*3*/];
}

void func_738(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 0x3E7013AB;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam0;
	if (!iParam1 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000003, iParam1);
	}
}

int func_739(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	int iVar5;
	
	iVar0 = 0xFFFFFFFF;
	fVar1 = 1E+09f;
	iVar3 = 0x00000000;
	while (iVar3 < 0x00000004)
	{
		if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar3]))
		{
			if (func_109(Local_80.f_7[iVar3]))
			{
				iVar5 = unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_80.f_7[iVar3]), 0xFFFFFFFF, 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iVar5))
				{
					if (unk_0x34BFC6F0CB887BC2(iVar5))
					{
						vVar4 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_80.f_7[iVar3]), 0x00000001) };
						fVar2 = func_523(iParam0, vVar4, 0x00000001);
						if (fVar2 < fVar1)
						{
							if (fVar2 < fParam1)
							{
								fVar1 = fVar2;
								iVar0 = iVar3;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_740(int iParam0)
{
	int iVar0;
	
	return;
	if (!func_31(Local_80.f_30[iParam0]))
	{
		if (unk_0x526BC32A660C89E6(Local_80.f_30[iParam0]))
		{
			if (unk_0x0E0E6175453415CB(unk_0x1B50683925F00106(Local_80.f_30[iParam0])))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x1B50683925F00106(Local_80.f_30[iParam0]), 0x00000000);
				if (unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iVar0)) || unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar0)))
				{
					if (!unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
					{
						unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_80.f_30[iParam0]), 0x00000005, 0x00000000);
					}
				}
			}
		}
	}
}

void func_741(vector3 vParam0)
{
	Global_1806FA.f_6 = { vParam0 };
}

bool func_742()
{
	return unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000008);
}

void func_743(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0x00000088:
			switch (iParam1)
			{
				case 0x00000000:
					func_744("kwUfKUus6EuQyNSL8KpY-w");
					func_744("yMTOFLfO2UKwzKrmgPP7kg");
					func_744("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 0x00000002:
					func_744("tP5HSeCA0UiHnkRzakdO2Q");
					func_744("uEkrqoerQEmQ0uZRtp4rkw");
					func_744("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 0x00000003:
					func_744("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 0x00000006:
					func_744("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 0x0000008B:
			switch (iParam1)
			{
				case 0x00000001:
					func_744("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 0x00000002:
					func_744("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 0x0000008A:
			switch (iParam1)
			{
				case 0x00000002:
					func_744("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 0x00000003:
					func_744("uEkrqoerQEmQ0uZRtp4rkw");
					func_744("92t91kL3Wkqvl2Kc82cNSA");
					func_744("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 0x00000005:
					func_744("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 0x00000006:
					func_744("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 0x00000007:
					func_744("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 0x0000008D:
			switch (iParam1)
			{
				case 0x00000000:
					func_744("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 0x00000086:
			switch (iParam1)
			{
				case 0x00000001:
					func_744("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 0x00000004:
					func_744("fOfm7nzMLkav0ldcSCNAzA");
					func_744("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 0x00000005:
					func_744("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0x00000000:
					func_744("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 0x00000009:
					func_744("Ma78E44OMkGfYPmCPZXUNA");
					func_744("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 0x00000013:
					func_744("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 0x0000000A:
					func_744("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 0x0000008C:
			switch (iParam1)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							func_744("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000002:
							func_744("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 0x00000002:
					func_744("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 0x00000003:
					switch (iParam2)
					{
						case 0x00000001:
							func_744("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 0x00000002:
							func_744("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 0x00000004:
					func_744("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 0x00000002:
							func_744("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 0x00000081:
			switch (iParam1)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							func_744("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 0x00000001:
							func_744("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 0x00000002:
							func_744("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 0x00000003:
							func_744("fOfm7nzMLkav0ldcSCNAzA");
							func_744("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000000:
							func_744("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 0x00000001:
							func_744("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 0x00000002:
					switch (iParam2)
					{
						case 0x00000000:
							func_744("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 0x00000002:
							func_744("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 0x00000003:
					switch (iParam2)
					{
						case 0x00000003:
							func_744("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 0x00000004:
					switch (iParam2)
					{
						case 0x00000001:
							func_744("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 0x00000005:
					switch (iParam2)
					{
						case 0x00000001:
							func_744("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 0x00000002:
							func_744("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 0x00000003:
							func_744("fOfm7nzMLkav0ldcSCNAzA");
							func_744("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 0x00000006:
					switch (iParam2)
					{
						case 0x00000000:
							func_744("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 0x00000001:
							func_744("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 0x00000007:
					switch (iParam2)
					{
						case 0x00000000:
							func_744("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 0x00000002:
							func_744("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 0x00000008:
					switch (iParam2)
					{
						case 0x00000003:
							func_744("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 0x00000083:
			switch (iParam3)
			{
				case 0x00000000:
					switch (iParam1)
					{
						case 0x00000000:
							switch (iParam2)
							{
								case 0x00000001:
									func_744("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 0x00000002:
									func_744("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 0x00000001:
							switch (iParam2)
							{
								case 0x00000000:
									func_744("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 0x00000002:
									func_744("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 0x00000003:
									func_744("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 0x00000004:
									func_744("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 0x00000002:
							switch (iParam2)
							{
								case 0x00000000:
									func_744("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 0x00000002:
									func_744("aGBjo2rKi0yMDLl3a2ATGA");
									func_744("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 0x00000003:
									func_744("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 0x00000003:
							switch (iParam2)
							{
								case 0x00000001:
									func_744("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 0x00000004:
									func_744("f2lnL6wZPkGWUowu0yLm1Q");
									func_744("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 0x00000004:
							switch (iParam2)
							{
								case 0x00000001:
									func_744("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 0x00000002:
									func_744("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 0x00000005:
							switch (iParam2)
							{
								case 0x00000000:
									func_744("W-OJzHlM-0ym9PsIASYZtw");
									func_744("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 0x00000001:
									func_744("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 0x00000003:
									func_744("TjGz31AMYE6bGCjAIitu6w");
									func_744("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 0x00000006:
							switch (iParam2)
							{
								case 0x00000002:
									func_744("QmlvLMLCwkOvoZlkAstYxw");
									func_744("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 0x00000003:
									func_744("BktATxH9R0Wp2x0kWSbqjw");
									func_744("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 0x00000004:
									func_744("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 0x00000001:
					switch (iParam1)
					{
						case 0x00000000:
							switch (iParam2)
							{
								case 0x00000001:
									func_744("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 0x00000003:
									func_744("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 0x00000001:
							switch (iParam2)
							{
								case 0x00000000:
									func_744("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 0x00000001:
									func_744("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 0x00000002:
									func_744("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 0x00000003:
									func_744("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 0x00000002:
							switch (iParam2)
							{
								case 0x00000003:
									func_744("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 0x00000002:
					switch (iParam1)
					{
						case 0x00000000:
							switch (iParam2)
							{
								case 0x00000000:
									func_744("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 0x00000004:
							switch (iParam2)
							{
								case 0x00000004:
									func_744("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_744(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < Global_1403FD)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar1 /*26*/].f_C, 0x0000000B))
		{
			if (func_745(&(Global_2401A9[iVar1 /*26*/].f_F)) == iVar0)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar1 /*26*/].f_D, 0x0000001A))
				{
					unk_0x5D96D8530B3D0904(&(Global_2401A9[iVar1 /*26*/].f_D), 0x0000001A);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_745(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_C = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	iVar2 = func_149(uParam0);
	if (iVar2 == 0xFFFFFFFF)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			Var0 = { func_746(uParam0) };
			return Var0.f_1;
		
		case 0x0000003E:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_746(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_C = 0xFFFFFFFF;
	iVar1 = func_149(uParam0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			return Global_C2055.f_1A2B5[iVar1 /*13*/];
		
		case 0x0000003E:
			return Global_E012E.f_24BD[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

void func_747()
{
	int iVar0;
	vector3 vVar1;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x0000000C))
	{
		func_192();
	}
	if (func_742())
	{
		if (iLocal_540 != Local_80.f_C)
		{
			iLocal_540 = Local_80.f_C;
			func_192();
		}
	}
	if (!func_200())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000004)
		{
			if (!unk_0xE4EDC4B0E92C078B(uLocal_91[iVar0]))
			{
				if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar0]))
				{
					if (func_109(Local_80.f_7[iVar0]))
					{
						vVar1 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000) };
						if (!func_748(iVar0, vVar1))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_D, iVar0))
							{
								uLocal_91[iVar0] = unk_0x5C3B41825F6AC5A0(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]));
								unk_0xBC8E0A7390523199(uLocal_91[iVar0], 0x000001AD);
								func_194(&(uLocal_91[iVar0]), 0x0000001D);
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000014))
								{
									unk_0xF412DD40DE84CE72(uLocal_91[iVar0], 0x00000001);
									unk_0x0EC848EFF66DF45A(uLocal_91[iVar0], 0x00001B58);
									unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000014);
								}
								unk_0x2A065371C9D96655(uLocal_91[iVar0], 0x00000009);
								if (func_742())
								{
									unk_0xDC5B2F9D0CCE3A10(uLocal_91[iVar0], "UW_BLIPC");
								}
								else
								{
									unk_0xDC5B2F9D0CCE3A10(uLocal_91[iVar0], "UW_BLIP");
								}
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000003))
								{
									unk_0x4A51D2E4732BD556();
									unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000003);
								}
							}
						}
					}
				}
			}
			else if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar0]))
			{
				if (!func_109(Local_80.f_7[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uLocal_91[iVar0]));
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_80.f_D, iVar0))
				{
					unk_0x142CC44DB769B57E(&(uLocal_91[iVar0]));
				}
			}
			else
			{
				unk_0x142CC44DB769B57E(&(uLocal_91[iVar0]));
			}
			iVar0++;
		}
	}
	else
	{
		func_192();
	}
}

int func_748(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0xE5DBF9B6126856CA(Local_80.f_7[iVar0]))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_80.f_7[iVar0]), 0x00000000) };
				if (func_69(vParam1, vVar1, 0x00000000))
				{
					if (unk_0xE4EDC4B0E92C078B(uLocal_91[iVar0]))
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

int func_749()
{
	return Local_80;
}

int func_750(int iParam0)
{
	return Local_83[iParam0 /*18*/];
}

void func_751()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000006))
	{
		func_448();
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000006);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000007))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000004) || unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000010))
		{
			if (((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_354()) && func_844(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000007);
				func_421("FME_PASINT", 0x00007530);
				func_420(0x00000001);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000011))
		{
			if (func_242() && !func_237())
			{
				unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000011);
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000010);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000017))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000002)) && func_844(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && !Global_12061) && !Global_E545) && !unk_0xFEBC1E4EC9E001F0())
		{
			if (func_773())
			{
				func_421("AMEV_GA_RP", 0xFFFFFFFF);
				if (func_338(unk_0xD803B885F5E47A62()) != 0x000000C8)
				{
					func_420(0x00000001);
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000017);
			}
		}
	}
	if (unk_0x798A3F1296751F46() && unk_0x8BB17FEBE0394018() == 0x0000000F)
	{
		if (func_232(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x70305AA977EFE679(0x502431FB))
			{
				unk_0x8134AB7E30C9809E(0x502431FB);
			}
		}
		else if (unk_0x70305AA977EFE679(0x502431FB))
		{
			unk_0x64366F76B4845277(0x502431FB);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000009))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_354()) && func_844(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && !func_203(unk_0xD803B885F5E47A62(), 0x00000015)) && !func_203(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000009);
			func_772(0x00000000);
			func_421("FME_TBL00", 0xFFFFFFFF);
			func_420(0x00000001);
		}
	}
	if (func_243(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000012))
		{
			if ((func_203(unk_0xD803B885F5E47A62(), 0x00000015) && unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000014)) && !unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000013))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000012);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000012))
		{
			if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_354()) && func_844(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && unk_0x0F1CCD77290EE12F()) && !Global_26B66F.f_13C1)
			{
				unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000012);
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000013);
				func_421("AMTT_RPAS", 0xFFFFFFFF);
				func_420(0x00000001);
			}
		}
	}
	if (((((func_243(unk_0xD803B885F5E47A62()) && !func_202(unk_0xD803B885F5E47A62())) && func_190(unk_0xD803B885F5E47A62()) != 0x00000092) && !func_201(unk_0xD803B885F5E47A62())) && !func_665(unk_0xD803B885F5E47A62())) && !func_762())
	{
		if (func_670(func_190(unk_0xD803B885F5E47A62())))
		{
			unk_0x25A1F489CCEE528A(unk_0xD803B885F5E47A62());
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000016))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000016);
		}
		if (func_209(unk_0xD803B885F5E47A62()) || func_668())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000A))
			{
				if (func_760(func_190(unk_0xD803B885F5E47A62())))
				{
					if (func_595(0x00000000) && !Global_247C05)
					{
						unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000009);
					}
					if (!Global_247C05)
					{
						func_446(0x00000001);
						unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000E);
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000A);
			}
		}
		if (func_232(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000B))
			{
				if (!Global_181EC.f_8)
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000C);
					func_444(0x00000001);
				}
				if (!func_759())
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000D);
					func_669();
				}
				if (!Global_247C05)
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000E);
					if (func_595(0x00000000) && !Global_247C05)
					{
						unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000009);
					}
					func_446(0x00000001);
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000B);
			}
		}
		else
		{
			func_757(0x00000000);
		}
	}
	else
	{
		func_757(0x00000001);
	}
	func_752();
	if (func_667(func_190(unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000015))
	{
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000015);
	}
	if (((func_242() && !func_237()) || func_203(unk_0xD803B885F5E47A62(), 0x00000015)) || func_203(unk_0xD803B885F5E47A62(), 0x00000019))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x0000000A))
		{
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x0000000A);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x0000000A))
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x0000000A);
	}
}

void func_752()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_354())
	{
		iVar2 = 0x0000003F;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000053)
		{
			if (func_520(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 0x0000003F || iVar0 >= 0x00000051)
				{
					iVar1 = 0x00003A98;
				}
				else
				{
					iVar1 = 0x00000BB8;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000001A))
				{
					unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000001A);
				}
				func_753(iVar0, iVar1);
				iVar2 = 0x00000053;
			}
			iVar2++;
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000001A))
	{
		func_106(&(Global_1806FA.f_16));
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000001A);
	}
}

void func_753(int iParam0, int iParam1)
{
	if (!func_22(&(Global_1806FA.f_16)))
	{
		func_20(&(Global_1806FA.f_16), 0x00000000, 0x00000000);
	}
	else if (func_19(&(Global_1806FA.f_16), iParam1, 0x00000000))
	{
		if (func_406() > 0x00000000)
		{
			func_756(iParam0);
			if (func_677("AMEV_LBD_HELP"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			func_106(&(Global_1806FA.f_16));
		}
	}
	else
	{
		func_755(0x00000000);
		func_754();
	}
}

void func_754()
{
	Global_26B66F.f_11B4 = 0x00000000;
}

void func_755(int iParam0)
{
	Global_150392.f_44 = iParam0;
}

void func_756(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000003)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			func_352(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
		}
		iVar0++;
	}
}

void func_757(int iParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000B) || (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000A) && iParam0)) || (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000016) && iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000C))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000C);
			func_444(0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000D))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000D);
			func_758();
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000E) && !func_238(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000E);
			func_446(0x00000000);
		}
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000B);
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000A);
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000016);
	}
}

void func_758()
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1362), 0x00000000);
}

bool func_759()
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1362, 0x00000000);
}

int func_760(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000081:
		case 0x00000084:
		case 0x00000088:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
			return 0x00000001;
		
		case 0x00000083:
		case 0x00000092:
			return func_232(unk_0xD803B885F5E47A62());
		
		case 0x00000085:
			return (func_668() || func_761(func_189()));
		
		default:
	}
	return 0x00000000;
}

int func_761(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x0000000A:
		case 0x00000006:
		case 0x0000000C:
		case 0x0000000B:
		case 0x0000000E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_762()
{
	if (((((((((func_771() || func_770()) || func_769()) || func_182()) || (func_768() && !unk_0xA14BB9332558B949())) || (func_765() && !func_764())) || Global_248A6D) || Global_248A6D.f_1 != 0x00000000) || Global_248AB7 != 0x00000000) || (func_763() == 0x00000002 && !unk_0xA14BB9332558B949()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_763()
{
	return Global_EC6CD;
}

bool func_764()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000001B);
}

int func_765()
{
	if (func_767() || func_766())
	{
		return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_62 == 0x00000008;
	}
	return 0x00000000;
}

var func_766()
{
	return Global_2564C8.f_27B;
}

bool func_767()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000000B);
}

bool func_768()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000005);
}

bool func_769()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000002);
}

bool func_770()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000014);
}

bool func_771()
{
	return Global_2564C8.f_256;
}

void func_772(int iParam0)
{
	int iVar0;
	
	iVar0 = func_260(0x000009E6, 0xFFFFFFFF, 0x00000000);
	if (iParam0 == 0x00000000)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000000);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000002))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
		}
	}
	else if (iParam0 == 0x00000001)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000003))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000004))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000005))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000005);
		}
	}
	else if (iParam0 == 0x00000002)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000006))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000006);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000007))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000007);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000008))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000008);
		}
	}
	else if (iParam0 == 0x00000003)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000009))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000009);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000A))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x0000000A);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000B))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x0000000B);
		}
	}
	func_479(0x000009E6, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
}

int func_773()
{
	int iVar0;
	
	if (!func_22(&(Global_1806FA.f_F)))
	{
		func_20(&(Global_1806FA.f_F), 0x00000000, 0x00000000);
		Global_1806FA.f_11 = 0x00000000;
	}
	else if (func_19(&(Global_1806FA.f_F), 0x000003E8, 0x00000000))
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Global_1806FA.f_11)))
		{
			iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Global_1806FA.f_11));
			if (unk_0x40B8C182D63932FC(iVar0))
			{
				if (func_844(iVar0, 0x00000001, 0x00000001) && func_774(iVar0, 0x00000006))
				{
					if (SYSTEM::VDIST(func_59(unk_0xD803B885F5E47A62()), func_59(iVar0)) < 80f)
					{
						return 0x00000001;
					}
				}
			}
		}
		Global_1806FA.f_11++;
		if (Global_1806FA.f_11 >= 0x00000020)
		{
			Global_1806FA.f_11 = 0x00000000;
			func_106(&(Global_1806FA.f_F));
		}
	}
	return 0x00000000;
}

int func_774(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_440() != 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_483(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = iParam0;
	if (Global_184507[iVar0 /*876*/] == iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_775()
{
	return Global_1806FA.f_18;
}

bool func_776(int iParam0)
{
	return !func_777(iParam0);
}

int func_777(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			if (Global_40001.f_1A04)
			{
				return 0x00000000;
			}
			if (func_203(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000005:
			if (Global_40001.f_1A05)
			{
				return 0x00000000;
			}
			if (func_203(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000006:
			if (Global_40001.f_1A06)
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000009:
			if (Global_40001.f_1A07)
			{
				return 0x00000000;
			}
			if (func_203(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x0000000F:
			if (func_778(0x00000004))
			{
				return 0x00000000;
			}
			if (func_203(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000011:
			if (func_778(0x00000004))
			{
				return 0x00000000;
			}
			if (func_203(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000010:
			if (func_778(0x00000004))
			{
				return 0x00000000;
			}
			if (func_203(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000012:
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
			if (func_778(0x00000004))
			{
				return 0x00000000;
			}
			if (func_203(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000013:
			if (func_778(0x00000004))
			{
				return 0x00000000;
			}
			if (func_203(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000014:
			if (func_778(0x00000004))
			{
				return 0x00000000;
			}
			if (func_203(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000B:
			break;
		
		case 0x0000000C:
			break;
	}
	return 0x00000001;
}

int func_778(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (func_844(unk_0x117658E336116132(iVar0), 0x00000000, 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_25033E[iVar0 /*421*/].f_D0, iParam0))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_779()
{
	var uVar0;
	
	func_783(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_782())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_781())
	{
		return 0x00000001;
	}
	if (func_780(0x0000009F))
	{
		if (!func_771())
		{
			return 0x00000001;
		}
	}
	if (func_780(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_438() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_438()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_780(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_781()
{
	return Global_258C08;
}

bool func_782()
{
	return Global_2564C8.f_251;
}

void func_783(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
		if (iVar1 == 0x000000AE)
		{
			unk_0x218F818E64020C17(0x00000001, iVar0, &iVar2, 0x00000002);
			switch (iVar2)
			{
				case 0x918B9E9A:
					func_784(iVar0);
					break;
				
				case 0x231D58EE:
					unk_0x218F818E64020C17(0x00000001, iVar0, &vVar3, 0x00000004);
					if (vVar3.z == 0x26FA13EF)
					{
						*uParam0 = 0x00000001;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_784(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_844(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_785(iVar2, &bVar3))
						{
							unk_0x920D29D81E211607(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x046C362CF15F1935(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_785(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, 0x00000000, 0x00000001);
					*uParam1 = 0x00000001;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0x00000000))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_786()
{
	SYSTEM::WAIT(0x00000000);
}

void func_787()
{
	int iVar0;
	
	func_192();
	if (func_749() == 0x00000004 && Local_80.f_1B != 0x00000000)
	{
		unk_0xAB8E2DDC7AF955E0(Local_80.f_1B, 0x00000000);
	}
	unk_0x0674E58A79778E99(&(Global_26B66F.f_11F0), 0x00000001);
	func_675(0x00000013, 0x00000000);
	func_654(0x00000000);
	if (unk_0x57270EE11514DC67() != 0xFFFFFFFF)
	{
		func_793(0x00000081, 0x00000000, unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2, 0x00000008));
	}
	func_792(0x00000081);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000B8, 0x00000000);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000097, 0x00000001);
	unk_0x51B096AAC60548C1(1f);
	if (iLocal_89 > 0x00000000)
	{
		unk_0x34D79252800B23FF(iLocal_89);
	}
	if (unk_0xD803B885F5E47A62() != 0xFFFFFFFF)
	{
		if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000081)
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/] = 0xFFFFFFFF;
		}
	}
	if (unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()) == iLocal_93)
	{
		unk_0x6DF7BF67E86AAE86(unk_0x16F2683693E537C9(), iLocal_95);
	}
	func_791();
	func_205(0x00000000, 0x00000081);
	if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000016))
	{
		func_451();
		unk_0x0674E58A79778E99(&iLocal_84, 0x00000016);
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000009))
	{
		unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x0000000A))
		{
			unk_0xC92DB9682A650680("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_90 != -100f)
	{
		func_526(0x00000000, 0x00000000);
		unk_0x98805B30C708287F(fLocal_90);
	}
	func_525(0x00000000);
	if (func_779())
	{
		Local_81.f_5 = 0x00000005;
	}
	else if (func_614(0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
	{
		Local_81.f_5 = 0x00000006;
	}
	else if (Local_81.f_5 != 0x00000001)
	{
		Local_81.f_5 = 0x00000002;
	}
	unk_0x55D0A2DB35045A35(iLocal_543);
	Local_81 = Local_80.f_263;
	Local_81.f_1 = Local_80.f_264;
	Local_81.f_4 = Local_80.f_265;
	Local_81.f_3 = Local_80.f_267;
	if (Local_81.f_9 > 0x00000000)
	{
		Local_81.f_A = (unk_0xDD0E7998AE8AD485() - Local_81.f_9);
	}
	if ((!Global_40001.f_2CEE && !unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000008)) || (!Global_40001.f_2CEF && unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000008)))
	{
		if (Local_81.f_6 > 0x00000000)
		{
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_80.f_3, 0x00000008))
	{
		iVar0 = 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000001))
	{
		func_682(0x00000001);
		unk_0x03718F4C6E876DE6(0x00000000, 0x00000000);
	}
	if (iVar0 == 0x00000000)
	{
		func_789(Local_81, Local_80.f_1B, Local_80.f_117, iVar0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	else if (unk_0x57270EE11514DC67() != 0xFFFFFFFF)
	{
		func_789(Local_81, Local_80.f_117, Local_83[unk_0x57270EE11514DC67() /*18*/].f_8, iVar0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (func_411(unk_0xD803B885F5E47A62()))
	{
		func_631(0x00000000);
	}
	func_653(0x00000000);
	func_705(0x00000001);
	func_788();
}

void func_788()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_789(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	sVar0 = unk_0xBB0808A181D4745C();
	if (Param0.f_9 == 0x00000000)
	{
		Param0.f_A = 0x00000000;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_12B4E)
	{
		if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_C = uParam1;
			unk_0x9534DF96382FA79D(&Var1);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, func_790()))
		{
			Var2 = { Param0 };
			Var2.f_C = uParam1;
			Var2.f_D = iParam2;
			unk_0x68F74D8294339590(&Var2);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_C = uParam1;
			Var3.f_D = iParam2;
			Var3.f_E = iParam3;
			Var3.f_F = iParam4;
			Var3.f_10 = iParam5;
			Var3.f_11 = iParam6;
			unk_0xB4378BE34ED99E2A(&Var3);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_C = uParam1;
			Var4.f_D = SYSTEM::TO_FLOAT(iParam2);
			if (iParam3 == 0x00000001)
			{
				Var4.f_D = (Var4.f_D / 10f);
			}
			unk_0xE20208601F5C75BD(&Var4);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_penned_in"))
		{
			unk_0xAE4A25D32825E179(&Param0);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_C = uParam1;
			unk_0xAD412B113AE8E374(&Var5);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_C = uParam1;
			Var6.f_D = iParam2;
			unk_0xAFD26850D8F9D951(&Var6);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_C = uParam1;
			Var7.f_D = iParam2;
			unk_0x2320D6A9337F16FD(&Var7);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_C = uParam1;
			Var8.f_D = iParam2;
			Var8.f_E = iParam3;
			Var8.f_F = iParam4;
			unk_0x8EFE08564F2B2A96(&Var8);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_C = uParam1;
			unk_0x99DAD54B2D0F4291(&Var9);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0x00000000)
			{
				Var10 = { Param0 };
				Var10.f_C = uParam1;
				Var10.f_D = iParam2;
				unk_0xC6463777F834DA6F(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_C = uParam1;
				Var11.f_D = iParam2;
				unk_0x9563472595C7B3E7(&Var11);
			}
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_C = uParam1;
			unk_0x9BF192C4E1EF8A54(&Var12);
		}
	}
}

char* func_790()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_791()
{
	unk_0x51732B934211201A(iLocal_94);
	unk_0x51732B934211201A(iLocal_93);
}

void func_792(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_793(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0x00000000)
	{
	}
	if (unk_0xD803B885F5E47A62() != 0xFFFFFFFF)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x0000000D))
		{
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x0000000D);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x0000000E))
		{
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x0000000E);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000015))
	{
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000015);
	}
	func_829();
	unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
	unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000000);
	if (bParam1)
	{
		uVar0 = func_828(func_190(unk_0xD803B885F5E47A62()));
		func_675(func_676(iParam0), 0x00000000);
	}
	else
	{
		if ((bParam2 && unk_0xD803B885F5E47A62() != 0xFFFFFFFF) && func_827(unk_0xD803B885F5E47A62()) >= 0x0000000C)
		{
			func_826(0x000009F2, 0xFFFFFFFF);
			iVar1 = func_260(0x000009F2, 0xFFFFFFFF, 0x00000000);
			if (iVar1 == 0x00000002)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000000);
			}
			else if (iVar1 == 0x00000004)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000001);
			}
			else if (iVar1 == 0x00000006)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000002);
			}
			else if (iVar1 == 0x00000008)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000003);
			}
			else if (iVar1 == 0x0000000A)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000004);
			}
			else if (iVar1 == 0x0000000C)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000005);
			}
		}
		func_681();
		func_825();
		func_824();
		if ((!func_231(unk_0xD803B885F5E47A62()) && !func_229(unk_0xD803B885F5E47A62())) && !func_823())
		{
			func_802();
		}
		func_801();
		if (!unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000001))
		{
			func_448();
		}
		func_800();
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6D2), 0x00000002);
		func_541();
		func_799();
	}
	if (unk_0x70305AA977EFE679(0x502431FB))
	{
		unk_0x64366F76B4845277(0x502431FB);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0xD803B885F5E47A62() != 0xFFFFFFFF && !func_203(unk_0xD803B885F5E47A62(), 0x00000015)) && !func_203(unk_0xD803B885F5E47A62(), 0x00000019)) && !func_238(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			func_446(0x00000000);
			func_444(0x00000000);
			if (!bParam1)
			{
				func_798();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_618(0x0000001A, 0xFFFFFFFF))
		{
			Global_259486 = 0xFFFFFFFF;
			func_616(0x0000001A, 0xFFFFFFFF);
		}
	}
	if (!func_794())
	{
		Global_2658D5 = 0x00000001;
	}
}

int func_794()
{
	if ((((((!func_384(unk_0xD803B885F5E47A62()) && !func_365(unk_0xD803B885F5E47A62())) && func_190(unk_0xD803B885F5E47A62()) != 0x00000092) && !func_797()) && !func_796()) && !func_795(Global_440000.f_38DB3)) && !func_578())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_795(int iParam0)
{
	return iParam0 == 0x00000039;
}

int func_796()
{
	if (Global_440000.f_2F9AE == Global_40001.f_257C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_797()
{
	if ((Global_440000 == 0x00000000 && unk_0xA14BB9332558B949()) && (((((((Global_440000.f_5 != 0x00000000 || Global_440000.f_38DB3 > 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x0000000F)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000012)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000013)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x0000001D)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x0000001C)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_5, 0x00000017)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_798()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1403FD)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar0 /*26*/].f_C, 0x0000000B))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar0 /*26*/].f_D, 0x0000001A))
			{
				unk_0x0674E58A79778E99(&(Global_2401A9[iVar0 /*26*/].f_D), 0x0000001A);
			}
		}
		iVar0++;
	}
}

void func_799()
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_7 = 0x00000000;
}

void func_800()
{
	struct<25> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_15 = 0xFFFFFFFF;
	Global_1806FA = { Var0 };
}

void func_801()
{
	var uVar0;
	
	Global_1420BD = uVar0;
}

void func_802()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_18), &Global_24C36F, 0x00000002);
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_1A), &Global_24C371, 0x00000013);
	func_821();
	func_805(0x00000001, 0x00000001, 0x00000000);
	func_803();
}

void func_803()
{
	func_804(0x00000000, 0x00000000);
}

void func_804(int iParam0, int iParam1)
{
	Global_24B2D0.f_16 = iParam0;
	Global_24B2D0.f_17 = iParam1;
}

void func_805(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2D), &Global_24C384, 0x00000140);
	}
	else
	{
		Global_24B2D0.f_2D = { Global_24C384 };
		Global_24B2D0.f_2D.f_31 = { Global_24C384.f_31 };
		Global_24B2D0.f_2D.f_34 = Global_24C384.f_34;
		Global_24B2D0.f_2D.f_35 = Global_24C384.f_35;
	}
	if (bParam0)
	{
		func_820();
	}
	if (!bParam2)
	{
		func_808(0x00000000, 0x00000001, 0x00000000, 0x3F333333, 0x40C00000, 0x3F800000, 0x40E00000, 0x40A00000, 0x00000000, 0x3F8CCCCD, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x42200000);
	}
	func_807(0x00000000);
	func_806();
}

void func_806()
{
	struct<6> Var0;
	
	if (Global_24B2D0.f_1E7.f_1 == unk_0x0D0A574C76D769AC())
	{
		Global_24B2D0.f_1E7 = { Var0 };
	}
}

void func_807(bool bParam0)
{
	if (bParam0)
	{
		Global_24B2D0.f_2C1 = 0x00000000;
	}
	else
	{
		Global_24B2D0.f_2C1 = 0x00000001;
	}
}

void func_808(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_819())
		{
			func_818();
		}
		Global_24B2D0.f_2C2.f_206 = unk_0x0D0A574C76D769AC();
		Global_24B2D0.f_2C2.f_1F8 = iParam1;
		Global_24B2D0.f_2C2.f_1F9 = iParam2;
		Global_24B2D0.f_2C2.f_1FA = iParam10;
		func_816();
		func_812(0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		Global_24B2D0.f_2C2.f_1FB = iParam11;
		Global_24B2D0.f_2C2.f_200 = iParam3;
		Global_24B2D0.f_2C2.f_201 = iParam4;
		Global_24B2D0.f_2C2.f_1FE = iParam5;
		Global_24B2D0.f_2C2.f_1FF = iParam6;
		Global_24B2D0.f_2C2.f_202 = iParam7;
		Global_24B2D0.f_2C2.f_203 = iParam8;
		Global_24B2D0.f_2C2.f_204 = iParam9;
		Global_24B2D0.f_2C2.f_205 = iParam14;
		Global_24B2D0.f_2C2.f_1FC = iParam12;
		Global_24B2D0.f_2C2.f_1FD = iParam13;
		Global_24B2D0.f_6D1 = 0x00000001;
	}
	else
	{
		func_809();
	}
}

void func_809()
{
	if (func_819() && !func_811())
	{
		func_818();
	}
	if (func_811())
	{
		func_810();
	}
	else
	{
		func_816();
		func_812(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		Global_24B2D0.f_6D1 = 0x00000000;
		Global_24B2D0.f_6D0 = 0x00000000;
	}
}

void func_810()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2C2), &(Global_24B2D0.f_4C9), 0x00000207);
	Global_24B2D0.f_1E7 = { Global_24B2D0.f_1ED };
	if (unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		Global_24B2D0.f_6D0 = 0x00000000;
	}
}

int func_811()
{
	if ((Global_24B2D0.f_6D0 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_4C9.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_4C9.f_206))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_812(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2537E2.f_766.f_2BF.f_10 != func_5())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_2537E2.f_766.f_2BF.f_10 /*421*/].f_194, 0x00000000) && func_813())
		{
			iParam0 = 0x00000017;
		}
	}
	if (iParam0 != 0x00000012 && iParam0 != 0x00000011)
	{
		Global_24D062 = 0x00000000;
	}
	Global_24B2D0.f_1E7 = iParam0;
	Global_24B2D0.f_1E7.f_1 = unk_0x0D0A574C76D769AC();
	Global_24B2D0.f_1E7.f_2 = iParam1;
	Global_24B2D0.f_1E7.f_3 = iParam2;
	Global_24B2D0.f_1E7.f_4 = iParam3;
	Global_24B2D0.f_1E7.f_5 = iParam4;
}

int func_813()
{
	if ((((((func_338(unk_0xD803B885F5E47A62()) == 0x000000E5 || func_338(unk_0xD803B885F5E47A62()) == 0x000000BF) || func_815()) || func_823()) || func_210(unk_0xD803B885F5E47A62())) || Global_265BE2.f_E2 == 0x00000001) || (Global_24B2D0.f_6D1 && func_814(unk_0xD803B885F5E47A62())))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_814(int iParam0)
{
	if (func_209(iParam0))
	{
		return 0x00000001;
	}
	if (func_244(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_815()
{
	if (Global_440000 == 0x00000006)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_816()
{
	if (func_819() && !func_811())
	{
		func_818();
	}
	func_817();
	Global_24B2D0.f_2C2 = 0x00000000;
}

void func_817()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 0x3F800000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000064)
	{
		Global_24B2D0.f_2C2.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_818()
{
	if (func_811())
	{
		if (Global_24B2D0.f_2C2.f_206 == Global_24B2D0.f_4C9.f_206)
		{
			return;
		}
	}
	if (!unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_4C9), &(Global_24B2D0.f_2C2), 0x00000207);
		Global_24B2D0.f_1ED = { Global_24B2D0.f_1E7 };
		Global_24B2D0.f_6D0 = 0x00000001;
	}
}

int func_819()
{
	if ((Global_24B2D0.f_6D1 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_2C2.f_206))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_820()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_16D), &Global_24C4C4, 0x00000079);
}

void func_821()
{
	func_822();
	Global_24B2D0.f_8CE = 0x00000000;
}

void func_822()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000032)
	{
		Global_24B2D0.f_8CF[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

bool func_823()
{
	return Global_180605;
}

void func_824()
{
	Global_26B66F.f_1362 = 0x00000000;
}

void func_825()
{
	if (unk_0xD803B885F5E47A62() != 0xFFFFFFFF)
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1 = 0x00000000;
	}
}

void func_826(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_260(iParam0, func_241(iParam1), 0x00000000);
	iVar0++;
	if (!func_486(iParam0))
	{
		func_479(iParam0, iVar0, iParam1, 0x00000001, 0x00000000);
	}
	else
	{
		func_480(iParam0, iVar0, iParam1, 0x00000001);
	}
}

int func_827(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_D3.f_6;
}

int func_828(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000085:
		case 0x00000084:
		case 0x0000008A:
		case 0x00000090:
		case 0x0000008C:
		case 0x0000008B:
		case 0x00000083:
		case 0x0000008D:
		case 0xFFFFFFFF:
			return 0x00000001;
		
		case 0x00000092:
			if (func_232(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_829()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 0x00000004))
	{
		if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
		{
			unk_0x82E51BCA72537B6C(0x00000320);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 0x00000005))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C7), 0x00000005);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 0x00000003))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C7), 0x00000003);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 0x00000004))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C7), 0x00000004);
	}
	func_832(0x00000000);
	func_831(0x00000000);
	func_830(0x00000000);
}

void func_830(int iParam0)
{
	if (Global_26B66F.f_11A8 != iParam0)
	{
		Global_26B66F.f_11A8 = iParam0;
	}
}

void func_831(bool bParam0)
{
	if (Global_26B66F.f_11A7 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_26B66F.f_11A7 = bParam0;
	}
}

void func_832(int iParam0)
{
	if (Global_26B66F.f_11A5 != iParam0)
	{
		Global_26B66F.f_11A5 = iParam0;
	}
}

void func_833(struct<21> Param0)
{
	int iVar0;
	
	func_842(func_843(Param0), Param0);
	unk_0x0BEC04ECA8485A3A(0x00000018);
	unk_0x28E5F00F131890E3(0x00000009);
	func_841(0x00000000, 0xFFFFFFFF, 0x00000000);
	func_839(0x00000081);
	unk_0x9752E7BAEABA939E(&Local_80, 0x00000269);
	unk_0x35B62793EAE9ADDF(&Local_83, 0x00000241);
	func_838(0x00000001);
	if (!func_837())
	{
		func_787();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x256D93AFAE851A7A(0x00000000);
		if (unk_0xBFF81ED3B99522C7())
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000004)
			{
				Local_80.f_11[iVar0] = func_5();
				iVar0++;
			}
			iVar0 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000004)
			{
				Local_80.f_16[iVar0] = func_5();
				Local_80.f_100[iVar0] = 0xFFFFFFFF;
				Local_80.f_6E[iVar0] = 0xFFFFFFFF;
				iVar0++;
			}
			unk_0xCB466C2A425A9168(&(Local_80.f_263), &(Local_80.f_264));
		}
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000004)
		{
			iLocal_86[iVar0] = 0xFFFFFFFF;
			iVar0++;
		}
		Local_81.f_2 = unk_0x981819F6C45DDB49();
		Local_81.f_8 = unk_0xDD0E7998AE8AD485();
		func_675(0x00000013, 0x00000001);
		func_834();
		if (func_200())
		{
			unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*18*/].f_2), 0x00000007);
		}
		Local_83[unk_0x57270EE11514DC67() /*18*/].f_9 = 0xFFFFFFFF;
		Global_26B66F.f_13B8 = 0xFFFFFFFF;
		Local_83[unk_0x57270EE11514DC67() /*18*/] = 0x00000000;
	}
	else
	{
		func_787();
	}
}

void func_834()
{
	int iVar0;
	
	unk_0xF63400DBE3303D26("relUWPlayer", &iLocal_93);
	unk_0xF63400DBE3303D26("relUWAi", &iLocal_94);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		unk_0x0E2400AB9174FA81(0x00000001, Global_180837[iVar0], iLocal_93);
		unk_0x0E2400AB9174FA81(0x00000001, iLocal_93, Global_180837[iVar0]);
		unk_0x0E2400AB9174FA81(0x00000001, Global_180837[iVar0], iLocal_94);
		unk_0x0E2400AB9174FA81(0x00000001, iLocal_94, Global_180837[iVar0]);
		unk_0x0E2400AB9174FA81(0x00000001, iLocal_93, 0xA49E591C);
		unk_0x0E2400AB9174FA81(0x00000001, 0xA49E591C, iLocal_93);
		unk_0x0E2400AB9174FA81(0x00000001, iLocal_93, Global_180867[0x00000005]);
		unk_0x0E2400AB9174FA81(0x00000001, Global_180867[0x00000005], iLocal_93);
		unk_0x0E2400AB9174FA81(0x00000001, iLocal_93, Global_180858);
		unk_0x0E2400AB9174FA81(0x00000001, Global_180858, iLocal_93);
		iVar0++;
	}
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_93, iLocal_94);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_94, iLocal_93);
	unk_0x0E2400AB9174FA81(0x00000001, 0x783E3868, iLocal_94);
	unk_0x0E2400AB9174FA81(0x00000005, 0x783E3868, iLocal_93);
	func_836(0x00000001, &iLocal_94);
	func_835(&iLocal_94);
	func_835(&iLocal_93);
}

void func_835(int iParam0)
{
	unk_0x0E2400AB9174FA81(0x00000001, 0x90C7DA60, *iParam0);
	unk_0x0E2400AB9174FA81(0x00000001, *iParam0, 0x90C7DA60);
	unk_0x0E2400AB9174FA81(0x00000001, 0x11A9A7E3, *iParam0);
	unk_0x0E2400AB9174FA81(0x00000001, *iParam0, 0x11A9A7E3);
	unk_0x0E2400AB9174FA81(0x00000001, 0x45897C40, *iParam0);
	unk_0x0E2400AB9174FA81(0x00000001, *iParam0, 0x45897C40);
	unk_0x0E2400AB9174FA81(0x00000001, 0x7972FFBD, *iParam0);
	unk_0x0E2400AB9174FA81(0x00000001, *iParam0, 0x7972FFBD);
	unk_0x0E2400AB9174FA81(0x00000001, 0x783E3868, *iParam0);
	unk_0x0E2400AB9174FA81(0x00000001, *iParam0, 0x783E3868);
	unk_0x0E2400AB9174FA81(0x00000001, 0x936E7EFB, *iParam0);
	unk_0x0E2400AB9174FA81(0x00000001, *iParam0, 0x936E7EFB);
	unk_0x0E2400AB9174FA81(0x00000001, 0x6A3B9F86, *iParam0);
	unk_0x0E2400AB9174FA81(0x00000001, *iParam0, 0x6A3B9F86);
	unk_0x0E2400AB9174FA81(0x00000001, 0xC26D562A, *iParam0);
	unk_0x0E2400AB9174FA81(0x00000001, *iParam0, 0xC26D562A);
	unk_0x0E2400AB9174FA81(0x00000001, 0xB3598E9C, *iParam0);
	unk_0x0E2400AB9174FA81(0x00000001, *iParam0, 0xB3598E9C);
}

void func_836(int iParam0, int iParam1)
{
	unk_0x0E2400AB9174FA81(iParam0, 0xA49E591C, *iParam1);
	unk_0x0E2400AB9174FA81(iParam0, *iParam1, 0xA49E591C);
	unk_0x0E2400AB9174FA81(iParam0, 0xE3D976F3, *iParam1);
	unk_0x0E2400AB9174FA81(iParam0, *iParam1, 0xE3D976F3);
	unk_0x0E2400AB9174FA81(iParam0, 0xF50B51B7, *iParam1);
	unk_0x0E2400AB9174FA81(iParam0, *iParam1, 0xF50B51B7);
}

int func_837()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (0x00000001)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000000;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 0x00000001;
		}
		if (func_782())
		{
			return 0x00000000;
		}
		if (func_780(0x0000009D))
		{
			return 0x00000000;
		}
		if (iVar0 >= 0x00000E10)
		{
			return 0x00000000;
		}
		SYSTEM::WAIT(0x00000000);
	}
	return 0x00000000;
}

void func_838(bool bParam0)
{
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_438())
	{
		return;
	}
	if (!unk_0x1727A44C562FBED2(Global_24DDCF.f_522) || Global_24DDCF.f_522 == unk_0x0D0A574C76D769AC())
	{
		if (bParam0)
		{
			Global_24DDCF.f_522 = unk_0x0D0A574C76D769AC();
		}
		else
		{
			Global_24DDCF.f_522 = 0xFFFFFFFF;
		}
	}
}

void func_839(int iParam0)
{
	func_800();
	func_840();
	func_824();
	Global_1806FA.f_4 = iParam0;
	Global_1806FA.f_5 = iParam0;
	func_674(iParam0, 0xFFFFFFFF);
	func_8(&(Global_1806FA.f_12), 0x00000000, 0x00000000);
	Global_26B66F.f_11EC = 0x00000000;
	Global_259033[0x00000000] = func_5();
	Global_259033[0x00000001] = func_5();
	Global_259033[0x00000002] = func_5();
	Global_259033[0x00000003] = func_5();
	Global_259033[0x00000004] = func_5();
	func_799();
	if (!func_225(func_226()))
	{
		func_351();
	}
	if (func_242() && !func_237())
	{
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000010);
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000011);
	}
}

void func_840()
{
	var uVar0;
	
	Global_180713 = uVar0;
}

int func_841(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_788();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_168())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_788();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_782())
				{
					if (!bParam2)
					{
						func_788();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_780(0x0000009D))
				{
					if (!bParam2)
					{
						func_788();
					}
					else
					{
						return 0x00000000;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_788();
				}
				else
				{
					return 0x00000000;
				}
			}
		}
		SYSTEM::WAIT(0x00000000);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > 0xFFFFFFFF)
	{
		Global_1406F5 = iVar0;
	}
	if (iParam0 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_788();
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_788();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_842(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_788();
	}
	unk_0x37AD2AB54480FA6A(uParam0, 0x00000000, Param1.f_10);
}

int func_843(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000003:
			return 0x00000002;
		
		case 0x00000001:
			return 0x00000020;
		
		case 0x00000020:
			return 0x00000020;
		
		case 0x00000021:
			return 0x00000020;
		
		case 0x00000022:
			return 0x00000020;
		
		case 0x00000023:
			return 0x00000020;
		
		case 0x00000024:
			return 0x00000020;
		
		case 0x00000025:
			return 0x00000020;
		
		case 0x00000026:
			return 0x00000020;
		
		case 0x00000027:
			return 0x00000020;
		
		case 0x00000028:
			return 0x00000020;
		
		case 0x00000029:
			return 0x00000020;
		
		case 0x0000002A:
			return 0x00000020;
		
		case 0x0000002B:
			return 0x00000020;
		
		case 0x0000002C:
			return 0x00000020;
		
		case 0x0000002D:
			return 0x00000020;
		
		case 0x0000002E:
			return 0x00000020;
		
		case 0x0000002F:
			return 0x00000020;
		
		case 0x00000030:
			return 0x00000020;
		
		case 0x00000031:
			return 0x00000020;
		
		case 0x00000032:
			return 0x00000004;
		
		case 0x00000033:
			return 0x00000020;
		
		case 0x00000034:
			return 0x00000020;
		
		case 0x00000035:
			return 0x00000020;
		
		case 0x00000036:
			return 0x00000020;
		
		case 0x00000037:
			return 0x00000020;
		
		case 0x00000038:
			return 0x00000020;
		
		case 0x00000039:
			return 0x00000020;
		
		case 0x0000003A:
			return 0x00000020;
		
		case 0x0000003B:
			return 0x00000020;
		
		case 0x0000003C:
			return 0x00000020;
		
		case 0x0000003D:
			return 0x00000020;
		
		case 0x0000003E:
			return 0x00000020;
		
		case 0x0000003F:
			return 0x00000020;
		
		case 0x00000040:
			return 0x00000004;
		
		case 0x00000041:
			return 0x00000020;
		
		case 0x00000042:
			return 0x00000004;
		
		case 0x00000043:
			return 0x00000004;
		
		case 0x00000044:
			return 0x00000020;
		
		case 0x00000045:
			return 0x00000020;
		
		case 0x00000046:
			return 0x00000004;
		
		case 0x00000047:
			return 0x00000020;
		
		case 0x00000048:
			return 0x00000020;
		
		case 0x00000049:
		case 0x0000004A:
			return 0x00000004;
		
		case 0x0000004B:
			return 0x00000020;
		
		case 0x0000004C:
			return 0x00000020;
		
		case 0x0000004D:
			return 0x00000020;
		
		case 0x0000004E:
			return 0x00000020;
		
		case 0x0000004F:
			return 0x00000020;
		
		case 0x00000050:
			return 0x00000020;
		
		case 0x00000051:
			return 0x00000020;
		
		case 0x00000052:
			return 0x00000020;
		
		case 0x00000054:
			return 0x00000020;
		
		case 0x00000053:
			return 0x00000020;
		
		case 0x00000055:
			return 0x00000020;
		
		case 0x00000056:
			return 0x00000008;
		
		case 0x00000057:
			return 0x00000020;
		
		case 0x00000058:
			return 0x00000020;
		
		case 0x00000059:
			return 0x00000020;
		
		case 0x0000005A:
			return 0x00000020;
		
		case 0x0000005B:
			return 0x00000008;
		
		case 0x0000005C:
			return 0x00000020;
		
		case 0x0000005D:
			return 0x00000008;
		
		case 0x0000005E:
			return 0x00000008;
		
		case 0x00000066:
			return 0x00000008;
		
		case 0x0000005F:
			return 0x00000008;
		
		case 0x00000060:
			return 0x00000020;
		
		case 0x00000061:
			return 0x00000020;
		
		case 0x00000062:
			return 0x00000020;
		
		case 0x00000063:
			return 0x00000008;
		
		case 0x00000064:
			return 0x00000020;
		
		case 0x00000065:
			return 0x00000020;
		
		case 0x00000067:
			return 0x00000020;
		
		case 0x00000068:
			return 0x00000020;
		
		case 0x00000069:
			return 0x00000020;
		
		case 0x0000006A:
			return 0x00000008;
		
		case 0x0000006B:
			return 0x00000008;
		
		case 0x0000006C:
			return 0x00000008;
		
		case 0x0000006D:
			return 0x00000008;
		
		case 0x0000006E:
			return 0x00000008;
		
		case 0x0000006F:
			return 0x00000008;
		
		case 0x00000070:
			return 0x00000008;
		
		case 0x00000071:
			return 0x00000008;
		
		case 0x00000072:
			return 0x00000020;
		
		case 0x00000073:
			return 0x00000008;
		
		case 0x00000074:
			return 0x00000008;
		
		case 0x00000075:
			return 0x00000008;
		
		case 0x00000076:
			return 0x00000008;
		
		case 0x00000077:
			return 0x00000020;
		
		case 0x00000078:
			return 0x00000020;
		
		case 0x00000079:
			return 0x00000020;
		
		case 0x0000007A:
			return 0x00000020;
		
		case 0x0000007B:
			return 0x00000008;
		
		case 0x0000007C:
			return 0x00000008;
		
		case 0x0000007D:
			return 0x00000008;
		
		case 0x0000007E:
			return 0x00000008;
		
		case 0x0000007F:
			return 0x00000020;
		
		case 0x00000080:
			return 0x00000020;
		
		case 0x00000081:
			return 0x00000020;
		
		case 0x0000000C:
			return 0x00000020;
		
		case 0x00000004:
			return 0x00000010;
		
		case 0x0000000D:
			return 0x00000020;
		
		case 0x00000005:
			return 0x00000010;
		
		case 0x00000006:
			return 0x00000002;
		
		case 0x00000008:
			return 0x00000002;
		
		case 0x00000009:
			return 0x00000002;
		
		case 0x00000007:
			return 0x00000010;
		
		case 0x0000000A:
			return 0x00000002;
		
		case 0x0000000B:
			return 0x00000004;
		
		case 0x0000000F:
			return 0x00000020;
		
		case 0x00000010:
			return 0x00000020;
		
		case 0x0000001B:
			return 0x00000002;
		
		case 0x00000019:
			return 0x00000002;
		
		case 0x0000001A:
			return 0x00000002;
		
		case 0x00000012:
			return 0x00000020;
		
		case 0x0000001C:
			return 0x00000020;
		
		case 0x0000001D:
			return 0x00000002;
		
		case 0x0000001E:
			return 0x00000020;
		
		case 0x0000001F:
			return 0x00000020;
		
		case 0x00000011:
			return 0x00000002;
		
		case 0x00000082:
			return 0x00000020;
		
		case 0x00000083:
			return 0x00000020;
		
		case 0x00000013:
			return 0x00000020;
		
		case 0x00000016:
			return 0x00000020;
		
		case 0x00000017:
			return 0x00000020;
		
		case 0x00000018:
			return 0x00000020;
		
		case 0x00000014:
			return 0x00000002;
		
		case 0x00000000:
			return 0x00000000;
		
		case 0x00000015:
			return 0x00000020;
		
		case 0x0000008E:
			return 0x00000020;
		
		case 0x0000008F:
			return 0x00000020;
		
		case 0x00000084:
			return 0x00000020;
		
		case 0x00000085:
			return 0x00000020;
		
		case 0x00000089:
			return 0x00000020;
		
		case 0x00000087:
			return 0x00000020;
		
		case 0x00000088:
			return 0x00000020;
		
		case 0x0000008C:
			return 0x00000020;
		
		case 0x0000008D:
			return 0x00000020;
		
		case 0x0000008A:
			return 0x00000020;
		
		case 0x0000008B:
			return 0x00000020;
		
		case 0x00000090:
			return 0x00000020;
		
		case 0x00000091:
			return 0x00000020;
		
		case 0x00000092:
			return 0x00000020;
		
		case 0x00000093:
			return 0x00000020;
		
		case 0x00000094:
			return 0x00000002;
		
		case 0x00000099:
			return 0x00000001;
		
		case 0x00000095:
			return 0x00000002;
		
		case 0x00000096:
			return 0x00000004;
		
		case 0x00000097:
			return 0x00000002;
		
		case 0x00000098:
			return 0x00000002;
		
		case 0x00000086:
			return 0x00000001;
		
		case 0x0000009A:
			return 0x00000002;
		
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x0000009E:
		case 0x0000009F:
		case 0x000000A0:
			return 0x00000000;
		
		case 0x000000B0:
			return 0x00000001;
		
		case 0x000000A1:
			return 0x00000004;
		
		case 0x000000A4:
			return 0x00000004;
		
		case 0x000000A5:
			return 0x00000001;
		
		case 0x000000A6:
			return 0x00000001;
		
		case 0x000000AC:
			return 0x00000001;
		
		case 0x000000A8:
			return 0x00000002;
		
		case 0x000000AD:
			return 0x00000001;
		
		case 0x000000A9:
			return 0x00000001;
		
		case 0x000000A7:
			return 0x00000002;
		
		case 0x000000AA:
			return 0x00000008;
		
		case 0x000000AB:
			return 0x00000008;
		
		case 0x000000AE:
			return 0x00000001;
		
		case 0x000000A2:
			return 0x00000010;
		
		case 0x000000A3:
			return 0x00000020;
		
		default:
	}
	return 0x00000000;
}

int func_844(int iParam0, bool bParam1, bool bParam2)
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

