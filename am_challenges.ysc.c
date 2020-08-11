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
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	vector3 vLocal_88 = { 0f, 0f, 0f };
	vector3 vLocal_89[65] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_90 = 0f;
	vector3 vLocal_91 = { 0f, 0f, 0f };
	vector3 vLocal_92 = { 0f, 0f, 0f };
	vector3 vLocal_93 = { 0f, 0f, 0f };
	vector3 vLocal_94 = { 0f, 0f, 0f };
	float fLocal_95 = 0f;
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
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	float fLocal_116 = 0f;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	vector3 vLocal_130[65] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_131[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_132[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	struct<68> Local_139 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<535> Local_160 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_161 = -1;
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
	var uLocal_183 = -1082130432;
	var uLocal_184 = 3;
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
	var uLocal_200 = -1;
	var uLocal_201 = 0;
	var uLocal_202 = -1;
	var uLocal_203 = -1;
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
	var uLocal_225 = -1082130432;
	var uLocal_226 = 3;
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
	var uLocal_242 = -1;
	var uLocal_243 = 0;
	var uLocal_244 = -1;
	var uLocal_245 = -1;
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
	var uLocal_267 = -1082130432;
	var uLocal_268 = 3;
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
	var uLocal_284 = -1;
	var uLocal_285 = 0;
	var uLocal_286 = -1;
	var uLocal_287 = -1;
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
	var uLocal_309 = -1082130432;
	var uLocal_310 = 3;
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
	var uLocal_326 = -1;
	var uLocal_327 = 0;
	var uLocal_328 = -1;
	var uLocal_329 = -1;
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
	var uLocal_351 = -1082130432;
	var uLocal_352 = 3;
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
	var uLocal_368 = -1;
	var uLocal_369 = 0;
	var uLocal_370 = -1;
	var uLocal_371 = -1;
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
	var uLocal_393 = -1082130432;
	var uLocal_394 = 3;
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
	var uLocal_410 = -1;
	var uLocal_411 = 0;
	var uLocal_412 = -1;
	var uLocal_413 = -1;
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
	var uLocal_435 = -1082130432;
	var uLocal_436 = 3;
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
	var uLocal_452 = -1;
	var uLocal_453 = 0;
	var uLocal_454 = -1;
	var uLocal_455 = -1;
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
	var uLocal_477 = -1082130432;
	var uLocal_478 = 3;
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
	var uLocal_494 = -1;
	var uLocal_495 = 0;
	var uLocal_496 = -1;
	var uLocal_497 = -1;
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
	var uLocal_519 = -1082130432;
	var uLocal_520 = 3;
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
	var uLocal_536 = -1;
	var uLocal_537 = 0;
	var uLocal_538 = -1;
	var uLocal_539 = -1;
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
	var uLocal_561 = -1082130432;
	var uLocal_562 = 3;
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
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = -1;
	var uLocal_579 = 0;
	var uLocal_580 = -1;
	var uLocal_581 = -1;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = -1082130432;
	var uLocal_604 = 3;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = -1;
	var uLocal_621 = 0;
	var uLocal_622 = -1;
	var uLocal_623 = -1;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = -1082130432;
	var uLocal_646 = 3;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = -1;
	var uLocal_663 = 0;
	var uLocal_664 = -1;
	var uLocal_665 = -1;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = -1082130432;
	var uLocal_688 = 3;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = -1;
	var uLocal_705 = 0;
	var uLocal_706 = -1;
	var uLocal_707 = -1;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = -1082130432;
	var uLocal_730 = 3;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = -1;
	var uLocal_747 = 0;
	var uLocal_748 = -1;
	var uLocal_749 = -1;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = -1082130432;
	var uLocal_772 = 3;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = -1;
	var uLocal_789 = 0;
	var uLocal_790 = -1;
	var uLocal_791 = -1;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = -1082130432;
	var uLocal_814 = 3;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = -1;
	var uLocal_831 = 0;
	var uLocal_832 = -1;
	var uLocal_833 = -1;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = -1082130432;
	var uLocal_856 = 3;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = -1;
	var uLocal_873 = 0;
	var uLocal_874 = -1;
	var uLocal_875 = -1;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = -1082130432;
	var uLocal_898 = 3;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = -1;
	var uLocal_915 = 0;
	var uLocal_916 = -1;
	var uLocal_917 = -1;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = -1082130432;
	var uLocal_940 = 3;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = -1;
	var uLocal_957 = 0;
	var uLocal_958 = -1;
	var uLocal_959 = -1;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = -1082130432;
	var uLocal_982 = 3;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = -1;
	var uLocal_999 = 0;
	var uLocal_1000 = -1;
	var uLocal_1001 = -1;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = -1082130432;
	var uLocal_1024 = 3;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = -1;
	var uLocal_1041 = 0;
	var uLocal_1042 = -1;
	var uLocal_1043 = -1;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = -1082130432;
	var uLocal_1066 = 3;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = -1;
	var uLocal_1083 = 0;
	var uLocal_1084 = -1;
	var uLocal_1085 = -1;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = -1082130432;
	var uLocal_1108 = 3;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = -1;
	var uLocal_1125 = 0;
	var uLocal_1126 = -1;
	var uLocal_1127 = -1;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = -1082130432;
	var uLocal_1150 = 3;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = -1;
	var uLocal_1167 = 0;
	var uLocal_1168 = -1;
	var uLocal_1169 = -1;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = -1082130432;
	var uLocal_1192 = 3;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = -1;
	var uLocal_1209 = 0;
	var uLocal_1210 = -1;
	var uLocal_1211 = -1;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = -1082130432;
	var uLocal_1234 = 3;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = -1;
	var uLocal_1251 = 0;
	var uLocal_1252 = -1;
	var uLocal_1253 = -1;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = -1082130432;
	var uLocal_1276 = 3;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = -1;
	var uLocal_1293 = 0;
	var uLocal_1294 = -1;
	var uLocal_1295 = -1;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = -1082130432;
	var uLocal_1318 = 3;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = -1;
	var uLocal_1335 = 0;
	var uLocal_1336 = -1;
	var uLocal_1337 = -1;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = -1082130432;
	var uLocal_1360 = 3;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = -1;
	var uLocal_1377 = 0;
	var uLocal_1378 = -1;
	var uLocal_1379 = -1;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = -1082130432;
	var uLocal_1402 = 3;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = -1;
	var uLocal_1419 = 0;
	var uLocal_1420 = -1;
	var uLocal_1421 = -1;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = -1082130432;
	var uLocal_1444 = 3;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = -1;
	var uLocal_1461 = 0;
	var uLocal_1462 = -1;
	var uLocal_1463 = -1;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = -1082130432;
	var uLocal_1486 = 3;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = -1;
	var uLocal_1503 = 0;
	var uLocal_1504 = -1;
	struct<12> Local_1505[32];
	struct<12> Local_1506 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_1507 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_90 = 40000f;
	iLocal_118 = unk_0xD68EA767274B7444();
	iLocal_119 = unk_0xD68EA767274B7444();
	iLocal_120 = 0xFFFFFFFF;
	iLocal_121 = 0xFFFFFFFF;
	if (unk_0x8CD06866876216F2())
	{
		if (!func_771(ScriptParam_1507))
		{
			func_733();
		}
	}
	while (0x00000001)
	{
		func_732();
		if (func_725() || func_723())
		{
			func_733();
		}
		if (func_721())
		{
			func_733();
		}
		func_695();
		switch (func_694(unk_0x6E61BE9E61434AC1()))
		{
			case 0x00000000:
				if (func_693() == 0x00000001)
				{
					if (func_692())
					{
						func_691(unk_0x6E61BE9E61434AC1(), 0x00000001);
					}
				}
				break;
			
			case 0x00000001:
				if (func_693() == 0x00000001)
				{
					func_139();
					func_127();
				}
				else if (func_693() == 0x00000003)
				{
					func_691(unk_0x6E61BE9E61434AC1(), 0x00000003);
				}
				break;
			
			case 0x00000003:
				func_733();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_693())
			{
				case 0x00000000:
					if (func_114())
					{
						func_113(0x00000001);
					}
					break;
				
				case 0x00000001:
					if (Local_139.f_25 == 0x00000006)
					{
						func_113(0x00000002);
					}
					else
					{
						func_3();
					}
					break;
				
				case 0x00000002:
					if (func_1(&uLocal_96, 0x000003E8, 0x00000000))
					{
						func_113(0x00000003);
					}
					break;
				
				case 0x00000003:
					func_733();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_2(uParam0, bParam2, 0x00000000);
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

void func_2(var uParam0, bool bParam1, bool bParam2)
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

void func_3()
{
	bool bVar0;
	
	if (func_44(0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_139.f_2, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(Local_139.f_2), 0x00000000);
			Local_139.f_1 = unk_0x2B6E0A53779D29EA();
		}
	}
	switch (Local_139.f_25)
	{
		case 0x00000000:
			if (func_43())
			{
				if (!func_31())
				{
					bVar0 = 0x00000001;
				}
			}
			if (!bVar0)
			{
				func_30(0x00000001);
			}
			break;
		
		case 0x00000001:
			if (func_1(&(Local_139.f_2B), func_29(), 0x00000000) || unk_0xEAE0D21A50E6C7F4(Local_139.f_2, 0x00000000))
			{
				func_30(0x00000002);
			}
			func_31();
			break;
		
		case 0x00000002:
			Local_139.f_26 = unk_0x2B6E0A53779D29EA();
			func_30(0x00000003);
			break;
		
		case 0x00000003:
			if (func_1(&(Local_139.f_27), func_28(0x00000000), 0x00000000) || unk_0xEAE0D21A50E6C7F4(Local_139.f_2, 0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_139.f_2, 0x00000001))
				{
					Local_139.f_1 = unk_0x2B6E0A53779D29EA();
					unk_0x5D96D8530B3D0904(&(Local_139.f_2), 0x00000001);
					func_27(&(Local_139.f_27), 0x00000000, 0x00000000);
				}
				else
				{
					func_30(0x00000004);
				}
			}
			func_13();
			func_9(&iLocal_121, &iLocal_120);
			func_31();
			break;
		
		case 0x00000004:
			if ((func_1(&(Local_139.f_29), 0x00004E20, 0x00000000) || Local_139.f_4[0x00000000] < 0x00000000) || func_6())
			{
				if (func_5(Local_139.f_3))
				{
					func_27(&(Local_139.f_2D), 0x00000000, 0x00000000);
					func_30(0x00000005);
				}
				else
				{
					func_30(0x00000006);
				}
			}
			else
			{
				func_31();
			}
			break;
		
		case 0x00000005:
			if (func_4())
			{
				func_30(0x00000006);
			}
			break;
		
		case 0x00000006:
			break;
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (unk_0xE5DBF9B6126856CA(Local_139.f_43[iVar0 /*2*/].f_1) && !unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_139.f_43[iVar0 /*2*/].f_1), 0x00000000))
		{
			return 0x00000000;
		}
		iVar0++;
	}
	return 0x00000001;
}

int func_5(int iParam0)
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

int func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_1505[iVar1 /*12*/].f_1, 0x00000001) || Local_1505[iVar1 /*12*/].f_3 != 0x00000006)
				{
					return 0x00000000;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_1505[iVar1 /*12*/].f_1, 0x00000000))
				{
					iVar0 = 0x00000001;
				}
			}
			else
			{
				iVar0 = 0x00000001;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_7(int iParam0)
{
	if (func_8(iParam0))
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000008);
}

bool func_8(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000002);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	int iVar1;
	
	if (*iParam0 >= 0x00000000 && *iParam1 >= 0x00000000)
	{
		iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(*iParam0));
		if (*iParam1 == 0x00000000)
		{
			Var0.f_2 = 0xEAAA70D2;
			Var0.f_A = iVar1;
			func_10(Var0, func_11(0x00000001));
		}
		*iParam0 = 0xFFFFFFFF;
		*iParam1 = 0xFFFFFFFF;
	}
}

void func_10(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 0x75BF07BC;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Param0, 0x0000000E, iParam13);
	}
}

int func_11(int iParam0)
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
			if (func_12(iVar2, 0x00000000, 0x00000000))
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

int func_12(int iParam0, bool bParam1, bool bParam2)
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

void func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			unk_0x5D96D8530B3D0904(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0x5D96D8530B3D0904(&(Local_139.f_2F), iVar0);
			iVar1++;
			if (func_17(iVar0, 0x00000000))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
				if (unk_0x40B8C182D63932FC(iVar4) && !func_14(iVar4, 0x00000000))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_139.f_32)
	{
		Local_139.f_32 = iVar1;
	}
	else
	{
		Local_139.f_42 = (Local_139.f_32 - iVar1);
	}
	if (iVar2 > Local_139.f_33)
	{
		Local_139.f_33 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_15(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_15(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_16();
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

int func_16()
{
	return Global_1407E9;
}

int func_17(int iParam0, bool bParam1)
{
	float fVar0;
	
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000020)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_1505[iParam0 /*12*/].f_4);
	}
	else if (iParam0 == 0xFFFFFFFF)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_4);
	}
	else
	{
		return 0x00000000;
	}
	if (bParam1)
	{
		if (func_19())
		{
			return 0x00000001;
		}
	}
	if (func_18())
	{
		fVar0 = (fVar0 / 10f);
	}
	switch (Local_139.f_3)
	{
		case 0x00000000:
			if (fVar0 >= Global_40001.f_2ABB)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (fVar0 >= Global_40001.f_2ABC)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000003:
			if (fVar0 >= Global_40001.f_2ABD)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
			if (fVar0 >= Global_40001.f_2ABE)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (fVar0 >= Global_40001.f_2ABF)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (fVar0 >= Global_40001.f_2AC0)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000006:
			if (fVar0 <= Global_40001.f_2AC1 && fVar0 != 0f)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			if (fVar0 >= Global_40001.f_2AC2)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000A:
			if (fVar0 >= Global_40001.f_2AC3)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000012:
			if (fVar0 >= Global_40001.f_2AC4)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000D:
			if (fVar0 >= Global_40001.f_2AC5)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000007:
			if (fVar0 >= IntToFloat(Global_40001.f_2AC6))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000008:
			if (fVar0 >= IntToFloat(Global_40001.f_2AC7))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000B:
			if (fVar0 >= Global_40001.f_2B37)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000C:
			if (fVar0 >= Global_40001.f_2B38)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000E:
			if (fVar0 >= IntToFloat(Global_40001.f_2ACA))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000F:
			if (fVar0 >= IntToFloat(Global_40001.f_2ACC))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000010:
			if (fVar0 >= IntToFloat(Global_40001.f_2ACD))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000011:
			if (fVar0 >= IntToFloat(Global_40001.f_2ACE))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_18()
{
	switch (Local_139.f_3)
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

int func_19()
{
	if ((func_20(0x00000000) || func_20(0x00000001)) || func_20(0x00000002))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_20(int iParam0)
{
	if (iParam0 >= 0x00000000)
	{
		if (Local_139.f_4[iParam0] == unk_0x57270EE11514DC67() && func_21(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_4, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_21(int iParam0, int iParam1)
{
	if (!func_22())
	{
		return iParam0 > iParam1;
	}
	if (iParam0 == 0x00000000)
	{
		iParam0 = 0x7FFFFFFF;
	}
	if (iParam1 == 0x00000000)
	{
		iParam1 = 0x7FFFFFFF;
	}
	return iParam0 < iParam1;
}

int func_22()
{
	switch (Local_139.f_3)
	{
		case 0x00000006:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = Local_1505[iParam0 /*12*/].f_4;
	iVar1 = Local_1505[iParam0 /*12*/].f_4.f_2;
	if (!unk_0xEAE0D21A50E6C7F4(Local_139.f_30, iParam0))
	{
		fVar2 = SYSTEM::TO_FLOAT(Local_139.f_4[0x00000000]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_139.f_31++;
			unk_0x5D96D8530B3D0904(&(Local_139.f_30), iParam0);
		}
	}
	iVar3 = 0xFFFFFFFF;
	iVar4 = 0xFFFFFFFE;
	iVar3 = 0x00000000;
	while (iVar3 < 0x00000020)
	{
		if (Local_139.f_4[iVar3] == iParam0)
		{
			iVar3 = 0x00000020;
		}
		else if (iVar4 >= 0xFFFFFFFF)
		{
			if (iVar4 >= 0x00000000)
			{
				func_25(&(Local_139.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_139.f_4[iVar3] < 0x00000000 || func_21(iVar0, Local_1505[Local_139.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_1505[Local_139.f_4[iVar3] /*12*/].f_4, iVar1, Local_1505[Local_139.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_139.f_4[iVar3];
			if (func_21(iVar0, 0x00000000))
			{
				iLocal_120 = iVar3;
				iLocal_121 = iParam0;
			}
			Local_139.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 0x0000001F)
			{
				if (Local_139.f_4[iVar5] == iParam0)
				{
					Local_139.f_4[iVar5] = 0xFFFFFFFF;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_139.f_3 == 0x00000002)
	{
		if (iParam0 == iParam1 && iParam2 > iParam3)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_25(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_26(int iParam0)
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_139.f_2F, iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			if (Local_139.f_4[iVar0] == iParam0)
			{
				Local_139.f_4[iVar0] = 0xFFFFFFFF;
				iVar0 = 0x00000020;
			}
			iVar0++;
		}
		unk_0x0674E58A79778E99(&(Local_139.f_30), iParam0);
		unk_0x0674E58A79778E99(&(Local_139.f_2F), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
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

int func_28(bool bParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Local_139.f_2, 0x00000001) && !bParam0)
	{
		return 0x000002EE;
	}
	switch (Local_139.f_3)
	{
		case 0x00000000:
			return Global_40001.f_2810;
		
		case 0x00000008:
			return Global_40001.f_2812;
		
		case 0x00000003:
			return Global_40001.f_2813;
		
		case 0x00000001:
			return Global_40001.f_2B29;
		
		case 0x00000006:
			return Global_40001.f_2B2A;
		
		case 0x0000000A:
			return Global_40001.f_2B2C;
		
		case 0x0000000B:
			return Global_40001.f_2B2E;
		
		case 0x0000000C:
			return Global_40001.f_2B2F;
		
		case 0x0000000F:
			return Global_40001.f_2B33;
		
		case 0x00000010:
			return Global_40001.f_2B34;
		
		case 0x00000011:
			return Global_40001.f_2B35;
		
		case 0x00000012:
			return Global_40001.f_2B36;
		
		case 0x0000000D:
			return Global_40001.f_2B2D;
		
		case 0x0000000E:
			return Global_40001.f_2B30;
		
		case 0x00000002:
			return Global_40001.f_2815;
		
		case 0x00000007:
			return Global_40001.f_2B2B;
		
		case 0x00000009:
			return Global_40001.f_2B31;
		
		case 0x00000005:
			return Global_40001.f_2816;
		
		case 0x00000004:
			return Global_40001.f_2814;
		
		default:
	}
	return 0xFFFFFFFF;
}

int func_29()
{
	return Global_40001.f_2B0B;
}

void func_30(int iParam0)
{
	Local_139.f_25 = iParam0;
}

int func_31()
{
	struct<2> Var0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	if (func_43() && ((Local_139.f_25 == 0x00000000 || func_5(Local_139.f_3)) || Local_139.f_36 < 0x0000000A))
	{
		Var0 = { Local_139.f_43[iLocal_115 /*2*/] };
		if (func_42(Var0))
		{
			if (!unk_0xE9F78D191AD5EDBA(Var0.f_1))
			{
				if (func_40(Local_139.f_3, iLocal_115, &vVar1, &fVar2))
				{
					Local_139.f_37[iLocal_115] = func_36(iLocal_115);
					if (unk_0xEAE0D21A50E6C7F4(Local_1505[Local_139.f_37[iLocal_115] /*12*/].f_2, iLocal_115))
					{
						if (func_33(&(Local_139.f_43[iLocal_115 /*2*/].f_1), Var0, vVar1, fVar2, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
						{
							unk_0xBA2CB24C70C8E726(unk_0xA5FBBC2F619A4DE2(Local_139.f_43[iLocal_115 /*2*/].f_1), 0x00000001, 0x00000001);
							unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_139.f_43[iLocal_115 /*2*/].f_1), 0x00000001);
							unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(Local_139.f_43[iLocal_115 /*2*/].f_1), 0x00000001);
							unk_0x67E3D6EA8D96FD85(unk_0xB177666FAB6F4417(Local_139.f_43[iLocal_115 /*2*/].f_1), 0x00000000);
							func_32(unk_0xB177666FAB6F4417(Local_139.f_43[iLocal_115 /*2*/].f_1), 0x00000001);
							if (unk_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 0x00000003))
							{
								unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_139.f_43[iLocal_115 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 0x00000001);
							}
							if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003))
							{
								if (unk_0x30F813723591D02E(unk_0xB177666FAB6F4417(Local_139.f_43[iLocal_115 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = unk_0x1E2DFB0EF4BB4566(unk_0xB177666FAB6F4417(Local_139.f_43[iLocal_115 /*2*/].f_1), "MPBitset");
								}
								unk_0x5D96D8530B3D0904(&iVar3, 0x0000000A);
								unk_0x5D96D8530B3D0904(&iVar3, 0x0000000B);
								unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_139.f_43[iLocal_115 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_139.f_37[iLocal_115] = 0xFFFFFFFF;
							Local_139.f_36++;
						}
					}
				}
			}
		}
		iLocal_115++;
		if (iLocal_115 >= 0x0000000A)
		{
			iLocal_115 = 0x00000000;
			return 0x00000001;
		}
		return 0x00000000;
	}
	return 0x00000001;
}

void func_32(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003))
	{
		if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x0000000D);
		}
		else
		{
			unk_0x0674E58A79778E99(&iVar0, 0x0000000D);
		}
		unk_0xB7E567188872123E(iParam0, "MPBitset", iVar0);
	}
}

int func_33(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
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
			unk_0x120A395B0ECB8EA5(iVar1, bParam8);
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
			func_34(vParam2, fParam3, iParam1, iVar1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_34(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_35(unk_0xD803B885F5E47A62(), vParam0, iParam2) > 0xFFFFFFFF)
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

int func_35(int iParam0, vector3 vParam1, int iParam2)
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

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	var uVar5;
	int iVar6;
	
	fVar2 = 1000000f;
	if (func_39(iParam0, &vVar4, &uVar5))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (unk_0x54EABC0DD106045B() - 0x00000001))
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
			{
				iVar6 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
				if (func_12(iVar6, 0x00000001, 0x00000001))
				{
					fVar3 = func_37(func_38(iVar6), vVar4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_37(vector3 vParam0, vector3 vParam1)
{
	vParam0.z = 0f;
	vParam1.z = 0f;
	return SYSTEM::VDIST(vParam0, vParam1);
}

Vector3 func_38(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_39(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { -1729.582f, -2943.77f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		
		case 0x00000001:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		
		case 0x00000002:
			*uParam1 = { 1073.972f, 3003.889f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		
		case 0x00000003:
			*uParam1 = { 1928.635f, 4702.327f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		
		case 0x00000004:
			*uParam1 = { 1278.65f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		
		case 0x00000005:
			*uParam1 = { -1700.407f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		
		case 0x00000006:
			*uParam1 = { -2733.589f, 2925.563f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		
		case 0x00000007:
			*uParam1 = { 1493.418f, -2442.99f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		
		case 0x00000008:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		
		case 0x00000009:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		
		default:
			return 0x00000000;
	}
	return 0x00000001;
}

int func_40(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (func_5(iParam0))
	{
		switch (iParam1)
		{
			case 0x00000000:
				*uParam2 = { -1729.582f, -2943.77f, 12.9443f };
				*uParam3 = 300.078f;
				break;
			
			case 0x00000001:
				*uParam2 = { 677.2984f, 769.7758f, 204.6846f };
				*uParam3 = 82.8903f;
				break;
			
			case 0x00000002:
				*uParam2 = { 1073.972f, 3003.889f, 40.5508f };
				*uParam3 = 333.2717f;
				break;
			
			case 0x00000003:
				*uParam2 = { 1928.635f, 4702.327f, 40.1958f };
				*uParam3 = 327.9112f;
				break;
			
			case 0x00000004:
				*uParam2 = { 1278.65f, 6579.366f, 1.505f };
				*uParam3 = 84.26f;
				break;
			
			case 0x00000005:
				*uParam2 = { -1700.407f, -829.8932f, 8.2542f };
				*uParam3 = 70.1811f;
				break;
			
			case 0x00000006:
				*uParam2 = { -2733.589f, 2925.563f, 1.2152f };
				*uParam3 = 173.6421f;
				break;
			
			case 0x00000007:
				*uParam2 = { 1493.418f, -2442.99f, 64.9693f };
				*uParam3 = 52.9918f;
				break;
			
			case 0x00000008:
				*uParam2 = { 569.0449f, -772.5692f, 10.4088f };
				*uParam3 = 179.3501f;
				break;
			
			case 0x00000009:
				*uParam2 = { -905.1526f, 5548.172f, 5.5251f };
				*uParam3 = 95.8361f;
				break;
			
			default:
				return 0x00000000;
		}
	}
	else if (func_41(iParam0))
	{
		switch (iParam1)
		{
			case 0x00000000:
				*uParam2 = { -3132.932f, 1130.534f, 19.683f };
				*uParam3 = 168.7723f;
				break;
			
			case 0x00000001:
				*uParam2 = { -1008.917f, -1640.027f, 3.4035f };
				*uParam3 = 235.1491f;
				break;
			
			case 0x00000002:
				*uParam2 = { 1075.063f, -2445.105f, 28.2896f };
				*uParam3 = 100.2369f;
				break;
			
			case 0x00000003:
				*uParam2 = { 1101.198f, -266.9387f, 68.3046f };
				*uParam3 = 359.2015f;
				break;
			
			case 0x00000004:
				*uParam2 = { 2658.878f, 1667.581f, 23.4886f };
				*uParam3 = 90.4833f;
				break;
			
			case 0x00000005:
				*uParam2 = { -399.1095f, 874.6328f, 230.2586f };
				*uParam3 = 107.5929f;
				break;
			
			case 0x00000006:
				*uParam2 = { 156.5429f, 3117.213f, 41.5677f };
				*uParam3 = 218.5338f;
				break;
			
			case 0x00000007:
				*uParam2 = { -2242.923f, 4315.749f, 46.7647f };
				*uParam3 = 236.8359f;
				break;
			
			case 0x00000008:
				*uParam2 = { -143.7363f, 6500.573f, 28.7366f };
				*uParam3 = 116.1312f;
				break;
			
			case 0x00000009:
				*uParam2 = { 1939.475f, 4628.652f, 39.3984f };
				*uParam3 = 350.0428f;
				break;
			
			default:
				return 0x00000000;
			}
	}
	return 0x00000001;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000004:
		case 0x00000003:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

bool func_43()
{
	return (func_5(Local_139.f_3) || func_41(Local_139.f_3));
}

int func_44(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_112(unk_0xD803B885F5E47A62(), 0x00000000) || func_109(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (func_108(unk_0xD803B885F5E47A62()) || func_106(unk_0xD803B885F5E47A62()))
		{
			bParam2 = 0x00000000;
		}
	}
	if (unk_0x981819F6C45DDB49() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 0x00000001);
		}
		if (func_50(0x0000001A, 0xFFFFFFFF))
		{
			func_48(0x0000001A, 0xFFFFFFFF);
		}
		return 0x00000001;
	}
	if (func_47(&(Global_1806FA.f_12)))
	{
		if (!func_1(&(Global_1806FA.f_12), 0x00001D4C, 0x00000000))
		{
			return 0x00000000;
		}
		func_46(&(Global_1806FA.f_12));
	}
	if (func_45())
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 0x00000000);
		}
		if (func_50(0x0000001A, 0xFFFFFFFF))
		{
			func_48(0x0000001A, 0xFFFFFFFF);
		}
		return 0x00000001;
	}
	if (iParam1 && unk_0x0DC0B2DBBD52B0C0() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 0x00000001);
		}
		if (func_50(0x0000001A, 0xFFFFFFFF))
		{
			func_48(0x0000001A, 0xFFFFFFFF);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_45()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000000);
}

void func_46(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

bool func_47(var uParam0)
{
	return uParam0->f_1;
}

void func_48(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_16();
	}
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x25C34E9F657F1C79(0x00000000, iParam1);
			break;
		
		default:
			iVar1 = func_49(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x0674E58A79778E99(&iVar0, iParam0);
				unk_0x25C34E9F657F1C79(iVar0, iParam1);
			}
			break;
	}
}

int func_49(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_16();
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

bool func_50(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_16();
	}
	iVar0 = func_49(iParam1);
	iVar1 = unk_0x0A4C9A3D51EAE31F(iVar0);
	return unk_0xEAE0D21A50E6C7F4(iVar1, iParam0);
}

void func_51(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000002) && !func_8(unk_0xD803B885F5E47A62())) && !func_7(unk_0xD803B885F5E47A62()))
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
		func_52(0x00000042, sParam0, sParam1, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000002);
	}
}

int func_52(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_105(iParam0, &Var0, 0xFFFFFFFF, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	if (iParam7 != 0x00000000)
	{
		func_103(&(Var0.f_45), iParam7);
	}
	return func_53(&Var0);
}

int func_53(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 0x00000001)
	{
		if (Global_2537E2.f_BE5)
		{
			return 0x00000000;
		}
	}
	func_68(uParam0, uParam0->f_11);
	func_65(uParam0);
	if (func_64())
	{
		func_65(uParam0);
	}
	if (func_63(uParam0->f_1))
	{
		func_56();
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
				func_56();
			}
			return 0x00000001;
		}
		else
		{
			if (uParam0->f_1 == 0x00000001)
			{
				func_103(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000002);
				Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			}
			if (uParam0->f_1 == 0x00000056 && !func_55(uParam0->f_45, 0x00000080))
			{
				if (func_54(Global_2537E2.f_AA3[iVar0 /*80*/].f_1))
				{
					Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
					func_103(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_54(int iParam0)
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

bool func_55(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_56()
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
	func_57();
	if (bVar0)
	{
		Global_12C5A = 0x00000000;
	}
}

void func_57()
{
	Global_2537E2.f_BE7 = 0x00000000;
	Global_2537E2.f_BE7.f_242 = 0x00000000;
	func_61(&(Global_2537E2.f_BE7.f_1));
	Global_2537E2.f_BE7.f_1.f_1 = 0x00000000;
	func_58(&(Global_2537E2.f_BE7.f_1));
}

void func_58(var uParam0)
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
				if (unk_0x757EF87A33649210() && !func_60(0x00000000))
				{
					unk_0x82E51BCA72537B6C(0x00000320);
				}
			}
		}
	}
	func_59(0x00000000);
}

void func_59(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

bool func_60(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_61(var uParam0)
{
	func_62(uParam0);
	uParam0->f_23A = 0x00000000;
	uParam0->f_1F = 0x00000000;
	uParam0->f_38 = 0x00000000;
	uParam0->f_237 = 0x00000000;
	uParam0->f_239 = 0x00000000;
}

void func_62(var uParam0)
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

int func_63(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 0x00000003 || iParam0 == 0x00000004) || iParam0 == 0x00000005) || iParam0 == 0x00000006) || iParam0 == 0x0000000B) || iParam0 == 0x0000000C) || iParam0 == 0x0000001C) || iParam0 == 0x0000001D) || iParam0 == 0x0000001E) || iParam0 == 0x00000018) || iParam0 == 0x00000020) || iParam0 == 0x0000001F) || iParam0 == 0x0000001A) || iParam0 == 0x00000019) || iParam0 == 0x00000038) || iParam0 == 0x00000007) || iParam0 == 0x00000008) || iParam0 == 0x00000009) || iParam0 == 0x0000000A) || iParam0 == 0x00000068) || iParam0 == 0x00000064) || iParam0 == 0x00000067) || iParam0 == 0x00000069) || iParam0 == 0x0000006E)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_64()
{
	return Global_2564C8.f_11;
}

void func_65(var uParam0)
{
	if (func_67(uParam0->f_1))
	{
		uParam0->f_48 = func_66();
	}
}

int func_66()
{
	return 0x00000015;
}

int func_67(int iParam0)
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

