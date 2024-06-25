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
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
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
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	struct<3> Local_106 = { 0, 0, 0 } ;
	struct<3> Local_107[65];
	float fLocal_108 = 0f;
	struct<3> Local_109 = { 0, 0, 0 } ;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_112 = { 0, 0, 0 } ;
	float fLocal_113 = 0f;
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
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	float fLocal_134 = 0f;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	bool bLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	bool bLocal_147 = 0;
	struct<3> Local_148[65];
	var uLocal_149[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_150[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 0;
	int iLocal_154[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	struct<68> Local_157 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<535> Local_178 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_179 = -1;
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
	var uLocal_201 = -1082130432;
	var uLocal_202 = 3;
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
	var uLocal_218 = -1;
	var uLocal_219 = 0;
	var uLocal_220 = -1;
	var uLocal_221 = -1;
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
	var uLocal_243 = -1082130432;
	var uLocal_244 = 3;
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
	var uLocal_260 = -1;
	var uLocal_261 = 0;
	var uLocal_262 = -1;
	var uLocal_263 = -1;
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
	var uLocal_285 = -1082130432;
	var uLocal_286 = 3;
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
	var uLocal_302 = -1;
	var uLocal_303 = 0;
	var uLocal_304 = -1;
	var uLocal_305 = -1;
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
	var uLocal_327 = -1082130432;
	var uLocal_328 = 3;
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
	var uLocal_344 = -1;
	var uLocal_345 = 0;
	var uLocal_346 = -1;
	var uLocal_347 = -1;
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
	var uLocal_369 = -1082130432;
	var uLocal_370 = 3;
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
	var uLocal_386 = -1;
	var uLocal_387 = 0;
	var uLocal_388 = -1;
	var uLocal_389 = -1;
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
	var uLocal_411 = -1082130432;
	var uLocal_412 = 3;
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
	var uLocal_428 = -1;
	var uLocal_429 = 0;
	var uLocal_430 = -1;
	var uLocal_431 = -1;
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
	var uLocal_453 = -1082130432;
	var uLocal_454 = 3;
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
	var uLocal_470 = -1;
	var uLocal_471 = 0;
	var uLocal_472 = -1;
	var uLocal_473 = -1;
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
	var uLocal_495 = -1082130432;
	var uLocal_496 = 3;
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
	var uLocal_512 = -1;
	var uLocal_513 = 0;
	var uLocal_514 = -1;
	var uLocal_515 = -1;
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
	var uLocal_537 = -1082130432;
	var uLocal_538 = 3;
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
	var uLocal_554 = -1;
	var uLocal_555 = 0;
	var uLocal_556 = -1;
	var uLocal_557 = -1;
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
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = -1082130432;
	var uLocal_580 = 3;
	var uLocal_581 = 0;
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
	var uLocal_596 = -1;
	var uLocal_597 = 0;
	var uLocal_598 = -1;
	var uLocal_599 = -1;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
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
	var uLocal_620 = 0;
	var uLocal_621 = -1082130432;
	var uLocal_622 = 3;
	var uLocal_623 = 0;
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
	var uLocal_638 = -1;
	var uLocal_639 = 0;
	var uLocal_640 = -1;
	var uLocal_641 = -1;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
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
	var uLocal_662 = 0;
	var uLocal_663 = -1082130432;
	var uLocal_664 = 3;
	var uLocal_665 = 0;
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
	var uLocal_680 = -1;
	var uLocal_681 = 0;
	var uLocal_682 = -1;
	var uLocal_683 = -1;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
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
	var uLocal_704 = 0;
	var uLocal_705 = -1082130432;
	var uLocal_706 = 3;
	var uLocal_707 = 0;
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
	var uLocal_722 = -1;
	var uLocal_723 = 0;
	var uLocal_724 = -1;
	var uLocal_725 = -1;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
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
	var uLocal_746 = 0;
	var uLocal_747 = -1082130432;
	var uLocal_748 = 3;
	var uLocal_749 = 0;
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
	var uLocal_764 = -1;
	var uLocal_765 = 0;
	var uLocal_766 = -1;
	var uLocal_767 = -1;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
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
	var uLocal_788 = 0;
	var uLocal_789 = -1082130432;
	var uLocal_790 = 3;
	var uLocal_791 = 0;
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
	var uLocal_806 = -1;
	var uLocal_807 = 0;
	var uLocal_808 = -1;
	var uLocal_809 = -1;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
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
	var uLocal_830 = 0;
	var uLocal_831 = -1082130432;
	var uLocal_832 = 3;
	var uLocal_833 = 0;
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
	var uLocal_848 = -1;
	var uLocal_849 = 0;
	var uLocal_850 = -1;
	var uLocal_851 = -1;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
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
	var uLocal_872 = 0;
	var uLocal_873 = -1082130432;
	var uLocal_874 = 3;
	var uLocal_875 = 0;
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
	var uLocal_890 = -1;
	var uLocal_891 = 0;
	var uLocal_892 = -1;
	var uLocal_893 = -1;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
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
	var uLocal_914 = 0;
	var uLocal_915 = -1082130432;
	var uLocal_916 = 3;
	var uLocal_917 = 0;
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
	var uLocal_932 = -1;
	var uLocal_933 = 0;
	var uLocal_934 = -1;
	var uLocal_935 = -1;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
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
	var uLocal_956 = 0;
	var uLocal_957 = -1082130432;
	var uLocal_958 = 3;
	var uLocal_959 = 0;
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
	var uLocal_974 = -1;
	var uLocal_975 = 0;
	var uLocal_976 = -1;
	var uLocal_977 = -1;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
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
	var uLocal_998 = 0;
	var uLocal_999 = -1082130432;
	var uLocal_1000 = 3;
	var uLocal_1001 = 0;
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
	var uLocal_1016 = -1;
	var uLocal_1017 = 0;
	var uLocal_1018 = -1;
	var uLocal_1019 = -1;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
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
	var uLocal_1040 = 0;
	var uLocal_1041 = -1082130432;
	var uLocal_1042 = 3;
	var uLocal_1043 = 0;
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
	var uLocal_1058 = -1;
	var uLocal_1059 = 0;
	var uLocal_1060 = -1;
	var uLocal_1061 = -1;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
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
	var uLocal_1082 = 0;
	var uLocal_1083 = -1082130432;
	var uLocal_1084 = 3;
	var uLocal_1085 = 0;
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
	var uLocal_1100 = -1;
	var uLocal_1101 = 0;
	var uLocal_1102 = -1;
	var uLocal_1103 = -1;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
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
	var uLocal_1124 = 0;
	var uLocal_1125 = -1082130432;
	var uLocal_1126 = 3;
	var uLocal_1127 = 0;
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
	var uLocal_1142 = -1;
	var uLocal_1143 = 0;
	var uLocal_1144 = -1;
	var uLocal_1145 = -1;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
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
	var uLocal_1166 = 0;
	var uLocal_1167 = -1082130432;
	var uLocal_1168 = 3;
	var uLocal_1169 = 0;
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
	var uLocal_1184 = -1;
	var uLocal_1185 = 0;
	var uLocal_1186 = -1;
	var uLocal_1187 = -1;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
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
	var uLocal_1208 = 0;
	var uLocal_1209 = -1082130432;
	var uLocal_1210 = 3;
	var uLocal_1211 = 0;
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
	var uLocal_1226 = -1;
	var uLocal_1227 = 0;
	var uLocal_1228 = -1;
	var uLocal_1229 = -1;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
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
	var uLocal_1250 = 0;
	var uLocal_1251 = -1082130432;
	var uLocal_1252 = 3;
	var uLocal_1253 = 0;
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
	var uLocal_1268 = -1;
	var uLocal_1269 = 0;
	var uLocal_1270 = -1;
	var uLocal_1271 = -1;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
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
	var uLocal_1292 = 0;
	var uLocal_1293 = -1082130432;
	var uLocal_1294 = 3;
	var uLocal_1295 = 0;
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
	var uLocal_1310 = -1;
	var uLocal_1311 = 0;
	var uLocal_1312 = -1;
	var uLocal_1313 = -1;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
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
	var uLocal_1334 = 0;
	var uLocal_1335 = -1082130432;
	var uLocal_1336 = 3;
	var uLocal_1337 = 0;
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
	var uLocal_1352 = -1;
	var uLocal_1353 = 0;
	var uLocal_1354 = -1;
	var uLocal_1355 = -1;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
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
	var uLocal_1376 = 0;
	var uLocal_1377 = -1082130432;
	var uLocal_1378 = 3;
	var uLocal_1379 = 0;
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
	var uLocal_1394 = -1;
	var uLocal_1395 = 0;
	var uLocal_1396 = -1;
	var uLocal_1397 = -1;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
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
	var uLocal_1418 = 0;
	var uLocal_1419 = -1082130432;
	var uLocal_1420 = 3;
	var uLocal_1421 = 0;
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
	var uLocal_1436 = -1;
	var uLocal_1437 = 0;
	var uLocal_1438 = -1;
	var uLocal_1439 = -1;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
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
	var uLocal_1460 = 0;
	var uLocal_1461 = -1082130432;
	var uLocal_1462 = 3;
	var uLocal_1463 = 0;
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
	var uLocal_1478 = -1;
	var uLocal_1479 = 0;
	var uLocal_1480 = -1;
	var uLocal_1481 = -1;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
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
	var uLocal_1502 = 0;
	var uLocal_1503 = -1082130432;
	var uLocal_1504 = 3;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = -1;
	var uLocal_1521 = 0;
	var uLocal_1522 = -1;
	struct<12> Local_1523[32];
	struct<12> Local_1524 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_1525 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0,001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0,0375f;
	fLocal_24 = 0,17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0,05f + 0,275f) - 0,01f);
	fLocal_63 = 0f;
	fLocal_108 = 40000f;
	iLocal_136 = unk_0xCA369FBC0DE29517();
	iLocal_137 = unk_0xCA369FBC0DE29517();
	iLocal_138 = -1;
	bLocal_139 = -1;
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_802(ScriptParam_1525))
		{
			func_762();
		}
	}
	while (true)
	{
		func_761();
		if (func_757() || func_755())
		{
			func_762();
		}
		if (func_753())
		{
			func_762();
		}
		func_727();
		switch (func_726(unk_0x383461852896D73D()))
		{
			case 0:
				if (func_725() == 1)
				{
					if (func_724())
					{
						func_723(unk_0x383461852896D73D(), 1);
					}
				}
				break;
			
			case 1:
				if (func_725() == 1)
				{
					func_154();
					func_142();
				}
				else if (func_725() == 3)
				{
					func_723(unk_0x383461852896D73D(), 3);
				}
				break;
			
			case 3:
				func_762();
				break;
		}
		if (unk_0x93E08E0F531E2C35())
		{
			switch (func_725())
			{
				case 0:
					if (func_128())
					{
						func_127(1);
					}
					break;
				
				case 1:
					if (Local_157.f_37 == 6)
					{
						func_127(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_114, 1000, 0))
					{
						func_127(3);
					}
					break;
				
				case 3:
					func_762();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x76CD105BCAC6EB9F() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				*uParam0 = unk_0x0728E77B2BF91D54();
			}
		}
		else
		{
			*uParam0 = unk_0x1DD05E817C89C737();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	bool bVar0;
	
	if (func_45(2, 0, 0, 0, 0))
	{
		if (!BitTest(Local_157.f_2, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_157.f_2), false);
			Local_157.f_1 = unk_0x7E3F74F641EE6B27();
		}
	}
	switch (Local_157.f_37)
	{
		case 0:
			if (func_44())
			{
				if (!func_32())
				{
					bVar0 = true;
				}
			}
			if (!bVar0)
			{
				func_31(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_157.f_43), func_30(), 0) || BitTest(Local_157.f_2, 0))
			{
				func_31(2);
			}
			func_32();
			break;
		
		case 2:
			Local_157.f_38 = unk_0x7E3F74F641EE6B27();
			func_31(3);
			break;
		
		case 3:
			if (func_1(&(Local_157.f_39), func_29(0), 0) || BitTest(Local_157.f_2, 0))
			{
				if (!BitTest(Local_157.f_2, 1))
				{
					Local_157.f_1 = unk_0x7E3F74F641EE6B27();
					unk_0x0B0C9A0F9AAEB7F0(&(Local_157.f_2), true);
					func_28(&(Local_157.f_39), 0, 0);
				}
				else
				{
					func_31(4);
				}
			}
			func_13();
			func_9(&bLocal_139, &iLocal_138);
			func_32();
			break;
		
		case 4:
			if ((func_1(&(Local_157.f_41), 20000, 0) || Local_157.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_157.f_3))
				{
					func_28(&(Local_157.f_45), 0, 0);
					func_31(5);
				}
				else
				{
					func_31(6);
				}
			}
			else
			{
				func_32();
			}
			break;
		
		case 5:
			if (func_4())
			{
				func_31(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_157.f_67[iVar0 /*2*/].f_1) && !unk_0x1C2F771CDC87A3A5(unk_0xF5014688C9788D5F(Local_157.f_67[iVar0 /*2*/].f_1), 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_6()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(bVar1)))
		{
			bVar2 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(bVar1));
			if (!func_7(bVar2))
			{
				if (!BitTest(Local_1523[bVar1 /*12*/].f_1, 1) || Local_1523[bVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (BitTest(Local_1523[bVar1 /*12*/].f_1, 0))
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int func_7(bool bParam0)
{
	if (func_8(bParam0))
	{
		return 1;
	}
	return BitTest(Global_1887305[bParam0 /*610*/].f_1, 8);
}

bool func_8(bool bParam0)
{
	return BitTest(Global_1887305[bParam0 /*610*/].f_1, 2);
}

void func_9(bool bParam0, int iParam1)
{
	struct<15> Var0;
	var uVar1;
	
	if (*bParam0 >= 0 && *iParam1 >= 0)
	{
		uVar1 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(*bParam0));
		if (*iParam1 == 0)
		{
			Var0.f_3 = -154142402;
			Var0.f_11 = uVar1;
			func_10(Var0, func_11(1));
		}
		*bParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = -642704387;
	Param0.f_1 = unk_0x259BE71D8A81D4FA();
	if (!iParam14 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Param0, 15, iParam14, Param0.f_0);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(bVar1)))
		{
			bVar2 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(bVar1));
			if (func_12(bVar2, 0, 0))
			{
				if (bVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar2);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_12(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(bParam0))
		{
			if (bParam1)
			{
				if (!unk_0x75EAB09F5E974116(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_13()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	
	bVar0 = false;
	while (bVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(bVar0)))
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar3, bVar0);
		}
		else
		{
			func_27(bVar0);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (BitTest(uVar3, bVar0))
		{
			func_24(bVar0);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_157.f_47), bVar0);
			iVar1++;
			if (func_18(bVar0, 0))
			{
				bVar4 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(bVar0));
				if (unk_0x762604C40829DB72(bVar4) && !func_14(bVar4, 0))
				{
					iVar2++;
				}
			}
		}
		bVar0++;
	}
	if (iVar1 > Local_157.f_50)
	{
		Local_157.f_50 = iVar1;
	}
	else
	{
		Local_157.f_66 = (Local_157.f_50 - iVar1);
	}
	if (iVar2 > Local_157.f_51)
	{
		Local_157.f_51 = iVar2;
	}
}

bool func_14(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_17(bParam0))
	{
		return 0;
	}
	if (bParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[bParam0 /*883*/].f_206 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x762604C40829DB72(bParam0))
		{
			bVar0 = unk_0x1864096A95E36EBA(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_15(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_16()
{
	return Global_1574926;
}

int func_17(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_18(bool bParam0, bool bParam1)
{
	float fVar0;
	
	if (bParam0 >= 0 && bParam0 < 32)
	{
		fVar0 = system::to_float(Local_1523[bParam0 /*12*/].f_4);
	}
	else if (bParam0 == -1)
	{
		fVar0 = system::to_float(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_4);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_20())
		{
			return 1;
		}
	}
	if (func_19())
	{
		fVar0 = (fVar0 / 10f);
	}
	switch (Local_157.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_11430)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_11431)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_11432)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_11433)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_11434)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_11435)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_11436 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_11437)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_11438)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_11439)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_11440)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_11441))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_11442))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_11539)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_11540)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_11443))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_11444))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_11445))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_11446))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_19()
{
	switch (Local_157.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_20()
{
	if ((func_21(0) || func_21(1)) || func_21(2))
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0)
{
	if (iParam0 >= 0)
	{
		if (Local_157.f_4[iParam0] == unk_0xAE032CEDCF23C6D5() && func_22(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_4, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_22(int iParam0, int iParam1)
{
	if (!func_23())
	{
		return iParam0 > iParam1;
	}
	if (iParam0 == 0)
	{
		iParam0 = 2147483647;
	}
	if (iParam1 == 0)
	{
		iParam1 = 2147483647;
	}
	return iParam0 < iParam1;
}

int func_23()
{
	switch (Local_157.f_3)
	{
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_24(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = Local_1523[bParam0 /*12*/].f_4;
	iVar1 = Local_1523[bParam0 /*12*/].f_4.f_2;
	if (!BitTest(Local_157.f_48, bParam0))
	{
		fVar2 = system::to_float(Local_157.f_4[0]);
		if ((!func_23() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_23() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_157.f_49++;
			unk_0x0B0C9A0F9AAEB7F0(&(Local_157.f_48), bParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_157.f_4[iVar3] == bParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_26(&(Local_157.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_157.f_4[iVar3] < 0 || func_22(iVar0, Local_1523[Local_157.f_4[iVar3] /*12*/].f_4)) || func_25(iVar0, Local_1523[Local_157.f_4[iVar3] /*12*/].f_4, iVar1, Local_1523[Local_157.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_157.f_4[iVar3];
			if (func_22(iVar0, 0))
			{
				iLocal_138 = iVar3;
				bLocal_139 = bParam0;
			}
			Local_157.f_4[iVar3] = bParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_157.f_4[iVar5] == bParam0)
				{
					Local_157.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_25(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_157.f_3 == 2)
	{
		if (iParam0 == iParam1 && iParam2 > iParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_26(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_27(bool bParam0)
{
	int iVar0;
	
	if (BitTest(Local_157.f_47, bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_157.f_4[iVar0] == bParam0)
			{
				Local_157.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0x8744D2E3FC95740E(&(Local_157.f_48), bParam0);
		unk_0x8744D2E3FC95740E(&(Local_157.f_47), bParam0);
	}
}

void func_28(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7E3F74F641EE6B27();
		}
		else
		{
			*uParam0 = unk_0x0728E77B2BF91D54();
		}
	}
	else
	{
		*uParam0 = unk_0x1DD05E817C89C737();
	}
	uParam0->f_1 = 1;
}

int func_29(bool bParam0)
{
	if (BitTest(Local_157.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_157.f_3)
	{
		case 0:
			return Global_262145.f_10738;
		
		case 8:
			return Global_262145.f_10740;
		
		case 3:
			return Global_262145.f_10741;
		
		case 1:
			return Global_262145.f_11526;
		
		case 6:
			return Global_262145.f_11527;
		
		case 10:
			return Global_262145.f_11529;
		
		case 11:
			return Global_262145.f_11531;
		
		case 12:
			return Global_262145.f_11532;
		
		case 15:
			return Global_262145.f_11535;
		
		case 16:
			return Global_262145.f_11536;
		
		case 17:
			return Global_262145.f_11537;
		
		case 18:
			return Global_262145.f_11538;
		
		case 13:
			return Global_262145.f_11530;
		
		case 14:
			return Global_262145.f_11533;
		
		case 2:
			return Global_262145.f_10743;
		
		case 7:
			return Global_262145.f_11528;
		
		case 9:
			return Global_262145.f_11534;
		
		case 5:
			return Global_262145.f_10744;
		
		case 4:
			return Global_262145.f_10742;
		
		default:
	}
	return -1;
}

int func_30()
{
	return Global_262145.f_11498;
}

void func_31(int iParam0)
{
	Local_157.f_37 = iParam0;
}

int func_32()
{
	struct<2> Var0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	if (func_44() && ((Local_157.f_37 == 0 || func_5(Local_157.f_3)) || Local_157.f_54 < 10))
	{
		Var0 = { Local_157.f_67[iLocal_133 /*2*/] };
		if (func_43(Var0.f_0))
		{
			if (!unk_0x2FC2FDC413532977(Var0.f_1))
			{
				if (func_41(Local_157.f_3, iLocal_133, &Var1, &uVar2))
				{
					Local_157.f_55[iLocal_133] = func_37(iLocal_133);
					if (BitTest(Local_1523[Local_157.f_55[iLocal_133] /*12*/].f_2, iLocal_133))
					{
						if (func_34(&(Local_157.f_67[iLocal_133 /*2*/].f_1), Var0.f_0, Var1, uVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							unk_0x6EF982A39E8D08FA(unk_0xF5014688C9788D5F(Local_157.f_67[iLocal_133 /*2*/].f_1), 1, 1);
							unk_0x0B74F181ADFC39BF(unk_0xE38610F405049F71(Local_157.f_67[iLocal_133 /*2*/].f_1), 1);
							unk_0x11C125313CB8ADA2(unk_0xE38610F405049F71(Local_157.f_67[iLocal_133 /*2*/].f_1), 1);
							unk_0xAA588DD56719AE3A(unk_0xE38610F405049F71(Local_157.f_67[iLocal_133 /*2*/].f_1), 0);
							func_33(unk_0xE38610F405049F71(Local_157.f_67[iLocal_133 /*2*/].f_1), 1);
							if (unk_0x77B62CAA5DF0922A("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0xEE8559BBFC27701B(unk_0xE38610F405049F71(Local_157.f_67[iLocal_133 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
							{
								if (unk_0xD130E7CDEE903624(unk_0xE38610F405049F71(Local_157.f_67[iLocal_133 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = unk_0xE2F6FE9B61232165(unk_0xE38610F405049F71(Local_157.f_67[iLocal_133 /*2*/].f_1), "MPBitset");
								}
								unk_0x0B0C9A0F9AAEB7F0(&iVar3, 10);
								unk_0x0B0C9A0F9AAEB7F0(&iVar3, 11);
								unk_0xEE8559BBFC27701B(unk_0xE38610F405049F71(Local_157.f_67[iLocal_133 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_157.f_55[iLocal_133] = -1;
							Local_157.f_54++;
						}
					}
				}
			}
		}
		iLocal_133++;
		if (iLocal_133 >= 10)
		{
			iLocal_133 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_33(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
	{
		if (unk_0xD130E7CDEE903624(iParam0, "MPBitset"))
		{
			uVar0 = unk_0xE2F6FE9B61232165(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, 13);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&uVar0, 13);
		}
		unk_0xEE8559BBFC27701B(iParam0, "MPBitset", uVar0);
	}
}

int func_34(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x441B9C85D0FFA9ED(iParam1))
	{
		return 0;
	}
	if (!unk_0x2E9F58AD6FE93DFF(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x60040CDD28AA1BC3(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x5779387E956077A6(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
	if (unk_0xFC8BFE4B41177C22(iVar1))
	{
		*uParam0 = unk_0x913A6486719A87D2(iVar1);
		Global_2738934.f_6799 = iVar1;
		if (unk_0x2FC2FDC413532977(*uParam0))
		{
			if (bParam13)
			{
				unk_0x32C336953C18A3CE(iVar1, 1);
			}
			unk_0x11C125313CB8ADA2(iVar1, iParam8);
			if (unk_0xC8D49539708A80B4(iVar1))
			{
				if (bParam6)
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 1);
				}
				else
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x4C48F052678AA7EF(*uParam0, unk_0x259BE71D8A81D4FA(), 1);
				}
			}
			unk_0xD37CA6D6F8993BB9(iVar1, iParam7);
			unk_0xA133EF296C37D6E6(iVar1, 1);
			if (bParam10)
			{
				unk_0x8E18C9CFBC30C9FF(iVar1);
				unk_0x3E13A302AA0F06BF(iVar1, 5, 5, 1f);
			}
			func_35(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_35(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_36(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
	{
		if ((Global_2635563.f_3230[1 /*6*/].f_5 == iParam3 && Global_2635563.f_3230[1 /*6*/].f_4 == iParam2) && system::vdist(Global_2635563.f_3230[1 /*6*/], Param0) < 0,5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635563.f_3230[iVar0 /*6*/] = { Global_2635563.f_3230[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635563.f_3230[1 /*6*/] = { Param0 };
		Global_2635563.f_3230[1 /*6*/].f_3 = uParam1;
		Global_2635563.f_3230[1 /*6*/].f_4 = iParam2;
		Global_2635563.f_3230[1 /*6*/].f_5 = iParam3;
	}
}

int func_36(bool bParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = bParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x1D5CD3EAAA7422B0((Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (system::vdist(Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0,5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_37(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	var uVar5;
	bool bVar6;
	
	fVar2 = 1000000f;
	if (func_40(bParam0, &Var4, &uVar5))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0x95C7A22DBE7AEF4C() - 1))
		{
			if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
			{
				bVar6 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(bVar0));
				if (func_12(bVar6, 1, 1))
				{
					fVar3 = func_38(func_39(bVar6), Var4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = bVar0;
					}
				}
			}
			bVar0++;
		}
	}
	return iVar1;
}

float func_38(struct<3> Param0, struct<3> Param1)
{
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	return system::vdist(Param0, Param1);
}

Vector3 func_39(bool bParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(bParam0), 0);
}

int func_40(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729,582f, -2943,77f, 12,9443f };
			*uParam2 = 300,078f;
			break;
		
		case 1:
			*uParam1 = { 677,2984f, 769,7758f, 204,6846f };
			*uParam2 = 82,8903f;
			break;
		
		case 2:
			*uParam1 = { 1073,972f, 3003,889f, 40,5508f };
			*uParam2 = 333,2717f;
			break;
		
		case 3:
			*uParam1 = { 1928,635f, 4702,327f, 40,1958f };
			*uParam2 = 327,9112f;
			break;
		
		case 4:
			*uParam1 = { 1278,65f, 6579,366f, 1,505f };
			*uParam2 = 84,26f;
			break;
		
		case 5:
			*uParam1 = { -1700,407f, -829,8932f, 8,2542f };
			*uParam2 = 70,1811f;
			break;
		
		case 6:
			*uParam1 = { -2733,589f, 2925,563f, 1,2152f };
			*uParam2 = 176,5378f;
			break;
		
		case 7:
			*uParam1 = { 1493,418f, -2442,99f, 64,9693f };
			*uParam2 = 52,9918f;
			break;
		
		case 8:
			*uParam1 = { 569,0449f, -772,5692f, 10,4088f };
			*uParam2 = 179,3501f;
			break;
		
		case 9:
			*uParam1 = { -905,1526f, 5548,172f, 5,5251f };
			*uParam2 = 95,8361f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_41(int iParam0, bool bParam1, var uParam2, var uParam3)
{
	if (func_5(iParam0))
	{
		switch (bParam1)
		{
			case 0:
				*uParam2 = { -1729,582f, -2943,77f, 12,9443f };
				*uParam3 = 300,078f;
				break;
			
			case 1:
				*uParam2 = { 677,2984f, 769,7758f, 204,6846f };
				*uParam3 = 82,8903f;
				break;
			
			case 2:
				*uParam2 = { 1073,972f, 3003,889f, 40,5508f };
				*uParam3 = 333,2717f;
				break;
			
			case 3:
				*uParam2 = { 1928,635f, 4702,327f, 40,1958f };
				*uParam3 = 327,9112f;
				break;
			
			case 4:
				*uParam2 = { 1278,65f, 6579,366f, 1,505f };
				*uParam3 = 84,26f;
				break;
			
			case 5:
				*uParam2 = { -1700,407f, -829,8932f, 8,2542f };
				*uParam3 = 70,1811f;
				break;
			
			case 6:
				*uParam2 = { -2733,589f, 2925,563f, 1,2152f };
				*uParam3 = 173,6421f;
				break;
			
			case 7:
				*uParam2 = { 1493,418f, -2442,99f, 64,9693f };
				*uParam3 = 52,9918f;
				break;
			
			case 8:
				*uParam2 = { 569,0449f, -772,5692f, 10,4088f };
				*uParam3 = 179,3501f;
				break;
			
			case 9:
				*uParam2 = { -905,1526f, 5548,172f, 5,5251f };
				*uParam3 = 95,8361f;
				break;
			
			default:
				return 0;
		}
	}
	else if (func_42(iParam0))
	{
		switch (bParam1)
		{
			case 0:
				*uParam2 = { -3132,932f, 1130,534f, 19,683f };
				*uParam3 = 168,7723f;
				break;
			
			case 1:
				*uParam2 = { -1008,917f, -1640,027f, 3,4035f };
				*uParam3 = 235,1491f;
				break;
			
			case 2:
				*uParam2 = { 1075,063f, -2445,105f, 28,2896f };
				*uParam3 = 100,2369f;
				break;
			
			case 3:
				*uParam2 = { 1101,198f, -266,9387f, 68,3046f };
				*uParam3 = 359,2015f;
				break;
			
			case 4:
				*uParam2 = { 2658,878f, 1667,581f, 23,4886f };
				*uParam3 = 90,4833f;
				break;
			
			case 5:
				*uParam2 = { -399,1095f, 874,6328f, 230,2586f };
				*uParam3 = 107,5929f;
				break;
			
			case 6:
				*uParam2 = { 156,5429f, 3117,213f, 41,5677f };
				*uParam3 = 218,5338f;
				break;
			
			case 7:
				*uParam2 = { -2242,923f, 4315,749f, 46,7647f };
				*uParam3 = 236,8359f;
				break;
			
			case 8:
				*uParam2 = { -143,7363f, 6500,573f, 28,7366f };
				*uParam3 = 116,1312f;
				break;
			
			case 9:
				*uParam2 = { 1939,475f, 4628,652f, 39,3984f };
				*uParam3 = 350,0428f;
				break;
			
			default:
				return 0;
			}
	}
	return 1;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_43(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

bool func_44()
{
	return (func_5(Local_157.f_3) || func_42(Local_157.f_3));
}

int func_45(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_126(unk_0x259BE71D8A81D4FA(), 0) || func_123(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (func_122(unk_0x259BE71D8A81D4FA()) || func_120(unk_0x259BE71D8A81D4FA()))
		{
			bParam2 = false;
		}
	}
	if (unk_0xC259E614564DAB8F() < iParam0)
	{
		if (bParam2)
		{
			func_52(sParam3, sParam4, 1);
		}
		if (func_51(26, -1))
		{
			func_49(26, -1);
		}
		return 1;
	}
	if (func_48(&(Global_1836959.f_18)))
	{
		if (!func_1(&(Global_1836959.f_18), 7500, 0))
		{
			return 0;
		}
		func_47(&(Global_1836959.f_18));
	}
	if (func_46())
	{
		if (bParam2)
		{
			func_52(sParam3, sParam4, 0);
		}
		if (func_51(26, -1))
		{
			func_49(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0x7F258099B06D4C7C() < iParam0)
	{
		if (bParam2)
		{
			func_52(sParam3, sParam4, 1);
		}
		if (func_51(26, -1))
		{
			func_49(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_46()
{
	return BitTest(Global_1836959.f_1, 0);
}

void func_47(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_48(var uParam0)
{
	return uParam0->f_1;
}

void func_49(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	switch (bParam0)
	{
		case 0:
			unk_0x91F6DFBE57E45538(0, iParam1);
			break;
		
		default:
			uVar1 = func_50(iParam1);
			iVar0 = unk_0x38640D2193CB547F(uVar1);
			if (BitTest(iVar0, bParam0))
			{
				unk_0x8744D2E3FC95740E(&iVar0, bParam0);
				unk_0x91F6DFBE57E45538(iVar0, iParam1);
			}
			break;
	}
}

int func_50(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_51(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	uVar0 = func_50(iParam1);
	uVar1 = unk_0x38640D2193CB547F(uVar0);
	return BitTest(uVar1, iParam0);
}

void func_52(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!BitTest(Global_1836959.f_1, 2) && !func_8(unk_0x259BE71D8A81D4FA())) && !func_7(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xD6F9DEE4765092A9(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xD6F9DEE4765092A9(sParam1))
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
		func_53(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 2);
	}
}

int func_53(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_119(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_117(&(Var0.f_69), iParam7);
	}
	return func_54(&Var0);
}

int func_54(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2672855.f_2879)
		{
			return 0;
		}
	}
	func_69(uParam0, uParam0->f_17);
	func_66(uParam0);
	if (func_65())
	{
		func_66(uParam0);
	}
	if (func_64(uParam0->f_1))
	{
		func_57();
		if (Global_2672855.f_2557[0 /*80*/].f_2 == 0)
		{
			Global_2672855.f_2557[0 /*80*/] = { *uParam0 };
			if (func_56(uParam0->f_69, 8192))
			{
				Global_1928446 = 1;
			}
			return 1;
		}
		if (((Global_2672855.f_2557[0 /*80*/].f_1 == 13 || Global_2672855.f_2557[0 /*80*/].f_1 == 53) || Global_2672855.f_2557[0 /*80*/].f_1 == 54) || Global_2672855.f_2557[0 /*80*/].f_1 == 58)
		{
			Global_2672855.f_2557[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2672855.f_2557[iVar0 + 1 /*80*/] = { Global_2672855.f_2557[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2672855.f_2557[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2672855.f_2557[iVar0 /*80*/].f_2 == 0)
		{
			Global_2672855.f_2557[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_57();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_117(&(Global_2672855.f_2557[iVar0 /*80*/].f_69), 2);
				Global_2672855.f_2557[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_56(uParam0->f_69, 128))
			{
				if (func_55(Global_2672855.f_2557[iVar0 /*80*/].f_1))
				{
					Global_2672855.f_2557[iVar0 /*80*/].f_2 = 5;
					func_117(&(Global_2672855.f_2557[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_56(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_57()
{
	bool bVar0;
	
	if (Global_2672855.f_2880)
	{
		return;
	}
	if (!Global_79658)
	{
		Global_79658 = 1;
		bVar0 = true;
	}
	else if (Global_79659)
	{
		Global_79659 = 0;
		bVar0 = true;
	}
	func_58();
	if (bVar0)
	{
		Global_79658 = 0;
	}
}

void func_58()
{
	Global_2672855.f_2881 = 0;
	Global_2672855.f_2881.f_582 = 0;
	func_62(&(Global_2672855.f_2881.f_1));
	Global_2672855.f_2881.f_1.f_1 = 0;
	func_59(&(Global_2672855.f_2881.f_1), 1);
}

void func_59(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xD314260005F064BF(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x761778199FE1211C())
		{
			unk_0x88F483FBD433696A(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x557F1E2300EF1A3E(0);
			unk_0xE6B753D52F4CA222();
		}
		unk_0xD314260005F064BF(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		unk_0x6FF322107B12B749(0);
		uParam0->f_568 = 0;
	}
	if (!Global_79658)
	{
		if (!unk_0xD5FF242D0AFC5855(unk_0xB6B621402486C3E4()))
		{
			if (!Global_79660)
			{
				if (unk_0x15CCE8886267624F() && !func_61(0))
				{
					unk_0x10B228D2FDB7AF16(800);
				}
			}
		}
	}
	func_60(0);
}

void func_60(int iParam0)
{
	Global_79650 = iParam0;
	Global_79651 = iParam0;
}

int func_61(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_62(var uParam0)
{
	func_63(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_63(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0,1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_64(int iParam0)
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

bool func_65()
{
	return Global_2684504.f_19;
}

void func_66(var uParam0)
{
	if (func_68(uParam0->f_1))
	{
		uParam0->f_72 = func_67();
	}
}

int func_67()
{
	return 21;
}

int func_68(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_69(var uParam0, bool bParam1)
{
	if (func_68(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_116() || !func_12(bParam1, 0, 1))
	{
		return;
	}
	if (func_55(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_70(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_70(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (!func_17(bParam0))
	{
		return 1;
	}
	if (func_114(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x1864096A95E36EBA(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_121471[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_114(unk_0x259BE71D8A81D4FA()) || (func_113() && func_112())) && !BitTest(Global_2738934.f_4712, 31)) && !bParam4)
	{
		uVar1 = func_111();
		if (unk_0xFC8BFE4B41177C22(uVar1))
		{
			if (unk_0x501EBB0523078750(iVar1))
			{
				if (unk_0x1C1C92A1CBAE364B(iVar1) != -1)
				{
					if (func_12(unk_0x1C1C92A1CBAE364B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
						{
							if (Global_4718592.f_121471[iParam1] != -1)
							{
								return func_109(iParam1, bParam0, 0);
							}
							else
							{
								return func_85(bParam0, unk_0x1C1C92A1CBAE364B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_85(bParam0, unk_0x1C1C92A1CBAE364B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
			{
				if (Global_4718592.f_121471[iParam1] != -1)
				{
					return func_109(iParam1, bParam0, 0);
				}
				else
				{
					return func_71(0, -1, 0);
				}
			}
			else
			{
				return func_71(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
	{
		if (Global_4718592.f_121471[iParam1] != -1)
		{
			return func_109(iParam1, bParam0, 0);
		}
		else
		{
			return func_85(bParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
		}
	}
	return func_85(bParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
}

int func_71(bool bParam0, int iParam1, bool bParam2)
{
	return func_72(unk_0x259BE71D8A81D4FA(), bParam0, iParam1, bParam2);
}

int func_72(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x762604C40829DB72(bParam0))
	{
		return 3;
	}
	iVar0 = unk_0x1864096A95E36EBA(bParam0);
	if ((func_84() || (func_83() && func_81())) && Global_1680185.f_1)
	{
		if (bParam1)
		{
			return func_80(iParam2, iVar0);
		}
		else
		{
			return func_80(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_77(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_76(1);
				}
				else
				{
					return func_76(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_73(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_73(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_76(1);
	}
	return func_76(0);
}

int func_73(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_75(iParam0, iParam1, iParam3);
	if (func_74(Global_4718592.f_127178, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_74(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_185586 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9522[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_77(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_76(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058116.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25622, bVar0))
			{
				bVar1 = Global_1058116.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_78(iParam0, bVar0, iParam1, bVar1) || !func_78(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_78(iParam0, bVar0, iParam1, bVar1) || !func_78(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_78(iParam0, bVar0, iParam1, bVar1) || !func_78(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_78(iParam0, bVar0, iParam1, bVar1) || !func_78(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_78(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25623, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3592[iParam2 /*25891*/].f_25623, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		iVar4 = unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		bVar1 = iVar5;
		if (((!func_12(bVar1, 1, 1) || func_14(bVar1, 0)) || BitTest(Global_2657971[bVar1 /*465*/].f_200, 2)) || func_79(bVar1))
		{
		}
		else if (unk_0x1864096A95E36EBA(bVar1) != iParam2)
		{
		}
		else
		{
			uVar2 = unk_0x56E414973C2A8C0E(bVar1);
			if (unk_0x4FAFF4BCB7633475(uVar2))
			{
			}
			else
			{
				iVar3 = unk_0x4B423FAA24E8ABF0(iVar2);
				if (iVar4 == joaat("mp_f_freemode_01") || iVar4 == joaat("mp_m_freemode_01"))
				{
					if (iVar3 == joaat("mp_f_freemode_01") || iVar3 == joaat("mp_m_freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_79(bool bParam0)
{
	return BitTest(Global_1845281[bParam0 /*883*/].f_36.f_18, 14);
}

int func_80(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_75(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_81()
{
	if (func_82())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_190336, 4);
}

bool func_82()
{
	return BitTest(Global_4718592.f_178389, 12);
}

bool func_83()
{
	if (unk_0x834C960822A4683F())
	{
		return BitTest(Global_4718592.f_190336, 0);
	}
	return ((BitTest(Global_4718592.f_190336, 0) || Global_1919908) && unk_0x486FF5D06E9659F1(joaat("fm_deathmatch_creator")) > 0);
}

int func_84()
{
	if (func_82() && unk_0x834C960822A4683F())
	{
		return 1;
	}
	return 0;
}

int func_85(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x1864096A95E36EBA(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 148)
	{
		bVar1 = true;
	}
	bVar2 = bParam0;
	if (bVar2 > -1)
	{
		if (Global_1845281[bVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_94())
			{
				iVar3 = func_90(bParam0);
				if (!iVar3 == -1)
				{
					return func_88(iVar3);
				}
			}
			if ((func_87(bParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_77(unk_0x1864096A95E36EBA(bParam1), unk_0x1864096A95E36EBA(bParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_76(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_86(1);
			}
			else
			{
				return func_72(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836681 || Global_1836671) || Global_1845281[bParam0 /*883*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836681 == 1 && Global_1836691 == 0))
			{
				return func_76(1);
			}
			else
			{
				return func_72(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836675 && Global_1836148.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_90(bParam0);
	if (!iVar4 == -1)
	{
		return func_88(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_86(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_87(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x1864096A95E36EBA(bParam0) == -1 && unk_0x1864096A95E36EBA(bParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x1864096A95E36EBA(bParam0) == unk_0x1864096A95E36EBA(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x1864096A95E36EBA(bParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x1864096A95E36EBA(bParam0) == iParam2;
	}
	return unk_0x1864096A95E36EBA(bParam0) == iParam2;
}

int func_88(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_89(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_89(int iParam0)
{
	return Global_2648938.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_90(bool bParam0)
{
	if (func_17(bParam0))
	{
		if (func_92(bParam0, 1))
		{
			return Global_2648938.f_818.f_11[func_91(bParam0)];
		}
	}
	return -1;
}

int func_91(bool bParam0)
{
	if (func_17(bParam0))
	{
		return Global_1887305[bParam0 /*610*/].f_10;
	}
	return func_116();
}

int func_92(bool bParam0, bool bParam1)
{
	if (!func_17(bParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_93(bParam0))
		{
			return 0;
		}
	}
	return func_17(Global_1887305[bParam0 /*610*/].f_10);
}

int func_93(bool bParam0)
{
	if (func_17(bParam0))
	{
		if (func_17(Global_1887305[bParam0 /*610*/].f_10))
		{
			return Global_1887305[bParam0 /*610*/].f_10 == bParam0;
		}
	}
	return 0;
}

int func_94()
{
	if ((((((((func_108() || func_107()) || func_65()) || func_106()) || func_105()) || func_103()) || func_101()) || func_98()) || func_95())
	{
		return 1;
	}
	if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_95()
{
	return func_96(Global_4718592.f_127178);
}

int func_96(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_97(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_97(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_35481[iParam0];
	}
	return -1;
}

int func_98()
{
	return func_99(Global_4718592.f_127178);
}

int func_99(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_100(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_100(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32988[iParam0];
	}
	return -1;
}

int func_101()
{
	return func_102(Global_4718592.f_127178);
}

int func_102(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31052[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_103()
{
	return func_104(Global_4718592.f_127178);
}

int func_104(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30347[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_105()
{
	return Global_2684504.f_24;
}

bool func_106()
{
	return Global_2684504.f_21;
}

var func_107()
{
	return Global_2684504.f_18;
}

var func_108()
{
	return Global_2684504.f_17;
}

int func_109(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058116.f_14[iParam0];
	if (func_94())
	{
		iVar2 = func_90(bParam1);
		if (!iVar2 == -1)
		{
			return func_88(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_8534[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_116())
	{
		if (Global_4718592.f_121471[iParam0] != -1 && Global_4718592.f_121471[iParam0] <= 4)
		{
			if (Global_4718592.f_121471[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_121471[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_121471[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_121471[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_121471[iParam0];
			}
		}
		else
		{
			iVar0 = func_72(bParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_110(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_77(iParam0, unk_0x1864096A95E36EBA(bParam1), 0, -1))
		{
			iVar0 = func_86(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_110(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_185777;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_185778;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_185779;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_185780;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_111()
{
	return Global_2621446.f_2;
}

var func_112()
{
	return BitTest(Global_2621446, 4);
}

var func_113()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

int func_114(bool bParam0)
{
	if (func_14(bParam0, 0))
	{
		return 1;
	}
	if (func_115())
	{
		if (bParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[bParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_115()
{
	return BitTest(Global_2621446, 3);
}

int func_116()
{
	return -1;
}

void func_117(var uParam0, int iParam1)
{
	func_118(uParam0, iParam1);
}

void func_118(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_119(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_116();
	uParam1->f_18 = func_116();
	uParam1->f_19 = func_116();
	uParam1->f_20 = func_116();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

bool func_120(bool bParam0)
{
	return func_121(bParam0, 20);
}

var func_121(bool bParam0, int iParam1)
{
	return BitTest(Global_1887305[bParam0 /*610*/].f_10.f_4, iParam1);
}

int func_122(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return func_121(bParam0, 9);
	}
	return 0;
}

int func_123(bool bParam0, int iParam1)
{
	if (Global_1887305[bParam0 /*610*/].f_10.f_33 != -1 && func_124(Global_1887305[bParam0 /*610*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1887305[bParam0 /*610*/].f_10.f_32 != -1)
	{
		if (func_124(Global_1887305[bParam0 /*610*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_125(iParam0, 0);
	return 0;
}

int func_125(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_126(bool bParam0, int iParam1)
{
	if (func_17(bParam0))
	{
		if (Global_1887305[bParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[bParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

void func_127(int iParam0)
{
	Local_157.f_0 = iParam0;
}

int func_128()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_157.f_4[iVar0] = -1;
		iVar0++;
	}
	func_47(&(Local_157.f_39));
	func_133();
	if (func_44())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_157.f_55[iVar0] = func_37(iVar0);
			iVar0++;
		}
		func_129();
	}
	return 1;
}

void func_129()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_42(Local_157.f_3))
		{
			Local_157.f_67[iVar0 /*2*/] = func_132();
		}
		else
		{
			Local_157.f_67[iVar0 /*2*/] = func_130();
		}
		iVar0++;
	}
}

int func_130()
{
	int iVar0;
	
	switch (Local_157.f_3)
	{
		case 12:
			return func_131();
			break;
	}
	iVar0 = unk_0xC5935DFB3F39785A(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		
		case 1:
			return joaat("mammatus");
		
		default:
	}
	return 0;
}

int func_131()
{
	int iVar0;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("stunt");
		
		case 1:
			return joaat("besra");
		
		default:
	}
	return 0;
}

int func_132()
{
	int iVar0;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("sanchez");
		
		case 1:
			return joaat("pcj");
		
		default:
	}
	return 0;
}

void func_133()
{
	int iVar0;
	
	iVar0 = func_138();
	Local_157.f_3 = iVar0;
	func_134(func_136(133, iVar0, 0, 0));
}

void func_134(int iParam0)
{
	struct<4> Var0;
	int iVar1;
	
	Var0.f_0 = 1927637822;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = iParam0;
	iVar1 = func_135(1, 1);
	if (!iVar1 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 4, iVar1, Var0.f_0);
	}
}

var func_135(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_12(bVar2, 0, 0))
		{
			if (bVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
				else if (!func_14(bVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_136(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	if (func_137(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 314:
			return 0;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		case 337:
			return 0;
		
		case 338:
			return 0;
		
		case 339:
			return 0;
		
		case 340:
			return 0;
		
		default:
	}
	return -1;
}

int func_138()
{
	int iVar0[19];
	float fVar1;
	int iVar2;
	float fVar3;
	
	iVar0[0] = Global_262145.f_11816;
	iVar0[1] = Global_262145.f_11500;
	iVar0[2] = Global_262145.f_11820;
	iVar0[3] = Global_262145.f_11818;
	iVar0[4] = Global_262145.f_11819;
	iVar0[5] = Global_262145.f_11821;
	iVar0[6] = Global_262145.f_11501;
	iVar0[7] = Global_262145.f_11502;
	iVar0[8] = Global_262145.f_11817;
	iVar0[9] = Global_262145.f_11508;
	iVar0[10] = Global_262145.f_11503;
	iVar0[11] = Global_262145.f_11505;
	iVar0[12] = Global_262145.f_11506;
	iVar0[13] = Global_262145.f_11504;
	iVar0[14] = Global_262145.f_11507;
	iVar0[15] = Global_262145.f_11509;
	iVar0[16] = Global_262145.f_11510;
	iVar0[17] = Global_262145.f_11511;
	iVar0[18] = Global_262145.f_11512;
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (func_141(iVar2) || func_139(133, iVar2, 0, 0))
		{
			iVar0[iVar2] = 0f;
		}
		else
		{
			fVar1 = (fVar1 + iVar0[iVar2]);
		}
		iVar2++;
	}
	fVar3 = unk_0xD2AA6F822D3A55D2(0f, fVar1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (fVar3 <= iVar0[iVar2])
		{
			return iVar2;
		}
		fVar3 = (fVar3 - iVar0[iVar2]);
		iVar2++;
	}
	return func_138();
}

int func_139(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_140(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8638)
		{
			if (Global_2699171.f_136[iVar0 /*2*/] == iVar1 && Global_2699171.f_136[iVar0 /*2*/].f_1 == func_136(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		case 150:
			return 20;
		
		default:
	}
	return -1;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10731;
		
		case 1:
			return Global_262145.f_11513;
		
		case 6:
			return Global_262145.f_11514;
		
		case 7:
			return Global_262145.f_11515;
		
		case 8:
			return Global_262145.f_10732;
		
		case 3:
			return Global_262145.f_10733;
		
		case 4:
			return Global_262145.f_10734;
		
		case 2:
			return Global_262145.f_10735;
		
		case 5:
			return Global_262145.f_10737;
		
		case 9:
			return Global_262145.f_11521;
		
		case 10:
			return Global_262145.f_11516;
		
		case 11:
			return Global_262145.f_11518;
		
		case 12:
			return Global_262145.f_11519;
		
		case 15:
			return Global_262145.f_11522;
		
		case 16:
			return Global_262145.f_11523;
		
		case 17:
			return Global_262145.f_11524;
		
		case 18:
			return Global_262145.f_11525;
		
		case 13:
			return Global_262145.f_11517;
		
		case 14:
			return Global_262145.f_11520;
		
		default:
	}
	return 1;
}

void func_142()
{
	bool bVar0;
	
	if (func_44())
	{
		bVar0 = false;
		while (bVar0 < 10)
		{
			if (Local_157.f_55[bVar0] == unk_0xAE032CEDCF23C6D5())
			{
				if (func_143(bVar0))
				{
					if (!BitTest(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_2, bVar0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_2), bVar0);
					}
				}
				else if (BitTest(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_2, bVar0))
				{
					unk_0x8744D2E3FC95740E(&(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_2), bVar0);
				}
			}
			else if (BitTest(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_2, bVar0))
			{
				unk_0x8744D2E3FC95740E(&(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_2), bVar0);
			}
			bVar0++;
		}
	}
}

int func_143(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	
	if (func_40(iParam0, &Var0, &uVar1))
	{
		if (func_144(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_144(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2635563.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x913602ADD2D86A7A(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x2DBCF31839B069B4(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x2DBCF31839B069B4(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x80F249EA6DFE8476(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (bParam11)
	{
		if (unk_0xE8D2BD34CCB74431(Param0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (fParam12 > 0f)
	{
		if (func_149(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_145(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2635563.f_2++;
	return 1;
}

int func_145(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xED977E2AE2CB16EE(func_147(unk_0x259BE71D8A81D4FA()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x7B780C491DEC834E(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_12(bVar1, 1, 1))
		{
			if (!func_14(bVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if ((func_146(bVar1) || !bParam8) && !Global_2657971[bVar1 /*465*/].f_271)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x1864096A95E36EBA(bVar1) == -1)
							{
								if (unk_0x1864096A95E36EBA(bVar1) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x1864096A95E36EBA(bVar1) != unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))) || unk_0x1864096A95E36EBA(bVar1) == -1)
							{
								if (unk_0xED977E2AE2CB16EE(func_147(bVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x267FC71D3F0D131A(bVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x1864096A95E36EBA(bVar1) != iParam6 || unk_0x1864096A95E36EBA(bVar1) == -1)
						{
							if (unk_0xED977E2AE2CB16EE(func_147(bVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x267FC71D3F0D131A(bVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_146(bool bParam0)
{
	if (unk_0x870372B586EFB3EE(unk_0x56E414973C2A8C0E(bParam0)) || Global_2657971[bParam0 /*465*/].f_256)
	{
		return 1;
	}
	return 0;
}

Vector3 func_147(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_65() && Global_1845281[iVar0 /*883*/].f_860) && !func_148(Global_1845281[iVar0 /*883*/].f_861))
	{
		return Global_1845281[iVar0 /*883*/].f_861;
	}
	return func_39(bParam0);
}

int func_148(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_149(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x259BE71D8A81D4FA() != bVar1) || iParam6 == 0)
		{
			if (func_12(bVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bVar1))
				{
					if (!bParam5 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(bVar1)) && func_146(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(bVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && uParam7) && bParam4) && func_150(bVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(bVar1)))
							{
								if (unk_0xED977E2AE2CB16EE(func_39(bVar1), Param0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_150(bool bParam0)
{
	if (func_153(unk_0x259BE71D8A81D4FA(), bParam0))
	{
		return 1;
	}
	Global_2707307 = { func_152(bParam0) };
	if (unk_0xEDD63461767A518C(&Global_2707307))
	{
		return 1;
	}
	if (func_151(unk_0x259BE71D8A81D4FA(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_151(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_91(bParam0);
	if (func_17(iVar0))
	{
		if (iVar0 == func_91(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_152(bool bParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(bParam0, &Var0, 13);
	return Var0;
}

int func_153(bool bParam0, bool bParam1)
{
	if (unk_0x7260716F2E4D7661())
	{
		Global_2707307 = { func_152(bParam0) };
		Global_2707320 = { func_152(bParam1) };
		if (unk_0xE582BF3EDDBB1A68(&Global_2707307))
		{
			if (unk_0xE582BF3EDDBB1A68(&Global_2707320))
			{
				unk_0xC07B1AA6155EC337(&Global_2707237, 35, &Global_2707307);
				unk_0xC07B1AA6155EC337(&Global_2707272, 35, &Global_2707320);
				if (Global_2707237 == Global_2707272)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_154()
{
	float fVar0;
	float fVar1;
	
	func_720();
	func_719();
	if (func_717())
	{
		func_598();
	}
	if (!func_7(unk_0x259BE71D8A81D4FA()))
	{
		if (func_570(0, 1, 1))
		{
			if (BitTest(uLocal_128, 6))
			{
				unk_0x8744D2E3FC95740E(&uLocal_128, 6);
			}
			switch (Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_3)
			{
				case 0:
					if (Local_157.f_37 < 2)
					{
						if (Local_157.f_37 > 0)
						{
							if (Local_157.f_3 != -1)
							{
								func_569(1);
								func_568(1);
							}
						}
					}
					else
					{
						func_568(2);
					}
					break;
				
				case 1:
					func_562(9);
					if (Local_1524.f_8 == 0)
					{
						Local_1524.f_8 = unk_0x39D1D336459711BE();
					}
					if (Local_157.f_37 >= 2)
					{
						func_568(2);
						Local_1524.f_9 = unk_0x39D1D336459711BE();
					}
					if (func_44())
					{
						func_562(0);
					}
					func_560((func_30() - func_561(&(Local_157.f_43), 0, 0)));
					func_557(func_559((func_30() - func_561(&(Local_157.f_43), 0, 0)), 0), func_558(Local_157.f_3));
					func_482(0, func_556());
					func_465();
					func_443();
					if (func_442())
					{
					}
					break;
				
				case 2:
					if (Local_157.f_37 > 2)
					{
						func_569(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_441())
						{
							fVar0 = 0f;
							fVar1 = 0,25f;
						}
						func_423(133, fVar0, fVar1, 0, 0, 0, 0);
						func_422(Local_157.f_3, 1);
						func_421(23, 1);
						if (Local_1524.f_8 == 0)
						{
							Local_1524.f_8 = unk_0x39D1D336459711BE();
						}
						if (Local_1524.f_9 == 0)
						{
							Local_1524.f_9 = unk_0x39D1D336459711BE();
						}
						func_417();
						unk_0xB65B0A6A52A484B5(1);
						if (func_441())
						{
							unk_0x425BBE19F25A57AB(0f);
							unk_0xDAE61414743C8D1D(0);
						}
						if (Local_157.f_3 == 14)
						{
							func_416(&Local_148);
						}
						func_415();
						if (!func_7(unk_0x259BE71D8A81D4FA()))
						{
							func_53(63, "AMCH_STARTED", func_414(Local_157.f_3), func_67(), -1, func_67(), 1, 0);
							if (func_411("AMCH_WARN", func_413(Local_157.f_3), func_412(Local_157.f_3)))
							{
								unk_0x428C32CC68809A35(1);
							}
						}
						if (func_44())
						{
							func_393(678f, 794f, 206f, 8f, 0);
							func_393(1911,3f, 4714,6f, 41,1f, 8f, 0);
							func_393(688,5021f, 735,4581f, 181,296f, 8f, 0);
						}
						func_568(3);
					}
					break;
				
				case 3:
					if (Local_157.f_37 > 3)
					{
						iLocal_130 = 0;
						func_568(4);
					}
					else
					{
						if (!BitTest(Local_157.f_2, 1))
						{
							func_351();
							func_348();
							func_347();
						}
						if (func_346(0) && !func_21(0))
						{
							func_345();
						}
					}
					if (func_441())
					{
						unk_0x73CB9EAA55D097EB(unk_0x259BE71D8A81D4FA());
					}
					func_344();
					func_319();
					func_598();
					func_482(0, 1);
					func_465();
					func_443();
					func_562(2);
					func_562(5);
					func_562(7);
					break;
				
				case 4:
					if (func_307(&uLocal_140, !BitTest(Local_157.f_2, 0)) || BitTest(Local_157.f_2, 0))
					{
						if (func_5(Local_157.f_3))
						{
							if (Local_157.f_37 == 5)
							{
								func_568(5);
							}
						}
						else
						{
							func_568(6);
						}
					}
					func_294();
					func_186();
					func_319();
					func_598();
					func_482(1, 1);
					func_415();
					break;
				
				case 5:
					if (Local_157.f_37 > 5)
					{
						func_568(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_181();
		}
	}
	else
	{
		func_181();
	}
	func_161();
	func_156();
	func_155();
}

void func_155()
{
	struct<2> Var0;
	int iVar1;
	
	if (func_44())
	{
		Var0 = { Local_157.f_67[iLocal_147 /*2*/] };
		if (unk_0x2FC2FDC413532977(Var0.f_1))
		{
			iVar1 = unk_0xE38610F405049F71(Var0.f_1);
			if (unk_0x1B1A446EFA398EB5(iVar1))
			{
				if (!unk_0xD9F5E1FEFD1329E4(iVar1, 0))
				{
					unk_0x68298CA6191CDFDB(&iVar1);
				}
			}
		}
		iLocal_147++;
		if (iLocal_147 >= 10)
		{
			iLocal_147 = 0;
			iLocal_156 = iLocal_155;
			iLocal_155 = 0;
		}
	}
}

void func_156()
{
	if (Local_157.f_37 == 5)
	{
		if (unk_0x2FC2FDC413532977(Local_157.f_67[iLocal_147 /*2*/].f_1))
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_157.f_67[iLocal_147 /*2*/].f_1), 0))
			{
				if (!BitTest(uLocal_153, iLocal_147))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_153, iLocal_147);
					iLocal_154[bLocal_147] = unk_0xCA369FBC0DE29517();
					unk_0xBD618A73193F9982(iLocal_154[bLocal_147], "Explosion_Countdown", unk_0xE38610F405049F71(Local_157.f_67[bLocal_147 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x3F002AA9562BF0BE(iLocal_154[bLocal_147], "Time", 30f);
				}
				if ((30000 - func_561(&(Local_157.f_45), 0, 0)) >= 0)
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_157.f_67[bLocal_147 /*2*/].f_1), 0))
					{
						func_562(1);
						iLocal_155 = 1;
					}
				}
				else if (unk_0xEADBDBE0422CF7E6(Local_157.f_67[bLocal_147 /*2*/].f_1))
				{
					unk_0xE4DC7B3DD712372B(unk_0xE38610F405049F71(Local_157.f_67[bLocal_147 /*2*/].f_1));
					unk_0xC392361DCE030EF4(unk_0xE38610F405049F71(Local_157.f_67[bLocal_147 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (BitTest(uLocal_153, bLocal_147) && !unk_0x9F0C06CFBACDD6A1(iLocal_154[bLocal_147]))
			{
				unk_0x8E4825CCACA34B58(iLocal_154[bLocal_147]);
			}
		}
		if (iLocal_156)
		{
			if (!func_114(unk_0x259BE71D8A81D4FA()))
			{
				func_158(func_559((30000 - func_561(&(Local_157.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				func_157();
			}
		}
	}
}

void func_157()
{
	Global_1670224.f_1172 = 1;
}

void func_158(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_160(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_159(7, bVar0);
		Global_1670224.f_4714[bVar0] = iParam0;
		StringCopy(&(Global_1670224.f_4714.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_4714.f_172[bVar0] = iParam2;
		Global_1670224.f_4714.f_216[bVar0] = iParam3;
		Global_1670224.f_4714.f_183[bVar0] = iParam4;
		Global_1670224.f_4714.f_194[bVar0] = iParam5;
		Global_1670224.f_4714.f_249[bVar0] = iParam6;
		Global_1670224.f_4714.f_260[bVar0] = iParam7;
		Global_1670224.f_4714.f_205[bVar0] = iParam8;
		Global_1670224.f_4714.f_314[bVar0] = iParam9;
		Global_1670224.f_4714.f_325[bVar0] = iParam10;
		Global_1670224.f_4714.f_357[bVar0] = iParam11;
		Global_1670224.f_4714.f_238[bVar0] = iParam12;
		Global_1670224.f_4714.f_271[bVar0] = iParam13;
		Global_1670224.f_4714.f_368[bVar0] = iParam14;
		Global_1670224.f_4714.f_379[bVar0] = iParam15;
		Global_1670224.f_4714.f_390[bVar0] = iParam16;
		Global_1670224.f_4714.f_227[bVar0] = iParam17;
	}
}

void func_159(int iParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1670224.f_7064[iParam0]), bParam1);
}

int func_160(int iParam0, int iParam1)
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

void func_161()
{
	if (((func_12(unk_0x259BE71D8A81D4FA(), 1, 1) && !func_7(unk_0x259BE71D8A81D4FA())) && !func_177(unk_0x259BE71D8A81D4FA())) && func_570(0, 1, 1))
	{
		if (Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_3 == 1)
		{
			func_174(func_176(Local_157.f_3), func_413(Local_157.f_3), 0, 0);
		}
		else if (Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_3 == 3)
		{
			if (!BitTest(uLocal_128, 10))
			{
				func_162(func_412(Local_157.f_3), 0);
			}
			else
			{
				func_162("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_415();
		}
	}
	else
	{
		func_415();
	}
}

void func_162(char* sParam0, bool bParam1)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam0) > 23)
	{
		return;
	}
	if (func_172(sParam0))
	{
		return;
	}
	func_166();
	Global_1574765 = 0;
	StringCopy(&(Global_1574765.f_1), unk_0x1AF90EB93E0012D6(), 32);
	Global_1574765.f_9 = unk_0x70E57E9927B6BA58(&(Global_1574765.f_1));
	StringCopy(&(Global_1574765.f_12), sParam0, 16);
	func_165();
	func_164(bParam1);
	func_163();
}

void func_163()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1574765.f_59), true);
}

void func_164(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1574765.f_59), false);
		return;
	}
	unk_0x8744D2E3FC95740E(&(Global_1574765.f_59), false);
}

void func_165()
{
	Global_1574765.f_10 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 86400000);
	Global_1574765.f_11 = unk_0x7E3F74F641EE6B27();
}

void func_166()
{
	func_168();
	func_167(0);
}

void func_167(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x76CD105BCAC6EB9F();
	Global_1574765 = 20;
	StringCopy(&(Global_1574765.f_1), "", 32);
	Global_1574765.f_9 = 0;
	if (bVar0)
	{
		Global_1574765.f_10 = unk_0x7E3F74F641EE6B27();
		Global_1574765.f_11 = unk_0x7E3F74F641EE6B27();
	}
	StringCopy(&(Global_1574765.f_12), "", 16);
	StringCopy(&(Global_1574765.f_16), "", 64);
	StringCopy(&(Global_1574765.f_32), "", 64);
	Global_1574765.f_52 = 0;
	Global_1574765.f_53 = 0;
	Global_1574765.f_54 = 0;
	Global_1574765.f_55 = -1;
	Global_1574765.f_56 = 0;
	Global_1574765.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_168()
{
	if (!func_171())
	{
	}
	if (func_170())
	{
		unk_0x7C59282918D59E1B(&(Global_1574765.f_12));
		func_169();
		unk_0xD4C961FBE468D19D();
	}
}

void func_169()
{
	switch (Global_1574765)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x511D14ED2DA887E1(Global_1574765.f_52);
			return;
		
		case 2:
			unk_0x511D14ED2DA887E1(Global_1574765.f_52);
			unk_0x511D14ED2DA887E1(Global_1574765.f_53);
			return;
		
		case 3:
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_16));
			return;
		
		case 4:
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_16));
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_32));
			return;
		
		case 5:
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			return;
		
		case 6:
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			return;
		
		case 7:
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_16));
			return;
		
		case 8:
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_16));
			return;
		
		case 9:
			unk_0xB993F5B7A74B2A85(&(Global_1574765.f_16));
			return;
		
		case 10:
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			unk_0x60D332F23943B34F(&(Global_1574765.f_32));
			return;
		
		case 12:
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_32));
			return;
		
		case 13:
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_16));
			unk_0x4E5A3D96808F7F84(Global_1574765.f_57);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_32));
			return;
		
		case 11:
			unk_0xB993F5B7A74B2A85(&(Global_1574765.f_16));
			return;
		
		case 14:
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_32));
			return;
		
		case 15:
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			unk_0x4E5A3D96808F7F84(Global_1574765.f_57);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_32));
			return;
		
		case 17:
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			unk_0x60D332F23943B34F(&(Global_1574765.f_32));
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_48));
			return;
		
		case 16:
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			return;
		
		case 19:
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_16));
			return;
		
		case 18:
			unk_0x60D332F23943B34F(&(Global_1574765.f_16));
			unk_0x4E5A3D96808F7F84(Global_1574765.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574765.f_48));
			unk_0x60D332F23943B34F(&(Global_1574765.f_32));
			return;
		
		default:
	}
}

int func_170()
{
	if (Global_1574765 == 20)
	{
		return 0;
	}
	return 1;
}

int func_171()
{
	if (!func_170())
	{
		return 0;
	}
	unk_0x32A590914F10401C(&(Global_1574765.f_12));
	func_169();
	return unk_0x96DEE7666C9409E5();
}

bool func_172(char* sParam0)
{
	if (!func_170())
	{
		return 0;
	}
	if (Global_1574765 == 11)
	{
		return func_173(sParam0);
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574765.f_12));
}

bool func_173(char* sParam0)
{
	if (!func_170())
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574765.f_16));
}

int func_174(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam1))
	{
		return 0;
	}
	if (func_175(sParam0, sParam1) && iParam3 == Global_1574765.f_58)
	{
		return 0;
	}
	func_166();
	Global_1574765 = 3;
	StringCopy(&(Global_1574765.f_1), unk_0x1AF90EB93E0012D6(), 32);
	Global_1574765.f_9 = unk_0x70E57E9927B6BA58(&(Global_1574765.f_1));
	StringCopy(&(Global_1574765.f_12), sParam0, 16);
	StringCopy(&(Global_1574765.f_16), sParam1, 64);
	Global_1574765.f_58 = iParam3;
	Global_1574765.f_56 = iParam3;
	func_165();
	func_164(bParam2);
	func_163();
	return 1;
}

bool func_175(char* sParam0, char* sParam1)
{
	if (!func_170())
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam1))
	{
		return 0;
	}
	if (!unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574765.f_12)))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam1) == unk_0x70E57E9927B6BA58(&(Global_1574765.f_16));
}

char* func_176(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D())) || unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D())) || unk_0xC5F2281709805477(unk_0x4A8C381C258A124D())) || unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D())) || unk_0x17CB7D9FBEC4100F(unk_0x4A8C381C258A124D()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D())) || unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D())) || unk_0xC5F2281709805477(unk_0x4A8C381C258A124D())) || unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D())) || unk_0x17CB7D9FBEC4100F(unk_0x4A8C381C258A124D())) || unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
					iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
					if (unk_0x78B050AFBA6D1517(iVar1) && unk_0x3801E353091A2E42(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0x1F7A48429F9F64CE(unk_0x4A8C381C258A124D()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_sniperrifle"), 0) && !unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_heavysniper"), 0)) && !unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D())) || unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D())) || unk_0xC5F2281709805477(unk_0x4A8C381C258A124D())) || unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D())) || unk_0x17CB7D9FBEC4100F(unk_0x4A8C381C258A124D()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

int func_177(bool bParam0)
{
	if (bParam0 == unk_0x259BE71D8A81D4FA())
	{
		if (((func_180() && !func_179()) || func_178(unk_0x259BE71D8A81D4FA(), 21)) || func_178(unk_0x259BE71D8A81D4FA(), 25))
		{
			return 1;
		}
		if (func_48(&(Global_1836959.f_13)))
		{
			if (!func_1(&(Global_1836959.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_47(&(Global_1836959.f_13));
		}
	}
	else if (BitTest(Global_1887305[bParam0 /*610*/].f_1, 10))
	{
		return 1;
	}
	return BitTest(Global_1887305[bParam0 /*610*/].f_1, 9);
}

bool func_178(bool bParam0, int iParam1)
{
	return BitTest(Global_2657971[bParam0 /*465*/].f_219, iParam1);
}

bool func_179()
{
	return Global_1574582.f_1;
}

bool func_180()
{
	return Global_1574582;
}

void func_181()
{
	if (!BitTest(uLocal_128, 6))
	{
		unk_0xAD01710361B8BCF5();
		func_482(1, 1);
		unk_0x8E4825CCACA34B58(iLocal_136);
		unk_0x8744D2E3FC95740E(&uLocal_128, 4);
		func_185();
		func_183();
		unk_0x4A12B9AB7A7BA5C0(0f, 0, 21);
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_128, 6);
		func_182();
	}
}

void func_182()
{
	Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_7 = 0;
}

void func_183()
{
	if (Global_2644881.f_6 == unk_0x8F76B2250AC806FA())
	{
		func_184();
	}
}

void func_184()
{
	struct<28> Var0;
	
	if (unk_0xF40767E41852FB72(Global_2644881.f_6))
	{
		if (!Global_2644881.f_6 == unk_0x8F76B2250AC806FA())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2644881 = { Var0 };
	Global_2644881.f_6 = -1;
}

void func_185()
{
	struct<6> Var0;
	
	if (Global_2635563.f_490.f_1 == unk_0x8F76B2250AC806FA())
	{
		Global_2635563.f_490 = { Var0 };
	}
}

void func_186()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (!BitTest(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_1, 0))
	{
		if (func_7(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_1), false);
			return;
		}
		if (func_177(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_1), false);
			return;
		}
		func_255(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_1524.f_6 = (Local_1524.f_6 + iVar0);
			if (!Global_262145.f_11965)
			{
				func_253(10, Local_1524.f_6);
			}
			Global_2698715 = iVar0;
			if (func_252())
			{
				func_240(joaat("service_earn_ambient_job_challenges"), iVar0, &uVar3, 0, 1, 0);
			}
			else
			{
				unk_0x237E99388DCA3CEF(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_1524.f_7 = (Local_1524.f_7 + iVar1);
			func_239();
			func_187(0, unk_0x4A8C381C258A124D(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_1), false);
	}
}

int func_187(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_188(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_188(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_198(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xFC8BFE4B41177C22(iParam1))
		{
			if (unk_0x0101C509A6E67F99(iParam1))
			{
				uVar1 = unk_0xBD545F8729E9F413(iParam1);
				func_194(unk_0x83FDC027F0BEA202(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_189(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_189(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_192(iParam0, 1) };
	if (iParam0 == func_191(unk_0x4A8C381C258A124D()))
	{
		func_190(1);
	}
	func_194(Var0, iParam1, 0, sParam2, uParam3);
}

void func_190(int iParam0)
{
	Global_2672855.f_1725 = iParam0;
}

int func_191(int iParam0)
{
	return iParam0;
}

Vector3 func_192(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (unk_0x174DBD3C5DB3557B())
	{
		Var1 = { unk_0xD84A545408A3099A(2) };
	}
	if (iParam0 == func_193(unk_0x4A8C381C258A124D()) && unk_0xBCF87EE3DC296C2A(unk_0xBF03D0685ADC793B()) == 4)
	{
		Var0 = { unk_0x0D1381B6E0F3987D(iParam0, 0f, 8f, -0,2f) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		fVar2 = unk_0xCFC0C995455A6204(iParam0);
		if (unk_0xBCF87EE3DC296C2A(unk_0xBF03D0685ADC793B()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	unk_0xC93BAF616F1C680F(unk_0x4B423FAA24E8ABF0(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0,18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0,18f);
	}
	Var0 = { unk_0xF10F2A2453AF1DFB(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_193(int iParam0)
{
	return iParam0;
}

void func_194(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672855.f_1124[iVar0 /*30*/].f_6 == 0 || Global_2672855.f_1124[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672855.f_1124[iVar1 /*30*/] = { Param0 };
			Global_2672855.f_1124[iVar1 /*30*/].f_6 = 1;
			Global_2672855.f_1124[iVar1 /*30*/].f_4 = func_197(Global_2672855.f_1124[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672855.f_1124[iVar1 /*30*/].f_7 = unk_0x7E3F74F641EE6B27();
			Global_2672855.f_1124[iVar1 /*30*/].f_3 = iParam1;
			Global_2672855.f_1124[iVar1 /*30*/].f_8 = iParam2;
			Global_2672855.f_1124[iVar1 /*30*/].f_9 = func_196();
			Global_2672855.f_1124[iVar1 /*30*/].f_10 = func_195();
			StringCopy(&(Global_2672855.f_1124[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2672855.f_1124[iVar1 /*30*/].f_26 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), uParam4);
		}
	}
}

int func_195()
{
	if (Global_2672855.f_1725)
	{
		Global_2672855.f_1725 = 0;
		return 1;
	}
	Global_2672855.f_1725 = 0;
	return 0;
}

var func_196()
{
	var uVar0;
	
	uVar0 = Global_2672855.f_1727;
	Global_2672855.f_1727 = 1;
	return uVar0;
}

float func_197(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xED977E2AE2CB16EE(unk_0xCF141FCD0940B0A3(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0,402f;
		*uParam2 = 0,476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0,212f;
		*uParam2 = 0,286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0,402f - 0,212f));
	fVar3 = (fVar1 * (0,476f - 0,286f));
	*uParam1 = (fVar2 + 0,212f);
	*uParam2 = (fVar3 + 0,286f);
	return fVar1;
}

var func_198(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_199(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_199(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_230();
	if (func_229(uParam2))
	{
	}
	if (func_228())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = system::round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_226(iVar1);
		fVar3 = (system::to_float(iVar1) * Global_262145.f_1);
		iVar1 = system::round(fVar3);
		if (bParam10)
		{
			iVar1 = func_225(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_223(0, &iVar1);
					break;
				
				case 3:
					func_223(1, &iVar1);
					break;
				
				case 1:
					func_221(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_262145.f_13369)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_220(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_207((func_219(unk_0x259BE71D8A81D4FA()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xF509A0F327DF0ADD(iVar1, iParam8, iParam9);
				if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_2 != -1)
				{
					func_220(1166, iVar1, -1);
				}
				func_204(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_200((func_202(unk_0x259BE71D8A81D4FA()) + iVar1));
			}
			else
			{
				func_200((func_202(unk_0x259BE71D8A81D4FA()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_200(int iParam0)
{
	if (func_228())
	{
		Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_5 = iParam0;
		func_201(joaat("mpply_globalxp"), iParam0);
	}
}

void func_201(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, 1);
	}
}

int func_202(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_12(bParam0, 0, 1))
		{
			if (bParam0 == unk_0x259BE71D8A81D4FA())
			{
				return func_203(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1845281[bParam0 /*883*/].f_206.f_5;
			}
		}
		else
		{
			return func_203(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_203(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_204(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_152(unk_0x259BE71D8A81D4FA()) };
	if (unk_0x7260716F2E4D7661())
	{
		if (unk_0xE582BF3EDDBB1A68(&Var0))
		{
			iVar1 = func_205(func_206(&Var0));
			if (iVar1 == 0)
			{
				func_201(joaat("mpply_crew_local_xp_0"), (func_203(joaat("mpply_crew_local_xp_0")) + iParam0));
			}
			else if (iVar1 == 1)
			{
				func_201(joaat("mpply_crew_local_xp_1"), (func_203(joaat("mpply_crew_local_xp_1")) + iParam0));
			}
			else if (iVar1 == 2)
			{
				func_201(joaat("mpply_crew_local_xp_2"), (func_203(joaat("mpply_crew_local_xp_2")) + iParam0));
			}
			else if (iVar1 == 3)
			{
				func_201(joaat("mpply_crew_local_xp_3"), (func_203(joaat("mpply_crew_local_xp_3")) + iParam0));
			}
			else if (iVar1 == 4)
			{
				func_201(joaat("mpply_crew_local_xp_4"), (func_203(joaat("mpply_crew_local_xp_4")) + iParam0));
			}
		}
	}
}

int func_205(int iParam0)
{
	if (iParam0 == func_203(joaat("mpply_crew_0_id")))
	{
		return 0;
	}
	else if (iParam0 == func_203(joaat("mpply_crew_1_id")))
	{
		return 1;
	}
	else if (iParam0 == func_203(joaat("mpply_crew_2_id")))
	{
		return 2;
	}
	else if (iParam0 == func_203(joaat("mpply_crew_3_id")))
	{
		return 3;
	}
	else if (iParam0 == func_203(joaat("mpply_crew_4_id")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_206(var uParam0)
{
	if (unk_0x7260716F2E4D7661())
	{
		if (unk_0xE582BF3EDDBB1A68(uParam0))
		{
			return Global_2696114;
		}
	}
	return Global_2696114;
}

void func_207(int iParam0, int iParam1, int iParam2)
{
	if (func_228())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10095 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_218(640, -1))
				{
					unk_0xF509A0F327DF0ADD(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == func_218(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10094 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xF509A0F327DF0ADD(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10094 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xF509A0F327DF0ADD(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_217(unk_0x259BE71D8A81D4FA()))
		{
			Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_1 = iParam0;
			Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_6 = func_214(iParam0, 1);
		}
		func_211(640, iParam0, -1, 1);
		func_211(641, func_214(iParam0, 1), -1, 1);
		func_208(-1109644434, 7, 0);
	}
}

void func_208(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_210(iParam1, iParam2))
	{
		iVar0 = func_209();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_209()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2696066[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_210(int iParam0, var uParam1)
{
	if (Global_1575071)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575083) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_212(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_212(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_213(uParam1));
}

int func_213(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

int func_214(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_215(iParam0, 0);
}

int func_215(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (func_216(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_216(iVar3) < iParam0)
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
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((system::to_float(iVar1) - system::to_float(iVar2)) / 2f) + system::to_float(iVar2));
		iVar3 = system::round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_216(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return joaat("pyro_sub_bass_synth");
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_217(bool bParam0)
{
	if (!func_17(bParam0))
	{
		return 0;
	}
	return BitTest(Global_2672855.f_1, bParam0);
}

int func_218(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_212(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_219(bool bParam0)
{
	if (Global_1574633.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == unk_0x259BE71D8A81D4FA())
			{
				return func_218(640, -1);
			}
			else if (func_217(bParam0))
			{
				return Global_1845281[bParam0 /*883*/].f_206.f_1;
			}
		}
	}
	else
	{
		return func_218(640, -1);
	}
	return 0;
}

void func_220(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_218(iParam0, func_213(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_211(iParam0, iVar0, iParam2, 1);
}

void func_221(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		iVar4 = unk_0xF0C9E5565CB32F4B(iVar0);
		if (unk_0x7206AEB20960CCC8(iVar4))
		{
			bVar5 = unk_0x4470BE79F5771783(iVar4);
			if (unk_0x1864096A95E36EBA(bVar5) != -1)
			{
				if (unk_0x1864096A95E36EBA(bVar5) == iVar1 || func_77(unk_0x1864096A95E36EBA(bVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (bVar5 != unk_0x259BE71D8A81D4FA())
					{
						if (func_153(unk_0x259BE71D8A81D4FA(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar3)
	{
		iVar6 = system::round((func_222(*iParam0, 100) * (10f * Global_262145.f_3922)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = system::round((func_222(*iParam0, 100) * (20f * Global_262145.f_3920)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_222(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = system::to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_223(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x95C7A22DBE7AEF4C())
		{
			iVar3 = iVar0;
			if (unk_0x7206AEB20960CCC8(iVar3))
			{
				bVar4 = unk_0x4470BE79F5771783(iVar3);
				if (func_12(bVar4, 0, 1))
				{
					if (bVar4 != unk_0x259BE71D8A81D4FA())
					{
						iVar1++;
						if (func_153(unk_0x259BE71D8A81D4FA(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (func_12(bVar4, 1, 1))
			{
				if (bVar4 != unk_0x259BE71D8A81D4FA())
				{
					if (func_224(unk_0x259BE71D8A81D4FA(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_153(unk_0x259BE71D8A81D4FA(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = system::round((func_222(*iParam1, 100) * (10f * Global_262145.f_3922)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = system::round((func_222(*iParam1, 100) * (20f * Global_262145.f_3920)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_224(bool bParam0, bool bParam1)
{
	return system::vdist(func_39(bParam0), func_39(bParam1));
	return 0f;
}

int func_225(int iParam0)
{
	int iVar0;
	
	if (unk_0xC613ED89DC21151D() != 3)
	{
		return *iParam0;
	}
	iVar0 = system::round((func_222(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_226(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x510D0699BE9C6D06(iParam0) > func_219(unk_0x259BE71D8A81D4FA()))
		{
			iParam0 = -func_219(unk_0x259BE71D8A81D4FA());
		}
	}
	if (func_227(8000, 0, 0) > 0)
	{
		if (func_227(8000, 0, 0) < (iParam0 + func_219(unk_0x259BE71D8A81D4FA())))
		{
			iParam0 = (func_227(8000, 0, 0) - func_219(unk_0x259BE71D8A81D4FA()));
		}
	}
	return iParam0;
}

int func_227(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return func_216(iParam0);
}

int func_228()
{
	return 1;
}

int func_229(var uParam0)
{
	if (unk_0xFF692AB7350A74D7(uParam0))
	{
		return 1;
	}
	else if (unk_0x1B79E937E91F40C3(uParam0, "") || unk_0x1B79E937E91F40C3(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	int iVar0;
	
	if (func_238(unk_0x259BE71D8A81D4FA()) || func_237(unk_0x259BE71D8A81D4FA()))
	{
		if (Global_262145.f_10125 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10125;
		}
	}
	else if (func_235() || func_232(unk_0x259BE71D8A81D4FA()))
	{
		if (Global_262145.f_22930 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_22930;
		}
	}
	else if (func_231(Global_4718592.f_185586))
	{
		if (Global_262145.f_7169 > 36000)
		{
			iVar0 = 36000;
		}
		else
		{
			iVar0 = Global_262145.f_7169;
		}
	}
	else if (Global_262145.f_7168 > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7168;
	}
	return iVar0;
}

bool func_231(int iParam0)
{
	return iParam0 == 89;
}

int func_232(bool bParam0)
{
	return func_233(func_234(bParam0));
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_234(bool bParam0)
{
	if (func_17(bParam0))
	{
		if (func_126(bParam0, 0))
		{
			return Global_1887305[bParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

bool func_235()
{
	if (unk_0x834C960822A4683F())
	{
		return func_65();
	}
	return func_236(Global_4718592.f_127178);
}

int func_236(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4707[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_237(bool bParam0)
{
	return Global_2657971[bParam0 /*465*/].f_122 == 2;
}

bool func_238(bool bParam0)
{
	return Global_2657971[bParam0 /*465*/].f_122 == 7;
}

void func_239()
{
	Global_2698052 = 1;
}

void func_240(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_252())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("service_spend_mechanic_wage"):
		case joaat("service_spend_utility_bills"):
		case joaat("service_spend_prostitutes"):
		case joaat("service_spend_strip_club"):
		case joaat("service_spend_cinema"):
		case joaat("service_spend_fairground"):
		case joaat("service_spend_lottery"):
		case joaat("service_spend_telescope"):
		case joaat("service_spend_call_player"):
		case joaat("service_spend_vehicle_insurance"):
		case joaat("service_spend_vehicle_insurance_premium"):
		case joaat("service_spend_car_repair"):
		case joaat("service_spend_personal_vehicle_dropoff"):
		case joaat("service_spend_pegasus_delivery"):
		case joaat("service_spend_car_impound"):
		case joaat("service_spend_carwash"):
		case joaat("service_spend_healthcare"):
		case joaat("service_spend_other_player_healthcare"):
		case joaat("service_spend_arrest_bail"):
		case joaat("service_spend_cash_drop"):
		case joaat("service_spend_robbed_by_mugger"):
		case joaat("service_spend_cash_drop_holdup"):
		case joaat("service_spend_match_entry_fee"):
		case joaat("service_spend_race_vehicle_rental"):
		case joaat("service_spend_challenge_wager"):
		case joaat("service_spend_betting"):
		case joaat("service_spend_airstrike"):
		case joaat("service_spend_ammo_drop"):
		case joaat("service_spend_backup_gang"):
		case joaat("service_spend_backup_heli"):
		case joaat("service_spend_boat_pickup"):
		case joaat("service_spend_bounty"):
		case joaat("service_spend_bull_shark"):
		case joaat("service_spend_cops_turn_eye"):
		case joaat("service_spend_heli_pickup"):
		case joaat("service_spend_hire_mercenary"):
		case joaat("service_spend_hire_mugger"):
		case joaat("service_spend_locate_vehicle"):
		case joaat("service_spend_lose_wanted_level"):
		case joaat("service_spend_off_the_radar"):
		case joaat("service_spend_passive"):
		case joaat("service_spend_request_heist"):
		case joaat("service_spend_request_job"):
		case joaat("service_spend_reveal_players"):
		case joaat("service_spend_taxi"):
		case joaat("service_spend_bank_interest"):
		case joaat("service_spend_cash_gift"):
		case joaat("service_spend_cash_shared"):
		case joaat("service_spend_impromptu_race_fee"):
		case joaat("service_spend_bounty_dm"):
		case joaat("service_spend_wager"):
		case joaat("service_spend_pay_boss"):
		case joaat("service_spend_pay_goon"):
		case joaat("service_spend_rename_organization"):
		case joaat("service_spend_rename_acid_product"):
		case joaat("service_spend_rename_acid_lab"):
		case joaat("service_spend_pa_service_heli_pickup"):
		case joaat("service_spend_order_bodyguard_vehicle"):
		case joaat("service_spend_order_warehouse_vehicle"):
		case joaat("service_spend_jukebox"):
		case joaat("service_spend_business"):
		case joaat("service_spend_ba_vp_bounty"):
		case joaat("service_spend_ba_vp_bullshark"):
		case joaat("service_spend_ba_sarge_ammo"):
		case joaat("service_spend_ba_sarge_molotov"):
		case joaat("service_spend_ba_enforcer_armour"):
		case joaat("service_spend_vehicle_export_mods"):
		case joaat("service_spend_import_export_repair"):
		case joaat("service_spend_employ_assassins"):
		case joaat("service_spend_gangops_cannon"):
		case joaat("service_spend_gangops_skip_mission"):
		case joaat("service_spend_gangops_start_strand"):
		case joaat("service_spend_gangops_trip_skip"):
		case joaat("service_spend_gangops_repair_cost"):
		case joaat("service_spend_nightclub_entry_fee"):
		case joaat("service_spend_nightclub_bar_drink"):
		case joaat("service_spend_nightclub_dj_rehire"):
		case joaat("service_spend_arena_join_spectator"):
		case joaat("service_spend_arena_spectator_box"):
		case joaat("service_spend_make_it_rain"):
		case 571787049:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_241(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_pickup"):
		case joaat("service_earn_jobs"):
		case joaat("service_earn_betting"):
		case joaat("service_earn_lottery"):
		case joaat("service_earn_challenge_win"):
		case joaat("service_earn_property_sales"):
		case joaat("service_earn_vehicle_sales"):
		case joaat("service_earn_lester_target_kill"):
		case joaat("service_earn_bounty_collected"):
		case joaat("service_earn_crate_drop"):
		case joaat("service_earn_holdups"):
		case joaat("service_earn_import_export"):
		case joaat("service_earn_armored_trucks"):
		case joaat("service_earn_jobshare_cash"):
		case joaat("service_earn_not_badsport"):
		case joaat("service_earn_bank_interest"):
		case joaat("service_earn_debug"):
		case joaat("service_earn_cncw"):
		case joaat("service_earn_cncb"):
		case joaat("service_earn_job_bonus"):
		case joaat("service_earn_bend_job"):
		case joaat("service_earn_personal_vehicle"):
		case joaat("service_earn_daily_objectives"):
		case joaat("service_earn_ambient_job_plane_takedown"):
		case joaat("service_earn_ambient_job_distract_cops"):
		case joaat("service_earn_ambient_job_destroy_veh"):
		case joaat("service_earn_refund_backup_vagos"):
		case joaat("service_earn_refund_backup_lost"):
		case joaat("service_earn_refund_backup_families"):
		case joaat("service_earn_refund_hire_mugger"):
		case joaat("service_earn_refund_hire_mercenary"):
		case joaat("service_earn_refund_buy_cardropoff"):
		case joaat("service_earn_refund_heli_pickup"):
		case joaat("service_earn_refund_boat_pickup"):
		case joaat("service_earn_refund_clear_wanted"):
		case joaat("service_earn_refund_head_2_head"):
		case joaat("service_earn_refund_challenge"):
		case joaat("service_earn_refund_share_last_job"):
		case joaat("service_earn_refund_lottery"):
		case -1426920838:
		case joaat("service_earn_gangattack_pickup"):
		case joaat("service_earn_ambient_job_hot_target_deliver"):
		case joaat("service_earn_ambient_job_hot_target_kill"):
		case joaat("service_earn_ambient_job_urban_warfare"):
		case joaat("service_earn_ambient_job_checkpoint_collection"):
		case joaat("service_earn_ambient_job_time_trial"):
		case joaat("service_earn_ambient_job_challenges"):
		case joaat("service_earn_ambient_job_heli_hot_target"):
		case joaat("service_earn_ambient_job_dead_drop"):
		case joaat("service_earn_ambient_job_penned_in"):
		case joaat("service_earn_ambient_job_pass_parcel"):
		case joaat("service_earn_ambient_job_blast"):
		case joaat("service_earn_ambient_job_hot_property"):
		case joaat("service_earn_ambient_job_king"):
		case joaat("service_earn_ambient_job_beast"):
		case joaat("service_earn_boss"):
		case joaat("service_earn_goon"):
		case joaat("service_earn_boss_agency"):
		case joaat("service_earn_from_destroying_contraband"):
		case joaat("service_earn_premium_job"):
		case joaat("service_earn_from_vehicle_export"):
		case joaat("service_earn_smuggler_agency"):
		case joaat("service_earn_wage_payment_bonus"):
		case joaat("service_earn_wage_payment"):
		case joaat("service_earn_refundammodrop"):
		case joaat("service_earn_salvage_checkpoint_collection"):
		case joaat("service_earn_ambient_mugging"):
		case joaat("service_earn_ambient_pickup"):
		case joaat("service_earn_deathmatch_bounty"):
		case joaat("service_earn_cashing_out"):
		case joaat("service_earn_job_bonus_criminal_mastermind"):
		case joaat("service_earn_job_bonus_heist_award"):
		case joaat("service_earn_job_bonus_first_time_bonus"):
		case joaat("service_earn_refund_orbital_manual"):
		case joaat("service_earn_refund_orbital_auto"):
		case joaat("service_earn_gangops_wages"):
		case joaat("service_earn_gangops_wages_bonus"):
		case joaat("service_earn_gangops_prep_participation"):
		case joaat("service_earn_gangops_setup"):
		case joaat("service_earn_gangops_setup_fail"):
		case joaat("service_earn_gangops_finale"):
		case joaat("service_earn_gangops_award_mastermind_2"):
		case joaat("service_earn_gangops_award_mastermind_3"):
		case joaat("service_earn_gangops_award_mastermind_4"):
		case joaat("service_earn_gangops_award_loyalty_award_2"):
		case joaat("service_earn_gangops_award_loyalty_award_3"):
		case joaat("service_earn_gangops_award_loyalty_award_4"):
		case joaat("service_earn_gangops_award_first_time_xm_base"):
		case joaat("service_earn_gangops_award_first_time_xm_submarine"):
		case joaat("service_earn_gangops_award_first_time_xm_silo"):
		case joaat("service_earn_gangops_award_supporting"):
		case joaat("service_earn_gangops_award_order"):
		case joaat("service_earn_gangops_elite_xm_base"):
		case joaat("service_earn_gangops_elite_xm_submarine"):
		case joaat("service_earn_gangops_elite_xm_silo"):
		case joaat("service_earn_gangops_rival_delivery"):
		case joaat("service_earn_doomsday_finale_bonus"):
		case joaat("service_earn_bounty_hunter_reward"):
		case joaat("service_earn_from_business_battle"):
		case joaat("service_earn_from_club_management_participation"):
		case joaat("service_earn_from_fmbb_phonecall_mission"):
		case joaat("service_earn_from_business_hub_sell"):
		case joaat("service_earn_from_fmbb_boss_work"):
		case joaat("service_earn_fmbb_wage_bonus"):
		case joaat("service_earn_bb_event_bonus"):
		case joaat("service_earn_arena_skill_lvl_award"):
		case joaat("service_earn_arena_career_tier_progression_1"):
		case joaat("service_earn_arena_career_tier_progression_2"):
		case joaat("service_earn_arena_career_tier_progression_3"):
		case joaat("service_earn_arena_career_tier_progression_4"):
		case joaat("service_earn_spin_the_wheel_cash"):
			func_241(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("service_spend_spin_the_wheel_payment"):
		case joaat("service_spend_casino_generic"):
		case joaat("service_spend_arcade_game"):
		case joaat("service_spend_arcade_generic"):
		case joaat("service_spend_casino_heist_skip_mission"):
		case joaat("service_spend_casino_heist_setup_heist"):
		case joaat("service_spend_casino_heist_casino_model"):
		case joaat("service_spend_casino_heist_vault_door"):
		case joaat("service_spend_casino_heist_door_security"):
		case joaat("service_spend_island_heist_support_airstrike"):
		case joaat("service_spend_island_heist_support_heavy_weapon"):
		case joaat("service_spend_island_heist_support_sniper"):
		case joaat("service_spend_island_heist_support_air_support"):
		case joaat("service_spend_island_heist_support_drone"):
		case joaat("service_spend_island_heist_support_weapon_stash"):
		case joaat("service_spend_island_heist_suppressors"):
		case joaat("service_spend_island_heist_replay"):
		case joaat("service_spend_beach_party_generic"):
		case joaat("service_spend_submarine_utility_fee"):
		case joaat("service_spend_submarine_boat"):
		case joaat("service_spend_submarine_relocation"):
		case joaat("service_spend_casino_club_generic"):
		case joaat("service_spend_business_expenses"):
		case joaat("service_spend_fixer_hq_concierge"):
		case joaat("service_spend_request_company_suv"):
		case joaat("service_spend_interaction_menu_ability"):
		case joaat("service_spend_agent_14_vehicle_request"):
		case joaat("service_spend_tony_limo"):
		case joaat("service_spend_nightclub_toilet_attendant"):
		case joaat("service_spend_jugallo_boss_vehicle_request"):
		case 1989973742:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_241(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_assassinate_target_killed"):
		case joaat("service_earn_arena_war"):
		case joaat("service_earn_refund_arena_spec_box_entry"):
		case joaat("service_earn_ambient_job_rc_time_trial"):
		case joaat("service_earn_daily_objective_event"):
		case joaat("service_earn_collectables_action_figures"):
		case joaat("service_earn_casino_mission_reward"):
		case joaat("service_earn_casino_award_mission_one_first_time"):
		case joaat("service_earn_casino_award_mission_two_first_time"):
		case joaat("service_earn_casino_award_mission_three_first_time"):
		case joaat("service_earn_casino_award_mission_four_first_time"):
		case joaat("service_earn_casino_award_mission_five_first_time"):
		case joaat("service_earn_casino_award_mission_six_first_time"):
		case joaat("service_earn_casino_award_straight_flush"):
		case joaat("service_earn_casino_award_top_pair"):
		case joaat("service_earn_casino_award_full_house"):
		case joaat("service_earn_casino_award_lucky_lucky"):
		case joaat("service_earn_casino_award_high_roller_bronze"):
		case joaat("service_earn_casino_award_high_roller_silver"):
		case joaat("service_earn_casino_award_high_roller_gold"):
		case joaat("service_earn_casino_award_high_roller_platinum"):
		case joaat("service_earn_casino_story_mission_reward"):
		case joaat("service_earn_casino_heist_setup_mission"):
		case joaat("service_earn_casino_heist_prep_mission"):
		case joaat("service_earn_casino_heist_finale"):
		case joaat("service_earn_casino_heist_award_smash_n_grab"):
		case joaat("service_earn_casino_heist_award_in_plain_sight"):
		case joaat("service_earn_casino_heist_award_undetected"):
		case joaat("service_earn_casino_heist_award_all_rounder"):
		case joaat("service_earn_casino_heist_award_elite_thief"):
		case joaat("service_earn_casino_heist_award_professional"):
		case joaat("service_earn_casino_heist_elite_stealth"):
		case joaat("service_earn_casino_heist_elite_subterfuge"):
		case joaat("service_earn_casino_heist_elite_direct"):
		case joaat("service_earn_collectable_item"):
		case joaat("service_earn_collectable_completed_collection"):
		case joaat("service_earn_collectables_signal_jammers"):
		case joaat("service_earn_collectables_signal_jammers_complete"):
		case joaat("service_earn_island_heist_finale"):
		case joaat("service_earn_island_heist_elite_challenge"):
		case joaat("service_earn_island_heist_award_professional"):
		case joaat("service_earn_island_heist_award_elite_thief"):
		case joaat("service_earn_island_heist_award_the_island_heist"):
		case joaat("service_earn_island_heist_award_going_alone"):
		case joaat("service_earn_island_heist_award_team_work"):
		case joaat("service_earn_island_heist_award_cat_burglar"):
		case joaat("service_earn_island_heist_award_pro_thief"):
		case joaat("service_earn_island_heist_award_mixing_it_up"):
		case joaat("service_earn_island_heist_prep"):
		case joaat("service_earn_island_heist_dj_mission"):
		case joaat("service_earn_tuner_robbery_prep"):
		case joaat("service_earn_tuner_robbery_finale"):
		case joaat("service_earn_tuner_car_club_membership"):
		case joaat("service_earn_tuner_daily_vehicle"):
		case joaat("service_earn_tuner_daily_vehicle_bonus"):
		case joaat("service_earn_tuner_award_union_depository"):
		case joaat("service_earn_tuner_award_military_convoy"):
		case joaat("service_earn_tuner_award_fleeca_bank"):
		case joaat("service_earn_tuner_award_freight_train"):
		case joaat("service_earn_tuner_award_bolingbroke_ass"):
		case joaat("service_earn_tuner_award_iaa_raid"):
		case joaat("service_earn_tuner_award_meth_job"):
		case joaat("service_earn_tuner_award_bunker_raid"):
		case joaat("service_earn_auto_shop_delivery_award"):
		case joaat("service_earn_agency_security_contract"):
		case joaat("service_earn_agency_payphone_hit"):
		case joaat("service_earn_agency_story_prep"):
		case joaat("service_earn_agency_story_finale"):
		case joaat("service_earn_fixer_award_sec_con"):
		case joaat("service_earn_fixer_award_phone_hit"):
		case joaat("service_earn_fixer_award_agency_story"):
		case joaat("service_earn_fixer_award_short_trip"):
		case joaat("service_earn_fixer_rival_delivery"):
		case joaat("service_earn_music_studio_short_trip"):
		case joaat("service_earn_from_contraband"):
		case joaat("service_earn_nclub_troublemaker"):
		case joaat("service_earn_sightseeing_reward"):
		case joaat("service_earn_ambient_job_clubhouse_contract"):
		case joaat("service_earn_ambient_job_underwater_cargo"):
		case joaat("service_earn_ambient_job_crime_scene"):
		case joaat("service_earn_ambient_job_metal_detector"):
		case joaat("service_earn_ambient_job_smuggler_plane"):
		case joaat("service_earn_ambient_job_smuggler_trail"):
		case joaat("service_earn_ambient_job_golden_gun"):
		case joaat("service_earn_ambient_job_ammunation_delivery"):
		case joaat("service_earn_ambient_job_source_research"):
		case joaat("service_earn_yohan_source_goods"):
		case joaat("service_earn_taxi_job"):
		case joaat("service_earn_daily_stash_house_participation"):
		case joaat("service_earn_daily_stash_house_completed"):
		case joaat("service_earn_ambient_job_gang_convoy"):
		case joaat("service_earn_ambient_job_shop_robbery"):
		case joaat("service_earn_ambient_job_xmas_mugger"):
		case joaat("service_earn_ambient_job_maze_bank"):
		case joaat("service_earn_juggalo_story_mission"):
		case joaat("service_earn_juggalo_phone_mission"):
		case joaat("service_earn_winter_22_award_juggalo_story"):
		case joaat("service_earn_winter_22_award_acid_lab"):
		case joaat("service_earn_winter_22_award_daily_stash"):
		case joaat("service_earn_winter_22_award_dead_drop"):
		case joaat("service_earn_winter_22_award_random_event"):
		case joaat("service_earn_winter_22_award_taxi"):
		case joaat("service_earn_acid_lab_setup_participation"):
		case joaat("service_earn_acid_lab_source_participation"):
		case joaat("service_earn_acid_lab_sell_participation"):
		case joaat("service_earn_smuggler_ops"):
		case joaat("service_earn_ambient_job_armored_truck"):
		case joaat("service_earn_ambient_job_bicycle_time_trial"):
		case joaat("service_earn_cayo_attrition_bonus_objective"):
		case joaat("service_earn_avenger_operations"):
		case joaat("service_earn_avenger_ops_bonus"):
		case joaat("service_earn_ambient_job_drug_vehicle"):
		case 649031587:
		case -1539520895:
		case 560526114:
		case -256590568:
		case -470808433:
		case 1245164680:
		case -1433838369:
		case 1648751987:
		case 674719198:
		case 617724895:
		case 1424147761:
		case 2131157548:
		case 1237940902:
		case -1688538833:
		case 918785029:
		case -1343182760:
		case -1725871206:
		case 1435585629:
		case 1851118721:
		case -1961446392:
		case -1726080156:
		case 300207193:
			func_241(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_241(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_252())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_16()) || unk_0x34F31012FED51A0F())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535950[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x54BC5E0B6A29AE8A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x5F7C6361179DFFC4(iVar4))
		{
			*uParam0 = func_248(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535950[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535950[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4537437 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537455 = 1;
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_247(1, iParam4);
			Global_4537455 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_242(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_242(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_127.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_243(iParam0);
	}
}

void func_243(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_252())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_246(iParam0))
		{
			if (!bVar0)
			{
				unk_0xD8EB47E09DFC393C();
			}
		}
		else if (!bVar0)
		{
			unk_0x1FDE21A286357401(Global_4535950[iParam0 /*85*/].f_66);
		}
		func_244(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_244(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_245(&(uParam0->f_14));
	func_245(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_245(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_246(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_247(int iParam0, var uParam1)
{
	Global_2698855 = uParam1;
	Global_2698854 = iParam0;
}

int func_248(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_252())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535950[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535950[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4535950[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535950[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4535950[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4535950[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535950[iVar0 /*85*/].f_66 = iParam0;
			Global_4535950[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535950[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535950[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4535950[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535950[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar0 /*85*/].f_66.f_14 = unk_0x8034325BF6D6E41F();
			Global_4535950[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537437 = 0;
			if (bParam6)
			{
				Global_4535950[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_249(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_249(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<4> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam19;
	iVar1 = func_251(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_250();
		unk_0x71A6F836422FDD2B(1, &Var0, 37, iVar1, Var0.f_0);
	}
}

void func_250()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_251(bool bParam0)
{
	var uVar0;
	
	if (func_17(bParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam0);
	}
	return uVar0;
}

int func_252()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

void func_253(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23639 != -1)
		{
			if (func_254())
			{
				Global_2738934.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7119)
				{
					iParam1 = Global_262145.f_7119;
				}
				Global_2738934.f_284 = iParam1;
				Global_2738934.f_285 = 0;
			}
		}
	}
}

int func_254()
{
	if (unk_0x761778199FE1211C() && Global_1979285 == 0)
	{
		return 0;
	}
	return 0;
}

void func_255(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_18(unk_0xAE032CEDCF23C6D5(), 1))
	{
		iVar1 = system::floor(((system::to_float((Local_157.f_1 - iLocal_126)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_11900)
		{
			iVar1 = Global_262145.f_11900;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_293() * iVar1);
		*uParam1 = (func_292() * iVar1);
		fVar2 = func_291();
		if (fVar2 > 0f && !BitTest(Local_157.f_2, 0))
		{
			iVar3 = system::round(((system::to_float(func_29(1)) / 60f) / 1000f));
			if (iVar3 > func_290())
			{
				iVar3 = func_290();
			}
			iVar4 = Local_157.f_51;
			if (iVar4 > func_289())
			{
				iVar4 = func_289();
			}
			*uParam0 = (*uParam0 + system::round((IntToFloat(func_282(func_288(), func_287(), iVar3, fVar2, func_286(), func_285(), func_284(), iVar4)) * Global_262145.f_11913)));
			*uParam1 = (*uParam1 + system::round((IntToFloat(func_282(func_281(), func_280(), iVar3, fVar2, func_286(), func_285(), func_284(), iVar4)) * Global_262145.f_11914)));
		}
		else
		{
			func_278(1);
		}
	}
	else
	{
		func_278(0);
	}
	func_256(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_256(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_277())
		{
			if (func_276(0))
			{
				if (!func_272(0))
				{
					if (unk_0x762604C40829DB72(func_271()))
					{
						if (func_270() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_270());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_268(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_261("GB_BCUT_TICK1", func_271(), iVar0, 0, 0, 1);
						}
						func_260(20);
						func_257(func_271(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_257(bool bParam0, int iParam1, int iParam2)
{
	struct<9> Var0;
	
	if (func_12(bParam0, 0, 1))
	{
		Var0.f_0 = -1141119736;
		Var0.f_1 = unk_0x259BE71D8A81D4FA();
		Var0.f_3 = iParam1;
		Var0.f_5 = iParam2;
		Var0.f_6 = func_259(bParam0);
		func_258(&(Var0.f_7), &(Var0.f_8));
		unk_0x71A6F836422FDD2B(1, &Var0, 9, func_251(bParam0), Var0.f_0);
	}
}

void func_258(var uParam0, var uParam1)
{
	*uParam0 = Global_1916617.f_9;
	*uParam1 = Global_1916617.f_10;
}

var func_259(bool bParam0)
{
	return Global_1887305[bParam0 /*610*/].f_512;
}

void func_260(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_5249.f_7[iVar0]), bVar1);
}

int func_261(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xBD6CA019F46AB947(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xBD6CA019F46AB947(bParam1), 64);
		}
		if (unk_0xD6F9DEE4765092A9(&Var1))
		{
		}
		unk_0xCCDB0041859B85A6(sParam0);
		unk_0x4E5A3D96808F7F84(func_70(bParam1, -2, 1, 0, 0));
		unk_0x60D332F23943B34F(func_266(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x4E5A3D96808F7F84(iParam3);
		}
		unk_0x511D14ED2DA887E1(iParam2);
		iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
		func_262(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_262(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_265() || !unk_0x834C960822A4683F()) || !func_14(unk_0x259BE71D8A81D4FA(), 0))
	{
		return;
	}
	iVar0 = func_263(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1937329.f_5[iVar0 /*53*/] = iParam0;
		Global_1937329.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1937329.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1937329.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1937329.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1937329.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1937329.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_263(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1937329 - 1))
	{
		if (iParam0 > Global_1937329.f_5[iVar0 /*53*/].f_1)
		{
			func_264(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1937329++;
	if (Global_1937329 > 5)
	{
		Global_1937329 = 5;
		return Global_1937329;
	}
	return (Global_1937329 - 1);
}

void func_264(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1937329.f_5[iVar0 /*53*/] = { Global_1937329.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_265()
{
	return unk_0x087611B922B50F13(-1762644250);
}

var func_266(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_267(&cVar0);
}

var func_267(char[4] cParam0)
{
	return cParam0;
}

void func_268(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_269(1);
	}
	else
	{
		iVar1 = func_269(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_269(bool bParam0)
{
	if (bParam0)
	{
		return system::round((0,05f * 100f));
	}
	return Global_262145.f_12843;
}

int func_270()
{
	return Global_262145.f_12842;
}

bool func_271()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10;
}

bool func_272(bool bParam0)
{
	return func_273(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_273(bool bParam0, bool bParam1)
{
	return func_274(bParam0, bParam1, 1);
}

int func_274(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_17(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_275(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887305[iParam0 /*610*/].f_10;
	if (func_17(iVar0) && Global_1887305[iVar0 /*610*/].f_10.f_430 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_275(bool bParam0, int iParam1)
{
	if (func_17(bParam0))
	{
		if (func_17(Global_1887305[bParam0 /*610*/].f_10))
		{
			if (Global_1887305[bParam0 /*610*/].f_10 == bParam0 && Global_1887305[bParam0 /*610*/].f_10.f_430 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_276(bool bParam0)
{
	return func_92(unk_0x259BE71D8A81D4FA(), bParam0);
}

bool func_277()
{
	return func_93(unk_0x259BE71D8A81D4FA());
}

void func_278(bool bParam0)
{
	if (bParam0)
	{
		if (func_279(1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1836984, true);
		}
	}
	else if (func_279(2))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_1836984, 2);
	}
}

int func_279(int iParam0)
{
	var uVar0;
	
	uVar0 = func_218(2537, -1);
	if (iParam0 == 0)
	{
		if ((BitTest(uVar0, 0) && BitTest(uVar0, 1)) && BitTest(uVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((BitTest(uVar0, 3) && BitTest(uVar0, 4)) && BitTest(uVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((BitTest(uVar0, 6) && BitTest(uVar0, 7)) && BitTest(uVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((BitTest(uVar0, 9) && BitTest(uVar0, 10)) && BitTest(uVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_280()
{
	return Global_262145.f_11426;
}

int func_281()
{
	return Global_262145.f_11424;
}

int func_282(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_283(system::round(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_283(int iParam0, int iParam1, int iParam2)
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
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_284()
{
	return Global_262145.f_11429;
}

float func_285()
{
	return Global_262145.f_11428;
}

float func_286()
{
	return Global_262145.f_11427;
}

int func_287()
{
	return Global_262145.f_11425;
}

int func_288()
{
	return Global_262145.f_11423;
}

int func_289()
{
	return Global_262145.f_11808;
}

int func_290()
{
	return Global_262145.f_11807;
}

var func_291()
{
	if (func_21(0))
	{
		return Global_262145.f_11447;
	}
	if (func_21(1))
	{
		return Global_262145.f_11448;
	}
	if (func_21(2))
	{
		return Global_262145.f_11449;
	}
	return Global_262145.f_11450;
}

int func_292()
{
	return Global_262145.f_11422;
}

int func_293()
{
	return Global_262145.f_11421;
}

void func_294()
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	char* sVar5;
	
	if (!BitTest(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_1, 1) && (func_306() || BitTest(Local_157.f_2, 0)))
	{
		if (func_68(func_305()))
		{
			func_304();
		}
		if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!BitTest(Local_157.f_2, 0))
			{
				if (func_346(0))
				{
					iVar2 = Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_4;
					func_300(&iVar0, &fVar1, iVar2, 1);
					if (func_21(0))
					{
						if (func_19())
						{
							func_298(64, func_299(Local_157.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_413(Local_157.f_3), 1, 2, 0);
						}
						else if (func_297())
						{
							func_298(69, func_299(Local_157.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_413(Local_157.f_3), 1, 2, 0);
						}
						else
						{
							func_298(64, func_299(Local_157.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_413(Local_157.f_3), 1, 2, 0);
						}
					}
					else if (func_21(1))
					{
						if (func_19())
						{
							func_298(67, func_299(Local_157.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_413(Local_157.f_3), 1, 2, 0);
						}
						else if (func_297())
						{
							func_298(75, func_299(Local_157.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_413(Local_157.f_3), 1, 2, 0);
						}
						else
						{
							func_298(67, func_299(Local_157.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_413(Local_157.f_3), 1, 2, 0);
						}
					}
					else if (func_21(2))
					{
						if (func_19())
						{
							func_298(67, func_299(Local_157.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_413(Local_157.f_3), 1, 2, 0);
						}
						else if (func_297())
						{
							func_298(75, func_299(Local_157.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_413(Local_157.f_3), 1, 2, 0);
						}
						else
						{
							func_298(67, func_299(Local_157.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_413(Local_157.f_3), 1, 2, 0);
						}
					}
					else
					{
						uVar3 = unk_0xF0C9E5565CB32F4B(Local_157.f_4[0]);
						if (unk_0x7206AEB20960CCC8(uVar3))
						{
							bVar4 = unk_0x4470BE79F5771783(iVar3);
							if (Local_1523[Local_157.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_1523[Local_157.f_4[0] /*12*/].f_4;
							func_300(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_19())
							{
								func_296(76, func_116(), func_299(Local_157.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_413(Local_157.f_3), -1, fVar1, 1, 2, unk_0xBD6CA019F46AB947(bVar4));
							}
							else if (func_297())
							{
								func_296(77, func_116(), func_299(Local_157.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_413(Local_157.f_3), iVar0, -1082130432, 1, 2, unk_0xBD6CA019F46AB947(bVar4));
							}
							else
							{
								func_296(76, func_116(), func_299(Local_157.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_413(Local_157.f_3), iVar0, -1082130432, 1, 2, unk_0xBD6CA019F46AB947(bVar4));
							}
						}
					}
				}
				else
				{
					func_53(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2, 1, 0);
				}
			}
			else
			{
				func_52("", "", 1);
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_1), true);
			func_295(133);
		}
	}
}

void func_295(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_296(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_119(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_17 = iParam1;
	StringCopy(&(Var0.f_57), sParam2, 16);
	StringCopy(&(Var0.f_61), sParam6, 16);
	StringCopy(&(Var0.f_25), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_71 = iParam9;
	Var0.f_72 = iParam10;
	return func_54(&Var0);
}

int func_297()
{
	return 0;
}

int func_298(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_119(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_117(&(Var0.f_69), iParam10);
	}
	return func_54(&Var0);
}

char* func_299(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x4721B5E26C8861C8())
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
		
		case 2:
			if (unk_0x4721B5E26C8861C8())
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
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
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

int func_300(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_19())
	{
		if (bParam3)
		{
			*fParam1 = (func_301(Local_157.f_3, iParam2) / 10f);
		}
		else
		{
			*fParam1 = (system::to_float(iParam2) / 10f);
		}
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_301(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x4721B5E26C8861C8())
			{
				return system::to_float(iParam1);
			}
			else
			{
				return func_303(system::to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x4721B5E26C8861C8())
			{
				return system::to_float(iParam1);
			}
			else
			{
				return func_302(system::to_float(iParam1));
			}
			break;
	}
	return system::to_float(iParam1);
}

float func_302(float fParam0)
{
	return (fParam0 / 1,609344f);
}

float func_303(float fParam0)
{
	return (fParam0 / 0,3048f);
}

void func_304()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672855.f_2557[iVar0 /*80*/].f_2 != 0)
		{
			Global_2672855.f_2557[iVar0 /*80*/].f_2 = 5;
			func_117(&(Global_2672855.f_2557[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_305()
{
	return Global_2672855.f_2557[0 /*80*/].f_1;
}

var func_306()
{
	return BitTest(Global_1836959.f_1, 25);
}

int func_307(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if ((((*uParam0 > 0 && !func_318()) && !(func_126(unk_0x259BE71D8A81D4FA(), 0) && (func_122(unk_0x259BE71D8A81D4FA()) || func_317(unk_0x259BE71D8A81D4FA())))) && !func_315(unk_0x259BE71D8A81D4FA())) && !func_314(unk_0x259BE71D8A81D4FA()))
	{
		func_313();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_48(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 25);
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_4709), false);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_312(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_48(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_309();
				func_312(uParam0, 2);
			}
			break;
		
		case 2:
			func_309();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_308("AMEV_LBD_HELP"))
				{
					unk_0x428C32CC68809A35(1);
				}
				func_312(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0x8744D2E3FC95740E(&(Global_2738934.f_4709), true);
				func_312(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x8744D2E3FC95740E(&(Global_2738934.f_4709), true);
			return 1;
	}
	return 0;
}

bool func_308(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_309()
{
	if (BitTest(Global_2738934.f_4709, 0))
	{
		if (((((!unk_0xBE259DBA45F2996E() && !BitTest(Global_2738934.f_868, 2)) && func_12(unk_0x259BE71D8A81D4FA(), 1, 1)) && !Global_76498) && !Global_61347) && !unk_0x15CCE8886267624F())
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_4709), true);
			func_311("AMEV_LBD_HELP", -1);
			func_310(1);
			unk_0x8744D2E3FC95740E(&(Global_2738934.f_4709), false);
		}
	}
}

void func_310(int iParam0)
{
	unk_0x55DAC9CDA320120B(3, 21, 200, 0, 0);
	if (iParam0 && !func_318())
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_311(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 0, iParam1);
}

void func_312(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_313()
{
	Global_2698053 = 1;
}

int func_314(bool bParam0)
{
	if (bParam0 != func_116())
	{
		return BitTest(Global_2657971[bParam0 /*465*/].f_322.f_5, 4);
	}
	return 0;
}

int func_315(bool bParam0)
{
	int iVar0;
	
	if (bParam0 != func_116())
	{
		if (func_12(bParam0, 1, 1))
		{
			if (Global_2657971[bParam0 /*465*/].f_322.f_8 != -1)
			{
				iVar0 = func_316(Global_2657971[bParam0 /*465*/].f_322.f_8);
				return (iVar0 == 2 || iVar0 == 25);
			}
		}
	}
	return 0;
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
	}
	return -1;
}

bool func_317(bool bParam0)
{
	return func_121(bParam0, 19);
}

bool func_318()
{
	return Global_2672855.f_2557[0 /*80*/].f_1 != 0;
}

void func_319()
{
	bool bVar0[3];
	bool bVar1;
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
	var uVar18;
	var uVar19;
	bool bVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	if (Local_157.f_4[0] > -1)
	{
		iVar11 = 0;
		bVar12 = (func_343() && !func_114(unk_0x259BE71D8A81D4FA()));
		iVar7 = 0;
		while (iVar7 < 3)
		{
			bVar0[iVar7] = func_116();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_157.f_4[iVar7] > -1)
			{
				uVar18 = unk_0xF0C9E5565CB32F4B(Local_157.f_4[iVar7]);
				if (unk_0x7206AEB20960CCC8(uVar18))
				{
					bVar1 = unk_0x4470BE79F5771783(iVar18);
					if (func_12(bVar1, 0, 1))
					{
						if (!func_14(bVar1, 0))
						{
							if (Local_1523[Local_157.f_4[iVar7] /*12*/].f_4 != 0)
							{
								bVar0[iVar15] = bVar1;
								func_300(&(uVar2[iVar15]), &(uVar3[iVar15]), Local_1523[Local_157.f_4[iVar7] /*12*/].f_4, 1);
								iVar15++;
								if (func_276(1))
								{
									if (func_92(bVar1, 1))
									{
										uVar17[iVar7] = func_70(bVar1, -2, 0, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = unk_0xAE032CEDCF23C6D5();
		if (func_114(unk_0x259BE71D8A81D4FA()))
		{
			uVar19 = func_341();
			bVar20 = unk_0x1C1C92A1CBAE364B(uVar19);
			if (unk_0x762604C40829DB72(bVar20))
			{
				iVar21 = unk_0x857CA6FCE5E9C84F(bVar20);
				if (unk_0x7206AEB20960CCC8(iVar21))
				{
					iVar8 = iVar21;
				}
			}
		}
		func_300(&iVar4, &fVar9, iLocal_130, 1);
		func_300(&iVar5, &fVar10, Local_1523[iVar8 /*12*/].f_4, 1);
		iVar22 = func_29(0);
		iVar23 = func_561(&(Local_157.f_39), 0, 0);
		iVar6 = func_559(0, (iVar22 - iVar23));
		if (func_18(-1, 0))
		{
			func_338(iVar6);
		}
		if (iVar6 > 30000)
		{
			iVar13 = 1;
		}
		else
		{
			iVar13 = 6;
		}
		if (BitTest(uLocal_128, 2))
		{
			iVar14 = 2000;
		}
		else
		{
			iVar14 = 0;
		}
		if (func_343() || Local_157.f_3 == 6)
		{
			iVar16 = 2;
		}
		else
		{
			iVar16 = 1;
		}
		if (Local_157.f_37 >= 4)
		{
			iVar6 = 0;
		}
		if (func_19())
		{
			func_334(bVar0[0], bVar0[1], bVar0[2], uVar3[0], uVar3[1], uVar3[2], fVar9, fVar10, iVar6, func_299(Local_157.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_335(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else if (func_297())
		{
			func_333(bVar0[0], bVar0[1], bVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, &iVar11, iVar13, bVar12, iVar14, func_335(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else
		{
			func_324(bVar0[0], bVar0[1], bVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, func_299(Local_157.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_335(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		func_320();
	}
}

void func_320()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_323();
	if (fVar0 >= 0f)
	{
		if (Local_157.f_37 == 3)
		{
			if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()) || unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
				{
					iVar1 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
					if (unk_0xD9F5E1FEFD1329E4(iVar1, 0))
					{
						func_322(iVar1, &fLocal_134);
						fVar2 = (fVar0 + fLocal_134);
						unk_0x4A12B9AB7A7BA5C0(fVar2, 1, 21);
						func_321(fVar0);
						return;
					}
				}
			}
		}
		if (func_308("AMCH_FLYLOW"))
		{
			unk_0x428C32CC68809A35(1);
		}
		if (BitTest(uLocal_128, 4))
		{
			unk_0x8E4825CCACA34B58(iLocal_136);
			unk_0x8744D2E3FC95740E(&uLocal_128, 4);
		}
		unk_0x4A12B9AB7A7BA5C0(0f, 0, 21);
	}
}

void func_321(float fParam0)
{
	float fVar0;
	
	if (unk_0x2B2ABCEBD9B1F36F(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_562(6);
			if (!BitTest(uLocal_128, 4))
			{
				unk_0xBF3D28CA44F3BE2D(iLocal_136, "Altitude_Warning", "EXILE_1", 1);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_128, 4);
			}
		}
		else
		{
			if (func_308("AMCH_FLYLOW"))
			{
				unk_0x428C32CC68809A35(1);
			}
			if (BitTest(uLocal_128, 4))
			{
				unk_0x8E4825CCACA34B58(iLocal_136);
				unk_0x8744D2E3FC95740E(&uLocal_128, 4);
			}
		}
	}
}

float func_322(int iParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	var uVar2;
	
	Var1 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	unk_0xB1EAADCB692D69CE(Var1, uParam1, 1, 0);
	unk_0xB1EAADCB692D69CE(Var1, &uVar2, 0, 0);
	if (unk_0xF03AFB81ECD7494E())
	{
		func_562(3);
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_128, 10);
		func_28(&uLocal_124, 0, 0);
	}
	else if (BitTest(uLocal_128, 10))
	{
		if (func_1(&uLocal_124, 2000, 0))
		{
			unk_0x8744D2E3FC95740E(&uLocal_128, 10);
		}
	}
	if (*uParam1 < 0f)
	{
		*uParam1 = 0f;
	}
	fVar0 = (Var1.f_2 - *uParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}

float func_323()
{
	switch (Local_157.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_324(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_330(0) == 0)
	{
		return;
	}
	func_329();
	iVar1 = 0;
	if (((Global_2697542[0] != iParam0 || Global_2697542[1] != iParam1) || Global_2697542[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2697542[0] = iParam0;
	Global_2697542[1] = iParam1;
	Global_2697542[2] = iParam2;
	Global_2697542[3] = 0;
	Global_2697542[4] = 0;
	if (Global_2697542[0] != func_116())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xBD6CA019F46AB947(Global_2697542[0]);
			Global_2697548[0 /*16*/] = { func_328(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_325(iParam3, &(Global_2697548[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1, -1, 0);
		}
	}
	if (Global_2697542[1] != func_116())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xBD6CA019F46AB947(Global_2697542[1]);
			Global_2697548[1 /*16*/] = { func_328(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_325(iParam4, &(Global_2697548[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1, -1, 0);
		}
	}
	if (Global_2697542[2] != func_116())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xBD6CA019F46AB947(Global_2697542[2]);
			Global_2697548[2 /*16*/] = { func_328(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_325(iParam5, &(Global_2697548[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1, 0);
		}
	}
	if (bParam12)
	{
		func_325(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x259BE71D8A81D4FA() != func_116())
			{
				if (func_177(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_325(iParam7, unk_0xBD6CA019F46AB947(unk_0x259BE71D8A81D4FA()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
				}
			}
			break;
		
		case 1:
			if (func_177(unk_0x259BE71D8A81D4FA()) == 0)
			{
				func_325(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
			}
			break;
		
		case 2:
			if (func_177(unk_0x259BE71D8A81D4FA()) == 0)
			{
				func_325(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_229(sParam14))
	{
		sVar2 = sParam14;
	}
	func_158(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_157();
}

void func_325(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_160(6, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_159(6, bVar0);
		Global_1670224.f_4085[bVar0] = iParam0;
		StringCopy(&(Global_1670224.f_4085.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_4085.f_183[bVar0] = iParam3;
		Global_1670224.f_4085.f_172[bVar0] = iParam2;
		Global_1670224.f_4085.f_260[bVar0] = iParam4;
		Global_1670224.f_4085.f_271[bVar0] = iParam5;
		StringCopy(&(Global_1670224.f_4085.f_282[bVar0 /*16*/]), sParam6, 64);
		Global_1670224.f_4085.f_443[bVar0] = iParam7;
		Global_1670224.f_4085.f_454[bVar0] = fParam8;
		Global_1670224.f_4085.f_497[bVar0] = iParam9;
		Global_1670224.f_4085.f_508[bVar0] = iParam10;
		Global_1670224.f_4085.f_205[bVar0] = iParam11;
		Global_1670224.f_4085.f_216[bVar0] = iParam12;
		Global_1670224.f_4085.f_227[bVar0] = iParam13;
		Global_1670224.f_4085.f_238[bVar0] = iParam14;
		Global_1670224.f_4085.f_249[bVar0] = iParam15;
		Global_1670224.f_4085.f_519[bVar0] = iParam16;
		Global_1670224.f_4085.f_530[bVar0] = iParam17;
		Global_1670224.f_4085.f_541[bVar0] = iParam18;
		Global_1670224.f_4085.f_552[bVar0] = iParam19;
		Global_1670224.f_4085.f_563[bVar0] = iParam20;
		Global_1670224.f_4085.f_574[bVar0] = iParam21;
		Global_1670224.f_4085.f_585[bVar0] = iParam22;
		Global_1670224.f_4085.f_596[bVar0] = iParam23;
		Global_1670224.f_4085.f_607[bVar0] = iParam24;
		Global_1670224.f_4085.f_194[bVar0] = iParam25;
		Global_1670224.f_4085.f_618[bVar0] = iParam26;
		if (iParam15 == 5 && func_327())
		{
			Global_1670224.f_1172 = 1;
		}
		if (unk_0x761778199FE1211C())
		{
			iVar2 = 0;
			unk_0x21564F65F997D833(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1670224.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1670224.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1670224.f_1172 = 1;
			}
			if (func_326())
			{
				Global_1670224.f_1176 = 1;
			}
		}
	}
}

int func_326()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x761778199FE1211C())
	{
		unk_0x21564F65F997D833(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_327()
{
	if (((unk_0x8608526719A575EE() == 8 || unk_0x8608526719A575EE() == 9) || unk_0x8608526719A575EE() == 10) || unk_0x8608526719A575EE() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_328(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0xFACCDE46E24AD056("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0xFACCDE46E24AD056("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0xFACCDE46E24AD056("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0xFACCDE46E24AD056("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0xFACCDE46E24AD056("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_329()
{
	unk_0x4EB223432F8FA0A0(8);
	unk_0x4EB223432F8FA0A0(9);
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(7);
	Global_2698056 = 1;
}

int func_330(bool bParam0)
{
	if (func_332())
	{
		return 0;
	}
	if (func_331())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_331()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_193 != 0;
}

bool func_332()
{
	return BitTest(Global_2621446, 12);
}

void func_333(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_330(0) == 0)
	{
		return;
	}
	func_329();
	iVar1 = 0;
	if (((Global_2697542[0] != iParam0 || Global_2697542[1] != iParam1) || Global_2697542[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2697542[0] = iParam0;
	Global_2697542[1] = iParam1;
	Global_2697542[2] = iParam2;
	Global_2697542[3] = 0;
	Global_2697542[4] = 0;
	if (Global_2697542[0] != func_116())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xBD6CA019F46AB947(Global_2697542[0]);
			Global_2697548[0 /*16*/] = { func_328(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_158(iParam3, &(Global_2697548[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0, -1);
		}
	}
	if (Global_2697542[1] != func_116())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xBD6CA019F46AB947(Global_2697542[1]);
			Global_2697548[1 /*16*/] = { func_328(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_158(iParam4, &(Global_2697548[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0, -1);
		}
	}
	if (Global_2697542[2] != func_116())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xBD6CA019F46AB947(Global_2697542[2]);
			Global_2697548[2 /*16*/] = { func_328(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_158(iParam5, &(Global_2697548[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0, -1);
		}
	}
	if (bParam11)
	{
		func_158(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0x259BE71D8A81D4FA() != func_116())
			{
				if (func_177(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_158(iParam7, unk_0xBD6CA019F46AB947(unk_0x259BE71D8A81D4FA()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 1:
			if (func_177(unk_0x259BE71D8A81D4FA()) == 0)
			{
				func_158(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 2:
			if (func_177(unk_0x259BE71D8A81D4FA()) == 0)
			{
				func_158(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_229(sParam13))
	{
		sVar2 = sParam13;
	}
	func_158(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0, -1);
	*iParam9 = 0;
	func_157();
}

void func_334(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_330(0) == 0)
	{
		return;
	}
	func_329();
	iVar1 = 0;
	if (((Global_2697542[0] != iParam0 || Global_2697542[1] != iParam1) || Global_2697542[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2697542[0] = iParam0;
	Global_2697542[1] = iParam1;
	Global_2697542[2] = iParam2;
	Global_2697542[3] = 0;
	Global_2697542[4] = 0;
	if (Global_2697542[0] != func_116())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xBD6CA019F46AB947(Global_2697542[0]);
			Global_2697548[0 /*16*/] = { func_328(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_325(-1, &(Global_2697548[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1, -1, 0);
		}
	}
	if (Global_2697542[1] != func_116())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xBD6CA019F46AB947(Global_2697542[1]);
			Global_2697548[1 /*16*/] = { func_328(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_325(-1, &(Global_2697548[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1, -1, 0);
		}
	}
	if (Global_2697542[2] != func_116())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xBD6CA019F46AB947(Global_2697542[2]);
			Global_2697548[2 /*16*/] = { func_328(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_325(-1, &(Global_2697548[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1, -1, 0);
		}
	}
	if (bParam12)
	{
		func_325(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x259BE71D8A81D4FA() != func_116())
			{
				if (func_177(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_325(-1, unk_0xBD6CA019F46AB947(unk_0x259BE71D8A81D4FA()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
				}
			}
			break;
		
		case 1:
			if (func_177(unk_0x259BE71D8A81D4FA()) == 0)
			{
				func_325(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
			}
			break;
		
		case 2:
			if (func_177(unk_0x259BE71D8A81D4FA()) == 0)
			{
				func_325(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_229(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_158(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	}
	*iParam10 = 0;
	func_157();
}

char* func_335()
{
	return "HUD_COUNTDOWN";
	switch (func_337(unk_0x259BE71D8A81D4FA()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_336())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_336()
{
	if (func_337(unk_0x259BE71D8A81D4FA()) == 133)
	{
		return Global_2738934.f_5167;
	}
	return -1;
}

int func_337(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1887305[iVar0 /*610*/];
	}
	return -1;
}

void func_338(int iParam0)
{
	if (func_340(unk_0x259BE71D8A81D4FA()) || func_339(unk_0x259BE71D8A81D4FA()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < unk_0x0B852B0BF94A8DC1())
	{
		if (BitTest(Global_2738934.f_5083, 0))
		{
			if (!unk_0xD6F9DEE4765092A9(&(Global_2738934.f_5085)))
			{
				unk_0x166878629B365828(&(Global_2738934.f_5085));
			}
			unk_0x938C85923AD6778A(1);
			unk_0x86A2BC11844DEEB3("FM_COUNTDOWN_30S_FIRA");
			unk_0xB43467C43086A6A1("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0xCFBD89D2F1F18961("DisableFlightMusic", 0);
			unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 0);
			unk_0xCFBD89D2F1F18961("AllowScoreAndRadio", 0);
			if (Global_2738934.f_5093 > -1)
			{
				unk_0x394AFAC073E1F277(Global_2738934.f_5093);
				Global_2738934.f_5093 = -1;
			}
			Global_2738934.f_5083 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (BitTest(Global_2738934.f_5083, 0))
		{
			if (BitTest(Global_2738934.f_5083, 4))
			{
				if (!BitTest(Global_2738934.f_5083, 2))
				{
					if (unk_0x2044128E627E0951())
					{
						if ((!unk_0x1B79E937E91F40C3(unk_0x9A7254C20CB82B70(unk_0xE1799BB6E4C1CDFB()), "OFF") && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && !unk_0xD6F9DEE4765092A9(&(Global_2738934.f_5085)))
						{
							StringCopy(&(Global_2738934.f_5085), "", 32);
							unk_0x86A2BC11844DEEB3("FM_COUNTDOWN_30S_FIRA");
							unk_0xB43467C43086A6A1("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0xCFBD89D2F1F18961("DisableFlightMusic", 0);
							unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 0);
							unk_0xCFBD89D2F1F18961("AllowScoreAndRadio", 0);
							unk_0x938C85923AD6778A(1);
							unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_5083), 2);
						}
					}
				}
				else if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && BitTest(Global_2738934.f_5083, 5))
				{
					unk_0x166878629B365828("OFF");
				}
			}
			else if (!BitTest(Global_2738934.f_5083, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x86A2BC11844DEEB3("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x86A2BC11844DEEB3("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x86A2BC11844DEEB3("FM_COUNTDOWN_30S");
				}
				unk_0xCAC4020CCF361AC8("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_5083), true);
			}
			else if (!BitTest(Global_2738934.f_5083, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x3BB0DC333050E9BD() != 0)
					{
						if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && !unk_0x93D3C066DE3C5879())
						{
							StringCopy(&(Global_2738934.f_5085), unk_0xA9CB3A11303C5801(), 32);
							unk_0x166878629B365828("OFF");
						}
						unk_0x938C85923AD6778A(1);
						unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_5083), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!BitTest(Global_2738934.f_5083, 3))
				{
					Global_2738934.f_5093 = unk_0xCA369FBC0DE29517();
					unk_0xBF3D28CA44F3BE2D(Global_2738934.f_5093, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_5083), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!BitTest(Global_2738934.f_5083, 0))
			{
				Global_2738934.f_5083 = 0;
				Global_2738934.f_5093 = -1;
				unk_0x16088CC55E7F218A("FM_COUNTDOWN_30S_KILL");
				unk_0x938C85923AD6778A(0);
				unk_0x86A2BC11844DEEB3("FM_PRE_COUNTDOWN_30S");
				unk_0xCFBD89D2F1F18961("DisableFlightMusic", 1);
				unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 1);
				unk_0xCFBD89D2F1F18961("AllowScoreAndRadio", 1);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_5083), false);
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || BitTest(Global_2738934.f_5083, 2))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_5083), 2);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_5083), 5);
				}
				else
				{
					unk_0x8744D2E3FC95740E(&(Global_2738934.f_5083), 5);
					unk_0x8744D2E3FC95740E(&(Global_2738934.f_5083), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!BitTest(Global_2738934.f_5083, 0))
		{
			Global_2738934.f_5083 = 0;
			Global_2738934.f_5093 = -1;
			unk_0x16088CC55E7F218A("FM_COUNTDOWN_30S_KILL");
			unk_0x938C85923AD6778A(0);
			unk_0x86A2BC11844DEEB3("FM_PRE_COUNTDOWN_30S");
			unk_0xCFBD89D2F1F18961("DisableFlightMusic", 1);
			unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 1);
			unk_0xCFBD89D2F1F18961("AllowScoreAndRadio", 1);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_5083), false);
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_5083), 2);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_5083), 5);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Global_2738934.f_5083), 2);
				unk_0x8744D2E3FC95740E(&(Global_2738934.f_5083), 5);
			}
		}
	}
}

int func_339(bool bParam0)
{
	if (bParam0 != func_116() && func_12(bParam0, 1, 1))
	{
		return Global_2657971[bParam0 /*465*/].f_322.f_18;
	}
	return -1;
}

int func_340(bool bParam0)
{
	if (bParam0 != func_116())
	{
		if (func_12(bParam0, 1, 1))
		{
			if (Global_2657971[bParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_316(Global_2657971[bParam0 /*465*/].f_322.f_8) == 19;
			}
		}
	}
	return 0;
}

var func_341()
{
	if (unk_0xFC8BFE4B41177C22(func_342()))
	{
		return func_342();
	}
	return func_111();
}

var func_342()
{
	return Global_2621446.f_3;
}

int func_343()
{
	switch (Local_157.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

void func_344()
{
	int iVar0;
	struct<42> Var1;
	bool bVar2;
	var uVar3;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		Local_178.f_534[iVar0 /*42*/] = { Var1 };
		Local_178.f_534[iVar0 /*42*/].f_1 = func_116();
		if (Local_157.f_4[iVar0] > -1)
		{
			uVar3 = unk_0xF0C9E5565CB32F4B(Local_157.f_4[iVar0]);
			if (unk_0x7206AEB20960CCC8(uVar3))
			{
				bVar2 = unk_0x4470BE79F5771783(iVar3);
				if (!func_14(bVar2, 0))
				{
					Local_178.f_534[iVar0 /*42*/] = Local_157.f_4[iVar0];
					Local_178.f_534[iVar0 /*42*/].f_1 = bVar2;
					Local_178.f_534[iVar0 /*42*/].f_7 = Local_1523[Local_157.f_4[iVar0] /*12*/].f_4;
					Local_178.f_534[iVar0 /*42*/].f_31 = -1;
					Local_178.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_345()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_1849), 19);
}

int func_346(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_157.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_22(Local_1523[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_347()
{
}

void func_348()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_300(&iVar1, &fVar2, iLocal_130, 1);
	switch (Local_157.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_350(sVar0, fVar2 >= 70f);
			if (unk_0xBC2EE32DE886BD08(sVar0))
			{
				fVar2 = func_349(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0x082E0064E4F27AFC(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0xC5EF85C408571EAF();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_350(sVar0, bVar3);
			if (unk_0xBC2EE32DE886BD08(sVar0))
			{
				fVar2 = system::to_float(iVar1);
				fVar2 = func_349(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_349(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0x082E0064E4F27AFC(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_135 != iLocal_130)
			{
				if (iLocal_130 > 0)
				{
					unk_0xBF3D28CA44F3BE2D(iLocal_137, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0x3F002AA9562BF0BE(iLocal_137, "Count", system::to_float(iVar1));
				}
				else
				{
					unk_0xBF3D28CA44F3BE2D(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_135 = iLocal_130;
			break;
	}
	if (func_21(0))
	{
		if (!BitTest(uLocal_128, 3))
		{
			if (func_272(1))
			{
				unk_0xBF3D28CA44F3BE2D(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0xBF3D28CA44F3BE2D(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_128, 3);
		}
	}
	else if (BitTest(uLocal_128, 3))
	{
		if (func_272(1))
		{
			unk_0xBF3D28CA44F3BE2D(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0xBF3D28CA44F3BE2D(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0x8744D2E3FC95740E(&uLocal_128, 3);
	}
}

float func_349(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_350(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xBC2EE32DE886BD08(sParam0))
		{
			unk_0xCAC4020CCF361AC8(sParam0);
		}
	}
	else if (unk_0xBC2EE32DE886BD08(sParam0))
	{
		unk_0xB43467C43086A6A1(sParam0);
	}
}

void func_351()
{
	int iVar0;
	
	if ((!func_177(unk_0x259BE71D8A81D4FA()) && !func_14(unk_0x259BE71D8A81D4FA(), 0)) && func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		iVar0 = func_377();
		if (iVar0 != Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_4)
		{
			if (func_22(iVar0, iLocal_127) || func_376(iVar0, iLocal_127))
			{
				if (!func_375() || func_1(&uLocal_116, 1000, 0))
				{
					func_28(&uLocal_116, 0, 0);
					iLocal_127 = iVar0;
					Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_4 = iVar0;
					func_354();
					if (iLocal_126 == 0)
					{
						iLocal_126 = unk_0x7E3F74F641EE6B27();
					}
					if (Local_1524.f_11 == 0)
					{
						Local_1524.f_11 = unk_0x39D1D336459711BE();
					}
				}
			}
		}
		iLocal_130 = func_352();
	}
}

int func_352()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_157.f_3)
	{
		case 0:
			fVar1 = unk_0x143EE419E5A537E6();
			break;
		
		case 1:
			fVar1 = unk_0xA318B59A6358E821();
			break;
		
		case 2:
			fVar1 = unk_0xC5EF85C408571EAF();
			break;
		
		case 3:
			fVar1 = unk_0xFF41A17ED9059E7D();
			break;
		
		case 4:
			fVar1 = unk_0x91F40F276617074F();
			break;
		
		case 5:
			fVar1 = unk_0x24B36D1854339214();
			break;
		
		case 8:
			iVar0 = unk_0xDA0C268B09050750();
			break;
		
		case 9:
			fVar1 = unk_0xEAE605592B9C789F();
			break;
		
		case 11:
			fVar1 = unk_0x3D70C45F9F077E0A();
			break;
		
		case 12:
			fVar1 = unk_0x3D70C45F9F077E0A();
			break;
		
		case 13:
			fVar1 = unk_0x282230B7F0E52D56();
			break;
	}
	if (func_19())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = system::round(fVar1);
	}
	iVar2 = unk_0x510D0699BE9C6D06(iVar0);
	func_353(&iVar2);
	if (iVar2 == iLocal_129)
	{
		if (func_22(iVar2, 0))
		{
			if (!BitTest(uLocal_128, 1))
			{
				func_28(&uLocal_118, 0, 0);
				Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_4.f_2 = func_561(&uLocal_118, 0, 0);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_128, true);
			}
			else if ((func_561(&uLocal_118, 0, 0) % 1000) == 0)
			{
				Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_4.f_2 = func_561(&uLocal_118, 0, 0);
			}
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&uLocal_128, true);
	}
	if ((func_22(iLocal_129, 0) && !func_22(iVar2, 0)) && !func_1(&uLocal_120, 2000, 0))
	{
		iVar2 = iLocal_129;
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_128, 2);
	}
	else
	{
		iLocal_129 = iVar2;
		func_47(&uLocal_120);
		unk_0x8744D2E3FC95740E(&uLocal_128, 2);
	}
	return iVar2;
}

void func_353(int iParam0)
{
	switch (Local_157.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if ((((unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()) || unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D())) || unk_0xC5F2281709805477(unk_0x4A8C381C258A124D())) || unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D())) || unk_0x17CB7D9FBEC4100F(unk_0x4A8C381C258A124D()))
						{
							*iParam0 = 0;
						}
					}
					else
					{
						*iParam0 = 0;
					}
				}
			}
			break;
	}
}

void func_354()
{
	if (!BitTest(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_1, 2))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_1), 2);
		func_355(1);
	}
}

void func_355(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!BitTest(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1, 7))
		{
			if (((!func_120(unk_0x259BE71D8A81D4FA()) && !func_7(unk_0x259BE71D8A81D4FA())) && !func_177(unk_0x259BE71D8A81D4FA())) && !func_374(unk_0x259BE71D8A81D4FA()))
			{
				if (func_180())
				{
					func_367(2, 0, 1);
					func_366();
				}
				if (func_364(func_365(func_337(unk_0x259BE71D8A81D4FA()))))
				{
					uVar0 = func_218(2483, -1);
					unk_0x8744D2E3FC95740E(&uVar0, func_365(func_337(unk_0x259BE71D8A81D4FA())));
					func_366();
				}
				if (func_363())
				{
					func_366();
				}
				if (func_337(unk_0x259BE71D8A81D4FA()) > -1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1), 7);
					if (func_362(unk_0x259BE71D8A81D4FA()))
					{
						func_361();
					}
					func_358(func_360(func_337(unk_0x259BE71D8A81D4FA())));
				}
			}
		}
	}
	else if (BitTest(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1, 7))
	{
		unk_0x8744D2E3FC95740E(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1), 7);
		func_356();
	}
}

void func_356()
{
	if (func_357())
	{
		unk_0x8744D2E3FC95740E(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1), 17);
	}
}

bool func_357()
{
	return BitTest(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1, 17);
}

void func_358(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9090)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_359() /*5570*/].f_681.f_4244[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574744.f_1[iVar0] == -1)
			{
				Global_1574744.f_1[iVar0] = iParam0;
				Global_1574744 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_359()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_360(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_361()
{
	if (!func_357())
	{
		Global_2738934.f_6948 = unk_0x7E3F74F641EE6B27();
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1), 17);
	}
}

int func_362(bool bParam0)
{
	if (func_337(bParam0) == 236 || func_337(bParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_363()
{
	if (Global_2672855.f_990.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_364(var uParam0)
{
	var uVar0;
	
	uVar0 = func_218(2483, -1);
	return (BitTest(uVar0, uParam0) || BitTest(uVar0, 26));
}

int func_365(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return 11;
		
		case 133:
			return 12;
		
		case 136:
			return 19;
		
		case 138:
			return 14;
		
		case 139:
			return 15;
		
		case 129:
			return 17;
		
		case 141:
			return 18;
		
		case 144:
			return 13;
		
		case 146:
			return 16;
		
		case 236:
			return 20;
		
		case 150:
			return 20;
		
		default:
	}
	return Global_262145.f_23761;
}

void func_366()
{
	if (func_363())
	{
		Global_2672855.f_990.f_16 = 1;
	}
}

void func_367(int iParam0, int iParam1, bool bParam2)
{
	if (func_180())
	{
		if (iParam1 == 1)
		{
			if (Global_2738934.f_4514 == -1)
			{
				Global_2738934.f_4514 = Global_262145.f_26734;
			}
			func_28(&(Global_2738934.f_4512), 0, 0);
			if (bParam2)
			{
				if (Global_2738934.f_4517 == -1)
				{
					Global_2738934.f_4517 = Global_262145.f_26735;
				}
				func_28(&(Global_2738934.f_4515), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_8 = 0;
				func_373(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_8 = 0;
			func_373(1);
		}
		if ((!unk_0x834C960822A4683F() && !func_372()) && !func_368(unk_0x259BE71D8A81D4FA()))
		{
			Global_1057439 = 0;
		}
		unk_0xD3ABBB1A96756065(0, -1, -1, iParam0);
	}
}

int func_368(bool bParam0)
{
	if (func_369(bParam0, 1, 0))
	{
		if (Global_1845281[bParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_369(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_370(bParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845281[bParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_370(bool bParam0)
{
	return func_371(bParam0);
}

var func_371(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

bool func_372()
{
	return Global_2684504.f_844;
}

void func_373(bool bParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_180())
		{
			if (func_12(unk_0x259BE71D8A81D4FA(), 1, 0))
			{
				unk_0x1537AF7B62B52EB1(unk_0x4A8C381C258A124D(), 1);
				unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 342, 0);
				unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 122, 0);
			}
			unk_0x7754DB9F9579CEE4(unk_0x259BE71D8A81D4FA(), 1f);
			unk_0x08C2ACB534243279(0);
			unk_0x6106E62525304863(1);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					unk_0x3DDE6E86B8024EEE(0, 0);
				}
			}
		}
		else
		{
			if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				unk_0x1537AF7B62B52EB1(unk_0x4A8C381C258A124D(), 0);
				unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
				unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 342, 1);
				unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 122, 1);
				unk_0x7754DB9F9579CEE4(unk_0x259BE71D8A81D4FA(), 0,5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					unk_0x3DDE6E86B8024EEE(1, 0);
				}
			}
			unk_0x08C2ACB534243279(1);
			unk_0x6106E62525304863(0);
		}
	}
}

int func_374(bool bParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 0;
	}
	if (bParam0 == unk_0x259BE71D8A81D4FA())
	{
		return Global_2708056;
	}
	else
	{
		uVar0 = unk_0x56E414973C2A8C0E(bParam0);
		if (unk_0xFC8BFE4B41177C22(uVar0))
		{
			iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_375()
{
	switch (Local_157.f_3)
	{
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_376(int iParam0, int iParam1)
{
	if (Local_157.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_377()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_392())
	{
		if (Local_157.f_3 == 14)
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && func_391(unk_0x4A8C381C258A124D(), 0) == -1)
			{
				iVar2 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
				if ((!func_390(&iVar2, 0) || unk_0x4B423FAA24E8ABF0(iVar2) != joaat("dodo")) && unk_0x3F18810075C77D41(iVar2))
				{
					func_383(Local_157.f_3 != 14, 1, 0);
					if (func_382())
					{
						iVar3 = func_381();
						if (iVar3 >= 0)
						{
							if (!BitTest(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_8[func_380(iVar3)], func_379(iVar3)))
							{
								iLocal_131++;
								unk_0x0B0C9A0F9AAEB7F0(&(Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_8[func_380(iVar3)]), func_379(iVar3));
							}
						}
					}
					iVar0 = iLocal_131;
				}
			}
		}
		else
		{
			iVar0 = func_378();
		}
	}
	else
	{
		unk_0x6975D53533891910(&fVar1);
		if (func_19())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = system::round(fVar1);
	}
	return unk_0x510D0699BE9C6D06(iVar0);
}

int func_378()
{
	switch (Local_157.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_379(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_380(iParam0) * 31);
}

int func_380(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_381()
{
	return iLocal_98;
}

int func_382()
{
	if (iLocal_105 == 1)
	{
		iLocal_105 = 0;
		return 1;
	}
	return 0;
}

void func_383(bool bParam0, bool bParam1, int iParam2)
{
	func_385(bParam0, iParam2);
	if (bParam1)
	{
		if (Local_109.f_2 < Local_110.f_2)
		{
			Local_109.f_2 = 0f;
		}
		else
		{
			Local_110.f_2 = 0f;
		}
		if (Local_111.f_2 < Local_112.f_2)
		{
			Local_111.f_2 = 0f;
		}
		else
		{
			Local_112.f_2 = 0f;
		}
	}
	switch (iLocal_99)
	{
		case 0:
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Local_107[iLocal_98 /*3*/]) < fLocal_108)
				{
					if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()) || unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
					{
						if (unk_0xD9F5E1FEFD1329E4(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0))
						{
							if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_109, Local_110, fLocal_113, 0, 1, 0))
							{
								bLocal_100 = true;
								iLocal_99 = 1;
							}
							if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_111, Local_112, fLocal_113, 0, 1, 0))
							{
								bLocal_101 = true;
								iLocal_99 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (!unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()) && !unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
				{
					func_384();
				}
				else if (!unk_0xD9F5E1FEFD1329E4(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0))
				{
					func_384();
				}
				else if (!unk_0x3F18810075C77D41(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) && !bParam1)
				{
					func_384();
				}
				if (bLocal_100)
				{
					if (iLocal_104)
					{
						if (iLocal_103)
						{
							if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_109, Local_110, fLocal_113, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_111, Local_112, fLocal_113, 0, 1, 0))
							{
								func_384();
								iLocal_105 = 1;
							}
						}
						else if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_109, Local_110, fLocal_113, 0, 1, 0) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_111, Local_112, fLocal_113, 0, 1, 0))
						{
							iLocal_103 = 1;
						}
						else if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_109, Local_110, fLocal_113, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_111, Local_112, fLocal_113, 0, 1, 0))
						{
							func_384();
						}
					}
					else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_109, Local_110, fLocal_113, 0, 1, 0) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_111, Local_112, fLocal_113, 0, 1, 0))
					{
						iLocal_104 = 1;
					}
					else if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_109, Local_110, fLocal_113, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_111, Local_112, fLocal_113, 0, 1, 0))
					{
						func_384();
					}
				}
				else if (bLocal_101)
				{
					if (iLocal_104)
					{
						if (iLocal_102)
						{
							if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_109, Local_110, fLocal_113, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_111, Local_112, fLocal_113, 0, 1, 0))
							{
								func_384();
								iLocal_105 = 1;
							}
						}
						else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_109, Local_110, fLocal_113, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_111, Local_112, fLocal_113, 0, 1, 0))
						{
							iLocal_102 = 1;
						}
						else if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_109, Local_110, fLocal_113, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_111, Local_112, fLocal_113, 0, 1, 0))
						{
							func_384();
						}
					}
					else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_109, Local_110, fLocal_113, 0, 1, 0) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_111, Local_112, fLocal_113, 0, 1, 0))
					{
						iLocal_104 = 1;
					}
					else if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_109, Local_110, fLocal_113, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_111, Local_112, fLocal_113, 0, 1, 0))
					{
						func_384();
					}
				}
			}
			break;
	}
}

void func_384()
{
	bLocal_100 = false;
	bLocal_101 = false;
	iLocal_102 = 0;
	iLocal_103 = 0;
	iLocal_104 = 0;
	iLocal_99 = 0;
}

void func_385(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_106 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_389(iVar0)) && (uParam1 || !func_388(iVar0)))
		{
			if (func_387(Local_106, Local_107[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = system::vdist(Local_106, Local_107[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_98 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_386(iLocal_98);
}

void func_386(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_109 = { 1103,014f, -233,0374f, 56,13004f };
			Local_110 = { 1073,191f, -214,8478f, 66,0593f };
			fLocal_113 = 30f;
			Local_111 = { 1093,589f, -248,5926f, 56,88639f };
			Local_112 = { 1063,774f, -230,1425f, 66,67847f };
			break;
		
		case 1:
			Local_109 = { 1044,182f, -324,5904f, 49,33408f };
			Local_110 = { 1016,71f, -307,7383f, 64,81343f };
			fLocal_113 = 30f;
			Local_111 = { 1007,983f, -320,6159f, 48,4543f };
			Local_112 = { 1036,007f, -337,4204f, 64,4808f };
			break;
		
		case 2:
			Local_109 = { 916,599f, -419,8782f, 35,62748f };
			Local_110 = { 910,3793f, -383,8826f, 47,54339f };
			fLocal_113 = 7f;
			Local_111 = { 912,1362f, -420,5161f, 35,38034f };
			Local_112 = { 906,8952f, -384,6779f, 47,24926f };
			break;
		
		case 3:
			Local_109 = { 757,7189f, -472,924f, 19,2535f };
			Local_110 = { 696,5936f, -420,2115f, 35,46084f };
			fLocal_113 = 20,75f;
			Local_111 = { 744,9114f, -480,7373f, 19,06514f };
			Local_112 = { 682,5614f, -429,5533f, 37,0266f };
			break;
		
		case 4:
			Local_109 = { 680,3677f, -581,1792f, 14,2145f };
			Local_110 = { 599,8101f, -528,3059f, 33,40958f };
			fLocal_113 = 45f;
			Local_111 = { 667,3692f, -610,5356f, 13,85401f };
			Local_112 = { 582,8433f, -556,7818f, 33,40335f };
			break;
		
		case 5:
			Local_109 = { 644,2497f, -844,7504f, 12,36707f };
			Local_110 = { 526,8608f, -845,2521f, 35,9896f };
			fLocal_113 = 25f;
			Local_111 = { 644,3659f, -859,3878f, 12,59677f };
			Local_112 = { 526,8615f, -857,5208f, 36,32857f };
			break;
		
		case 6:
			Local_109 = { 634,972f, -1011,64f, 10,92594f };
			Local_110 = { 539,6501f, -1024,017f, 35,95852f };
			fLocal_113 = 25f;
			Local_111 = { 634,9612f, -1029,123f, 10,61846f };
			Local_112 = { 543,4893f, -1038,261f, 35,9593f };
			break;
		
		case 7:
			Local_109 = { 645,7223f, -1191,215f, 10,45198f };
			Local_110 = { 524,3018f, -1197,167f, 39,61172f };
			fLocal_113 = 50f;
			Local_111 = { 645,7223f, -1228,966f, 10,98015f };
			Local_112 = { 521,9379f, -1217,607f, 39,47172f };
			break;
		
		case 8:
			Local_109 = { 642,1216f, -1295,73f, 9,005976f };
			Local_110 = { 568,1702f, -1375,351f, 20,12989f };
			fLocal_113 = 7f;
			Local_111 = { 644,7772f, -1298,168f, 9,128529f };
			Local_112 = { 571,6342f, -1378,644f, 20,35802f };
			break;
		
		case 9:
			Local_109 = { 686,5675f, -1444,71f, 9,065001f };
			Local_110 = { 598,9328f, -1444,438f, 25,68846f };
			fLocal_113 = 25f;
			Local_111 = { 682,3027f, -1429,872f, 9,890836f };
			Local_112 = { 593,8217f, -1432,995f, 25,60072f };
			break;
		
		case 10:
			Local_109 = { 718,7617f, -1734,313f, 9,082874f };
			Local_110 = { 615,0017f, -1725,897f, 27,54585f };
			fLocal_113 = 30f;
			Local_111 = { 717,5355f, -1748,646f, 9,363478f };
			Local_112 = { 614,218f, -1734,848f, 27,35708f };
			break;
		
		case 11:
			Local_109 = { 694,3165f, -2049,806f, 0,009695f };
			Local_110 = { 618,6845f, -2040,014f, 25,83412f };
			fLocal_113 = 30f;
			Local_111 = { 693,1836f, -2063,225f, 0,429037f };
			Local_112 = { 607,5944f, -2055,326f, 26,91816f };
			break;
		
		case 12:
			Local_109 = { 642,6671f, -2494,551f, 0,468485f };
			Local_110 = { 570,1807f, -2513,959f, 11,78794f };
			fLocal_113 = 20f;
			Local_111 = { 647,0339f, -2506,202f, 0,583701f };
			Local_112 = { 571,1415f, -2522,975f, 10,45045f };
			break;
		
		case 13:
			Local_109 = { 691,8235f, -2558,219f, 0,363352f };
			Local_110 = { 645,8863f, -2600,311f, 9,898791f };
			fLocal_113 = 10,25f;
			Local_111 = { 695,7928f, -2561,034f, 0,346731f };
			Local_112 = { 656,3919f, -2601,972f, 9,643657f };
			break;
		
		case 14:
			Local_109 = { 723,6254f, -2562,171f, 0,255647f };
			Local_110 = { 720,752f, -2619,77f, 15,73211f };
			fLocal_113 = 15f;
			Local_111 = { 735,765f, -2561,935f, 0,311182f };
			Local_112 = { 736,1214f, -2618,767f, 15,79061f };
			break;
		
		case 15:
			Local_109 = { 891,4387f, -2603,12f, 0f };
			Local_110 = { 704,4932f, -2634,793f, 45f };
			fLocal_113 = 20f;
			Local_111 = { 893,2578f, -2616,235f, 0f };
			Local_112 = { 707,7261f, -2647,696f, 45f };
			break;
		
		case 16:
			Local_109 = { -2669,587f, 2491,96f, 2,043799f };
			Local_110 = { -2617,765f, 2841,595f, 14,0822f };
			fLocal_113 = 26,5f;
			Local_111 = { -2687,606f, 2494,868f, 2,608733f };
			Local_112 = { -2637,085f, 2846,875f, 14,15988f };
			break;
		
		case 17:
			Local_109 = { -1986,173f, 4521,799f, 0f };
			Local_110 = { -1809,903f, 4699,551f, 53,5088f };
			fLocal_113 = 17f;
			Local_111 = { -1995,668f, 4531,259f, 0f };
			Local_112 = { -1817,543f, 4708,395f, 53,50917f };
			break;
		
		case 18:
			Local_109 = { -526,0265f, 4472,442f, 0f };
			Local_110 = { -505,5714f, 4335,725f, 86,73311f };
			fLocal_113 = 10f;
			Local_111 = { -519,9281f, 4476,346f, 0f };
			Local_112 = { -500,7313f, 4336,389f, 86,71289f };
			break;
		
		case 19:
			Local_109 = { 98,1615f, 3384,489f, 45,45169f };
			Local_110 = { 154,974f, 3350,694f, 30,03358f };
			fLocal_113 = 8f;
			Local_111 = { 152,6802f, 3346,793f, 45,02156f };
			Local_112 = { 95,57188f, 3380,091f, 30,43284f };
			break;
		
		case 20:
			Local_109 = { 147,8606f, 3406,796f, 38,03672f };
			Local_110 = { 126,1329f, 3416,927f, 30,02987f };
			fLocal_113 = 14,5f;
			Local_111 = { 130,0916f, 3425,417f, 38,05672f };
			Local_112 = { 151,8703f, 3415,391f, 30,0578f };
			break;
		
		case 21:
			Local_109 = { 2830,972f, 4967,14f, 34,56013f };
			Local_110 = { 2818,719f, 4992,298f, 51,2909f };
			fLocal_113 = 10f;
			Local_111 = { 2826,767f, 4964,185f, 34,10636f };
			Local_112 = { 2814,216f, 4989,983f, 51,21849f };
			break;
		
		case 22:
			Local_109 = { -151,5764f, 4264,417f, 31,04735f };
			Local_110 = { -193,1962f, 4224,604f, 43,87255f };
			fLocal_113 = 10f;
			Local_111 = { -148,3842f, 4261,071f, 31,57409f };
			Local_112 = { -190,4719f, 4222,076f, 43,95443f };
			break;
		
		case 23:
			Local_109 = { -426,6919f, 2964,272f, 14,848f };
			Local_110 = { -396,2298f, 2959,278f, 23,50637f };
			fLocal_113 = 7f;
			Local_111 = { -425,0283f, 2967,861f, 15,22699f };
			Local_112 = { -395,6073f, 2962,607f, 24,38079f };
			break;
		
		case 24:
			Local_109 = { -192,3414f, 2864,916f, 30,72595f };
			Local_110 = { -170,1509f, 2857,128f, 43,94182f };
			fLocal_113 = 10f;
			Local_111 = { -192,0129f, 2871,603f, 29,99943f };
			Local_112 = { -169,5957f, 2863,838f, 44,03251f };
			break;
		
		case 25:
			Local_109 = { 2539,185f, 2228,772f, 18,6102f };
			Local_110 = { 2574,373f, 2169,401f, 27,26598f };
			fLocal_113 = 10f;
			Local_111 = { 2543,708f, 2231,402f, 18,331f };
			Local_112 = { 2578,079f, 2171,584f, 27,26057f };
			break;
		
		case 26:
			Local_109 = { 2954,087f, 815,7209f, 0,037901f };
			Local_110 = { 2933,189f, 796,4688f, 12,98392f };
			fLocal_113 = 35f;
			Local_111 = { 2966,123f, 806,8889f, 0,544056f };
			Local_112 = { 2950,801f, 786,7816f, 11,74596f };
			break;
		
		case 27:
			Local_109 = { 2329,673f, -459,6648f, 70,24277f };
			Local_110 = { 2413,384f, -361,2188f, 91,77886f };
			fLocal_113 = 12f;
			Local_111 = { 2324,752f, -455,5238f, 70,25145f };
			Local_112 = { 2407,409f, -356,2003f, 91,43083f };
			break;
		
		case 28:
			Local_109 = { 1943,428f, -753,251f, 80,17905f };
			Local_110 = { 1850,365f, -760,9587f, 93,02522f };
			fLocal_113 = 7f;
			Local_111 = { 1943,366f, -758,287f, 80,32291f };
			Local_112 = { 1851,354f, -765,1807f, 92,93546f };
			break;
		
		case 29:
			Local_109 = { -271,2849f, -2414,993f, -10f };
			Local_110 = { -542,9096f, -2225,856f, 52,65004f };
			fLocal_113 = 30f;
			Local_111 = { -279,8399f, -2427,212f, -10f };
			Local_112 = { -551,2656f, -2237,791f, 52,64634f };
			break;
		
		case 30:
			Local_109 = { -1483f, 2691,428f, -10f };
			Local_110 = { -1377,168f, 2600,769f, 15,95528f };
			fLocal_113 = 12f;
			Local_111 = { -1478,152f, 2696,688f, -10f };
			Local_112 = { -1378,503f, 2608,698f, 15,60924f };
			break;
		
		case 31:
			Local_109 = { 222,1519f, -2343,487f, 0,039199f };
			Local_110 = { 222,6849f, -2297,407f, 7,088753f };
			fLocal_113 = 12f;
			Local_111 = { 216,959f, -2343,487f, 0,207734f };
			Local_112 = { 216,602f, -2295,445f, 7,424279f };
			break;
		
		case 32:
			Local_109 = { 346,4622f, -2244,374f, 0,159779f };
			Local_110 = { 346,8347f, -2389,591f, 7,852059f };
			fLocal_113 = 20f;
			Local_111 = { 359,609f, -2244,468f, 0,129684f };
			Local_112 = { 355,4054f, -2390,258f, 7,080691f };
			break;
		
		case 33:
			Local_109 = { -1859,68f, -322,6357f, 56,16368f };
			Local_110 = { -1836,614f, -335,4141f, 96,1161f };
			fLocal_113 = 7,5f;
			Local_111 = { -1860,27f, -327,8634f, 57,543f };
			Local_112 = { -1837,271f, -339,2227f, 95,69325f };
			break;
		
		case 34:
			Local_109 = { -680,2632f, -600,818f, 69,11289f };
			Local_110 = { -706,6613f, -600,7515f, 30,47604f };
			fLocal_113 = 31,5f;
			Local_111 = { -680,6077f, -618,3658f, 69,27496f };
			Local_112 = { -706,3596f, -618,2385f, 30,31235f };
			break;
		
		case 35:
			Local_109 = { -1468,096f, -591,7158f, 67,05518f };
			Local_110 = { -1454,7f, -573,4518f, 29,56736f };
			fLocal_113 = 11,75f;
			Local_111 = { -1474,903f, -591,1215f, 67,08091f };
			Local_112 = { -1457,173f, -568,1316f, 29,44059f };
			break;
		
		case 36:
			Local_109 = { -1544,958f, -537,1475f, 72,44347f };
			Local_110 = { -1564,616f, -551,1829f, 32,86163f };
			fLocal_113 = 11,75f;
			Local_111 = { -1541,008f, -541,5494f, 71,61972f };
			Local_112 = { -1561,219f, -555,868f, 32,9279f };
			break;
		
		case 37:
			Local_109 = { 333,2108f, -2727,274f, 20,71663f };
			Local_110 = { 333,4297f, -2791,609f, 41,99023f };
			fLocal_113 = 20f;
			Local_111 = { 343,1127f, -2727,236f, 20,23613f };
			Local_112 = { 343,6678f, -2791,602f, 41,37928f };
			break;
		
		case 38:
			Local_109 = { 1928,071f, 6228,355f, 43,49398f };
			Local_110 = { 2039,882f, 6167,397f, 55,46405f };
			fLocal_113 = 13f;
			Local_111 = { 1931,82f, 6235,634f, 43,37382f };
			Local_112 = { 2039,598f, 6176,525f, 55,25597f };
			break;
		
		case 39:
			Local_109 = { -736,4309f, -1590,921f, 10,80892f };
			Local_110 = { -710,811f, -1516,349f, -0,098598f };
			fLocal_113 = 15f;
			Local_111 = { -727,2307f, -1585,221f, 11,78027f };
			Local_112 = { -700,0201f, -1511,783f, -0,341655f };
			break;
		
		case 40:
			Local_109 = { -676,3775f, -1548,553f, 12,33747f };
			Local_110 = { -659,329f, -1507,063f, -0,788618f };
			fLocal_113 = 25f;
			Local_111 = { -654,203f, -1536,146f, 9,191055f };
			Local_112 = { -645,9954f, -1500,219f, -2,406948f };
			break;
		
		case 41:
			Local_109 = { -624,2344f, -1537,045f, 12,60193f };
			Local_110 = { -622,1749f, -1472,877f, -0,292606f };
			fLocal_113 = 8f;
			Local_111 = { -615,4003f, -1536,65f, 12,40271f };
			Local_112 = { -619,7385f, -1472,937f, -0,243267f };
			break;
		
		case 42:
			Local_109 = { -492,5057f, -1632,457f, 24,3307f };
			Local_110 = { -418,2088f, -1487,452f, 0f };
			fLocal_113 = 25f;
			Local_111 = { -486,2016f, -1636,095f, 24,20805f };
			Local_112 = { -398,7648f, -1490,44f, 0f };
			break;
		
		case 43:
			Local_109 = { -359,3541f, -1639,693f, 13,13455f };
			Local_110 = { -388,4955f, -1690,945f, -0,183164f };
			fLocal_113 = 25f;
			Local_111 = { -378,1518f, -1705,66f, 12,47196f };
			Local_112 = { -348,9591f, -1654,411f, 0,193478f };
			break;
		
		case 44:
			Local_109 = { -243,4436f, -1814,623f, 25,69465f };
			Local_110 = { -183,9987f, -1780,645f, -0,085802f };
			fLocal_113 = 25f;
			Local_111 = { -235,1319f, -1822,094f, 25,86542f };
			Local_112 = { -175,5105f, -1788,275f, -0,506062f };
			break;
		
		case 45:
			Local_109 = { 84,55537f, -2046,159f, 13,30767f };
			Local_110 = { 17,93164f, -2045,152f, -0,031946f };
			fLocal_113 = 25f;
			Local_111 = { 17,90788f, -2035,773f, 12,62706f };
			Local_112 = { 84,57207f, -2034,184f, 0,048385f };
			break;
		
		case 46:
			Local_109 = { 221,5029f, -2232,766f, 9,88676f };
			Local_110 = { 221,6825f, -2244,081f, 4,479149f };
			fLocal_113 = 8f;
			Local_111 = { 218,583f, -2232,766f, 9,886198f };
			Local_112 = { 218,729f, -2244,081f, 4,535046f };
			break;
		
		case 47:
			Local_109 = { 221,6518f, -2184,635f, 11,66457f };
			Local_110 = { 221,6139f, -2208,137f, 5,876424f };
			fLocal_113 = 8f;
			Local_111 = { 217,8995f, -2184,635f, 11,5405f };
			Local_112 = { 218,3327f, -2208,137f, 5,864793f };
			break;
		
		case 48:
			Local_109 = { 2326,57f, 1096,031f, 76,31458f };
			Local_110 = { 2290,332f, 1136,131f, 58,85706f };
			fLocal_113 = 21f;
			Local_111 = { 2334,453f, 1103,067f, 76,26603f };
			Local_112 = { 2297,846f, 1142,897f, 58,84243f };
			break;
		
		case 49:
			Local_109 = { 2379,442f, 1150,776f, 58,79632f };
			Local_110 = { 2327,658f, 1212,366f, 72,8333f };
			fLocal_113 = 12f;
			Local_111 = { 2374,064f, 1146,282f, 58,83331f };
			Local_112 = { 2320,895f, 1209,596f, 72,79299f };
			break;
		
		case 50:
			Local_109 = { -1179,405f, -355,2554f, 56,53003f };
			Local_110 = { -1198,064f, -357,8363f, 35,35551f };
			fLocal_113 = 12,5f;
			Local_111 = { -1178,385f, -361,8784f, 56,15081f };
			Local_112 = { -1197,104f, -364,7004f, 36,49475f };
			break;
		
		case 51:
			Local_109 = { -921,3846f, -384,94f, 137,0181f };
			Local_110 = { -912,4324f, -429,229f, 36,70113f };
			fLocal_113 = 16f;
			Local_111 = { -914,1658f, -387,9444f, 137,0794f };
			Local_112 = { -906,2534f, -424,691f, 47,11882f };
			break;
		
		case 52:
			Local_109 = { -740,2564f, 246,4529f, 132,2922f };
			Local_110 = { -718,3602f, 201,0042f, 80,95571f };
			fLocal_113 = 22f;
			Local_111 = { -726,6429f, 253,0676f, 132,3319f };
			Local_112 = { -705,5858f, 210,4336f, 78,70573f };
			break;
		
		case 53:
			Local_109 = { -771,2068f, 268,2729f, 132,1689f };
			Local_110 = { -778,3417f, 313,1148f, 84,27054f };
			fLocal_113 = 16f;
			Local_111 = { -770,8035f, 310,8625f, 137,4161f };
			Local_112 = { -763,0681f, 269,044f, 83,31474f };
			break;
		
		case 54:
			Local_109 = { 259,2205f, 135,4146f, 136,7083f };
			Local_110 = { 279,2396f, 128,1379f, 100,8233f };
			fLocal_113 = 16f;
			Local_111 = { 261,9694f, 142,9676f, 136,6889f };
			Local_112 = { 281,7203f, 134,9551f, 100,7704f };
			break;
		
		case 55:
			Local_109 = { 393,548f, -30,87166f, 152,6635f };
			Local_110 = { 369,9622f, -23,88461f, 88,35776f };
			fLocal_113 = 8f;
			Local_111 = { 390,5358f, -36,08882f, 152,7813f };
			Local_112 = { 368,1275f, -28,81888f, 88,69447f };
			break;
		
		case 56:
			Local_109 = { 114,3139f, -648,4297f, 261,8488f };
			Local_110 = { 131,0782f, -733,7684f, 39,34393f };
			fLocal_113 = 20f;
			Local_111 = { 124,8467f, -646,6575f, 261,8488f };
			Local_112 = { 140,0502f, -737,427f, 39,3493f };
			break;
		
		case 57:
			Local_109 = { -215,919f, -823,8436f, 126,0224f };
			Local_110 = { -193,2237f, -761,7781f, 27,91382f };
			fLocal_113 = 20f;
			Local_111 = { -225,397f, -820,3937f, 126,0812f };
			Local_112 = { -202,9433f, -758,257f, 27,47734f };
			break;
		
		case 58:
			Local_109 = { -296,4725f, -802,0815f, 95,40108f };
			Local_110 = { -278,1352f, -747,7841f, 50,40046f };
			fLocal_113 = 20f;
			Local_111 = { -305,4602f, -798,8369f, 95,48194f };
			Local_112 = { -285,7376f, -745,0959f, 49,57651f };
			break;
		
		case 59:
			Local_109 = { -292,3034f, -823,3569f, 95,37621f };
			Local_110 = { -258,5991f, -835,5632f, 27,97946f };
			fLocal_113 = 20f;
			Local_111 = { -288,9206f, -814,022f, 95,37556f };
			Local_112 = { -255,2116f, -826,256f, 27,7375f };
			break;
		
		case 60:
			Local_109 = { -256,3589f, -714,7838f, 110,1617f };
			Local_110 = { -212,9054f, -730,532f, 32,21946f };
			fLocal_113 = 20f;
			Local_111 = { -253,7723f, -705,6632f, 110,1736f };
			Local_112 = { -210,0588f, -722,6748f, 32,46536f };
			break;
		
		case 61:
			Local_109 = { 1808,214f, 1949,246f, 71,73707f };
			Local_110 = { 1837,906f, 2127,283f, 52,80491f };
			fLocal_113 = 9,75f;
			Local_111 = { 1802,786f, 1950,262f, 71,74002f };
			Local_112 = { 1831,994f, 2127,433f, 52,83893f };
			break;
		
		case 62:
			Local_109 = { 2388,733f, 2931,941f, 46,62681f };
			Local_110 = { 2426,681f, 2883,066f, 36,21524f };
			fLocal_113 = 10f;
			Local_111 = { 2392,547f, 2934,867f, 46,6268f };
			Local_112 = { 2430,333f, 2885,908f, 36,28148f };
			break;
		
		case 63:
			Local_109 = { 2700,056f, 4836,381f, 42,07854f };
			Local_110 = { 2685,673f, 4893,38f, 30,90867f };
			fLocal_113 = 20,75f;
			Local_111 = { 2685,672f, 4821,653f, 42,18471f };
			Local_112 = { 2672,812f, 4880,356f, 31,13311f };
			break;
		
		case 64:
			Local_109 = { -1053,446f, 4766,245f, 234,3251f };
			Local_110 = { -1040,263f, 4737,157f, 204,4916f };
			fLocal_113 = 5f;
			Local_111 = { -1051,414f, 4767,193f, 234,4293f };
			Local_112 = { -1037,954f, 4738,354f, 204,5282f };
			break;
	}
}

int func_387(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x1D5CD3EAAA7422B0((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

int func_388(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 8:
		case 12:
		case 13:
		case 20:
		case 31:
		case 32:
		case 46:
		case 47:
			return 1;
			break;
	}
	return 0;
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_390(var uParam0, int iParam1)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(*uParam0, 0) || iParam1)
		{
			if (unk_0x69799E0840A34AFB(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_391(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x7F420695E3F776FB(iParam0, iParam1))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam0, iParam1);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				iVar1 = unk_0xDC1AA2FE20EEB2E9(unk_0x4B423FAA24E8ABF0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xC39AE5D390581AD5(iVar0, iVar3, 0))
					{
						if (unk_0xFD5C5BBD1FE92BB7(iVar0, iVar3, 0) == iParam0)
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

int func_392()
{
	switch (Local_157.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_393(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_410() < 10)
	{
		iVar0 = func_409();
		func_394(Param0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_394(struct<3> Param0, var uParam1, int iParam2, var uParam3)
{
	func_395(Param0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_395(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5)
{
	struct<12> Var0;
	
	if (func_404(unk_0x259BE71D8A81D4FA()) || uParam5)
	{
		if (Var0.f_10 == 1)
		{
			func_403(&Param0, &Param1);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		if (func_398(Var0))
		{
			Global_2635563.f_45.f_64 = func_397(unk_0x259BE71D8A81D4FA());
			func_396(Var0, iParam4);
		}
	}
}

void func_396(struct<12> Param0, int iParam1)
{
	Global_2635563.f_368[iParam1 /*12*/] = { Param0 };
	Global_2635563.f_368[iParam1 /*12*/].f_9 = 1;
}

int func_397(bool bParam0)
{
	if (func_12(bParam0, 0, 1))
	{
		return Global_2657971[bParam0 /*465*/].f_1;
	}
	return 0;
}

int func_398(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_2635563.f_45[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_399(Global_2635563.f_45[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_399(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_402(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_400(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_402(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_400(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (system::vmag(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_400(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	fVar2 = (fParam3 * 0,7071068f);
	Var0 = { Param2 - Vector(fVar2, fVar2, fVar2) };
	Var1 = { Param2 + Vector(fVar2, fVar2, fVar2) };
	return func_401(Param0, Param1, Var0, Var1);
}

int func_401(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)
{
	if (((((Param0.f_0 >= Param2.f_0 && Param0.f_1 >= Param2.f_1) && Param0.f_2 >= Param2.f_2) && Param1.f_0 <= Param3.f_0) && Param1.f_1 <= Param3.f_1) && Param1.f_2 <= Param3.f_2)
	{
		return 1;
	}
	return 0;
}

int func_402(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { Param2 - Param0 };
	if ((system::vmag(Var0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_403(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.f_0 = *uParam0;
		Var1.f_0 = *uParam1;
	}
	else
	{
		Var0.f_0 = *uParam1;
		Var1.f_0 = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var1.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var1.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var1.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var1.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var1 };
}

int func_404(bool bParam0)
{
	if (((func_407(bParam0, 1) || func_406(bParam0)) || func_126(bParam0, 0)) || func_405(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_405(bool bParam0)
{
	if (!func_12(bParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2);
}

int func_406(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1887305[iVar0 /*610*/] != -1;
	}
	return 0;
}

bool func_407(int iParam0, bool bParam1)
{
	if (func_408() != 0)
	{
		return func_397(iParam0) != 0;
	}
	return func_369(iParam0, bParam1, 0);
}

int func_408()
{
	return Global_32948;
}

int func_409()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2635563.f_368[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_410()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635563.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_411(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0xACF853FB3F6EA7D4(sParam2);
	return unk_0x7EBCD400E7DE179C(0);
}

char* func_412(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0";
		
		case 1:
			return "AMCH_1";
		
		case 2:
			return "AMCH_2";
		
		case 3:
			return "AMCH_3";
		
		case 4:
			return "AMCH_4";
		
		case 5:
			return "AMCH_5";
		
		case 6:
			return "AMCH_6";
		
		case 7:
			return "AMCH_7";
		
		case 8:
			return "AMCH_8";
		
		case 14:
			return "AMCH_9";
		
		case 9:
			return "AMCH_12";
		
		case 10:
			return "AMCH_13";
		
		case 11:
			return "AMCH_15";
		
		case 12:
			return "AMCH_16";
		
		case 15:
			return "AMCH_19";
		
		case 16:
			return "AMCH_20";
		
		case 17:
			return "AMCH_21";
		
		case 18:
			return "AMCH_22";
		
		case 13:
			return "AMCH_23";
		
		default:
	}
	return "";
}

char* func_413(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0SLC";
		
		case 1:
			return "AMCH_1SLC";
		
		case 2:
			return "AMCH_2SLC";
		
		case 3:
			return "AMCH_3SLC";
		
		case 4:
			return "AMCH_4SLC";
		
		case 5:
			return "AMCH_5SLC";
		
		case 6:
			return "AMCH_6SLC";
		
		case 7:
			return "AMCH_7SLC";
		
		case 8:
			return "AMCH_8SLC";
		
		case 14:
			return "AMCH_9SLC";
		
		case 9:
			return "AMCH_12SLC";
		
		case 10:
			return "AMCH_13SLC";
		
		case 11:
			return "AMCH_15SLC";
		
		case 12:
			return "AMCH_16SLC";
		
		case 15:
			return "AMCH_19SLC";
		
		case 16:
			return "AMCH_20SLC";
		
		case 17:
			return "AMCH_21SLC";
		
		case 18:
			return "AMCH_22SLC";
		
		case 13:
			return "AMCH_23SLC";
		
		default:
	}
	return "";
}

char* func_414(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_BIG_0";
		
		case 1:
			return "AMCH_BIG_1";
		
		case 2:
			return "AMCH_BIG_2";
		
		case 3:
			return "AMCH_BIG_3";
		
		case 4:
			return "AMCH_BIG_4";
		
		case 5:
			return "AMCH_BIG_5";
		
		case 6:
			return "AMCH_BIG_6";
		
		case 7:
			return "AMCH_BIG_7";
		
		case 8:
			return "AMCH_BIG_8";
		
		case 14:
			return "AMCH_BIG_9";
		
		case 9:
			return "AMCH_BIG_12";
		
		case 10:
			return "AMCH_BIG_13";
		
		case 11:
			return "AMCH_BIG_15";
		
		case 12:
			return "AMCH_BIG_16";
		
		case 15:
			return "AMCH_BIG_19";
		
		case 16:
			return "AMCH_BIG_20";
		
		case 17:
			return "AMCH_BIG_21";
		
		case 18:
			return "AMCH_BIG_22";
		
		case 13:
			return "AMCH_BIG_23";
		
		default:
	}
	return "";
}

void func_415()
{
	if (!func_170())
	{
		return;
	}
	if (!unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == Global_1574765.f_9)
	{
		return;
	}
	func_166();
}

void func_416(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_389(iVar0) && !func_388(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_107[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_417()
{
	if (!func_392())
	{
		if (Local_157.f_3 == 14)
		{
			func_420();
		}
		Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_4.f_1 = func_378();
	}
	else if ((!BitTest(Global_1836959.f_1, 4) && !BitTest(Global_1836959.f_1, 5)) && !func_419(unk_0x259BE71D8A81D4FA()))
	{
		func_418();
	}
}

void func_418()
{
	switch (Local_157.f_3)
	{
		case 0:
			unk_0xD007674D8A581D71(8, 2);
			break;
		
		case 1:
			unk_0xD007674D8A581D71(13, 2);
			break;
		
		case 2:
			unk_0xD007674D8A581D71(4, 2);
			break;
		
		case 4:
			unk_0xD007674D8A581D71(1, 2);
			break;
		
		case 3:
			unk_0xD007674D8A581D71(2, 2);
			break;
		
		case 5:
			unk_0xD007674D8A581D71(3, 2);
			break;
		
		case 6:
			unk_0xD007674D8A581D71(11, 3);
			break;
		
		case 7:
			unk_0xD007674D8A581D71(14, 1);
			break;
		
		case 8:
			unk_0xD007674D8A581D71(29, 2);
			break;
		
		case 9:
			unk_0xD007674D8A581D71(12, 2);
			break;
		
		case 10:
			unk_0xD007674D8A581D71(10, 2);
			break;
		
		case 11:
			unk_0xD007674D8A581D71(18, 2);
			break;
		
		case 12:
			unk_0xD007674D8A581D71(20, 2);
			break;
		
		case 13:
			unk_0xD007674D8A581D71(27, 2);
			break;
		
		case 15:
			unk_0xD007674D8A581D71(26, 1);
			break;
		
		case 16:
			unk_0xD007674D8A581D71(25, 1);
			break;
		
		case 17:
			unk_0xD007674D8A581D71(22, 1);
			break;
		
		case 18:
			unk_0xD007674D8A581D71(24, 1);
			break;
	}
	unk_0x0B0C9A0F9AAEB7F0(&uLocal_128, 8);
}

bool func_419(bool bParam0)
{
	return func_14(bParam0, 0);
}

void func_420()
{
	Local_107[0 /*3*/] = { 1083f, -231f, 60f };
	Local_107[1 /*3*/] = { 1024f, -325f, 60f };
	Local_107[2 /*3*/] = { 910f, -401f, 43f };
	Local_107[3 /*3*/] = { 721f, -457f, 26f };
	Local_107[4 /*3*/] = { 643f, -579f, 26f };
	Local_107[5 /*3*/] = { 590f, -851f, 26f };
	Local_107[6 /*3*/] = { 590f, -1023f, 16f };
	Local_107[7 /*3*/] = { 582f, -1205f, 24f };
	Local_107[8 /*3*/] = { 608f, -1335f, 16f };
	Local_107[9 /*3*/] = { 640f, -1434f, 16f };
	Local_107[10 /*3*/] = { 671f, -1742f, 20f };
	Local_107[11 /*3*/] = { 651f, -2046f, 16f };
	Local_107[12 /*3*/] = { 603f, -2505f, 9f };
	Local_107[13 /*3*/] = { 673f, -2582f, 4f };
	Local_107[14 /*3*/] = { 728f, -2594f, 10f };
	Local_107[15 /*3*/] = { 794f, -2624f, 27f };
	Local_107[16 /*3*/] = { -2663f, 2594f, 7,5f };
	Local_107[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_107[18 /*3*/] = { -513f, 4427f, 40f };
	Local_107[19 /*3*/] = { 126f, 3366f, 40f };
	Local_107[20 /*3*/] = { 143f, 3418f, 36f };
	Local_107[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_107[22 /*3*/] = { -162f, 4249f, 40f };
	Local_107[23 /*3*/] = { -408f, 2964f, 20f };
	Local_107[24 /*3*/] = { -181f, 2862f, 38f };
	Local_107[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_107[26 /*3*/] = { 2950f, 803f, 8f };
	Local_107[27 /*3*/] = { 2369f, -409f, 80f };
	Local_107[28 /*3*/] = { 1906f, -755f, 84f };
	Local_107[29 /*3*/] = { -403f, -2333f, 40f };
	Local_107[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_107[31 /*3*/] = { 219f, -2315f, 5f };
	Local_107[32 /*3*/] = { 350f, -2315f, 5f };
	Local_107[33 /*3*/] = { -1848f, -333f, 75f };
	Local_107[34 /*3*/] = { -693f, -608f, 69f };
	Local_107[35 /*3*/] = { -1461f, -582f, 53f };
	Local_107[36 /*3*/] = { -1553f, -546f, 59f };
	Local_107[37 /*3*/] = { 338f, -2758f, 23f };
	Local_107[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_107[39 /*3*/] = { -713f, -1538f, 13f };
	Local_107[40 /*3*/] = { -659f, -1518f, 13f };
	Local_107[41 /*3*/] = { -620f, -1502f, 16f };
	Local_107[42 /*3*/] = { -445f, -1575f, 26f };
	Local_107[43 /*3*/] = { -373f, -1680f, 19f };
	Local_107[44 /*3*/] = { -212f, -1805f, 29f };
	Local_107[45 /*3*/] = { 47f, -2040f, 18f };
	Local_107[46 /*3*/] = { 223f, -2240f, 6f };
	Local_107[47 /*3*/] = { 218f, -2189f, 6f };
	Local_107[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_107[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_107[50 /*3*/] = { -1186f, -365f, 46f };
	Local_107[51 /*3*/] = { -916f, -407f, 93f };
	Local_107[52 /*3*/] = { -726f, 235f, 105f };
	Local_107[53 /*3*/] = { -774f, 286f, 112f };
	Local_107[54 /*3*/] = { 271f, 134f, 125f };
	Local_107[55 /*3*/] = { 377f, -28f, 125f };
	Local_107[56 /*3*/] = { 121f, -703f, 150f };
	Local_107[57 /*3*/] = { -204f, -784f, 74f };
	Local_107[58 /*3*/] = { -287f, -774f, 72f };
	Local_107[59 /*3*/] = { -272f, -824f, 71f };
	Local_107[60 /*3*/] = { -230f, -723f, 80f };
	Local_107[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_107[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_107[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_107[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_421(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_219, bParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_219), bParam0);
		}
	}
	else if (BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_219, bParam0))
	{
		unk_0x8744D2E3FC95740E(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_219), bParam0);
	}
}

void func_422(var uParam0, int iParam1)
{
	if (func_337(unk_0x259BE71D8A81D4FA()) == 133 && iParam1)
	{
		Global_2738934.f_5167 = uParam0;
	}
	else
	{
		Global_2738934.f_5167 = -1;
	}
}

void func_423(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0xCFBD89D2F1F18961("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 1);
	}
	Global_2738934.f_5093 = -1;
	bVar0 = (func_126(unk_0x259BE71D8A81D4FA(), 0) && func_122(unk_0x259BE71D8A81D4FA()));
	if (bParam6)
	{
		func_421(func_440(iParam0), 1);
	}
	else
	{
		func_439(iParam0, -1);
		if (func_8(unk_0x259BE71D8A81D4FA()))
		{
			Global_1836959.f_3 = iParam0;
		}
		else
		{
			func_438(iParam0);
		}
		Global_1836959.f_4 = -1;
		if (func_8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 5);
		}
		if (((func_180() && !func_179()) || func_178(unk_0x259BE71D8A81D4FA(), 21)) || func_178(unk_0x259BE71D8A81D4FA(), 25))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 4);
		}
		unk_0x8744D2E3FC95740E(&(Global_1836959.f_1), 17);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 20);
		if (func_437(iParam0))
		{
			func_436();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_433(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x425BBE19F25A57AB(fParam2);
			if (iParam0 == 146)
			{
				unk_0xDAE61414743C8D1D(0);
				unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
				unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
			}
		}
		if (func_431(iParam0))
		{
			unk_0xDAE61414743C8D1D(0);
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
			unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_4594767)
			{
				func_429(1);
				if (func_279(0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 9);
				}
				if (!bParam6)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_427(1);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 12);
		}
		if (bParam5)
		{
			func_426();
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_424(iParam0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 21);
			}
		}
	}
	Global_2707198 = 1;
}

int func_424(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return 1;
		
		default:
	}
	if (func_137(iParam0) == 1)
	{
		return 1;
	}
	if (func_425())
	{
		return 1;
	}
	return 0;
}

int func_425()
{
	switch (func_336())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_426()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_5084), false);
}

void func_427(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_101585.f_8 = 1;
	}
	else
	{
		Global_101585.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_428(iVar0);
		iVar0++;
	}
}

void func_428(int iParam0)
{
	Global_101585.f_205[iParam0] = 1;
	Global_101585.f_204 = 1;
}

void func_429(int iParam0)
{
	if (func_430() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_4594767)
	{
		return;
	}
	Global_4594767 = iParam0;
	Global_4594769 = 0;
	Global_4594770 = 0;
}

int func_430()
{
	if ((((Global_1057440 != -1 && Global_1057440 != 33) && Global_1057440 != 35) && Global_1057440 != 37) && Global_1057440 != 21)
	{
		return 1;
	}
	return 0;
}

int func_431(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_432(unk_0x259BE71D8A81D4FA()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_432(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 0);
	}
	return 0;
}

void func_433(float fParam0)
{
	float fVar0;
	
	if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == func_434())
	{
		return;
	}
	fVar0 = (Global_2738934.f_5244 - fParam0);
	if (unk_0xF40767E41852FB72(Global_2738934.f_5245))
	{
		if (!Global_2738934.f_5245 == unk_0x8F76B2250AC806FA() && unk_0x1D5CD3EAAA7422B0(fVar0) > 0,001f)
		{
			return;
		}
	}
	Global_2738934.f_5244 = fParam0;
	Global_2738934.f_5245 = unk_0x8F76B2250AC806FA();
}

int func_434()
{
	switch (func_408())
	{
		case 0:
			return func_435();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_435()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_436()
{
	Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_211 = 0;
	unk_0x8744D2E3FC95740E(&(Global_2738934.f_4682), true);
}

int func_437(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_438(int iParam0)
{
	Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/] = iParam0;
}

void func_439(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_364(func_365(iVar0)))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1), 2);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1), 2);
		}
	}
}

int func_440(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

int func_441()
{
	switch (Local_157.f_3)
	{
		case 18:
		case 16:
		case 15:
		case 17:
			return 1;
		
		default:
	}
	return 0;
}

int func_442()
{
	switch (Local_157.f_3)
	{
		case 1:
		case 6:
		case 11:
		case 12:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

void func_443()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_157.f_3))
	{
		if (Local_157.f_3 == 1 || Local_157.f_3 == 6)
		{
			iVar0 = func_464(unk_0x259BE71D8A81D4FA(), 1);
			iVar1 = func_214(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0x1F7A48429F9F64CE(unk_0x4A8C381C258A124D()))
				{
					unk_0xB41DEC3AAC1AA107(unk_0x4A8C381C258A124D(), joaat("gadget_parachute"), 1, 0, 0);
					func_444(1);
				}
			}
			else
			{
				unk_0xE8B2E2E978035EF0(unk_0x259BE71D8A81D4FA(), 1);
			}
		}
	}
}

void func_444(bool bParam0)
{
	int iVar0;
	
	if (unk_0xC0120BBCC298EA2F(unk_0x4A8C381C258A124D(), 5) != 0)
	{
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 177, 1);
		func_462(unk_0x259BE71D8A81D4FA(), func_218(586, -1), 0);
		if (func_461(3610, -1))
		{
		}
		iVar0 = func_218(2042, -1);
		unk_0xC02C4AB8A5C744D7(unk_0x259BE71D8A81D4FA(), func_460(unk_0x56E414973C2A8C0E(unk_0x259BE71D8A81D4FA()), iVar0));
		if (func_276(0))
		{
			func_462(unk_0x259BE71D8A81D4FA(), func_218(586, -1), 0);
		}
		else
		{
			func_462(unk_0x259BE71D8A81D4FA(), func_459(Global_2749178), 0);
		}
		func_457(unk_0x259BE71D8A81D4FA(), iVar0);
		unk_0x740F6E63EE1C1D43(unk_0x259BE71D8A81D4FA(), 5, func_450(unk_0x4A8C381C258A124D(), iVar0), func_449(unk_0x4A8C381C258A124D(), iVar0), 0);
		func_448(func_218(2042, -1), 1);
		Global_2738934.f_287 = 1;
		func_445(unk_0x259BE71D8A81D4FA(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_445(bool bParam0, int iParam1, int iParam2)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_447();
		if (iParam2 == -1)
		{
			iParam2 = func_218(2042, -1);
		}
		unk_0x740F6E63EE1C1D43(bParam0, 5, func_450(unk_0x56E414973C2A8C0E(bParam0), iParam2), func_449(unk_0x56E414973C2A8C0E(bParam0), iParam2), 0);
		unk_0xC02C4AB8A5C744D7(bParam0, func_460(unk_0x56E414973C2A8C0E(bParam0), iParam2));
		unk_0xD1C578C204015E1F(unk_0x56E414973C2A8C0E(bParam0), 5, func_450(unk_0x56E414973C2A8C0E(bParam0), iParam2), func_449(unk_0x56E414973C2A8C0E(bParam0), iParam2), func_460(unk_0x56E414973C2A8C0E(bParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_218(586, -1);
		}
		if (func_276(1) && func_446(bParam0))
		{
			func_462(bParam0, func_459(Global_2749178), 0);
		}
		else
		{
			func_462(bParam0, iParam1, 0);
		}
		if (BitTest(Global_4718592.f_28, 4))
		{
			func_462(bParam0, Global_1836709, 1);
		}
		func_457(bParam0, iParam2);
		unk_0x0FB8E752BCC547A9(unk_0x56E414973C2A8C0E(bParam0), 177, 1);
	}
}

var func_446(bool bParam0)
{
	return func_121(bParam0, 10);
}

void func_447()
{
	Global_79361 = 0;
	Global_79362 = -1;
	Global_79363 = -1;
	Global_79364 = -1;
	Global_79365 = -1;
	Global_79369 = -1;
}

void func_448(int iParam0, int iParam1)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_447();
		func_211(2042, iParam0, -1, 1);
		unk_0x740F6E63EE1C1D43(unk_0x259BE71D8A81D4FA(), 5, func_450(unk_0x4A8C381C258A124D(), iParam0), func_449(unk_0x4A8C381C258A124D(), iParam0), 0);
		func_457(unk_0x259BE71D8A81D4FA(), iParam0);
		unk_0xC02C4AB8A5C744D7(unk_0x259BE71D8A81D4FA(), func_460(unk_0x4A8C381C258A124D(), iParam0));
		if ((iParam1 && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) && unk_0xC0120BBCC298EA2F(unk_0x4A8C381C258A124D(), 5) != 0)
		{
			func_445(unk_0x259BE71D8A81D4FA(), -1, -1);
		}
	}
}

int func_449(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
		
		case 13:
			return 12;
			break;
		
		case 14:
			return 13;
			break;
		
		case 15:
			return 14;
			break;
		
		case 16:
			return 15;
			break;
		
		case 17:
			return 16;
			break;
		
		case 18:
			return 17;
			break;
		
		case 19:
			return 18;
			break;
		
		case 20:
			return 19;
			break;
		
		case 21:
			return 20;
			break;
		
		case 22:
			return 21;
			break;
		
		case 23:
			return 22;
			break;
		
		case 24:
			return 23;
			break;
		
		case 25:
			return 24;
			break;
		
		case 26:
			return 25;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 2;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 4;
			break;
		
		case 32:
			return 5;
			break;
		
		case 33:
			return 6;
			break;
		
		case 34:
			return 7;
			break;
		
		case 35:
			return 8;
			break;
		
		case 36:
			return 9;
			break;
		
		case 37:
			return 10;
			break;
		
		case 38:
			return 11;
			break;
		
		case 39:
			return 12;
			break;
		
		case 40:
			return 13;
			break;
		
		case 41:
			return 14;
			break;
		
		case 42:
			return 15;
			break;
		
		case 43:
			return 16;
			break;
		
		case 44:
			return 17;
			break;
		
		case 45:
			return 18;
			break;
		
		case 46:
			return 19;
			break;
		
		case 47:
			return 0;
			break;
		
		case 48:
			return 1;
			break;
		
		case 49:
			return 2;
			break;
		
		case 50:
			return 3;
			break;
		
		case 51:
			return 4;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 2;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 4;
			break;
		
		case 58:
			return 5;
			break;
		
		case 59:
			return 6;
			break;
		
		case 60:
			return 7;
			break;
		
		case 61:
			return 8;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 1;
			break;
		
		case 64:
			return 0;
			break;
		
		case 65:
			return 1;
			break;
		
		case 66:
			return 2;
			break;
		
		case 67:
			return 0;
			break;
	}
	return 0;
}

var func_450(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0xC0120BBCC298EA2F(uParam0, 8);
	iVar1 = unk_0xC0120BBCC298EA2F(iParam0, 11);
	iVar2 = unk_0xC0120BBCC298EA2F(iParam0, 4);
	bVar3 = unk_0xC0120BBCC298EA2F(iParam0, 9) != false;
	iVar4 = unk_0x94B8A32AA940A6B5(iParam0, 8, iVar0, unk_0xD6AED6BFCC58AF7F(iParam0, 8));
	iVar5 = unk_0x94B8A32AA940A6B5(iParam0, 11, iVar1, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
	iVar6 = unk_0x94B8A32AA940A6B5(iParam0, 4, iVar2, unk_0xD6AED6BFCC58AF7F(iParam0, 4));
	if (((((((bVar3 != Global_79361 || iParam1 != Global_79362) || iVar4 != Global_79363) || iVar5 != Global_79364) || iVar6 != Global_79365) || iVar0 != Global_79366) || iVar1 != Global_79367) || iVar2 != Global_79368)
	{
		Global_79361 = bVar3;
		Global_79362 = iParam1;
		Global_79363 = iVar4;
		Global_79364 = iVar5;
		Global_79365 = iVar6;
		Global_79366 = iVar0;
		Global_79367 = iVar1;
		Global_79368 = iVar2;
		Global_79369 = func_451(iParam0, iParam1);
	}
	return Global_79369;
}

int func_451(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0xC0120BBCC298EA2F(uParam0, 11);
	if (unk_0xC0120BBCC298EA2F(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x4B423FAA24E8ABF0(iParam0);
	uVar3 = unk_0x94B8A32AA940A6B5(iParam0, 8, unk_0xC0120BBCC298EA2F(iParam0, 8), unk_0xD6AED6BFCC58AF7F(iParam0, 8));
	if (unk_0x304A39EB177D246B(uVar3, joaat("over_jacket"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_2"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_1"), 8))
			{
				return func_456(iParam0, iParam1, 1);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_3"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_0"), 8))
			{
				return func_456(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_4"), 8))
			{
				return func_456(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_5"), 8))
			{
				return func_456(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_6"), 8))
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_2"), 8))
			{
				return func_456(iParam0, iParam1, 6);
			}
			if ((unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_3"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_0"), 8)) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_1"), 8))
			{
				return func_456(iParam0, iParam1, 7);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_4"), 8))
			{
				return func_456(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_5"), 8))
			{
				return func_456(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_6"), 8))
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		return func_456(iParam0, iParam1, 9);
	}
	if (func_455(iParam0))
	{
		if (bVar1)
		{
			return func_456(iParam0, iParam1, 7);
		}
		else
		{
			return func_456(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = unk_0x94B8A32AA940A6B5(iParam0, 11, iVar0, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
		if (unk_0x304A39EB177D246B(iVar4, 98087521, 0))
		{
			return func_456(iParam0, iParam1, 0);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -135391604, 0))
		{
			return func_456(iParam0, iParam1, 1);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 1398721900, 0))
		{
			return func_456(iParam0, iParam1, 2);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 1030529416, 0))
		{
			return func_456(iParam0, iParam1, 3);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 873008833, 0))
		{
			return func_456(iParam0, iParam1, 4);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1646534043, 0))
		{
			return func_456(iParam0, iParam1, 5);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1868675094, 0))
		{
			return func_456(iParam0, iParam1, 6);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1500122155, 0))
		{
			return func_456(iParam0, iParam1, 7);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1741007074, 0))
		{
			return func_456(iParam0, iParam1, 8);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -226291902, 0))
		{
			return func_456(iParam0, iParam1, 9);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 607416996, 0))
		{
			return func_456(iParam0, iParam1, 10);
		}
		if (unk_0x304A39EB177D246B(iVar4, joaat("hipster_dress"), 0))
		{
			if (bVar1)
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -405912369, 0))
		{
			return func_456(iParam0, iParam1, 1);
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("dress"), 0))
		{
			if (bVar1)
			{
				return func_456(iParam0, iParam1, 5);
			}
			else
			{
				return func_456(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("pilot_suit"), 0))
		{
			return func_456(iParam0, iParam1, 8);
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("combat_gear"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("hooded_jacket"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 1);
				}
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_5"), 0))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_32"), 0))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_33"), 0))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_30"), 0))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LUXE_COAT"), 0) && !unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_3"), 0))
		{
			iVar5 = func_454(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_456(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_456(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_453(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_456(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_453(iVar4);
						break;
					}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_bomb"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_4"), 0))
			{
				return func_456(iParam0, iParam1, 2);
			}
			else
			{
				return func_456(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("heist_gear"), 0))
		{
			iVar6 = func_452(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_456(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_456(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_456(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_456(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_456(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_456(iParam0, iParam1, 9);
					}
					else
					{
						return func_456(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_456(iParam0, iParam1, 9);
					}
					else
					{
						return func_456(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_456(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_453(iVar4);
					break;
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("xmas2_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 1);
			}
			else
			{
				return func_456(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 2);
			}
			else
			{
				return func_456(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 2);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 1);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 8);
			}
			else
			{
				return func_456(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_7"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 2);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_8"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x304A39EB177D246B(iVar4, joaat("air_draw_3"), 0))
				{
					return func_456(iParam0, iParam1, 10);
				}
				else
				{
					return func_456(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 1);
			}
		}
		else if ((unk_0x304A39EB177D246B(iVar4, -1086258388, 0) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_sweat"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_sweat"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_456(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 6);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 2);
			}
			else
			{
				return func_456(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 2);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 9);
				}
				else
				{
					return func_456(iParam0, iParam1, 1);
				}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 5);
				}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_456(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_456(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_456(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 2);
				}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_456(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_0"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("air_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_456(iParam0, iParam1, 10);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 2);
			}
			else
			{
				return func_456(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 2);
			}
			else
			{
				return func_456(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 2);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 2);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_456(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("smug_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("air_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("assault_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 0);
			}
			else
			{
				return func_456(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_456(iParam0, iParam1, 10);
				}
				else
				{
					return func_456(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 1);
			}
			else
			{
				return func_456(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 3);
			}
			else
			{
				return func_456(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 1);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 9);
			}
			else
			{
				return func_456(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 10);
			}
			else
			{
				return func_456(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("vest_shirt"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("tails_jacket"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_456(iParam0, iParam1, 7);
			}
			else
			{
				return func_456(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("smoking_jacket"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_456(iParam0, iParam1, 2);
			}
			else
			{
				return func_456(iParam0, iParam1, 7);
			}
		}
		else if ((unk_0x304A39EB177D246B(iVar4, joaat("silk_pyjamas"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar4, -826135203, 0))
		{
			return func_456(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_453(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 1);
				}
				else
				{
					return func_456(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 1);
				}
				else
				{
					return func_456(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 6);
				}
				else
				{
					return func_456(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 2);
				}
				else
				{
					return func_456(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 2);
				}
				else
				{
					return func_456(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 1);
				}
				else
				{
					return func_456(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 1);
				}
				else
				{
					return func_456(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 2);
				}
				else
				{
					return func_456(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 1);
				}
				else
				{
					return func_456(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 2);
				}
				else
				{
					return func_456(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 1);
				}
				else
				{
					return func_456(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 6);
				}
				else
				{
					return func_456(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 5);
				}
				else
				{
					return func_456(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 1);
				}
				else
				{
					return func_456(iParam0, iParam1, 4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 1);
				}
				else
				{
					return func_456(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 6);
				}
				else
				{
					return func_456(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 3);
				}
				else
				{
					return func_456(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 5);
				}
				else
				{
					return func_456(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 1);
				}
				else
				{
					return func_456(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 1);
				}
				else
				{
					return func_456(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 6);
				}
				else
				{
					return func_456(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 6);
				}
				else
				{
					return func_456(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 6);
				}
				else
				{
					return func_456(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_456(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 6);
				}
				else
				{
					return func_456(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 1);
				}
				else
				{
					return func_456(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 1);
				}
				else
				{
					return func_456(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 1);
				}
				else
				{
					return func_456(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 7);
				}
				else
				{
					return func_456(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_456(iParam0, iParam1, 1);
				}
				else
				{
					return func_456(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_456(iParam0, iParam1, 0);
	return 0;
}

int func_452(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_453(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x304A39EB177D246B(iParam0, joaat("draw_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_454(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x304A39EB177D246B(uParam0, joaat("luxe_draw_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x304A39EB177D246B(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x304A39EB177D246B(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_455(var uParam0)
{
	if (unk_0xCA362C769B0F4F0E(uParam0, 4, joaat("dungarees")))
	{
		return 1;
	}
	return 0;
}

int func_456(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 2;
					break;
				
				case 2:
					return 3;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 6;
					break;
				
				case 6:
					return 7;
					break;
				
				case 7:
					return 8;
					break;
				
				case 8:
					return 19;
					break;
				
				case 9:
					return 48;
					break;
				
				case 10:
					return 62;
					break;
			}
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			switch (iParam2)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 11;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 13;
					break;
				
				case 4:
					return 14;
					break;
				
				case 5:
					return 15;
					break;
				
				case 6:
					return 16;
					break;
				
				case 7:
					return 17;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 49;
					break;
				
				case 10:
					return 64;
					break;
			}
			break;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			switch (iParam2)
			{
				case 0:
					return 21;
					break;
				
				case 1:
					return 22;
					break;
				
				case 2:
					return 23;
					break;
				
				case 3:
					return 24;
					break;
				
				case 4:
					return 25;
					break;
				
				case 5:
					return 26;
					break;
				
				case 6:
					return 27;
					break;
				
				case 7:
					return 28;
					break;
				
				case 8:
					return 29;
					break;
				
				case 9:
					return 50;
					break;
				
				case 10:
					return 65;
					break;
			}
			break;
		
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
			switch (iParam2)
			{
				case 0:
					return 31;
					break;
				
				case 1:
					return 32;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 34;
					break;
				
				case 4:
					return 35;
					break;
				
				case 5:
					return 36;
					break;
				
				case 6:
					return 37;
					break;
				
				case 7:
					return 38;
					break;
				
				case 8:
					return 39;
					break;
				
				case 9:
					return 51;
					break;
				
				case 10:
					return 66;
					break;
			}
			break;
		
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
			switch (iParam2)
			{
				case 0:
					return 52;
					break;
				
				case 1:
					return 53;
					break;
				
				case 2:
					return 54;
					break;
				
				case 3:
					return 55;
					break;
				
				case 4:
					return 56;
					break;
				
				case 5:
					return 57;
					break;
				
				case 6:
					return 58;
					break;
				
				case 7:
					return 59;
					break;
				
				case 8:
					return 60;
					break;
				
				case 9:
					return 61;
					break;
				
				case 10:
					return 69;
					break;
			}
			break;
		
		case 62:
		case 63:
			switch (iParam2)
			{
				case 0:
					return 70;
					break;
				
				case 1:
					return 71;
					break;
				
				case 2:
					return 72;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 75;
					break;
				
				case 6:
					return 76;
					break;
				
				case 7:
					return 77;
					break;
				
				case 8:
					return 78;
					break;
				
				case 9:
					return 79;
					break;
				
				case 10:
					return 80;
					break;
			}
			break;
		
		case 64:
		case 65:
		case 66:
			switch (iParam2)
			{
				case 0:
					return 89;
					break;
				
				case 1:
					return 90;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 92;
					break;
				
				case 4:
					return 93;
					break;
				
				case 5:
					return 94;
					break;
				
				case 6:
					return 95;
					break;
				
				case 7:
					return 96;
					break;
				
				case 8:
					return 97;
					break;
				
				case 9:
					return 98;
					break;
				
				case 10:
					return 99;
					break;
			}
			break;
		
		case 67:
			switch (iParam2)
			{
				case 0:
					return 100;
					break;
				
				case 1:
					return 101;
					break;
				
				case 2:
					return 102;
					break;
				
				case 3:
					return 103;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 105;
					break;
				
				case 6:
					return 106;
					break;
				
				case 7:
					return 107;
					break;
				
				case 8:
					return 108;
					break;
				
				case 9:
					return 109;
					break;
				
				case 10:
					return 110;
					break;
			}
			break;
	}
	return 0;
}

void func_457(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_458(iParam1);
	if (iVar0 != joaat("p_parachute_s"))
	{
		unk_0xD8FE716A11BE669A(bParam0, iVar0);
	}
	else
	{
		unk_0xBDAA517C3D10DB80(bParam0);
	}
}

int func_458(int iParam0)
{
	if (iParam0 > 66)
	{
		return joaat("reh_p_para_bag_reh_s_01a");
	}
	else if (iParam0 > 63)
	{
		return joaat("p_para_bag_tr_s_01a");
	}
	else if (iParam0 > 61)
	{
		return joaat("vw_p_para_bag_vine_s");
	}
	else if (iParam0 > 51)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	else if (iParam0 > 46)
	{
		return joaat("p_para_bag_xmas_s");
	}
	else if (iParam0 > 26)
	{
		return joaat("lts_p_para_bag_lts_s");
	}
	else if (iParam0 > 0)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	return joaat("p_parachute_s");
}

int func_459(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_460(var uParam0, int iParam1)
{
	return 0;
}

bool func_461(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

void func_462(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (func_463(iParam1, iParam2, &uVar0, &uVar1))
	{
		unk_0x9C63D805CB2ABDB5(bParam0, uVar1);
		unk_0xCE1864BA99DCF3C2(bParam0, uVar0);
	}
	else
	{
		unk_0x9C63D805CB2ABDB5(bParam0, 0);
		unk_0xC7DB642109D72AF8(bParam0);
	}
}

bool func_463(int iParam0, int iParam1, var uParam2, var uParam3)
{
	*uParam2 = 0;
	*uParam3 = 0;
	switch (iParam1)
	{
		case 1:
			*uParam2 = joaat("xm_prop_x17_para_sp_s");
			*uParam3 = iParam0;
			break;
		
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 0;
					break;
				
				case 1:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 1;
					break;
				
				case 2:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 2;
					break;
				
				case 3:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 3;
					break;
				
				case 4:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 4;
					break;
				
				case 5:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 5;
					break;
				
				case 6:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 6;
					break;
				
				case 7:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 7;
					break;
				
				case 8:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 8;
					break;
				
				case 9:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 9;
					break;
				
				case 10:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 10;
					break;
				
				case 11:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 11;
					break;
				
				case 12:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 12;
					break;
				
				case 13:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 13;
					break;
				
				case 14:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 1;
					break;
				
				case 15:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 2;
					break;
				
				case 16:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 3;
					break;
				
				case 17:
					*uParam2 = joaat("reh_prop_reh_para_sp_s_01a");
					*uParam3 = 1;
					break;
			}
			break;
	}
	return *uParam2 != 0;
}

int func_464(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_219(bParam0);
}

void func_465()
{
	struct<3> Var0;
	var uVar1;
	bool bVar2;
	var uVar3;
	float fVar4;
	bool bVar5;
	struct<3> Var6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	var uVar10;
	struct<3> Var11;
	float fVar12;
	
	if ((((!func_7(unk_0x259BE71D8A81D4FA()) && !func_177(unk_0x259BE71D8A81D4FA())) && !func_331()) && !func_479(unk_0x259BE71D8A81D4FA(), 0, -1)) && !func_478(unk_0x259BE71D8A81D4FA()))
	{
		if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			fVar4 = 2,147484E+09f;
			bVar5 = -1;
			Var6 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			bVar7 = func_5(Local_157.f_3);
			bVar8 = unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0);
			bVar9 = func_477();
			bVar2 = false;
			while (bVar2 < 10)
			{
				uVar10 = Local_157.f_67[bVar2 /*2*/].f_1;
				if (unk_0x93BF17E19A9F0E9B(uVar10) && unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(uVar10), 0))
				{
					if (!bVar9 && bVar7)
					{
						if (bVar8 && unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0) == unk_0xE38610F405049F71(uVar10))
						{
							func_355(1);
						}
					}
					unk_0x0B0C9A0F9AAEB7F0(&uVar3, bVar2);
					if (bVar7 && func_41(Local_157.f_3, bVar2, &Var0, &uVar1))
					{
						Var11 = { unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(uVar10), 1) };
						if (system::vdist(Var11, Var0) <= 10f)
						{
							fVar12 = system::vdist(Var11, Var6);
							if (fVar12 < fVar4)
							{
								fVar4 = fVar12;
								bVar5 = bVar2;
							}
						}
					}
				}
				bVar2++;
			}
			if (func_42(Local_157.f_3))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uVar3, 31);
			}
			Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_7 = uVar3;
			if (func_5(Local_157.f_3))
			{
				if ((unk_0x1F7A48429F9F64CE(unk_0x4A8C381C258A124D()) || (unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) && !unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))) || func_18(-1, 0))
				{
					if ((fVar4 < 2,147484E+09f && bVar5 >= 0) && bVar5 < 10)
					{
						if (func_41(Local_157.f_3, bVar5, &Var0, &uVar1))
						{
							func_476(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_475(Var0, 1, 0);
							func_467(10, 0, 0, 0, 0);
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_128, 5);
						}
					}
				}
				else
				{
					func_466();
				}
			}
		}
	}
	else
	{
		func_466();
	}
}

void func_466()
{
	if (BitTest(uLocal_128, 5))
	{
		func_185();
		func_183();
		unk_0x8744D2E3FC95740E(&uLocal_128, 5);
		func_182();
	}
}

void func_467(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2672855.f_1728.f_703.f_16 != func_116())
	{
		if (BitTest(Global_2657971[Global_2672855.f_1728.f_703.f_16 /*465*/].f_426, 0) && func_468())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2643622 = 0;
	}
	Global_2635563.f_490 = iParam0;
	Global_2635563.f_490.f_1 = unk_0x8F76B2250AC806FA();
	Global_2635563.f_490.f_2 = iParam1;
	Global_2635563.f_490.f_3 = iParam2;
	Global_2635563.f_490.f_4 = iParam3;
	Global_2635563.f_490.f_5 = iParam4;
}

int func_468()
{
	if (((((((func_234(unk_0x259BE71D8A81D4FA()) == 229 || func_234(unk_0x259BE71D8A81D4FA()) == 191) || func_474(Global_4718592.f_185586)) || func_473()) || func_472()) || func_471()) || Global_2708057.f_227 == 1) || (Global_2635563.f_2053 && func_469(unk_0x259BE71D8A81D4FA())))
	{
		return 0;
	}
	return 1;
}

int func_469(int iParam0)
{
	if (func_470(iParam0))
	{
		return 1;
	}
	if (func_120(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_470(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 7);
	}
	return 0;
}

bool func_471()
{
	return Global_2708056;
}

bool func_472()
{
	return Global_1836675;
}

int func_473()
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

bool func_474(int iParam0)
{
	return iParam0 == 92;
}

void func_475(struct<3> Param0, int iParam1, int iParam2)
{
	Global_2635563.f_45.f_49 = { Param0 };
	Global_2635563.f_45.f_52 = iParam1;
	Global_2635563.f_45.f_53 = iParam2;
}

void func_476(struct<3> Param0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0xF40767E41852FB72(Global_2644881.f_6))
	{
		if (!Global_2644881.f_6 == unk_0x8F76B2250AC806FA())
		{
			return;
		}
	}
	if (system::vmag(Param0) == 0f)
	{
		return;
	}
	if (!unk_0xF40767E41852FB72(Global_2644881.f_6))
	{
		Global_2644881.f_6 = unk_0x8F76B2250AC806FA();
	}
	Var0.f_6 = Global_2644881.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_404(unk_0x259BE71D8A81D4FA()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2644881 = { Var0 };
}

int func_477()
{
	if ((((((func_470(unk_0x259BE71D8A81D4FA()) || func_180()) || func_179()) || func_178(unk_0x259BE71D8A81D4FA(), 21)) || func_178(unk_0x259BE71D8A81D4FA(), 25)) || func_8(unk_0x259BE71D8A81D4FA())) || func_7(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	return 0;
}

int func_478(bool bParam0)
{
	if (BitTest(Global_1845281[bParam0 /*883*/].f_268.f_33, 14))
	{
		return 1;
	}
	if (BitTest(Global_1845281[bParam0 /*883*/].f_268.f_33, 11))
	{
		return 1;
	}
	return 0;
}

int func_479(bool bParam0, bool bParam1, int iParam2)
{
	if (Global_1845281[bParam0 /*883*/].f_268.f_35 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1845281[bParam0 /*883*/].f_268.f_33, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2657971[bParam0 /*465*/].f_322.f_8 != -1)
	{
		if (iParam2 == -1 || func_316(Global_2657971[bParam0 /*465*/].f_322.f_8) != iParam2)
		{
			if (bParam1)
			{
				return func_480(bParam0) == bParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_480(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_116())
	{
		return iParam0;
	}
	if (func_481(iParam0) != -1)
	{
		iVar0 = func_316(func_481(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_92(iParam0, 0))
			{
				return func_91(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_116();
		}
		return Global_2657971[iParam0 /*465*/].f_322.f_11;
	}
	return func_116();
}

int func_481(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
		else if (((Global_1575083 || Global_2635563.f_2980) && iParam0 == unk_0x259BE71D8A81D4FA()) && func_12(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
	}
	return -1;
}

void func_482(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	if (func_555())
	{
		if (bParam1)
		{
			iVar0 = unk_0xAE032CEDCF23C6D5();
			if (func_114(unk_0x259BE71D8A81D4FA()))
			{
				uVar1 = func_341();
				iVar2 = unk_0x1C1C92A1CBAE364B(uVar1);
				if (unk_0x762604C40829DB72(iVar2))
				{
					iVar3 = unk_0x857CA6FCE5E9C84F(bVar2);
					if (unk_0x7206AEB20960CCC8(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_554())
				{
					switch (Local_157.f_3)
					{
						case 14:
							if (!func_389(iVar4) && !func_388(iVar4))
							{
								func_551("AMCH_BRIDGE", bParam0, iVar0, iVar4);
							}
							break;
					}
					iVar4++;
				}
			}
		}
	}
	if (func_44())
	{
		iVar5 = 0;
		while (iVar5 < 10)
		{
			if (((!bParam0 && unk_0x93BF17E19A9F0E9B(Local_157.f_67[iVar5 /*2*/].f_1)) && unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(Local_157.f_67[iVar5 /*2*/].f_1), 0)) && unk_0xC39AE5D390581AD5(unk_0xE38610F405049F71(Local_157.f_67[iVar5 /*2*/].f_1), -1, 0))
			{
				if (!unk_0xC450B06E5AAA0985(uLocal_150[iVar5]))
				{
					uLocal_150[iVar5] = unk_0x18E23E031A9B798F(unk_0xF5014688C9788D5F(Local_157.f_67[iVar5 /*2*/].f_1));
					unk_0x4C905FB262965D5D(uLocal_150[iVar5], func_550(iVar5));
					unk_0x1456FD5C0C438B19(uLocal_150[iVar5], 9);
					unk_0x594D5D0D7071B0DE(uLocal_150[iVar5], func_549(iVar5));
					func_547(&(uLocal_150[iVar5]), 9);
				}
				else
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						Var6 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
						if (system::vdist(Var6, unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_157.f_67[iVar5 /*2*/].f_1), 1)) <= 150f)
						{
							unk_0x89FE619BFBB2024B(uLocal_150[iVar5], 1);
						}
						else
						{
							unk_0x89FE619BFBB2024B(uLocal_150[iVar5], 0);
						}
					}
					func_483(uLocal_150[iVar5], 0, 1152319488, 1137180672);
				}
			}
			else if (unk_0xC450B06E5AAA0985(uLocal_150[iVar5]))
			{
				unk_0xFE54B8568B2ABD12(&(uLocal_150[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_483(var uParam0, int iParam1, float fParam2, float fParam3)
{
	unk_0xF42EBD7CD0682A8B(uParam0, func_484(uParam0, iParam1, fParam2, fParam3));
}

int func_484(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (!func_546(Global_2672855) && !func_84())
	{
		fVar0 = func_486(uParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_485();
		}
		return (system::round((system::to_float((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_485()
{
	if (func_407(Global_2672855, 1))
	{
		return 50;
	}
	return 0;
}

float func_486(var uParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	iVar0 = Global_2672855;
	Var2 = { func_545(uParam0) };
	Var2.f_2 = 0f;
	if (Global_1582015 || func_541())
	{
		if (func_540(iVar0))
		{
			Var3 = { func_489(iVar0) };
		}
		else if (func_488(iVar0))
		{
			Var3 = { func_487(iVar0) };
		}
	}
	else
	{
		Var3 = { unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iVar0), 0) };
	}
	Var3.f_2 = 0f;
	fVar1 = system::vmag(Var3 - Var2);
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

Vector3 func_487(bool bParam0)
{
	var uVar0;
	
	if (func_488(iParam0))
	{
		uVar0 = unk_0x56E414973C2A8C0E(iParam0);
		if (unk_0xFC8BFE4B41177C22(uVar0))
		{
			return unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_488(bool bParam0)
{
	var uVar0;
	
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			uVar0 = unk_0x56E414973C2A8C0E(iParam0);
			if (unk_0xFC8BFE4B41177C22(uVar0))
			{
				if (unk_0x65FFA94B82A71741(iVar0, 2056,204f, 2954,807f, -70,69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_489(int iParam0)
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
	
	if (iParam0 == func_116())
	{
	}
	if (func_539(iParam0))
	{
		iVar0 = func_538(iParam0);
		if (iVar0 != func_116())
		{
			if (!func_537(iVar0))
			{
				if (unk_0xFC8BFE4B41177C22(Global_2672855.f_264[iVar0 /*3*/][1]))
				{
					return unk_0xD1A6A821F5AC81DB(Global_2672855.f_264[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2657971[func_538(iParam0) /*465*/].f_322.f_13;
				}
			}
			else
			{
				iVar1 = func_534(iVar0);
				if (iVar1 == -1)
				{
					iVar1 = Global_2657971[iParam0 /*465*/].f_322.f_8;
				}
				if (!iVar1 == -1)
				{
					return Global_1943520.f_573[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_533(iParam0))
	{
		iVar2 = func_532(iParam0);
		if (iVar2 != func_116())
		{
			if (!func_531(iVar2))
			{
				if (unk_0xFC8BFE4B41177C22(Global_1962069[iVar2]))
				{
					return unk_0xD1A6A821F5AC81DB(Global_1962069[iVar2], 0);
				}
				else
				{
					return Global_2657971[func_538(iParam0) /*465*/].f_322.f_13;
				}
			}
			else
			{
				iVar3 = 160;
				if (!iVar3 == -1)
				{
					return Global_1943520.f_573[iVar3 /*3*/];
				}
			}
		}
	}
	else if (func_530(iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_2738934.f_311))
		{
			return unk_0xD1A6A821F5AC81DB(Global_2738934.f_311, 0);
		}
	}
	else if (func_529(iParam0) && !func_528(iParam0))
	{
		iVar4 = Global_2657971[iParam0 /*465*/].f_322.f_11;
		if (iVar4 != func_116())
		{
			iVar5 = func_534(iVar4);
			if (iVar5 == -1)
			{
				iVar5 = Global_2657971[iParam0 /*465*/].f_322.f_8;
			}
			if (!iVar5 == -1)
			{
				return Global_1943520.f_573[iVar5 /*3*/];
			}
		}
	}
	else if (func_527(iParam0) && !func_526(iParam0))
	{
		if (func_540(iParam0) && func_525())
		{
			return Global_1943520.f_573[Global_2657971[iParam0 /*465*/].f_322.f_8 /*3*/];
		}
		iVar6 = Global_2657971[iParam0 /*465*/].f_322.f_11;
		if (iVar6 != func_116())
		{
			if (func_524(iVar6))
			{
				iVar7 = func_521(iVar6);
				if (iVar7 == -1)
				{
					iVar7 = Global_2657971[iParam0 /*465*/].f_322.f_8;
				}
				if (iVar7 != -1)
				{
					return Global_1943520.f_573[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_520(iParam0))
	{
		iVar8 = func_519(iParam0);
		if (iVar8 != func_116())
		{
			if (!func_518(iVar8) && !func_517(iVar8))
			{
				if (unk_0xFC8BFE4B41177C22(Global_2672855.f_361[iVar8]))
				{
					return unk_0xD1A6A821F5AC81DB(Global_2672855.f_361[iVar8], 0);
				}
				else
				{
					return Global_2657971[func_519(iParam0) /*465*/].f_322.f_21;
				}
			}
			else if (func_524(iVar8) && func_518(iVar8))
			{
				iVar9 = func_521(iVar8);
				if (iVar9 == -1)
				{
					iVar9 = Global_2657971[iParam0 /*465*/].f_322.f_8;
				}
				if (!iVar9 == -1)
				{
					return Global_1943520.f_573[iVar9 /*3*/];
				}
			}
			else if (func_516(iVar8) && func_517(iVar8))
			{
				iVar10 = func_513(iVar8);
				if (iVar10 == -1)
				{
					iVar10 = Global_2657971[iParam0 /*465*/].f_322.f_8;
				}
				if (!iVar10 == -1)
				{
					return Global_1943520.f_573[iVar10 /*3*/];
				}
			}
		}
	}
	else if (func_512(iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_2738934.f_313))
		{
			return unk_0xD1A6A821F5AC81DB(Global_2738934.f_313, 0);
		}
	}
	else if (func_511(iParam0) && !func_510(iParam0))
	{
		iVar11 = Global_2657971[iParam0 /*465*/].f_322.f_11;
		if (iVar11 != func_116())
		{
			if (func_509(iVar11))
			{
				iVar12 = func_506(iVar11);
				if (iVar12 == -1)
				{
					iVar12 = Global_2657971[iParam0 /*465*/].f_322.f_8;
				}
				if (iVar12 != -1)
				{
					return func_505(iVar12);
				}
			}
		}
	}
	else if (func_504(iParam0) && !func_503(iParam0))
	{
		iVar13 = Global_2657971[iParam0 /*465*/].f_322.f_11;
		if (iVar13 != func_116())
		{
			if (func_502(iVar13))
			{
				iVar14 = func_499(iVar13);
				if (iVar14 == -1)
				{
					iVar14 = Global_2657971[iParam0 /*465*/].f_322.f_8;
				}
				if (iVar14 != -1)
				{
					return Global_1943520.f_573[iVar14 /*3*/];
				}
			}
		}
	}
	else if (func_498(iParam0, 0))
	{
		iVar15 = func_497(iParam0);
		if (iVar15 != func_116())
		{
			if (!func_496(iVar15))
			{
				if (unk_0xFC8BFE4B41177C22(Global_2672855.f_394[iVar15]))
				{
					return unk_0xD1A6A821F5AC81DB(Global_2672855.f_394[iVar15], 0);
				}
				else
				{
					return Global_1887305[func_497(iParam0) /*610*/].f_592;
				}
			}
			else
			{
				iVar16 = func_499(iVar15);
				if (iVar16 == -1)
				{
					iVar16 = Global_2657971[iParam0 /*465*/].f_322.f_8;
				}
				if (!iVar16 == -1)
				{
					return Global_1943520.f_573[iVar16 /*3*/];
				}
			}
		}
	}
	else if (func_495(iParam0))
	{
		return -366,7f, -1909,6f, 20f;
	}
	else if (func_494(iParam0))
	{
		iVar17 = func_480(iParam0);
		if (iVar17 != func_116())
		{
			if (unk_0xFC8BFE4B41177C22(Global_2672855.f_427[iVar17]))
			{
				return unk_0xD1A6A821F5AC81DB(Global_2672855.f_427[iVar17], 0);
			}
			else
			{
				return Global_1906887[iVar17 /*304*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_511(iParam0))
	{
		return func_505(Global_2657971[iParam0 /*465*/].f_322.f_8);
	}
	if (func_490(iParam0))
	{
		return 965,8165f, 42,25042f, 122,1267f;
	}
	return Global_1943520.f_573[Global_2657971[iParam0 /*465*/].f_322.f_8 /*3*/];
}

int func_490(int iParam0)
{
	if (((func_493(iParam0) || func_492(iParam0)) || func_491(iParam0)) || func_340(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_491(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 15;
			}
		}
	}
	return 0;
}

int func_492(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 16;
			}
		}
	}
	return 0;
}

int func_493(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 14;
			}
		}
	}
	return 0;
}

int func_494(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 20;
			}
		}
		else if (((Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_1575083) && iParam0 == unk_0x259BE71D8A81D4FA()) && func_12(iParam0, 1, 0))
		{
			return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 20;
		}
	}
	return 0;
}

int func_495(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 13;
			}
		}
	}
	return 0;
}

int func_496(int iParam0)
{
	if (iParam0 != func_116())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_3, 4);
	}
	return 0;
}

int func_497(int iParam0)
{
	if (iParam0 == func_116())
	{
		return iParam0;
	}
	return Global_2657971[iParam0 /*465*/].f_322.f_11;
}

int func_498(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0x4B423FAA24E8ABF0(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_116())
			{
				return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 12;
			}
		}
	}
	return 0;
}

int func_499(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_116())
	{
		iVar0 = func_501(iParam0);
		if (iVar0 != 0)
		{
			return func_500(iVar0);
		}
	}
	return -1;
}

int func_500(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_501(int iParam0)
{
	if (iParam0 != func_116())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_315;
	}
	return 0;
}

int func_502(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (Global_1845281[iParam0 /*883*/].f_268.f_315 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_503(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_504(iParam0) && Global_2657971[iParam0 /*465*/].f_322.f_11 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_504(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_505(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750,5f, -1322,3f, 26,2802f;
		
		case 103:
			return 331,9f, -974,9f, 30f;
		
		case 104:
			return -146f, -1270f, 28,3088f;
		
		case 105:
			return -17,7f, 225,7f, 106,7566f;
		
		case 106:
			return 894,4f, -2106,4f, 29,4768f;
		
		case 107:
			return -668f, -2431,5f, 12,9444f;
		
		case 108:
			return 213,4f, -3166,6f, 4,7903f;
		
		case 109:
			return 366,6f, 237,6f, 104,9f;
		
		case 110:
			return -1275,3f, -666,8f, 25,6332f;
		
		case 111:
			return -1188,8f, -1156,9f, 4,6582f;
		
		default:
	}
	return Global_1943520.f_573[iParam0 /*3*/];
}

int func_506(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_116())
	{
		iVar0 = func_508(iParam0);
		if (iVar0 != 0)
		{
			return func_507(iVar0);
		}
	}
	return -1;
}

int func_507(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_508(int iParam0)
{
	if (iParam0 != func_116())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_358;
	}
	return 0;
}

int func_509(int iParam0)
{
	if (iParam0 != func_116())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_358 != 0;
	}
	return 0;
}

int func_510(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_511(iParam0) && Global_2657971[iParam0 /*465*/].f_322.f_11 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_511(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 11;
			}
		}
	}
	return 0;
}

int func_512(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 10;
			}
		}
	}
	return 0;
}

int func_513(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_116())
	{
		return -1;
	}
	iVar0 = func_515(iParam0);
	if (!iVar0 == 0)
	{
		return func_514(iVar0);
	}
	return -1;
}

int func_514(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 83;
			break;
		
		case 2:
			return 84;
			break;
		
		case 3:
			return 85;
			break;
		
		case 4:
			return 86;
			break;
		
		case 5:
			return 87;
			break;
	}
	return -1;
}

int func_515(int iParam0)
{
	if (iParam0 == func_116())
	{
		return 0;
	}
	return Global_1845281[iParam0 /*883*/].f_268.f_297;
}

int func_516(int iParam0)
{
	if (iParam0 != func_116())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_297 != 0;
	}
	return 0;
}

int func_517(int iParam0)
{
	if (iParam0 != func_116())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_6, 16);
	}
	return 0;
}

int func_518(int iParam0)
{
	if (iParam0 != func_116())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_2, 6);
	}
	return 0;
}

int func_519(int iParam0)
{
	if (iParam0 == func_116())
	{
		return iParam0;
	}
	return Global_2657971[iParam0 /*465*/].f_322.f_11;
}

int func_520(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_116())
			{
				return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 8;
			}
		}
	}
	return 0;
}

int func_521(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_116())
	{
		return -1;
	}
	iVar0 = func_523(iParam0);
	if (!iVar0 == 0)
	{
		return func_522(iVar0);
	}
	return -1;
}

int func_522(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 89;
			break;
		
		case 2:
			return 90;
			break;
		
		case 3:
			return 91;
			break;
		
		case 4:
			return 92;
			break;
		
		case 5:
			return 93;
			break;
		
		case 6:
			return 94;
			break;
		
		case 7:
			return 95;
			break;
		
		case 8:
			return 96;
			break;
		
		case 9:
			return 97;
			break;
	}
	return -1;
}

int func_523(int iParam0)
{
	if (iParam0 == func_116())
	{
		return 0;
	}
	return Global_1845281[iParam0 /*883*/].f_268.f_304;
}

int func_524(int iParam0)
{
	if (iParam0 != func_116())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_304 != 0;
	}
	return 0;
}

int func_525()
{
	if (BitTest(Global_1943520.f_2, 13) || Global_1943520.f_3548)
	{
		return 1;
	}
	return 0;
}

int func_526(int iParam0)
{
	if (iParam0 == func_116())
	{
		return 0;
	}
	if (func_527(iParam0) && Global_2657971[iParam0 /*465*/].f_322.f_11 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_527(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 9;
			}
		}
	}
	return 0;
}

int func_528(int iParam0)
{
	if (iParam0 == func_116())
	{
		return 0;
	}
	if (func_529(iParam0) && Global_2657971[iParam0 /*465*/].f_322.f_11 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_529(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 4;
			}
		}
	}
	return 0;
}

int func_530(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 6;
			}
		}
	}
	return 0;
}

int func_531(int iParam0)
{
	if (iParam0 != func_116())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_5, 26);
	}
	return 0;
}

int func_532(int iParam0)
{
	if (iParam0 == func_116())
	{
		return iParam0;
	}
	return Global_2657971[iParam0 /*465*/].f_322.f_11;
}

int func_533(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_116())
			{
				return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 25;
			}
		}
	}
	return 0;
}

int func_534(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_116())
	{
		return -1;
	}
	iVar0 = func_536(iParam0);
	if (!iVar0 == 0)
	{
		return func_535(iVar0);
	}
	return -1;
}

int func_535(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 22;
			break;
		
		case 2:
			return 23;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 25;
			break;
		
		case 5:
			return 26;
			break;
		
		case 6:
			return 27;
			break;
		
		case 7:
			return 28;
			break;
		
		case 8:
			return 29;
			break;
		
		case 9:
			return 30;
			break;
		
		case 10:
			return 31;
			break;
		
		case 11:
			return 32;
			break;
		
		case 12:
			return 33;
			break;
		
		case 13:
			return 34;
			break;
		
		case 14:
			return 35;
			break;
		
		case 15:
			return 36;
			break;
		
		case 16:
			return 37;
			break;
		
		case 17:
			return 38;
			break;
		
		case 18:
			return 39;
			break;
		
		case 19:
			return 40;
			break;
		
		case 20:
			return 41;
			break;
		
		case 32:
			return 159;
			break;
		
		case 21:
			return 70;
			break;
		
		case 22:
			return 71;
			break;
		
		case 23:
			return 72;
			break;
		
		case 24:
			return 73;
			break;
		
		case 25:
			return 74;
			break;
		
		case 26:
			return 75;
			break;
		
		case 27:
			return 76;
			break;
		
		case 28:
			return 77;
			break;
		
		case 29:
			return 78;
			break;
		
		case 30:
			return 79;
			break;
		
		case 31:
			return 80;
			break;
	}
	return -1;
}

int func_536(int iParam0)
{
	if (iParam0 == func_116())
	{
		return 0;
	}
	return Global_1845281[iParam0 /*883*/].f_268.f_197[5 /*13*/];
}

int func_537(int iParam0)
{
	if (iParam0 != func_116())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 6);
	}
	return 0;
}

int func_538(int iParam0)
{
	if (iParam0 == func_116())
	{
		return iParam0;
	}
	return Global_2657971[iParam0 /*465*/].f_322.f_11;
}

int func_539(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_116())
			{
				return func_316(Global_2657971[iParam0 /*465*/].f_322.f_8) == 5;
			}
		}
	}
	return 0;
}

int func_540(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
		else if ((Global_1575083 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_12(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
	}
	return 0;
}

int func_541()
{
	if ((func_544() || func_543()) || func_542(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	return 0;
}

int func_542(int iParam0)
{
	if (iParam0 == func_116())
	{
		return 0;
	}
	return BitTest(Global_1882632[iParam0 /*146*/].f_33, 20);
}

var func_543()
{
	return BitTest(Global_1956900, 1);
}

bool func_544()
{
	return BitTest(Global_1956920, 5);
}

Vector3 func_545(var uParam0)
{
	var uVar0;
	
	switch (unk_0x6AEAF32EC173BB39(uParam0))
	{
		case 1:
		case 2:
		case 3:
			uVar0 = unk_0xA143F1936B350BD0(uParam0);
			if (unk_0xFC8BFE4B41177C22(uVar0))
			{
				return unk_0xD1A6A821F5AC81DB(iVar0, 0);
			}
			break;
	}
	return unk_0x3CF9D442F2C902BD(uParam0);
}

int func_546(bool bParam0)
{
	if ((BitTest(Global_2657971[bParam0 /*465*/].f_74.f_2, 9) && !(BitTest(Global_2657971[bParam0 /*465*/].f_74.f_2, 6) && BitTest(Global_2657971[bParam0 /*465*/].f_74.f_2, 7))) || ((BitTest(Global_2657971[bParam0 /*465*/].f_74.f_2, 6) && !BitTest(Global_2657971[bParam0 /*465*/].f_74.f_2, 7)) && !BitTest(Global_2657971[bParam0 /*465*/].f_74.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_547(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		uVar0 = func_548(iParam1);
		unk_0x61183D6239A9D7B8(*uParam0, uVar0);
	}
}

int func_548(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xA306E6FD2A6558E6(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

char* func_549(int iParam0)
{
	if (unk_0xBA16CD57E37AC32A(Local_157.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x00C6FDED3EB75117(Local_157.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x78B050AFBA6D1517(Local_157.f_67[iParam0 /*2*/]) && !unk_0x9910CD0D8626AA28(Local_157.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_550(int iParam0)
{
	if (unk_0xBA16CD57E37AC32A(Local_157.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (unk_0x00C6FDED3EB75117(Local_157.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (unk_0x78B050AFBA6D1517(Local_157.f_67[iParam0 /*2*/]) && !unk_0x9910CD0D8626AA28(Local_157.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_551(char* sParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!BitTest(Local_1523[iParam2 /*12*/].f_8[func_380(iParam3)], func_379(iParam3)) && !bParam1)
	{
		Var0 = { func_553(iParam3) };
		if (!unk_0xC450B06E5AAA0985(uLocal_149[iParam3]))
		{
			if (!func_552(Var0, 0f, 0f, 0f, 0) && !func_552(Var0, 0f, 0f, -2000f, 0))
			{
				uLocal_149[iParam3] = unk_0x34864AB7DA700AA6(Var0);
				unk_0x1456FD5C0C438B19(uLocal_149[iParam3], 9);
				unk_0x594D5D0D7071B0DE(uLocal_149[iParam3], sParam0);
				func_483(uLocal_149[iParam3], 25, 1152319488, 1137180672);
				func_547(&(uLocal_149[iParam3]), 12);
				unk_0x89FE619BFBB2024B(uLocal_149[iParam3], 1);
			}
		}
		else if (unk_0x4D9174D8796EA622())
		{
			unk_0xF42EBD7CD0682A8B(uLocal_149[iParam3], 255);
		}
		else
		{
			func_483(uLocal_149[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (unk_0xC450B06E5AAA0985(uLocal_149[iParam3]))
	{
		unk_0xFE54B8568B2ABD12(&(uLocal_149[iParam3]));
		if (!bParam1)
		{
			unk_0xBF3D28CA44F3BE2D(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
		}
	}
}

bool func_552(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_553(int iParam0)
{
	switch (Local_157.f_3)
	{
		case 14:
			return Local_148[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_554()
{
	switch (Local_157.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_555()
{
	switch (Local_157.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_556()
{
	switch (Local_157.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_557(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_330(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_229(sParam1))
	{
		sVar0 = sParam1;
	}
	func_158(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_558(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x1AF90EB93E0012D6();
	return "HUD_STARTING";
	if (unk_0x1B79E937E91F40C3(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x1B79E937E91F40C3(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x1B79E937E91F40C3(uVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0x1B79E937E91F40C3(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x1B79E937E91F40C3(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x1B79E937E91F40C3(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x1B79E937E91F40C3(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x1B79E937E91F40C3(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x1B79E937E91F40C3(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x1B79E937E91F40C3(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x1B79E937E91F40C3(uVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_559(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_560(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x0B852B0BF94A8DC1())
	{
		Global_2738934.f_5083 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!BitTest(Global_2738934.f_5083, 1))
		{
			unk_0xBF3D28CA44F3BE2D(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2738934.f_5083 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_5083), true);
		}
	}
}

int func_561(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0);
		}
		else
		{
			return unk_0x775142054EC39277(unk_0x0728E77B2BF91D54(), *uParam0);
		}
	}
	return unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0);
}

void func_562(bool bParam0)
{
	if (!unk_0xBE259DBA45F2996E() && !unk_0x15CCE8886267624F())
	{
		switch (bParam0)
		{
			case 0:
				if (!BitTest(uLocal_151, bParam0))
				{
					if (!unk_0x4D9174D8796EA622() && !unk_0x4C705AAF75363287())
					{
						if (func_5(Local_157.f_3))
						{
							if (Local_157.f_3 == 12)
							{
								func_311("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_311("AMCH_AIRAV", 30000);
							}
						}
						else if (func_42(Local_157.f_3))
						{
							func_311("AMCH_BIKEAV", 30000);
						}
						func_310(1);
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_151, bParam0);
					}
				}
				break;
			
			case 1:
				if (!BitTest(uLocal_151, bParam0))
				{
					if (!unk_0x4D9174D8796EA622())
					{
						func_311("AMCH_BLOW", 30000);
						func_310(1);
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_151, bParam0);
					}
				}
				break;
			
			case 2:
				if (!BitTest(uLocal_151, bParam0))
				{
					if (!unk_0x4D9174D8796EA622() && !func_567(63))
					{
						switch (Local_157.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
								{
									if (unk_0x1F7A48429F9F64CE(unk_0x4A8C381C258A124D()))
									{
										func_311("AMCH_ALTI", 30000);
										func_310(1);
										unk_0x0B0C9A0F9AAEB7F0(&uLocal_151, bParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
								{
									func_311("AMCH_NMIS", 30000);
									func_310(1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_151, bParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
								{
									func_311("AMCH_FRFALL", -1);
									func_310(1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_151, bParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
								{
									func_311("AMCH_PVPO1", -1);
									func_310(1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_151, bParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
								{
									func_311("AMCH_PVPO2", -1);
									func_310(1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_151, bParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
								{
									func_311("AMCH_WHEELIE", 30000);
									func_310(1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_151, bParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
								{
									func_311("AMCH_STOPPIE", 30000);
									func_310(1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_151, bParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
								{
									func_311("AMCH_LFALL", 30000);
									func_310(1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_151, bParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
								{
									func_311("AMCH_LPARA", 30000);
									func_310(1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_151, bParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!BitTest(uLocal_151, bParam0))
				{
					if ((!unk_0x4D9174D8796EA622() && !unk_0x4C705AAF75363287()) && !func_567(63))
					{
						switch (Local_157.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
								{
									if (unk_0x1F7A48429F9F64CE(unk_0x4A8C381C258A124D()))
									{
										if (func_1(&uLocal_122, 1000, 0))
										{
											func_311("AMCH_OCEAN", 30000);
											func_310(1);
											func_47(&uLocal_122);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!BitTest(uLocal_151, bParam0))
				{
					if (!unk_0x4D9174D8796EA622() && !func_567(63))
					{
						switch (Local_157.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
								{
									if (unk_0x1F7A48429F9F64CE(unk_0x4A8C381C258A124D()))
									{
										if (func_546(unk_0x259BE71D8A81D4FA()) && !func_564(unk_0x259BE71D8A81D4FA()))
										{
											func_311("AMCH_ALTIEXP", 30000);
											func_310(1);
											unk_0x0B0C9A0F9AAEB7F0(&uLocal_151, bParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!BitTest(uLocal_151, bParam0))
				{
					if ((!unk_0x4D9174D8796EA622() && !unk_0x4C705AAF75363287()) && !func_567(63))
					{
						if (func_1(&uLocal_122, 1000, 0))
						{
							func_311("AMCH_FLYLOW", 30000);
							func_310(1);
							func_47(&uLocal_122);
						}
					}
				}
				break;
			
			case 7:
				if (!BitTest(uLocal_151, bParam0))
				{
					if (Local_157.f_3 == 7)
					{
						if (iLocal_152 == 0)
						{
							if ((!unk_0x4D9174D8796EA622() && !unk_0x4C705AAF75363287()) && !func_567(63))
							{
								if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
								{
									func_311("AMCH_MVS1", 30000);
									func_310(1);
									iLocal_152 = 1;
								}
							}
						}
						else if ((!unk_0x4D9174D8796EA622() && !unk_0x4C705AAF75363287()) && !func_567(63))
						{
							if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
							{
								func_311("AMCH_MVS2", 30000);
								func_310(1);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_151, bParam0);
							}
						}
					}
					if (Local_157.f_3 == 14)
					{
						if (iLocal_152 == 0)
						{
							if ((!unk_0x4D9174D8796EA622() && !unk_0x4C705AAF75363287()) && !func_567(63))
							{
								if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
								{
									func_311("AMCH_BRBL", 30000);
									func_310(1);
									iLocal_152 = 1;
								}
							}
						}
						else if ((!unk_0x4D9174D8796EA622() && !unk_0x4C705AAF75363287()) && !func_567(63))
						{
							if (func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
							{
								func_311("AMCH_BRBL2", 30000);
								func_310(1);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_151, bParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!BitTest(uLocal_151, bParam0))
				{
					if (!unk_0x4D9174D8796EA622() && !unk_0x4C705AAF75363287())
					{
						func_563("AMCH_WARN", func_413(Local_157.f_3), func_412(Local_157.f_3), 30000);
						func_310(0);
						Local_1524.f_8 = unk_0x39D1D336459711BE();
						unk_0xBF3D28CA44F3BE2D(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_151, bParam0);
					}
				}
				break;
			}
	}
}

void func_563(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0xACF853FB3F6EA7D4(sParam2);
	unk_0x5E01B6B1F460FE3F(0, 0, 0, iParam3);
}

bool func_564(bool bParam0)
{
	return BitTest(Global_1668667.f_241.f_136[func_566(9) /*33*/][bParam0], func_565(9));
}

int func_565(int iParam0)
{
	return (iParam0 % 32);
}

int func_566(int iParam0)
{
	return (iParam0 / 32);
}

bool func_567(int iParam0)
{
	return Global_2672855.f_2557[0 /*80*/].f_1 == iParam0;
}

void func_568(int iParam0)
{
	Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_3 = iParam0;
}

void func_569(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1), 4);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1), 4);
	}
}

int func_570(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_597(unk_0x259BE71D8A81D4FA(), 14))
	{
		return 0;
	}
	if (func_178(unk_0x259BE71D8A81D4FA(), 21))
	{
		return 0;
	}
	if (func_178(unk_0x259BE71D8A81D4FA(), 25))
	{
		return 0;
	}
	if (unk_0xF859473E4AD09F30())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x0721B5D4CF3ACD02())
		{
			return 0;
		}
	}
	if (func_368(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_596())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_595(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (func_594())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_120(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	else if (func_586(unk_0x259BE71D8A81D4FA()) == 3)
	{
		return 0;
	}
	if (func_585(unk_0x259BE71D8A81D4FA()) != func_116() && func_585(unk_0x259BE71D8A81D4FA()) == func_91(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_583(unk_0x259BE71D8A81D4FA(), 3))
	{
		return 0;
	}
	if (func_582(func_305()) && !func_362(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_581())
	{
		return 0;
	}
	if (func_331())
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	if (func_370(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!func_579())
	{
		return 0;
	}
	if (func_178(unk_0x259BE71D8A81D4FA(), 0) || func_178(unk_0x259BE71D8A81D4FA(), 3))
	{
		return 0;
	}
	if ((func_178(unk_0x259BE71D8A81D4FA(), 12) || func_178(unk_0x259BE71D8A81D4FA(), 14)) || func_178(unk_0x259BE71D8A81D4FA(), 13))
	{
		return 0;
	}
	if (func_578(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		if (!func_544() && !Global_2707605)
		{
			return 0;
		}
	}
	if (func_577(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_576())
	{
		return 0;
	}
	if (Global_1928440)
	{
		return 0;
	}
	if (func_405(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_575())
	{
		return 0;
	}
	if (func_573(unk_0x259BE71D8A81D4FA()) && Global_1844920.f_172)
	{
		return 0;
	}
	if (func_572())
	{
		return 0;
	}
	if (func_471())
	{
		return 0;
	}
	if (Global_2737960)
	{
		return 0;
	}
	if (Global_1962256)
	{
		return 0;
	}
	if (func_314(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!func_470(unk_0x259BE71D8A81D4FA()))
	{
		if (func_571(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	return 1;
}

int func_571(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1882632[iVar0 /*146*/].f_82.f_63 != 0;
	}
	return 0;
}

bool func_572()
{
	return Global_1943520.f_559;
}

int func_573(bool bParam0)
{
	if (func_574(Global_1845281[bParam0 /*883*/].f_268.f_35))
	{
		return 1;
	}
	return 0;
}

int func_574(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_575()
{
	if (Global_4521801.f_945 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_576()
{
	return Global_101585.f_394 > 0;
}

bool func_577(bool bParam0)
{
	return BitTest(Global_1845281[bParam0 /*883*/].f_268.f_33, 11);
}

int func_578(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 == func_116())
	{
		return 0;
	}
	if (BitTest(Global_1845281[bParam0 /*883*/].f_268.f_33, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845281[bParam0 /*883*/].f_268.f_33, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657971[bParam0 /*465*/].f_322.f_8 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_579()
{
	if (func_580() == 0)
	{
		return 1;
	}
	return 0;
}

int func_580()
{
	return Global_1574633.f_18;
}

bool func_581()
{
	return Global_1575083;
}

int func_582(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_583(bool bParam0, int iParam1)
{
	if (func_126(bParam0, 0))
	{
		return func_584(Global_1887305[bParam0 /*610*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_584(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
		case 291:
		case 292:
		case 293:
		case 294:
		case 295:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 309:
		case 312:
		case 313:
		case 315:
		case 316:
		case 317:
		case 322:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 330:
		case 331:
		case 332:
		case 333:
		case 337:
		case 338:
		case 339:
		case 340:
			return 0;
		
		case 276:
		case 267:
		case 318:
		case 314:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_585(bool bParam0)
{
	return Global_1887305[bParam0 /*610*/].f_10.f_35;
}

int func_586(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_406(bParam0) && !func_8(bParam0)) && !BitTest(Global_1887305[bParam0 /*610*/].f_1, 8));
	bVar2 = func_120(bParam0);
	uVar3 = func_180();
	uVar4 = func_587();
	if ((bVar1 && (func_470(bParam0) || func_432(bParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_122(bParam0)) && !func_317(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2738934.f_5249.f_223 != iVar0)
	{
		Global_2738934.f_5249.f_223 = iVar0;
	}
	return iVar0;
}

int func_587()
{
	if ((func_121(unk_0x259BE71D8A81D4FA(), 21) || func_121(unk_0x259BE71D8A81D4FA(), 22)) || func_591())
	{
		return 1;
	}
	if (func_589())
	{
		func_588(22);
		return 1;
	}
	return 0;
}

void func_588(bool bParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_4), bParam0);
}

int func_589()
{
	if (func_126(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (((func_180() && !func_179()) || func_178(unk_0x259BE71D8A81D4FA(), 21)) || func_178(unk_0x259BE71D8A81D4FA(), 25))
		{
			return 1;
		}
		else
		{
			func_590(27);
		}
	}
	return 0;
}

void func_590(bool bParam0)
{
	unk_0x8744D2E3FC95740E(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_4), bParam0);
}

int func_591()
{
	return func_592(432, -1);
}

int func_592(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_593(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_593(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(2, uParam0, func_213(uParam1));
}

bool func_594()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 5;
}

int func_595(bool bParam0)
{
	if (Global_2657971[bParam0 /*465*/].f_273.f_4 != 0 || Global_2657971[bParam0 /*465*/].f_273.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_596()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 0);
}

bool func_597(bool bParam0, int iParam1)
{
	return BitTest(Global_1887305[bParam0 /*610*/].f_10.f_5, iParam1);
}

void func_598()
{
	func_599(&(Local_178.f_534), &Local_178, 29, &(Local_178.f_1), &(Local_178.f_117), Local_157.f_3, 0, 0);
}

void func_599(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;
	struct<4> Var7;
	int iVar8;
	int iVar9;
	bool bVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<2> Var24;
	
	if (func_716(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	bVar18 = unk_0xDBDF80673BBA3D65(0);
	if (func_714() || iParam2 == 30)
	{
		if (func_668(uParam1, iParam2, uParam3, Global_1836445, 0, func_717(), iParam7))
		{
			func_667(1);
			if ((!func_666() && !func_665()) || BitTest(Global_2738934.f_4709, 1))
			{
				if (func_664())
				{
					func_663();
				}
				else
				{
					unk_0x9A122D542F2BB60E(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_662(1);
						Global_1836445 = 0;
						iVar21 = -1;
						if (Global_1836676 != 1)
						{
							func_661(uParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								unk_0x8744D2E3FC95740E(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 30)
						{
							iVar19 = 0;
							while (iVar19 < 32)
							{
								iVar1[iVar19] = -1;
								iVar19++;
							}
							iVar19 = 0;
							while (iVar19 < 32)
							{
								if (func_12(unk_0xB23E0F9B63D009A8(iVar19), 0, 1))
								{
									bVar4 = unk_0xB23E0F9B63D009A8(bVar19);
									if (!func_14(bVar4, 0))
									{
										if (func_657(bVar4) || func_654(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (func_93(bVar4))
											{
												iVar1[bVar10] = iVar22;
												iVar22++;
												iVar0++;
												func_651(&iVar1, bVar4, &iVar22, &iVar0, bVar3);
											}
										}
									}
								}
								bVar19++;
							}
						}
						if (!func_123(unk_0x259BE71D8A81D4FA(), 0) && func_234(unk_0x259BE71D8A81D4FA()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						bVar19 = false;
						while (bVar19 < 32)
						{
							if (func_650())
							{
								if (func_12(unk_0xB23E0F9B63D009A8(bVar19), 0, 1))
								{
									bVar4 = unk_0xB23E0F9B63D009A8(bVar19);
								}
								else
								{
									bVar4 = func_116();
								}
							}
							else
							{
								bVar4 = (uParam0[bVar19 /*42*/])->f_1;
							}
							if ((func_649(bVar4) && func_646(bVar4, iParam2, bVar3)) && func_12(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1845281[bVar10 /*883*/].f_206.f_6;
								Var7 = { func_640(bVar4) };
								if (bVar4 == unk_0x259BE71D8A81D4FA())
								{
									uParam3->f_35 = iVar20;
								}
								StringCopy(&(uParam3->f_1), unk_0xBD6CA019F46AB947(bVar4), 64);
								*(uParam4[bVar19 /*13*/]) = { func_152(bVar4) };
								iVar6 = func_634(bVar4);
								sVar5 = "";
								if (iVar6 != 0)
								{
									sVar5 = unk_0x008C0EB38E4459EE(iVar6);
								}
								Global_1836445++;
								if ((uParam0[bVar19 /*42*/])->f_22 != -1f)
								{
									fVar11 = (uParam0[bVar19 /*42*/])->f_22;
								}
								if ((uParam0[bVar19 /*42*/])->f_31 != -1)
								{
									iVar12 = (uParam0[bVar19 /*42*/])->f_31;
								}
								if ((uParam0[bVar19 /*42*/])->f_41 != -1)
								{
									iVar13 = (uParam0[bVar19 /*42*/])->f_41;
								}
								iVar9 = (uParam0[bVar19 /*42*/])->f_7;
								if (((uParam0[bVar19 /*42*/])->f_7 != -1 || (uParam0[bVar19 /*42*/])->f_22 != -1f) || (uParam0[bVar19 /*42*/])->f_31 != -1)
								{
									if (!func_650())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_632(&iVar9, &fVar11, (uParam0[bVar19 /*42*/])->f_7, iParam5);
									StringCopy(&(uParam3->f_104), func_299(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar14 = (uParam0[bVar19 /*42*/])->f_2 + 1;
									if (iVar21 != iVar14)
									{
										iVar21 = iVar14;
									}
									else
									{
										iVar14 = -2;
									}
								}
								iVar17 = func_631(bVar4, 0);
								if (bVar2)
								{
									if (func_92(bVar4, 1) && iVar1[bVar10] != -1)
									{
										iVar20 = iVar1[bVar10];
									}
									else
									{
										iVar20 = (iVar0 + iVar23);
										iVar23++;
									}
								}
								uParam3->f_38[bVar10 /*2*/].f_1 = iVar20;
								if ((uParam0[bVar19 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var24, "UW_TM", 16);
									StringIntConCat(&Var24, (uParam0[bVar19 /*42*/])->f_39, 16);
								}
								if (func_630(iParam5))
								{
									func_629(bVar4, uParam1, uParam3, iVar20, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var24, (uParam0[bVar19 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									func_629(bVar4, uParam1, uParam3, iVar20, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var24, (uParam0[bVar19 /*42*/])->f_40, iVar14, bParam6);
								}
								unk_0x0B0C9A0F9AAEB7F0(&iVar15, bVar4);
								iVar20++;
							}
							bVar19++;
						}
						bVar19 = false;
						while (bVar19 < 32)
						{
							bVar4 = unk_0xB23E0F9B63D009A8(bVar19);
							if (func_12(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = unk_0xB23E0F9B63D009A8(bVar19);
							}
							else
							{
								bVar4 = func_116();
							}
							if (func_649(bVar4))
							{
								if (func_12(unk_0xB23E0F9B63D009A8(bVar19), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1845281[bVar10 /*883*/].f_206.f_6;
									Var7 = { func_640(bVar4) };
									*(uParam4[bVar19 /*13*/]) = { func_152(bVar4) };
									iVar6 = func_634(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = unk_0x008C0EB38E4459EE(iVar6);
									}
									Global_1836445++;
									iVar17 = func_631(bVar4, 1);
									if (bVar2)
									{
										if (func_92(bVar4, 1))
										{
											iVar20 = iVar1[bVar19];
										}
										else
										{
											iVar20 = (iVar0 + iVar23);
											iVar23++;
										}
									}
									uParam3->f_38[bVar10 /*2*/].f_1 = iVar20;
									func_612(bVar4, unk_0xBD6CA019F46AB947(bVar4), uParam1, uParam3, iVar20, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar20++;
								}
							}
							bVar19++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							func_609(uParam3, uParam1, iParam2, bVar18);
						}
						func_47(&(uParam3->f_21));
						func_608();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							func_607(uParam3, uParam1);
							func_606(uParam1, 0, 1);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_33), 7);
						}
						func_607(uParam3, uParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_33), 11);
						}
						if (func_602(uParam3))
						{
							Global_1836676 = 1;
						}
						func_600(uParam3);
						if (Global_1836676 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836676 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xA0C7B98BCF1EEF9E(*uParam1))
					{
						unk_0xA4F67CEB594AE064(7);
						unk_0x6D16B99FEB0AFFF1(*uParam1, 0,122f, 0,3f, 0,28f, 0,6f, 255, 255, 255, 255, 0);
						unk_0xA4F67CEB594AE064(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_608();
			func_662(0);
			if (BitTest(uParam3->f_33, 7))
			{
				unk_0x8744D2E3FC95740E(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				unk_0x8744D2E3FC95740E(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x90B531766063C5CD();
}

void func_600(var uParam0)
{
	if (!func_48(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_47(&(uParam0->f_21));
		func_601(0);
	}
}

void func_601(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1836676 != 2)
		{
			Global_1836676 = 2;
		}
	}
	else
	{
		switch (Global_1836676)
		{
			case 0:
				Global_1836676 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_602(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	bVar3 = unk_0xB23E0F9B63D009A8(uParam0->f_37);
	if (bVar3 != func_116() && func_12(bVar3, 0, 1))
	{
		Var2 = { func_152(bVar3) };
		iVar1 = func_605(uParam0, uParam0->f_37);
		if (func_604(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xC9D8BDF3564325CA(&Var2))
					{
						if (unk_0x6E171E077926FBF7(&Var2))
						{
							iVar4 = 1;
							func_603(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x73038C255039CB0A(&Var2))
					{
						iVar4 = 1;
						func_603(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xC9D8BDF3564325CA(&Var2))
					{
						if (!unk_0x6E171E077926FBF7(&Var2))
						{
							iVar4 = 1;
							func_603(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_603(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xC9D8BDF3564325CA(&Var2))
					{
						if (!unk_0x73038C255039CB0A(&Var2))
						{
							iVar4 = 1;
							func_603(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x73038C255039CB0A(&Var2))
					{
						iVar4 = 1;
						func_603(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_603(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_604(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

var func_605(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_606(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x88F483FBD433696A(*uParam0, "COLLAPSE"))
	{
		unk_0x557F1E2300EF1A3E(iParam1);
		unk_0xE6B753D52F4CA222();
	}
	if (iParam2 == 1)
	{
		if (unk_0x88F483FBD433696A(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE6B753D52F4CA222();
		}
	}
}

void func_607(var uParam0, var uParam1)
{
	if (!BitTest(uParam0->f_33, 10))
	{
		unk_0x88F483FBD433696A(*uParam1, "SET_HIGHLIGHT");
		unk_0x330108B080A2132F(uParam0->f_35);
		unk_0xE6B753D52F4CA222();
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_33), 10);
	}
}

void func_608()
{
	if (Global_1836676 != 0)
	{
		Global_1836676 = 0;
	}
}

void func_609(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = unk_0xB23E0F9B63D009A8(iVar0);
		if (bVar2 != func_116())
		{
			if (func_12(bVar2, 0, 1))
			{
				if (uParam0->f_38[bVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_611(uParam0->f_38[bVar0 /*2*/], 0, iParam2, bParam3);
					func_610(uParam1, uParam0->f_38[bVar0 /*2*/].f_1, iVar1, Global_1845281[bVar0 /*883*/].f_206.f_6);
				}
			}
		}
		bVar0++;
	}
}

void func_610(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		if (unk_0x88F483FBD433696A(*uParam0, "SET_ICON"))
		{
			unk_0x330108B080A2132F(iParam1);
			unk_0x330108B080A2132F(iParam2);
			if (iParam2 == 65)
			{
				unk_0x330108B080A2132F(iParam3);
			}
			unk_0xE6B753D52F4CA222();
		}
	}
}

int func_611(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 23:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	if (!bParam3)
	{
		return iVar0;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_612(bool bParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_628() && iParam4 < func_627())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836447)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836676 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x88F483FBD433696A(*uParam2, sVar1))
		{
			unk_0x330108B080A2132F(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_626("");
			}
			else
			{
				unk_0x330108B080A2132F(iParam10);
			}
			func_626(sParam1);
			unk_0x330108B080A2132F(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_626("");
			}
			else
			{
				unk_0x330108B080A2132F(65);
			}
			unk_0x330108B080A2132F(-1);
			func_626("");
			if (uParam3->f_108 == 6)
			{
				func_626("");
			}
			else
			{
				func_626(&sParam5);
			}
			func_617(uParam3, bParam0);
			unk_0x3585BEBEDC67FCC7(sParam9);
			unk_0x3585BEBEDC67FCC7(sParam9);
			if (func_616(uParam3))
			{
				func_615("DPAD_FRIEND");
			}
			else if (func_614(uParam3))
			{
				func_615("DPAD_FRIEND");
			}
			else if (func_613(uParam3))
			{
				func_615("DPAD_CREW");
			}
			else
			{
				func_615("");
			}
			unk_0xE6B753D52F4CA222();
		}
	}
}

bool func_613(var uParam0)
{
	return BitTest(uParam0->f_33, 6);
}

bool func_614(var uParam0)
{
	return BitTest(uParam0->f_33, 5);
}

void func_615(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

int func_616(var uParam0)
{
	if (func_614(uParam0) && func_613(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_617(var uParam0, bool bParam1)
{
	if (func_625(bParam1))
	{
		unk_0x330108B080A2132F(121);
	}
	else if (func_621(bParam1))
	{
		unk_0x330108B080A2132F(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && bParam1 > -1) && bParam1 < 32) && BitTest(Global_2657971[bParam1 /*465*/].f_435, 0))
	{
		unk_0x330108B080A2132F(123);
	}
	else
	{
		if (func_618())
		{
			uParam0->f_36 = 0;
		}
		unk_0x557F1E2300EF1A3E(uParam0->f_36);
	}
}

int func_618()
{
	if (unk_0x834C960822A4683F())
	{
		if (func_619() || func_108())
		{
			return 1;
		}
	}
	return 0;
}

int func_619()
{
	if (unk_0x834C960822A4683F())
	{
		return func_108();
	}
	return func_620(Global_4718592.f_127178);
}

int func_620(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4689[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_621(bool bParam0)
{
	if ((func_12(bParam0, 0, 1) && func_622()) && func_273(bParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_622()
{
	if (func_406(unk_0x259BE71D8A81D4FA()) || func_624())
	{
		if (!func_623(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	return 1;
}

int func_623(bool bParam0)
{
	if (func_337(bParam0) == 236 || func_337(bParam0) == 150)
	{
		return func_470(bParam0);
	}
	return 0;
}

int func_624()
{
	switch (func_234(unk_0x259BE71D8A81D4FA()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_625(bool bParam0)
{
	if (func_618())
	{
		if (func_12(bParam0, 0, 1))
		{
			return func_93(bParam0);
		}
	}
	if (func_12(bParam0, 0, 1))
	{
		if (func_622())
		{
			if (func_275(bParam0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_626(char* sParam0)
{
	unk_0xCE3E870AC37B4253(sParam0);
}

int func_627()
{
	int iVar0;
	
	if (Global_1836447)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_628()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836447)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_629(bool bParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_628() && iParam3 < func_627())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836447)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836676 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xA0C7B98BCF1EEF9E(*uParam1))
		{
			if (unk_0x88F483FBD433696A(*uParam1, sVar1))
			{
				unk_0x330108B080A2132F(iParam3);
				if (BitTest(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_626("");
				}
				else
				{
					unk_0x330108B080A2132F(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xD6F9DEE4765092A9(sParam16))
				{
					func_615(sParam16);
				}
				else
				{
					func_626(&(uParam2->f_1));
				}
				unk_0x330108B080A2132F(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_626("");
				}
				else
				{
					unk_0x330108B080A2132F(65);
				}
				if (iParam12 == 1)
				{
					unk_0x330108B080A2132F(iVar0);
				}
				else
				{
					unk_0x330108B080A2132F(-1);
				}
				if (func_650())
				{
					func_626("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xD6F9DEE4765092A9(sParam16))
				{
					unk_0x882AEFD55B8D51FB("FM_AE_ONE_INT");
					unk_0xACF853FB3F6EA7D4(sParam16);
					unk_0x511D14ED2DA887E1(iParam17);
					unk_0xCFAD3D478C87321A();
				}
				else if (uParam2->f_108 == 5 && !unk_0xD6F9DEE4765092A9(sParam16))
				{
					unk_0x882AEFD55B8D51FB("FM_AE_ONE_INT");
					unk_0xACF853FB3F6EA7D4(sParam16);
					unk_0x511D14ED2DA887E1(iParam17);
					unk_0xCFAD3D478C87321A();
				}
				else if (uParam2->f_108 == 7 && !unk_0xD6F9DEE4765092A9(sParam16))
				{
					unk_0x882AEFD55B8D51FB("FM_AE_TWO_INT");
					unk_0xACF853FB3F6EA7D4(sParam16);
					unk_0x511D14ED2DA887E1(iParam17);
					unk_0xCFAD3D478C87321A();
				}
				else if (uParam2->f_108 == 8 && !unk_0xD6F9DEE4765092A9(&(uParam2->f_104)))
				{
					unk_0x882AEFD55B8D51FB("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x7DCF91CE9137DE0E(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x511D14ED2DA887E1(iParam10);
					}
					unk_0xACF853FB3F6EA7D4(&(uParam2->f_104));
					unk_0xCFAD3D478C87321A();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x882AEFD55B8D51FB("FM_AE_CASH");
					unk_0xB5DF3215F3864B3F(iParam10, 1);
					unk_0xCFAD3D478C87321A();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x882AEFD55B8D51FB("FM_AE_CASH");
						unk_0xB5DF3215F3864B3F(iParam10, 1);
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						unk_0x882AEFD55B8D51FB("FM_NG_CASH");
						unk_0xB5DF3215F3864B3F(iParam10, 1);
						unk_0xCFAD3D478C87321A();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xD6F9DEE4765092A9(&(uParam2->f_104)))
					{
						func_615(&(uParam2->f_104));
					}
					else
					{
						func_626("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam14, 6);
					unk_0xCFAD3D478C87321A();
				}
				else if (fParam13 != -1f)
				{
					unk_0x882AEFD55B8D51FB("NUMBER");
					unk_0x7DCF91CE9137DE0E(fParam13, 1);
					unk_0xCFAD3D478C87321A();
				}
				else if (iParam10 != -1)
				{
					unk_0x330108B080A2132F(iParam10);
				}
				else
				{
					func_626("");
				}
				if (uParam2->f_108 == 6)
				{
					func_626("");
				}
				else
				{
					func_626(&sParam4);
				}
				func_617(uParam2, bParam0);
				if (iParam12 == 1 || unk_0xD6F9DEE4765092A9(sParam8))
				{
					func_626("");
					func_626("");
				}
				else
				{
					unk_0x3585BEBEDC67FCC7(sParam8);
					unk_0x3585BEBEDC67FCC7(sParam8);
				}
				if (func_616(uParam2))
				{
					func_615("DPAD_FRIEND");
				}
				else if (func_614(uParam2))
				{
					func_615("DPAD_FRIEND");
				}
				else if (func_613(uParam2))
				{
					func_615("DPAD_CREW");
				}
				else
				{
					func_615("");
				}
				unk_0xE6B753D52F4CA222();
			}
		}
	}
}

int func_630(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_631(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_406(bParam0)) && !func_120(bParam0))
	{
		iVar0 = func_67();
	}
	iVar1 = func_90(bParam0);
	if (!iVar1 == -1)
	{
		return func_88(iVar1);
	}
	return iVar0;
}

int func_632(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_633(iParam3))
	{
		*fParam1 = (func_301(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_630(iParam3))
	{
		*fParam1 = (func_301(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_633(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_634(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_637(bParam0);
	if (iVar0 == -1)
	{
		func_635(bParam0, 1);
		return 0;
	}
	Global_1681225[iVar0 /*5*/].f_4 = 1;
	return Global_1681225[iVar0 /*5*/].f_2;
}

void func_635(bool bParam0, bool bParam1)
{
	if (!func_12(bParam0, 0, 1))
	{
		return;
	}
	if (func_637(bParam0) != -1)
	{
		return;
	}
	if (Global_1681388)
	{
		if (bParam0 == Global_1681388.f_1)
		{
			return;
		}
	}
	if (func_636(bParam0))
	{
		return;
	}
	if (Global_1681426 >= 32)
	{
		return;
	}
	Global_1681393[Global_1681426] = bParam0;
	Global_1681426++;
	if (bParam1)
	{
	}
}

int func_636(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681426)
	{
		if (Global_1681393[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_637(bool bParam0)
{
	int iVar0;
	
	if (!func_12(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1681386 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681386)
	{
		if (Global_1681225[iVar0 /*5*/].f_1 == bParam0)
		{
			if (unk_0xCF3FA9D6B87D2277(Global_1681225[iVar0 /*5*/].f_2) && unk_0x445B6F53EA9E6A6F(Global_1681225[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_638(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_638(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1681386)
	{
		return;
	}
	if (unk_0xCF3FA9D6B87D2277(Global_1681225[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1681225[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x008C0EB38E4459EE(Global_1681225[iParam0 /*5*/].f_2), 64);
			unk_0x4CF6314488B07405(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x697995B2B26B6CD4(Global_1681225[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1681386)
	{
		Global_1681225[iVar2 /*5*/] = { Global_1681225[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_639(&(Global_1681225[iVar2 /*5*/]));
	Global_1681386 = (Global_1681386 - 1);
}

void func_639(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_116();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x76CD105BCAC6EB9F())
	{
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();
	}
}

struct<4> func_640(bool bParam0)
{
	struct<4> Var0;
	
	if (func_12(bParam0, 0, 1))
	{
		Global_2707307 = { func_152(bParam0) };
		if (func_645())
		{
			if (func_604(Global_2707307))
			{
				if (!unk_0x8EF8E27D73EB5271(&Global_2707307))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x97DD063A9C6137F8(0))
		{
			return Var0;
		}
		if (func_644(&Global_2707307))
		{
			Global_2707237 = { func_642(bParam0) };
			func_641(&Global_2707237, &Var0);
		}
	}
	return Var0;
}

void func_641(var uParam0, var uParam1)
{
	unk_0x29B9959EF2236634(uParam0, 35, uParam1);
}

struct<35> func_642(bool bParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_643(bParam0))
	{
		return Global_1575115[unk_0x259BE71D8A81D4FA() /*35*/];
	}
	Var0 = { func_152(bParam0) };
	unk_0xC07B1AA6155EC337(&Var1, 35, &Var0);
	return Var1;
}

int func_643(int iParam0)
{
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		return 1;
	}
	return 0;
}

int func_644(var uParam0)
{
	if (unk_0x99DFE4CAC19D527F())
	{
		if (unk_0x7260716F2E4D7661() && unk_0xE582BF3EDDBB1A68(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_645()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_646(bool bParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 29)
	{
		if ((func_8(bParam0) || func_648(bParam0)) || func_7(bParam0))
		{
			return 0;
		}
	}
	if (!func_647(bParam0))
	{
		return 0;
	}
	if (!func_657(bParam0) && !func_654(bParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

bool func_647(bool bParam0)
{
	return BitTest(Global_1845281[bParam0 /*883*/].f_140, 22);
}

int func_648(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1887305[bParam0 /*610*/].f_1, 10) || BitTest(Global_1887305[bParam0 /*610*/].f_1, 9));
	}
	return 0;
}

int func_649(bool bParam0)
{
	bool bVar0;
	
	if (bParam0 == func_116())
	{
		return 0;
	}
	if (func_14(bParam0, 0))
	{
		return 0;
	}
	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (BitTest(Global_1845281[bVar0 /*883*/].f_140, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_650()
{
	switch (func_234(unk_0x259BE71D8A81D4FA()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_337(unk_0x259BE71D8A81D4FA()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_120(unk_0x259BE71D8A81D4FA()))
	{
		switch (func_234(unk_0x259BE71D8A81D4FA()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_623(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	return 0;
}

void func_651(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0xB23E0F9B63D009A8(iVar0), 0, 1))
		{
			bVar1 = unk_0xB23E0F9B63D009A8(bVar0);
			if (!func_14(bVar1, 0))
			{
				if (func_657(bVar1) || func_654(bVar1, bParam4))
				{
					if (func_652(bVar1, bParam1, 0))
					{
						(*iParam0)[bVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		bVar0++;
	}
}

int func_652(bool bParam0, int iParam1, bool bParam2)
{
	if (func_17(iParam1))
	{
		if (!bParam2)
		{
			if (func_653(bParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1887305[bParam0 /*610*/].f_10 != func_116())
		{
			return iParam1 == Global_1887305[bParam0 /*610*/].f_10;
		}
	}
	return 0;
}

int func_653(int iParam0, int iParam1)
{
	if (iParam1 != func_116())
	{
		if (iParam0 != func_116())
		{
			if (Global_1887305[iParam0 /*610*/].f_10 != func_116())
			{
				if (Global_1887305[iParam0 /*610*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_654(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return 0;
	}
	if (func_656(unk_0x259BE71D8A81D4FA(), 24) && !func_656(bParam0, 24))
	{
		return 0;
	}
	return (Global_2657971[bParam0 /*465*/].f_247 != -1 || func_655(bParam0));
}

bool func_655(bool bParam0)
{
	return Global_1845281[bParam0 /*883*/].f_193 != 0;
}

bool func_656(bool bParam0, int iParam1)
{
	return BitTest(Global_1887305[bParam0 /*610*/].f_10.f_6, iParam1);
}

int func_657(bool bParam0)
{
	if (!func_12(bParam0, 0, 1))
	{
		return 0;
	}
	if (!func_12(unk_0x259BE71D8A81D4FA(), 0, 1))
	{
		return 0;
	}
	if (!func_658(bParam0))
	{
		return 0;
	}
	if ((unk_0xDFAE61B1AEF262C2(bParam0, unk_0x259BE71D8A81D4FA()) || func_234(bParam0) == 233) || func_234(bParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_658(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_659(unk_0x259BE71D8A81D4FA());
	bVar1 = func_659(bParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

var func_659(bool bParam0)
{
	return func_660(&(Global_2657971[bParam0 /*465*/].f_444), 0);
}

var func_660(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_661(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x330108B080A2132F(iParam1);
		unk_0x330108B080A2132F(iParam2);
		unk_0xE6B753D52F4CA222();
	}
}

void func_662(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1668664.f_2 == 0)
		{
			Global_1668664.f_2 = 1;
		}
	}
	else if (Global_1668664.f_2 == 1)
	{
		Global_1668664.f_2 = 0;
	}
}

void func_663()
{
	if (BitTest(Global_2738934.f_4709, 1))
	{
		if (func_318())
		{
			func_304();
		}
	}
}

int func_664()
{
	if (BitTest(Global_2738934.f_4709, 0) && func_318())
	{
		return 1;
	}
	if (BitTest(Global_2738934.f_4709, 1) && func_318())
	{
		return 1;
	}
	return 0;
}

int func_665()
{
	if (func_318())
	{
		if (func_55(Global_2672855.f_2557[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_666()
{
	if (func_318())
	{
		if (func_68(Global_2672855.f_2557[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_667(int iParam0)
{
	if (Global_1668664.f_1 != Global_1668664)
	{
		Global_1668664.f_1 = Global_1668664;
	}
	if (Global_1668664 != iParam0)
	{
		Global_1668664 = iParam0;
	}
}

int func_668(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 22;
	bVar3 = func_713(iParam1);
	fVar4 = func_712();
	iVar5 = -1;
	if (iParam1 == 29 || iParam1 == 30)
	{
		if (func_711())
		{
			if (func_710() > 0 && Global_1836447)
			{
				unk_0x0C9B2F8C2BD128C2();
				unk_0x043244A32AD6E17D(fVar4);
				unk_0x4EB223432F8FA0A0(18);
				if (unk_0x4C705AAF75363287())
				{
					unk_0x7009D885379C8CDF();
				}
				unk_0x4EB223432F8FA0A0(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_699())
		{
			func_698(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2738934.f_4712, 26))
	{
		func_698(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_48(&(uParam2->f_19)))
	{
		if (func_710() == 1)
		{
			func_697(bVar3, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_698(uParam0, uParam2, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_4714), 5);
		}
	}
	if (func_48(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x4C705AAF75363287())
		{
			unk_0x7009D885379C8CDF();
		}
		unk_0x4EB223432F8FA0A0(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_710() == 0 && !bParam5))
		{
			func_698(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_696();
				if (iParam1 == 29 || iParam1 == 30)
				{
					unk_0x0C9B2F8C2BD128C2();
				}
				unk_0x4EB223432F8FA0A0(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_696();
					if (iParam1 == 29 || iParam1 == 30)
					{
						unk_0x0C9B2F8C2BD128C2();
					}
					unk_0x4EB223432F8FA0A0(18);
				}
				unk_0x043244A32AD6E17D(fVar4);
				if (func_697(bVar3, uParam0, 0))
				{
					func_661(uParam0, 0, 0);
					uVar1 = func_694(iParam1, &(Global_4718592.f_127185), bParam4);
					Var0 = { func_692(iParam1) };
					if (bParam4)
					{
						func_689(uParam0, uVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 29)
					{
						func_683(uParam0, func_686(uParam2), func_684(uParam2), -1);
					}
					else if (iParam1 == 30)
					{
						sVar6 = func_677(uParam2);
						if (!unk_0xD6F9DEE4765092A9(uParam6))
						{
							sVar6 = sParam6;
						}
						func_675(uParam0, sVar6, func_676(), -1);
					}
					else if (func_618())
					{
						uParam2->f_34 = Global_1836446;
						func_689(uParam0, uVar1, &Var0, 1, -1, Global_1836446, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_670(iParam1);
						uParam2->f_34 = Global_1836446;
						func_689(uParam0, uVar1, "", 0, iVar5, func_669(), 1);
					}
					else
					{
						iVar5 = func_670(iParam1);
						func_689(uParam0, uVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(uParam2->f_33), false);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836445 = uParam3;
				Global_1836444 = 1;
				unk_0x043244A32AD6E17D(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1836446)
					{
						unk_0x8744D2E3FC95740E(&(uParam2->f_33), false);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_669()
{
	return Global_1836446;
}

int func_670(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_674())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 42:
			iVar0 = 22;
			break;
		
		case 0:
		case 33:
		case 32:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 43:
		case 44:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 28:
		case 13:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 14:
		case 15:
		case 16:
		case 19:
		case 45:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 17;
			break;
		
		case 18:
			iVar0 = 18;
			break;
		
		case 20:
			if (func_673(unk_0x259BE71D8A81D4FA()))
			{
				iVar0 = 20;
			}
			if (func_672(unk_0x259BE71D8A81D4FA()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_671(unk_0x259BE71D8A81D4FA()))
	{
		iVar0 = 2;
	}
	if (func_235())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_671(bool bParam0)
{
	return Global_2657971[bParam0 /*465*/].f_122 == 4;
}

bool func_672(bool bParam0)
{
	return Global_2657971[bParam0 /*465*/].f_122 == 7;
}

bool func_673(bool bParam0)
{
	return Global_2657971[bParam0 /*465*/].f_122 == 2;
}

bool func_674()
{
	return Global_4718592.f_1 == 0;
}

void func_675(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		unk_0x88F483FBD433696A(*uParam0, "SET_TITLE");
		if (unk_0xD6F9DEE4765092A9(sParam2))
		{
			func_615(sParam1);
		}
		else
		{
			unk_0x882AEFD55B8D51FB("FM_AE_BRACKT");
			unk_0xACF853FB3F6EA7D4(sParam1);
			unk_0xACF853FB3F6EA7D4(sParam2);
			unk_0xCFAD3D478C87321A();
		}
		func_615("");
		if (iParam3 != -1)
		{
			unk_0x330108B080A2132F(iParam3);
		}
		unk_0xE6B753D52F4CA222();
	}
}

char* func_676()
{
	switch (func_234(unk_0x259BE71D8A81D4FA()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_677(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_234(unk_0x259BE71D8A81D4FA()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_679())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_272(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_272(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_678(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_678(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_679()
{
	return (func_682() && func_680(func_681()));
}

int func_680(int iParam0)
{
	return func_275(iParam0, 1);
}

int func_681()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_35;
}

bool func_682()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 148;
}

void func_683(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		unk_0x88F483FBD433696A(*uParam0, "SET_TITLE");
		if (unk_0xD6F9DEE4765092A9(uParam2))
		{
			func_615(uParam1);
		}
		else if (func_337(unk_0x259BE71D8A81D4FA()) == 133)
		{
			unk_0x882AEFD55B8D51FB("FM_AE_BRACKT_C");
			unk_0xACF853FB3F6EA7D4(uParam1);
			unk_0xACF853FB3F6EA7D4(sParam2);
			unk_0xCFAD3D478C87321A();
		}
		else
		{
			unk_0x882AEFD55B8D51FB("FM_AE_BRACKT");
			unk_0xACF853FB3F6EA7D4(sParam1);
			unk_0xACF853FB3F6EA7D4(sParam2);
			unk_0xCFAD3D478C87321A();
		}
		func_615("");
		if (iParam3 != -1)
		{
			unk_0x330108B080A2132F(iParam3);
		}
		unk_0xE6B753D52F4CA222();
	}
}

char* func_684(var uParam0)
{
	int iVar0;
	
	iVar0 = func_337(unk_0x259BE71D8A81D4FA());
	if (func_685())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_336())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_685()
{
	return Global_1845149;
}

char* func_686(var uParam0)
{
	int iVar0;
	
	iVar0 = func_337(unk_0x259BE71D8A81D4FA());
	if (func_685())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_688() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_688() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_336())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_687() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_687()
{
	return Global_2738934.f_5170;
}

int func_688()
{
	if (func_337(unk_0x259BE71D8A81D4FA()) == 132)
	{
		return Global_2738934.f_5165;
	}
	return -1;
}

void func_689(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		unk_0x88F483FBD433696A(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_626(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x882AEFD55B8D51FB(uParam1);
			unk_0x511D14ED2DA887E1(iParam5);
			unk_0xCFAD3D478C87321A();
		}
		else
		{
			func_615(sParam1);
		}
		if (func_711() && iParam6)
		{
			if (func_691())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x882AEFD55B8D51FB("LBD_DPD_CNT");
			unk_0x511D14ED2DA887E1(iVar0);
			unk_0x511D14ED2DA887E1(iVar1);
			unk_0xCFAD3D478C87321A();
		}
		else
		{
			func_615(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x330108B080A2132F(iParam4);
			if (func_690(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x330108B080A2132F(166);
			}
			else if (func_65())
			{
				unk_0x330108B080A2132F(166);
			}
		}
		unk_0xE6B753D52F4CA222();
	}
}

int func_690(bool bParam0)
{
	if (func_673(bParam0) || func_672(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_691()
{
	return Global_1836447;
}

struct<4> func_692(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_693(unk_0x259BE71D8A81D4FA()) || func_671(unk_0x259BE71D8A81D4FA()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 19:
		case 17:
		case 18:
		case 20:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4718592.f_3525, 16);
			break;
	}
	if (func_618() && unk_0x834C960822A4683F())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_3525, 16);
	}
	return Var0;
}

bool func_693(bool bParam0)
{
	return Global_2657971[bParam0 /*465*/].f_122 == 5;
}

char* func_694(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 22 && (!func_618() || unk_0xD6F9DEE4765092A9(uParam1)))
	{
		uVar0 = func_695();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 27)
	{
		if (Global_1836696 == 0)
		{
			Global_1836696 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xD6F9DEE4765092A9(sParam1))
	{
		if (Global_1836696 == 1)
		{
			Global_1836696 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836696 == 0)
		{
			Global_1836696 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 33:
			case 44:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 28:
			case 11:
			case 12:
			case 13:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 20:
			case 16:
			case 19:
			case 17:
			case 15:
			case 14:
			case 18:
			case 21:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 24:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_695()
{
	if (unk_0xCA440502CAC1617C())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xDC8C0439F5CD3C85())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x568C5A2B6834D226() || unk_0xCDC936BF35EDCB73() > 0)
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x6CCB49E4B35F59D6())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_696()
{
	Global_44999 = 1;
}

bool func_697(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x8DE4F68A9728925E("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x8DE4F68A9728925E("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x8DE4F68A9728925E("mp_matchmaking_card");
	}
	return unk_0xA0C7B98BCF1EEF9E(*uParam1);
}

void func_698(var uParam0, var uParam1, bool bParam2)
{
	unk_0x8744D2E3FC95740E(&(uParam1->f_33), 7);
	Global_1836445 = 0;
	func_608();
	Global_1836444 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_48(&(uParam1->f_19)))
		{
			func_47(&(uParam1->f_19));
			unk_0x8744D2E3FC95740E(&(Global_2738934.f_4714), 5);
		}
	}
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		unk_0xD314260005F064BF(uParam0);
	}
	if (BitTest(uParam1->f_33, 0))
	{
		unk_0x8744D2E3FC95740E(&(uParam1->f_33), false);
	}
	unk_0x043244A32AD6E17D(0f);
}

int func_699()
{
	if (func_709())
	{
		return 0;
	}
	if (func_594())
	{
		return 0;
	}
	if (!func_707())
	{
		return 0;
	}
	if (!func_579())
	{
		return 0;
	}
	if (func_706(8, -1))
	{
		return 0;
	}
	if (func_710() == 2)
	{
		return 0;
	}
	if (Global_2738934.f_4664)
	{
		return 0;
	}
	if (func_331())
	{
		return 0;
	}
	else if (!func_369(unk_0x259BE71D8A81D4FA(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_705(1) || func_703(1)) || Global_23692.f_124) || Global_23692)
	{
		return 0;
	}
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (func_702() && Global_1963845 == 2)
	{
		return 0;
	}
	if (func_114(unk_0x259BE71D8A81D4FA()) && !func_702())
	{
		return 0;
	}
	if (Global_1928440)
	{
		return 0;
	}
	if (Global_1928445)
	{
		return 0;
	}
	if (func_701(0))
	{
		return 0;
	}
	if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 4))
	{
		return 0;
	}
	if (Global_1663277)
	{
		return 0;
	}
	if ((Global_1957929.f_718.f_5 || Global_1960755.f_718.f_5) || Global_1956957.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1964849.f_724.f_5 || Global_1964849.f_744.f_724.f_5) || Global_1964849.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1971648.f_732.f_5)
	{
		return 0;
	}
	if (func_700(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if ((Global_1663320 || Global_1663321) || Global_1663322)
	{
		return 0;
	}
	return 1;
}

int func_700(bool bParam0)
{
	if (bParam0 == func_116())
	{
		return 0;
	}
	return BitTest(Global_2657971[bParam0 /*465*/].f_322.f_4, 6);
}

bool func_701(int iParam0)
{
	return BitTest(Global_2738934.f_5249.f_50, iParam0);
}

bool func_702()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1963846, 0));
}

int func_703(bool bParam0)
{
	if (unk_0x22C925E7C63C5628())
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (func_704(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x6D05C5731A838CB3(0, 25) || unk_0x6D05C5731A838CB3(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23692.f_130)
	{
		return 0;
	}
	if (unk_0x6D05C5731A838CB3(0, 19) || (!bParam0 && unk_0x4465D55576678706(0, 19)))
	{
		return 1;
	}
	if (unk_0x761778199FE1211C())
	{
		if (((unk_0x6D05C5731A838CB3(0, 166) || unk_0x6D05C5731A838CB3(0, 167)) || unk_0x6D05C5731A838CB3(0, 168)) || unk_0x6D05C5731A838CB3(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x4465D55576678706(0, 166) || unk_0x4465D55576678706(0, 167)) || unk_0x4465D55576678706(0, 168)) || unk_0x4465D55576678706(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_704(int iParam0)
{
	int iVar0;
	
	if (unk_0x5EA7A06A1491D450())
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0))
		{
			unk_0x23B29877D0BE9547(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_705(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23692.f_4 && Global_23692.f_104 == 4);
	}
	return Global_23692.f_4;
}

bool func_706(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

int func_707()
{
	if (func_708())
	{
		return 1;
	}
	if (unk_0x15CCE8886267624F())
	{
		return 0;
	}
	if (unk_0x78ABC1D11B34F324() || unk_0xDDED2C93E8FD5B69())
	{
		return 0;
	}
	if (unk_0x114ABA9988FF784B())
	{
		return 0;
	}
	return 1;
}

bool func_708()
{
	return Global_1574604;
}

bool func_709()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

int func_710()
{
	return Global_1668667.f_68;
}

int func_711()
{
	if (Global_1836446 > 16)
	{
		return 1;
	}
	return 0;
}

float func_712()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0,6347182f;
	fVar1 = (1f - (1f - unk_0x897B441FF18ECBBB()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_713(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 23:
		case 29:
		case 30:
		case 42:
			return 1;
		
		default:
	}
	return 0;
}

int func_714()
{
	if (func_717())
	{
		return 1;
	}
	if (func_7(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_685())
	{
		return 1;
	}
	if (func_406(unk_0x259BE71D8A81D4FA()))
	{
		switch (func_337(unk_0x259BE71D8A81D4FA()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_715(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_715(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_715(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_715(bool bParam0)
{
	return BitTest(Global_1887305[bParam0 /*610*/].f_1, 4);
}

int func_716(int iParam0)
{
	if (iParam0 == 30)
	{
		if ((func_406(unk_0x259BE71D8A81D4FA()) && !func_120(unk_0x259BE71D8A81D4FA())) && !func_623(unk_0x259BE71D8A81D4FA()))
		{
			return 1;
		}
	}
	if (iParam0 == 29)
	{
		if (func_126(unk_0x259BE71D8A81D4FA(), 0) && func_120(unk_0x259BE71D8A81D4FA()))
		{
			return 1;
		}
		if (func_586(unk_0x259BE71D8A81D4FA()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_717()
{
	if (func_718(unk_0x259BE71D8A81D4FA()))
	{
		return Global_1582002;
	}
	return 0;
}

int func_718(bool bParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_14(bParam0, 0))
		{
			return unk_0x6BAFBE8178274578(bParam0);
		}
	}
	return 0;
}

void func_719()
{
	if (Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_3 == 3)
	{
		if (!BitTest(uLocal_128, 8))
		{
			if ((!func_7(unk_0x259BE71D8A81D4FA()) && !func_177(unk_0x259BE71D8A81D4FA())) && !func_419(unk_0x259BE71D8A81D4FA()))
			{
				func_418();
			}
		}
		else if (!BitTest(uLocal_128, 9))
		{
			if ((func_7(unk_0x259BE71D8A81D4FA()) || func_177(unk_0x259BE71D8A81D4FA())) || func_419(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x77DAA17F34FDE49D();
				Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_4 = 0;
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_128, 9);
			}
		}
	}
}

void func_720()
{
	bool bVar0;
	
	if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iLocal_132)))
	{
		bVar0 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(bLocal_132));
		if (unk_0x762604C40829DB72(bVar0))
		{
			func_721(bVar0, 2);
		}
	}
	bLocal_132++;
	if (bLocal_132 >= unk_0x95C7A22DBE7AEF4C())
	{
		bLocal_132 = false;
	}
}

void func_721(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (BitTest(Global_1836959.f_1, 0))
	{
		return;
	}
	if (func_48(&(Global_1836959.f_18)))
	{
		return;
	}
	if (BitTest(Global_1836959.f_2, bParam0))
	{
		if (Global_1836959 < iParam1 && BitTest(Global_1836959.f_1, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), false);
			return;
		}
		if (Global_1836959 != 0)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), true);
		}
		Global_1836959 = 0;
		Global_1836959.f_2 = 0;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_2), bParam0);
	bVar0 = true;
	if (func_8(bParam0))
	{
		bVar0 = false;
	}
	if (func_722(bParam0))
	{
		bVar0 = false;
	}
	if (func_14(bParam0, 0))
	{
		bVar0 = false;
	}
	if (func_7(bParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1836959++;
	}
}

bool func_722(bool bParam0)
{
	return BitTest(Global_1887305[bParam0 /*610*/].f_1, 10);
}

void func_723(int iParam0, int iParam1)
{
	Local_1523[iParam0 /*12*/] = iParam1;
}

int func_724()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_178.f_534[iVar0 /*42*/].f_1 = func_116();
		iVar0++;
	}
	return 1;
}

int func_725()
{
	return Local_157.f_0;
}

int func_726(int iParam0)
{
	return Local_1523[iParam0 /*12*/];
}

void func_727()
{
	if (BitTest(Global_1836959.f_1, 6))
	{
		func_751();
		unk_0x8744D2E3FC95740E(&(Global_1836959.f_1), 6);
	}
	if (!BitTest(Global_1836959.f_1, 7))
	{
		if (BitTest(Global_1836959.f_1, 4) || BitTest(Global_1836959.f_1, 16))
		{
			if (((!unk_0xBE259DBA45F2996E() && !unk_0x4C705AAF75363287()) && !func_318()) && func_12(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 7);
				func_311("FME_PASINT", 30000);
				func_310(1);
			}
		}
		else if (BitTest(Global_1836959.f_1, 17))
		{
			if (func_180() && !func_179())
			{
				unk_0x8744D2E3FC95740E(&(Global_1836959.f_1), 17);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836959.f_1, 23))
	{
		if (((((!unk_0xBE259DBA45F2996E() && !BitTest(Global_2738934.f_868, 2)) && func_12(unk_0x259BE71D8A81D4FA(), 1, 1)) && !Global_76498) && !Global_61347) && !unk_0x4C705AAF75363287())
		{
			if (func_749())
			{
				func_311("AMEV_GA_RP", -1);
				if (func_234(unk_0x259BE71D8A81D4FA()) != 200)
				{
					func_310(1);
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 23);
			}
		}
	}
	if (unk_0x4D9174D8796EA622() && unk_0x05AA183DA1344935() == 15)
	{
		if (func_432(unk_0x259BE71D8A81D4FA()))
		{
			if (!unk_0xBFF989187F281795(1344549371))
			{
				unk_0x9BC444D671469DCD(1344549371);
			}
		}
		else if (unk_0xBFF989187F281795(1344549371))
		{
			unk_0xB4CD52D6B8305BD4(1344549371);
		}
	}
	if (BitTest(Global_1836959.f_1, 9))
	{
		if (((((!unk_0xBE259DBA45F2996E() && !unk_0x4C705AAF75363287()) && !func_318()) && func_12(unk_0x259BE71D8A81D4FA(), 1, 1)) && !func_178(unk_0x259BE71D8A81D4FA(), 21)) && !func_178(unk_0x259BE71D8A81D4FA(), 25))
		{
			unk_0x8744D2E3FC95740E(&(Global_1836959.f_1), 9);
			func_748(0);
			func_311("FME_TBL00", -1);
			func_310(1);
		}
	}
	if (func_406(unk_0x259BE71D8A81D4FA()))
	{
		if (!BitTest(Global_1836959.f_1, 18))
		{
			if ((func_178(unk_0x259BE71D8A81D4FA(), 21) && BitTest(Global_1836959.f_1, 20)) && !BitTest(Global_1836959.f_1, 19))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 18);
			}
		}
		else if (BitTest(Global_1836959.f_1, 18))
		{
			if (((((!unk_0xBE259DBA45F2996E() && !unk_0x4C705AAF75363287()) && !func_318()) && func_12(unk_0x259BE71D8A81D4FA(), 1, 1)) && unk_0x9390801B06EE998F()) && !func_747())
			{
				unk_0x8744D2E3FC95740E(&(Global_1836959.f_1), 18);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 19);
				func_311("AMTT_RPAS", -1);
				func_310(1);
			}
		}
	}
	if (((((func_406(unk_0x259BE71D8A81D4FA()) && !func_8(unk_0x259BE71D8A81D4FA())) && func_337(unk_0x259BE71D8A81D4FA()) != 146) && !func_7(unk_0x259BE71D8A81D4FA())) && !func_177(unk_0x259BE71D8A81D4FA())) && !func_737())
	{
		if (func_431(func_337(unk_0x259BE71D8A81D4FA())))
		{
			unk_0x73CB9EAA55D097EB(unk_0x259BE71D8A81D4FA());
		}
		if (!BitTest(Global_1836959.f_1, 22))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 22);
		}
		if (func_470(unk_0x259BE71D8A81D4FA()) || func_425())
		{
			if (!BitTest(Global_1836959.f_1, 10))
			{
				if (func_736(func_337(unk_0x259BE71D8A81D4FA())))
				{
					if (func_279(0) && !Global_4594767)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 9);
					}
					if (!Global_4594767)
					{
						func_429(1);
						unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 14);
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 10);
			}
		}
		if (func_432(unk_0x259BE71D8A81D4FA()))
		{
			if (!BitTest(Global_1836959.f_1, 11))
			{
				if (!Global_101585.f_8)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 12);
					func_427(1);
				}
				if (!func_735())
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 13);
					func_426();
				}
				if (!Global_4594767)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 14);
					if (func_279(0) && !Global_4594767)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 9);
					}
					func_429(1);
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 11);
			}
		}
		else
		{
			func_733(0);
		}
	}
	else
	{
		func_733(1);
	}
	func_728();
	if (func_424(func_337(unk_0x259BE71D8A81D4FA())) && !BitTest(Global_1836959.f_1, 21))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 21);
	}
	if (((func_180() && !func_179()) || func_178(unk_0x259BE71D8A81D4FA(), 21)) || func_178(unk_0x259BE71D8A81D4FA(), 25))
	{
		if (!BitTest(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1, 10))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1), 10);
		}
	}
	else if (BitTest(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1, 10))
	{
		unk_0x8744D2E3FC95740E(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1), 10);
	}
}

void func_728()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_318())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_567(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (BitTest(Global_1836959.f_1, 26))
				{
					unk_0x8744D2E3FC95740E(&(Global_1836959.f_1), 26);
				}
				func_729(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!BitTest(Global_1836959.f_1, 26))
	{
		func_47(&(Global_1836959.f_22));
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 26);
	}
}

void func_729(int iParam0, int iParam1)
{
	if (!func_48(&(Global_1836959.f_22)))
	{
		func_2(&(Global_1836959.f_22), 0, 0);
	}
	else if (func_1(&(Global_1836959.f_22), iParam1, 0))
	{
		if (func_710() > 0)
		{
			func_732(iParam0);
			if (func_308("AMEV_LBD_HELP"))
			{
				unk_0x428C32CC68809A35(1);
			}
			func_47(&(Global_1836959.f_22));
		}
	}
	else
	{
		func_731(0);
		func_730();
	}
}

void func_730()
{
	Global_2738934.f_4651 = 0;
}

void func_731(int iParam0)
{
	Global_1668667.f_68 = iParam0;
}

void func_732(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672855.f_2557[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2672855.f_2557[iVar0 /*80*/].f_2 = 5;
			func_117(&(Global_2672855.f_2557[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_733(int iParam0)
{
	if ((BitTest(Global_1836959.f_1, 11) || (BitTest(Global_1836959.f_1, 10) && iParam0)) || (BitTest(Global_1836959.f_1, 22) && iParam0))
	{
		if (BitTest(Global_1836959.f_1, 12))
		{
			unk_0x8744D2E3FC95740E(&(Global_1836959.f_1), 12);
			func_427(0);
		}
		if (BitTest(Global_1836959.f_1, 13))
		{
			unk_0x8744D2E3FC95740E(&(Global_1836959.f_1), 13);
			func_734();
		}
		if (BitTest(Global_1836959.f_1, 14) && !func_126(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x8744D2E3FC95740E(&(Global_1836959.f_1), 14);
			func_429(0);
		}
		unk_0x8744D2E3FC95740E(&(Global_1836959.f_1), 11);
		unk_0x8744D2E3FC95740E(&(Global_1836959.f_1), 10);
		unk_0x8744D2E3FC95740E(&(Global_1836959.f_1), 22);
	}
}

void func_734()
{
	unk_0x8744D2E3FC95740E(&(Global_2738934.f_5084), false);
}

bool func_735()
{
	return BitTest(Global_2738934.f_5084, 0);
}

int func_736(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_432(unk_0x259BE71D8A81D4FA());
		
		case 133:
			return (func_425() || func_5(func_336()));
		
		default:
	}
	return 0;
}

int func_737()
{
	if (((((((((func_746() || func_745()) || func_744()) || func_331()) || (func_743() && !unk_0x834C960822A4683F())) || (func_740() && !func_739())) || Global_2625211) || Global_2625211.f_1 != 0) || Global_2625286 != 0) || (func_738() == 2 && !unk_0x834C960822A4683F()))
	{
		return 1;
	}
	return 0;
}

int func_738()
{
	return Global_1057440;
}

bool func_739()
{
	return BitTest(Global_2684504.f_2, 27);
}

int func_740()
{
	if (func_742() || func_741())
	{
		return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_96 == 8;
	}
	return 0;
}

var func_741()
{
	return Global_2684504.f_737;
}

var func_742()
{
	return BitTest(Global_2684504.f_2, 11);
}

var func_743()
{
	return BitTest(Global_2684504, 5);
}

var func_744()
{
	return BitTest(Global_2684504, 2);
}

var func_745()
{
	return BitTest(Global_2684504, 20);
}

bool func_746()
{
	return Global_2684504.f_700;
}

bool func_747()
{
	return Global_2738934.f_5179 != -1;
}

void func_748(int iParam0)
{
	int iVar0;
	
	iVar0 = func_218(2537, -1);
	if (iParam0 == 0)
	{
		if (!BitTest(iVar0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, false);
		}
		else if (!BitTest(iVar0, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, true);
		}
		else if (!BitTest(iVar0, 2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(iVar0, 3))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 3);
		}
		else if (!BitTest(iVar0, 4))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 4);
		}
		else if (!BitTest(iVar0, 5))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!BitTest(iVar0, 6))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 6);
		}
		else if (!BitTest(iVar0, 7))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 7);
		}
		else if (!BitTest(iVar0, 8))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!BitTest(iVar0, 9))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 9);
		}
		else if (!BitTest(iVar0, 10))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 10);
		}
		else if (!BitTest(iVar0, 11))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 11);
		}
	}
	func_211(2537, iVar0, -1, 1);
}

int func_749()
{
	int iVar0;
	
	if (!func_48(&(Global_1836959.f_15)))
	{
		func_2(&(Global_1836959.f_15), 0, 0);
		Global_1836959.f_17 = 0;
	}
	else if (func_1(&(Global_1836959.f_15), 1000, 0))
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(Global_1836959.f_17)))
		{
			iVar0 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(Global_1836959.f_17));
			if (unk_0x762604C40829DB72(iVar0))
			{
				if (func_12(bVar0, 1, 1) && func_750(bVar0, 6))
				{
					if (system::vdist(func_39(unk_0x259BE71D8A81D4FA()), func_39(bVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1836959.f_17++;
		if (Global_1836959.f_17 >= 32)
		{
			Global_1836959.f_17 = 0;
			func_47(&(Global_1836959.f_15));
		}
	}
	return 0;
}

int func_750(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_408() != 0)
	{
		return 0;
	}
	if (!func_217(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1845281[iVar0 /*883*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_751()
{
	unk_0xDAE61414743C8D1D(5);
	func_752();
	unk_0x425BBE19F25A57AB(1f);
	unk_0x8744D2E3FC95740E(&(Global_1836959.f_1), 8);
}

void func_752()
{
	if (unk_0xF40767E41852FB72(Global_2738934.f_5245))
	{
		if (!Global_2738934.f_5245 == unk_0x8F76B2250AC806FA() && Global_2738934.f_5244 < 1f)
		{
			return;
		}
	}
	Global_2738934.f_5245 = -1;
	Global_2738934.f_5244 = 1f;
}

int func_753()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2738934.f_5082)
	{
		return 0;
	}
	if ((!func_48(&(Local_157.f_39)) && !func_48(&(Local_157.f_41))) && !func_48(&(Local_157.f_43)))
	{
		return 0;
	}
	uVar2 = unk_0x7E3F74F641EE6B27();
	if (func_48(&(Local_157.f_41)))
	{
		iVar0 = func_754(&uVar2, &(Local_157.f_41));
		iVar1 = 20000;
	}
	else if (func_48(&(Local_157.f_39)))
	{
		iVar0 = func_754(&uVar2, &(Local_157.f_39));
		iVar1 = func_29(0);
	}
	else if (func_48(&(Local_157.f_43)))
	{
		iVar0 = func_754(&uVar2, &(Local_157.f_43));
		iVar1 = func_30();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_754(var uParam0, var uParam1)
{
	return unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(*uParam0, *uParam1));
}

int func_755()
{
	if (func_756())
	{
		return 1;
	}
	return 0;
}

bool func_756()
{
	return Global_1836959.f_24;
}

int func_757()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_760())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_759())
	{
		return 1;
	}
	if (func_758(159))
	{
		if (!func_746())
		{
			return 1;
		}
	}
	if (func_758(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_434() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_434()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_758(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_759()
{
	return Global_2696172;
}

bool func_760()
{
	return Global_2684504.f_695;
}

void func_761()
{
	system::wait(0);
}

void func_762()
{
	int iVar0;
	
	if (func_757())
	{
		Local_1524.f_5 = 5;
	}
	else if (BitTest(Local_157.f_2, 0))
	{
		Local_1524.f_5 = 6;
	}
	else if (func_21(0))
	{
		Local_1524.f_5 = 1;
	}
	else
	{
		Local_1524.f_5 = 2;
	}
	Local_1524.f_0 = Local_157.f_52;
	Local_1524.f_1 = Local_157.f_53;
	Local_1524.f_4 = Local_157.f_66;
	Local_1524.f_3 = Local_157.f_51;
	Local_1524.f_10 = (unk_0x39D1D336459711BE() - Local_1524.f_9);
	if (!Global_262145.f_11965)
	{
		if (Local_1524.f_6 > 0)
		{
		}
	}
	if (func_19())
	{
		iVar0 = 1;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (unk_0xAE032CEDCF23C6D5() != -1)
		{
			func_800(Local_1524, Local_157.f_3, Local_1523[unk_0xAE032CEDCF23C6D5() /*12*/].f_4, iVar0, -1, -1, -1);
		}
	}
	if (BitTest(uLocal_128, 4))
	{
		unk_0x8E4825CCACA34B58(iLocal_136);
		unk_0x8744D2E3FC95740E(&uLocal_128, 4);
	}
	unk_0x394AFAC073E1F277(iLocal_136);
	unk_0x394AFAC073E1F277(iLocal_137);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((BitTest(uLocal_153, iVar0) && iLocal_154[iVar0] != -1) && !unk_0x9F0C06CFBACDD6A1(iLocal_154[iVar0]))
		{
			unk_0x8E4825CCACA34B58(iLocal_154[iVar0]);
			unk_0x394AFAC073E1F277(iLocal_154[iVar0]);
		}
		iVar0++;
	}
	func_415();
	func_482(1, 1);
	unk_0xB65B0A6A52A484B5(0);
	func_569(0);
	func_422(Local_157.f_3, 0);
	func_763(133, 0, Local_157.f_37 == 6);
	func_421(23, 0);
	if (func_323() >= 0f)
	{
		unk_0x4A12B9AB7A7BA5C0(0f, 0, 21);
	}
	if (!BitTest(uLocal_128, 9))
	{
		unk_0x77DAA17F34FDE49D();
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_763(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (iParam0 == 133)
	{
		func_798(79, 1);
	}
	else
	{
		func_798(80, 1);
	}
	if (unk_0x259BE71D8A81D4FA() != -1)
	{
		if (BitTest(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1, 13))
		{
			unk_0x8744D2E3FC95740E(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1), 13);
		}
		if (BitTest(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1, 14))
		{
			unk_0x8744D2E3FC95740E(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1), 14);
		}
	}
	if (BitTest(Global_1836959.f_1, 21))
	{
		unk_0x8744D2E3FC95740E(&(Global_1836959.f_1), 21);
	}
	func_794();
	unk_0xCFBD89D2F1F18961("DisableFlightMusic", 0);
	unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_793(func_337(unk_0x259BE71D8A81D4FA()));
		func_421(func_440(iParam0), 0);
	}
	else
	{
		if ((bParam2 && unk_0x259BE71D8A81D4FA() != -1) && func_792(unk_0x259BE71D8A81D4FA()) >= 12)
		{
			func_791(2549, -1);
			iVar1 = func_218(2549, -1);
			if (iVar1 == 2)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1836985, false);
			}
			else if (iVar1 == 4)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1836985, true);
			}
			else if (iVar1 == 6)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1836985, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1836985, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1836985, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1836985, 5);
			}
		}
		func_790();
		func_789();
		func_788();
		if ((!func_122(unk_0x259BE71D8A81D4FA()) && !func_317(unk_0x259BE71D8A81D4FA())) && !func_472())
		{
			func_772();
		}
		func_771();
		if (!BitTest(Global_1941104.f_3, 0) && !BitTest(Global_1941104.f_3, 1))
		{
			func_751();
		}
		func_770();
		unk_0x8744D2E3FC95740E(&(Global_2738934.f_1863), 2);
		func_769();
		func_182();
	}
	if (unk_0xBFF989187F281795(1344549371))
	{
		unk_0xB4CD52D6B8305BD4(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0x259BE71D8A81D4FA() != -1 && !func_178(unk_0x259BE71D8A81D4FA(), 21)) && !func_178(unk_0x259BE71D8A81D4FA(), 25)) && !func_126(unk_0x259BE71D8A81D4FA(), 0))
		{
			func_429(0);
			func_427(0);
			if (!bParam1)
			{
				func_768();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_51(26, -1))
		{
			Global_2698685 = -1;
			func_49(26, -1);
		}
	}
	if (!func_764())
	{
		Global_2707198 = 1;
	}
}

int func_764()
{
	if (((((((!func_690(unk_0x259BE71D8A81D4FA()) && !func_671(unk_0x259BE71D8A81D4FA())) && func_337(unk_0x259BE71D8A81D4FA()) != 146) && !func_767()) && !func_766()) && !func_765(Global_4718592.f_185586)) && !func_106()) && !BitTest(Global_4718592.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_765(int iParam0)
{
	return iParam0 == 57;
}

int func_766()
{
	if (Global_4718592.f_127178 == Global_262145.f_10088)
	{
		return 1;
	}
	return 0;
}

int func_767()
{
	if ((Global_4718592 == 0 && unk_0x834C960822A4683F()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_185586 > 0) || BitTest(Global_4718592.f_4, 15)) || BitTest(Global_4718592.f_4, 18)) || BitTest(Global_4718592.f_4, 19)) || BitTest(Global_4718592.f_4, 29)) || BitTest(Global_4718592.f_4, 28)) || BitTest(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_768()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (BitTest(Global_4544411[iVar0 /*26*/].f_12, 11))
		{
			if (BitTest(Global_4544411[iVar0 /*26*/].f_13, 26))
			{
				unk_0x8744D2E3FC95740E(&(Global_4544411[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_769()
{
	if (BitTest(Global_2738934.f_5083, 1))
	{
		unk_0x8744D2E3FC95740E(&(Global_2738934.f_5083), true);
	}
	if (Global_2738934.f_5083 > 0)
	{
		unk_0x86A2BC11844DEEB3("FM_COUNTDOWN_30S_KILL");
		unk_0x86A2BC11844DEEB3("FM_COUNTDOWN_30S_FIRA");
		unk_0xB43467C43086A6A1("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x938C85923AD6778A(1);
		Global_2738934.f_5083 = 0;
		unk_0xCFBD89D2F1F18961("DisableFlightMusic", 0);
		unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 0);
		unk_0xCFBD89D2F1F18961("AllowScoreAndRadio", 0);
		if (!unk_0x1B79E937E91F40C3(unk_0x1AF90EB93E0012D6(), "am_pi_menu"))
		{
			if (Global_2738934.f_5093 > -1)
			{
				unk_0x394AFAC073E1F277(Global_2738934.f_5093);
				Global_2738934.f_5093 = -1;
			}
		}
	}
}

void func_770()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836959 = { Var0 };
}

void func_771()
{
	var uVar0;
	
	Global_1582002 = uVar0;
}

void func_772()
{
	unk_0xDD7F149F8BAF1260(&(Global_2635563.f_24), &Global_2640160, 2);
	unk_0xDD7F149F8BAF1260(&(Global_2635563.f_26), &Global_2640162, 19);
	func_786();
	func_775(1, 1, 0);
	func_773();
}

void func_773()
{
	func_774(0, 0);
}

void func_774(int iParam0, int iParam1)
{
	Global_2635563.f_22 = iParam0;
	Global_2635563.f_23 = iParam1;
}

void func_775(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xDD7F149F8BAF1260(&(Global_2635563.f_45), &Global_2640181, 323);
	}
	else
	{
		Global_2635563.f_45 = { Global_2640181 };
		Global_2635563.f_45.f_49 = { Global_2640181.f_49 };
		Global_2635563.f_45.f_52 = Global_2640181.f_52;
		Global_2635563.f_45.f_53 = Global_2640181.f_53;
	}
	if (bParam0)
	{
		func_785();
	}
	if (!bParam2)
	{
		func_777(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_776(0);
	func_185();
}

void func_776(bool bParam0)
{
	if (bParam0)
	{
		Global_2635563.f_713 = 0;
	}
	else
	{
		Global_2635563.f_713 = 1;
	}
}

void func_777(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_784())
		{
			func_783();
		}
		Global_2635563.f_714.f_668 = unk_0x8F76B2250AC806FA();
		Global_2635563.f_714.f_654 = iParam1;
		Global_2635563.f_714.f_655 = iParam2;
		Global_2635563.f_714.f_656 = iParam10;
		func_781();
		func_467(8, 0, 0, 0, 0);
		Global_2635563.f_714.f_657 = iParam11;
		Global_2635563.f_714.f_662 = iParam3;
		Global_2635563.f_714.f_663 = iParam4;
		Global_2635563.f_714.f_660 = iParam5;
		Global_2635563.f_714.f_661 = iParam6;
		Global_2635563.f_714.f_664 = iParam7;
		Global_2635563.f_714.f_665 = iParam8;
		Global_2635563.f_714.f_666 = iParam9;
		Global_2635563.f_714.f_667 = iParam14;
		Global_2635563.f_714.f_658 = iParam12;
		Global_2635563.f_714.f_659 = iParam13;
		Global_2635563.f_2053 = 1;
	}
	else
	{
		func_778();
	}
}

void func_778()
{
	if (func_784() && !func_780())
	{
		func_783();
	}
	if (func_780())
	{
		func_779();
	}
	else
	{
		func_781();
		func_467(0, 0, 0, 0, 0);
		Global_2635563.f_2053 = 0;
		Global_2635563.f_2052 = 0;
	}
}

void func_779()
{
	unk_0xDD7F149F8BAF1260(&(Global_2635563.f_714), &(Global_2635563.f_1383), 669);
	Global_2635563.f_490 = { Global_2635563.f_496 };
	if (unk_0x8F76B2250AC806FA() == Global_2635563.f_714.f_668)
	{
		Global_2635563.f_2052 = 0;
	}
}

int func_780()
{
	if ((Global_2635563.f_2052 && !unk_0x8F76B2250AC806FA() == Global_2635563.f_1383.f_668) && unk_0xF40767E41852FB72(Global_2635563.f_1383.f_668))
	{
		return 1;
	}
	return 0;
}

void func_781()
{
	if (func_784() && !func_780())
	{
		func_783();
	}
	func_782();
	Global_2635563.f_714 = 0;
	Global_2635563.f_714.f_602 = 0;
}

void func_782()
{
	int iVar0;
	struct<6> Var1;
	struct<3> Var2;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2635563.f_714.f_1[iVar0 /*6*/] = { Var1 };
		iVar0++;
	}
	Var2 = -1;
	Var2.f_2 = -3;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_2635563.f_714.f_603[iVar0 /*3*/] = { Var2 };
		iVar0++;
	}
}

void func_783()
{
	if (func_780())
	{
		if (Global_2635563.f_714.f_668 == Global_2635563.f_1383.f_668)
		{
			return;
		}
	}
	if (!unk_0x8F76B2250AC806FA() == Global_2635563.f_714.f_668)
	{
		unk_0xDD7F149F8BAF1260(&(Global_2635563.f_1383), &(Global_2635563.f_714), 669);
		Global_2635563.f_496 = { Global_2635563.f_490 };
		Global_2635563.f_2052 = 1;
	}
}

int func_784()
{
	if ((Global_2635563.f_2053 && !unk_0x8F76B2250AC806FA() == Global_2635563.f_714.f_668) && unk_0xF40767E41852FB72(Global_2635563.f_714.f_668))
	{
		return 1;
	}
	return 0;
}

void func_785()
{
	unk_0xDD7F149F8BAF1260(&(Global_2635563.f_368), &Global_2640504, 121);
}

void func_786()
{
	func_787();
}

void func_787()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2635563.f_2563[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2635563.f_2562 = 0;
}

void func_788()
{
	Global_2738934.f_5084 = 0;
}

void func_789()
{
	if (unk_0x259BE71D8A81D4FA() != -1)
	{
		Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1 = 0;
	}
}

void func_790()
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	if (iVar0 != -1)
	{
		Global_1887305[iVar0 /*610*/] = -1;
	}
}

void func_791(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_218(iParam0, func_213(iParam1));
	iVar0++;
	func_211(iParam0, iVar0, iParam1, 1);
}

int func_792(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_206.f_6;
}

int func_793(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_432(unk_0x259BE71D8A81D4FA()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_794()
{
	if (BitTest(Global_2738934.f_1850, 3) || BitTest(Global_2738934.f_1850, 4))
	{
		if (unk_0x15CCE8886267624F() || unk_0x78ABC1D11B34F324())
		{
			unk_0x10B228D2FDB7AF16(800);
		}
	}
	if (BitTest(Global_2738934.f_1850, 5))
	{
		unk_0x8744D2E3FC95740E(&(Global_2738934.f_1850), 5);
	}
	if (BitTest(Global_2738934.f_1850, 3))
	{
		unk_0x8744D2E3FC95740E(&(Global_2738934.f_1850), 3);
	}
	if (BitTest(Global_2738934.f_1850, 4))
	{
		unk_0x8744D2E3FC95740E(&(Global_2738934.f_1850), 4);
	}
	func_797(0);
	func_796(0);
	func_795(0);
}

void func_795(int iParam0)
{
	if (Global_2738934.f_4639 != iParam0)
	{
		Global_2738934.f_4639 = iParam0;
	}
}

void func_796(bool bParam0)
{
	if (Global_2738934.f_4638 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2738934.f_4638 = bParam0;
	}
}

void func_797(int iParam0)
{
	if (Global_2738934.f_4636 != iParam0)
	{
		Global_2738934.f_4636 = iParam0;
	}
}

void func_798(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_799())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_2737992[iVar0 /*6*/] == iParam0)
		{
			if (Global_1574749.f_4[iVar0] == -1)
			{
				Global_1574749.f_4[iVar0] = iParam0;
				Global_1574749.f_1 = 1;
				Global_1574749 = iParam1;
				return;
			}
		}
		iVar0++;
	}
}

int func_799()
{
	if (Global_262145.f_34959)
	{
		return 1;
	}
	return 0;
}

void func_800(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	var uVar0;
	struct<13> Var1;
	struct<17> Var2;
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
	
	uVar0 = unk_0x1AF90EB93E0012D6();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_79389)
	{
		if (unk_0x1B79E937E91F40C3(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam1;
			unk_0x32E12CCFF254D37A(&Var1);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, func_801()))
		{
			Var2 = { Param0 };
			Var2.f_12 = uParam1;
			Var2.f_13 = iParam2;
			Var2.f_14 = iParam3;
			Var2.f_15 = iParam4;
			Var2.f_16 = iParam5;
			unk_0xD2041B451EDC1C66(&Var2);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_12 = uParam1;
			Var3.f_13 = iParam2;
			Var3.f_14 = iParam3;
			Var3.f_15 = iParam4;
			Var3.f_16 = iParam5;
			Var3.f_17 = iParam6;
			unk_0x173E12E4AAA563A1(&Var3);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_12 = uParam1;
			Var4.f_13 = system::to_float(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_13 = (Var4.f_13 / 10f);
			}
			unk_0x2D37C46EADE98E63(&Var4);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_penned_in"))
		{
			unk_0xC98FBB17B1EC9BA1(&Param0);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_12 = uParam1;
			unk_0x4C70DC8FBB218E4E(&Var5);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_12 = uParam1;
			Var6.f_13 = iParam2;
			unk_0xEBB6A19519CEBE34(&Var6);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_12 = uParam1;
			Var7.f_13 = iParam2;
			unk_0x41A58057D21172EA(&Var7);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_12 = uParam1;
			Var8.f_13 = iParam2;
			Var8.f_14 = iParam3;
			Var8.f_15 = iParam4;
			unk_0x0E8BC7181CB760A3(&Var8);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_12 = uParam1;
			unk_0x842F188EE807AF8B(&Var9);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_12 = uParam1;
				Var10.f_13 = iParam2;
				unk_0x2825919430010B91(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_12 = uParam1;
				Var11.f_13 = iParam2;
				unk_0xEC859204FA292EDF(&Var11);
			}
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_12 = uParam1;
			unk_0x05FBB9E5C4B211A4(&Var12);
		}
	}
}

char* func_801()
{
	switch (Global_2698864)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_802(struct<21> Param0)
{
	int iVar0;
	
	func_811(func_812(Param0.f_0), Param0);
	unk_0xB7F37A0A1E8A175E(func_810(9));
	unk_0x552B3BADB43FF551(func_809(9));
	func_806(0, -1, 0);
	func_804(133);
	unk_0x6F4A865F87C7A3AD(&Local_157, 88, 0);
	unk_0x7B13DC83218D9AF5(&Local_1523, 385, 0);
	if (!func_803())
	{
		func_762();
	}
	if (unk_0x93E08E0F531E2C35())
	{
		unk_0x0189E96FAC892B16(&(Local_157.f_52), &(Local_157.f_53));
	}
	Local_1524.f_2 = unk_0xC259E614564DAB8F();
	unk_0xAECC5FA98C879D67(0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_154[iVar0] = -1;
		iVar0++;
	}
	return 1;
}

int func_803()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 0;
		}
		if (unk_0x37F4AB46DE999660())
		{
			return 1;
		}
		if (func_760())
		{
			return 0;
		}
		if (func_758(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		system::wait(0);
	}
	return 0;
}

void func_804(int iParam0)
{
	func_770();
	func_805();
	func_788();
	Global_1836959.f_4 = iParam0;
	Global_1836959.f_5 = iParam0;
	func_439(iParam0, -1);
	func_28(&(Global_1836959.f_18), 0, 0);
	Global_2738934.f_4709 = 0;
	Global_2697542[0] = func_116();
	Global_2697542[1] = func_116();
	Global_2697542[2] = func_116();
	Global_2697542[3] = func_116();
	Global_2697542[4] = func_116();
	func_182();
	if (!func_582(func_305()))
	{
		func_304();
	}
	if (func_180() && !func_179())
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 16);
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1836959.f_1), 17);
	}
}

void func_805()
{
	var uVar0;
	
	Global_1836984 = uVar0;
}

int func_806(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_808();
			}
			else
			{
				return 0;
			}
		}
		if (!func_807(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_808();
					}
					else
					{
						return 0;
					}
				}
				if (func_760())
				{
					if (!bParam2)
					{
						func_808();
					}
					else
					{
						return 0;
					}
				}
				if (func_758(157))
				{
					if (!bParam2)
					{
						func_808();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBF52D447C795492B())
			{
				if (!bParam2)
				{
					func_808();
				}
				else
				{
					return 0;
				}
			}
		}
		system::wait(0);
		iVar0 = unk_0xDFF16B5B12604EFF();
	}
	if (iParam1 > -1)
	{
		Global_1574667 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			if (!bParam2)
			{
				func_808();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBF52D447C795492B())
	{
		if (!bParam2)
		{
			func_808();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_807(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_808()
{
	unk_0xBBC29EBE6E1A48FA();
}

int func_809(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 0;
}

int func_810(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 0;
}

void func_811(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_808();
	}
	unk_0xDB2434E51017FFCC(uParam0, 0, Param1.f_16);
}

int func_812(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 197:
			return 32;
		
		case 198:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 209:
			return 32;
		
		case 210:
			return 32;
		
		case 199:
			return 32;
		
		case 200:
			return 32;
		
		case 204:
			return 32;
		
		case 202:
			return 32;
		
		case 203:
			return 32;
		
		case 207:
			return 32;
		
		case 208:
			return 32;
		
		case 205:
			return 32;
		
		case 206:
			return 32;
		
		case 211:
			return 32;
		
		case 212:
			return 32;
		
		case 213:
			return 32;
		
		case 214:
			return 32;
		
		case 215:
			return 2;
		
		case 220:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 4;
		
		case 218:
			return 2;
		
		case 219:
			return 2;
		
		case 201:
			return 1;
		
		case 221:
			return 2;
		
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
			return 0;
		
		case 243:
			return 1;
		
		case 228:
			return 4;
		
		case 231:
			return 4;
		
		case 232:
			return 1;
		
		case 233:
			return 1;
		
		case 239:
			return 1;
		
		case 235:
			return 2;
		
		case 240:
			return 1;
		
		case 236:
			return 1;
		
		case 234:
			return 2;
		
		case 237:
			return 8;
		
		case 238:
			return 8;
		
		case 241:
			return 1;
		
		case 242:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 179:
			return 1;
		
		case 196:
			return 1;
		
		case 229:
			return 16;
		
		case 230:
			return 32;
		
		default:
	}
	switch (func_137(func_813(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_813(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 215:
			return 15;
		
		case 222:
			return 8;
		
		case 216:
			return 14;
		
		case 220:
			return 122;
		
		case 223:
			return 1;
		
		case 221:
			return 5;
		
		case 224:
			return 6;
		
		case 217:
			return 11;
		
		case 225:
			return 0;
		
		case 226:
			return 2;
		
		case 218:
			return 13;
		
		case 227:
			return 3;
		
		case 219:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 314;
		
		case 176:
			return 315;
		
		case 177:
			return 316;
		
		case 178:
			return 317;
		
		case 179:
			return 318;
		
		case 180:
			return 320;
		
		case 181:
			return 322;
		
		case 182:
			return 323;
		
		case 183:
			return 324;
		
		case 184:
			return 325;
		
		case 185:
			return 326;
		
		case 186:
			return 327;
		
		case 187:
			return 328;
		
		case 188:
			return 329;
		
		case 189:
			return 330;
		
		case 190:
			return 331;
		
		case 191:
			return 332;
		
		case 192:
			return 333;
		
		case 193:
			return 337;
		
		case 194:
			return 338;
		
		case 195:
			return 339;
		
		case 196:
			return 340;
		
		default:
	}
	if (bParam1)
	{
	}
	return 343;
}