void func_68(var uParam0, int iParam1)
{
	if (func_67(uParam0->f_1))
	{
		uParam0->f_49 = 0x00000001;
	}
	if (iParam1 == func_102() || !func_12(iParam1, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_54(uParam0->f_1))
	{
		if (uParam0->f_47 == 0x00000001)
		{
			uParam0->f_49 = func_69(iParam1, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
		}
	}
}

int func_69(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_100(iParam0) && !bParam4)
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
	if (((func_100(unk_0xD803B885F5E47A62()) || (func_99() && func_98())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001F)) && !bParam4)
	{
		iVar1 = func_97();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != 0xFFFFFFFF)
				{
					if (func_12(unk_0x83FACCC48B68F9D1(iVar1), 0x00000000, 0x00000001))
					{
						if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
						{
							if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
							{
								return func_95(iParam1, iParam0, 0x00000000);
							}
							else
							{
								return func_82(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_82(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
			{
				if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
				{
					return func_95(iParam1, iParam0, 0x00000000);
				}
				else
				{
					return func_70(0x00000000, 0xFFFFFFFF, 0x00000000);
				}
			}
			else
			{
				return func_70(0x00000000, 0xFFFFFFFF, 0x00000000);
			}
		}
	}
	if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
	{
		if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
		{
			return func_95(iParam1, iParam0, 0x00000000);
		}
		else
		{
			return func_82(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_82(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_70(bool bParam0, int iParam1, bool bParam2)
{
	return func_71(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_71(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 0x00000003;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_81() || (func_80() && func_78())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_77(iParam2, iVar0);
		}
		else
		{
			return func_77(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 0xFFFFFFFF)
		{
			if (func_76(iVar0, iParam2, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012))
			{
				if (iVar0 == iParam2)
				{
					return func_75(0x00000001);
				}
				else
				{
					return func_75(0x00000000);
				}
			}
			else if (bParam3)
			{
				return 0x0000001C;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000014))
			{
				return func_72(iVar0, iParam2, 0x00000001, 0x00000004);
			}
			else
			{
				return func_72(iVar0, iParam2, 0x00000000, 0x00000004);
			}
		}
		return 0x0000001C;
	}
	if (iVar0 == iParam2 || iParam2 == 0xFFFFFFFF)
	{
		return func_75(0x00000001);
	}
	return func_75(0x00000000);
}

int func_72(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_74(iParam0, iParam1, iParam3);
	if (func_73(Global_440000.f_2F9AE, 0x00000001))
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

int func_73(int iParam0, bool bParam1)
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

int func_74(int iParam0, int iParam1, int iParam2)
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
			if (!func_76(iParam0, iVar0, 0x00000000))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_75(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000076;
	}
	return 0x00000074;
}

int func_76(int iParam0, int iParam1, int iParam2)
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

int func_77(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_74(iParam1, iParam0, 0x00000004);
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

bool func_78()
{
	if (func_79())
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000004);
}

bool func_79()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 0x0000000C);
}

bool func_80()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0x00000000);
}

int func_81()
{
	if (func_79() && unk_0xA14BB9332558B949())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_91())
			{
				iVar3 = func_87(iParam0);
				if (!iVar3 == 0xFFFFFFFF)
				{
					return func_85(iVar3);
				}
			}
			if ((func_84(iParam1, iParam0, iVar0, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)) || ((func_76(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000017)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)))
			{
				return func_75(0x00000001);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A))
			{
				return func_83(0x00000001);
			}
			else
			{
				return func_71(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0x00000000)
		{
			if (iParam0 == iParam1 || (Global_18060A == 0x00000001 && Global_180614 == 0x00000000))
			{
				return func_75(0x00000001);
			}
			else
			{
				return func_71(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 0x0000001C;
		}
	}
	iVar4 = func_87(iParam0);
	if (!iVar4 == 0xFFFFFFFF)
	{
		return func_85(iVar4);
	}
	if (bParam3)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_83(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000077;
	}
	return 0x00000074;
}

bool func_84(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_85(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		iVar0 = func_86(iParam0);
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

var func_86(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_87(int iParam0)
{
	if (!iParam0 == func_102())
	{
		if (func_89(iParam0, 0x00000001))
		{
			return Global_24E4E9.f_332.f_B[func_88(iParam0)];
		}
	}
	return 0xFFFFFFFF;
}

int func_88(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_102();
}

bool func_89(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_90(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_102();
}

int func_90(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_102())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

int func_91()
{
	if (((func_94() || func_93()) || func_64()) || func_92())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_92()
{
	return Global_2564C8.f_13;
}

var func_93()
{
	return Global_2564C8.f_10;
}

var func_94()
{
	return Global_2564C8.f_F;
}

int func_95(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_91())
	{
		iVar2 = func_87(iParam1);
		if (!iVar2 == 0xFFFFFFFF)
		{
			return func_85(iVar2);
		}
	}
	if (iVar1 > 0xFFFFFFFF && iVar1 < 0x00000011)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 0x00000018))
		{
			return 0x00000012;
		}
	}
	if (iParam0 > 0xFFFFFFFF && iParam1 != func_102())
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
			iVar0 = func_71(iParam1, !bParam2, iParam0, 0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 0x0000000D))
		{
			iVar0 = func_96(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 0x0000001D))
		{
			iVar0 = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A) && !func_76(iParam0, unk_0x08067D4957B73C02(iParam1), 0x00000000))
		{
			iVar0 = func_83(0x00000001);
		}
	}
	else
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_96(int iParam0)
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

var func_97()
{
	return Global_240006.f_2;
}

bool func_98()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000004);
}

bool func_99()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

int func_100(int iParam0)
{
	if (func_14(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_101())
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

bool func_101()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_102()
{
	return 0xFFFFFFFF;
}

void func_103(var uParam0, int iParam1)
{
	func_104(uParam0, iParam1);
}

void func_104(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_105(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_11 = func_102();
	uParam1->f_12 = func_102();
	uParam1->f_13 = func_102();
	uParam1->f_14 = func_102();
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

bool func_106(int iParam0)
{
	return func_107(iParam0, 0x00000014);
}

bool func_107(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_108(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_107(iParam0, 0x00000009);
	}
	return 0x00000000;
}

int func_109(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF && func_110(Global_18D84D[iParam0 /*615*/].f_B.f_21))
	{
		return 0x00000001;
	}
	if (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF)
	{
		if (func_110(Global_18D84D[iParam0 /*615*/].f_B.f_20))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_110(int iParam0)
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
	return func_111(iParam0, 0x00000000);
	return 0x00000000;
}

int func_111(int iParam0, int iParam1)
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

int func_112(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_113(int iParam0)
{
	Local_139 = iParam0;
}

int func_114()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		Local_139.f_4[iVar0] = 0xFFFFFFFF;
		iVar0++;
	}
	func_46(&(Local_139.f_27));
	func_119();
	if (func_43())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000A)
		{
			Local_139.f_37[iVar0] = func_36(iVar0);
			iVar0++;
		}
		func_115();
	}
	return 0x00000001;
}

void func_115()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (func_41(Local_139.f_3))
		{
			Local_139.f_43[iVar0 /*2*/] = func_118();
		}
		else
		{
			Local_139.f_43[iVar0 /*2*/] = func_116();
		}
		iVar0++;
	}
}

int func_116()
{
	int iVar0;
	
	switch (Local_139.f_3)
	{
		case 0x0000000C:
			return func_117();
			break;
	}
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
	switch (iVar0)
	{
		case 0x00000000:
			return joaat("maverick");
		
		case 0x00000001:
			return joaat("mammatus");
		
		default:
	}
	return 0x00000000;
}

int func_117()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
	switch (iVar0)
	{
		case 0x00000000:
			return joaat("stunt");
		
		case 0x00000001:
			return joaat("besra");
		
		default:
	}
	return 0x00000000;
}

int func_118()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
	switch (iVar0)
	{
		case 0x00000000:
			return joaat("sanchez");
		
		case 0x00000001:
			return joaat("pcj");
		
		default:
	}
	return 0x00000000;
}

void func_119()
{
	int iVar0;
	
	iVar0 = func_123();
	Local_139.f_3 = iVar0;
	func_120(func_122(0x00000085, iVar0, 0x00000000, 0x00000000));
}

void func_120(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 0x76289B27;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam0;
	iVar1 = func_121(0x00000001, 0x00000001);
	if (!iVar1 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000003, iVar1);
	}
}

var func_121(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_12(iVar2, 0x00000000, 0x00000000))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_122(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_123()
{
	int iVar0[19];
	float fVar1;
	int iVar2;
	float fVar3;
	
	iVar0[0x00000000] = Global_40001.f_2C54;
	iVar0[0x00000001] = Global_40001.f_2B0D;
	iVar0[0x00000002] = Global_40001.f_2C58;
	iVar0[0x00000003] = Global_40001.f_2C56;
	iVar0[0x00000004] = Global_40001.f_2C57;
	iVar0[0x00000005] = Global_40001.f_2C59;
	iVar0[0x00000006] = Global_40001.f_2B0E;
	iVar0[0x00000007] = Global_40001.f_2B0F;
	iVar0[0x00000008] = Global_40001.f_2C55;
	iVar0[0x00000009] = Global_40001.f_2B15;
	iVar0[0x0000000A] = Global_40001.f_2B10;
	iVar0[0x0000000B] = Global_40001.f_2B12;
	iVar0[0x0000000C] = Global_40001.f_2B13;
	iVar0[0x0000000D] = Global_40001.f_2B11;
	iVar0[0x0000000E] = Global_40001.f_2B14;
	iVar0[0x0000000F] = Global_40001.f_2B17;
	iVar0[0x00000010] = Global_40001.f_2B18;
	iVar0[0x00000011] = Global_40001.f_2B19;
	iVar0[0x00000012] = Global_40001.f_2B1A;
	fVar1 = 0f;
	iVar2 = 0x00000000;
	while (iVar2 < iVar0)
	{
		if (func_126(iVar2) || func_124(0x00000085, iVar2, 0x00000000, 0x00000000))
		{
			iVar0[iVar2] = 0f;
		}
		else
		{
			fVar1 = (fVar1 + iVar0[iVar2]);
		}
		iVar2++;
	}
	fVar3 = unk_0x79833B02DBD2A244(0f, fVar1);
	iVar2 = 0x00000000;
	while (iVar2 < iVar0)
	{
		if (fVar3 <= iVar0[iVar2])
		{
			return iVar2;
		}
		fVar3 = (fVar3 - iVar0[iVar2]);
		iVar2++;
	}
	return func_123();
}

int func_124(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_125(iParam0);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000015)
	{
		if (iVar0 < Global_40001.f_1FB0)
		{
			if (Global_263F7A.f_88[iVar0 /*2*/] == iVar1 && Global_263F7A.f_88[iVar0 /*2*/].f_1 == func_122(iParam0, iParam1, iParam2, iParam3))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_125(int iParam0)
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

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_40001.f_280A;
		
		case 0x00000001:
			return Global_40001.f_2B1B;
		
		case 0x00000006:
			return Global_40001.f_2B1C;
		
		case 0x00000007:
			return Global_40001.f_2B1D;
		
		case 0x00000008:
			return Global_40001.f_280B;
		
		case 0x00000003:
			return Global_40001.f_280C;
		
		case 0x00000004:
			return Global_40001.f_280D;
		
		case 0x00000002:
			return Global_40001.f_280E;
		
		case 0x00000005:
			return Global_40001.f_280F;
		
		case 0x00000009:
			return Global_40001.f_2B23;
		
		case 0x0000000A:
			return Global_40001.f_2B1E;
		
		case 0x0000000B:
			return Global_40001.f_2B20;
		
		case 0x0000000C:
			return Global_40001.f_2B21;
		
		case 0x0000000F:
			return Global_40001.f_2B25;
		
		case 0x00000010:
			return Global_40001.f_2B26;
		
		case 0x00000011:
			return Global_40001.f_2B27;
		
		case 0x00000012:
			return Global_40001.f_2B28;
		
		case 0x0000000D:
			return Global_40001.f_2B1F;
		
		case 0x0000000E:
			return Global_40001.f_2B22;
		
		default:
	}
	return 0x00000001;
}

void func_127()
{
	int iVar0;
	
	if (func_43())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000A)
		{
			if (Local_139.f_37[iVar0] == unk_0x57270EE11514DC67())
			{
				if (func_128(iVar0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_2, iVar0))
					{
						unk_0x5D96D8530B3D0904(&(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_2), iVar0);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_2, iVar0))
				{
					unk_0x0674E58A79778E99(&(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_2), iVar0);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_2, iVar0))
			{
				unk_0x0674E58A79778E99(&(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_2), iVar0);
			}
			iVar0++;
		}
	}
}

int func_128(int iParam0)
{
	vector3 vVar0;
	var uVar1;
	
	if (func_39(iParam0, &vVar0, &uVar1))
	{
		if (func_129(vVar0, 10f, 0x3F800000, 1f, 0x40A00000, 0x00000001, 0x00000001, 0x00000001, 0x42F00000, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_129(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_134(vParam0, fParam12, 0x00000001, 0x00000001, bParam13, bParam15, bParam9, bParam13))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_130(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0x00000000;
			}
		}
	}
	Global_24B2D0.f_2++;
	return 0x00000001;
}

int func_130(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_132(unk_0xD803B885F5E47A62()), vParam0, 0x00000001) <= (fVar2 + fParam1))
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
		if (func_12(iVar1, 0x00000001, 0x00000001))
		{
			if (!func_14(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 0x00000001 || (iParam2 == 0x00000000 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_131(iVar1) || !bParam8) && !Global_25033E[iVar1 /*421*/].f_103)
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
								if (unk_0x0EB28750412C3A5A(func_132(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
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
							if (unk_0x0EB28750412C3A5A(func_132(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
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

int func_131(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_25033E[iParam0 /*421*/].f_F5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_64() && Global_184507[iVar0 /*876*/].f_34F) && !func_133(Global_184507[iVar0 /*876*/].f_350))
	{
		return Global_184507[iVar0 /*876*/].f_350;
	}
	return func_38(iParam0);
}

int func_133(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_134(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if ((iParam6 == 0x00000001 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0x00000000)
		{
			if (func_12(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_131(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 0x00000001 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && uParam7) && bParam4) && func_135(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_38(iVar1), vParam0, 0x00000001) < fParam1)
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

int func_135(int iParam0)
{
	if (func_138(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	Global_265942 = { func_137(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_265942))
	{
		return 0x00000001;
	}
	if (func_136(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_136(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_88(iParam0);
	if (!iVar0 == func_102())
	{
		if (iVar0 == func_88(iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

struct<13> func_137(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_138(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_137(iParam0) };
		Global_26594F = { func_137(iParam1) };
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

void func_139()
{
	float fVar0;
	float fVar1;
	
	func_688();
	func_687();
	if (func_685())
	{
		func_573();
	}
	if (!func_7(unk_0xD803B885F5E47A62()))
	{
		if (func_548(0x00000000, 0x00000001, 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x00000006))
			{
				unk_0x0674E58A79778E99(&iLocal_110, 0x00000006);
			}
			switch (Local_1505[unk_0x57270EE11514DC67() /*12*/].f_3)
			{
				case 0x00000000:
					if (Local_139.f_25 < 0x00000002)
					{
						if (Local_139.f_25 > 0x00000000)
						{
							if (Local_139.f_3 != 0xFFFFFFFF)
							{
								func_547(0x00000001);
								func_546(0x00000001);
							}
						}
					}
					else
					{
						func_546(0x00000002);
					}
					break;
				
				case 0x00000001:
					func_540(0x00000009);
					if (Local_1506.f_8 == 0x00000000)
					{
						Local_1506.f_8 = unk_0xDD0E7998AE8AD485();
					}
					if (Local_139.f_25 >= 0x00000002)
					{
						func_546(0x00000002);
						Local_1506.f_9 = unk_0xDD0E7998AE8AD485();
					}
					if (func_43())
					{
						func_540(0x00000000);
					}
					func_538((func_29() - func_539(&(Local_139.f_2B), 0x00000000, 0x00000000)));
					func_535(func_537((func_29() - func_539(&(Local_139.f_2B), 0x00000000, 0x00000000)), 0x00000000), func_536(Local_139.f_3));
					func_475(0x00000000, func_534());
					func_448();
					func_425();
					if (func_424())
					{
						func_423();
					}
					break;
				
				case 0x00000002:
					if (Local_139.f_25 > 0x00000002)
					{
						func_547(0x00000000);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_422())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_404(0x00000085, fVar0, fVar1, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						func_403(Local_139.f_3, 0x00000001);
						func_402(0x00000017, 0x00000001);
						if (Local_1506.f_8 == 0x00000000)
						{
							Local_1506.f_8 = unk_0xDD0E7998AE8AD485();
						}
						if (Local_1506.f_9 == 0x00000000)
						{
							Local_1506.f_9 = unk_0xDD0E7998AE8AD485();
						}
						func_398();
						unk_0x921B659AAEB55BCA(0x00000001);
						if (func_422())
						{
							unk_0x51B096AAC60548C1(0f);
							unk_0x34D79252800B23FF(0x00000000);
						}
						if (Local_139.f_3 == 0x0000000E)
						{
							func_397(&vLocal_130);
						}
						func_396();
						if (!func_7(unk_0xD803B885F5E47A62()))
						{
							func_52(0x0000003F, "AMCH_STARTED", func_395(Local_139.f_3), func_66(), 0xFFFFFFFF, func_66(), 0x00000001, 0x00000000);
							if (func_392("AMCH_WARN", func_394(Local_139.f_3), func_393(Local_139.f_3)))
							{
								unk_0xA37A90C62806D848(0x00000001);
							}
						}
						if (func_43())
						{
							func_374(678f, 794f, 206f, 8f, 0x00000000);
							func_374(1911.3f, 4714.6f, 41.1f, 8f, 0x00000000);
							func_374(688.5021f, 735.4581f, 181.296f, 8f, 0x00000000);
						}
						func_546(0x00000003);
					}
					break;
				
				case 0x00000003:
					if (Local_139.f_25 > 0x00000003)
					{
						iLocal_112 = 0x00000000;
						func_546(0x00000004);
					}
					else
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_139.f_2, 0x00000001))
						{
							func_332();
							func_329();
							func_328();
						}
						if (func_327(0x00000000) && !func_20(0x00000000))
						{
							func_326();
						}
					}
					if (func_422())
					{
						unk_0x25A1F489CCEE528A(unk_0xD803B885F5E47A62());
					}
					func_325();
					func_302();
					func_573();
					func_475(0x00000000, 0x00000001);
					func_448();
					func_425();
					func_540(0x00000002);
					func_540(0x00000005);
					func_540(0x00000007);
					break;
				
				case 0x00000004:
					if (func_291(&uLocal_122, !unk_0xEAE0D21A50E6C7F4(Local_139.f_2, 0x00000000)) || unk_0xEAE0D21A50E6C7F4(Local_139.f_2, 0x00000000))
					{
						if (func_5(Local_139.f_3))
						{
							if (Local_139.f_25 == 0x00000005)
							{
								func_546(0x00000005);
							}
						}
						else
						{
							func_546(0x00000006);
						}
					}
					func_278();
					func_171();
					func_302();
					func_573();
					func_475(0x00000001, 0x00000001);
					func_396();
					break;
				
				case 0x00000005:
					if (Local_139.f_25 > 0x00000005)
					{
						func_546(0x00000006);
					}
					break;
				
				case 0x00000006:
					break;
			}
		}
		else
		{
			func_166();
		}
	}
	else
	{
		func_166();
	}
	func_146();
	func_141();
	func_140();
}

void func_140()
{
	struct<2> Var0;
	int iVar1;
	
	if (func_43())
	{
		Var0 = { Local_139.f_43[iLocal_129 /*2*/] };
		if (unk_0xE9F78D191AD5EDBA(Var0.f_1))
		{
			iVar1 = unk_0xB177666FAB6F4417(Var0.f_1);
			if (unk_0xAFE0D3608EDA7039(iVar1))
			{
				if (!unk_0xDF1306B443CD3D15(iVar1, 0x00000000))
				{
					unk_0x046C362CF15F1935(&iVar1);
				}
			}
		}
		iLocal_129++;
		if (iLocal_129 >= 0x0000000A)
		{
			iLocal_129 = 0x00000000;
			iLocal_138 = iLocal_137;
			iLocal_137 = 0x00000000;
		}
	}
}

void func_141()
{
	if (Local_139.f_25 == 0x00000005)
	{
		if (unk_0xE9F78D191AD5EDBA(Local_139.f_43[iLocal_129 /*2*/].f_1))
		{
			if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_139.f_43[iLocal_129 /*2*/].f_1), 0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_135, iLocal_129))
				{
					unk_0x5D96D8530B3D0904(&iLocal_135, iLocal_129);
					iLocal_136[iLocal_129] = unk_0xD68EA767274B7444();
					unk_0xCEAA091B490F8407(iLocal_136[iLocal_129], "Explosion_Countdown", unk_0xB177666FAB6F4417(Local_139.f_43[iLocal_129 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0x00000000, 0x00000000);
					unk_0x6F6BA3FE885E6C91(iLocal_136[iLocal_129], "Time", 30f);
				}
				if ((0x00007530 - func_539(&(Local_139.f_2D), 0x00000000, 0x00000000)) >= 0x00000000)
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_139.f_43[iLocal_129 /*2*/].f_1), 0x00000000))
					{
						func_540(0x00000001);
						iLocal_137 = 0x00000001;
					}
				}
				else if (unk_0x526BC32A660C89E6(Local_139.f_43[iLocal_129 /*2*/].f_1))
				{
					unk_0xE910A68AA670B4AA(unk_0xB177666FAB6F4417(Local_139.f_43[iLocal_129 /*2*/].f_1));
					unk_0xCCB891029A74A633(unk_0xB177666FAB6F4417(Local_139.f_43[iLocal_129 /*2*/].f_1), 0x00000001, 0x00000000, 0xFFFFFFFF);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(iLocal_135, iLocal_129) && !unk_0x8AA6DC470ABA63A2(iLocal_136[iLocal_129]))
			{
				unk_0x55D0A2DB35045A35(iLocal_136[iLocal_129]);
			}
		}
		if (iLocal_138)
		{
			if (!func_100(unk_0xD803B885F5E47A62()))
			{
				func_143(func_537((0x00007530 - func_539(&(Local_139.f_2D), 0x00000000, 0x00000000)), 0x00000000), "HTV_DESTR", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				func_142();
			}
		}
	}
}

void func_142()
{
	Global_150976.f_46A = 0x00000001;
}

void func_143(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_145(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_144(0x00000007, iVar0);
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

void func_144(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_145(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

void func_146()
{
	if (((func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001) && !func_7(unk_0xD803B885F5E47A62())) && !func_162(unk_0xD803B885F5E47A62())) && func_548(0x00000000, 0x00000001, 0x00000001))
	{
		if (Local_1505[unk_0x57270EE11514DC67() /*12*/].f_3 == 0x00000001)
		{
			func_159(func_161(Local_139.f_3), func_394(Local_139.f_3), 0x00000000, 0x00000000);
		}
		else if (Local_1505[unk_0x57270EE11514DC67() /*12*/].f_3 == 0x00000003)
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x0000000A))
			{
				func_147(func_393(Local_139.f_3), 0x00000000);
			}
			else
			{
				func_147("AMCH_OBJLAND", 0x00000000);
			}
		}
		else
		{
			func_396();
		}
	}
	else
	{
		func_396();
	}
}

void func_147(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return;
	}
	if (func_157(sParam0))
	{
		return;
	}
	func_151();
	Global_140749 = 0x00000000;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	func_150();
	func_149(bParam1);
	func_148();
}

void func_148()
{
	unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000001);
}

void func_149(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000000);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_140749.f_3B), 0x00000000);
}

void func_150()
{
	Global_140749.f_A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x05265C00);
	Global_140749.f_B = unk_0x2B6E0A53779D29EA();
}

void func_151()
{
	func_153();
	func_152(0x00000000);
}

void func_152(bool bParam0)
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

void func_153()
{
	if (!func_156())
	{
	}
	if (func_155())
	{
		unk_0x400C0D66EFD08603(&(Global_140749.f_C));
		func_154();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_154()
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

int func_155()
{
	if (Global_140749 == 0x00000014)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_156()
{
	if (!func_155())
	{
		return 0x00000000;
	}
	unk_0x18B60B994182620C(&(Global_140749.f_C));
	func_154();
	return unk_0xB165082A56EE6E7F();
}

bool func_157(char* sParam0)
{
	if (!func_155())
	{
		return 0x00000000;
	}
	if (Global_140749 == 0x0000000B)
	{
		return func_158(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C));
}

bool func_158(char* sParam0)
{
	if (!func_155())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

int func_159(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	if (func_160(sParam0, sParam1) && Global_140749.f_38 == Global_140749.f_3A)
	{
		return 0x00000000;
	}
	func_151();
	Global_140749 = 0x00000003;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	StringCopy(&(Global_140749.f_10), sParam1, 64);
	Global_140749.f_3A = iParam3;
	Global_140749.f_38 = iParam3;
	func_150();
	func_149(bParam2);
	func_148();
	return 0x00000001;
}

bool func_160(char* sParam0, char* sParam1)
{
	if (!func_155())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	if (!unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C)))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam1) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

char* func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		switch (iParam0)
		{
			case 0x00000000:
			case 0x00000002:
			case 0x00000005:
			case 0x00000008:
			case 0x0000000D:
				if (((((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9())) || unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9())) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) || unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9())) || unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 0x00000009:
				if ((((((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9())) || unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9())) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) || unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9())) || unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9())) || unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 0x00000003:
			case 0x00000004:
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
					iVar1 = unk_0x134B62B726CEC8E6(iVar0);
					if (unk_0x7D8B2A8F9EA82DB7(iVar1) && unk_0xAD09C9A4B56FA133(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 0x0000000C:
				if (!unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 0x00000001:
			case 0x00000006:
			case 0x0000000B:
			case 0x0000000E:
				if (!unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 0x00000012:
				if ((!unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_sniperrifle"), 0x00000000) && !unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_heavysniper"), 0x00000000)) && !unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_marksmanrifle"), 0x00000000))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 0x00000010:
				if (((((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9())) || unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9())) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) || unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9())) || unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

bool func_162(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		if (((func_165() && !func_164()) || func_163(unk_0xD803B885F5E47A62(), 0x00000015)) || func_163(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			return 0x00000001;
		}
		if (func_47(&(Global_1806FA.f_D)))
		{
			if (!func_1(&(Global_1806FA.f_D), Global_40001.f_E, 0x00000000))
			{
				return 0x00000001;
			}
			func_46(&(Global_1806FA.f_D));
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x0000000A))
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000009);
}

bool func_163(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

bool func_164()
{
	return Global_1406A2.f_1;
}

bool func_165()
{
	return Global_1406A2;
}

void func_166()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x00000006))
	{
		unk_0xC6436D1B1063CD1D();
		func_475(0x00000001, 0x00000001);
		unk_0x55D0A2DB35045A35(iLocal_118);
		unk_0x0674E58A79778E99(&iLocal_110, 0x00000004);
		func_170();
		func_168();
		unk_0xF5637CC664BEAAD0(0f, 0x00000000, 0x00000015);
		unk_0x5D96D8530B3D0904(&iLocal_110, 0x00000006);
		func_167();
	}
}

void func_167()
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_7 = 0x00000000;
}

void func_168()
{
	if (Global_24D54B.f_6 == unk_0x0D0A574C76D769AC())
	{
		func_169();
	}
}

void func_169()
{
	struct<28> Var0;
	
	if (unk_0x1727A44C562FBED2(Global_24D54B.f_6))
	{
		if (!Global_24D54B.f_6 == unk_0x0D0A574C76D769AC())
		{
			return;
		}
	}
	Var0.f_7 = 0x00000001;
	Var0.f_8 = 0x00000001;
	Var0.f_15 = 0x42820000;
	Var0.f_1B = 0xBF800000;
	Global_24D54B = { Var0 };
	Global_24D54B.f_6 = 0xFFFFFFFF;
}

void func_170()
{
	struct<6> Var0;
	
	if (Global_24B2D0.f_1E7.f_1 == unk_0x0D0A574C76D769AC())
	{
		Global_24B2D0.f_1E7 = { Var0 };
	}
}

void func_171()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_1, 0x00000000))
	{
		if (func_7(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_1), 0x00000000);
			return;
		}
		if (func_162(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_1), 0x00000000);
			return;
		}
		func_239(&iVar0, &iVar1);
		if (iVar0 > 0x00000000)
		{
			Local_1506.f_6 = (Local_1506.f_6 + iVar0);
			if (!Global_40001.f_2CEC)
			{
				func_238(0x0000000A, Local_1506.f_6);
			}
			Global_2594A0 = iVar0;
			if (func_237())
			{
				func_225(0xA87819A3, iVar0, &uVar3, 0x00000000, 0x00000001, 0x00000000);
			}
			else
			{
				unk_0x9AC21D04D5646532(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0x00000000)
		{
			Local_1506.f_7 = (Local_1506.f_7 + iVar1);
			func_224();
			func_172(0x00000000, unk_0x16F2683693E537C9(), "", 0x9E79F1A6, 0xB549C072, iVar1, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
		}
		unk_0x5D96D8530B3D0904(&(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_1), 0x00000000);
	}
}

int func_172(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_173(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_173(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_183(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 0xDCB673B3 || iParam4 == 0x8DD87E4F)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_179(unk_0x64430C979F516F7A(iVar1, 0x0000796E, 0f, 0f, 0f), iVar0, 0x00000000, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_174(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_174(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_177(iParam0, 0x00000001) };
	if (iParam0 == func_176(unk_0x16F2683693E537C9()))
	{
		func_175(0x00000001);
	}
	func_179(vVar0, iParam1, 0x00000000, sParam2, iParam3);
}

void func_175(int iParam0)
{
	Global_2537E2.f_763 = iParam0;
}

int func_176(int iParam0)
{
	return iParam0;
}

Vector3 func_177(int iParam0, bool bParam1)
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
	if (iParam0 == func_178(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
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

int func_178(int iParam0)
{
	return iParam0;
}

void func_179(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2537E2.f_50A[iVar1 /*30*/].f_4 = func_182(Global_2537E2.f_50A[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_2537E2.f_50A[iVar1 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_50A[iVar1 /*30*/].f_3 = iParam1;
			Global_2537E2.f_50A[iVar1 /*30*/].f_8 = iParam2;
			Global_2537E2.f_50A[iVar1 /*30*/].f_9 = func_181();
			Global_2537E2.f_50A[iVar1 /*30*/].f_A = func_180();
			StringCopy(&(Global_2537E2.f_50A[iVar1 /*30*/].f_16), sParam3, 16);
			Global_2537E2.f_50A[iVar1 /*30*/].f_1A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam4);
		}
	}
}

int func_180()
{
	if (Global_2537E2.f_763)
	{
		Global_2537E2.f_763 = 0x00000000;
		return 0x00000001;
	}
	Global_2537E2.f_763 = 0x00000000;
	return 0x00000000;
}

var func_181()
{
	var uVar0;
	
	uVar0 = Global_2537E2.f_765;
	Global_2537E2.f_765 = 0x00000001;
	return uVar0;
}

float func_182(vector3 vParam0, var uParam1, var uParam2)
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

var func_183(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_184(iParam0, 0x00000000, sParam1, iParam4, iParam5, 0x00000000, iParam6, 0x00000001, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_184(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_223(unk_0xD803B885F5E47A62()) || func_222(unk_0xD803B885F5E47A62()))
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
	else if (func_220() || func_217(unk_0xD803B885F5E47A62()))
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
	if (func_216(sParam2))
	{
	}
	if (func_215())
	{
		if (iParam4 < 0x00000001)
		{
			iParam4 = 0x00000001;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_213(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_212(&iVar1);
		}
		if (iParam1 == 0x00000000)
		{
			switch (iParam0)
			{
				case 0x00000002:
					func_210(0x00000000, &iVar1);
					break;
				
				case 0x00000003:
					func_210(0x00000001, &iVar1);
					break;
				
				case 0x00000001:
					func_208(&iVar1);
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
			func_205(0x0000048C, iVar1, 0xFFFFFFFF);
			if (iParam1 == 0x00000000)
			{
				func_194((func_204(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0x00000000);
				if (iParam8 == 0x00000000)
				{
				}
				if (iParam9 == 0x00000000)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 0xFFFFFFFF)
				{
					func_205(0x0000048D, iVar1, 0xFFFFFFFF);
				}
				func_189(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 0xFFFFFFFF)
			{
				func_185((func_187(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_185((func_187(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_185(int iParam0)
{
	if (func_215())
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_5 = iParam0;
		func_186(joaat("mpply_globalxp"), iParam0);
	}
}

void func_186(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
}

int func_187(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (func_12(iParam0, 0x00000000, 0x00000001))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_188(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_5;
			}
		}
		else
		{
			return func_188(joaat("mpply_globalxp"));
		}
	}
	return 0x00000000;
}

int func_188(int iParam0)
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

void func_189(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_137(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_192(func_193(&Var0));
			if (iVar1 == 0x00000000)
			{
				func_191(&Global_152D8B, iParam0);
				func_190(joaat("mpply_crew_local_xp_0"), Global_152D8B);
			}
			else if (iVar1 == 0x00000001)
			{
				func_191(&Global_152D8C, iParam0);
				func_190(joaat("mpply_crew_local_xp_1"), Global_152D8C);
			}
			else if (iVar1 == 0x00000002)
			{
				func_191(&Global_152D8D, iParam0);
				func_190(joaat("mpply_crew_local_xp_2"), Global_152D8D);
			}
			else if (iVar1 == 0x00000003)
			{
				func_191(&Global_152D8E, iParam0);
				func_190(joaat("mpply_crew_local_xp_3"), Global_152D8E);
			}
			else if (iVar1 == 0x00000004)
			{
				func_191(&Global_152D8F, iParam0);
				func_190(joaat("mpply_crew_local_xp_4"), Global_152D8F);
			}
		}
	}
}

void func_190(int iParam0, int iParam1)
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

void func_191(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_192(int iParam0)
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

int func_193(var uParam0)
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

void func_194(int iParam0, int iParam1, int iParam2)
{
	if (func_215())
	{
		if (iParam0 >= 0x6A8C4212)
		{
			iParam0 = 0x6A8C4212;
		}
		if (Global_40001.f_2583 == 0x00000000 && iParam1 != 0xBFCF576C)
		{
			if (iParam2 == 0x00000000)
			{
				if (iParam0 < Global_152E1C[func_203(0xFFFFFFFF)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 0xE0C5CB02, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_203(0xFFFFFFFF)])
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
		if (func_202(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_200(iParam0, 0x00000001);
		}
		func_199(0x0000027F, iParam0, 0xFFFFFFFF, 0x00000001);
		func_198(0x00000280, func_200(iParam0, 0x00000001), 0xFFFFFFFF, 0x00000001, 0x00000000);
		Global_152E1C[func_203(0xFFFFFFFF)] = iParam0;
		func_195(0xBDDC2B6E, 0x00000007, 0x00000000);
	}
}

void func_195(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_197(iParam1, iParam2))
	{
		iVar0 = func_196();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_196()
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

int func_197(int iParam0, var uParam1)
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

void func_198(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_203(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_199(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_203(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_203(iParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_203(iParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_203(iParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_203(iParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_203(iParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_203(iParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_203(iParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_203(iParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_203(iParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_203(iParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_203(iParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_203(iParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_200(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_201(iParam0, 0x00000000);
}

int func_201(int iParam0, int iParam1)
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

int func_202(int iParam0)
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

int func_203(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_16();
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

int func_204(int iParam0)
{
	if (Global_1406D3.f_9 == 0x00000000)
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_203(0xFFFFFFFF)];
			}
			else if (func_202(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_203(0xFFFFFFFF)];
	}
	return 0x00000000;
}

void func_205(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_207(iParam0, func_203(iParam2), 0x00000000);
	iVar0 = (iVar0 + iParam1);
	if (!func_206(iParam0))
	{
		func_198(iParam0, iVar0, iParam2, 0x00000001, 0x00000000);
	}
	else
	{
		func_199(iParam0, iVar0, iParam2, 0x00000001);
	}
}

int func_206(int iParam0)
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

int func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_203(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

void func_208(int iParam0)
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
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_76(unk_0x08067D4957B73C02(iVar5), iVar1, 0x00000000))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_138(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_209(*iParam0, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 0x00000004)
	{
		iVar2 = 0x00000004;
	}
	if (iVar2 >= 0x00000002)
	{
		iVar7 = SYSTEM::ROUND((func_209(*iParam0, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_209(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_210(bool bParam0, int iParam1)
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
				if (func_12(iVar4, 0x00000000, 0x00000001))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_138(unk_0xD803B885F5E47A62(), iVar4))
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
			if (func_12(iVar4, 0x00000001, 0x00000001))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_211(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_138(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_209(*iParam1, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 0x00000004)
	{
		iVar1 = 0x00000004;
	}
	if (iVar1 >= 0x00000001)
	{
		iVar6 = SYSTEM::ROUND((func_209(*iParam1, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_211(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_38(iParam0), func_38(iParam1));
	return 0f;
}

int func_212(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 0x00000003)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_209(*iParam0, 0x00000064) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_213(int iParam0)
{
	if (iParam0 < 0x00000000)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_204(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_204(unk_0xD803B885F5E47A62());
		}
	}
	if (func_214(0x00001F40, 0x00000000, 0x00000000) > 0x00000000)
	{
		if (func_214(0x00001F40, 0x00000000, 0x00000000) < (iParam0 + func_204(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_214(0x00001F40, 0x00000000, 0x00000000) - func_204(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_214(int iParam0, bool bParam1, int iParam2)
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

int func_215()
{
	return 0x00000001;
}

int func_216(char* sParam0)
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

int func_217(int iParam0)
{
	return func_218(func_219(iParam0));
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000E9:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_219(int iParam0)
{
	if (func_112(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

bool func_220()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_64();
	}
	return func_221(Global_440000.f_2F9AE);
}

int func_221(int iParam0)
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

bool func_222(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_223(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

void func_224()
{
	Global_25920D = 0x00000001;
}

void func_225(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_237())
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
				func_226(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_226(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
				func_226(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_226(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_226(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_237())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_16()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_233(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
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
			func_232(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_227(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_227(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_228(iParam0);
	}
}

void func_228(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_237())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_231(iParam0))
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
		func_229(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_229(var uParam0)
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
	func_230(&(uParam0->f_E));
	func_230(&(uParam0->f_E.f_D));
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

void func_230(var uParam0)
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

int func_231(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_232(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_233(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_237())
			{
				iParam0 = iVar0 + 900;
			}
			Global_411012[iVar0 /*85*/].f_42.f_2 = 0x00000001;
			Global_411012[iVar0 /*85*/].f_42.f_1 = iParam5;
			Global_411012[iVar0 /*85*/].f_42.f_3 = iParam1;
			Global_411012[iVar0 /*85*/].f_42.f_4 = iParam2;
			Global_411012[iVar0 /*85*/].f_42.f_7 = iParam3;
			Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42 = iParam0;
			Global_411012[iVar0 /*85*/].f_42.f_6 = iParam4;
			Global_411012[iVar0 /*85*/].f_42.f_B = uParam8;
			Global_411012[iVar0 /*85*/].f_42.f_A = iParam7;
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
				func_234(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_234(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_236(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_235();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_235()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_236(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_237()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

void func_238(int iParam0, int iParam1)
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

void func_239(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(unk_0x57270EE11514DC67(), 0x00000001))
	{
		iVar1 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_139.f_1 - iLocal_108)) / 60f) / 1000f));
		if (iVar1 > Global_40001.f_2CAB)
		{
			iVar1 = Global_40001.f_2CAB;
		}
		else if (iVar1 < 0x00000001)
		{
			iVar1 = 0x00000001;
		}
		iVar0 = (func_277() * iVar1);
		*uParam1 = (func_276() * iVar1);
		fVar2 = func_275();
		if (fVar2 > 0f && !unk_0xEAE0D21A50E6C7F4(Local_139.f_2, 0x00000000))
		{
			iVar3 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_28(0x00000001)) / 60f) / 1000f));
			if (iVar3 > func_274())
			{
				iVar3 = func_274();
			}
			iVar4 = Local_139.f_33;
			if (iVar4 > func_273())
			{
				iVar4 = func_273();
			}
			*uParam0 = (*uParam0 + SYSTEM::ROUND((IntToFloat(func_266(func_272(), func_271(), iVar3, fVar2, func_270(), func_269(), func_268(), iVar4)) * Global_40001.f_2CB8)));
			*uParam1 = (*uParam1 + SYSTEM::ROUND((IntToFloat(func_266(func_265(), func_264(), iVar3, fVar2, func_270(), func_269(), func_268(), iVar4)) * Global_40001.f_2CB9)));
		}
		else
		{
			func_262(0x00000001);
		}
	}
	else
	{
		func_262(0x00000000);
	}
	func_240(uParam0, 0x00000001);
	*uParam0 = (*uParam0 + iVar0);
}

void func_240(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0x00000000)
	{
		if (!func_261())
		{
			if (func_260(0x00000000))
			{
				if (!func_256(0x00000000))
				{
					if (unk_0x40B8C182D63932FC(func_255()))
					{
						if (func_254() == 0x00000064)
						{
							iVar0 = *uParam0;
							*uParam0 = 0x00000000;
						}
						else
						{
							iVar0 = ((*uParam0 / 0x00000064) * func_254());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_252(&iVar0, 0x00000000);
						if (iParam1 == 0x00000001)
						{
							func_245("GB_BCUT_TICK1", func_255(), iVar0, 0x00000000, 0x00000000, 0x00000001);
						}
						func_244(0x00000014);
						func_241(func_255(), iVar0, 0x00000001);
					}
				}
			}
		}
	}
}

void func_241(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_12(iParam0, 0x00000000, 0x00000001))
	{
		Var0 = 0xB2D63074;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_243(iParam0);
		func_242(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000008, func_236(iParam0));
	}
}

void func_242(var uParam0, var uParam1)
{
	*uParam0 = Global_192FD0.f_9;
	*uParam1 = Global_192FD0.f_A;
}

var func_243(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_215;
}

void func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_245(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		unk_0x3A820E495A7BA3E5(func_69(iParam1, 0xFFFFFFFE, 0x00000001, 0x00000000, 0x00000000));
		unk_0xD06AC7C87A34A6AD(func_250(&Var1));
		if (!iParam3 == 0x00000000)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
		func_246(0x0000001B, sParam0, 0x00000001, &Var1, iParam2, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	return iVar0;
}

void func_246(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_249() || !unk_0xA14BB9332558B949()) || !func_14(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return;
	}
	iVar0 = func_247(iParam2);
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

int func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (Global_197EBE - 0x00000001))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_248(iVar0);
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

void func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000004;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 0x00000001) /*53*/] };
		iVar0 = (iVar0 + 0xFFFFFFFF);
	}
}

bool func_249()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

var func_250(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_251(&cVar0);
}

var func_251(char[4] cParam0)
{
	return cParam0;
}

void func_252(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_253(0x00000001);
	}
	else
	{
		iVar1 = func_253(0x00000000);
	}
	iVar0 = ((*iParam0 / 0x00000064) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_253(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_3066;
}

int func_254()
{
	return Global_40001.f_3065;
}

int func_255()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

bool func_256(bool bParam0)
{
	return func_257(unk_0xD803B885F5E47A62(), bParam0);
}

int func_257(int iParam0, bool bParam1)
{
	return func_258(iParam0, bParam1, 0x00000001);
}

int func_258(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_102())
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (func_259(iParam0, iParam2))
		{
			return 0x00000000;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_102() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_259(int iParam0, int iParam1)
{
	if (iParam0 != func_102())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_102())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_260(bool bParam0)
{
	return func_89(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_261()
{
	return func_90(unk_0xD803B885F5E47A62());
}

void func_262(bool bParam0)
{
	if (bParam0)
	{
		if (func_263(0x00000001))
		{
			unk_0x5D96D8530B3D0904(&Global_180713, 0x00000001);
		}
	}
	else if (func_263(0x00000002))
	{
		unk_0x5D96D8530B3D0904(&Global_180713, 0x00000002);
	}
}

int func_263(int iParam0)
{
	int iVar0;
	
	iVar0 = func_207(0x000009E6, 0xFFFFFFFF, 0x00000000);
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

int func_264()
{
	return Global_40001.f_2AB7;
}

int func_265()
{
	return Global_40001.f_2AB5;
}

int func_266(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_267(SYSTEM::ROUND(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 0x00000032, 0x00000000);
}

int func_267(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 0x00000001)
		{
		}
		return iVar1;
	}
	if (iParam2 == 0x00000001)
	{
	}
	return iVar0;
}

float func_268()
{
	return Global_40001.f_2ABA;
}

float func_269()
{
	return Global_40001.f_2AB9;
}

float func_270()
{
	return Global_40001.f_2AB8;
}

int func_271()
{
	return Global_40001.f_2AB6;
}

int func_272()
{
	return Global_40001.f_2AB4;
}

int func_273()
{
	return Global_40001.f_2C4C;
}

int func_274()
{
	return Global_40001.f_2C4B;
}

var func_275()
{
	if (func_20(0x00000000))
	{
		return Global_40001.f_2ACF;
	}
	if (func_20(0x00000001))
	{
		return Global_40001.f_2AD0;
	}
	if (func_20(0x00000002))
	{
		return Global_40001.f_2AD1;
	}
	return Global_40001.f_2AD2;
}

int func_276()
{
	return Global_40001.f_2AB3;
}

int func_277()
{
	return Global_40001.f_2AB2;
}

void func_278()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_1, 0x00000001) && (func_290() || unk_0xEAE0D21A50E6C7F4(Local_139.f_2, 0x00000000)))
	{
		if (func_67(func_289()))
		{
			func_288();
		}
		if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_139.f_2, 0x00000000))
			{
				if (func_327(0x00000000))
				{
					iVar2 = Local_1505[unk_0x57270EE11514DC67() /*12*/].f_4;
					func_284(&iVar0, &fVar1, iVar2, 0x00000001);
					if (func_20(0x00000000))
					{
						if (func_18())
						{
							func_282(0x00000040, func_283(Local_139.f_3, 0x00000000, 0x00000000, 0x00000000), "AMCH_WINNER", "AMCH_WIN", 0x00003A98, 0xFFFFFFFF, fVar1, func_394(Local_139.f_3), 0x00000001, 0x00000002, 0x00000000);
						}
						else if (func_281())
						{
							func_282(0x00000045, func_283(Local_139.f_3, 0x00000000, 0x00000000, 0x00000000), "AMCH_WINNER_T", "AMCH_WIN", 0x00003A98, iVar0, -1f, func_394(Local_139.f_3), 0x00000001, 0x00000002, 0x00000000);
						}
						else
						{
							func_282(0x00000040, func_283(Local_139.f_3, 0x00000000, 0x00000000, iVar0), "AMCH_WINNER", "AMCH_WIN", 0x00003A98, iVar0, -1f, func_394(Local_139.f_3), 0x00000001, 0x00000002, 0x00000000);
						}
					}
					else if (func_20(0x00000001))
					{
						if (func_18())
						{
							func_282(0x00000043, func_283(Local_139.f_3, 0x00000000, 0x00000000, 0x00000000), "AMCH_2ND", "AMCH_OVER", 0x00003A98, 0xFFFFFFFF, fVar1, func_394(Local_139.f_3), 0x00000001, 0x00000002, 0x00000000);
						}
						else if (func_281())
						{
							func_282(0x0000004B, func_283(Local_139.f_3, 0x00000000, 0x00000000, 0x00000000), "AMCH_2ND_T", "AMCH_OVER", 0x00003A98, iVar0, -1f, func_394(Local_139.f_3), 0x00000001, 0x00000002, 0x00000000);
						}
						else
						{
							func_282(0x00000043, func_283(Local_139.f_3, 0x00000000, 0x00000000, iVar0), "AMCH_2ND", "AMCH_OVER", 0x00003A98, iVar0, -1f, func_394(Local_139.f_3), 0x00000001, 0x00000002, 0x00000000);
						}
					}
					else if (func_20(0x00000002))
					{
						if (func_18())
						{
							func_282(0x00000043, func_283(Local_139.f_3, 0x00000000, 0x00000000, 0x00000000), "AMCH_3RD", "AMCH_OVER", 0x00003A98, 0xFFFFFFFF, fVar1, func_394(Local_139.f_3), 0x00000001, 0x00000002, 0x00000000);
						}
						else if (func_281())
						{
							func_282(0x0000004B, func_283(Local_139.f_3, 0x00000000, 0x00000000, 0x00000000), "AMCH_3RD_T", "AMCH_OVER", 0x00003A98, iVar0, -1f, func_394(Local_139.f_3), 0x00000001, 0x00000002, 0x00000000);
						}
						else
						{
							func_282(0x00000043, func_283(Local_139.f_3, 0x00000000, 0x00000000, iVar0), "AMCH_3RD", "AMCH_OVER", 0x00003A98, iVar0, -1f, func_394(Local_139.f_3), 0x00000001, 0x00000002, 0x00000000);
						}
					}
					else
					{
						iVar3 = unk_0xF4FB3A22FC4991C8(Local_139.f_4[0x00000000]);
						if (unk_0x81A93C8315C28F58(iVar3))
						{
							iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
							if (Local_1505[Local_139.f_4[0x00000000] /*12*/].f_3 < 0x00000004)
							{
								return;
							}
							iVar2 = Local_1505[Local_139.f_4[0x00000000] /*12*/].f_4;
							func_284(&iVar0, &fVar1, iVar2, 0x00000001);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_280(0x0000004C, func_102(), func_283(Local_139.f_3, 0x00000000, 0x00000000, 0x00000000), sVar5, "AMCH_OVER", 0x00003A98, func_394(Local_139.f_3), 0xFFFFFFFF, fVar1, 0x00000001, 0x00000002, unk_0x6E524813889AECF8(iVar4));
							}
							else if (func_281())
							{
								func_280(0x0000004D, func_102(), func_283(Local_139.f_3, 0x00000000, 0x00000000, 0x00000000), "AMCH_LOSE_T", "AMCH_OVER", 0x00003A98, func_394(Local_139.f_3), iVar0, 0xBF800000, 0x00000001, 0x00000002, unk_0x6E524813889AECF8(iVar4));
							}
							else
							{
								func_280(0x0000004C, func_102(), func_283(Local_139.f_3, 0x00000000, 0x00000000, iVar0), sVar5, "AMCH_OVER", 0x00003A98, func_394(Local_139.f_3), iVar0, 0xBF800000, 0x00000001, 0x00000002, unk_0x6E524813889AECF8(iVar4));
							}
						}
					}
				}
				else
				{
					func_52(0x00000042, "AMCH_OVER", "AMCH_NOWIN", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
				}
			}
			else
			{
				func_51("", "", 0x00000001);
			}
			unk_0x5D96D8530B3D0904(&(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_1), 0x00000001);
			func_279(0x00000085);
		}
	}
}

void func_279(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_280(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
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
	func_105(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_11 = iParam1;
	StringCopy(&(Var0.f_39), sParam2, 16);
	StringCopy(&(Var0.f_3D), sParam6, 16);
	StringCopy(&(Var0.f_19), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_47 = iParam9;
	Var0.f_48 = iParam10;
	return func_53(&Var0);
}

int func_281()
{
	return 0x00000000;
}

int func_282(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
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
	func_105(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_39), sParam1, 16);
	StringCopy(&(Var0.f_3D), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_47 = iParam8;
	Var0.f_48 = iParam9;
	if (iParam10 != 0x00000000)
	{
		func_103(&(Var0.f_45), iParam10);
	}
	return func_53(&Var0);
}

char* func_283(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_284(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_285(Local_139.f_3, iParam2) / 10f);
		}
		else
		{
			*fParam1 = (SYSTEM::TO_FLOAT(iParam2) / 10f);
		}
		return 0x00000001;
	}
	*iParam0 = iParam2;
	return 0x00000000;
}

float func_285(int iParam0, int iParam1)
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
				return func_287(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 0x00000002:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_286(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_286(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_287(float fParam0)
{
	return (fParam0 / 0.3048f);
}

void func_288()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000003)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 != 0x00000000)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			func_103(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
		}
		iVar0++;
	}
}

int func_289()
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1;
}

bool func_290()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000019);
}

int func_291(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0x00000000 && !func_301()) && !(func_112(unk_0xD803B885F5E47A62(), 0x00000000) && (func_108(unk_0xD803B885F5E47A62()) || func_300(unk_0xD803B885F5E47A62())))) && !func_298(unk_0xD803B885F5E47A62()))
	{
		func_297();
	}
	switch (*uParam0)
	{
		case 0x00000000:
			if (!func_47(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0x00000000, 0x00000000);
			}
			else if (func_1(&(uParam0->f_3), 0x000003E8, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000019);
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11EC), 0x00000000);
					func_2(&(uParam0->f_5), 0x00000000, 0x00000000);
				}
				func_2(&(uParam0->f_1), 0x00000000, 0x00000000);
				func_296(uParam0, 0x00000001);
			}
			break;
		
		case 0x00000001:
			if (func_47(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 0x00000BB8, 0x00000000))
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
				func_293();
				func_296(uParam0, 0x00000002);
			}
			break;
		
		case 0x00000002:
			func_293();
			if (func_1(&(uParam0->f_1), 0x00003A98, 0x00000000))
			{
				if (func_292("AMEV_LBD_HELP"))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				func_296(uParam0, 0x00000003);
			}
			break;
		
		case 0x00000003:
			if (func_1(&(uParam0->f_1), 0x00005BCC, 0x00000000))
			{
				unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0x00000001);
				func_296(uParam0, 0x00000004);
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0x00000001);
			return 0x00000001;
	}
	return 0x00000000;
}

bool func_292(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_293()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000000))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000002)) && func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && !Global_12061) && !Global_E545) && !unk_0x757EF87A33649210())
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11EC), 0x00000001);
			func_295("AMEV_LBD_HELP", 0xFFFFFFFF);
			func_294(0x00000001);
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0x00000000);
		}
	}
}

void func_294(int iParam0)
{
	unk_0x2D03DF47CD5D6E35(0x00000003, 0x00000015, 0x000000C8, 0x00000000, 0x00000000);
	if (iParam0 && !func_301())
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0x00000000);
	}
}

void func_295(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam1);
}

void func_296(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_297()
{
	Global_25920E = 0x00000001;
}

int func_298(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000002;
			}
		}
	}
	return 0x00000000;
}

int func_299(int iParam0)
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

bool func_300(int iParam0)
{
	return func_107(iParam0, 0x00000013);
}

bool func_301()
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 != 0x00000000;
}

void func_302()
{
	int iVar0[3];
	int iVar1;
	var uVar2[3];
	var uVar3[3];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17[3];
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	if (Local_139.f_4[0x00000000] > 0xFFFFFFFF)
	{
		iVar11 = 0x00000000;
		bVar12 = (func_324() && !func_100(unk_0xD803B885F5E47A62()));
		iVar7 = 0x00000000;
		while (iVar7 < 0x00000003)
		{
			iVar0[iVar7] = func_102();
			iVar7++;
		}
		iVar7 = 0x00000000;
		while (iVar7 < 0x00000003)
		{
			if (Local_139.f_4[iVar7] > 0xFFFFFFFF)
			{
				iVar18 = unk_0xF4FB3A22FC4991C8(Local_139.f_4[iVar7]);
				if (unk_0x81A93C8315C28F58(iVar18))
				{
					iVar1 = unk_0x4B2BFE4A3BC248ED(iVar18);
					if (func_12(iVar1, 0x00000000, 0x00000001))
					{
						if (!func_14(iVar1, 0x00000000))
						{
							if (Local_1505[Local_139.f_4[iVar7] /*12*/].f_4 != 0x00000000)
							{
								iVar0[iVar15] = iVar1;
								func_284(&(uVar2[iVar15]), &(uVar3[iVar15]), Local_1505[Local_139.f_4[iVar7] /*12*/].f_4, 0x00000001);
								iVar15++;
								if (func_260(0x00000001))
								{
									if (func_89(iVar1, 0x00000001))
									{
										uVar17[iVar7] = func_69(iVar1, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = unk_0x57270EE11514DC67();
		if (func_100(unk_0xD803B885F5E47A62()))
		{
			iVar19 = func_322();
			iVar20 = unk_0x83FACCC48B68F9D1(iVar19);
			if (unk_0x40B8C182D63932FC(iVar20))
			{
				iVar21 = unk_0x7B9C1F53FE442D06(iVar20);
				if (unk_0x81A93C8315C28F58(iVar21))
				{
					iVar8 = iVar21;
				}
			}
		}
		func_284(&iVar4, &fVar9, iLocal_112, 0x00000001);
		func_284(&iVar5, &fVar10, Local_1505[iVar8 /*12*/].f_4, 0x00000001);
		iVar22 = func_28(0x00000000);
		iVar23 = func_539(&(Local_139.f_27), 0x00000000, 0x00000000);
		iVar6 = func_537(0x00000000, (iVar22 - iVar23));
		if (func_17(0xFFFFFFFF, 0x00000000))
		{
			func_321(iVar6);
		}
		if (iVar6 > 0x00007530)
		{
			iVar13 = 0x00000001;
		}
		else
		{
			iVar13 = 0x00000006;
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x00000002))
		{
			iVar14 = 0x000007D0;
		}
		else
		{
			iVar14 = 0x00000000;
		}
		if (func_324() || Local_139.f_3 == 0x00000006)
		{
			iVar16 = 0x00000002;
		}
		else
		{
			iVar16 = 0x00000001;
		}
		if (Local_139.f_25 >= 0x00000004)
		{
			iVar6 = 0x00000000;
		}
		if (func_18())
		{
			func_317(iVar0[0x00000000], iVar0[0x00000001], iVar0[0x00000002], uVar3[0x00000000], uVar3[0x00000001], uVar3[0x00000002], fVar9, fVar10, iVar6, func_283(Local_139.f_3, 0x00000000, 0x00000001, 0x00000000), &iVar11, iVar13, bVar12, iVar14, func_318(), iVar16, uVar17[0x00000000], uVar17[0x00000001], uVar17[0x00000002]);
		}
		else if (func_281())
		{
			func_316(iVar0[0x00000000], iVar0[0x00000001], iVar0[0x00000002], uVar2[0x00000000], uVar2[0x00000001], uVar2[0x00000002], iVar4, iVar5, iVar6, &iVar11, iVar13, bVar12, iVar14, func_318(), iVar16, uVar17[0x00000000], uVar17[0x00000001], uVar17[0x00000002]);
		}
		else
		{
			func_307(iVar0[0x00000000], iVar0[0x00000001], iVar0[0x00000002], uVar2[0x00000000], uVar2[0x00000001], uVar2[0x00000002], iVar4, iVar5, iVar6, func_283(Local_139.f_3, 0x00000000, 0x00000001, 0x00000000), &iVar11, iVar13, bVar12, iVar14, func_318(), iVar16, uVar17[0x00000000], uVar17[0x00000001], uVar17[0x00000002]);
		}
		func_303();
	}
}

void func_303()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_306();
	if (fVar0 >= 0f)
	{
		if (Local_139.f_25 == 0x00000003)
		{
			if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
			{
				if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					iVar1 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0xDF1306B443CD3D15(iVar1, 0x00000000))
					{
						func_305(iVar1, &fLocal_116);
						fVar2 = (fVar0 + fLocal_116);
						unk_0xF5637CC664BEAAD0(fVar2, 0x00000001, 0x00000015);
						func_304(fVar0);
						return;
					}
				}
			}
		}
		if (func_292("AMCH_FLYLOW"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x00000004))
		{
			unk_0x55D0A2DB35045A35(iLocal_118);
			unk_0x0674E58A79778E99(&iLocal_110, 0x00000004);
		}
		unk_0xF5637CC664BEAAD0(0f, 0x00000000, 0x00000015);
	}
}

void func_304(float fParam0)
{
	float fVar0;
	
	if (unk_0xA30FD594B4E4DF94(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_540(0x00000006);
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x00000004))
			{
				unk_0x4D7F4CC43D4D0DE3(iLocal_118, "Altitude_Warning", "EXILE_1", 0x00000001);
				unk_0x5D96D8530B3D0904(&iLocal_110, 0x00000004);
			}
		}
		else
		{
			if (func_292("AMCH_FLYLOW"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x00000004))
			{
				unk_0x55D0A2DB35045A35(iLocal_118);
				unk_0x0674E58A79778E99(&iLocal_110, 0x00000004);
			}
		}
	}
}

float func_305(int iParam0, var uParam1)
{
	float fVar0;
	vector3 vVar1;
	var uVar2;
	
	vVar1 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	unk_0xE82754C349C7B581(vVar1, uParam1, 0x00000001, 0x00000000);
	unk_0xE82754C349C7B581(vVar1, &uVar2, 0x00000000, 0x00000000);
	if (unk_0x54488B39DA63D340())
	{
		func_540(0x00000003);
		unk_0x5D96D8530B3D0904(&iLocal_110, 0x0000000A);
		func_27(&uLocal_106, 0x00000000, 0x00000000);
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x0000000A))
	{
		if (func_1(&uLocal_106, 0x000007D0, 0x00000000))
		{
			unk_0x0674E58A79778E99(&iLocal_110, 0x0000000A);
		}
	}
	if (*uParam1 < 0f)
	{
		*uParam1 = 0f;
	}
	fVar0 = (vVar1.z - *uParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}

float func_306()
{
	switch (Local_139.f_3)
	{
		case 0x0000000B:
			return 20f;
		
		case 0x0000000C:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_307(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_313(0x00000000) == 0x00000000)
	{
		return;
	}
	func_312();
	iVar1 = 0x00000000;
	if (((Global_259033[0x00000000] != iParam0 || Global_259033[0x00000001] != iParam1) || Global_259033[0x00000002] != iParam2) || *iParam10)
	{
		iVar1 = 0x00000001;
	}
	Global_259033[0x00000000] = iParam0;
	Global_259033[0x00000001] = iParam1;
	Global_259033[0x00000002] = iParam2;
	Global_259033[0x00000003] = 0x00000000;
	Global_259033[0x00000004] = 0x00000000;
	if (Global_259033[0x00000000] != func_102())
	{
		if (iVar1 == 0x00000001)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_259033[0x00000000]);
			Global_259039[0x00000000 /*16*/] = { func_311(0x00000001, sVar0) };
		}
		if (iParam3 > 0x00000000)
		{
			func_308(iParam3, &(Global_259039[0x00000000 /*16*/]), 0xFFFFFFFF, 0x0000006D, 0x00000008, 0x00000001, sParam9, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, iParam16, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
		}
	}
	if (Global_259033[0x00000001] != func_102())
	{
		if (iVar1 == 0x00000001)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_259033[0x00000001]);
			Global_259039[0x00000001 /*16*/] = { func_311(0x00000002, sVar0) };
		}
		if (iParam4 > 0x00000000)
		{
			func_308(iParam4, &(Global_259039[0x00000001 /*16*/]), 0xFFFFFFFF, 0x0000006C, 0x00000007, 0x00000001, sParam9, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, iParam17, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
		}
	}
	if (Global_259033[0x00000002] != func_102())
	{
		if (iVar1 == 0x00000001)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_259033[0x00000002]);
			Global_259039[0x00000002 /*16*/] = { func_311(0x00000003, sVar0) };
		}
		if (iParam5 > 0x00000000)
		{
			func_308(iParam5, &(Global_259039[0x00000002 /*16*/]), 0xFFFFFFFF, 0x0000006B, 0x00000006, 0x00000001, sParam9, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, iParam18, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
		}
	}
	if (bParam12)
	{
		func_308(iParam6, "HUD_ATTEMPTS", 0xFFFFFFFF, 0x00000001, 0x00000005, 0x00000000, sParam9, 0x00000000, 0x00000000, 0x00000001, iParam13, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	switch (iParam15)
	{
		case 0x00000000:
			if (unk_0xD803B885F5E47A62() != func_102())
			{
				if (func_162(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					func_308(iParam7, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000001, sParam9, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
				}
			}
			break;
		
		case 0x00000001:
			if (func_162(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				func_308(iParam7, "HUD_USCORE", 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, sParam9, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			}
			break;
		
		case 0x00000002:
			if (func_162(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				func_308(iParam7, "HUD_UBEST", 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, sParam9, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			}
			break;
		
		case 0x00000003:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_216(sParam14))
	{
		sVar2 = sParam14;
	}
	func_143(iParam8, sVar2, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, iParam11, 0x00000000, 0x00000000, 0x00000000, iParam11, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	*iParam10 = 0x00000000;
	func_142();
}

void func_308(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_145(0x00000006, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_144(0x00000006, iVar0);
		Global_150976.f_F68[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_F68.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_F68.f_B7[iVar0] = iParam3;
		Global_150976.f_F68.f_AC[iVar0] = iParam2;
		Global_150976.f_F68.f_104[iVar0] = iParam4;
		Global_150976.f_F68.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_150976.f_F68.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_150976.f_F68.f_1BB[iVar0] = iParam7;
		Global_150976.f_F68.f_1C6[iVar0] = fParam8;
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
		if (iParam15 == 0x00000005 && func_310())
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
			if (func_309())
			{
				Global_150976.f_46E = 0x00000001;
			}
		}
	}
}

int func_309()
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

int func_310()
{
	if (((unk_0xB3260A60545D3F11() == 0x00000008 || unk_0xB3260A60545D3F11() == 0x00000009) || unk_0xB3260A60545D3F11() == 0x0000000A) || unk_0xB3260A60545D3F11() == 0x0000000C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

struct<16> func_311(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 0x00000001:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSFIRST"), 64);
			break;
		
		case 0x00000002:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSSECOND"), 64);
			break;
		
		case 0x00000003:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSTHIRD"), 64);
			break;
		
		case 0x00000004:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSFOURTH"), 64);
			break;
		
		case 0x00000005:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_312()
{
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000007);
	Global_259211 = 0x00000001;
}

int func_313(bool bParam0)
{
	if (func_315())
	{
		return 0x00000000;
	}
	if (func_314())
	{
		return 0x00000000;
	}
	if (!bParam0)
	{
		if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001) == 0x00000000)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_314()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0x00000000;
}

bool func_315()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x0000000C);
}

void func_316(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_313(0x00000000) == 0x00000000)
	{
		return;
	}
	func_312();
	iVar1 = 0x00000000;
	if (((Global_259033[0x00000000] != iParam0 || Global_259033[0x00000001] != iParam1) || Global_259033[0x00000002] != iParam2) || *iParam9)
	{
		iVar1 = 0x00000001;
	}
	Global_259033[0x00000000] = iParam0;
	Global_259033[0x00000001] = iParam1;
	Global_259033[0x00000002] = iParam2;
	Global_259033[0x00000003] = 0x00000000;
	Global_259033[0x00000004] = 0x00000000;
	if (Global_259033[0x00000000] != func_102())
	{
		if (iVar1 == 0x00000001)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_259033[0x00000000]);
			Global_259039[0x00000000 /*16*/] = { func_311(0x00000001, sVar0) };
		}
		if (iParam3 > 0x00000000)
		{
			func_143(iParam3, &(Global_259039[0x00000000 /*16*/]), 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000008, 0x00000001, 0x0000006D, 0x00000000, 0x00000000, 0x00000000, 0x0000006D, 0x00000000, iParam15, 0x00000000, 0x00000000, 0xFFFFFFFF);
		}
	}
	if (Global_259033[0x00000001] != func_102())
	{
		if (iVar1 == 0x00000001)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_259033[0x00000001]);
			Global_259039[0x00000001 /*16*/] = { func_311(0x00000002, sVar0) };
		}
		if (iParam4 > 0x00000000)
		{
			func_143(iParam4, &(Global_259039[0x00000001 /*16*/]), 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000007, 0x00000001, 0x0000006C, 0x00000000, 0x00000000, 0x00000000, 0x0000006C, 0x00000000, iParam16, 0x00000000, 0x00000000, 0xFFFFFFFF);
		}
	}
	if (Global_259033[0x00000002] != func_102())
	{
		if (iVar1 == 0x00000001)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_259033[0x00000002]);
			Global_259039[0x00000002 /*16*/] = { func_311(0x00000003, sVar0) };
		}
		if (iParam5 > 0x00000000)
		{
			func_143(iParam5, &(Global_259039[0x00000002 /*16*/]), 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000006, 0x00000001, 0x0000006B, 0x00000000, 0x00000000, 0x00000000, 0x0000006B, 0x00000000, iParam17, 0x00000000, 0x00000000, 0xFFFFFFFF);
		}
	}
	if (bParam11)
	{
		func_143(iParam6, "HUD_ATTEMPTS", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000005, 0x00000000, 0x00000001, 0x00000001, iParam12, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
	switch (iParam14)
	{
		case 0x00000000:
			if (unk_0xD803B885F5E47A62() != func_102())
			{
				if (func_162(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					func_143(iParam7, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000004, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
			}
			break;
		
		case 0x00000001:
			if (func_162(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				func_143(iParam7, "HUD_USCORE", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000004, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
			break;
		
		case 0x00000002:
			if (func_162(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				func_143(iParam7, "HUD_UBEST", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000004, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
			break;
		
		case 0x00000003:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_216(sParam13))
	{
		sVar2 = sParam13;
	}
	func_143(iParam8, sVar2, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, iParam10, 0x00000000, 0x00000000, 0x00000000, iParam10, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	*iParam9 = 0x00000000;
	func_142();
}

void func_317(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_313(0x00000000) == 0x00000000)
	{
		return;
	}
	func_312();
	iVar1 = 0x00000000;
	if (((Global_259033[0x00000000] != iParam0 || Global_259033[0x00000001] != iParam1) || Global_259033[0x00000002] != iParam2) || *iParam10)
	{
		iVar1 = 0x00000001;
	}
	Global_259033[0x00000000] = iParam0;
	Global_259033[0x00000001] = iParam1;
	Global_259033[0x00000002] = iParam2;
	Global_259033[0x00000003] = 0x00000000;
	Global_259033[0x00000004] = 0x00000000;
	if (Global_259033[0x00000000] != func_102())
	{
		if (iVar1 == 0x00000001)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_259033[0x00000000]);
			Global_259039[0x00000000 /*16*/] = { func_311(0x00000001, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_308(0xFFFFFFFF, &(Global_259039[0x00000000 /*16*/]), 0xFFFFFFFF, 0x0000006D, 0x00000008, 0x00000001, sParam9, 0x00000001, fParam3, 0x00000000, 0x00000000, 0x0000006D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, uParam16, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
		}
	}
	if (Global_259033[0x00000001] != func_102())
	{
		if (iVar1 == 0x00000001)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_259033[0x00000001]);
			Global_259039[0x00000001 /*16*/] = { func_311(0x00000002, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_308(0xFFFFFFFF, &(Global_259039[0x00000001 /*16*/]), 0xFFFFFFFF, 0x0000006C, 0x00000007, 0x00000001, sParam9, 0x00000001, fParam4, 0x00000000, 0x00000000, 0x0000006C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, uParam17, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
		}
	}
	if (Global_259033[0x00000002] != func_102())
	{
		if (iVar1 == 0x00000001)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_259033[0x00000002]);
			Global_259039[0x00000002 /*16*/] = { func_311(0x00000003, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_308(0xFFFFFFFF, &(Global_259039[0x00000002 /*16*/]), 0xFFFFFFFF, 0x0000006B, 0x00000006, 0x00000001, sParam9, 0x00000001, fParam5, 0x00000000, 0x00000000, 0x0000006B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, uParam18, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
		}
	}
	if (bParam12)
	{
		func_308(0xFFFFFFFF, "HUD_ATTEMPTS", 0xFFFFFFFF, 0x00000001, 0x00000005, 0x00000000, sParam9, 0x00000001, fParam6, 0x00000001, iParam13, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	switch (iParam15)
	{
		case 0x00000000:
			if (unk_0xD803B885F5E47A62() != func_102())
			{
				if (func_162(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					func_308(0xFFFFFFFF, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000001, sParam9, 0x00000001, fParam7, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
				}
			}
			break;
		
		case 0x00000001:
			if (func_162(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				func_308(0xFFFFFFFF, "HUD_USCORE", 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, sParam9, 0x00000001, fParam7, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			}
			break;
		
		case 0x00000002:
			if (func_162(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				func_308(0xFFFFFFFF, "HUD_UBEST", 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, sParam9, 0x00000001, fParam7, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			}
			break;
		
		case 0x00000003:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_216(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != 0xFFFFFFF6)
	{
		func_143(iParam8, sVar2, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, iParam11, 0x00000000, 0x00000000, 0x00000000, iParam11, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
	*iParam10 = 0x00000000;
	func_142();
}

char* func_318()
{
	return "HUD_COUNTDOWN";
	switch (func_320(unk_0xD803B885F5E47A62()))
	{
		case 0x00000083:
			return "AET_HOT_TARG";
		
		case 0x00000084:
			return "AET_CHK_COLL";
		
		case 0x00000085:
			switch (func_319())
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

int func_319()
{
	if (func_320(unk_0xD803B885F5E47A62()) == 0x00000085)
	{
		return Global_26B66F.f_13B5;
	}
	return 0xFFFFFFFF;
}

int func_320(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/];
	}
	return 0xFFFFFFFF;
}

void func_321(int iParam0)
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

var func_322()
{
	if (unk_0xC844350D5D58C99A(func_323()))
	{
		return func_323();
	}
	return func_97();
}

var func_323()
{
	return Global_240006.f_3;
}

int func_324()
{
	switch (Local_139.f_3)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_325()
{
	int iVar0;
	struct<42> Var1;
	int iVar2;
	int iVar3;
	
	Var1 = 0xFFFFFFFF;
	Var1.f_16 = 0xBF800000;
	Var1.f_17 = 0x00000003;
	Var1.f_27 = 0xFFFFFFFF;
	Var1.f_29 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		Local_160.f_216[iVar0 /*42*/] = { Var1 };
		Local_160.f_216[iVar0 /*42*/].f_1 = func_102();
		if (Local_139.f_4[iVar0] > 0xFFFFFFFF)
		{
			iVar3 = unk_0xF4FB3A22FC4991C8(Local_139.f_4[iVar0]);
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar2 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (!func_14(iVar2, 0x00000000))
				{
					Local_160.f_216[iVar0 /*42*/] = Local_139.f_4[iVar0];
					Local_160.f_216[iVar0 /*42*/].f_1 = iVar2;
					Local_160.f_216[iVar0 /*42*/].f_9 = Local_1505[Local_139.f_4[iVar0] /*12*/].f_4;
					Local_160.f_216[iVar0 /*42*/].f_1F = 0xFFFFFFFF;
					Local_160.f_1.f_6C = 0x00000008;
				}
			}
		}
		iVar0++;
	}
}

void func_326()
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C6), 0x00000013);
}

int func_327(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0x00000000)
	{
		iVar0 = Local_139.f_4[iParam0];
		if (iVar0 >= 0x00000000)
		{
			if (func_21(Local_1505[iVar0 /*12*/].f_4, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_328()
{
}

void func_329()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_284(&iVar1, &fVar2, iLocal_112, 0x00000001);
	switch (Local_139.f_3)
	{
		case 0x00000002:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_331(sVar0, fVar2 >= 70f);
			if (unk_0x562F77A7F33D2E46(sVar0))
			{
				fVar2 = func_330(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0x58350770D73D313A(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 0x00000008:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0xB3308DCE18AF3BF0();
			bVar3 = (iVar1 >= 0x0000001E && fVar4 >= 40f);
			func_331(sVar0, bVar3);
			if (unk_0x562F77A7F33D2E46(sVar0))
			{
				fVar2 = SYSTEM::TO_FLOAT(iVar1);
				fVar2 = func_330(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_330(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0x58350770D73D313A(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_117 != iLocal_112)
			{
				if (iLocal_112 > 0x00000000)
				{
					unk_0x4D7F4CC43D4D0DE3(iLocal_119, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0x00000000);
					unk_0x6F6BA3FE885E6C91(iLocal_119, "Count", SYSTEM::TO_FLOAT(iVar1));
				}
				else
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0x00000000);
				}
			}
			iLocal_117 = iLocal_112;
			break;
	}
	if (func_20(0x00000000))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x00000003))
		{
			if (func_256(0x00000001))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0x00000000);
			}
			else
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Enter_1st", "GTAO_FM_Events_Soundset", 0x00000000);
			}
			unk_0x5D96D8530B3D0904(&iLocal_110, 0x00000003);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x00000003))
	{
		if (func_256(0x00000001))
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0x00000000);
		}
		else
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Lose_1st", "GTAO_FM_Events_Soundset", 0x00000000);
		}
		unk_0x0674E58A79778E99(&iLocal_110, 0x00000003);
	}
}

float func_330(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_331(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x562F77A7F33D2E46(sParam0))
		{
			unk_0x8BC9595FD2792B5D(sParam0);
		}
	}
	else if (unk_0x562F77A7F33D2E46(sParam0))
	{
		unk_0x8910D3D58E0132B8(sParam0);
	}
}

void func_332()
{
	int iVar0;
	
	if ((!func_162(unk_0xD803B885F5E47A62()) && !func_14(unk_0xD803B885F5E47A62(), 0x00000000)) && func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		iVar0 = func_358();
		if (iVar0 != Local_1505[unk_0x57270EE11514DC67() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_109) || func_357(iVar0, iLocal_109))
			{
				if (!func_356() || func_1(&uLocal_98, 0x000003E8, 0x00000000))
				{
					func_27(&uLocal_98, 0x00000000, 0x00000000);
					iLocal_109 = iVar0;
					Local_1505[unk_0x57270EE11514DC67() /*12*/].f_4 = iVar0;
					func_335();
					if (iLocal_108 == 0x00000000)
					{
						iLocal_108 = unk_0x2B6E0A53779D29EA();
					}
					if (Local_1506.f_B == 0x00000000)
					{
						Local_1506.f_B = unk_0xDD0E7998AE8AD485();
					}
				}
			}
		}
		iLocal_112 = func_333();
	}
}

int func_333()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = 0xFFFFFFFF;
	switch (Local_139.f_3)
	{
		case 0x00000000:
			fVar1 = unk_0xA6AE1EDD970EC5A4();
			break;
		
		case 0x00000001:
			fVar1 = unk_0xD02EB81F7E02B833();
			break;
		
		case 0x00000002:
			fVar1 = unk_0xB3308DCE18AF3BF0();
			break;
		
		case 0x00000003:
			fVar1 = unk_0xD647A2FD364A774D();
			break;
		
		case 0x00000004:
			fVar1 = unk_0x35B242721E5EA3EF();
			break;
		
		case 0x00000005:
			fVar1 = unk_0x71B04631E0ECC1D6();
			break;
		
		case 0x00000008:
			iVar0 = unk_0x14E0ED7F6AF856E6();
			break;
		
		case 0x00000009:
			fVar1 = unk_0x1D76DAA96C3AD2EB();
			break;
		
		case 0x0000000B:
			fVar1 = unk_0x829442C88EB5F313();
			break;
		
		case 0x0000000C:
			fVar1 = unk_0x829442C88EB5F313();
			break;
		
		case 0x0000000D:
			fVar1 = unk_0xCAB539898E23F828();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	iVar2 = unk_0x51D1D19912234EA0(iVar0);
	func_334(&iVar2);
	if (iVar2 == iLocal_111)
	{
		if (func_21(iVar2, 0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x00000001))
			{
				func_27(&uLocal_100, 0x00000000, 0x00000000);
				Local_1505[unk_0x57270EE11514DC67() /*12*/].f_4.f_2 = func_539(&uLocal_100, 0x00000000, 0x00000000);
				unk_0x5D96D8530B3D0904(&iLocal_110, 0x00000001);
			}
			else if ((func_539(&uLocal_100, 0x00000000, 0x00000000) % 0x000003E8) == 0x00000000)
			{
				Local_1505[unk_0x57270EE11514DC67() /*12*/].f_4.f_2 = func_539(&uLocal_100, 0x00000000, 0x00000000);
			}
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&iLocal_110, 0x00000001);
	}
	if ((func_21(iLocal_111, 0x00000000) && !func_21(iVar2, 0x00000000)) && !func_1(&uLocal_102, 0x000007D0, 0x00000000))
	{
		iVar2 = iLocal_111;
		unk_0x5D96D8530B3D0904(&iLocal_110, 0x00000002);
	}
	else
	{
		iLocal_111 = iVar2;
		func_46(&uLocal_102);
		unk_0x0674E58A79778E99(&iLocal_110, 0x00000002);
	}
	return iVar2;
}

void func_334(int iParam0)
{
	switch (Local_139.f_3)
	{
		case 0x00000002:
			if (*iParam0 > 0x00000000)
			{
				if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if ((((unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9())) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) || unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9())) || unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9()))
						{
							*iParam0 = 0x00000000;
						}
					}
					else
					{
						*iParam0 = 0x00000000;
					}
				}
			}
			break;
	}
}

void func_335()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_1, 0x00000002))
	{
		unk_0x5D96D8530B3D0904(&(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_1), 0x00000002);
		func_336(0x00000001);
	}
}

void func_336(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000007))
		{
			if (((!func_106(unk_0xD803B885F5E47A62()) && !func_7(unk_0xD803B885F5E47A62())) && !func_162(unk_0xD803B885F5E47A62())) && !func_355(unk_0xD803B885F5E47A62()))
			{
				if (func_165())
				{
					func_348(0x00000002, 0x00000000, 0x00000001);
					func_347();
				}
				if (func_346(0x00000000))
				{
					uVar0 = func_207(0x000009B0, 0xFFFFFFFF, 0x00000000);
					unk_0x0674E58A79778E99(&uVar0, 0x00000000);
					func_347();
				}
				if (func_346(func_345(func_320(unk_0xD803B885F5E47A62()))))
				{
					uVar0 = func_207(0x000009B0, 0xFFFFFFFF, 0x00000000);
					unk_0x0674E58A79778E99(&uVar0, func_345(func_320(unk_0xD803B885F5E47A62())));
					func_347();
				}
				if (func_344())
				{
					func_347();
				}
				if (func_320(unk_0xD803B885F5E47A62()) > 0xFFFFFFFF)
				{
					unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000007);
					if (func_343(unk_0xD803B885F5E47A62()))
					{
						func_342();
					}
					func_339(func_341(func_320(unk_0xD803B885F5E47A62())));
				}
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000007))
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000007);
		func_337();
	}
}

void func_337()
{
	if (func_338())
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000011);
	}
}

bool func_338()
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000011);
}

void func_339(int iParam0)
{
	int iVar0;
	
	if (Global_40001.f_217B)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Global_200000[func_340() /*10930*/].f_181E.f_100F[iVar0 /*3*/] == iParam0)
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

int func_340()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

int func_341(int iParam0)
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

void func_342()
{
	if (!func_338())
	{
		Global_26B66F.f_19B1 = unk_0x2B6E0A53779D29EA();
		unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000011);
	}
}

int func_343(int iParam0)
{
	if (func_320(iParam0) == 0x000000EC || func_320(iParam0) == 0x00000096)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_344()
{
	if (Global_2537E2.f_484.f_5 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_345(int iParam0)
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

bool func_346(int iParam0)
{
	int iVar0;
	
	iVar0 = func_207(0x000009B0, 0xFFFFFFFF, 0x00000000);
	return unk_0xEAE0D21A50E6C7F4(iVar0, iParam0);
}

void func_347()
{
	if (func_344())
	{
		Global_2537E2.f_484.f_10 = 0x00000001;
	}
}

void func_348(int iParam0, int iParam1, bool bParam2)
{
	if (func_165())
	{
		if (iParam1 == 0x00000001)
		{
			if (Global_26B66F.f_112B == 0xFFFFFFFF)
			{
				Global_26B66F.f_112B = Global_40001.f_6719;
			}
			func_27(&(Global_26B66F.f_1129), 0x00000000, 0x00000000);
			if (bParam2)
			{
				if (Global_26B66F.f_112E == 0xFFFFFFFF)
				{
					Global_26B66F.f_112E = Global_40001.f_671A;
				}
				func_27(&(Global_26B66F.f_112C), 0x00000000, 0x00000000);
			}
			else
			{
				Global_1406A2 = 0x00000000;
				Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0x00000000;
				func_354(0x00000001);
			}
		}
		else
		{
			Global_1406A2 = 0x00000000;
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0x00000000;
			func_354(0x00000001);
		}
		if ((!unk_0xA14BB9332558B949() && !func_353()) && !func_349(unk_0xD803B885F5E47A62()))
		{
			Global_EC6CC = 0x00000000;
		}
		unk_0x6EC9FBED3024FDF5(0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, iParam0);
	}
}

int func_349(int iParam0)
{
	if (func_350(iParam0, 0x00000001, 0x00000000))
	{
		if (Global_184507[iParam0 /*876*/] != 0x00000006)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_350(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_351(iParam0))
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

bool func_351(int iParam0)
{
	return func_352(iParam0);
}

bool func_352(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

bool func_353()
{
	return Global_2564C8.f_2E4;
}

void func_354(bool bParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (!func_165())
		{
			if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
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
			if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
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

int func_355(int iParam0)
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

int func_356()
{
	switch (Local_139.f_3)
	{
		case 0x00000002:
		case 0x00000003:
		case 0x00000005:
		case 0x00000004:
		case 0x00000008:
		case 0x00000001:
		case 0x00000006:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_357(int iParam0, int iParam1)
{
	if (Local_139.f_3 == 0x00000011)
	{
		if (iParam0 < iParam1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_358()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_373())
	{
		if (Local_139.f_3 == 0x0000000E)
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && func_372(unk_0x16F2683693E537C9(), 0x00000000) == 0xFFFFFFFF)
			{
				iVar2 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				if ((!func_371(&iVar2, 0x00000000) || unk_0x134B62B726CEC8E6(iVar2) != joaat("dodo")) && unk_0xE934758D273C899A(iVar2))
				{
					func_364(Local_139.f_3 != 0x0000000E, 0x00000001, 0x00000000);
					if (func_363())
					{
						iVar3 = func_362();
						if (iVar3 >= 0x00000000)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_8[func_361(iVar3)], func_360(iVar3)))
							{
								iLocal_113++;
								unk_0x5D96D8530B3D0904(&(Local_1505[unk_0x57270EE11514DC67() /*12*/].f_8[func_361(iVar3)]), func_360(iVar3));
							}
						}
					}
					iVar0 = iLocal_113;
				}
			}
		}
		else
		{
			iVar0 = func_359();
		}
	}
	else
	{
		unk_0x743061FC858F03A8(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	return unk_0x51D1D19912234EA0(iVar0);
}

int func_359()
{
	switch (Local_139.f_3)
	{
		case 0x0000000E:
			return 0x00000000;
		
		case 0x00000004:
			return 0x00000000;
		
		default:
	}
	return 0xFFFFFFFF;
}

int func_360(int iParam0)
{
	if (iParam0 < 0x0000001F)
	{
		return iParam0;
	}
	else if (iParam0 < 0x0000003E)
	{
		return (iParam0 - 0x0000001F);
	}
	return (iParam0 - func_361(iParam0) * 31);
}

int func_361(int iParam0)
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

int func_362()
{
	return iLocal_80;
}

int func_363()
{
	if (iLocal_87 == 0x00000001)
	{
		iLocal_87 = 0x00000000;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_364(bool bParam0, bool bParam1, int iParam2)
{
	func_366(bParam0, iParam2);
	if (bParam1)
	{
		if (vLocal_91.z < vLocal_92.z)
		{
			vLocal_91.z = 0f;
		}
		else
		{
			vLocal_92.z = 0f;
		}
		if (vLocal_93.z < vLocal_94.z)
		{
			vLocal_93.z = 0f;
		}
		else
		{
			vLocal_94.z = 0f;
		}
	}
	switch (iLocal_81)
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vLocal_89[iLocal_80 /*3*/]) < fLocal_90)
				{
					if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
					{
						if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
						{
							if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_91, vLocal_92, fLocal_95, 0x00000000, 0x00000001, 0x00000000))
							{
								bLocal_82 = 0x00000001;
								iLocal_81 = 0x00000001;
							}
							if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_93, vLocal_94, fLocal_95, 0x00000000, 0x00000001, 0x00000000))
							{
								bLocal_83 = 0x00000001;
								iLocal_81 = 0x00000001;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) && !unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					func_365();
				}
				else if (!unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
				{
					func_365();
				}
				else if (!unk_0xE934758D273C899A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) && !bParam1)
				{
					func_365();
				}
				if (bLocal_82)
				{
					if (iLocal_86)
					{
						if (iLocal_85)
						{
							if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_91, vLocal_92, fLocal_95, 0x00000000, 0x00000001, 0x00000000) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_93, vLocal_94, fLocal_95, 0x00000000, 0x00000001, 0x00000000))
							{
								func_365();
								iLocal_87 = 0x00000001;
							}
						}
						else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_91, vLocal_92, fLocal_95, 0x00000000, 0x00000001, 0x00000000) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_93, vLocal_94, fLocal_95, 0x00000000, 0x00000001, 0x00000000))
						{
							iLocal_85 = 0x00000001;
						}
						else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_91, vLocal_92, fLocal_95, 0x00000000, 0x00000001, 0x00000000) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_93, vLocal_94, fLocal_95, 0x00000000, 0x00000001, 0x00000000))
						{
							func_365();
						}
					}
					else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_91, vLocal_92, fLocal_95, 0x00000000, 0x00000001, 0x00000000) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_93, vLocal_94, fLocal_95, 0x00000000, 0x00000001, 0x00000000))
					{
						iLocal_86 = 0x00000001;
					}
					else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_91, vLocal_92, fLocal_95, 0x00000000, 0x00000001, 0x00000000) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_93, vLocal_94, fLocal_95, 0x00000000, 0x00000001, 0x00000000))
					{
						func_365();
					}
				}
				else if (bLocal_83)
				{
					if (iLocal_86)
					{
						if (iLocal_84)
						{
							if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_91, vLocal_92, fLocal_95, 0x00000000, 0x00000001, 0x00000000) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_93, vLocal_94, fLocal_95, 0x00000000, 0x00000001, 0x00000000))
							{
								func_365();
								iLocal_87 = 0x00000001;
							}
						}
						else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_91, vLocal_92, fLocal_95, 0x00000000, 0x00000001, 0x00000000) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_93, vLocal_94, fLocal_95, 0x00000000, 0x00000001, 0x00000000))
						{
							iLocal_84 = 0x00000001;
						}
						else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_91, vLocal_92, fLocal_95, 0x00000000, 0x00000001, 0x00000000) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_93, vLocal_94, fLocal_95, 0x00000000, 0x00000001, 0x00000000))
						{
							func_365();
						}
					}
					else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_91, vLocal_92, fLocal_95, 0x00000000, 0x00000001, 0x00000000) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_93, vLocal_94, fLocal_95, 0x00000000, 0x00000001, 0x00000000))
					{
						iLocal_86 = 0x00000001;
					}
					else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_91, vLocal_92, fLocal_95, 0x00000000, 0x00000001, 0x00000000) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_93, vLocal_94, fLocal_95, 0x00000000, 0x00000001, 0x00000000))
					{
						func_365();
					}
				}
			}
			break;
	}
}

void func_365()
{
	bLocal_82 = 0x00000000;
	bLocal_83 = 0x00000000;
	iLocal_84 = 0x00000000;
	iLocal_85 = 0x00000000;
	iLocal_86 = 0x00000000;
	iLocal_81 = 0x00000000;
}

void func_366(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	vLocal_88 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
	fVar1 = 1E+07f;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000041)
	{
		if ((uParam0 || !func_370(iVar0)) && (uParam1 || !func_369(iVar0)))
		{
			if (func_368(vLocal_88, vLocal_89[iVar0 /*3*/], 100f, 0x00000000))
			{
				fVar2 = SYSTEM::VDIST(vLocal_88, vLocal_89[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_80 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_367(iLocal_80);
}

void func_367(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			vLocal_91 = { 1103.014f, -233.0374f, 56.13004f };
			vLocal_92 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_95 = 30f;
			vLocal_93 = { 1093.589f, -248.5926f, 56.88639f };
			vLocal_94 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 0x00000001:
			vLocal_91 = { 1044.182f, -324.5904f, 49.33408f };
			vLocal_92 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_95 = 30f;
			vLocal_93 = { 1007.983f, -320.6159f, 48.4543f };
			vLocal_94 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 0x00000002:
			vLocal_91 = { 916.599f, -419.8782f, 35.62748f };
			vLocal_92 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_95 = 7f;
			vLocal_93 = { 912.1362f, -420.5161f, 35.38034f };
			vLocal_94 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 0x00000003:
			vLocal_91 = { 757.7189f, -472.924f, 19.2535f };
			vLocal_92 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_95 = 20.75f;
			vLocal_93 = { 744.9114f, -480.7373f, 19.06514f };
			vLocal_94 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 0x00000004:
			vLocal_91 = { 680.3677f, -581.1792f, 14.2145f };
			vLocal_92 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_95 = 45f;
			vLocal_93 = { 667.3692f, -610.5356f, 13.85401f };
			vLocal_94 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 0x00000005:
			vLocal_91 = { 644.2497f, -844.7504f, 12.36707f };
			vLocal_92 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_95 = 25f;
			vLocal_93 = { 644.3659f, -859.3878f, 12.59677f };
			vLocal_94 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 0x00000006:
			vLocal_91 = { 634.972f, -1011.64f, 10.92594f };
			vLocal_92 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_95 = 25f;
			vLocal_93 = { 634.9612f, -1029.123f, 10.61846f };
			vLocal_94 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 0x00000007:
			vLocal_91 = { 645.7223f, -1191.215f, 10.45198f };
			vLocal_92 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_95 = 50f;
			vLocal_93 = { 645.7223f, -1228.966f, 10.98015f };
			vLocal_94 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 0x00000008:
			vLocal_91 = { 642.1216f, -1295.73f, 9.005976f };
			vLocal_92 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_95 = 7f;
			vLocal_93 = { 644.7772f, -1298.168f, 9.128529f };
			vLocal_94 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 0x00000009:
			vLocal_91 = { 686.5675f, -1444.71f, 9.065001f };
			vLocal_92 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_95 = 25f;
			vLocal_93 = { 682.3027f, -1429.872f, 9.890836f };
			vLocal_94 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 0x0000000A:
			vLocal_91 = { 718.7617f, -1734.313f, 9.082874f };
			vLocal_92 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_95 = 30f;
			vLocal_93 = { 717.5355f, -1748.646f, 9.363478f };
			vLocal_94 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 0x0000000B:
			vLocal_91 = { 694.3165f, -2049.806f, 0.009695f };
			vLocal_92 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_95 = 30f;
			vLocal_93 = { 693.1836f, -2063.225f, 0.429037f };
			vLocal_94 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 0x0000000C:
			vLocal_91 = { 642.6671f, -2494.551f, 0.468485f };
			vLocal_92 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_95 = 20f;
			vLocal_93 = { 647.0339f, -2506.202f, 0.583701f };
			vLocal_94 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 0x0000000D:
			vLocal_91 = { 691.8235f, -2558.219f, 0.363352f };
			vLocal_92 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_95 = 10.25f;
			vLocal_93 = { 695.7928f, -2561.034f, 0.346731f };
			vLocal_94 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 0x0000000E:
			vLocal_91 = { 723.6254f, -2562.171f, 0.255647f };
			vLocal_92 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_95 = 15f;
			vLocal_93 = { 735.765f, -2561.935f, 0.311182f };
			vLocal_94 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 0x0000000F:
			vLocal_91 = { 891.4387f, -2603.12f, 0f };
			vLocal_92 = { 704.4932f, -2634.793f, 45f };
			fLocal_95 = 20f;
			vLocal_93 = { 893.2578f, -2616.235f, 0f };
			vLocal_94 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 0x00000010:
			vLocal_91 = { -2669.587f, 2491.96f, 2.043799f };
			vLocal_92 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_95 = 26.5f;
			vLocal_93 = { -2687.606f, 2494.868f, 2.608733f };
			vLocal_94 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 0x00000011:
			vLocal_91 = { -1986.173f, 4521.799f, 0f };
			vLocal_92 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_95 = 17f;
			vLocal_93 = { -1995.668f, 4531.259f, 0f };
			vLocal_94 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 0x00000012:
			vLocal_91 = { -526.0265f, 4472.442f, 0f };
			vLocal_92 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_95 = 10f;
			vLocal_93 = { -519.9281f, 4476.346f, 0f };
			vLocal_94 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 0x00000013:
			vLocal_91 = { 98.1615f, 3384.489f, 45.45169f };
			vLocal_92 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_95 = 8f;
			vLocal_93 = { 152.6802f, 3346.793f, 45.02156f };
			vLocal_94 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 0x00000014:
			vLocal_91 = { 147.8606f, 3406.796f, 38.03672f };
			vLocal_92 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_95 = 14.5f;
			vLocal_93 = { 130.0916f, 3425.417f, 38.05672f };
			vLocal_94 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 0x00000015:
			vLocal_91 = { 2830.972f, 4967.14f, 34.56013f };
			vLocal_92 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_95 = 10f;
			vLocal_93 = { 2826.767f, 4964.185f, 34.10636f };
			vLocal_94 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 0x00000016:
			vLocal_91 = { -151.5764f, 4264.417f, 31.04735f };
			vLocal_92 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_95 = 10f;
			vLocal_93 = { -148.3842f, 4261.071f, 31.57409f };
			vLocal_94 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 0x00000017:
			vLocal_91 = { -426.6919f, 2964.272f, 14.848f };
			vLocal_92 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_95 = 7f;
			vLocal_93 = { -425.0283f, 2967.861f, 15.22699f };
			vLocal_94 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 0x00000018:
			vLocal_91 = { -192.3414f, 2864.916f, 30.72595f };
			vLocal_92 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_95 = 10f;
			vLocal_93 = { -192.0129f, 2871.603f, 29.99943f };
			vLocal_94 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 0x00000019:
			vLocal_91 = { 2539.185f, 2228.772f, 18.6102f };
			vLocal_92 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_95 = 10f;
			vLocal_93 = { 2543.708f, 2231.402f, 18.331f };
			vLocal_94 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 0x0000001A:
			vLocal_91 = { 2954.087f, 815.7209f, 0.037901f };
			vLocal_92 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_95 = 35f;
			vLocal_93 = { 2966.123f, 806.8889f, 0.544056f };
			vLocal_94 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 0x0000001B:
			vLocal_91 = { 2329.673f, -459.6648f, 70.24277f };
			vLocal_92 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_95 = 12f;
			vLocal_93 = { 2324.752f, -455.5238f, 70.25145f };
			vLocal_94 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 0x0000001C:
			vLocal_91 = { 1943.428f, -753.251f, 80.17905f };
			vLocal_92 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_95 = 7f;
			vLocal_93 = { 1943.366f, -758.287f, 80.32291f };
			vLocal_94 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 0x0000001D:
			vLocal_91 = { -271.2849f, -2414.993f, -10f };
			vLocal_92 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_95 = 30f;
			vLocal_93 = { -279.8399f, -2427.212f, -10f };
			vLocal_94 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 0x0000001E:
			vLocal_91 = { -1483f, 2691.428f, -10f };
			vLocal_92 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_95 = 12f;
			vLocal_93 = { -1478.152f, 2696.688f, -10f };
			vLocal_94 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 0x0000001F:
			vLocal_91 = { 222.1519f, -2343.487f, 0.039199f };
			vLocal_92 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_95 = 12f;
			vLocal_93 = { 216.959f, -2343.487f, 0.207734f };
			vLocal_94 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 0x00000020:
			vLocal_91 = { 346.4622f, -2244.374f, 0.159779f };
			vLocal_92 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_95 = 20f;
			vLocal_93 = { 359.609f, -2244.468f, 0.129684f };
			vLocal_94 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 0x00000021:
			vLocal_91 = { -1859.68f, -322.6357f, 56.16368f };
			vLocal_92 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_95 = 7.5f;
			vLocal_93 = { -1860.27f, -327.8634f, 57.543f };
			vLocal_94 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 0x00000022:
			vLocal_91 = { -680.2632f, -600.818f, 69.11289f };
			vLocal_92 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_95 = 31.5f;
			vLocal_93 = { -680.6077f, -618.3658f, 69.27496f };
			vLocal_94 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 0x00000023:
			vLocal_91 = { -1468.096f, -591.7158f, 67.05518f };
			vLocal_92 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_95 = 11.75f;
			vLocal_93 = { -1474.903f, -591.1215f, 67.08091f };
			vLocal_94 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 0x00000024:
			vLocal_91 = { -1544.958f, -537.1475f, 72.44347f };
			vLocal_92 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_95 = 11.75f;
			vLocal_93 = { -1541.008f, -541.5494f, 71.61972f };
			vLocal_94 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 0x00000025:
			vLocal_91 = { 333.2108f, -2727.274f, 20.71663f };
			vLocal_92 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_95 = 20f;
			vLocal_93 = { 343.1127f, -2727.236f, 20.23613f };
			vLocal_94 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 0x00000026:
			vLocal_91 = { 1928.071f, 6228.355f, 43.49398f };
			vLocal_92 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_95 = 13f;
			vLocal_93 = { 1931.82f, 6235.634f, 43.37382f };
			vLocal_94 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 0x00000027:
			vLocal_91 = { -736.4309f, -1590.921f, 10.80892f };
			vLocal_92 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_95 = 15f;
			vLocal_93 = { -727.2307f, -1585.221f, 11.78027f };
			vLocal_94 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 0x00000028:
			vLocal_91 = { -676.3775f, -1548.553f, 12.33747f };
			vLocal_92 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_95 = 25f;
			vLocal_93 = { -654.203f, -1536.146f, 9.191055f };
			vLocal_94 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 0x00000029:
			vLocal_91 = { -624.2344f, -1537.045f, 12.60193f };
			vLocal_92 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_95 = 8f;
			vLocal_93 = { -615.4003f, -1536.65f, 12.40271f };
			vLocal_94 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 0x0000002A:
			vLocal_91 = { -492.5057f, -1632.457f, 24.3307f };
			vLocal_92 = { -418.2088f, -1487.452f, 0f };
			fLocal_95 = 25f;
			vLocal_93 = { -486.2016f, -1636.095f, 24.20805f };
			vLocal_94 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 0x0000002B:
			vLocal_91 = { -359.3541f, -1639.693f, 13.13455f };
			vLocal_92 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_95 = 25f;
			vLocal_93 = { -378.1518f, -1705.66f, 12.47196f };
			vLocal_94 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 0x0000002C:
			vLocal_91 = { -243.4436f, -1814.623f, 25.69465f };
			vLocal_92 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_95 = 25f;
			vLocal_93 = { -235.1319f, -1822.094f, 25.86542f };
			vLocal_94 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 0x0000002D:
			vLocal_91 = { 84.55537f, -2046.159f, 13.30767f };
			vLocal_92 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_95 = 25f;
			vLocal_93 = { 17.90788f, -2035.773f, 12.62706f };
			vLocal_94 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 0x0000002E:
			vLocal_91 = { 221.5029f, -2232.766f, 9.88676f };
			vLocal_92 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_95 = 8f;
			vLocal_93 = { 218.583f, -2232.766f, 9.886198f };
			vLocal_94 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 0x0000002F:
			vLocal_91 = { 221.6518f, -2184.635f, 11.66457f };
			vLocal_92 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_95 = 8f;
			vLocal_93 = { 217.8995f, -2184.635f, 11.5405f };
			vLocal_94 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 0x00000030:
			vLocal_91 = { 2326.57f, 1096.031f, 76.31458f };
			vLocal_92 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_95 = 21f;
			vLocal_93 = { 2334.453f, 1103.067f, 76.26603f };
			vLocal_94 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 0x00000031:
			vLocal_91 = { 2379.442f, 1150.776f, 58.79632f };
			vLocal_92 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_95 = 12f;
			vLocal_93 = { 2374.064f, 1146.282f, 58.83331f };
			vLocal_94 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 0x00000032:
			vLocal_91 = { -1179.405f, -355.2554f, 56.53003f };
			vLocal_92 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_95 = 12.5f;
			vLocal_93 = { -1178.385f, -361.8784f, 56.15081f };
			vLocal_94 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 0x00000033:
			vLocal_91 = { -921.3846f, -384.94f, 137.0181f };
			vLocal_92 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_95 = 16f;
			vLocal_93 = { -914.1658f, -387.9444f, 137.0794f };
			vLocal_94 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 0x00000034:
			vLocal_91 = { -740.2564f, 246.4529f, 132.2922f };
			vLocal_92 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_95 = 22f;
			vLocal_93 = { -726.6429f, 253.0676f, 132.3319f };
			vLocal_94 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 0x00000035:
			vLocal_91 = { -771.2068f, 268.2729f, 132.1689f };
			vLocal_92 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_95 = 16f;
			vLocal_93 = { -770.8035f, 310.8625f, 137.4161f };
			vLocal_94 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 0x00000036:
			vLocal_91 = { 259.2205f, 135.4146f, 136.7083f };
			vLocal_92 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_95 = 16f;
			vLocal_93 = { 261.9694f, 142.9676f, 136.6889f };
			vLocal_94 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 0x00000037:
			vLocal_91 = { 393.548f, -30.87166f, 152.6635f };
			vLocal_92 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_95 = 8f;
			vLocal_93 = { 390.5358f, -36.08882f, 152.7813f };
			vLocal_94 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 0x00000038:
			vLocal_91 = { 114.3139f, -648.4297f, 261.8488f };
			vLocal_92 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_95 = 20f;
			vLocal_93 = { 124.8467f, -646.6575f, 261.8488f };
			vLocal_94 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 0x00000039:
			vLocal_91 = { -215.919f, -823.8436f, 126.0224f };
			vLocal_92 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_95 = 20f;
			vLocal_93 = { -225.397f, -820.3937f, 126.0812f };
			vLocal_94 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 0x0000003A:
			vLocal_91 = { -296.4725f, -802.0815f, 95.40108f };
			vLocal_92 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_95 = 20f;
			vLocal_93 = { -305.4602f, -798.8369f, 95.48194f };
			vLocal_94 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 0x0000003B:
			vLocal_91 = { -292.3034f, -823.3569f, 95.37621f };
			vLocal_92 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_95 = 20f;
			vLocal_93 = { -288.9206f, -814.022f, 95.37556f };
			vLocal_94 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 0x0000003C:
			vLocal_91 = { -256.3589f, -714.7838f, 110.1617f };
			vLocal_92 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_95 = 20f;
			vLocal_93 = { -253.7723f, -705.6632f, 110.1736f };
			vLocal_94 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 0x0000003D:
			vLocal_91 = { 1808.214f, 1949.246f, 71.73707f };
			vLocal_92 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_95 = 9.75f;
			vLocal_93 = { 1802.786f, 1950.262f, 71.74002f };
			vLocal_94 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 0x0000003E:
			vLocal_91 = { 2388.733f, 2931.941f, 46.62681f };
			vLocal_92 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_95 = 10f;
			vLocal_93 = { 2392.547f, 2934.867f, 46.6268f };
			vLocal_94 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 0x0000003F:
			vLocal_91 = { 2700.056f, 4836.381f, 42.07854f };
			vLocal_92 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_95 = 20.75f;
			vLocal_93 = { 2685.672f, 4821.653f, 42.18471f };
			vLocal_94 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 0x00000040:
			vLocal_91 = { -1053.446f, 4766.245f, 234.3251f };
			vLocal_92 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_95 = 5f;
			vLocal_93 = { -1051.414f, 4767.193f, 234.4293f };
			vLocal_94 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_368(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000008:
		case 0x0000000C:
		case 0x0000000D:
		case 0x00000014:
		case 0x0000001F:
		case 0x00000020:
		case 0x0000002E:
		case 0x0000002F:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000021:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
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
		case 0x0000003C:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_371(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0x00000000) || iParam1)
		{
			if (unk_0x70EED0761B82965E(*iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_372(int iParam0, int iParam1)
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

int func_373()
{
	switch (Local_139.f_3)
	{
		case 0x00000000:
		case 0x00000002:
		case 0x00000003:
		case 0x00000005:
		case 0x00000004:
		case 0x00000008:
		case 0x00000001:
		case 0x00000006:
		case 0x00000007:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_374(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	if (func_391() < 0x0000000A)
	{
		iVar0 = func_390();
		func_375(vParam0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_375(vector3 vParam0, var uParam1, int iParam2, var uParam3)
{
	func_376(vParam0, 0f, 0f, 0f, uParam1, 0x00000000, iParam2, uParam3);
}

void func_376(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5)
{
	struct<12> Var0;
	
	if (func_385(unk_0xD803B885F5E47A62()) || uParam5)
	{
		if (Var0.f_A == 0x00000001)
		{
			func_384(&vParam0, &vParam1);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam1 };
		Var0.f_6 = uParam2;
		Var0.f_A = iParam3;
		if (func_379(Var0))
		{
			Global_24B2D0.f_2D.f_40 = func_378(unk_0xD803B885F5E47A62());
			func_377(Var0, iParam4);
		}
	}
}

void func_377(struct<12> Param0, int iParam1)
{
	Global_24B2D0.f_16D[iParam1 /*12*/] = { Param0 };
	Global_24B2D0.f_16D[iParam1 /*12*/].f_9 = 0x00000001;
}

int func_378(int iParam0)
{
	if (func_12(iParam0, 0x00000000, 0x00000001))
	{
		return Global_25033E[iParam0 /*421*/].f_1;
	}
	return 0x00000000;
}

int func_379(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0x00000000 /*12*/] = { Param0 };
	Var0[0x00000000 /*12*/].f_9 = 0x00000001;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000004)
	{
		if (Global_24B2D0.f_2D[iVar1 /*12*/].f_9 == 0x00000001)
		{
			if (!func_380(Global_24B2D0.f_2D[iVar1 /*12*/], &Var0))
			{
				return 0x00000000;
			}
		}
		iVar1++;
	}
	return 0x00000001;
}

int func_380(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_A)
			{
				case 0x00000000:
					switch (vParam0.f_A)
					{
						case 0x00000000:
							if (func_383(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0x00000000;
							}
							break;
						
						case 0x00000001:
							if (func_381(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0x00000000;
							}
							break;
						
						case 0x00000002:
							break;
					}
					break;
				
				case 0x00000001:
					switch (vParam0.f_A)
					{
						case 0x00000000:
							if (func_383(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0x00000000;
							}
							break;
						
						case 0x00000001:
							if (func_381(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0x00000000;
							}
							break;
						
						case 0x00000002:
							break;
					}
					break;
				
				case 0x00000002:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_381(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.7071068f);
	vVar0 = { vParam2 - Vector(fVar2, fVar2, fVar2) };
	vVar1 = { vParam2 + Vector(fVar2, fVar2, fVar2) };
	return func_382(vParam0, vParam1, vVar0, vVar1);
}

int func_382(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)
{
	if (((((vParam0.x >= vParam2.x && vParam0.y >= vParam2.y) && vParam0.z >= vParam2.z) && vParam1.x <= vParam3.x) && vParam1.y <= vParam3.y) && vParam1.z <= vParam3.z)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_383(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	
	vVar0 = { vParam2 - vParam0 };
	if ((SYSTEM::VMAG(vVar0) + fParam1) < fParam3)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_384(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (*uParam0 <= *uParam1)
	{
		vVar0.x = *uParam0;
		vVar1.x = *uParam1;
	}
	else
	{
		vVar0.x = *uParam1;
		vVar1.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		vVar0.y = uParam0->f_1;
		vVar1.y = uParam1->f_1;
	}
	else
	{
		vVar0.y = uParam1->f_1;
		vVar1.y = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		vVar0.z = uParam0->f_2;
		vVar1.z = uParam1->f_2;
	}
	else
	{
		vVar0.z = uParam1->f_2;
		vVar1.z = uParam0->f_2;
	}
	*uParam0 = { vVar0 };
	*uParam1 = { vVar1 };
}

int func_385(int iParam0)
{
	if (((func_388(iParam0, 0x00000001) || func_387(iParam0)) || func_112(iParam0, 0x00000000)) || func_386(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_386(int iParam0)
{
	if (!func_12(iParam0, 0x00000000, 0x00000001))
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_23;
}

int func_387(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/] != 0xFFFFFFFF;
	}
	return 0x00000000;
}

bool func_388(int iParam0, bool bParam1)
{
	if (func_389() != 0x00000000)
	{
		return func_378(iParam0) != 0x00000000;
	}
	return func_350(iParam0, bParam1, 0x00000000);
}

int func_389()
{
	return Global_7830;
}

int func_390()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (!Global_24B2D0.f_16D[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_391()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (Global_24B2D0.f_16D[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_392(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x6B012227B3921E18(sParam2);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

char* func_393(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "AMCH_0";
		
		case 0x00000001:
			return "AMCH_1";
		
		case 0x00000002:
			return "AMCH_2";
		
		case 0x00000003:
			return "AMCH_3";
		
		case 0x00000004:
			return "AMCH_4";
		
		case 0x00000005:
			return "AMCH_5";
		
		case 0x00000006:
			return "AMCH_6";
		
		case 0x00000007:
			return "AMCH_7";
		
		case 0x00000008:
			return "AMCH_8";
		
		case 0x0000000E:
			return "AMCH_9";
		
		case 0x00000009:
			return "AMCH_12";
		
		case 0x0000000A:
			return "AMCH_13";
		
		case 0x0000000B:
			return "AMCH_15";
		
		case 0x0000000C:
			return "AMCH_16";
		
		case 0x0000000F:
			return "AMCH_19";
		
		case 0x00000010:
			return "AMCH_20";
		
		case 0x00000011:
			return "AMCH_21";
		
		case 0x00000012:
			return "AMCH_22";
		
		case 0x0000000D:
			return "AMCH_23";
		
		default:
	}
	return "";
}

char* func_394(int iParam0)
{
	switch (iParam0)
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
		
		case 0x0000000E:
			return "AMCH_9SLC";
		
		case 0x00000009:
			return "AMCH_12SLC";
		
		case 0x0000000A:
			return "AMCH_13SLC";
		
		case 0x0000000B:
			return "AMCH_15SLC";
		
		case 0x0000000C:
			return "AMCH_16SLC";
		
		case 0x0000000F:
			return "AMCH_19SLC";
		
		case 0x00000010:
			return "AMCH_20SLC";
		
		case 0x00000011:
			return "AMCH_21SLC";
		
		case 0x00000012:
			return "AMCH_22SLC";
		
		case 0x0000000D:
			return "AMCH_23SLC";
		
		default:
	}
	return "";
}

char* func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "AMCH_BIG_0";
		
		case 0x00000001:
			return "AMCH_BIG_1";
		
		case 0x00000002:
			return "AMCH_BIG_2";
		
		case 0x00000003:
			return "AMCH_BIG_3";
		
		case 0x00000004:
			return "AMCH_BIG_4";
		
		case 0x00000005:
			return "AMCH_BIG_5";
		
		case 0x00000006:
			return "AMCH_BIG_6";
		
		case 0x00000007:
			return "AMCH_BIG_7";
		
		case 0x00000008:
			return "AMCH_BIG_8";
		
		case 0x0000000E:
			return "AMCH_BIG_9";
		
		case 0x00000009:
			return "AMCH_BIG_12";
		
		case 0x0000000A:
			return "AMCH_BIG_13";
		
		case 0x0000000B:
			return "AMCH_BIG_15";
		
		case 0x0000000C:
			return "AMCH_BIG_16";
		
		case 0x0000000F:
			return "AMCH_BIG_19";
		
		case 0x00000010:
			return "AMCH_BIG_20";
		
		case 0x00000011:
			return "AMCH_BIG_21";
		
		case 0x00000012:
			return "AMCH_BIG_22";
		
		case 0x0000000D:
			return "AMCH_BIG_23";
		
		default:
	}
	return "";
}

void func_396()
{
	if (!func_155())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return;
	}
	func_151();
}

void func_397(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000041)
	{
		if (!func_370(iVar0) && !func_369(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { vLocal_89[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_398()
{
	if (!func_373())
	{
		if (Local_139.f_3 == 0x0000000E)
		{
			func_401();
		}
		Local_1505[unk_0x57270EE11514DC67() /*12*/].f_4.f_1 = func_359();
	}
	else if ((!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000004) && !unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000005)) && !func_400(unk_0xD803B885F5E47A62()))
	{
		func_399();
	}
}

void func_399()
{
	switch (Local_139.f_3)
	{
		case 0x00000000:
			unk_0x2AC427A8BD5E39B5(0x00000008, 0x00000002);
			break;
		
		case 0x00000001:
			unk_0x2AC427A8BD5E39B5(0x0000000D, 0x00000002);
			break;
		
		case 0x00000002:
			unk_0x2AC427A8BD5E39B5(0x00000004, 0x00000002);
			break;
		
		case 0x00000004:
			unk_0x2AC427A8BD5E39B5(0x00000001, 0x00000002);
			break;
		
		case 0x00000003:
			unk_0x2AC427A8BD5E39B5(0x00000002, 0x00000002);
			break;
		
		case 0x00000005:
			unk_0x2AC427A8BD5E39B5(0x00000003, 0x00000002);
			break;
		
		case 0x00000006:
			unk_0x2AC427A8BD5E39B5(0x0000000B, 0x00000003);
			break;
		
		case 0x00000007:
			unk_0x2AC427A8BD5E39B5(0x0000000E, 0x00000001);
			break;
		
		case 0x00000008:
			unk_0x2AC427A8BD5E39B5(0x0000001D, 0x00000002);
			break;
		
		case 0x00000009:
			unk_0x2AC427A8BD5E39B5(0x0000000C, 0x00000002);
			break;
		
		case 0x0000000A:
			unk_0x2AC427A8BD5E39B5(0x0000000A, 0x00000002);
			break;
		
		case 0x0000000B:
			unk_0x2AC427A8BD5E39B5(0x00000012, 0x00000002);
			break;
		
		case 0x0000000C:
			unk_0x2AC427A8BD5E39B5(0x00000014, 0x00000002);
			break;
		
		case 0x0000000D:
			unk_0x2AC427A8BD5E39B5(0x0000001B, 0x00000002);
			break;
		
		case 0x0000000F:
			unk_0x2AC427A8BD5E39B5(0x0000001A, 0x00000001);
			break;
		
		case 0x00000010:
			unk_0x2AC427A8BD5E39B5(0x00000019, 0x00000001);
			break;
		
		case 0x00000011:
			unk_0x2AC427A8BD5E39B5(0x00000016, 0x00000001);
			break;
		
		case 0x00000012:
			unk_0x2AC427A8BD5E39B5(0x00000018, 0x00000001);
			break;
	}
	unk_0x5D96D8530B3D0904(&iLocal_110, 0x00000008);
}

bool func_400(int iParam0)
{
	return func_14(iParam0, 0x00000000);
}

void func_401()
{
	vLocal_89[0x00000000 /*3*/] = { 1083f, -231f, 60f };
	vLocal_89[0x00000001 /*3*/] = { 1024f, -325f, 60f };
	vLocal_89[0x00000002 /*3*/] = { 910f, -401f, 43f };
	vLocal_89[0x00000003 /*3*/] = { 721f, -457f, 26f };
	vLocal_89[0x00000004 /*3*/] = { 643f, -579f, 26f };
	vLocal_89[0x00000005 /*3*/] = { 590f, -851f, 26f };
	vLocal_89[0x00000006 /*3*/] = { 590f, -1023f, 16f };
	vLocal_89[0x00000007 /*3*/] = { 582f, -1205f, 24f };
	vLocal_89[0x00000008 /*3*/] = { 608f, -1335f, 16f };
	vLocal_89[0x00000009 /*3*/] = { 640f, -1434f, 16f };
	vLocal_89[0x0000000A /*3*/] = { 671f, -1742f, 20f };
	vLocal_89[0x0000000B /*3*/] = { 651f, -2046f, 16f };
	vLocal_89[0x0000000C /*3*/] = { 603f, -2505f, 9f };
	vLocal_89[0x0000000D /*3*/] = { 673f, -2582f, 4f };
	vLocal_89[0x0000000E /*3*/] = { 728f, -2594f, 10f };
	vLocal_89[0x0000000F /*3*/] = { 794f, -2624f, 27f };
	vLocal_89[0x00000010 /*3*/] = { -2663f, 2594f, 7.5f };
	vLocal_89[0x00000011 /*3*/] = { -1902f, 4617f, 30f };
	vLocal_89[0x00000012 /*3*/] = { -513f, 4427f, 40f };
	vLocal_89[0x00000013 /*3*/] = { 126f, 3366f, 40f };
	vLocal_89[0x00000014 /*3*/] = { 143f, 3418f, 36f };
	vLocal_89[0x00000015 /*3*/] = { 2822f, 4978f, 40f };
	vLocal_89[0x00000016 /*3*/] = { -162f, 4249f, 40f };
	vLocal_89[0x00000017 /*3*/] = { -408f, 2964f, 20f };
	vLocal_89[0x00000018 /*3*/] = { -181f, 2862f, 38f };
	vLocal_89[0x00000019 /*3*/] = { 2558f, 2201f, 24f };
	vLocal_89[0x0000001A /*3*/] = { 2950f, 803f, 8f };
	vLocal_89[0x0000001B /*3*/] = { 2369f, -409f, 80f };
	vLocal_89[0x0000001C /*3*/] = { 1906f, -755f, 84f };
	vLocal_89[0x0000001D /*3*/] = { -403f, -2333f, 40f };
	vLocal_89[0x0000001E /*3*/] = { -1429f, 2649f, 10f };
	vLocal_89[0x0000001F /*3*/] = { 219f, -2315f, 5f };
	vLocal_89[0x00000020 /*3*/] = { 350f, -2315f, 5f };
	vLocal_89[0x00000021 /*3*/] = { -1848f, -333f, 75f };
	vLocal_89[0x00000022 /*3*/] = { -693f, -608f, 69f };
	vLocal_89[0x00000023 /*3*/] = { -1461f, -582f, 53f };
	vLocal_89[0x00000024 /*3*/] = { -1553f, -546f, 59f };
	vLocal_89[0x00000025 /*3*/] = { 338f, -2758f, 23f };
	vLocal_89[0x00000026 /*3*/] = { 1985f, 6201f, 53f };
	vLocal_89[0x00000027 /*3*/] = { -713f, -1538f, 13f };
	vLocal_89[0x00000028 /*3*/] = { -659f, -1518f, 13f };
	vLocal_89[0x00000029 /*3*/] = { -620f, -1502f, 16f };
	vLocal_89[0x0000002A /*3*/] = { -445f, -1575f, 26f };
	vLocal_89[0x0000002B /*3*/] = { -373f, -1680f, 19f };
	vLocal_89[0x0000002C /*3*/] = { -212f, -1805f, 29f };
	vLocal_89[0x0000002D /*3*/] = { 47f, -2040f, 18f };
	vLocal_89[0x0000002E /*3*/] = { 223f, -2240f, 6f };
	vLocal_89[0x0000002F /*3*/] = { 218f, -2189f, 6f };
	vLocal_89[0x00000030 /*3*/] = { 2308f, 1124f, 78f };
	vLocal_89[0x00000031 /*3*/] = { 2349f, 1174f, 79f };
	vLocal_89[0x00000032 /*3*/] = { -1186f, -365f, 46f };
	vLocal_89[0x00000033 /*3*/] = { -916f, -407f, 93f };
	vLocal_89[0x00000034 /*3*/] = { -726f, 235f, 105f };
	vLocal_89[0x00000035 /*3*/] = { -774f, 286f, 112f };
	vLocal_89[0x00000036 /*3*/] = { 271f, 134f, 125f };
	vLocal_89[0x00000037 /*3*/] = { 377f, -28f, 125f };
	vLocal_89[0x00000038 /*3*/] = { 121f, -703f, 150f };
	vLocal_89[0x00000039 /*3*/] = { -204f, -784f, 74f };
	vLocal_89[0x0000003A /*3*/] = { -287f, -774f, 72f };
	vLocal_89[0x0000003B /*3*/] = { -272f, -824f, 71f };
	vLocal_89[0x0000003C /*3*/] = { -230f, -723f, 80f };
	vLocal_89[0x0000003D /*3*/] = { 1822f, 2044f, 62f };
	vLocal_89[0x0000003E /*3*/] = { 2410f, 2907f, 44f };
	vLocal_89[0x0000003F /*3*/] = { 2686f, 4858f, 36f };
	vLocal_89[0x00000040 /*3*/] = { -1046f, 4751f, 244f };
}

void func_402(int iParam0, bool bParam1)
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

void func_403(var uParam0, int iParam1)
{
	if (func_320(unk_0xD803B885F5E47A62()) == 0x00000085 && iParam1)
	{
		Global_26B66F.f_13B5 = uParam0;
	}
	else
	{
		Global_26B66F.f_13B5 = 0xFFFFFFFF;
	}
}

void func_404(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000001);
	if (iParam0 != 0x00000085)
	{
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000001);
	}
	Global_26B66F.f_136B = 0xFFFFFFFF;
	bVar0 = (func_112(unk_0xD803B885F5E47A62(), 0x00000000) && func_108(unk_0xD803B885F5E47A62()));
	if (bParam6)
	{
		func_402(func_421(iParam0), 0x00000001);
	}
	else
	{
		func_420(iParam0, 0xFFFFFFFF);
		if (func_8(unk_0xD803B885F5E47A62()))
		{
			Global_1806FA.f_3 = iParam0;
		}
		else
		{
			func_419(iParam0);
		}
		Global_1806FA.f_4 = 0xFFFFFFFF;
		if (func_8(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000005);
		}
		if (((func_165() && !func_164()) || func_163(unk_0xD803B885F5E47A62(), 0x00000015)) || func_163(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000004);
		}
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000011);
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000014);
		if (func_418(iParam0))
		{
			func_417();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_414(fParam1);
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
		if (func_412(iParam0))
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
				func_410(0x00000001);
				if (func_263(0x00000000))
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
			func_408(0x00000001);
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000C);
		}
		if (bParam5)
		{
			func_407();
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000C);
		}
		if (!bParam6)
		{
			if (func_405(iParam0))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000015);
			}
		}
	}
	Global_2658D5 = 0x00000001;
}

int func_405(int iParam0)
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
	if (func_406())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_406()
{
	switch (func_319())
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

void func_407()
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1362), 0x00000000);
}

void func_408(bool bParam0)
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
		func_409(iVar0);
		iVar0++;
	}
}

void func_409(int iParam0)
{
	Global_181EC.f_B5[iParam0] = 0x00000001;
	Global_181EC.f_B4 = 0x00000001;
}

void func_410(int iParam0)
{
	if (func_411() && iParam0)
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

int func_411()
{
	if ((((Global_EC6CD != 0xFFFFFFFF && Global_EC6CD != 0x00000021) && Global_EC6CD != 0x00000023) && Global_EC6CD != 0x00000025) && Global_EC6CD != 0x00000015)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_412(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000088:
		case 0x00000090:
		case 0x00000081:
			return 0x00000001;
		
		case 0x0000008D:
			if (func_413(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_413(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

void func_414(float fParam0)
{
	float fVar0;
	
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_415())
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

int func_415()
{
	switch (func_389())
	{
		case 0x00000000:
			return func_416();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_416()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_417()
{
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_C8 = 0x00000000;
	unk_0x0674E58A79778E99(&(Global_26B66F.f_11D1), 0x00000001);
}

int func_418(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000088:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_419(int iParam0)
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/] = iParam0;
}

void func_420(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 0xFFFFFFFF || iParam1 != 0xFFFFFFFF)
	{
		iVar0 = iParam0;
		if (iVar0 == 0xFFFFFFFF)
		{
			iVar0 = iParam1;
		}
		if (func_346(0x00000000) || func_346(func_345(iVar0)))
		{
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000002);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000002);
		}
	}
}

int func_421(int iParam0)
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

int func_422()
{
	switch (Local_139.f_3)
	{
		case 0x00000012:
		case 0x00000010:
		case 0x0000000F:
		case 0x00000011:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_423()
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

int func_424()
{
	switch (Local_139.f_3)
	{
		case 0x00000001:
		case 0x00000006:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_425()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_139.f_3))
	{
		if (Local_139.f_3 == 0x00000001 || Local_139.f_3 == 0x00000006)
		{
			iVar0 = func_447(unk_0xD803B885F5E47A62(), 0x00000001);
			iVar1 = func_200(iVar0, 0x00000001);
			if (iVar1 < 0x0000000B)
			{
				if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
				{
					unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 0x00000001, 0x00000000, 0x00000000);
					func_426(0x00000001);
				}
			}
			else
			{
				unk_0x27E404AD7AC8083F(unk_0xD803B885F5E47A62(), 0x00000001);
			}
		}
	}
}

void func_426(bool bParam0)
{
	int iVar0;
	
	if (unk_0x36C584991B4C183F(unk_0x16F2683693E537C9(), 0x00000005) != 0x00000000)
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
		unk_0x4854B75EFFCB0573(unk_0xD803B885F5E47A62(), func_207(0x00000249, 0xFFFFFFFF, 0x00000000));
		if (func_446())
		{
			unk_0x2DE95ECC33BE3172(unk_0xD803B885F5E47A62(), 0x73268708);
		}
		else if (func_445())
		{
			unk_0x2DE95ECC33BE3172(unk_0xD803B885F5E47A62(), 0x815E52EB);
		}
		if (func_442(0x00000E1A, 0xFFFFFFFF, 0xFFFFFFFF))
		{
		}
		iVar0 = func_207(0x000007F8, 0xFFFFFFFF, 0x00000000);
		unk_0xF8918B9BC7ADC372(unk_0xD803B885F5E47A62(), func_441(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), iVar0));
		if (func_260(0x00000000))
		{
			unk_0x4854B75EFFCB0573(unk_0xD803B885F5E47A62(), func_207(0x00000249, 0xFFFFFFFF, 0x00000000));
		}
		else
		{
			unk_0x4854B75EFFCB0573(unk_0xD803B885F5E47A62(), func_440(Global_26DACD));
		}
		func_439(unk_0xD803B885F5E47A62(), iVar0);
		unk_0xA8084772F05C5AF6(unk_0xD803B885F5E47A62(), 0x00000005, func_432(unk_0x16F2683693E537C9(), iVar0), func_431(unk_0x16F2683693E537C9(), iVar0), 0x00000000);
		func_430(func_207(0x000007F8, 0xFFFFFFFF, 0x00000000), 0x00000001);
		Global_26B66F.f_11F = 0x00000001;
		func_427(unk_0xD803B885F5E47A62(), 0xFFFFFFFF, 0xFFFFFFFF);
		if (bParam0)
		{
		}
	}
}

void func_427(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x8CD06866876216F2())
	{
		func_429();
		if (iParam2 == 0xFFFFFFFF)
		{
			iParam2 = func_207(0x000007F8, 0xFFFFFFFF, 0x00000000);
		}
		unk_0xA8084772F05C5AF6(iParam0, 0x00000005, func_432(unk_0x9539D44F3E4492F6(iParam0), iParam2), func_431(unk_0x9539D44F3E4492F6(iParam0), iParam2), 0x00000000);
		unk_0xF8918B9BC7ADC372(iParam0, func_441(unk_0x9539D44F3E4492F6(iParam0), iParam2));
		unk_0x64F9F278AB9DCA2C(unk_0x9539D44F3E4492F6(iParam0), 0x00000005, func_432(unk_0x9539D44F3E4492F6(iParam0), iParam2), func_431(unk_0x9539D44F3E4492F6(iParam0), iParam2), func_441(unk_0x9539D44F3E4492F6(iParam0), iParam2));
		if (iParam1 == 0xFFFFFFFF)
		{
			iParam1 = func_207(0x00000249, 0xFFFFFFFF, 0x00000000);
		}
		if (func_260(0x00000001) && func_428(iParam0))
		{
			unk_0x4854B75EFFCB0573(iParam0, func_440(Global_26DACD));
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
		func_439(iParam0, iParam2);
		unk_0x9DD8618CA5BF832D(unk_0x9539D44F3E4492F6(iParam0), 0x000000B1, 0x00000001);
	}
}

bool func_428(int iParam0)
{
	return func_107(iParam0, 0x0000000A);
}

void func_429()
{
	Global_12B33 = 0x00000000;
	Global_12B34 = 0xFFFFFFFF;
	Global_12B35 = 0xFFFFFFFF;
	Global_12B36 = 0xFFFFFFFF;
	Global_12B37 = 0xFFFFFFFF;
	Global_12B38 = 0xFFFFFFFF;
}

void func_430(int iParam0, int iParam1)
{
	if (unk_0x8CD06866876216F2())
	{
		func_429();
		func_198(0x000007F8, iParam0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		unk_0xA8084772F05C5AF6(unk_0xD803B885F5E47A62(), 0x00000005, func_432(unk_0x16F2683693E537C9(), iParam0), func_431(unk_0x16F2683693E537C9(), iParam0), 0x00000000);
		func_439(unk_0xD803B885F5E47A62(), iParam0);
		unk_0xF8918B9BC7ADC372(unk_0xD803B885F5E47A62(), func_441(unk_0x16F2683693E537C9(), iParam0));
		if ((iParam1 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && unk_0x36C584991B4C183F(unk_0x16F2683693E537C9(), 0x00000005) != 0x00000000)
		{
			func_427(unk_0xD803B885F5E47A62(), 0xFFFFFFFF, 0xFFFFFFFF);
		}
	}
}

int func_431(int iParam0, int iParam1)
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

var func_432(int iParam0, int iParam1)
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
		Global_12B38 = func_433(iParam0, iParam1);
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

int func_433(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
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
	iVar4 = unk_0x4F4B24509D6989D0(iParam0, 0x00000008, unk_0x36C584991B4C183F(iParam0, 0x00000008), unk_0xDADA8E1DD0D0D9D9(iParam0, 0x00000008));
	if (unk_0x1A5A491D253EA7BA(iVar4, 0x0E556105, 0x00000008))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x1A5A491D253EA7BA(iVar4, 0xA6A38444, 0x00000008))
			{
				return (0x00000002 + iVar3);
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 0x14E0E0C1, 0x00000008))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 0xCB1F4D3B, 0x00000008))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 0xB958A9AE, 0x00000008))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 0x815CB9B7, 0x00000008))
			{
				return func_438(iParam0, iParam1) + 15;
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
				return func_438(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 0xB958A9AE, 0x00000008))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (unk_0x1A5A491D253EA7BA(iVar4, 0x815CB9B7, 0x00000008))
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		return func_438(iParam0, iParam1);
	}
	if (func_437(iParam0))
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
				return func_438(iParam0, iParam1) + 15;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, 0xEDB71453, 0x00000000))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else if (unk_0x1A5A491D253EA7BA(iVar5, 0xFC84B1EE, 0x00000000))
			{
				return func_438(iParam0, iParam1) + 15;
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
			iVar6 = func_436(iVar5, 0x00000000);
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
						iVar0 = func_435(iVar5);
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
						iVar0 = func_435(iVar5);
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
			iVar7 = func_434(iVar5, 0x00000000);
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
					iVar0 = func_435(iVar5);
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
					return func_438(iParam0, iParam1) + 15;
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
				return func_438(iParam0, iParam1);
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
					return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x1D38296B, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1);
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
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xE843C053, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x524A5D78, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xEDB71453, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xFC84B1EE, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x65FF21D5, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x576B84AE, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x8AA9EB2A, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
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
				return func_438(iParam0, iParam1) + 15;
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
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xC970D2A1, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xDFE8FF91, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x807F40AF, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xE60A3052, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
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
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x14E0E0C1, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
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
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x6FE696CB, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
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
					return func_438(iParam0, iParam1) + 15;
				}
				else
				{
					return func_438(iParam0, iParam1) + 15;
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
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x47F86843, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA8827D94, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA8827D94, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
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
				return func_438(iParam0, iParam1) + 15;
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
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xC7FFFB13, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
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
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA8827D94, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
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
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xA8827D94, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0xC7FFFB13, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x1A5A491D253EA7BA(iVar5, 0x17B94D0E, 0x00000000))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1);
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
			iVar0 = func_435(iVar5);
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

int func_434(int iParam0, int iParam1)
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

int func_435(int iParam0)
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

int func_436(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	if (unk_0x1A5A491D253EA7BA(iParam0, 0xCC23B7A3, iParam1))
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

int func_437(int iParam0)
{
	if (unk_0x1A5A491D253EA7BA(unk_0x4F4B24509D6989D0(iParam0, 0x00000004, unk_0x36C584991B4C183F(iParam0, 0x00000004), unk_0xDADA8E1DD0D0D9D9(iParam0, 0x00000004)), 0x3EB5290F, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_438(int iParam0, int iParam1)
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

void func_439(int iParam0, int iParam1)
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

int func_440(var uParam0)
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

int func_441(int iParam0, int iParam1)
{
	return 0x00000000;
}

int func_442(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_16();
	}
	iVar1 = func_444(iParam0, iParam1);
	uVar2 = func_443(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_443(int iParam0)
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

int func_444(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_16();
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

bool func_445()
{
	return unk_0xC146D5FBD23C6954(0x55292CC7);
}

bool func_446()
{
	return unk_0xC146D5FBD23C6954(0xC40B8B70);
}

int func_447(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_204(iParam0);
}

void func_448()
{
	vector3 vVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	int iVar5;
	vector3 vVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	vector3 vVar11;
	float fVar12;
	
	if ((((!func_7(unk_0xD803B885F5E47A62()) && !func_162(unk_0xD803B885F5E47A62())) && !func_314()) && !func_460(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000)) && !func_459(unk_0xD803B885F5E47A62()))
	{
		if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			fVar4 = 2.147484E+09f;
			iVar5 = 0xFFFFFFFF;
			vVar6 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			bVar7 = func_5(Local_139.f_3);
			bVar8 = unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000);
			bVar9 = func_458();
			iVar2 = 0x00000000;
			while (iVar2 < 0x0000000A)
			{
				iVar10 = Local_139.f_43[iVar2 /*2*/].f_1;
				if (unk_0xE5DBF9B6126856CA(iVar10) && unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(iVar10), 0x00000000))
				{
					if (!bVar9 && bVar7)
					{
						if (bVar8 && unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000) == unk_0xB177666FAB6F4417(iVar10))
						{
							func_336(0x00000001);
						}
					}
					unk_0x5D96D8530B3D0904(&uVar3, iVar2);
					if (bVar7 && func_40(Local_139.f_3, iVar2, &vVar0, &uVar1))
					{
						vVar11 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(iVar10), 0x00000001) };
						if (SYSTEM::VDIST(vVar11, vVar0) <= 10f)
						{
							fVar12 = SYSTEM::VDIST(vVar11, vVar6);
							if (fVar12 < fVar4)
							{
								fVar4 = fVar12;
								iVar5 = iVar2;
							}
						}
					}
				}
				iVar2++;
			}
			if (func_41(Local_139.f_3))
			{
				unk_0x5D96D8530B3D0904(&uVar3, 0x0000001F);
			}
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_7 = uVar3;
			if (func_5(Local_139.f_3))
			{
				if ((unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()) || (unk_0xE934758D273C899A(unk_0x16F2683693E537C9()) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))) || func_17(0xFFFFFFFF, 0x00000000))
				{
					if ((fVar4 < 2.147484E+09f && iVar5 >= 0x00000000) && iVar5 < 0x0000000A)
					{
						if (func_40(Local_139.f_3, iVar5, &vVar0, &uVar1))
						{
							func_457(vVar0, 0f, 60f, 0x00000001, 20f, 0x00000000, 0x00000000, 10f, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0xBF800000);
							func_456(vVar0, 0x00000001, 0x00000000);
							func_450(0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0x5D96D8530B3D0904(&iLocal_110, 0x00000005);
						}
					}
				}
				else
				{
					func_449();
				}
			}
		}
	}
	else
	{
		func_449();
	}
}

void func_449()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x00000005))
	{
		func_170();
		func_168();
		unk_0x0674E58A79778E99(&iLocal_110, 0x00000005);
		func_167();
	}
}

void func_450(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2537E2.f_766.f_2BF.f_10 != func_102())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_2537E2.f_766.f_2BF.f_10 /*421*/].f_194, 0x00000000) && func_451())
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

int func_451()
{
	if ((((((func_219(unk_0xD803B885F5E47A62()) == 0x000000E5 || func_219(unk_0xD803B885F5E47A62()) == 0x000000BF) || func_455()) || func_454()) || func_355(unk_0xD803B885F5E47A62())) || Global_265BE2.f_E2 == 0x00000001) || (Global_24B2D0.f_6D1 && func_452(unk_0xD803B885F5E47A62())))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_452(int iParam0)
{
	if (func_453(iParam0))
	{
		return 0x00000001;
	}
	if (func_106(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_453(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000007);
	}
	return 0x00000000;
}

bool func_454()
{
	return Global_180605;
}

int func_455()
{
	if (Global_440000 == 0x00000006)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_456(vector3 vParam0, int iParam1, int iParam2)
{
	Global_24B2D0.f_2D.f_31 = { vParam0 };
	Global_24B2D0.f_2D.f_34 = iParam1;
	Global_24B2D0.f_2D.f_35 = iParam2;
}

void func_457(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 0x00000001;
	Var0.f_8 = 0x00000001;
	Var0.f_15 = 0x42820000;
	Var0.f_1B = 0xBF800000;
	if (unk_0x1727A44C562FBED2(Global_24D54B.f_6))
	{
		if (!Global_24D54B.f_6 == unk_0x0D0A574C76D769AC())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return;
	}
	if (!unk_0x1727A44C562FBED2(Global_24D54B.f_6))
	{
		Global_24D54B.f_6 = unk_0x0D0A574C76D769AC();
	}
	Var0.f_6 = Global_24D54B.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_A = 0x00000000;
	Var0.f_B = { 0f, 0f, 0f };
	Var0.f_E = { 0f, 0f, 0f };
	Var0.f_11 = 0f;
	Var0.f_15 = fParam7;
	Var0.f_16 = iParam8;
	if (func_385(unk_0xD803B885F5E47A62()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_17 = 0x00000001;
		}
		else
		{
			Var0.f_17 = 0x00000000;
		}
	}
	else
	{
		Var0.f_17 = 0x00000000;
	}
	if (Var0.f_15 < 1f)
	{
		Var0.f_15 = 1f;
	}
	Var0.f_18 = iParam9;
	Var0.f_1A = iParam10;
	Var0.f_1B = iParam12;
	Global_24D54B = { Var0 };
}

int func_458()
{
	if ((((((func_453(unk_0xD803B885F5E47A62()) || func_165()) || func_164()) || func_163(unk_0xD803B885F5E47A62(), 0x00000015)) || func_163(unk_0xD803B885F5E47A62(), 0x00000019)) || func_8(unk_0xD803B885F5E47A62())) || func_7(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_459(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000000E))
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000000B))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_460(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_184507[iParam0 /*876*/].f_112.f_1C > 0x00000000)
	{
		if (bParam1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000000))
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	if (!bParam2)
	{
		if (func_474(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam3)
	{
		if (func_298(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam4)
	{
		if (func_473(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam5)
	{
		if (func_472(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam6)
	{
		if (func_471(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam7)
	{
		if (func_470(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam8)
	{
		if (func_469(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam9)
	{
		if (func_468(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam10)
	{
		if (func_467(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam11)
	{
		if (func_466(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (!bParam12)
	{
		if (func_465(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam13)
	{
		if (func_464(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam14)
	{
		if (func_463(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam15)
	{
		if (func_462(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam16)
	{
		if (func_461(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_461(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000011;
			}
		}
	}
	return 0x00000000;
}

int func_462(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000010;
			}
		}
	}
	return 0x00000000;
}

int func_463(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000F;
			}
		}
	}
	return 0x00000000;
}

int func_464(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000E;
			}
		}
	}
	return 0x00000000;
}

int func_465(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000D;
			}
		}
	}
	return 0x00000000;
}

int func_466(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0x134B62B726CEC8E6(iVar0) == 0x897AFC65)
			{
				return 0x00000001;
			}
		}
	}
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_102())
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000C;
			}
		}
	}
	return 0x00000000;
}

int func_467(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_468(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_469(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_102())
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000008;
			}
		}
	}
	return 0x00000000;
}

int func_470(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000009;
			}
		}
	}
	return 0x00000000;
}

int func_471(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000007;
			}
		}
	}
	return 0x00000000;
}

int func_472(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000004;
			}
		}
	}
	return 0x00000000;
}

int func_473(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_474(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000000;
			}
		}
	}
	return 0x00000000;
}

void func_475(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	
	if (func_533())
	{
		if (bParam1)
		{
			iVar0 = unk_0x57270EE11514DC67();
			if (func_100(unk_0xD803B885F5E47A62()))
			{
				iVar1 = func_322();
				iVar2 = unk_0x83FACCC48B68F9D1(iVar1);
				if (unk_0x40B8C182D63932FC(iVar2))
				{
					iVar3 = unk_0x7B9C1F53FE442D06(iVar2);
					if (unk_0x81A93C8315C28F58(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0x00000000)
			{
				iVar4 = 0x00000000;
				while (iVar4 < func_532())
				{
					switch (Local_139.f_3)
					{
						case 0x0000000E:
							if (!func_370(iVar4) && !func_369(iVar4))
							{
								func_529("AMCH_BRIDGE", bParam0, iVar0, iVar4);
							}
							break;
					}
					iVar4++;
				}
			}
		}
	}
	if (func_43())
	{
		iVar5 = 0x00000000;
		while (iVar5 < 0x0000000A)
		{
			if (((!bParam0 && unk_0xE5DBF9B6126856CA(Local_139.f_43[iVar5 /*2*/].f_1)) && unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_139.f_43[iVar5 /*2*/].f_1), 0x00000000)) && unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_139.f_43[iVar5 /*2*/].f_1), 0xFFFFFFFF, 0x00000000))
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_132[iVar5]))
				{
					iLocal_132[iVar5] = unk_0x5C3B41825F6AC5A0(unk_0xA5FBBC2F619A4DE2(Local_139.f_43[iVar5 /*2*/].f_1));
					unk_0xBC8E0A7390523199(iLocal_132[iVar5], func_528(iVar5));
					unk_0x2A065371C9D96655(iLocal_132[iVar5], 0x00000009);
					unk_0xDC5B2F9D0CCE3A10(iLocal_132[iVar5], func_527(iVar5));
					func_525(&(iLocal_132[iVar5]), 0x00000009);
				}
				else
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						vVar6 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
						if (SYSTEM::VDIST(vVar6, unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_139.f_43[iVar5 /*2*/].f_1), 0x00000001)) <= 150f)
						{
							unk_0xF2D30B8ACAF12A39(iLocal_132[iVar5], 0x00000001);
						}
						else
						{
							unk_0xF2D30B8ACAF12A39(iLocal_132[iVar5], 0x00000000);
						}
					}
					func_476(iLocal_132[iVar5], 0x00000000, 0x44AF0000, 0x43C80000);
				}
			}
			else if (unk_0xE4EDC4B0E92C078B(iLocal_132[iVar5]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_132[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_476(int iParam0, int iParam1, float fParam2, float fParam3)
{
	unk_0x7F010F50CE03A8AF(iParam0, func_477(iParam0, iParam1, fParam2, fParam3));
}

int func_477(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (!func_524(Global_2537E2) && !func_81())
	{
		fVar0 = func_479(iParam0, fParam3, fParam2);
		if (iParam1 == 0x00000000)
		{
			iParam1 = func_478();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((0x000000FF - iParam1)) * fVar0)) + iParam1);
	}
	return 0x000000FF;
}

int func_478()
{
	if (func_388(Global_2537E2, 0x00000001))
	{
		return 0x00000032;
	}
	return 0x00000000;
}

float func_479(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = Global_2537E2;
	vVar2 = { func_523(iParam0) };
	vVar2.z = 0f;
	if (Global_1420C7 || func_519())
	{
		if (func_518(iVar0))
		{
			vVar3 = { func_482(iVar0) };
		}
		else if (func_481(iVar0))
		{
			vVar3 = { func_480(iVar0) };
		}
	}
	else
	{
		vVar3 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iVar0), 0x00000000) };
	}
	vVar3.z = 0f;
	fVar1 = SYSTEM::VMAG(vVar3 - vVar2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_480(int iParam0)
{
	int iVar0;
	
	if (func_481(iParam0))
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			return unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000);
		}
	}
	return 0f, 0f, 0f;
}

int func_481(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			iVar0 = unk_0x9539D44F3E4492F6(iParam0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				if (unk_0x5A91F08DF773C39D(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0x00000000, 0x00000001, 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

Vector3 func_482(int iParam0)
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
	
	if (iParam0 == func_102())
	{
	}
	if (func_517(iParam0))
	{
		iVar0 = func_516(iParam0);
		if (iVar0 != func_102())
		{
			if (!func_515(iVar0))
			{
				if (unk_0xC844350D5D58C99A(Global_2537E2.f_295[iVar0 /*3*/][0x00000001]))
				{
					return unk_0x68F4C0EC296D3901(Global_2537E2.f_295[iVar0 /*3*/][0x00000001], 0x00000000);
				}
				else
				{
					return Global_25033E[func_516(iParam0) /*421*/].f_136.f_9;
				}
			}
			else
			{
				iVar1 = func_511(iVar0);
				if (!iVar1 == 0xFFFFFFFF)
				{
					return Global_199459.f_1E8[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_510(iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_26B66F.f_131))
		{
			return unk_0x68F4C0EC296D3901(Global_26B66F.f_131, 0x00000000);
		}
	}
	else if (func_472(iParam0) && !func_509(iParam0))
	{
		iVar2 = Global_25033E[iParam0 /*421*/].f_136.f_8;
		if (iVar2 != func_102())
		{
			iVar3 = func_511(iVar2);
			if (!iVar3 == 0xFFFFFFFF)
			{
				return Global_199459.f_1E8[iVar3 /*3*/];
			}
		}
	}
	else if (func_470(iParam0) && !func_508(iParam0))
	{
		if (func_518(iParam0) && func_507())
		{
			return Global_199459.f_1E8[Global_25033E[iParam0 /*421*/].f_136.f_5 /*3*/];
		}
		iVar4 = Global_25033E[iParam0 /*421*/].f_136.f_8;
		if (iVar4 != func_102())
		{
			if (func_506(iVar4))
			{
				iVar5 = func_502(iVar4);
				if (iVar5 != 0xFFFFFFFF)
				{
					return Global_199459.f_1E8[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_469(iParam0))
	{
		iVar6 = func_501(iParam0);
		if (iVar6 != func_102())
		{
			if (!func_500(iVar6))
			{
				if (unk_0xC844350D5D58C99A(Global_2537E2.f_2F6[iVar6]))
				{
					return unk_0x68F4C0EC296D3901(Global_2537E2.f_2F6[iVar6], 0x00000000);
				}
				else
				{
					return Global_25033E[func_501(iParam0) /*421*/].f_136.f_10;
				}
			}
			else
			{
				iVar7 = func_502(iVar6);
				if (!iVar7 == 0xFFFFFFFF)
				{
					return Global_199459.f_1E8[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_499(iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_26B66F.f_133))
		{
			return unk_0x68F4C0EC296D3901(Global_26B66F.f_133, 0x00000000);
		}
	}
	else if (func_468(iParam0) && !func_498(iParam0))
	{
		iVar8 = Global_25033E[iParam0 /*421*/].f_136.f_8;
		if (iVar8 != func_102())
		{
			if (func_497(iVar8))
			{
				iVar9 = func_493(iVar8);
				if (iVar9 != 0xFFFFFFFF)
				{
					return func_492(iVar9);
				}
			}
		}
	}
	else if (func_467(iParam0) && !func_491(iParam0))
	{
		iVar10 = Global_25033E[iParam0 /*421*/].f_136.f_8;
		if (iVar10 != func_102())
		{
			if (func_490(iVar10))
			{
				iVar11 = func_486(iVar10);
				if (iVar11 != 0xFFFFFFFF)
				{
					return Global_199459.f_1E8[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_466(iParam0, 0x00000000))
	{
		iVar12 = func_485(iParam0);
		if (iVar12 != func_102())
		{
			if (!func_484(iVar12))
			{
				if (unk_0xC844350D5D58C99A(Global_2537E2.f_317[iVar12]))
				{
					return unk_0x68F4C0EC296D3901(Global_2537E2.f_317[iVar12], 0x00000000);
				}
				else
				{
					return Global_18D84D[func_485(iParam0) /*615*/].f_258;
				}
			}
			else
			{
				iVar13 = func_486(iVar12);
				if (!iVar13 == 0xFFFFFFFF)
				{
					return Global_199459.f_1E8[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_465(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	if (func_468(iParam0))
	{
		return func_492(Global_25033E[iParam0 /*421*/].f_136.f_5);
	}
	if (func_483(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_199459.f_1E8[Global_25033E[iParam0 /*421*/].f_136.f_5 /*3*/];
}

int func_483(int iParam0)
{
	if ((func_464(iParam0) || func_462(iParam0)) || func_463(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_484(int iParam0)
{
	if (iParam0 != func_102())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x00000004);
	}
	return 0x00000000;
}

int func_485(int iParam0)
{
	if (iParam0 == func_102())
	{
		return iParam0;
	}
	return Global_25033E[iParam0 /*421*/].f_136.f_8;
}

int func_486(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_102())
	{
		iVar0 = func_489(iParam0);
		if (iVar0 != 0x00000000)
		{
			return func_487(iVar0);
		}
	}
	return 0xFFFFFFFF;
}

int func_487(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000092)
	{
		if (func_299(iVar0) == 0x0000000B)
		{
			if (func_488(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_488(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000066:
			return 0x00000001;
		
		case 0x00000067:
			return 0x00000002;
		
		case 0x00000068:
			return 0x00000003;
		
		case 0x00000069:
			return 0x00000004;
		
		case 0x0000006A:
			return 0x00000005;
		
		case 0x0000006B:
			return 0x00000006;
		
		case 0x0000006C:
			return 0x00000007;
		
		case 0x0000006D:
			return 0x00000008;
		
		case 0x0000006E:
			return 0x00000009;
		
		case 0x0000006F:
			return 0x0000000A;
		
		default:
	}
	return 0x00000000;
}

int func_489(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_119;
	}
	return 0x00000000;
}

int func_490(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (Global_184507[iParam0 /*876*/].f_112.f_119 != 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_491(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_467(iParam0) && Global_25033E[iParam0 /*421*/].f_136.f_8 == iParam0)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_492(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000066:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 0x00000067:
			return 331.9f, -974.9f, 30f;
		
		case 0x00000068:
			return -146f, -1270f, 28.3088f;
		
		case 0x00000069:
			return -17.7f, 225.7f, 106.7566f;
		
		case 0x0000006A:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 0x0000006B:
			return -668f, -2431.5f, 12.9444f;
		
		case 0x0000006C:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 0x0000006D:
			return 366.6f, 237.6f, 104.9f;
		
		case 0x0000006E:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 0x0000006F:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_199459.f_1E8[iParam0 /*3*/];
}

int func_493(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_102())
	{
		iVar0 = func_496(iParam0);
		if (iVar0 != 0x00000000)
		{
			return func_494(iVar0);
		}
	}
	return 0xFFFFFFFF;
}

int func_494(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000092)
	{
		if (func_299(iVar0) == 0x0000000B)
		{
			if (func_495(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000066:
			return 0x00000001;
		
		case 0x00000067:
			return 0x00000002;
		
		case 0x00000068:
			return 0x00000003;
		
		case 0x00000069:
			return 0x00000004;
		
		case 0x0000006A:
			return 0x00000005;
		
		case 0x0000006B:
			return 0x00000006;
		
		case 0x0000006C:
			return 0x00000007;
		
		case 0x0000006D:
			return 0x00000008;
		
		case 0x0000006E:
			return 0x00000009;
		
		case 0x0000006F:
			return 0x0000000A;
		
		default:
	}
	return 0x00000000;
}

int func_496(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_142;
	}
	return 0x00000000;
}

int func_497(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_142 != 0x00000000;
	}
	return 0x00000000;
}

int func_498(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_468(iParam0) && Global_25033E[iParam0 /*421*/].f_136.f_8 == iParam0)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_499(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000A;
			}
		}
	}
	return 0x00000000;
}

int func_500(int iParam0)
{
	if (iParam0 != func_102())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_2, 0x00000006);
	}
	return 0x00000000;
}

int func_501(int iParam0)
{
	if (iParam0 == func_102())
	{
		return iParam0;
	}
	return Global_25033E[iParam0 /*421*/].f_136.f_8;
}

int func_502(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_102())
	{
		return 0xFFFFFFFF;
	}
	iVar0 = func_505(iParam0);
	if (!iVar0 == 0x00000000)
	{
		return func_503(iVar0);
	}
	return 0xFFFFFFFF;
}

int func_503(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000092)
	{
		if (func_299(iVar0) == 0x00000009)
		{
			if (func_504(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_504(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000059:
			return 0x00000001;
			break;
		
		case 0x0000005A:
			return 0x00000002;
			break;
		
		case 0x0000005B:
			return 0x00000003;
			break;
		
		case 0x0000005C:
			return 0x00000004;
			break;
		
		case 0x0000005D:
			return 0x00000005;
			break;
		
		case 0x0000005E:
			return 0x00000006;
			break;
		
		case 0x0000005F:
			return 0x00000007;
			break;
		
		case 0x00000060:
			return 0x00000008;
			break;
		
		case 0x00000061:
			return 0x00000009;
			break;
	}
	return 0x00000000;
}

int func_505(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_112.f_10F;
}

int func_506(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_10F != 0x00000000;
	}
	return 0x00000000;
}

int func_507()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_199459.f_2, 0x0000000D) || Global_199459.f_BC7)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_508(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0x00000000;
	}
	if (func_470(iParam0) && Global_25033E[iParam0 /*421*/].f_136.f_8 == iParam0)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_509(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0x00000000;
	}
	if (func_472(iParam0) && Global_25033E[iParam0 /*421*/].f_136.f_8 == iParam0)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_510(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000006;
			}
		}
	}
	return 0x00000000;
}

int func_511(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_102())
	{
		return 0xFFFFFFFF;
	}
	iVar0 = func_514(iParam0);
	if (!iVar0 == 0x00000000)
	{
		return func_512(iVar0);
	}
	return 0xFFFFFFFF;
}

int func_512(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000092)
	{
		if (func_513(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_513(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000016:
			return 0x00000001;
			break;
		
		case 0x00000017:
			return 0x00000002;
			break;
		
		case 0x00000018:
			return 0x00000003;
			break;
		
		case 0x00000019:
			return 0x00000004;
			break;
		
		case 0x0000001A:
			return 0x00000005;
			break;
		
		case 0x0000001B:
			return 0x00000006;
			break;
		
		case 0x0000001C:
			return 0x00000007;
			break;
		
		case 0x0000001D:
			return 0x00000008;
			break;
		
		case 0x0000001E:
			return 0x00000009;
			break;
		
		case 0x0000001F:
			return 0x0000000A;
			break;
		
		case 0x00000020:
			return 0x0000000B;
			break;
		
		case 0x00000021:
			return 0x0000000C;
			break;
		
		case 0x00000022:
			return 0x0000000D;
			break;
		
		case 0x00000023:
			return 0x0000000E;
			break;
		
		case 0x00000024:
			return 0x0000000F;
			break;
		
		case 0x00000025:
			return 0x00000010;
			break;
		
		case 0x00000026:
			return 0x00000011;
			break;
		
		case 0x00000027:
			return 0x00000012;
			break;
		
		case 0x00000028:
			return 0x00000013;
			break;
		
		case 0x00000029:
			return 0x00000014;
			break;
		
		case 0x00000046:
			return 0x00000015;
			break;
		
		case 0x00000047:
			return 0x00000016;
			break;
		
		case 0x00000048:
			return 0x00000017;
			break;
		
		case 0x00000049:
			return 0x00000018;
			break;
		
		case 0x0000004A:
			return 0x00000019;
			break;
		
		case 0x0000004B:
			return 0x0000001A;
			break;
		
		case 0x0000004C:
			return 0x0000001B;
			break;
		
		case 0x0000004D:
			return 0x0000001C;
			break;
		
		case 0x0000004E:
			return 0x0000001D;
			break;
		
		case 0x0000004F:
			return 0x0000001E;
			break;
		
		case 0x00000050:
			return 0x0000001F;
			break;
	}
	return 0x00000000;
}

int func_514(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_112.f_B7[0x00000005 /*12*/];
}

int func_515(int iParam0)
{
	if (iParam0 != func_102())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000006);
	}
	return 0x00000000;
}

int func_516(int iParam0)
{
	if (iParam0 == func_102())
	{
		return iParam0;
	}
	return Global_25033E[iParam0 /*421*/].f_136.f_8;
}

int func_517(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_102())
			{
				return func_299(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000005;
			}
		}
	}
	return 0x00000000;
}

int func_518(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_12(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

int func_519()
{
	if ((func_522() || func_521()) || func_520(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_520(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D38C[iParam0 /*38*/].f_1D, 0x00000014);
}

bool func_521()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C086, 0x00000001);
}

bool func_522()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

Vector3 func_523(int iParam0)
{
	int iVar0;
	
	switch (unk_0xDC7D2B8A563DB482(iParam0))
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			iVar0 = unk_0x63EC65B0F6B7C26F(iParam0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				return unk_0x68F4C0EC296D3901(iVar0, 0x00000000);
			}
			break;
	}
	return unk_0xAC14F6E4B17D7835(iParam0);
}

int func_524(int iParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_44.f_2, 0x00000009) && !(unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_44.f_2, 0x00000006) && unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_44.f_2, 0x00000007))) || ((unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_44.f_2, 0x00000006) && !unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_44.f_2, 0x00000007)) && !unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_44.f_2, 0x00000009)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_525(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(*uParam0))
	{
		iVar0 = func_526(iParam1);
		unk_0x61755AC17D8F538E(*uParam0, iVar0);
	}
}

int func_526(int iParam0)
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

char* func_527(int iParam0)
{
	if (unk_0xAFB8495D36825275(Local_139.f_43[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0xC41A9202669A24C4(Local_139.f_43[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x7D8B2A8F9EA82DB7(Local_139.f_43[iParam0 /*2*/]) && !unk_0xD1CC995EE5EB1EC1(Local_139.f_43[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_528(int iParam0)
{
	if (unk_0xAFB8495D36825275(Local_139.f_43[iParam0 /*2*/]))
	{
		return 0x00000040;
	}
	if (unk_0xC41A9202669A24C4(Local_139.f_43[iParam0 /*2*/]))
	{
		return 0x000001A7;
	}
	if (unk_0x7D8B2A8F9EA82DB7(Local_139.f_43[iParam0 /*2*/]) && !unk_0xD1CC995EE5EB1EC1(Local_139.f_43[iParam0 /*2*/]))
	{
		return 0x0000015C;
	}
	return 0x000000E1;
}

void func_529(char* sParam0, bool bParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_1505[iParam2 /*12*/].f_8[func_361(iParam3)], func_360(iParam3)) && !bParam1)
	{
		vVar0 = { func_531(iParam3) };
		if (!unk_0xE4EDC4B0E92C078B(iLocal_131[iParam3]))
		{
			if (!func_530(vVar0, 0f, 0f, 0f, 0x00000000) && !func_530(vVar0, 0f, 0f, -2000f, 0x00000000))
			{
				iLocal_131[iParam3] = unk_0x6CC513A908911CF0(vVar0);
				unk_0x2A065371C9D96655(iLocal_131[iParam3], 0x00000009);
				unk_0xDC5B2F9D0CCE3A10(iLocal_131[iParam3], sParam0);
				func_476(iLocal_131[iParam3], 0x00000019, 0x44AF0000, 0x43C80000);
				func_525(&(iLocal_131[iParam3]), 0x0000000C);
				unk_0xF2D30B8ACAF12A39(iLocal_131[iParam3], 0x00000001);
			}
		}
		else if (unk_0x798A3F1296751F46())
		{
			unk_0x7F010F50CE03A8AF(iLocal_131[iParam3], 0x000000FF);
		}
		else
		{
			func_476(iLocal_131[iParam3], 0x00000019, 0x44AF0000, 0x43C80000);
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(iLocal_131[iParam3]))
	{
		unk_0x142CC44DB769B57E(&(iLocal_131[iParam3]));
		if (!bParam1)
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0x00000000);
		}
	}
}

bool func_530(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_531(int iParam0)
{
	switch (Local_139.f_3)
	{
		case 0x0000000E:
			return vLocal_130[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_532()
{
	switch (Local_139.f_3)
	{
		case 0x0000000E:
			return 0x00000041;
		
		default:
	}
	return 0x00000000;
}

int func_533()
{
	switch (Local_139.f_3)
	{
		case 0x0000000E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_534()
{
	switch (Local_139.f_3)
	{
		case 0xFFFFFFFF:
			break;
		
		default:
			return 0x00000000;
	}
	return 0x00000000;
}

void func_535(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_313(0x00000000) == 0x00000000)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_216(sParam1))
	{
		sVar0 = sParam1;
	}
	func_143(uParam0, sVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
}

char* func_536(int iParam0)
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

int func_537(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_538(int iParam0)
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

int func_539(var uParam0, bool bParam1, bool bParam2)
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

void func_540(int iParam0)
{
	if (!unk_0x0178C60FEA5C5A75() && !unk_0x757EF87A33649210())
	{
		switch (iParam0)
		{
			case 0x00000000:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_133, iParam0))
				{
					if (!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0())
					{
						if (func_5(Local_139.f_3))
						{
							if (Local_139.f_3 == 0x0000000C)
							{
								func_295("AMCH_AIRAVI", 0x00007530);
							}
							else
							{
								func_295("AMCH_AIRAV", 0x00007530);
							}
						}
						else if (func_41(Local_139.f_3))
						{
							func_295("AMCH_BIKEAV", 0x00007530);
						}
						func_294(0x00000001);
						unk_0x5D96D8530B3D0904(&iLocal_133, iParam0);
					}
				}
				break;
			
			case 0x00000001:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_133, iParam0))
				{
					if (!unk_0x798A3F1296751F46())
					{
						func_295("AMCH_BLOW", 0x00007530);
						func_294(0x00000001);
						unk_0x5D96D8530B3D0904(&iLocal_133, iParam0);
					}
				}
				break;
			
			case 0x00000002:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_133, iParam0))
				{
					if (!unk_0x798A3F1296751F46() && !func_545(0x0000003F))
					{
						switch (Local_139.f_3)
						{
							case 0x0000000B:
							case 0x0000000C:
								if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
								{
									if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
									{
										func_295("AMCH_ALTI", 0x00007530);
										func_294(0x00000001);
										unk_0x5D96D8530B3D0904(&iLocal_133, iParam0);
									}
								}
								break;
							
							case 0x00000008:
								if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
								{
									func_295("AMCH_NMIS", 0x00007530);
									func_294(0x00000001);
									unk_0x5D96D8530B3D0904(&iLocal_133, iParam0);
								}
								break;
							
							case 0x00000001:
								if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
								{
									func_295("AMCH_FRFALL", 0xFFFFFFFF);
									func_294(0x00000001);
									unk_0x5D96D8530B3D0904(&iLocal_133, iParam0);
								}
								break;
							
							case 0x00000010:
							case 0x0000000F:
							case 0x00000012:
								if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
								{
									func_295("AMCH_PVPO1", 0xFFFFFFFF);
									func_294(0x00000001);
									unk_0x5D96D8530B3D0904(&iLocal_133, iParam0);
								}
								break;
							
							case 0x00000011:
								if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
								{
									func_295("AMCH_PVPO2", 0xFFFFFFFF);
									func_294(0x00000001);
									unk_0x5D96D8530B3D0904(&iLocal_133, iParam0);
								}
								break;
							
							case 0x00000004:
								if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
								{
									func_295("AMCH_WHEELIE", 0x00007530);
									func_294(0x00000001);
									unk_0x5D96D8530B3D0904(&iLocal_133, iParam0);
								}
								break;
							
							case 0x00000003:
								if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
								{
									func_295("AMCH_STOPPIE", 0x00007530);
									func_294(0x00000001);
									unk_0x5D96D8530B3D0904(&iLocal_133, iParam0);
								}
								break;
							
							case 0x0000000A:
								if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
								{
									func_295("AMCH_LFALL", 0x00007530);
									func_294(0x00000001);
									unk_0x5D96D8530B3D0904(&iLocal_133, iParam0);
								}
								break;
							
							case 0x00000006:
								if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
								{
									func_295("AMCH_LPARA", 0x00007530);
									func_294(0x00000001);
									unk_0x5D96D8530B3D0904(&iLocal_133, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 0x00000003:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_133, iParam0))
				{
					if ((!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0()) && !func_545(0x0000003F))
					{
						switch (Local_139.f_3)
						{
							case 0x0000000B:
							case 0x0000000C:
								if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
								{
									if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
									{
										if (func_1(&uLocal_104, 0x000003E8, 0x00000000))
										{
											func_295("AMCH_OCEAN", 0x00007530);
											func_294(0x00000001);
											func_46(&uLocal_104);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 0x00000005:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_133, iParam0))
				{
					if (!unk_0x798A3F1296751F46() && !func_545(0x0000003F))
					{
						switch (Local_139.f_3)
						{
							case 0x0000000B:
							case 0x0000000C:
								if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
								{
									if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
									{
										if (func_524(unk_0xD803B885F5E47A62()) && !func_542(unk_0xD803B885F5E47A62()))
										{
											func_295("AMCH_ALTIEXP", 0x00007530);
											func_294(0x00000001);
											unk_0x5D96D8530B3D0904(&iLocal_133, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 0x00000006:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_133, iParam0))
				{
					if ((!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0()) && !func_545(0x0000003F))
					{
						if (func_1(&uLocal_104, 0x000003E8, 0x00000000))
						{
							func_295("AMCH_FLYLOW", 0x00007530);
							func_294(0x00000001);
							func_46(&uLocal_104);
						}
					}
				}
				break;
			
			case 0x00000007:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_133, iParam0))
				{
					if (Local_139.f_3 == 0x00000007)
					{
						if (iLocal_134 == 0x00000000)
						{
							if ((!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0()) && !func_545(0x0000003F))
							{
								if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
								{
									func_295("AMCH_MVS1", 0x00007530);
									func_294(0x00000001);
									iLocal_134 = 0x00000001;
								}
							}
						}
						else if ((!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0()) && !func_545(0x0000003F))
						{
							if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
							{
								func_295("AMCH_MVS2", 0x00007530);
								func_294(0x00000001);
								unk_0x5D96D8530B3D0904(&iLocal_133, iParam0);
							}
						}
					}
					if (Local_139.f_3 == 0x0000000E)
					{
						if (iLocal_134 == 0x00000000)
						{
							if ((!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0()) && !func_545(0x0000003F))
							{
								if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
								{
									func_295("AMCH_BRBL", 0x00007530);
									func_294(0x00000001);
									iLocal_134 = 0x00000001;
								}
							}
						}
						else if ((!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0()) && !func_545(0x0000003F))
						{
							if (func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
							{
								func_295("AMCH_BRBL2", 0x00007530);
								func_294(0x00000001);
								unk_0x5D96D8530B3D0904(&iLocal_133, iParam0);
							}
						}
					}
				}
				break;
			
			case 0x00000009:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_133, iParam0))
				{
					if (!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0())
					{
						func_541("AMCH_WARN", func_394(Local_139.f_3), func_393(Local_139.f_3), 0x00007530);
						func_294(0x00000000);
						Local_1506.f_8 = unk_0xDD0E7998AE8AD485();
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0x00000000);
						unk_0x5D96D8530B3D0904(&iLocal_133, iParam0);
					}
				}
				break;
			}
	}
}

void func_541(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x6B012227B3921E18(sParam2);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam3);
}

bool func_542(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_F1.f_88[func_544(0x00000009) /*33*/][iParam0], func_543(0x00000009));
}

int func_543(int iParam0)
{
	return (iParam0 % 0x00000020);
}

int func_544(int iParam0)
{
	return (iParam0 / 0x00000020);
}

bool func_545(int iParam0)
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == iParam0;
}

void func_546(int iParam0)
{
	Local_1505[unk_0x57270EE11514DC67() /*12*/].f_3 = iParam0;
}

void func_547(bool bParam0)
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

int func_548(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_572(unk_0xD803B885F5E47A62(), 0x0000001D))
	{
		return 0x00000000;
	}
	if (func_163(unk_0xD803B885F5E47A62(), 0x00000015))
	{
		return 0x00000000;
	}
	if (func_163(unk_0xD803B885F5E47A62(), 0x00000019))
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
	if (func_349(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_571())
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		if (func_570(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (func_569())
	{
		return 0x00000000;
	}
	if (bParam0)
	{
		if (func_106(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	else if (func_562(unk_0xD803B885F5E47A62()) == 0x00000003)
	{
		return 0x00000000;
	}
	if (func_561(unk_0xD803B885F5E47A62()) != func_102() && func_561(unk_0xD803B885F5E47A62()) == func_88(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_560(func_289()) && !func_343(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_559())
	{
		return 0x00000000;
	}
	if (func_314())
	{
		return 0x00000000;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0x00000000;
	}
	if (func_351(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!func_557())
	{
		return 0x00000000;
	}
	if (func_163(unk_0xD803B885F5E47A62(), 0x00000000) || func_163(unk_0xD803B885F5E47A62(), 0x00000003))
	{
		return 0x00000000;
	}
	if ((func_163(unk_0xD803B885F5E47A62(), 0x0000000C) || func_163(unk_0xD803B885F5E47A62(), 0x0000000E)) || func_163(unk_0xD803B885F5E47A62(), 0x0000000D))
	{
		return 0x00000000;
	}
	if (func_556(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (!func_522() && !Global_265A4F)
		{
			return 0x00000000;
		}
	}
	if (func_555(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_554())
	{
		return 0x00000000;
	}
	if (Global_195C36)
	{
		return 0x00000000;
	}
	if (func_386(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_553())
	{
		return 0x00000000;
	}
	if (func_551(unk_0xD803B885F5E47A62()) && Global_1843A8.f_AB)
	{
		return 0x00000000;
	}
	if (func_550())
	{
		return 0x00000000;
	}
	if (func_355(unk_0xD803B885F5E47A62()))
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
	if (!func_453(unk_0xD803B885F5E47A62()))
	{
		if (func_549(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_549(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_19FCF7[iVar0 /*13*/].f_C != 0x00000000;
	}
	return 0x00000000;
}

bool func_550()
{
	return Global_199459.f_1DA;
}

int func_551(int iParam0)
{
	if (func_552(Global_184507[iParam0 /*876*/].f_112.f_1C))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_552(int iParam0)
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

int func_553()
{
	if (Global_40EB30.f_3AF > 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_554()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_555(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000000B);
}

int func_556(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_102())
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

int func_557()
{
	if (func_558() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_558()
{
	return Global_1406D3.f_12;
}

bool func_559()
{
	return Global_14086D;
}

int func_560(int iParam0)
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

int func_561(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_23;
}

int func_562(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 0x00000002;
	bVar1 = ((func_387(iParam0) && !func_8(iParam0)) && !unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000008));
	bVar2 = func_106(iParam0);
	uVar3 = func_165();
	uVar4 = func_563();
	if ((bVar1 && (func_453(iParam0) || func_413(iParam0))) || uVar4)
	{
		iVar0 = 0x00000000;
	}
	else if (uVar3 || ((!bVar2 && !func_108(iParam0)) && !func_300(iParam0)))
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

int func_563()
{
	if ((func_107(unk_0xD803B885F5E47A62(), 0x00000015) || func_107(unk_0xD803B885F5E47A62(), 0x00000016)) || func_567())
	{
		return 0x00000001;
	}
	if (func_565())
	{
		func_564(0x00000016);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_564(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

int func_565()
{
	if (func_112(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (((func_165() && !func_164()) || func_163(unk_0xD803B885F5E47A62(), 0x00000015)) || func_163(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			return 0x00000001;
		}
		else
		{
			func_566(0x0000001B);
		}
	}
	return 0x00000000;
}

void func_566(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

int func_567()
{
	return func_568(0x00000166, 0xFFFFFFFF);
}

int func_568(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_203(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

bool func_569()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000005;
}

int func_570(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_105.f_4 != 0x00000000 || Global_25033E[iParam0 /*421*/].f_105.f_5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_571()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x00000000);
}

bool func_572(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_5, iParam1);
}

void func_573()
{
	func_574(&(Local_160.f_216), &Local_160, 0x0000001B, &(Local_160.f_1), &(Local_160.f_75), Local_139.f_3, 0x00000000, 0x00000000);
}

void func_574(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
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
	
	if (func_684(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 0xFFFFFFFF;
	iVar12 = 0xFFFFFFFF;
	iVar14 = 0x00000000;
	iVar15 = 0x00000000;
	uParam3->f_24 = 0x00000000;
	if (func_682() || iParam2 == 0x0000001C)
	{
		if (func_637(iParam1, iParam2, uParam3, Global_180529, 0x00000000, func_685(), sParam7))
		{
			func_636(0x00000001);
			if ((!func_635() && !func_634()) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001))
			{
				if (func_633())
				{
					func_632();
				}
				else
				{
					unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
					if (uParam3->f_1B == 0x00000000)
					{
						func_631(0x00000001);
						Global_180529 = 0x00000000;
						iVar19 = 0xFFFFFFFF;
						if (Global_180606 != 0x00000001)
						{
							func_630(iParam1, 0x00000000, 0x00000000);
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
								if (func_12(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
									if (!func_14(iVar3, 0x00000000))
									{
										if ((func_629(iVar3) || Global_25033E[iVar3 /*421*/].f_EC != 0xFFFFFFFF) || func_628(iVar3))
										{
											iVar9 = iVar3;
											if (func_90(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_625(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_109(unk_0xD803B885F5E47A62(), 0x00000000) && func_219(unk_0xD803B885F5E47A62()) != 0x000000BC)
						{
							bVar2 = iVar0 > 0x00000000;
						}
						iVar17 = 0x00000000;
						while (iVar17 < 0x00000020)
						{
							if (func_624())
							{
								if (func_12(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
								}
								else
								{
									iVar3 = func_102();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_623(iVar3) && func_620(iVar3, iParam2)) && func_12(iVar3, 0x00000000, 0x00000001))
							{
								iVar9 = iVar3;
								iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
								Var6 = { func_615(iVar3) };
								if (iVar3 == unk_0xD803B885F5E47A62())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x6E524813889AECF8(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_137(iVar3) };
								iVar5 = func_609(iVar3);
								sVar4 = "";
								if (iVar5 != 0x00000000)
								{
									sVar4 = unk_0x5283D58F79627134(iVar5);
								}
								Global_180529++;
								if ((uParam0[iVar17 /*42*/])->f_16 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_16;
								}
								if ((uParam0[iVar17 /*42*/])->f_1F != 0xFFFFFFFF)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_1F;
								}
								if ((uParam0[iVar17 /*42*/])->f_29 != 0xFFFFFFFF)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_29;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != 0xFFFFFFFF || (uParam0[iVar17 /*42*/])->f_16 != -1f) || (uParam0[iVar17 /*42*/])->f_1F != 0xFFFFFFFF)
								{
									if (!func_624())
									{
										iVar15 = 0x00000001;
									}
								}
								if (iParam5 != 0xFFFFFFFF)
								{
									func_607(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_283(iParam5, 0x00000001, 0x00000000, 0x00000000), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = 0xFFFFFFFE;
									}
								}
								iVar16 = func_606(iVar3, 0x00000000);
								if (bVar2)
								{
									if (func_89(iVar3, 0x00000001) && iVar1[iVar9] != 0xFFFFFFFF)
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
								if ((uParam0[iVar17 /*42*/])->f_27 != 0xFFFFFFFF)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_27, 16);
								}
								if (func_605(iParam5))
								{
									func_604(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_604(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
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
							if (func_12(iVar3, 0x00000000, 0x00000001) && !unk_0xEAE0D21A50E6C7F4(iVar14, iVar3))
							{
								iVar3 = unk_0x117658E336116132(iVar17);
							}
							else
							{
								iVar3 = func_102();
							}
							if (func_623(iVar3))
							{
								if (func_12(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar9 = iVar3;
									iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
									Var6 = { func_615(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_137(iVar3) };
									iVar5 = func_609(iVar3);
									sVar4 = "";
									if (iVar5 != 0x00000000)
									{
										sVar4 = unk_0x5283D58F79627134(iVar5);
									}
									Global_180529++;
									iVar16 = func_606(iVar3, 0x00000001);
									if (bVar2)
									{
										if (func_89(iVar3, 0x00000001))
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
									func_587(iVar3, unk_0x6E524813889AECF8(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000B))
						{
							func_584(uParam3, iParam1, iParam2);
						}
						func_46(&(uParam3->f_15));
						func_583();
						uParam3->f_1B = 0x00000002;
					}
					if (uParam3->f_1B == 0x00000002)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000007))
						{
							func_582(uParam3, iParam1);
							func_581(iParam1, 0x00000000, 0x00000001);
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 0x00000007);
						}
						func_582(uParam3, iParam1);
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000B))
						{
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 0x0000000B);
						}
						if (func_577(uParam3))
						{
							Global_180606 = 0x00000001;
						}
						func_575(uParam3);
						if (Global_180606 == 0x00000001)
						{
							uParam3->f_1B = 0x00000000;
						}
						if (Global_180606 == 0x00000002)
						{
							uParam3->f_1B = 0x00000000;
						}
					}
					if (unk_0x83D8570832F172A7(*iParam1))
					{
						unk_0xD9ACBBA59FD5A09E(0x00000007);
						unk_0xEF45C43067063F18(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
						unk_0xD9ACBBA59FD5A09E(0x00000004);
					}
				}
			}
		}
		else
		{
			uParam3->f_1B = 0x00000000;
			func_583();
			func_631(0x00000000);
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

void func_575(var uParam0)
{
	if (!func_47(&(uParam0->f_15)))
	{
		func_2(&(uParam0->f_15), 0x00000000, 0x00000000);
	}
	else if (func_1(&(uParam0->f_15), 0x000000FA, 0x00000000))
	{
		func_46(&(uParam0->f_15));
		func_576(0x00000000);
	}
}

void func_576(bool bParam0)
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

int func_577(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0x00000000;
	iVar0 = uParam0->f_25;
	iVar3 = unk_0x117658E336116132(uParam0->f_25);
	if (iVar3 != func_102() && func_12(iVar3, 0x00000000, 0x00000001))
	{
		Var2 = { func_137(iVar3) };
		iVar1 = func_580(uParam0, uParam0->f_25);
		if (func_579(Var2))
		{
			switch (iVar1)
			{
				case 0x00000000:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 0x00000001;
							func_578(uParam0, iVar0, 0x00000002);
						}
					}
					else if (unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 0x00000001;
						func_578(uParam0, iVar0, 0x00000001);
					}
					break;
				
				case 0x00000002:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 0x00000001;
							func_578(uParam0, iVar0, 0x00000000);
						}
					}
					else
					{
						iVar4 = 0x00000001;
						func_578(uParam0, iVar0, 0x00000000);
					}
					break;
				
				case 0x00000001:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x74684D5E87B13DBD(&Var2))
						{
							iVar4 = 0x00000001;
							func_578(uParam0, iVar0, 0x00000000);
						}
					}
					else if (!unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 0x00000001;
						func_578(uParam0, iVar0, 0x00000000);
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

void func_578(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_579(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 0x0000000D);
}

var func_580(var uParam0, int iParam1)
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_581(int iParam0, bool bParam1, int iParam2)
{
	if (unk_0x7E60C62A7CE58FC8(*iParam0, "COLLAPSE"))
	{
		unk_0x1200CC973A2399C8(bParam1);
		unk_0x7E60D21B163E9D56();
	}
	if (iParam2 == 0x00000001)
	{
		if (unk_0x7E60C62A7CE58FC8(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0x7E60D21B163E9D56();
		}
	}
}

void func_582(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x0000000A))
	{
		unk_0x7E60C62A7CE58FC8(*iParam1, "SET_HIGHLIGHT");
		unk_0x3CAEA85DA607305E(uParam0->f_23);
		unk_0x7E60D21B163E9D56();
		unk_0x5D96D8530B3D0904(&(uParam0->f_21), 0x0000000A);
	}
}

void func_583()
{
	if (Global_180606 != 0x00000000)
	{
		Global_180606 = 0x00000000;
	}
}

void func_584(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (iVar2 != func_102())
		{
			if (func_12(iVar2, 0x00000000, 0x00000001))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 0xFFFFFFFF)
				{
					iVar1 = func_586(uParam0->f_26[iVar0 /*2*/], 0x00000000, iParam2);
					func_585(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_184507[iVar0 /*876*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_585(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_586(int iParam0, bool bParam1, int iParam2)
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

void func_587(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_603() && iParam4 < func_602())
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
		if (unk_0x7E60C62A7CE58FC8(*iParam2, sVar1))
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000008) || uParam3->f_6C == 0x00000006)
			{
				func_601("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(iParam10);
			}
			func_601(sParam1);
			unk_0x3CAEA85DA607305E(iParam11);
			if (uParam3->f_6C == 0x00000006)
			{
				func_601("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(0x00000041);
			}
			unk_0x3CAEA85DA607305E(0xFFFFFFFF);
			func_601("");
			if (uParam3->f_6C == 0x00000006)
			{
				func_601("");
			}
			else
			{
				func_601(&sParam5);
			}
			func_592(uParam3, iParam0);
			unk_0x024BC5F58A72410C(sParam9);
			unk_0x024BC5F58A72410C(sParam9);
			if (func_591(uParam3))
			{
				func_590("DPAD_FRIEND");
			}
			else if (func_589(uParam3))
			{
				func_590("DPAD_FRIEND");
			}
			else if (func_588(uParam3))
			{
				func_590("DPAD_CREW");
			}
			else
			{
				func_590("");
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

bool func_588(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x00000006);
}

bool func_589(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x00000005);
}

void func_590(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_591(var uParam0)
{
	if (func_589(uParam0) && func_588(uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_592(var uParam0, int iParam1)
{
	if (func_600(iParam1))
	{
		unk_0x3CAEA85DA607305E(0x00000079);
	}
	else if (func_596(iParam1))
	{
		unk_0x3CAEA85DA607305E(0x0000007A);
	}
	else if (((unk_0xEAE0D21A50E6C7F4(Global_440000.f_1B, 0x0000000F) && iParam1 > 0xFFFFFFFF) && iParam1 < 0x00000020) && unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam1 /*421*/].f_19D, 0x00000000))
	{
		unk_0x3CAEA85DA607305E(0x0000007B);
	}
	else
	{
		if (func_593())
		{
			uParam0->f_24 = 0x00000000;
		}
		unk_0x1200CC973A2399C8(uParam0->f_24);
	}
}

int func_593()
{
	if (unk_0xA14BB9332558B949())
	{
		if (func_594() || func_94())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_594()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_94();
	}
	return func_595(Global_440000.f_2F9AE);
}

int func_595(int iParam0)
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

int func_596(int iParam0)
{
	if ((func_12(iParam0, 0x00000000, 0x00000001) && func_597()) && func_257(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_597()
{
	if (func_387(unk_0xD803B885F5E47A62()) || func_599())
	{
		if (!func_598(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_598(int iParam0)
{
	if (func_320(iParam0) == 0x000000EC || func_320(iParam0) == 0x00000096)
	{
		return func_453(iParam0);
	}
	return 0x00000000;
}

int func_599()
{
	switch (func_219(unk_0xD803B885F5E47A62()))
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

int func_600(int iParam0)
{
	if (func_593())
	{
		if (func_12(iParam0, 0x00000000, 0x00000001))
		{
			return func_90(iParam0);
		}
	}
	if ((func_12(iParam0, 0x00000000, 0x00000001) && func_597()) && func_259(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_601(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_602()
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

int func_603()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (Global_18052B)
	{
		iVar0 = 0x00000010;
	}
	return iVar0;
}

void func_604(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_603() && iParam3 < func_602())
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
		if (unk_0x83D8570832F172A7(*iParam1))
		{
			if (unk_0x7E60C62A7CE58FC8(*iParam1, sVar1))
			{
				unk_0x3CAEA85DA607305E(iParam3);
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0x00000008) || uParam2->f_6C == 0x00000006)
				{
					func_601("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(iParam9);
				}
				if (uParam2->f_6C == 0x00000006 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					func_590(sParam16);
				}
				else
				{
					func_601(&(uParam2->f_1));
				}
				unk_0x3CAEA85DA607305E(iParam11);
				if (uParam2->f_6C == 0x00000006)
				{
					func_601("");
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
				if (func_624())
				{
					func_601("");
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
						func_590(&(uParam2->f_68));
					}
					else
					{
						func_601("");
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
					func_601("");
				}
				if (uParam2->f_6C == 0x00000006)
				{
					func_601("");
				}
				else
				{
					func_601(&sParam4);
				}
				func_592(uParam2, iParam0);
				if (iParam12 == 0x00000001 || unk_0xEA6BC48857E0AC4C(sParam8))
				{
					func_601("");
					func_601("");
				}
				else
				{
					unk_0x024BC5F58A72410C(sParam8);
					unk_0x024BC5F58A72410C(sParam8);
				}
				if (func_591(uParam2))
				{
					func_590("DPAD_FRIEND");
				}
				else if (func_589(uParam2))
				{
					func_590("DPAD_FRIEND");
				}
				else if (func_588(uParam2))
				{
					func_590("DPAD_CREW");
				}
				else
				{
					func_590("");
				}
				unk_0x7E60D21B163E9D56();
			}
		}
	}
}

int func_605(int iParam0)
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

int func_606(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000074;
	if ((!bParam1 && func_387(iParam0)) && !func_106(iParam0))
	{
		iVar0 = func_66();
	}
	iVar1 = func_87(iParam0);
	if (!iVar1 == 0xFFFFFFFF)
	{
		return func_85(iVar1);
	}
	return iVar0;
}

int func_607(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_608(iParam3))
	{
		*fParam1 = (func_285(iParam3, iParam2) / 10f);
		return 0x00000001;
	}
	if (func_605(iParam3))
	{
		*fParam1 = (func_285(iParam3, iParam2) / 1000f);
		return 0x00000001;
	}
	*uParam0 = iParam2;
	return 0x00000000;
}

int func_608(int iParam0)
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

int func_609(int iParam0)
{
	int iVar0;
	
	iVar0 = func_612(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		func_610(iParam0, 0x00000001);
		return 0x00000000;
	}
	Global_153216[iVar0 /*5*/].f_4 = 0x00000001;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_610(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_612(iParam0) != 0xFFFFFFFF)
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
	if (func_611(iParam0))
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

int func_611(int iParam0)
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

int func_612(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0x00000000, 0x00000001))
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
			func_613(iVar0);
			return 0xFFFFFFFF;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_613(int iParam0)
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
	func_614(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 0x00000001);
}

void func_614(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = func_102();
	uParam0->f_2 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

struct<4> func_615(int iParam0)
{
	char cVar0[32];
	
	if (func_12(iParam0, 0x00000000, 0x00000001))
	{
		Global_265942 = { func_137(iParam0) };
		if (unk_0xDC30EF462887322E())
		{
			if (func_579(Global_265942))
			{
				if (!unk_0x5B9BB2932920F9CD(&Global_265942))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0x4DEB7B48DD0AABA4(0x00000000))
		{
			return cVar0;
		}
		if (func_619(&Global_265942))
		{
			Global_2658FC = { func_617(iParam0) };
			func_616(&Global_2658FC, &cVar0);
		}
	}
	return cVar0;
}

void func_616(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 0x00000023, sParam1);
}

struct<35> func_617(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_618(iParam0))
	{
		return Global_14088D[unk_0xD803B885F5E47A62() /*35*/];
	}
	Var0 = { func_137(iParam0) };
	unk_0xD9DA83C40D038174(&Var1, 0x00000023, &Var0);
	return Var1;
}

int func_618(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_619(var uParam0)
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

int func_620(int iParam0, int iParam1)
{
	if (iParam1 == 0x0000001B)
	{
		if ((func_8(iParam0) || func_622(iParam0)) || func_7(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_621(iParam0))
	{
		return 0x00000000;
	}
	if ((!func_629(iParam0) && Global_25033E[iParam0 /*421*/].f_EC == 0xFFFFFFFF) && !func_628(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_621(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_8E, 0x00000016);
}

int func_622(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return (unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x0000000A) || unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000009));
	}
	return 0x00000000;
}

int func_623(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_102())
	{
		return 0x00000000;
	}
	if (func_14(iParam0, 0x00000000))
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

int func_624()
{
	switch (func_219(unk_0xD803B885F5E47A62()))
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
	switch (func_320(unk_0xD803B885F5E47A62()))
	{
		case 0x00000083:
		case 0x0000008C:
		case 0x0000008A:
		case 0x00000092:
			return 0x00000001;
			break;
	}
	if (func_106(unk_0xD803B885F5E47A62()))
	{
		switch (func_219(unk_0xD803B885F5E47A62()))
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
	if (func_598(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_625(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (func_12(unk_0x117658E336116132(iVar0), 0x00000000, 0x00000001))
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (!func_14(iVar1, 0x00000000))
			{
				if ((func_629(iVar1) || Global_25033E[iVar1 /*421*/].f_EC != 0xFFFFFFFF) || func_628(iVar1))
				{
					if (func_626(iVar1, iParam1, 0x00000000))
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

int func_626(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_102())
	{
		if (!bParam2)
		{
			if (func_627(iParam0, iParam1))
			{
				return 0x00000000;
			}
		}
		if (Global_18D84D[iParam0 /*615*/].f_B != func_102())
		{
			return iParam1 == Global_18D84D[iParam0 /*615*/].f_B;
		}
	}
	return 0x00000000;
}

int func_627(int iParam0, int iParam1)
{
	if (iParam1 != func_102())
	{
		if (iParam0 != func_102())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B != func_102())
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

bool func_628(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4 != 0x00000000;
}

int func_629(int iParam0)
{
	if (func_12(iParam0, 0x00000000, 0x00000001))
	{
		if (func_12(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000001))
		{
			if (unk_0xF816C4B5324CB295(iParam0, unk_0xD803B885F5E47A62()) || func_219(iParam0) == 0x000000E9)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_630(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x7E60D21B163E9D56();
	}
}

void func_631(bool bParam0)
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

void func_632()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001))
	{
		if (func_301())
		{
			func_288();
		}
	}
}

int func_633()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000000) && func_301())
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001) && func_301())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_634()
{
	if (func_301())
	{
		if (func_54(Global_2537E2.f_AA3[0x00000000 /*80*/].f_1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_635()
{
	if (func_301())
	{
		if (func_67(Global_2537E2.f_AA3[0x00000000 /*80*/].f_1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_636(int iParam0)
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

int func_637(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 0x00000014;
	bVar3 = func_681(iParam1);
	fVar4 = func_680();
	iVar5 = 0xFFFFFFFF;
	if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
	{
		if (func_679())
		{
			if (func_678() > 0x00000000 && Global_18052B)
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
		if (!func_667())
		{
			func_666(iParam0, uParam2, 0x00000001);
			return 0x00000000;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001A))
	{
		func_666(iParam0, uParam2, 0x00000001);
		return 0x00000000;
	}
	if (!func_47(&(uParam2->f_13)))
	{
		if (func_678() == 0x00000001)
		{
			func_665(bVar3, iParam0, 0x00000000);
			func_2(&(uParam2->f_13), 0x00000000, 0x00000000);
			func_666(iParam0, uParam2, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11F0), 0x00000005);
		}
	}
	if (func_47(&(uParam2->f_13)) || bParam5)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xE19C2AAC820D8ED5();
		}
		unk_0x3584F71E5CA29322(0x0000000A);
		if (func_1(&(uParam2->f_13), 0x00002710, 0x00000000) || (func_678() == 0x00000000 && !bParam5))
		{
			func_666(iParam0, uParam2, 0x00000001);
			return 0x00000000;
		}
		else
		{
			if (bVar2 == 0x00000000)
			{
				func_664();
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
					func_664();
					if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
					{
						unk_0xB8E3919889462ACD();
					}
					unk_0x3584F71E5CA29322(0x00000012);
				}
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (func_665(bVar3, iParam0, 0x00000000))
				{
					func_630(iParam0, 0x00000000, 0x00000000);
					sVar1 = func_662(iParam1, &(Global_440000.f_2F9B5), bParam4);
					Var0 = { func_660(iParam1) };
					if (bParam4)
					{
						func_657(iParam0, sVar1, "", 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
					}
					else if (iParam1 == 0x0000001B)
					{
						func_651(iParam0, func_654(uParam2), func_652(uParam2), 0xFFFFFFFF);
					}
					else if (iParam1 == 0x0000001C)
					{
						sVar6 = func_645(uParam2);
						if (!unk_0xEA6BC48857E0AC4C(sParam6))
						{
							sVar6 = sParam6;
						}
						func_643(iParam0, sVar6, func_644(), 0xFFFFFFFF);
					}
					else if (func_593())
					{
						uParam2->f_22 = Global_18052A;
						func_657(iParam0, sVar1, &Var0, 0x00000001, 0xFFFFFFFF, Global_18052A, 0x00000001);
					}
					else if (bVar2)
					{
						iVar5 = func_638(iParam1);
						uParam2->f_22 = Global_18052A;
						func_657(iParam0, sVar1, "", 0x00000000, iVar5, Global_18052A, 0x00000001);
					}
					else
					{
						iVar5 = func_638(iParam1);
						func_657(iParam0, sVar1, &Var0, 0x00000001, iVar5, 0xFFFFFFFF, 0x00000001);
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

int func_638(int iParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	if (func_642())
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
			if (func_641(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 0x00000014;
			}
			if (func_640(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 0x00000013;
			}
			break;
	}
	if (func_639(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 0x00000002;
	}
	if (func_220())
	{
		iVar0 = 0x00000014;
	}
	return iVar0;
}

bool func_639(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000004;
}

bool func_640(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

bool func_641(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_642()
{
	return Global_440000.f_1 == 0x00000000;
}

void func_643(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_590(sParam1);
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_590("");
		if (iParam3 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_644()
{
	switch (func_219(unk_0xD803B885F5E47A62()))
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

char* func_645(var uParam0)
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
	switch (func_219(unk_0xD803B885F5E47A62()))
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
			if (func_647())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 0x00000097:
			if (func_256(0x00000001))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 0x00000098:
			return "PIM_MAGM204";
			break;
		
		case 0x00000099:
			if (func_256(0x00000001))
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
			if (func_646(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B5))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_646(int iParam0)
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

bool func_647()
{
	return (func_650() && func_648(func_649()));
}

int func_648(int iParam0)
{
	return func_259(iParam0, 0x00000001);
}

int func_649()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23;
}

bool func_650()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000094;
}

void func_651(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_590(sParam1);
		}
		else if (func_320(unk_0xD803B885F5E47A62()) == 0x00000085)
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
		func_590("");
		if (iParam3 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_652(var uParam0)
{
	int iVar0;
	
	iVar0 = func_320(unk_0xD803B885F5E47A62());
	if (func_653())
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
			switch (func_319())
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

bool func_653()
{
	return Global_184488;
}

char* func_654(var uParam0)
{
	int iVar0;
	
	iVar0 = func_320(unk_0xD803B885F5E47A62());
	if (func_653())
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
			if (func_656() == 0x00000000)
			{
				return "CPC_TILEL";
			}
			else if (func_656() == 0x00000001)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 0x00000085:
			switch (func_319())
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
			if (func_655() == 0x00000001)
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

int func_655()
{
	return Global_26B66F.f_13B8;
}

int func_656()
{
	if (func_320(unk_0xD803B885F5E47A62()) == 0x00000084)
	{
		return Global_26B66F.f_13B3;
	}
	return 0xFFFFFFFF;
}

void func_657(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_601(sParam1);
		}
		else if (iParam5 != 0xFFFFFFFF)
		{
			unk_0x7ACC3006A87F8B39(sParam1);
			unk_0x6D99DF8263D35CE5(iParam5);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_590(sParam1);
		}
		if (func_679() && iParam6)
		{
			if (func_659())
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
			func_590(sParam2);
		}
		if (iParam4 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (func_658(unk_0xD803B885F5E47A62()))
			{
				unk_0x3CAEA85DA607305E(0x000000A6);
			}
			else if (func_64())
			{
				unk_0x3CAEA85DA607305E(0x000000DC);
			}
		}
		unk_0x7E60D21B163E9D56();
	}
}

int func_658(int iParam0)
{
	if (func_641(iParam0) || func_640(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_659()
{
	return Global_18052B;
}

struct<4> func_660(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_661(unk_0xD803B885F5E47A62()) || func_639(unk_0xD803B885F5E47A62()))
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
	if (func_593() && unk_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_CC, 16);
	}
	return Var0;
}

bool func_661(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000005;
}

char* func_662(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 0x00000014 && (!func_593() || unk_0xEA6BC48857E0AC4C(sParam1)))
	{
		uVar0 = func_663();
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

char* func_663()
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

void func_664()
{
	Global_A56F = 0x00000001;
}

bool func_665(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_matchmaking_card");
	}
	return unk_0x83D8570832F172A7(*iParam1);
}

void func_666(int iParam0, var uParam1, bool bParam2)
{
	unk_0x0674E58A79778E99(&(uParam1->f_21), 0x00000007);
	Global_180529 = 0x00000000;
	func_583();
	Global_180528 = 0x00000000;
	uParam1->f_1B = 0x00000000;
	if (bParam2)
	{
		if (func_47(&(uParam1->f_13)))
		{
			func_46(&(uParam1->f_13));
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11F0), 0x00000005);
		}
	}
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0xE17FDF9E3068281B(iParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam1->f_21, 0x00000000))
	{
		unk_0x0674E58A79778E99(&(uParam1->f_21), 0x00000000);
	}
	unk_0xD668DA5CA4A1D2C8(0f);
}

int func_667()
{
	if (func_677())
	{
		return 0x00000000;
	}
	if (func_569())
	{
		return 0x00000000;
	}
	if (!func_675())
	{
		return 0x00000000;
	}
	if (!func_557())
	{
		return 0x00000000;
	}
	if (func_674(0x00000008, 0xFFFFFFFF))
	{
		return 0x00000000;
	}
	if (func_678() == 0x00000002)
	{
		return 0x00000000;
	}
	if (Global_26B66F.f_11BF)
	{
		return 0x00000000;
	}
	if (func_314())
	{
		return 0x00000000;
	}
	else if (!func_350(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && Global_1403E4[0x00000000 /*4*/] > 0x00000000)
	{
		return 0x00000000;
	}
	if (((func_673(0x00000001) || func_671(0x00000001)) || Global_56C3.f_7C) || Global_56C3)
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (func_670() && Global_19DEEC == 0x00000002)
	{
		return 0x00000000;
	}
	if (func_100(unk_0xD803B885F5E47A62()) && !func_670())
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
	if (func_669(0x00000000))
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
	if (func_668(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if ((Global_14E899 || Global_14E89A) || Global_14E89B)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_668(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_4, 0x00000006);
}

bool func_669(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_2D, iParam0);
}

bool func_670()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 0x0000000C) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0x00000000));
}

int func_671(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_672(unk_0x16F2683693E537C9()))
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

int func_672(int iParam0)
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

bool func_673(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

bool func_674(int iParam0, int iParam1)
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

int func_675()
{
	if (func_676())
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

bool func_676()
{
	return Global_1406B8;
}

bool func_677()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_678()
{
	return Global_150392.f_44;
}

int func_679()
{
	if (Global_18052A > 0x00000010)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_680()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_681(int iParam0)
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

int func_682()
{
	if (func_685())
	{
		return 0x00000001;
	}
	if (func_7(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_653())
	{
		return 0x00000001;
	}
	if (func_387(unk_0xD803B885F5E47A62()))
	{
		switch (func_320(unk_0xD803B885F5E47A62()))
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
				if (!func_683(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000081:
				if (!func_683(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x000000AE:
				if (!func_683(unk_0xD803B885F5E47A62()))
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

bool func_683(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000004);
}

int func_684(int iParam0)
{
	if (iParam0 == 0x0000001C)
	{
		if ((func_387(unk_0xD803B885F5E47A62()) && !func_106(unk_0xD803B885F5E47A62())) && !func_598(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
	}
	if (iParam0 == 0x0000001B)
	{
		if (func_112(unk_0xD803B885F5E47A62(), 0x00000000) && func_106(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
		if (func_562(unk_0xD803B885F5E47A62()) == 0x00000003)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_685()
{
	if (func_686(unk_0xD803B885F5E47A62()))
	{
		return Global_1420BD;
	}
	return 0x00000000;
}

int func_686(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_14(iParam0, 0x00000000))
		{
			return unk_0xB9BE6EF14AC6F8DE(iParam0);
		}
	}
	return 0x00000000;
}

void func_687()
{
	if (Local_1505[unk_0x57270EE11514DC67() /*12*/].f_3 == 0x00000003)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x00000008))
		{
			if ((!func_7(unk_0xD803B885F5E47A62()) && !func_162(unk_0xD803B885F5E47A62())) && !func_400(unk_0xD803B885F5E47A62()))
			{
				func_399();
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x00000009))
		{
			if ((func_7(unk_0xD803B885F5E47A62()) || func_162(unk_0xD803B885F5E47A62())) || func_400(unk_0xD803B885F5E47A62()))
			{
				unk_0xD09557189D8C2FB1();
				Local_1505[unk_0x57270EE11514DC67() /*12*/].f_4 = 0x00000000;
				unk_0x5D96D8530B3D0904(&iLocal_110, 0x00000009);
			}
		}
	}
}

void func_688()
{
	int iVar0;
	
	if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_114)))
	{
		iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_114));
		if (unk_0x40B8C182D63932FC(iVar0))
		{
			func_689(iVar0, 0x00000002);
		}
	}
	iLocal_114++;
	if (iLocal_114 >= unk_0x54EABC0DD106045B())
	{
		iLocal_114 = 0x00000000;
	}
}

void func_689(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000000))
	{
		return;
	}
	if (func_47(&(Global_1806FA.f_12)))
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_2, iParam0))
	{
		if (Global_1806FA < iParam1 && unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000000);
			return;
		}
		if (Global_1806FA != 0x00000000)
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000001);
		}
		Global_1806FA = 0x00000000;
		Global_1806FA.f_2 = 0x00000000;
	}
	unk_0x5D96D8530B3D0904(&(Global_1806FA.f_2), iParam0);
	bVar0 = 0x00000001;
	if (func_8(iParam0))
	{
		bVar0 = 0x00000000;
	}
	if (func_690(iParam0))
	{
		bVar0 = 0x00000000;
	}
	if (func_14(iParam0, 0x00000000))
	{
		bVar0 = 0x00000000;
	}
	if (func_7(iParam0))
	{
		bVar0 = 0x00000000;
	}
	if (bVar0)
	{
		Global_1806FA++;
	}
}

bool func_690(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x0000000A);
}

void func_691(int iParam0, int iParam1)
{
	Local_1505[iParam0 /*12*/] = iParam1;
}

int func_692()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		Local_160.f_216[iVar0 /*42*/].f_1 = func_102();
		iVar0++;
	}
	return 0x00000001;
}

int func_693()
{
	return Local_139;
}

int func_694(int iParam0)
{
	return Local_1505[iParam0 /*12*/];
}

void func_695()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000006))
	{
		func_718();
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000006);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000007))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000004) || unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000010))
		{
			if (((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_301()) && func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000007);
				func_295("FME_PASINT", 0x00007530);
				func_294(0x00000001);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000011))
		{
			if (func_165() && !func_164())
			{
				unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000011);
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000010);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000017))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000002)) && func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && !Global_12061) && !Global_E545) && !unk_0xFEBC1E4EC9E001F0())
		{
			if (func_716())
			{
				func_295("AMEV_GA_RP", 0xFFFFFFFF);
				if (func_219(unk_0xD803B885F5E47A62()) != 0x000000C8)
				{
					func_294(0x00000001);
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000017);
			}
		}
	}
	if (unk_0x798A3F1296751F46() && unk_0x8BB17FEBE0394018() == 0x0000000F)
	{
		if (func_413(unk_0xD803B885F5E47A62()))
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
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_301()) && func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && !func_163(unk_0xD803B885F5E47A62(), 0x00000015)) && !func_163(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000009);
			func_715(0x00000000);
			func_295("FME_TBL00", 0xFFFFFFFF);
			func_294(0x00000001);
		}
	}
	if (func_387(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000012))
		{
			if ((func_163(unk_0xD803B885F5E47A62(), 0x00000015) && unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000014)) && !unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000013))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000012);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000012))
		{
			if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_301()) && func_12(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && unk_0x0F1CCD77290EE12F()) && !Global_26B66F.f_13C1)
			{
				unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000012);
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000013);
				func_295("AMTT_RPAS", 0xFFFFFFFF);
				func_294(0x00000001);
			}
		}
	}
	if (((((func_387(unk_0xD803B885F5E47A62()) && !func_8(unk_0xD803B885F5E47A62())) && func_320(unk_0xD803B885F5E47A62()) != 0x00000092) && !func_7(unk_0xD803B885F5E47A62())) && !func_162(unk_0xD803B885F5E47A62())) && !func_705())
	{
		if (func_412(func_320(unk_0xD803B885F5E47A62())))
		{
			unk_0x25A1F489CCEE528A(unk_0xD803B885F5E47A62());
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000016))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000016);
		}
		if (func_453(unk_0xD803B885F5E47A62()) || func_406())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000A))
			{
				if (func_704(func_320(unk_0xD803B885F5E47A62())))
				{
					if (func_263(0x00000000) && !Global_247C05)
					{
						unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000009);
					}
					if (!Global_247C05)
					{
						func_410(0x00000001);
						unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000E);
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000A);
			}
		}
		if (func_413(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000B))
			{
				if (!Global_181EC.f_8)
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000C);
					func_408(0x00000001);
				}
				if (!func_703())
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000D);
					func_407();
				}
				if (!Global_247C05)
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000E);
					if (func_263(0x00000000) && !Global_247C05)
					{
						unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000009);
					}
					func_410(0x00000001);
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000B);
			}
		}
		else
		{
			func_701(0x00000000);
		}
	}
	else
	{
		func_701(0x00000001);
	}
	func_696();
	if (func_405(func_320(unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000015))
	{
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000015);
	}
	if (((func_165() && !func_164()) || func_163(unk_0xD803B885F5E47A62(), 0x00000015)) || func_163(unk_0xD803B885F5E47A62(), 0x00000019))
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

void func_696()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_301())
	{
		iVar2 = 0x0000003F;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000053)
		{
			if (func_545(iVar2))
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
				func_697(iVar0, iVar1);
				iVar2 = 0x00000053;
			}
			iVar2++;
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000001A))
	{
		func_46(&(Global_1806FA.f_16));
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000001A);
	}
}

void func_697(int iParam0, int iParam1)
{
	if (!func_47(&(Global_1806FA.f_16)))
	{
		func_2(&(Global_1806FA.f_16), 0x00000000, 0x00000000);
	}
	else if (func_1(&(Global_1806FA.f_16), iParam1, 0x00000000))
	{
		if (func_678() > 0x00000000)
		{
			func_700(iParam0);
			if (func_292("AMEV_LBD_HELP"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			func_46(&(Global_1806FA.f_16));
		}
	}
	else
	{
		func_699(0x00000000);
		func_698();
	}
}

void func_698()
{
	Global_26B66F.f_11B4 = 0x00000000;
}

void func_699(int iParam0)
{
	Global_150392.f_44 = iParam0;
}

void func_700(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000003)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			func_103(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
		}
		iVar0++;
	}
}

void func_701(int iParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000B) || (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000A) && iParam0)) || (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000016) && iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000C))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000C);
			func_408(0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000D))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000D);
			func_702();
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000E) && !func_112(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000E);
			func_410(0x00000000);
		}
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000B);
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000A);
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000016);
	}
}

void func_702()
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1362), 0x00000000);
}

bool func_703()
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1362, 0x00000000);
}

int func_704(int iParam0)
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
			return func_413(unk_0xD803B885F5E47A62());
		
		case 0x00000085:
			return (func_406() || func_5(func_319()));
		
		default:
	}
	return 0x00000000;
}

int func_705()
{
	if (((((((((func_714() || func_713()) || func_712()) || func_314()) || (func_711() && !unk_0xA14BB9332558B949())) || (func_708() && !func_707())) || Global_248A6D) || Global_248A6D.f_1 != 0x00000000) || Global_248AB7 != 0x00000000) || (func_706() == 0x00000002 && !unk_0xA14BB9332558B949()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_706()
{
	return Global_EC6CD;
}

bool func_707()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000001B);
}

int func_708()
{
	if (func_710() || func_709())
	{
		return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_62 == 0x00000008;
	}
	return 0x00000000;
}

var func_709()
{
	return Global_2564C8.f_27B;
}

bool func_710()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000000B);
}

bool func_711()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000005);
}

bool func_712()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000002);
}

bool func_713()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000014);
}

bool func_714()
{
	return Global_2564C8.f_256;
}

void func_715(int iParam0)
{
	int iVar0;
	
	iVar0 = func_207(0x000009E6, 0xFFFFFFFF, 0x00000000);
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
	func_198(0x000009E6, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
}

int func_716()
{
	int iVar0;
	
	if (!func_47(&(Global_1806FA.f_F)))
	{
		func_2(&(Global_1806FA.f_F), 0x00000000, 0x00000000);
		Global_1806FA.f_11 = 0x00000000;
	}
	else if (func_1(&(Global_1806FA.f_F), 0x000003E8, 0x00000000))
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Global_1806FA.f_11)))
		{
			iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Global_1806FA.f_11));
			if (unk_0x40B8C182D63932FC(iVar0))
			{
				if (func_12(iVar0, 0x00000001, 0x00000001) && func_717(iVar0, 0x00000006))
				{
					if (SYSTEM::VDIST(func_38(unk_0xD803B885F5E47A62()), func_38(iVar0)) < 80f)
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
			func_46(&(Global_1806FA.f_F));
		}
	}
	return 0x00000000;
}

int func_717(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_389() != 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_202(iParam0))
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

void func_718()
{
	unk_0x34D79252800B23FF(0x00000005);
	func_720();
	unk_0x51B096AAC60548C1(1f);
	unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000008);
	func_719();
}

void func_719()
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

void func_720()
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

int func_721()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_26B66F.f_1360)
	{
		return 0x00000000;
	}
	if ((!func_47(&(Local_139.f_27)) && !func_47(&(Local_139.f_29))) && !func_47(&(Local_139.f_2B)))
	{
		return 0x00000000;
	}
	iVar2 = unk_0x2B6E0A53779D29EA();
	if (func_47(&(Local_139.f_29)))
	{
		iVar0 = func_722(&iVar2, &(Local_139.f_29));
		iVar1 = 0x00004E20;
	}
	else if (func_47(&(Local_139.f_27)))
	{
		iVar0 = func_722(&iVar2, &(Local_139.f_27));
		iVar1 = func_28(0x00000000);
	}
	else if (func_47(&(Local_139.f_2B)))
	{
		iVar0 = func_722(&iVar2, &(Local_139.f_2B));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 0x000493E0);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_722(int iParam0, var uParam1)
{
	return unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(*iParam0, *uParam1));
}

int func_723()
{
	if (func_724())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_724()
{
	return Global_1806FA.f_18;
}

int func_725()
{
	var uVar0;
	
	func_729(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_728())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_727())
	{
		return 0x00000001;
	}
	if (func_726(0x0000009F))
	{
		if (!func_714())
		{
			return 0x00000001;
		}
	}
	if (func_726(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_415() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_415()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_726(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_727()
{
	return Global_258C08;
}

bool func_728()
{
	return Global_2564C8.f_251;
}

void func_729(var uParam0)
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
					func_730(iVar0);
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

void func_730(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_12(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_731(iVar2, &bVar3))
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

int func_731(int iParam0, var uParam1)
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

void func_732()
{
	SYSTEM::WAIT(0x00000000);
}

void func_733()
{
	int iVar0;
	
	if (func_725())
	{
		Local_1506.f_5 = 0x00000005;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_139.f_2, 0x00000000))
	{
		Local_1506.f_5 = 0x00000006;
	}
	else if (func_20(0x00000000))
	{
		Local_1506.f_5 = 0x00000001;
	}
	else
	{
		Local_1506.f_5 = 0x00000002;
	}
	Local_1506 = Local_139.f_34;
	Local_1506.f_1 = Local_139.f_35;
	Local_1506.f_4 = Local_139.f_42;
	Local_1506.f_3 = Local_139.f_33;
	Local_1506.f_A = (unk_0xDD0E7998AE8AD485() - Local_1506.f_9);
	if (!Global_40001.f_2CEC)
	{
		if (Local_1506.f_6 > 0x00000000)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 0x00000001;
	}
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0x57270EE11514DC67() != 0xFFFFFFFF)
		{
			func_769(Local_1506, Local_139.f_3, Local_1505[unk_0x57270EE11514DC67() /*12*/].f_4, iVar0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x00000004))
	{
		unk_0x55D0A2DB35045A35(iLocal_118);
		unk_0x0674E58A79778E99(&iLocal_110, 0x00000004);
	}
	unk_0x43A06902454A1172(iLocal_118);
	unk_0x43A06902454A1172(iLocal_119);
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iLocal_135, iVar0) && iLocal_136[iVar0] != 0xFFFFFFFF) && !unk_0x8AA6DC470ABA63A2(iLocal_136[iVar0]))
		{
			unk_0x55D0A2DB35045A35(iLocal_136[iVar0]);
			unk_0x43A06902454A1172(iLocal_136[iVar0]);
		}
		iVar0++;
	}
	func_396();
	func_475(0x00000001, 0x00000001);
	unk_0x921B659AAEB55BCA(0x00000000);
	func_547(0x00000000);
	func_403(Local_139.f_3, 0x00000000);
	func_734(0x00000085, 0x00000000, Local_139.f_25 == 0x00000006);
	func_402(0x00000017, 0x00000000);
	if (func_306() >= 0f)
	{
		unk_0xF5637CC664BEAAD0(0f, 0x00000000, 0x00000015);
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_110, 0x00000009))
	{
		unk_0xD09557189D8C2FB1();
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_734(int iParam0, bool bParam1, bool bParam2)
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
	func_765();
	unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
	unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000000);
	if (bParam1)
	{
		uVar0 = func_764(func_320(unk_0xD803B885F5E47A62()));
		func_402(func_421(iParam0), 0x00000000);
	}
	else
	{
		if ((bParam2 && unk_0xD803B885F5E47A62() != 0xFFFFFFFF) && func_763(unk_0xD803B885F5E47A62()) >= 0x0000000C)
		{
			func_762(0x000009F2, 0xFFFFFFFF);
			iVar1 = func_207(0x000009F2, 0xFFFFFFFF, 0x00000000);
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
		func_761();
		func_760();
		func_759();
		if ((!func_108(unk_0xD803B885F5E47A62()) && !func_300(unk_0xD803B885F5E47A62())) && !func_454())
		{
			func_743();
		}
		func_742();
		if (!unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000001))
		{
			func_718();
		}
		func_741();
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6D2), 0x00000002);
		func_740();
		func_167();
	}
	if (unk_0x70305AA977EFE679(0x502431FB))
	{
		unk_0x64366F76B4845277(0x502431FB);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0xD803B885F5E47A62() != 0xFFFFFFFF && !func_163(unk_0xD803B885F5E47A62(), 0x00000015)) && !func_163(unk_0xD803B885F5E47A62(), 0x00000019)) && !func_112(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			func_410(0x00000000);
			func_408(0x00000000);
			if (!bParam1)
			{
				func_739();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_50(0x0000001A, 0xFFFFFFFF))
		{
			Global_259486 = 0xFFFFFFFF;
			func_48(0x0000001A, 0xFFFFFFFF);
		}
	}
	if (!func_735())
	{
		Global_2658D5 = 0x00000001;
	}
}

int func_735()
{
	if ((((((!func_658(unk_0xD803B885F5E47A62()) && !func_639(unk_0xD803B885F5E47A62())) && func_320(unk_0xD803B885F5E47A62()) != 0x00000092) && !func_738()) && !func_737()) && !func_736(Global_440000.f_38DB3)) && !func_92())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_736(int iParam0)
{
	return iParam0 == 0x00000039;
}

int func_737()
{
	if (Global_440000.f_2F9AE == Global_40001.f_257C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_738()
{
	if ((Global_440000 == 0x00000000 && unk_0xA14BB9332558B949()) && (((((((Global_440000.f_5 != 0x00000000 || Global_440000.f_38DB3 > 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x0000000F)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000012)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000013)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x0000001D)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x0000001C)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_5, 0x00000017)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_739()
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

void func_740()
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

void func_741()
{
	struct<25> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_15 = 0xFFFFFFFF;
	Global_1806FA = { Var0 };
}

void func_742()
{
	var uVar0;
	
	Global_1420BD = uVar0;
}

void func_743()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_18), &Global_24C36F, 0x00000002);
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_1A), &Global_24C371, 0x00000013);
	func_757();
	func_746(0x00000001, 0x00000001, 0x00000000);
	func_744();
}

void func_744()
{
	func_745(0x00000000, 0x00000000);
}

void func_745(int iParam0, int iParam1)
{
	Global_24B2D0.f_16 = iParam0;
	Global_24B2D0.f_17 = iParam1;
}

void func_746(bool bParam0, bool bParam1, bool bParam2)
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
		func_756();
	}
	if (!bParam2)
	{
		func_748(0x00000000, 0x00000001, 0x00000000, 0x3F333333, 0x40C00000, 0x3F800000, 0x40E00000, 0x40A00000, 0x00000000, 0x3F8CCCCD, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x42200000);
	}
	func_747(0x00000000);
	func_170();
}

void func_747(bool bParam0)
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

void func_748(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_755())
		{
			func_754();
		}
		Global_24B2D0.f_2C2.f_206 = unk_0x0D0A574C76D769AC();
		Global_24B2D0.f_2C2.f_1F8 = iParam1;
		Global_24B2D0.f_2C2.f_1F9 = iParam2;
		Global_24B2D0.f_2C2.f_1FA = iParam10;
		func_752();
		func_450(0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
		func_749();
	}
}

void func_749()
{
	if (func_755() && !func_751())
	{
		func_754();
	}
	if (func_751())
	{
		func_750();
	}
	else
	{
		func_752();
		func_450(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		Global_24B2D0.f_6D1 = 0x00000000;
		Global_24B2D0.f_6D0 = 0x00000000;
	}
}

void func_750()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2C2), &(Global_24B2D0.f_4C9), 0x00000207);
	Global_24B2D0.f_1E7 = { Global_24B2D0.f_1ED };
	if (unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		Global_24B2D0.f_6D0 = 0x00000000;
	}
}

int func_751()
{
	if ((Global_24B2D0.f_6D0 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_4C9.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_4C9.f_206))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_752()
{
	if (func_755() && !func_751())
	{
		func_754();
	}
	func_753();
	Global_24B2D0.f_2C2 = 0x00000000;
}

void func_753()
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

void func_754()
{
	if (func_751())
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

int func_755()
{
	if ((Global_24B2D0.f_6D1 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_2C2.f_206))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_756()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_16D), &Global_24C4C4, 0x00000079);
}

void func_757()
{
	func_758();
	Global_24B2D0.f_8CE = 0x00000000;
}

void func_758()
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

void func_759()
{
	Global_26B66F.f_1362 = 0x00000000;
}

void func_760()
{
	if (unk_0xD803B885F5E47A62() != 0xFFFFFFFF)
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1 = 0x00000000;
	}
}

void func_761()
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if (iVar0 != 0xFFFFFFFF)
	{
		Global_18D84D[iVar0 /*615*/] = 0xFFFFFFFF;
	}
}

void func_762(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_207(iParam0, func_203(iParam1), 0x00000000);
	iVar0++;
	if (!func_206(iParam0))
	{
		func_198(iParam0, iVar0, iParam1, 0x00000001, 0x00000000);
	}
	else
	{
		func_199(iParam0, iVar0, iParam1, 0x00000001);
	}
}

int func_763(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_D3.f_6;
}

int func_764(int iParam0)
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
			if (func_413(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_765()
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
	func_768(0x00000000);
	func_767(0x00000000);
	func_766(0x00000000);
}

void func_766(int iParam0)
{
	if (Global_26B66F.f_11A8 != iParam0)
	{
		Global_26B66F.f_11A8 = iParam0;
	}
}

void func_767(bool bParam0)
{
	if (Global_26B66F.f_11A7 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_26B66F.f_11A7 = bParam0;
	}
}

void func_768(int iParam0)
{
	if (Global_26B66F.f_11A5 != iParam0)
	{
		Global_26B66F.f_11A5 = iParam0;
	}
}

void func_769(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		else if (unk_0x7F8A39872A07D2CE(sVar0, func_770()))
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

char* func_770()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_771(struct<21> Param0)
{
	int iVar0;
	
	func_780(func_781(Param0), Param0);
	unk_0x3A4967AE7C71F999(func_779(0x00000009));
	unk_0x28E5F00F131890E3(func_778(0x00000009));
	func_775(0x00000000, 0xFFFFFFFF, 0x00000000);
	func_773(0x00000085);
	unk_0x9752E7BAEABA939E(&Local_139, 0x00000058);
	unk_0x35B62793EAE9ADDF(&Local_1505, 0x00000181);
	if (!func_772())
	{
		func_733();
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		unk_0xCB466C2A425A9168(&(Local_139.f_34), &(Local_139.f_35));
	}
	Local_1506.f_2 = unk_0x981819F6C45DDB49();
	unk_0x256D93AFAE851A7A(0x00000000);
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		iLocal_136[iVar0] = 0xFFFFFFFF;
		iVar0++;
	}
	return 0x00000001;
}

int func_772()
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
		if (func_728())
		{
			return 0x00000000;
		}
		if (func_726(0x0000009D))
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

void func_773(int iParam0)
{
	func_741();
	func_774();
	func_759();
	Global_1806FA.f_4 = iParam0;
	Global_1806FA.f_5 = iParam0;
	func_420(iParam0, 0xFFFFFFFF);
	func_27(&(Global_1806FA.f_12), 0x00000000, 0x00000000);
	Global_26B66F.f_11EC = 0x00000000;
	Global_259033[0x00000000] = func_102();
	Global_259033[0x00000001] = func_102();
	Global_259033[0x00000002] = func_102();
	Global_259033[0x00000003] = func_102();
	Global_259033[0x00000004] = func_102();
	func_167();
	if (!func_560(func_289()))
	{
		func_288();
	}
	if (func_165() && !func_164())
	{
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000010);
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000011);
	}
}

void func_774()
{
	var uVar0;
	
	Global_180713 = uVar0;
}

int func_775(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_777();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_776())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_777();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_728())
				{
					if (!bParam2)
					{
						func_777();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_726(0x0000009D))
				{
					if (!bParam2)
					{
						func_777();
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
					func_777();
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
				func_777();
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
			func_777();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_776()
{
	return Global_140856;
}

void func_777()
{
	unk_0x10FAF14A60A0DBE1();
}

int func_778(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000001;
		
		case 0x00000001:
			return 0x00000001;
		
		case 0x00000002:
			return 0x00000001;
		
		case 0x00000003:
			return 0x00000001;
		
		case 0x00000004:
			return 0x00000001;
		
		case 0x00000005:
			return 0x00000001;
		
		case 0x00000006:
			return 0x00000000;
		
		case 0x00000007:
			return 0x00000001;
		
		case 0x00000008:
			return 0x0000000A;
		
		case 0x00000009:
			return 0x0000000A;
		
		case 0x0000000A:
			return 0x00000001;
		
		case 0x0000000B:
			return 0x00000006;
		
		case 0x0000000C:
			return 0x00000000;
		
		case 0x0000000D:
			return 0x00000001;
		
		case 0x0000000E:
			return 0x00000000;
		
		case 0x0000000F:
			return 0x00000000;
		
		case 0x00000010:
			return 0x00000000;
		
		case 0x00000011:
			return 0x00000000;
		
		case 0x00000012:
			return 0x00000000;
		
		case 0x00000013:
			return 0x00000000;
		
		case 0x00000014:
			return 0x00000000;
		
		default:
	}
	return 0x00000000;
}

int func_779(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
		
		case 0x00000001:
			return 0x00000003;
		
		case 0x00000002:
			return 0x00000001;
		
		case 0x00000003:
			return 0x00000000;
		
		case 0x00000004:
			return 0x00000000;
		
		case 0x00000005:
			return 0x00000000;
		
		case 0x00000006:
			return 0x00000000;
		
		case 0x00000007:
			return 0x00000000;
		
		case 0x00000008:
			return 0x00000000;
		
		case 0x00000009:
			return 0x00000000;
		
		case 0x0000000A:
			return 0x00000000;
		
		case 0x0000000B:
			return 0x00000000;
		
		case 0x0000000C:
			return 0x00000000;
		
		case 0x0000000D:
			return 0x00000000;
		
		case 0x0000000E:
			return 0x00000001;
		
		case 0x0000000F:
			return 0x00000001;
		
		case 0x00000010:
			return 0x00000000;
		
		case 0x00000011:
			return 0x00000000;
		
		case 0x00000012:
			return 0x00000000;
		
		case 0x00000013:
			return 0x00000000;
		
		case 0x00000014:
			return 0x00000000;
		
		default:
	}
	return 0x00000000;
}

void func_780(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_777();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_781(int iParam0)
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

