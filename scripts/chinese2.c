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
	var uLocal_28 = 0;
	int iLocal_29 = 0;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	char* sLocal_49 = NULL;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
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
	var uLocal_68 = 0;
	struct<3> Local_69 = { 0, 0, 0 } ;
	float fLocal_70 = 0f;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<165> Local_75 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char[] cLocal_76[8] = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	bool bLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_97 = { 0, 0, 0 } ;
	int iLocal_98 = 0;
	struct<5> Local_99[31];
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<5> Local_107[61];
	float fLocal_108 = 0f;
	int iLocal_109 = 0;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<33> Local_111[26];
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	struct<24> Local_117[26];
	struct<3> Local_118 = { 0, 0, 0 } ;
	struct<3> Local_119 = { 0, 0, 0 } ;
	struct<3> Local_120 = { 0, 0, 0 } ;
	struct<3> Local_121 = { 0, 0, 0 } ;
	struct<3> Local_122 = { 0, 0, 0 } ;
	struct<3> Local_123 = { 0, 0, 0 } ;
	struct<3> Local_124 = { 0, 0, 0 } ;
	struct<3> Local_125 = { 0, 0, 0 } ;
	struct<3> Local_126 = { 0, 0, 0 } ;
	struct<3> Local_127 = { 0, 0, 0 } ;
	struct<3> Local_128[21];
	char[] cLocal_129[8] = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	struct<6> Local_134[6];
	struct<18> Local_135[4];
	float fLocal_136 = 0f;
	int iLocal_137 = 0;
	int iLocal_138[4] = { 0, 0, 0, 0 };
	int iLocal_139[4] = { 0, 0, 0, 0 };
	struct<3> Local_140[13];
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	char* sLocal_149 = NULL;
	bool bLocal_150 = 0;
	struct<6> Local_151[20];
	int iLocal_152 = 0;
	var uLocal_153 = 0;
	int iLocal_154 = 0;
	float fLocal_155 = 0f;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	bool bLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	var uLocal_166 = 0;
	int iLocal_167[5] = { 0, 0, 0, 0, 0 };
	int iLocal_168[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_169 = 0;
	struct<3> Local_170 = { 0, 0, 0 } ;
	var uLocal_171 = 0;
	int iLocal_172 = 0;
	float fLocal_173 = 0f;
	var uLocal_174 = 0;
	int iLocal_175 = 0;
	var uLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	struct<7> Local_182 = { 0, 3, 0, 0, 0, 0, 0 } ;
	var uLocal_183 = 1092616192;
	var uLocal_184 = 1101004800;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 3;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 16;
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
	int iLocal_366 = 0;
	int iLocal_367 = 0;
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
	struct<3> Local_382[9];
	struct<10> Local_383[20];
	bool bLocal_384 = 0;
	int iLocal_385 = 0;
	struct<8> Local_386[27];
	struct<4> Local_387[5];
	struct<7> Local_388[17];
	struct<3> Local_389[4];
	int iLocal_390 = 0;
	char cLocal_391[24] = "";
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	struct<3> Local_395 = { 0, 0, 0 } ;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	char* sLocal_404 = NULL;
	char* sLocal_405 = NULL;
	int iLocal_406[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_407 = 16;
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
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
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
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	uLocal_47 = unk_0x8CC13B3BF7A9890A();
	uLocal_48 = unk_0x2A3612A4B836469E();
	iLocal_59 = -1;
	iLocal_60 = -1;
	bLocal_73 = true;
	iLocal_88 = -1;
	iLocal_91 = -1;
	fLocal_94 = 0,5f;
	fLocal_95 = 0f;
	iLocal_101 = 1;
	fLocal_108 = 160f;
	cLocal_129 = "CHI2AUD";
	iLocal_175 = -1;
	iLocal_377 = -1;
	unk_0x925970A93719CADE(1);
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_467();
		func_466(2);
	}
	fLocal_108 = 160f;
	while (true)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			func_135();
			func_133();
			if (iLocal_147 >= 7)
			{
				func_125();
			}
			func_123();
			func_84();
			func_3();
			func_2();
			func_1();
			unk_0xECF30459397D5190("m_Chinese2", 0);
		}
		iLocal_572 = 0;
		system::wait(0);
	}
}

void func_1()
{
	if (iLocal_400)
	{
		if (unk_0xD0B0D1BD29678350(iLocal_399))
		{
			unk_0x74C1590CC91B3930(iLocal_399);
			iLocal_400 = 0;
		}
	}
}

int func_2()
{
	if (iLocal_401)
	{
		if (iLocal_402)
		{
			if (unk_0x16088CC55E7F218A(sLocal_404))
			{
				if (unk_0x86A2BC11844DEEB3(sLocal_404))
				{
					iLocal_401 = 0;
					iLocal_402 = 0;
					return 1;
				}
			}
		}
		else if (unk_0x86A2BC11844DEEB3(sLocal_404))
		{
			iLocal_401 = 0;
			return 1;
		}
	}
	else if (iLocal_403)
	{
		if (unk_0x16088CC55E7F218A(sLocal_405))
		{
			iLocal_403 = 0;
		}
	}
	return 0;
}

void func_3()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_151.f_0)
	{
		if (Local_151[iVar0 /*6*/].f_1 == 1)
		{
			switch (Local_151[iVar0 /*6*/])
			{
				case 0:
					switch (Local_151[iVar0 /*6*/].f_2)
					{
						case 0:
							if (unk_0xFD216000DC314A92())
							{
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							func_75(1992,804f, 3053,31f, 45,77715f, 1989,681f, 3055,295f, 49,09001f, 3,25f, 1995,202f, 3062,156f, 46,0491f, 59,7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_75(1994,427f, 3045,136f, 45,34013f, 1981,903f, 3053,235f, 49,79153f, 9,5f, 1995,202f, 3062,156f, 46,0491f, 59,7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_75(1985,404f, 3075,057f, 44,84953f, 2017,102f, 3057,435f, 53,71896f, 33f, 1995,202f, 3062,156f, 46,0491f, 59,7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							iLocal_142 = unk_0xDC8D5832207C2EAD();
							if (func_74(iLocal_142) && func_73(iLocal_142, 1995,202f, 3062,156f, 46,0491f, 1) < 5f)
							{
								unk_0x7991957B46F22F47(unk_0x4B423FAA24E8ABF0(iLocal_142), 3);
							}
							Local_151[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 2:
					if (iLocal_147 >= 3)
					{
						Local_151[iVar0 /*6*/].f_2 = -1;
					}
					switch (Local_151[iVar0 /*6*/].f_2)
					{
						case -1:
							func_72();
							func_70();
							break;
						
						case 0:
							if (func_73(unk_0x4A8C381C258A124D(), 2442,55f, 4967,51f, 54,35f, 1) < 1300f || func_69(39))
							{
								if (func_73(unk_0x4A8C381C258A124D(), 2442,55f, 4967,51f, 54,35f, 1) > 500f)
								{
									Local_151[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 1:
							if (func_66("PHN2", 1, unk_0x4A8C381C258A124D(), "Trevor", 8, 0, "ONEIL", -1, 0, 0))
							{
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!func_65())
							{
								if (func_35("CHI2_ONEILPH", 1, unk_0x4A8C381C258A124D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_151[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
					}
					break;
				
				case 3:
					if (iLocal_147 >= 3)
					{
						Local_151[iVar0 /*6*/].f_2 = -1;
						Local_151[iVar0 /*6*/].f_1 = 0;
					}
					switch (Local_151[iVar0 /*6*/].f_2)
					{
						case 0:
							if (func_35("CHI2_boom", 1, unk_0x4A8C381C258A124D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_151[iVar0 /*6*/].f_2++;
							}
							iLocal_381 = 0;
							Local_151[iVar0 /*6*/].f_5 = unk_0x1DD05E817C89C737() + 3000;
							break;
						
						case 1:
							if (!func_65())
							{
								if (!func_34())
								{
									if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
									{
										if (unk_0x1DD05E817C89C737() > Local_151[iVar0 /*6*/].f_5)
										{
											if (iLocal_381 < 13)
											{
												if (func_35("DRI1", 2, unk_0x4A8C381C258A124D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													iLocal_381++;
													Local_151[iVar0 /*6*/].f_5 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(4000, 10000));
												}
											}
											else
											{
												Local_151[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						uVar1 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
						if (!unk_0x3F18810075C77D41(uVar1))
						{
							if (func_33(6f, 2))
							{
								unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
								Local_151[iVar0 /*6*/].f_1 = 0;
							}
						}
					}
					else
					{
						Local_151[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 5:
					switch (Local_151[iVar0 /*6*/].f_2)
					{
						case -20:
							if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 2460,073f, 4964,176f, 46,2405f, 1) < 250f)
							{
								unk_0xEC9DAA34BBB4658C(joaat("a_m_m_hillbilly_01"));
								unk_0xEC9DAA34BBB4658C(joaat("prop_pallet_pile_01"));
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -19:
							if (unk_0x6252BC0DD8A320DB(joaat("a_m_m_hillbilly_01")) && unk_0x6252BC0DD8A320DB(joaat("prop_pallet_pile_01")))
							{
								unk_0xEC9DAA34BBB4658C(joaat("a_m_m_hillbilly_02"));
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -18:
							if (unk_0x6252BC0DD8A320DB(joaat("a_m_m_hillbilly_02")))
							{
								unk_0xEC9DAA34BBB4658C(joaat("burrito"));
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -17:
							if (unk_0x6252BC0DD8A320DB(joaat("burrito")))
							{
								unk_0xEC9DAA34BBB4658C(joaat("a_m_y_methhead_01"));
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -16:
							if (unk_0x6252BC0DD8A320DB(joaat("a_m_y_methhead_01")))
							{
								unk_0xEC9DAA34BBB4658C(joaat("prop_ld_can_01"));
								unk_0xEC9DAA34BBB4658C(joaat("prop_cs_fertilizer"));
								unk_0xEC9DAA34BBB4658C(joaat("prop_cs_beer_bot_01"));
								unk_0xEC9DAA34BBB4658C(joaat("prop_phone_ing"));
								unk_0xEC9DAA34BBB4658C(joaat("dubsta"));
								unk_0x80813AC549A1E8AE("misschinese2_bank5");
								unk_0x80813AC549A1E8AE("misschinese2_bank1");
								unk_0x80813AC549A1E8AE("reaction@male_stand@big_variations@b");
								unk_0x80813AC549A1E8AE("reaction@male_stand@big_intro@left");
								unk_0x80813AC549A1E8AE("reaction@male_stand@big_intro@right");
								unk_0x80813AC549A1E8AE("reaction@male_stand@big_intro@backward");
								unk_0x80813AC549A1E8AE("misschinese2_barrelRoll");
								unk_0xA336AFF285251641("move_m@gangster@var_e");
								unk_0xA336AFF285251641("move_m@gangster@var_f");
								unk_0xA336AFF285251641("move_m@gangster@generic");
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -15:
							if (unk_0x6252BC0DD8A320DB(joaat("dubsta")))
							{
								func_32(22, 0);
								func_32(8, 0);
								unk_0xD1B0AF388B711EBC(Vector(44,8113f, 4961,045f, 2469,985f) - Vector(100f, 100f, 100f), Vector(44,8113f, 4961,045f, 2469,985f) + Vector(100f, 100f, 100f), 0, 1);
								Local_151[iVar0 /*6*/].f_2 = 1;
							}
							break;
						
						case 0:
							if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 2460,073f, 4964,176f, 46,2405f, 1) < 250f)
							{
								unk_0xEC9DAA34BBB4658C(joaat("a_m_m_hillbilly_01"));
								unk_0xEC9DAA34BBB4658C(joaat("a_m_m_hillbilly_02"));
								unk_0xEC9DAA34BBB4658C(joaat("a_m_y_methhead_01"));
								unk_0xEC9DAA34BBB4658C(joaat("prop_ld_can_01"));
								unk_0xEC9DAA34BBB4658C(joaat("prop_cs_fertilizer"));
								unk_0xEC9DAA34BBB4658C(joaat("burrito"));
								unk_0xEC9DAA34BBB4658C(joaat("prop_cs_beer_bot_01"));
								if (iLocal_147 <= 3)
								{
									unk_0xEC9DAA34BBB4658C(joaat("prop_phone_ing"));
									unk_0xEC9DAA34BBB4658C(joaat("dubsta"));
								}
								unk_0x80813AC549A1E8AE("misschinese2_bank5");
								unk_0x80813AC549A1E8AE("misschinese2_bank1");
								unk_0x80813AC549A1E8AE("reaction@male_stand@big_variations@b");
								unk_0x80813AC549A1E8AE("reaction@male_stand@big_intro@left");
								unk_0x80813AC549A1E8AE("reaction@male_stand@big_intro@right");
								unk_0x80813AC549A1E8AE("reaction@male_stand@big_intro@backward");
								unk_0x80813AC549A1E8AE("misschinese2_barrelRoll");
								unk_0xA336AFF285251641("move_m@gangster@var_e");
								unk_0xA336AFF285251641("move_m@gangster@var_f");
								unk_0xA336AFF285251641("move_m@gangster@generic");
								func_32(22, 0);
								func_32(8, 0);
								unk_0xD1B0AF388B711EBC(Vector(44,8113f, 4961,045f, 2469,985f) - Vector(100f, 100f, 100f), Vector(44,8113f, 4961,045f, 2469,985f) + Vector(100f, 100f, 100f), 0, 1);
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (((((((((((((((unk_0x6252BC0DD8A320DB(joaat("a_m_m_hillbilly_01")) && unk_0x6252BC0DD8A320DB(joaat("a_m_m_hillbilly_02"))) && unk_0x6252BC0DD8A320DB(joaat("a_m_y_methhead_01"))) && unk_0x6252BC0DD8A320DB(joaat("burrito"))) && unk_0x6252BC0DD8A320DB(joaat("prop_cs_fertilizer"))) && unk_0x6252BC0DD8A320DB(joaat("prop_cs_beer_bot_01"))) && unk_0x6252BC0DD8A320DB(joaat("prop_ld_can_01"))) && unk_0xE100DD4F82A51BDE("misschinese2_bank5")) && unk_0xE100DD4F82A51BDE("misschinese2_bank1")) && unk_0xE100DD4F82A51BDE("misschinese2_barrelRoll")) && unk_0xE100DD4F82A51BDE("reaction@male_stand@big_variations@b")) && unk_0xE100DD4F82A51BDE("reaction@male_stand@big_intro@left")) && unk_0xE100DD4F82A51BDE("reaction@male_stand@big_intro@right")) && unk_0xE100DD4F82A51BDE("reaction@male_stand@big_intro@backward")) && ((iLocal_147 <= 3 && unk_0x6252BC0DD8A320DB(joaat("prop_phone_ing"))) || iLocal_147 > 3)) && ((iLocal_147 <= 3 && unk_0x6252BC0DD8A320DB(joaat("dubsta"))) || iLocal_147 > 3))
							{
								Local_151[iVar0 /*6*/].f_2 = 4;
							}
							if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 2460,073f, 4964,176f, 46,2405f, 1) > 300f)
							{
								unk_0x55098D9E9AD58806(joaat("a_m_m_hillbilly_01"));
								unk_0x55098D9E9AD58806(joaat("a_m_m_hillbilly_02"));
								unk_0x55098D9E9AD58806(joaat("a_m_y_methhead_01"));
								unk_0x55098D9E9AD58806(joaat("burrito"));
								unk_0x55098D9E9AD58806(joaat("prop_cs_fertilizer"));
								unk_0x55098D9E9AD58806(joaat("prop_cs_beer_bot_01"));
								unk_0x55098D9E9AD58806(joaat("prop_ld_can_01"));
								unk_0x268BE77F77533D03("misschinese2_bank5");
								unk_0x268BE77F77533D03("misschinese2_bank1");
								unk_0x268BE77F77533D03("reaction@male_stand@big_variations@b");
								unk_0x268BE77F77533D03("reaction@male_stand@big_intro@left");
								unk_0x268BE77F77533D03("reaction@male_stand@big_intro@right");
								unk_0x268BE77F77533D03("reaction@male_stand@big_intro@backward");
								unk_0x268BE77F77533D03("misschinese2_barrelRoll");
								unk_0x13F0C01028B5EE7C("move_m@gangster@var_e");
								unk_0x13F0C01028B5EE7C("move_m@gangster@var_f");
								unk_0x13F0C01028B5EE7C("move_m@gangster@generic");
								unk_0x55098D9E9AD58806(joaat("prop_phone_ing"));
								unk_0x55098D9E9AD58806(joaat("dubsta"));
								unk_0xD1B0AF388B711EBC(Vector(44,8113f, 4961,045f, 2469,985f) - Vector(100f, 100f, 100f), Vector(44,8113f, 4961,045f, 2469,985f) + Vector(100f, 100f, 100f), 1, 1);
								func_31(22, 1);
								func_31(8, 1);
								if (iLocal_177 != 0)
								{
									unk_0xBBB6D0F765409642(iLocal_177);
									iLocal_177 = 0;
								}
								Local_151[iVar0 /*6*/].f_2 = -20;
							}
							break;
						
						case 4:
							if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 2460,073f, 4964,176f, 46,2405f, 1) > 300f)
							{
								Local_151[iVar0 /*6*/].f_2 = 1;
							}
							else if (iLocal_147 >= 3 && !func_30(22))
							{
								func_27();
								Local_151[iVar0 /*6*/].f_1 = 0;
							}
							break;
						
						case 5:
							break;
					}
					break;
				
				case 22:
					switch (Local_151[iVar0 /*6*/].f_2)
					{
						case -1:
							if (iLocal_177 != 0)
							{
								unk_0xBBB6D0F765409642(iLocal_177);
							}
							iLocal_177 = 0;
							break;
						
						case 0:
							iLocal_177 = unk_0x0E171121A3A25363(2440,492f, 4969,948f, 52,5247f);
							Local_151[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!unk_0xF8A8852F99E201DD(iLocal_177))
							{
								iLocal_177 = unk_0x0E171121A3A25363(2440,492f, 4969,948f, 52,5247f);
							}
							else
							{
								unk_0x74C1590CC91B3930(iLocal_177);
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							Local_151[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 6:
					switch (Local_151[iVar0 /*6*/].f_2)
					{
						case 0:
							func_19(50, 0, 0, 1, 0);
							func_19(51, 0, 0, 1, 0);
							func_19(52, 0, 0, 1, 0);
							func_19(53, 0, 0, 1, 0);
							func_19(54, 1, 0, 1, 0);
							Local_151[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							break;
					}
					break;
				
				case 7:
					if (Local_151[iVar0 /*6*/].f_2 == 0)
					{
						iVar2 = func_18(8);
						if (iVar2 != -1)
						{
							if (!unk_0x4FAFF4BCB7633475(Local_111[iVar2 /*33*/]))
							{
								if (unk_0x9B5C1660CCDF7189(Local_111[iVar2 /*33*/], joaat("script_task_synchronized_scene")) == 7)
								{
									iVar2 = func_18(9);
									if (iVar2 != -1)
									{
										if (!unk_0x4FAFF4BCB7633475(Local_111[iVar2 /*33*/]))
										{
											if (unk_0x9B5C1660CCDF7189(Local_111[iVar2 /*33*/], joaat("script_task_synchronized_scene")) == 7)
											{
												unk_0x268BE77F77533D03("misschinese2_bank5");
												Local_151[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							else
							{
								iVar2 = func_18(9);
								if (iVar2 != -1)
								{
									if (!unk_0x4FAFF4BCB7633475(Local_111[iVar2 /*33*/]))
									{
										if (unk_0x9B5C1660CCDF7189(Local_111[iVar2 /*33*/], joaat("script_task_synchronized_scene")) == 7)
										{
											unk_0x268BE77F77533D03("misschinese2_bank5");
											Local_151[iVar0 /*6*/].f_1 = 0;
										}
									}
									else
									{
										unk_0x268BE77F77533D03("misschinese2_bank5");
									}
								}
							}
						}
					}
					break;
				
				case 8:
					switch (Local_151[iVar0 /*6*/].f_2)
					{
						case -1:
							unk_0x830C51B62E7CD5B2();
							break;
						
						case 0:
							unk_0xA7B0B03284E7503C(Vector(58,6179f, 4972,897f, 2445,654f) - Vector(100f, 100f, 100f), Vector(58,6179f, 4972,897f, 2445,654f) + Vector(100f, 100f, 100f), 0, 1, 1, 1, 1);
							Local_151[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
							{
								if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 2473,061f, 4981,482f, 24,64584f, 1) < 250f)
								{
									Local_151[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							unk_0xF9A2335AB37CF17E(0f);
							unk_0xA0265306DFF63938(0f);
							unk_0x0397A00D015A11D4(0f, 0f);
							if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 2473,061f, 4981,482f, 24,64584f, 1) > 250f)
							{
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
					}
					break;
				
				case 9:
					switch (Local_151[iVar0 /*6*/].f_2)
					{
						case -1:
							unk_0xCC1C92F7E1A3CE9D(3, 1);
							unk_0xCC1C92F7E1A3CE9D(5, 1);
							unk_0xCC1C92F7E1A3CE9D(1, 1);
							unk_0xCC1C92F7E1A3CE9D(7, 1);
							break;
						
						case 0:
							if (func_73(unk_0x4A8C381C258A124D(), 2578,523f, 4982,284f, 51,4416f, 1) < 500f)
							{
								unk_0xCC1C92F7E1A3CE9D(3, 0);
								unk_0xCC1C92F7E1A3CE9D(5, 0);
								unk_0xCC1C92F7E1A3CE9D(1, 0);
								unk_0xCC1C92F7E1A3CE9D(7, 0);
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (func_73(unk_0x4A8C381C258A124D(), 2578,523f, 4982,284f, 51,4416f, 1) > 500f)
							{
								unk_0xCC1C92F7E1A3CE9D(3, 1);
								unk_0xCC1C92F7E1A3CE9D(5, 1);
								unk_0xCC1C92F7E1A3CE9D(1, 1);
								unk_0xCC1C92F7E1A3CE9D(7, 1);
								Local_151[iVar0 /*6*/].f_2 = 0;
							}
							break;
					}
					break;
				
				case 25:
					switch (Local_151[iVar0 /*6*/].f_2)
					{
						case 0:
							func_17(unk_0x4A8C381C258A124D(), 149);
							Local_151[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								iVar3 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
								func_17(iVar3, 152);
								func_16(iVar3, -1);
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								func_17(0, 152);
								func_16(0, -1);
								Local_151[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
					break;
				
				case 14:
					switch (Local_151[iVar0 /*6*/].f_2)
					{
						case 0:
							Local_151[iVar0 /*6*/].f_5 = unk_0x1DD05E817C89C737() + 7000;
							Local_151[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0x1DD05E817C89C737() > Local_151[iVar0 /*6*/].f_5)
							{
								unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2466,385f, 4953,096f, 44,1228f, 1, 0, 0, 1);
								unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 221f);
								unk_0x63C8DCBEC1CF8225(unk_0x4A8C381C258A124D(), 2475,075f, 4945,965f, 44,0228f, 1f, 20000, 1193033728, 1056964608);
								unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Walk"), 0, 0, 0);
								Local_151[iVar0 /*6*/].f_1 = 0;
							}
							break;
					}
					break;
				
				case 13:
					if (unk_0xB3157976738FC0C0("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
					{
						unk_0x64B3EF30EAA9FBA3();
						Local_151[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 12:
					switch (Local_151[iVar0 /*6*/].f_2)
					{
						case 0:
							uLocal_171 = unk_0xC8C12645F5A0E13B(2457,15f, 4968,79f, 48,677f, 45f, "DES_FarmHs");
							if (unk_0x502101046E18AD3F(uLocal_171))
							{
								unk_0xBF86159B8525B1AE(uLocal_171, 2);
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0xEB4069FA281FFD9B(uLocal_171) == 3)
							{
								unk_0xBF86159B8525B1AE(uLocal_171, 4);
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (iLocal_172 == 1)
							{
								if (unk_0xEB4069FA281FFD9B(uLocal_171) == 5)
								{
									unk_0xBF86159B8525B1AE(uLocal_171, 6);
									unk_0xCAC4020CCF361AC8("CHI_2_RAYFIRE");
									unk_0xE226F16D30AF5945(2457,15f, 4968,79f, 48,677f, 100f, joaat("v_ret_fhglassfrm"), 1);
									unk_0xE226F16D30AF5945(2457,15f, 4968,79f, 48,677f, 100f, joaat("v_ret_fhglassfrmsml"), 1);
									unk_0xE226F16D30AF5945(2457,15f, 4968,79f, 48,677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
									Local_151[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 3:
							func_15("CHN2_EXPLODE", 1, "CHN2_EXPLODE");
							Local_151[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 16:
					if (Local_151[iVar0 /*6*/].f_2 != -1)
					{
						if (!unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"), 0) || !unk_0xB0E14182FAD64944(uLocal_174))
						{
							iLocal_178 = unk_0x8366ABB82B1ABC59(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 20f, unk_0xA0A2925EDC6DDA6D(joaat("weapon_petrolcan")), 0, 0, 1);
							if (iLocal_178 != 0)
							{
								if (unk_0xC450B06E5AAA0985(uLocal_176))
								{
									unk_0xFE54B8568B2ABD12(&uLocal_176);
								}
								uLocal_176 = func_13(iLocal_178);
								func_12(1);
								func_11(0, 157);
							}
						}
						else
						{
							Local_151[iVar0 /*6*/].f_5 = 0;
							func_12(0);
							if (unk_0xC450B06E5AAA0985(uLocal_176))
							{
								unk_0xFE54B8568B2ABD12(&uLocal_176);
							}
							func_10(157, 0);
							if (iLocal_165 == 0)
							{
								iLocal_165 = unk_0x1149D67DB429787A(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"));
							}
							else
							{
								func_9(158, (iLocal_165 - unk_0x1149D67DB429787A(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"))), 1);
							}
						}
						if (func_8())
						{
							func_11(0, 157);
							Local_151[iVar0 /*6*/].f_1 = 0;
							func_32(17, 0);
						}
					}
					break;
				
				case 18:
					break;
				
				case 17:
					if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2447,671f, 4951,438f, 43,25576f, 2454,664f, 4957,856f, 47,89117f, 6,8125f, 0, 1, 0) && unk_0x1DD05E817C89C737() > Local_151[iVar0 /*6*/].f_5)
					{
						if (unk_0xC450B06E5AAA0985(uLocal_176))
						{
							unk_0xFE54B8568B2ABD12(&uLocal_176);
						}
						Local_151[iVar0 /*6*/].f_1 = 0;
					}
					else
					{
						switch (Local_151[iVar0 /*6*/].f_2)
						{
							case 0:
								if (!func_65())
								{
									func_7("FRMSHP", 7500, 1);
									Local_151[iVar0 /*6*/].f_5 = unk_0x1DD05E817C89C737() + 2000;
									uLocal_176 = func_5(2450f, 4954f, 45f, 0);
									Local_151[iVar0 /*6*/].f_2++;
								}
								break;
							}
					}
					break;
				
				case 20:
					if (!BitTest(Local_151[iVar0 /*6*/].f_5, 0))
					{
						iLocal_378 = func_18(4);
						if (iLocal_378 != -1)
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), false);
						}
					}
					else if (!BitTest(Local_151[iVar0 /*6*/].f_5, 1))
					{
						if (!unk_0x4FAFF4BCB7633475(Local_111[iLocal_378 /*33*/]) && unk_0xFC8BFE4B41177C22(Local_111[iLocal_378 /*33*/].f_20))
						{
							if (unk_0x13CCB1AD131C1082(Local_111[iLocal_378 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) && unk_0xA3736D76B0E93E93(Local_111[iLocal_378 /*33*/].f_20))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), true);
							}
						}
					}
					else if (!BitTest(Local_151[iVar0 /*6*/].f_5, 2))
					{
						if (unk_0x4FAFF4BCB7633475(Local_111[iLocal_378 /*33*/]))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), 2);
						}
						if (!unk_0x4FAFF4BCB7633475(Local_111[iLocal_378 /*33*/]))
						{
							if (!unk_0x13CCB1AD131C1082(Local_111[iLocal_378 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), 2);
							}
							if (unk_0x9B5C1660CCDF7189(Local_111[iLocal_378 /*33*/], joaat("script_task_play_anim")) == 2 || unk_0x9B5C1660CCDF7189(Local_111[iLocal_378 /*33*/], joaat("script_task_play_anim")) == 7)
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), 2);
							}
							if (unk_0x1B32E388988DD296(Local_111[iLocal_378 /*33*/], unk_0x4A8C381C258A124D()) || Local_117[iLocal_378 /*24*/].f_3 > 3)
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), 2);
							}
						}
					}
					else if (unk_0xFC8BFE4B41177C22(Local_111[iLocal_378 /*33*/].f_20) && unk_0xA3736D76B0E93E93(Local_111[iLocal_378 /*33*/].f_20))
					{
						unk_0x837D67618BF89034(Local_111[iLocal_378 /*33*/].f_20, 0, 0);
					}
					if (!BitTest(Local_151[iVar0 /*6*/].f_5, 4))
					{
						iLocal_379 = func_18(5);
						if (iLocal_379 != -1)
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), 4);
						}
					}
					else if (!BitTest(Local_151[iVar0 /*6*/].f_5, 5))
					{
						if (!unk_0x4FAFF4BCB7633475(Local_111[iLocal_379 /*33*/]))
						{
							if (unk_0xFC8BFE4B41177C22(Local_111[iLocal_379 /*33*/].f_20))
							{
								if (unk_0x13CCB1AD131C1082(Local_111[iLocal_379 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									if (unk_0xA3736D76B0E93E93(Local_111[iLocal_379 /*33*/].f_20))
									{
										unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), 5);
									}
								}
							}
						}
					}
					else if (!BitTest(Local_151[iVar0 /*6*/].f_5, 6))
					{
						if (unk_0x4FAFF4BCB7633475(Local_111[iLocal_379 /*33*/]))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), 6);
						}
						if (!unk_0x4FAFF4BCB7633475(Local_111[iLocal_379 /*33*/]))
						{
							if (!unk_0x13CCB1AD131C1082(Local_111[iLocal_379 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), 6);
							}
							if (unk_0x9B5C1660CCDF7189(Local_111[iLocal_379 /*33*/], joaat("script_task_play_anim")) == 2 || unk_0x9B5C1660CCDF7189(Local_111[iLocal_379 /*33*/], joaat("script_task_play_anim")) == 7)
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), 6);
							}
							if (unk_0x1B32E388988DD296(Local_111[iLocal_379 /*33*/], unk_0x4A8C381C258A124D()) || Local_117[iLocal_379 /*24*/].f_3 > 3)
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), 6);
							}
						}
					}
					else if (unk_0xFC8BFE4B41177C22(Local_111[iLocal_379 /*33*/].f_20) && unk_0xA3736D76B0E93E93(Local_111[iLocal_379 /*33*/].f_20))
					{
						unk_0x837D67618BF89034(Local_111[iLocal_379 /*33*/].f_20, 0, 0);
					}
					break;
				
				case 21:
					break;
				
				case 23:
					iVar4 = 0;
					switch (Local_151[iVar0 /*6*/].f_2)
					{
						case 1:
							iLocal_168[0] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_can_01"), 2494,496f, 4970,916f, 44,5112f, 1, 1, 0, 0);
							unk_0xCF39804E8C88080E(iLocal_168[0], -3,44f, 0f, 38,88f, 2, 1);
							iLocal_168[1] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_can_01"), 2494,863f, 4970,595f, 44,5425f, 1, 1, 0, 0);
							unk_0xCF39804E8C88080E(iLocal_168[1], -3,44f, 0f, 38,88f, 2, 1);
							iLocal_168[2] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_can_01"), 2494,896f, 4970,417f, 44,5475f, 1, 1, 0, 0);
							unk_0xCF39804E8C88080E(iLocal_168[2], -3,44f, 0f, 38,88f, 2, 1);
							iLocal_168[3] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_can_01"), 2494,795f, 4970,246f, 44,5525f, 1, 1, 0, 0);
							unk_0xCF39804E8C88080E(iLocal_168[3], -3,44f, 0f, 38,88f, 2, 1);
							iLocal_168[4] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_can_01"), 2494,204f, 4970,269f, 44,5201f, 1, 1, 0, 0);
							unk_0xCF39804E8C88080E(iLocal_168[4], -3,44f, 0f, 38,88f, 2, 1);
							iLocal_168[5] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_can_01"), 2494,372f, 4970,744f, 44,51f, 1, 1, 0, 0);
							unk_0xCF39804E8C88080E(iLocal_168[5], -3,44f, 0f, 38,88f, 2, 1);
							iLocal_168[6] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_can_01"), 2494,372f, 4971,092f, 44,4987f, 1, 1, 0, 0);
							unk_0xCF39804E8C88080E(iLocal_168[6], -3,44f, 0f, 38,88f, 2, 1);
							iLocal_168[7] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_can_01"), 2493,77f, 4971f, 44,6287f, 1, 1, 0, 0);
							unk_0xCF39804E8C88080E(iLocal_168[7], 3,955f, 0f, 139,68f, 2, 1);
							iLocal_168[8] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_can_01"), 2493,98f, 4971,279f, 44,6038f, 1, 1, 0, 0);
							unk_0xCF39804E8C88080E(iLocal_168[8], 3,955f, 0f, 139,68f, 2, 1);
							iLocal_168[9] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_can_01"), 2494,104f, 4971,438f, 44,5826f, 1, 1, 0, 0);
							unk_0xCF39804E8C88080E(iLocal_168[9], 3,955f, 0f, 139,68f, 2, 1);
							iVar4 = 0;
							while (iVar4 < iLocal_168)
							{
								unk_0xC7D381E526A969D3(iLocal_168[iVar4], 1);
								unk_0x5D7CD709B34C90F0(iLocal_168[iVar4], 1);
								iVar4++;
							}
							Local_151[iVar0 /*6*/].f_2++;
							break;
						
						case 0:
							if (!unk_0xFC8BFE4B41177C22(iLocal_179) && !unk_0xFC8BFE4B41177C22(iLocal_180))
							{
								if (unk_0xE10356B235A70E70(2493,5f, 4969,2f, 43,9f, 1f, joaat("prop_barrel_pile_03"), 0) && unk_0xE10356B235A70E70(2493,4f, 4971,8f, 43,6f, 1f, joaat("prop_pallet_pile_01"), 0))
								{
									iLocal_179 = unk_0x8366ABB82B1ABC59(2493,5f, 4969,2f, 43,9f, 1f, joaat("prop_barrel_pile_03"), 1, 0, 1);
									unk_0x5D7CD709B34C90F0(iLocal_179, 1);
									unk_0xE226F16D30AF5945(2493,4f, 4971,8f, 43,6f, 1f, joaat("prop_pallet_pile_01"), 0);
									iLocal_180 = unk_0x4E55EAB577C13329(joaat("prop_pallet_pile_01"), 2493,427f, 4971,729f, 43,54362f, 1, 1, 0);
									unk_0xCF39804E8C88080E(iLocal_180, -1,436373f, 0,176147f, -36,6601f, 2, 1);
									unk_0x5D7CD709B34C90F0(iLocal_180, 1);
									func_32(24, 0);
									Local_151[iVar0 /*6*/].f_2++;
								}
							}
							else
							{
								unk_0x51C8BEA2005931AB(&iLocal_180);
								iLocal_180 = unk_0x4E55EAB577C13329(joaat("prop_pallet_pile_01"), 2493,427f, 4971,729f, 43,54362f, 1, 1, 0);
								unk_0xCF39804E8C88080E(iLocal_180, -1,436373f, 0,176147f, -36,6601f, 2, 1);
								unk_0x5D7CD709B34C90F0(iLocal_180, 1);
								func_32(24, 0);
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							iVar4 = 0;
							iVar4 = 0;
							while (iVar4 < iLocal_168)
							{
								if (unk_0xFC8BFE4B41177C22(iLocal_168[iVar4]))
								{
									unk_0x5D7CD709B34C90F0(iLocal_168[iVar4], 0);
								}
								iVar4++;
							}
							Local_151[iVar0 /*6*/].f_1 = 0;
							Local_151[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 24:
					if (!BitTest(Local_151[iVar0 /*6*/].f_5, 0))
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_179))
						{
							if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
							{
								if (unk_0x9B3D4335E0EDB0BE(iLocal_179, unk_0x4A8C381C258A124D(), 1) || func_4(unk_0x4A8C381C258A124D(), iLocal_179, 1) < 30f)
								{
									unk_0x5D7CD709B34C90F0(iLocal_179, 0);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), false);
								}
							}
						}
					}
					if (!BitTest(Local_151[iVar0 /*6*/].f_5, 1))
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_180))
						{
							if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
							{
								if (unk_0x9B3D4335E0EDB0BE(iLocal_180, unk_0x4A8C381C258A124D(), 1) || func_4(unk_0x4A8C381C258A124D(), iLocal_180, 1) < 30f)
								{
									unk_0x5D7CD709B34C90F0(iLocal_180, 0);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), true);
								}
							}
						}
					}
					if ((BitTest(Local_151[iVar0 /*6*/].f_5, 0) && BitTest(Local_151[iVar0 /*6*/].f_5, 1)) || iLocal_147 == 6)
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_179))
						{
							unk_0x5D7CD709B34C90F0(iLocal_179, 0);
						}
						if (unk_0xFC8BFE4B41177C22(iLocal_180))
						{
							unk_0x5D7CD709B34C90F0(iLocal_180, 0);
						}
						Local_151[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 26:
					switch (Local_151[iVar0 /*6*/].f_2)
					{
						case -1:
							if (unk_0xFC8BFE4B41177C22(Local_111[12 /*33*/]))
							{
								unk_0x734A9F4537A31459(&(Local_111[12 /*33*/]));
							}
							if (unk_0xFC8BFE4B41177C22(Local_111[13 /*33*/]))
							{
								unk_0x734A9F4537A31459(&(Local_111[13 /*33*/]));
							}
							if (unk_0xFC8BFE4B41177C22(Local_111[14 /*33*/]))
							{
								unk_0x734A9F4537A31459(&(Local_111[14 /*33*/]));
							}
							unk_0x55098D9E9AD58806(joaat("ig_janet"));
							unk_0x55098D9E9AD58806(joaat("ig_old_man1a"));
							unk_0x55098D9E9AD58806(joaat("ig_old_man2"));
							Local_151[iVar0 /*6*/].f_1 = 0;
							break;
						
						case 0:
							unk_0x80813AC549A1E8AE("MISSChinese2_crystalMazeMCS1_IG");
							Local_151[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0xE100DD4F82A51BDE("MISSChinese2_crystalMazeMCS1_IG"))
							{
								if (unk_0xC9BA6D804FA4FAAA() || !unk_0xFD216000DC314A92())
								{
									if (unk_0xFC8BFE4B41177C22(Local_111[13 /*33*/]) && !unk_0x4FAFF4BCB7633475(Local_111[13 /*33*/]))
									{
										unk_0xB2BD5837A8D3CEDA(Local_111[13 /*33*/], 1986,06f, 3051,708f, 46,2151f, 1, 0, 0, 1);
									}
									if (unk_0xFC8BFE4B41177C22(Local_111[14 /*33*/]) && !unk_0x4FAFF4BCB7633475(Local_111[14 /*33*/]))
									{
										unk_0xB2BD5837A8D3CEDA(Local_111[14 /*33*/], 1986,105f, 3051,659f, 46,2151f, 1, 0, 0, 1);
									}
									Local_151[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							if (unk_0x81E5E9AE1379B068(1984,89f, 3052,46f, 46,98f, 0,3f, 1) && unk_0x81E5E9AE1379B068(1985,322f, 3053,087f, 46,98f, 0,3f, 1))
							{
								if (!unk_0xFC8BFE4B41177C22(Local_111[13 /*33*/]))
								{
									Local_111[13 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("ig_old_man1a"), 1987,231f, 3052,741f, 46,214f, 0, 1, 1);
								}
								if (!unk_0xFC8BFE4B41177C22(Local_111[14 /*33*/]))
								{
									Local_111[14 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("ig_old_man2"), 1987,231f, 3052,741f, 46,214f, 0, 1, 1);
								}
								if (!unk_0xFC8BFE4B41177C22(Local_111[12 /*33*/]))
								{
									Local_111[12 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("ig_janet"), 1987,231f, 3052,741f, 46,214f, 0, 1, 1);
								}
								unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), true);
								unk_0xCDA51E8BE6E5790A(Local_111[14 /*33*/], 1984,89f, 3052,46f, 46,98f, 0,3f, 0);
								unk_0xD8ED11B32DF72E0B(Local_111[14 /*33*/], 1, 1);
								unk_0xAAA71DD7E9059338(Local_111[14 /*33*/], 0);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), false);
								unk_0xCDA51E8BE6E5790A(Local_111[13 /*33*/], 1985,322f, 3053,087f, 46,98f, 0,3f, 0);
								unk_0xD8ED11B32DF72E0B(Local_111[13 /*33*/], 1, 1);
								unk_0xAAA71DD7E9059338(Local_111[13 /*33*/], 0);
								if (!unk_0x5266F1D2AEF6F73A(Local_151[iVar0 /*6*/].f_5))
								{
									Local_151[iVar0 /*6*/].f_5 = unk_0x2EC137C692A52458(1987,231f, 3052,741f, 46,214f, 0f, 0f, 57,6f, 2);
									unk_0xBF3497E24DEAD835(Local_151[iVar0 /*6*/].f_5, 1);
								}
								unk_0x3DA436E63AB0F541(Local_111[12 /*33*/], Local_151[iVar0 /*6*/].f_5, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_janet", 1000f, -1000f, 1, 0, 1148846080, 0);
								unk_0xD8ED11B32DF72E0B(Local_111[12 /*33*/], 1, 1);
								unk_0xAAA71DD7E9059338(Local_111[12 /*33*/], 0);
								Local_151[iVar0 /*6*/].f_5 = 0;
								Local_151[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 3:
							if (unk_0xC9BA6D804FA4FAAA() || !unk_0xFD216000DC314A92())
							{
							}
							if (!unk_0x4FAFF4BCB7633475(Local_111[13 /*33*/]) && !unk_0x4FAFF4BCB7633475(Local_111[14 /*33*/]))
							{
								unk_0x0428AFDCAA63B06E(Local_111[13 /*33*/], 152, 1);
								unk_0x0428AFDCAA63B06E(Local_111[14 /*33*/], 152, 1);
								if (BitTest(Local_151[iVar0 /*6*/].f_5, 0) && BitTest(Local_151[iVar0 /*6*/].f_5, 1))
								{
									Local_151[iVar0 /*6*/].f_2++;
								}
								else
								{
									if (unk_0x9B5C1660CCDF7189(Local_111[13 /*33*/], joaat("script_task_start_scenario_in_place")) != 1)
									{
										if (unk_0x81E5E9AE1379B068(1984,89f, 3052,46f, 46,98f, 0,3f, 1))
										{
											unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), false);
											unk_0xCDA51E8BE6E5790A(Local_111[13 /*33*/], 1984,89f, 3052,46f, 46,98f, 0,3f, 0);
											unk_0xAAA71DD7E9059338(Local_111[13 /*33*/], 0);
										}
									}
									else
									{
										unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), false);
									}
									if (unk_0x9B5C1660CCDF7189(Local_111[14 /*33*/], joaat("script_task_start_scenario_in_place")) != 1)
									{
										if (unk_0x81E5E9AE1379B068(1985,322f, 3053,087f, 46,98f, 0,3f, 1))
										{
											unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), true);
											unk_0xCDA51E8BE6E5790A(Local_111[14 /*33*/], 1985,322f, 3053,087f, 46,98f, 0,3f, 0);
											unk_0xAAA71DD7E9059338(Local_111[14 /*33*/], 0);
										}
									}
									else
									{
										unk_0x0B0C9A0F9AAEB7F0(&(Local_151[iVar0 /*6*/].f_5), true);
									}
								}
							}
							break;
						
						case 4:
							if (func_73(unk_0x4A8C381C258A124D(), 1991,419f, 3054,915f, 47,533f, 1) > 150f)
							{
								Local_151[iVar0 /*6*/].f_2 = -1;
							}
							break;
						
						case 6:
							if (!unk_0x4FAFF4BCB7633475(Local_111[12 /*33*/]))
							{
								unk_0xD844F5E50DAB6FF7(Local_111[12 /*33*/], unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
								unk_0x44FB298D6382876D(Local_111[12 /*33*/], 1);
								unk_0xF09E30AF1B8FB379(&(Local_111[12 /*33*/]));
							}
							if (!unk_0x4FAFF4BCB7633475(Local_111[13 /*33*/]))
							{
								unk_0xD844F5E50DAB6FF7(Local_111[13 /*33*/], unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
								unk_0x44FB298D6382876D(Local_111[13 /*33*/], 1);
								unk_0xF09E30AF1B8FB379(&(Local_111[13 /*33*/]));
							}
							if (!unk_0x4FAFF4BCB7633475(Local_111[14 /*33*/]))
							{
								unk_0xD844F5E50DAB6FF7(Local_111[14 /*33*/], unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
								unk_0x44FB298D6382876D(Local_111[14 /*33*/], 1);
								unk_0xF09E30AF1B8FB379(&(Local_111[14 /*33*/]));
							}
							Local_151[iVar0 /*6*/].f_2 = 7;
							break;
						
						case 7:
							if (func_73(unk_0x4A8C381C258A124D(), 1991,419f, 3054,915f, 47,533f, 1) > 150f)
							{
								Local_151[iVar0 /*6*/].f_2 = -1;
							}
							break;
					}
					break;
				
				case 27:
					unk_0x9D23D954FF4403CD(2444,176f, 4974,077f, 56,4066f, 30f, joaat("v_ilev_fh_door03"), 1);
					unk_0x9D23D954FF4403CD(2444,176f, 4974,077f, 56,4066f, 30f, joaat("v_ilev_fh_frntdoor"), 1);
					Local_151[iVar0 /*6*/].f_1 = 0;
					break;
				
				case 29:
					break;
			}
			if (Local_151[iVar0 /*6*/].f_2 == -1)
			{
				Local_151[iVar0 /*6*/].f_1 = 0;
				Local_151[iVar0 /*6*/].f_2 = 0;
				Local_151[iVar0 /*6*/].f_3 = 0;
				Local_151[iVar0 /*6*/].f_4 = 0;
				Local_151[iVar0 /*6*/].f_5 = 0;
			}
		}
		iVar0++;
	}
}

float func_4(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Var1, iParam2);
}

var func_5(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_6(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
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
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 0);
}

int func_8()
{
	if (iLocal_91 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_76261)
	{
		if (Global_76262[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_76262[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_76262[iVar0 /*9*/].f_1 = (Global_76262[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_76262[iVar0 /*9*/] != -1)
	{
		if (Global_64391[Global_76262[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_76262[iVar0 /*9*/].f_1 > 1)
			{
				Global_76262[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_76262[iVar0 /*9*/].f_1 < 0)
			{
				Global_76262[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_64176 = iParam0;
	if (!Global_64174)
	{
		Global_64174 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_76261)
		{
			if (Global_76262[iVar0 /*9*/] == iParam0)
			{
				Global_76262[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_64174)
	{
	}
	Global_64174 = 0;
	if (bParam0)
	{
		Global_64175 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_76261)
		{
			if (Global_64391[Global_76262[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_76262[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_76261)
		{
			if (Global_76262[iVar0 /*9*/] > 0)
			{
				if (Global_76262[iVar0 /*9*/] == iParam1)
				{
					Global_76262[iVar0 /*9*/].f_5 = 0;
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
	
	if (iParam0 == 1)
	{
		if (iLocal_84 == 0)
		{
			iVar0 = 0;
			while (iVar0 < Local_107.f_0)
			{
				if (unk_0xC450B06E5AAA0985(Local_107[iVar0 /*5*/].f_3))
				{
					if (unk_0xF03FBAFA0284124E(Local_107[iVar0 /*5*/].f_3) < 255)
					{
						unk_0xFE54B8568B2ABD12(&(Local_107[iVar0 /*5*/].f_3));
					}
					else
					{
						unk_0xF42EBD7CD0682A8B(Local_107[iVar0 /*5*/].f_3, 0);
					}
				}
				iVar0++;
			}
			iLocal_84 = 1;
		}
	}
	else if (iLocal_84)
	{
		iVar0 = 0;
		while (iVar0 < Local_107.f_0)
		{
			if (unk_0xC450B06E5AAA0985(Local_107[iVar0 /*5*/].f_3))
			{
				unk_0xF42EBD7CD0682A8B(Local_107[iVar0 /*5*/].f_3, 255);
			}
			else
			{
				Local_107[iVar0 /*5*/].f_3 = func_5(Local_107[iVar0 /*5*/], 0);
				unk_0xA1DFF583C8070610(Local_107[iVar0 /*5*/].f_3, 1);
				unk_0x5D3946F818C6B331(Local_107[iVar0 /*5*/].f_3, 0,4f);
				unk_0xF42EBD7CD0682A8B(Local_107[iVar0 /*5*/].f_3, 0);
				unk_0x61183D6239A9D7B8(Local_107[iVar0 /*5*/].f_3, 5);
				unk_0x89FE619BFBB2024B(Local_107[iVar0 /*5*/].f_3, 0);
			}
			iVar0++;
		}
		iLocal_84 = 0;
	}
}

int func_13(int iParam0)
{
	return func_14(iParam0, 1, 0);
}

int func_14(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_6(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, bParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(uVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_6(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_6(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

void func_15(char* sParam0, int iParam1, char* sParam2)
{
	iLocal_401 = 1;
	iLocal_402 = iParam1;
	sLocal_404 = sParam0;
	sLocal_405 = sParam2;
}

void func_16(int iParam0, int iParam1)
{
	Global_64177 = iParam0;
	Global_64178 = iParam1;
}

void func_17(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_64179 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_76261)
	{
		if (iParam1 == -1 || Global_76262[iVar0 /*9*/] == iParam1)
		{
			if (Global_76262[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_76262[iVar0 /*9*/].f_6 = iParam0;
				Global_76262[iVar0 /*9*/].f_7 = 1;
				Global_76262[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

int func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_111.f_0)
	{
		if (Local_111[iVar0 /*33*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_19(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_79389)
		{
			Global_43576.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_113969.f_7264.f_227[iParam0] = iParam1;
		}
		Global_40582[iParam0] = iParam2;
		Global_40781[iParam0] = 1;
		func_22(iParam0, bParam3, iParam4, 0);
		func_20(iParam0, iParam1);
	}
}

void func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0xCD04ECE71F3A9215("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0xCD04ECE71F3A9215("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x6866AF3D8691EDC0("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x6866AF3D8691EDC0("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_21(0, 0);
			}
			else
			{
				func_21(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0xCD04ECE71F3A9215("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0xCD04ECE71F3A9215("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0xFAF6BF5476CB00A8("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0xC897319696131088("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0xC897319696131088("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0xC897319696131088("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0xC897319696131088("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_21(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_112604, bParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_112604, bParam0);
	}
	Global_112603 = 1;
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
	
	Global_1919037 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_26(&Var3, iParam0);
	if (func_23())
	{
		iVar1 = Global_113969.f_7264.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_43576.f_227[iParam0];
	}
	iVar2 = Global_40980[iParam0];
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !bParam3)
	{
		Global_1919037 = 1;
	}
	else
	{
		bVar5 = true;
		if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) != unk_0x70E57E9927B6BA58("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_40582[iParam0] && unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var3, 1) < 200f)
				{
					bVar5 = false;
					Global_1919037 = 1;
				}
				if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || unk_0x7FB6C108C1694163(unk_0x4A8C381C258A124D()))
				{
					if (!unk_0x15CCE8886267624F())
					{
						bVar5 = false;
						Global_1919037 = 1;
					}
				}
			}
		}
		if (unk_0x787F8EE1F6FBDC6D() && (!unk_0x3555462DB47B7AB1() || unk_0x6D231A0D52134FC1() != 5))
		{
			bVar5 = false;
			Global_1919037 = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0xC94AE68759E1B3BD(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0xE226F16D30AF5945(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_42176[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[1 /*8*/]));
								Global_1919037 = 1;
							}
						}
						if ((unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES")) && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[2 /*8*/]));
								Global_1919037 = 1;
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(""))
						{
							if (!unk_0x5AEB336317DC4151(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xECFC57F5F11BCD83(&(Var3.f_8[0 /*8*/]));
								Global_1919037 = 1;
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_34)) != unk_0x70E57E9927B6BA58(""))
						{
							if (!unk_0x5AEB336317DC4151(&(Var3.f_34)))
							{
								unk_0xECFC57F5F11BCD83(&(Var3.f_34));
								Global_1919037 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x70E57E9927B6BA58(&(Var3.f_34)) != unk_0x70E57E9927B6BA58(""))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_34)))
							{
								unk_0x5373E9377066509E(&(Var3.f_34));
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES")) && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(""))
						{
							if (!unk_0x5AEB336317DC4151(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xECFC57F5F11BCD83(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x70E57E9927B6BA58(&(Var3.f_34)) != unk_0x70E57E9927B6BA58(""))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_34)))
							{
								unk_0x5373E9377066509E(&(Var3.f_34));
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES"))
						{
							if (!unk_0x5AEB336317DC4151(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xECFC57F5F11BCD83(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_41977[iParam0] = 1;
					Global_42176[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = unk_0x0556019E7EE8EC9A(Var3, &(Var3.f_42));
					if (iVar6 != 0)
					{
						if (unk_0x70E57E9927B6BA58(&(Var3.f_50)) != unk_0x70E57E9927B6BA58(""))
						{
							if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_50)))
							{
								unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES")) && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (!unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x907994FF361E5295(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES")) && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (!unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x907994FF361E5295(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES"))
							{
								if (!unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x907994FF361E5295(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xEEC112F70F9E6543(iVar6);
						}
					}
					Global_42176[iParam0] = 1;
					Global_41977[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0xED977E2AE2CB16EE(Var3, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 1) < 250f)
					{
						uVar4 = unk_0xC8C12645F5A0E13B(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0x502101046E18AD3F(uVar4))
						{
							if (iVar1 == 0)
							{
								unk_0xBF86159B8525B1AE(uVar4, 3);
								Global_42176[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0xEB4069FA281FFD9B(uVar4) != 6 && unk_0xEB4069FA281FFD9B(uVar4) != 7) && unk_0xEB4069FA281FFD9B(uVar4) != 8)
								{
									unk_0xBF86159B8525B1AE(uVar4, 10);
									Global_42176[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0xD80C3522AC21FDB8(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0x8744D2E3FC95740E(&(Global_40328[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x7C601010148C8DDB(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x0B0C9A0F9AAEB7F0(&(Global_40328[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_40781[iParam0] = 0;
				Global_40980[iParam0] = iVar1;
				if (!func_23())
				{
					if (!Global_41577[iParam0])
					{
						Global_41577[iParam0] = 1;
						Global_41776++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_23()
{
	if ((func_25() == -1 || func_25() == 999) && !func_24() == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	return Global_32949;
}

int func_25()
{
	return Global_32948;
}

int func_26(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24,685f, 3032,92f, 40,331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24,685f, 3032,92f, 40,331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93,4f, 6410,9f, 36,8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890,3647f, -2367,289f, 28,10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020,5f, 663,41f, 154,75f };
			uParam0->f_58 = { -1018,913f, 603,2904f, 105,6611f };
			uParam0->f_61 = { -1038,913f, 639,2904f, 135,6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162,8918f, -2365,769f, 0f };
			uParam0->f_71 = { 190,75f, 31,25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95,2f, 6411,3f, 31,5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801,7f, -1810,8f, 23,3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787,3967f, -1808,858f, 29,8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163,4f, -745,7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178,534f, -668,835f, 37,2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105,4557f, -745,4835f, 44,7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670,3f, 41,9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			uParam0->f_79 = { 16,9757f, 3614,307f, 30,0677f };
			uParam0->f_82 = { 145,2451f, 3748,912f, 49,6958f };
			uParam0->f_85 = { 16,9757f, 3614,307f, 30,0677f };
			uParam0->f_88 = { 145,2451f, 3748,912f, 49,6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106,7f, 3732,1f, 40,8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106,7f, 3732,1f, 40,8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72,7f, 3695,4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72,7f, 3695,4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43,8f, 3699,7f, 41,3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43,8f, 3699,7f, 41,3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28,5f, 3668f, 40,4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28,5f, 3668f, 40,4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29,4838f, 3735,593f, 38,688f };
			uParam0->f_68 = { 31,134f, 3738,783f, 39,062f };
			uParam0->f_71 = { 13,6f, 20f, 8,9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29,4838f, 3735,593f, 38,688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450,595f, 4959,929f, 44,2575f };
			uParam0->f_79 = { 2383,756f, 4929,988f, 39,52461f };
			uParam0->f_82 = { 2505,756f, 5023,988f, 67,52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450,595f, 4959,929f, 44,2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444,8f, 4976,4f, 50,5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889,3f, -2910,9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600,619f, 4443,457f, 0,725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966,1f, -114,8f, 75,2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086,428f, 339,2523f, 6,3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675,178f, -1143,605f, 12,0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532,1309f, 4526,187f, 88,7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532,1309f, 4526,187f, 88,7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131,29f, -631,22f, 261,85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233,9f, -1355f, 30,3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234,4f, -1355,6f, 40,5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861,28f, 2402,11f, 58,53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327,46f, -274,82f, 54,25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697,32f, 3162,18f, 58,1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119,12f, 3058,21f, 53,25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804,25f, -2276,88f, 23,59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296,5f, 173,3f, 100,4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296,5f, 173,3f, 100,4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480,9554f, -1321,21f, 28,2037f };
			uParam0->f_85 = { 508,3f, -1299,3f, 39,4f };
			uParam0->f_88 = { 459,9f, -1363,2f, 21,4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088,6f, -1650,6f, 6,4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13,83f, -1455,45f, 31,81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277,629f, -2030,913f, 1,2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384,969f, 4277,583f, 30,379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577,881f, 3836,107f, 30,7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180,5771f, -1016,928f, 28,2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630,4205f, -236,7843f, 37,057f };
			uParam0->f_79 = { (-623,6868f - 11f), (-231,935f - 11f), (40,30703f - 3,25f) };
			uParam0->f_82 = { (-623,6868f + 11f), (-231,935f + 11f), (40,30703f + 3,25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583,1606f, -282,3967f, 35,394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14,651f, -604,3639f, 25,1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773,61f, 2835,327f, 35,1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743,682f, 3286,251f, 40,0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222,9f, 1877,9f, 79,9f };
			uParam0->f_58 = { 1206,8f, 1803f, 43,9f };
			uParam0->f_61 = { 1329f, 2060,4f, 143,9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44,02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391,81f, -962,71f, 41,97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424,2f, -1944,31f, 33,09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626,374f, 2949,869f, 39,1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626,374f, 2949,869f, 39,1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811,2679f, 179,3344f, 75,7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802,0311f, 172,9131f, 75,7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802,0311f, 172,9131f, 75,7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810,5301f, 187,7868f, 71,4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811,2679f, 179,3344f, 75,7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30,8793f, -1088,336f, 25,4221f };
			uParam0->f_68 = { -29,3f, -1086,35f, 25,57f };
			uParam0->f_71 = { 5,5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49,21f, -1090,28f, 25,42f };
			uParam0->f_68 = { -49,21f, -1090,28f, 25,42f };
			uParam0->f_71 = { 2,5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49,28f, -1092,66f, 25,42f };
			uParam0->f_68 = { -49,28f, -1092,66f, 25,42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53,07f, -1096,73f, 25,5f };
			uParam0->f_68 = { -53,07f, -1096,73f, 25,5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23,9346f, -669,7552f, 30,8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300,9423f, -586,1784f, 42,2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150,039f, -1521,761f, 9,6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150,039f, -1521,761f, 9,6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856,029f, 3682,998f, 33,2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440,5073f, 6018,766f, 30,49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487,31f, 5588,386f, 793,0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487,31f, 5588,386f, 793,0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96,4811f, -1291,294f, 28,2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139,5795f, -3092,962f, 8,64631f };
			uParam0->f_79 = { Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_82 = { Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_85 = { Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_88 = { Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203,7784f, -3131,767f, 7,041344f };
			uParam0->f_79 = { Vector(7,041344f, -3131,767f, 203,7784f) - Vector(2,5625f, 2,75f, 4,875f) };
			uParam0->f_82 = { Vector(7,041344f, -3131,767f, 203,7784f) + Vector(2,5625f, 2,75f, 4,875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144,7706f, -2982,659f, 7,952507f };
			uParam0->f_79 = { Vector(7,952507f, -2982,659f, 144,7706f) - Vector(3,125f, 3,4375f, 5,3125f) };
			uParam0->f_82 = { Vector(7,952507f, -2982,659f, 144,7706f) + Vector(3,125f, 3,4375f, 5,3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154,965f, -1520,983f, 9,132731f };
			uParam0->f_79 = { -1154,965f, -1520,983f, 9,132731f };
			uParam0->f_82 = { -1158,965f, -1524,983f, 11,63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052,204f, 371,9537f, 67,914f };
			uParam0->f_79 = { -1052,204f, 371,9537f, 67,914f };
			uParam0->f_82 = { -1048,064f, 368,0221f, 70,9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954,984f, 3792,991f, 30,3086f };
			uParam0->f_79 = { 1954,984f, 3792,991f, 30,3086f };
			uParam0->f_82 = { 1983,45f, 3830,78f, 36,2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122,202f, 48,5724f, 51,4652f };
			uParam0->f_79 = { -1122,202f, 48,5724f, 51,4652f };
			uParam0->f_82 = { -1076,233f, 92,1041f, 60,0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199,138f, 223,4648f, 181,1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242,785f, 263,4779f, 173,6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832,9f, 3665,5f, -23,4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814,7f, 4758,5f, 47,9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096,505f, 4,5754f, 49,8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781,6566f, 186,8937f, 71,8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55,7f, -1391,3f, 30,5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700,091f, -933,641f, 20,308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096,381f, -836,17f, 36,6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449,6558f, -980,1375f, 42,6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363,0175f, -1598,079f, 35,9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601,424f, 2808,213f, 16,2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23,7318f, -647,2123f, 37,9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12,9689f, -648,4698f, 9,7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459,127f, 486,1281f, 115,2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248,4916f, -2010,509f, 34,5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081,347f, -263,1502f, 38,7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136,1795f, -750,701f, 262,0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168,7f, 42,9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19,0568f, 536,4818f, 169,6277f };
			break;
	}
	return 1;
}

void func_27()
{
	int iVar0;
	
	func_32(27, 0);
	unk_0x2094BC4B6731BA68(2479,875f, 4980,868f, 44,82052f, 60f, 1, 0, 0, 0);
	iLocal_143 = unk_0x5779387E956077A6(joaat("burrito"), 2479,579f, 4980,503f, 44,8051f, 341,8158f, 1, 1, 0);
	unk_0x20DD46D27530FAC7(iLocal_143, 1);
	unk_0xA1C03303EC67320B(iLocal_143, 2);
	unk_0x1DE99C193C7EC64B(iLocal_143, 1084227584);
	if (iLocal_147 < 5)
	{
		func_29(1, 1, 4);
		func_29(1, 1, 5);
		func_29(1, 1, 2);
		func_29(1, 1, 1);
		func_29(1, 1, 6);
		func_29(1, 1, 7);
		func_29(1, 1, 3);
		func_29(1, 1, 0);
		func_29(1, 1, 8);
		func_29(1, 1, 9);
	}
	if (iLocal_147 < 6)
	{
		func_29(2, 1, 10);
		func_29(2, 1, 11);
		func_29(2, 1, 18);
		func_29(2, 1, 19);
	}
	if (iLocal_147 < 7)
	{
		func_29(2, 1, 12);
		func_29(2, 1, 13);
		func_29(2, 1, 14);
		func_29(2, 1, 15);
		func_29(2, 1, 16);
		func_29(2, 1, 17);
		func_29(2, 1, 20);
		func_29(5, 1, 23);
	}
	if (iLocal_147 == 7)
	{
		unk_0x80813AC549A1E8AE("DEAD");
		while (!unk_0xE100DD4F82A51BDE("DEAD"))
		{
			func_28(323, 1);
		}
		Local_111[15 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_y_methhead_01"), 2436,901f, 4959,1f, 45,8106f, 209,7559f, 1, 1);
		unk_0x10425721983AE158(Local_111[15 /*33*/], "DEAD", "DEAD_C", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0xD8ED11B32DF72E0B(Local_111[15 /*33*/], 1, 0);
		unk_0xEA65800FC08BB2CB(Local_111[15 /*33*/], 1);
		Local_111[16 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_m_hillbilly_01"), 2440,266f, 4970,705f, 45,8306f, 15,7982f, 1, 1);
		unk_0x10425721983AE158(Local_111[16 /*33*/], "DEAD", "DEAD_D", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0xD8ED11B32DF72E0B(Local_111[16 /*33*/], 1, 0);
		unk_0xEA65800FC08BB2CB(Local_111[16 /*33*/], 1);
		Local_111[17 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_m_hillbilly_02"), 2443,42f, 4974,523f, 45,8106f, 121,834f, 1, 1);
		unk_0x10425721983AE158(Local_111[17 /*33*/], "DEAD", "DEAD_E", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0xD8ED11B32DF72E0B(Local_111[17 /*33*/], 1, 0);
		unk_0xEA65800FC08BB2CB(Local_111[17 /*33*/], 1);
		Local_111[18 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_y_methhead_01"), 2448,888f, 4971,561f, 45,8106f, 194,7676f, 1, 1);
		unk_0x10425721983AE158(Local_111[18 /*33*/], "DEAD", "DEAD_G", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0xD8ED11B32DF72E0B(Local_111[18 /*33*/], 1, 0);
		unk_0xEA65800FC08BB2CB(Local_111[18 /*33*/], 1);
		while (((!unk_0x13CCB1AD131C1082(Local_111[15 /*33*/], "DEAD", "DEAD_C", 3) || !unk_0x13CCB1AD131C1082(Local_111[16 /*33*/], "DEAD", "DEAD_D", 3)) || !unk_0x13CCB1AD131C1082(Local_111[17 /*33*/], "DEAD", "DEAD_E", 3)) || !unk_0x13CCB1AD131C1082(Local_111[18 /*33*/], "DEAD", "DEAD_G", 3))
		{
			func_28(54343, 1);
			if (((!unk_0x4FAFF4BCB7633475(Local_111[15 /*33*/]) && !unk_0x4FAFF4BCB7633475(Local_111[16 /*33*/])) && !unk_0x4FAFF4BCB7633475(Local_111[17 /*33*/])) && !unk_0x4FAFF4BCB7633475(Local_111[18 /*33*/]))
			{
			}
		}
		unk_0xD25E9BDC14A0B649(Local_111[15 /*33*/], 0, 0, 0);
		unk_0xD25E9BDC14A0B649(Local_111[16 /*33*/], 0, 0, 0);
		unk_0xD25E9BDC14A0B649(Local_111[17 /*33*/], 0, 0, 0);
		unk_0xD25E9BDC14A0B649(Local_111[18 /*33*/], 0, 0, 0);
		unk_0x268BE77F77533D03("DEAD");
	}
	func_32(23, 0);
	iVar0 = 0;
	unk_0x0B0C9A0F9AAEB7F0(&iVar0, 3);
	unk_0x0B0C9A0F9AAEB7F0(&iVar0, 8);
	unk_0x0B0C9A0F9AAEB7F0(&iVar0, true);
	unk_0x0B0C9A0F9AAEB7F0(&iVar0, 2);
	unk_0x0B0C9A0F9AAEB7F0(&iVar0, 4);
	uLocal_166 = unk_0x8D4CAF9A056EA9E4(joaat("pickup_health_standard"), 2446,896f, 4990,972f, 45,5477f, iVar0, -1, 1, 0);
	if (!unk_0xF935563454D3B338(iLocal_146))
	{
		iLocal_146 = unk_0x8CC50AC10D8037C7(2464,956f, 4990,051f, 44,48415f, 2,5f, 3,125f, 2,0625f, 0f, 0, 7);
	}
	iLocal_167[0] = unk_0x6FCBED6282FF5DA5(joaat("pickup_health_standard"), 2444,497f, 4975,956f, 50,565f, 0f, 0f, 100f, iVar0, -1, 2, 1, 0);
	unk_0x57303BAC3E5DA035(iLocal_167[0], "V_8_Bed1Rm");
	iLocal_167[1] = unk_0x6FCBED6282FF5DA5(joaat("pickup_health_standard"), 2443,4f, 4978,52f, 46,8107f, 0f, 0f, 100f, iVar0, -1, 2, 1, 0);
	unk_0x57303BAC3E5DA035(iLocal_167[1], "V_8_KitchnRm");
	iLocal_167[3] = unk_0x6FCBED6282FF5DA5(joaat("pickup_health_standard"), 2441,028f, 4963,851f, 46,5605f, 0f, 0f, -80,6f, iVar0, -1, 2, 1, 0);
	unk_0x57303BAC3E5DA035(iLocal_167[3], "V_8_StudyRm");
	iLocal_167[4] = unk_0x6FCBED6282FF5DA5(joaat("pickup_health_standard"), 2435,165f, 4971,467f, 45,91f, 0f, 0f, -50,4f, iVar0, -1, 2, 1, 0);
	unk_0x57303BAC3E5DA035(iLocal_167[4], "V_8_Hall2Rm");
	iVar0 = 0;
	unk_0x0B0C9A0F9AAEB7F0(&iVar0, 2);
	unk_0x0B0C9A0F9AAEB7F0(&iVar0, true);
	unk_0x0B0C9A0F9AAEB7F0(&iVar0, 3);
	iLocal_167[2] = unk_0x6FCBED6282FF5DA5(joaat("pickup_weapon_sawnoffshotgun"), 2438,788f, 4970,79f, 50,565f, 0f, 0f, 0f, iVar0, -1, 2, 1, 0);
	unk_0x57303BAC3E5DA035(iLocal_167[2], "V_8_Bed1Rm");
}

void func_28(int iParam0, int iParam1)
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	system::wait(0);
}

void func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = iParam2;
	Local_111[iVar0 /*33*/].f_1 = iParam0;
	Local_111[iVar0 /*33*/].f_3 = iParam1;
	Local_111[iVar0 /*33*/].f_2 = iParam2;
	Local_111[iVar0 /*33*/].f_5 = 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_151.f_0)
	{
		if (Local_151[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_151[iVar0 /*6*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_151.f_0)
	{
		if (Local_151[iVar0 /*6*/] == iParam0)
		{
			Local_151[iVar0 /*6*/].f_2 = -1;
			if (!bParam1)
			{
				Local_151[iVar0 /*6*/].f_1 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_151.f_0)
	{
		if (Local_151[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_151[iVar0 /*6*/] == iParam0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_151.f_0)
	{
		if (Local_151[iVar0 /*6*/].f_1 == 0)
		{
			Local_151[iVar0 /*6*/].f_1 = 1;
			Local_151[iVar0 /*6*/] = iParam0;
			Local_151[iVar0 /*6*/].f_2 = 0;
			Local_151[iVar0 /*6*/].f_3 = iParam1;
			Local_151[iVar0 /*6*/].f_4 = 0;
			Local_151[iVar0 /*6*/].f_5 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_33(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		return 1;
	}
	iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
	{
		if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) == unk_0x4A8C381C258A124D())
		{
			if (!unk_0x1CE980E99A2A6FB6(iVar0))
			{
				unk_0xE5EE5C9DDF05D925(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0xD9CCFCDF70474932(unk_0x4A8C381C258A124D()))
	{
		return 1;
	}
	if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
	{
		if (unk_0x1CE980E99A2A6FB6(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_34()
{
	return Global_101585.f_393 > 0;
}

int func_35(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)
{
	if (!iLocal_572)
	{
		iLocal_572 = 1;
		Local_389[0 /*3*/] = iParam1;
		Local_389[0 /*3*/].f_1 = iParam2;
		Local_389[0 /*3*/].f_2 = sParam3;
		Local_389[1 /*3*/] = iParam4;
		Local_389[1 /*3*/].f_1 = iParam5;
		Local_389[1 /*3*/].f_2 = sParam6;
		Local_389[2 /*3*/] = iParam7;
		Local_389[2 /*3*/].f_1 = iParam8;
		Local_389[2 /*3*/].f_2 = sParam9;
		Local_389[3 /*3*/] = iParam10;
		Local_389[3 /*3*/].f_1 = iParam11;
		Local_389[3 /*3*/].f_2 = sParam12;
		func_64(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_61(iParam1, iParam2, sParam3);
		if (iParam4 != -1)
		{
			func_61(iParam4, iParam5, sParam6);
		}
		if (iParam7 != -1)
		{
			func_61(iParam7, iParam8, sParam9);
		}
		if (iParam10 != -1)
		{
			func_61(iParam10, iParam11, sParam12);
		}
		if (!func_59())
		{
			if (unk_0xFBA523E6F8ACE541() && unk_0x5994A2F6D4FFFE4D())
			{
				if (func_36(&uLocal_407, "CHI2AUD", sParam0, iParam13, 1, 0, 0))
				{
					iLocal_390 = 1;
					return 1;
				}
			}
			else if (func_36(&uLocal_407, "CHI2AUD", sParam0, iParam13, 0, 0, 0))
			{
				iLocal_390 = 0;
				return 1;
			}
		}
	}
	return 0;
}

bool func_36(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_37(sParam2, iParam3, 0);
}

int func_37(char* sParam0, int iParam1, bool bParam2)
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_57();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1F9EB85925C3ECD7())
		{
			return 0;
		}
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_55();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			unk_0x8744D2E3FC95740E(&Global_8800, 20);
			unk_0x8744D2E3FC95740E(&Global_8801, 17);
			unk_0x8744D2E3FC95740E(&Global_8802, false);
			if (bParam2)
			{
				func_47();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (func_46())
				{
					return 0;
				}
				if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x08DAD6B08438A17C(unk_0x4A8C381C258A124D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_79389)
				{
					if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
					{
						return 0;
					}
					if (unk_0x74CD4FE549433E92(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_45())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_44();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_43();
		func_38();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_57();
	}
	return 0;
}

void func_38()
{
	if (!func_39())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

int func_39()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_42())
	{
		return 0;
	}
	if (func_40(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	return 1;
}

bool func_40(int iParam0)
{
	return func_41(iParam0, 20);
}

var func_41(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_42()
{
	return -1;
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0F15249D24BC5ADA(0);
	Global_22286 = 1;
}

void func_44()
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	unk_0x8744D2E3FC95740E(&Global_8801, 16);
}

int func_45()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_46()
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
	{
		iVar0 = 0;
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar1, 1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x196704C916969409() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_47()
{
	if (func_54(14))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_48();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

int func_48()
{
	func_49();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_49()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_52(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_51(unk_0x4A8C381C258A124D());
			if (func_50(iVar0) && (!func_54(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_50(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

bool func_50(int iParam0)
{
	return iParam0 < 3;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_52(int iParam0)
{
	if (func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_53(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_54(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_55()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
}

bool func_56(int iParam0, int iParam1)
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

void func_57()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if ((unk_0xE87F28FD4128D063() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(1);
		Global_22286 = 6;
		return;
	}
}

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

int func_59()
{
	struct<3> Var0;
	
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	if (func_60())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x78C4EBB0251847E2(&Var0);
		if (Global_20875 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_60()
{
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_61(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_406)
	{
		if (iLocal_406[iVar0] == iParam1)
		{
			func_63(&uLocal_407, iVar0);
			iLocal_406[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_406[iParam0] != 0)
	{
		func_63(&uLocal_407, iParam0);
	}
	func_62(&uLocal_407, iParam0, iParam1, sParam2, 0, 1);
	iLocal_406[iParam0] = iParam1;
}

void func_62(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
	{
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 0);
			}
			else
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 1);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x26C12212366CBF6E(iParam2, 0);
			}
			else
			{
				unk_0x26C12212366CBF6E(iParam2, 1);
			}
		}
	}
}

void func_63(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_64(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (unk_0xD6F9DEE4765092A9(uLocal_49) || !unk_0x1B79E937E91F40C3(uLocal_49, uParam0))
	{
		sLocal_49 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_75[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					func_63(&Local_75, iVar0);
				}
			}
			iVar0++;
		}
	}
}

int func_65()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

int func_66(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9)
{
	if (!unk_0xFBA523E6F8ACE541() || unk_0x5994A2F6D4FFFE4D())
	{
		if (func_68(iParam1) != iParam2 || iParam2 == 0)
		{
			func_61(iParam1, iParam2, sParam3);
		}
		if (iParam4 != -1)
		{
			if (func_68(iParam4) != iParam5 || iParam5 == 0)
			{
				func_61(iParam4, iParam5, sParam6);
			}
		}
		if (iParam7 != -1)
		{
			if (func_68(iParam7) != iParam8 || iParam8 == 0)
			{
				func_61(iParam7, iParam8, sParam9);
			}
		}
		if (func_67(&uLocal_407, 39, "CHI2AUD", sParam0, 9, 0, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_67(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_58(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	Global_2883585 = 0;
	return func_37(sParam3, iParam4, bParam7);
}

int func_68(int iParam0)
{
	return iLocal_406[iParam0];
}

int func_69(int iParam0)
{
	if ((Global_23400 || Global_23399) || Global_23401)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		if (Global_20930.f_1 == 10)
		{
			if (Global_8115 == iParam0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_70()
{
	Global_21152 = 0;
	func_71();
}

void func_71()
{
	if (unk_0xE87F28FD4128D063() || Global_20929 == 1)
	{
		unk_0xC78B293A5F4EACF9();
		Global_23297 = 0;
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
		Global_20930.f_1 = Global_20932;
		return;
	}
}

void func_72()
{
	Global_21152 = 0;
	func_57();
}

float func_73(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Param1, iParam2);
}

int func_74(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_75(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	func_76(Param0, Param1, fParam2, Param3, fParam4, Param5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_76(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0xDC8D5832207C2EAD();
	if (unk_0xFC8BFE4B41177C22(iVar0))
	{
		if (!unk_0x110821AE6C63DD4F(iVar0))
		{
			unk_0xEE0BCDB1B5E36BCB(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
		{
			if (bParam10)
			{
				func_83(iVar0);
			}
			if (unk_0x5105BE70DEF1F5FB(iVar0, Param0, Param1, fParam2, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var6 = { unk_0xD1A6A821F5AC81DB(iVar0, 1) };
				if ((Var6.f_2 > Param0.f_2 && Var6.f_2 < Param1.f_2) || (Var6.f_2 > Param1.f_2 && Var6.f_2 < Param0.f_2))
				{
					if (func_80(iVar0, Param0, Param1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (unk_0x2E6A27037F1DC473(iVar0, joaat("taxi")))
				{
					if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) != unk_0x4A8C381C258A124D() && unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) != 0)
					{
						if (unk_0xED977E2AE2CB16EE(Param0 + Param1 / Vector(2f, 2f, 2f), unk_0xD1A6A821F5AC81DB(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_78(iVar0, func_48(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_77(Param5))
				{
					if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
					{
						iVar7 = unk_0x4B423FAA24E8ABF0(iVar0);
						unk_0xB07407B3B153C760(iVar0, &Var4, &Var5);
						if (unk_0xBA16CD57E37AC32A(iVar7))
						{
							Param5.f_0 = (Param5.f_0 + 3f);
							Param5.f_1 = (Param5.f_1 + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							Param5 = { Param5 * Vector(1,1f, 1,1f, 1,1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							Param5 = { Param5 * Vector(1,2f, 1,2f, 1,2f) };
						}
						if ((Var5.f_0 - Var4.f_0) > Param5.f_0)
						{
							bVar2 = false;
						}
						else if ((Var5.f_1 - Var4.f_1) > Param5.f_1)
						{
							bVar2 = false;
						}
						else if ((Var5.f_2 - Var4.f_2) > Param5.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x60040CDD28AA1BC3(Param3, 5f, 0, 0, 0, 0, 0, 0, 0);
						unk_0x5C96CEA06531AB03(iVar0, uParam4);
						unk_0xB2BD5837A8D3CEDA(iVar0, Param3, 1, 0, 0, 1);
						unk_0x1DE99C193C7EC64B(iVar0, 1084227584);
						if (bParam9)
						{
							unk_0xC229299217554C78(iVar0, 0, 1, 0);
							unk_0xC3680B85B2D7086A(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x110821AE6C63DD4F(iVar0) || !unk_0x7C9905528EE2C3AB(iVar0, 1))
						{
							unk_0xEE0BCDB1B5E36BCB(iVar0, 1, 1);
						}
						if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
						{
							unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), unk_0xD1A6A821F5AC81DB(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0x8C1F7D7A31B2A38E(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0x6F3435F85C932A08(Param0, Param1, fParam2, 0, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (unk_0x110821AE6C63DD4F(iVar0))
					{
						unk_0x68298CA6191CDFDB(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x110821AE6C63DD4F(iVar0))
			{
				unk_0xEE0BCDB1B5E36BCB(iVar0, 1, 0);
			}
			iVar8 = unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0);
			if (unk_0xFC8BFE4B41177C22(iVar8) && !unk_0x4FAFF4BCB7633475(iVar8))
			{
				unk_0xB2BD5837A8D3CEDA(iVar8, unk_0xD1A6A821F5AC81DB(iVar8, 1), 1, 0, 0, 1);
			}
			iVar9 = unk_0xDC1AA2FE20EEB2E9(unk_0x4B423FAA24E8ABF0(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = unk_0xFD5C5BBD1FE92BB7(iVar0, 0, 0);
				if (unk_0xFC8BFE4B41177C22(iVar8) && !unk_0x4FAFF4BCB7633475(iVar8))
				{
					unk_0xB2BD5837A8D3CEDA(iVar8, unk_0xD1A6A821F5AC81DB(iVar8, 1), 1, 0, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = unk_0xFD5C5BBD1FE92BB7(iVar0, 1, 0);
				if (unk_0xFC8BFE4B41177C22(iVar8) && !unk_0x4FAFF4BCB7633475(iVar8))
				{
					unk_0xB2BD5837A8D3CEDA(iVar8, unk_0xD1A6A821F5AC81DB(iVar8, 1), 1, 0, 0, 1);
				}
				iVar8 = unk_0xFD5C5BBD1FE92BB7(iVar0, 2, 0);
				if (unk_0xFC8BFE4B41177C22(iVar8) && !unk_0x4FAFF4BCB7633475(iVar8))
				{
					unk_0xB2BD5837A8D3CEDA(iVar8, unk_0xD1A6A821F5AC81DB(iVar8, 1), 1, 0, 0, 1);
				}
			}
			unk_0x8C1F7D7A31B2A38E(&iVar0);
		}
	}
}

int func_77(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_79(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113969.f_7232[iVar2], 0))
		{
			if (unk_0xFE448E8C2209CA31(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_79(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_80(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		Param1.f_2 = Param2.f_2;
		Var0 = { func_82(Param1 - Param2) };
		Var1 = { Var0 };
		Var0.f_0 = -Var1.f_1;
		Var0.f_1 = Var1.f_0;
		Var0.f_2 = 0f;
		Var2 = { Param1 - Var0 * FtoV((fParam3 / 2f)) };
		Var3 = { Param1 + Var0 * FtoV((fParam3 / 2f)) };
		Var4 = { Param2 - Var0 * FtoV((fParam3 / 2f)) };
		Var5 = { Param2 + Var0 * FtoV((fParam3 / 2f)) };
		unk_0xC93BAF616F1C680F(unk_0x4B423FAA24E8ABF0(iParam0), &Var7, &Var8);
		Var6[0 /*3*/] = { unk_0x0D1381B6E0F3987D(iParam0, Var7.f_0, Var7.f_1, 0f) };
		Var6[1 /*3*/] = { unk_0x0D1381B6E0F3987D(iParam0, Var7.f_0, Var8.f_1, 0f) };
		Var6[2 /*3*/] = { unk_0x0D1381B6E0F3987D(iParam0, Var8.f_0, Var7.f_1, 0f) };
		Var6[3 /*3*/] = { unk_0x0D1381B6E0F3987D(iParam0, Var8.f_0, Var8.f_1, 0f) };
		if (((((((((((((((func_81(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var3) || func_81(Var6[0 /*3*/], Var6[1 /*3*/], Var3, Var5)) || func_81(Var6[0 /*3*/], Var6[1 /*3*/], Var4, Var5)) || func_81(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var4)) || func_81(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var3)) || func_81(Var6[1 /*3*/], Var6[3 /*3*/], Var3, Var5)) || func_81(Var6[1 /*3*/], Var6[3 /*3*/], Var4, Var5)) || func_81(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var4)) || func_81(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var3)) || func_81(Var6[3 /*3*/], Var6[2 /*3*/], Var3, Var5)) || func_81(Var6[3 /*3*/], Var6[2 /*3*/], Var4, Var5)) || func_81(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var4)) || func_81(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var3)) || func_81(Var6[2 /*3*/], Var6[0 /*3*/], Var3, Var5)) || func_81(Var6[2 /*3*/], Var6[0 /*3*/], Var4, Var5)) || func_81(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var4))
		{
			return 1;
		}
	}
	return 0;
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
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param2.f_0;
	fVar3 = Param2.f_1;
	fVar4 = Param4.f_0;
	fVar5 = Param4.f_1;
	fVar6 = Param6.f_0;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_82(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_83(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0x4C7724D572378B05(iParam0) <= 200f)
			{
				unk_0x2AEBE39F6BF7D6BC(iParam0, 500f);
			}
			if (unk_0x31B58D7972181BFA(iParam0) <= 700f)
			{
				unk_0x2AEBE39F6BF7D6BC(iParam0, 900f);
			}
			if (unk_0x8D91ADE44AC79BC9(iParam0) < 200)
			{
				unk_0x2AEBE39F6BF7D6BC(iParam0, 500f);
			}
		}
	}
}

void func_84()
{
	if (iLocal_147 >= 3)
	{
		if (iLocal_147 > 3)
		{
			func_109(&Local_117, &Local_128, Local_121, Local_122, Local_123, Local_124, Local_120, Local_127, Local_118, Local_119, Local_125, Local_126);
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
	
	iVar0 = 0;
	while (iVar0 < Local_117.f_0)
	{
		if ((!unk_0x4FAFF4BCB7633475(Local_111[iVar0 /*33*/]) && !unk_0x89568FA9A6BC0B4A(Local_111[iVar0 /*33*/], 1)) || Local_117[iVar0 /*24*/].f_3 == 1)
		{
			switch (Local_117[iVar0 /*24*/].f_3)
			{
				case 1:
					switch (Local_111[iVar0 /*33*/].f_1)
					{
						case 1:
							switch (Local_111[iVar0 /*33*/].f_2)
							{
								case 2:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2451,818f, 4985,704f, 50,5678f, 227,842f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 1, 0);
										func_105(iVar0, 5, 0, 0);
									}
									break;
								
								case 1:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2455,085f, 4974,466f, 50,5677f, 246,051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 1, 0);
										func_105(iVar0, 14, 0, 0);
									}
									break;
								
								case 6:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2461,609f, 4993,675f, 44,9821f, -90f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 0, 0);
										func_105(iVar0, 7, 0, 0);
										Local_111[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 7:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2462,887f, 4993,614f, 44,9474f, 89,8899f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 0, 0);
										func_105(iVar0, 7, 1, 0);
										Local_111[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 3:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2460,651f, 4970,813f, 45,5765f, 240,2054f, joaat("weapon_assaultrifle"), 0, 0))
									{
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 1, 0, 0);
										func_105(iVar0, 16, 0, 0);
									}
									break;
								
								case 0:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2443,138f, 4966,709f, 50,5677f, 246,051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 1, 1, 0);
										func_105(iVar0, 15, 0, 0);
									}
									break;
								
								case 4:
									if (iLocal_147 == 3)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2457,098f, 4954,283f, 44,1304f, 316,5498f, joaat("weapon_pistol"), 0, 0))
										{
											Local_111[iVar0 /*33*/].f_20 = unk_0x4E55EAB577C13329(joaat("prop_cs_fertilizer"), 2460,098f, 4957,283f, 44,1304f, 1, 1, 0);
											Local_111[iVar0 /*33*/].f_5 = 1;
											func_105(iVar0, 3, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2478,32f, 4982,325f, 44,8913f, 49,5021f, joaat("weapon_pistol"), 0, 0))
									{
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 0, 0);
										Local_111[iVar0 /*33*/].f_20 = unk_0x4E55EAB577C13329(joaat("prop_cs_fertilizer"), 2478,444f, 4976,921f, 44,5614f, 1, 1, 0);
										Local_111[iVar0 /*33*/].f_5 = 1;
										func_105(iVar0, 2, 0, 0);
									}
									break;
								
								case 5:
									if (iLocal_147 == 3)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2454,753f, 4951,719f, 44,1445f, 316,5541f, joaat("weapon_pistol"), 0, 0))
										{
											Local_111[iVar0 /*33*/].f_20 = unk_0x4E55EAB577C13329(joaat("prop_cs_fertilizer"), 2455,753f, 4952,719f, 44,1445f, 1, 1, 0);
											Local_111[iVar0 /*33*/].f_5 = 1;
											func_105(iVar0, 3, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2475,873f, 4984,426f, 45,0916f, 45,8993f, joaat("weapon_pistol"), 0, 0))
									{
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 0, 0);
										Local_111[iVar0 /*33*/].f_20 = unk_0x4E55EAB577C13329(joaat("prop_cs_fertilizer"), 2476,582f, 4978,492f, 44,5734f, 1, 1, 0);
										Local_111[iVar0 /*33*/].f_5++;
										func_105(iVar0, 2, 0, 0);
									}
									break;
								
								case 8:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2505,451f, 4970,663f, 43,548f, 49,5021f, joaat("weapon_pistol"), 1, 0))
									{
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 0, 0);
										Local_111[iVar0 /*33*/].f_14 = unk_0x2EC137C692A52458(2505,451f, 4970,663f, 43,548f, 0f, 0f, 88,725f, 2);
										func_104(Local_111[iVar0 /*33*/], 20f, 5f, 90f, -90f, 60f, 1101004800, 1125515264);
										unk_0x397CF4F4C8B17365(Local_111[iVar0 /*33*/], "A_M_M_HillBilly_02_WHITE_MINI_02");
										unk_0x3DA436E63AB0F541(Local_111[iVar0 /*33*/], Local_111[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_a", 1000f, -4f, 1, 0, 1148846080, 0);
										unk_0xBF3497E24DEAD835(Local_111[iVar0 /*33*/].f_14, 1);
										unk_0xD8ED11B32DF72E0B(Local_111[iVar0 /*33*/], 0, 0);
										func_105(iVar0, 4, 0, Local_111[iVar0 /*33*/].f_14);
										func_32(7, 0);
									}
									break;
								
								case 9:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2505,451f, 4970,663f, 43,548f, 49,5021f, joaat("weapon_pistol"), 1, 0))
									{
										Local_111[iVar0 /*33*/].f_14 = unk_0x2EC137C692A52458(2507,879f, 4970,188f, 43,5f, 0f, 0f, 93,42f, 2);
										unk_0xBF3497E24DEAD835(Local_111[iVar0 /*33*/].f_14, 1);
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 0, 0);
										unk_0x3DA436E63AB0F541(Local_111[iVar0 /*33*/], Local_111[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_b", 1000f, -4f, 1, 0, 1148846080, 0);
										unk_0xD8ED11B32DF72E0B(Local_111[iVar0 /*33*/], 0, 0);
										func_105(iVar0, 4, 0, Local_111[iVar0 /*33*/].f_14);
									}
									break;
							}
							if (unk_0xFC8BFE4B41177C22(Local_111[iVar0 /*33*/]))
							{
								unk_0x788F35D395511DFE(Local_111[iVar0 /*33*/], 1, 1);
								unk_0x70FF391C9D345B04(Local_111[iVar0 /*33*/], 1);
							}
							break;
						
						case 2:
							switch (Local_111[iVar0 /*33*/].f_2)
							{
								case 10:
									if (iLocal_147 < 5)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2458,57f, 4987,584f, 45,8107f, 233,842f, joaat("weapon_pistol"), 0, 0))
										{
											func_105(iVar0, 14, 0, 0);
											func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 1, 0);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2454,627f, 4995,726f, 45,2011f, 233,842f, joaat("weapon_pistol"), 0, 0))
									{
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 1, 0);
										func_105(iVar0, 23, 0, 0);
									}
									break;
								
								case 11:
									if (iLocal_147 < 5)
									{
										if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2442,994f, 4985,164f, 45,8103f, 303,409f, joaat("weapon_microsmg"), 0, 0))
										{
											func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 1, 1, 0);
											func_105(iVar0, 14, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2450,371f, 4995,103f, 44,9282f, 303,409f, joaat("weapon_microsmg"), 0, 0))
									{
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 1, 1, 0);
										func_105(iVar0, 23, 0, 0);
									}
									break;
								
								case 12:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2433,124f, 4967,804f, 46,293f, 63,7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 13:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2432,091f, 4968,833f, 46,298f, 63,7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 14:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2431,485f, 4964,779f, 45,8106f, -137,5f, joaat("weapon_pistol"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 15:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2440,385f, 4965,429f, 45,8106f, 63,7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 16:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2439,741f, 4964,89f, 45,8106f, 130,3988f, joaat("weapon_microsmg"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 17:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2438,707f, 4964,094f, 45,8106f, 127,6523f, joaat("weapon_pistol"), 0, 1))
									{
										unk_0xC652B7E19CE29859(Local_111[iVar0 /*33*/], 5);
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 18:
									if (iLocal_147 < 5)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2440,929f, 4976,921f, 45,8106f, -130f, joaat("weapon_pistol"), 0, 1))
										{
											func_105(iVar0, 7, 0, 0);
											Local_111[iVar0 /*33*/].f_4 = 7;
											func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2452,052f, 4956,689f, 43,8957f, 230,7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_105(iVar0, 23, 0, 0);
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 0, 0);
									}
									break;
								
								case 19:
									if (iLocal_147 < 5)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2442,926f, 4975,148f, 45,8106f, 46,7673f, joaat("weapon_pistol"), 0, 1))
										{
											func_105(iVar0, 7, 0, 0);
											func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 0, 0);
											Local_111[iVar0 /*33*/].f_4 = 7;
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2449,338f, 4954,127f, 43,9299f, 46,7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 0, 0, 0);
										func_105(iVar0, 23, 0, 0);
									}
									break;
								
								case 20:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2449,114f, 4981,984f, 45,8102f, 130,7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_105(iVar0, 7, 0, 0);
										Local_111[iVar0 /*33*/].f_4 = 32;
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 1, 0, 0);
									}
									break;
								
								case 21:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2447,553f, 4980,515f, 45,8096f, 311,7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_105(iVar0, 7, 0, 0);
										Local_111[iVar0 /*33*/].f_4 = 7;
										func_106(&Local_117, iVar0, Local_111[iVar0 /*33*/], 1, 0, 0);
									}
									break;
							}
							if (!unk_0x4FAFF4BCB7633475(Local_111[iVar0 /*33*/]))
							{
								unk_0x788F35D395511DFE(Local_111[iVar0 /*33*/], 1, 1);
							}
							break;
						
						case 5:
							switch (Local_111[iVar0 /*33*/].f_2)
							{
								case 22:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2439,258f, 4976,201f, 45,8106f, 116,815f, joaat("weapon_unarmed"), 0, 1))
									{
										func_105(iVar0, 28, 0, 0);
									}
									break;
								
								case 23:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2433,292f, 4968,534f, 42,348f, 105,5f, joaat("weapon_unarmed"), 0, 1))
									{
										func_105(iVar0, 30, 0, 0);
									}
									break;
							}
							break;
					}
					if (!unk_0x4FAFF4BCB7633475(Local_111[iVar0 /*33*/]))
					{
						unk_0x11C125313CB8ADA2(Local_111[iVar0 /*33*/], 1);
						Local_117[iVar0 /*24*/].f_3 = 3;
						iVar0 = (iVar0 - 1);
					}
					break;
				
				case 3:
					if (Local_117[iVar0 /*24*/].f_3 <= 3)
					{
						switch (Local_111[iVar0 /*33*/].f_3)
						{
							case 3:
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0xFC8BFE4B41177C22(Local_111[iVar0 /*33*/].f_20))
										{
											if (unk_0xF98CC1C0E657B6CB(Local_111[iVar0 /*33*/].f_20) && unk_0x4DBCC7D5D01D67FA(Local_111[iVar0 /*33*/].f_20))
											{
												unk_0x4D306DD94DD6FDBA(Local_111[iVar0 /*33*/].f_20, Local_111[iVar0 /*33*/], unk_0x72F7E39FB49FC0BA(Local_111[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
												Local_111[iVar0 /*33*/].f_5++;
											}
											if (unk_0xFC8BFE4B41177C22(Local_111[iVar0 /*33*/].f_20))
											{
												if (Local_111[iVar0 /*33*/].f_2 == 4)
												{
													unk_0x10425721983AE158(Local_111[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													unk_0x10425721983AE158(Local_111[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												unk_0x788F35D395511DFE(Local_111[iVar0 /*33*/], 1, 1);
												unk_0xD8ED11B32DF72E0B(Local_111[iVar0 /*33*/], 0, 0);
												Local_111[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 1:
										break;
								}
								break;
							
							case 2:
								if (Local_111[iVar0 /*33*/].f_5 < 7)
								{
									func_103(Local_111[iVar0 /*33*/], &(Local_111[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0, 0);
								}
								if (unk_0x13CCB1AD131C1082(Local_111[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
								{
									unk_0x458AA1A01F53901E(Local_111[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1,4f);
								}
								if (unk_0x13CCB1AD131C1082(Local_111[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									unk_0x458AA1A01F53901E(Local_111[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1,4f);
								}
								if (unk_0xFC8BFE4B41177C22(Local_111[iVar0 /*33*/].f_20))
								{
									if (Local_111[iVar0 /*33*/].f_5 > 2 && Local_111[iVar0 /*33*/].f_5 <= 6)
									{
										if (unk_0xA3736D76B0E93E93(Local_111[iVar0 /*33*/].f_20))
										{
											Local_111[iVar0 /*33*/].f_12 = (func_102(unk_0xD1A6A821F5AC81DB(Local_111[iVar0 /*33*/], 1), Local_111[iVar0 /*33*/].f_6, 1) - unk_0xCFC0C995455A6204(Local_111[iVar0 /*33*/]));
											Local_111[iVar0 /*33*/].f_12 = func_101((Local_111[iVar0 /*33*/].f_12 / 4f), -15f, 15f);
											if (!unk_0x8BF5256C439DF778(Local_111[iVar0 /*33*/]))
											{
												unk_0x5C96CEA06531AB03(Local_111[iVar0 /*33*/], (unk_0xCFC0C995455A6204(Local_111[iVar0 /*33*/]) + (system::timestep() * Local_111[iVar0 /*33*/].f_12)));
											}
										}
									}
								}
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0xFC8BFE4B41177C22(Local_111[iVar0 /*33*/].f_20))
										{
											if (unk_0xF98CC1C0E657B6CB(Local_111[iVar0 /*33*/].f_20) && unk_0x4DBCC7D5D01D67FA(Local_111[iVar0 /*33*/].f_20))
											{
												unk_0x4D306DD94DD6FDBA(Local_111[iVar0 /*33*/].f_20, Local_111[iVar0 /*33*/], unk_0x72F7E39FB49FC0BA(Local_111[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
												func_32(20, 0);
												Local_111[iVar0 /*33*/].f_5++;
											}
										}
									
									case 1:
										if (unk_0xFC8BFE4B41177C22(Local_111[iVar0 /*33*/].f_20))
										{
											if (func_73(Local_111[iVar0 /*33*/], 2495,779f, 5004,715f, 43,87337f, 1) < 99f)
											{
												if (Local_111[iVar0 /*33*/].f_2 == 4)
												{
													unk_0x10425721983AE158(Local_111[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													unk_0x10425721983AE158(Local_111[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												unk_0xD8ED11B32DF72E0B(Local_111[iVar0 /*33*/], 0, 0);
												unk_0x788F35D395511DFE(Local_111[iVar0 /*33*/], 1, 1);
												Local_111[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if (unk_0x13CCB1AD131C1082(Local_111[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) || unk_0x13CCB1AD131C1082(Local_111[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
										{
											Local_111[iVar0 /*33*/].f_6 = { 2466,903f, 4996,254f, 45,5443f };
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0x65FFA94B82A71741(Local_111[iVar0 /*33*/], Local_111[iVar0 /*33*/].f_6, 1,5f, 1,5f, 2f, 0, 1, 0))
										{
											Local_111[iVar0 /*33*/].f_6 = { 2461,332f, 4998,94f, 45,359f };
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (unk_0x65FFA94B82A71741(Local_111[iVar0 /*33*/], Local_111[iVar0 /*33*/].f_6, 1,5f, 1,5f, 2f, 0, 1, 0))
										{
											Local_111[iVar0 /*33*/].f_6 = { 2455,984f, 4997,404f, 45,2645f };
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 5:
										if (unk_0x65FFA94B82A71741(Local_111[iVar0 /*33*/], Local_111[iVar0 /*33*/].f_6, 1,5f, 1,5f, 2f, 0, 1, 0))
										{
											if (Local_111[iVar0 /*33*/].f_2 == 5)
											{
												Local_111[iVar0 /*33*/].f_6 = { 2452,091f, 4993,674f, 45,1404f };
												Local_111[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_111[iVar0 /*33*/].f_6 = { 2454,091f, 4995,674f, 45,1404f };
												Local_111[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 6:
										if (unk_0x65FFA94B82A71741(Local_111[iVar0 /*33*/], Local_111[iVar0 /*33*/].f_6, 1,5f, 1,5f, 2f, 0, 1, 0))
										{
											if (unk_0x13CCB1AD131C1082(Local_111[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
											{
												unk_0x08D8528BA8E43641(Local_111[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", -1,5f);
											}
											if (unk_0x13CCB1AD131C1082(Local_111[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
											{
												unk_0x08D8528BA8E43641(Local_111[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", -1,5f);
											}
											Local_111[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
											if (unk_0xFC8BFE4B41177C22(Local_111[iVar0 /*33*/].f_20))
											{
												unk_0x837D67618BF89034(Local_111[iVar0 /*33*/].f_20, 0, 1);
											}
											if (func_74(iLocal_143))
											{
												if (Local_111[iVar0 /*33*/].f_2 == 4)
												{
													unk_0x4669032A1DFBB449(Local_111[iVar0 /*33*/], "move_m@gangster@var_e", 1048576000);
													unk_0xEBA229B2E0BB05E0(Local_111[iVar0 /*33*/], iLocal_143, -1, -1, 1f, 1, 0, 0);
													func_105(func_18(6), 14, 0, 0);
													func_105(func_18(7), 33, 0, 0);
												}
												else
												{
													unk_0x4669032A1DFBB449(Local_111[iVar0 /*33*/], "move_m@gangster@var_f", 1048576000);
													unk_0xEBA229B2E0BB05E0(Local_111[iVar0 /*33*/], iLocal_143, -1, 0, 1f, 1, 0, 0);
												}
											}
											Local_111[iVar0 /*33*/].f_5++;
											Local_111[iVar0 /*33*/].f_14 = 0;
											Local_111[iVar0 /*33*/].f_15 = 0;
										}
										break;
									
									case 7:
										func_100(iVar0);
										if (unk_0x7F420695E3F776FB(Local_111[iVar0 /*33*/], 0))
										{
											unk_0x788F35D395511DFE(Local_111[iVar0 /*33*/], 0, 1);
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										if (func_74(iLocal_143))
										{
											if (!unk_0xC39AE5D390581AD5(iLocal_143, -1, 0))
											{
												if (Local_111[iVar0 /*33*/].f_2 == 4)
												{
													if (!unk_0xC39AE5D390581AD5(iLocal_143, 0, 0))
													{
														iVar1 = func_18(5);
														if (iVar1 >= 0)
														{
															if (!unk_0x4FAFF4BCB7633475(Local_111[iVar1 /*33*/]))
															{
																if (unk_0x27E68848F0E5D7D9(Local_111[iVar1 /*33*/]))
																{
																	func_99();
																	unk_0xCF6CC9EA0D2EFE23(0, iLocal_143, 2367,668f, 5098,645f, 46,8185f, 12f, 0, joaat("burrito"), 786599, 5f, 5f);
																	unk_0x7C8E9DE09D4AD3FF(0, iLocal_143, 19f, 786599);
																	func_98(&(Local_111[iVar0 /*33*/]), 0);
																	func_97(25, 1);
																	Local_111[iVar0 /*33*/].f_5++;
																}
															}
														}
													}
												}
											}
											if (!unk_0xC39AE5D390581AD5(iLocal_143, 0, 0))
											{
												if (Local_111[iVar0 /*33*/].f_2 == 5)
												{
													Local_111[iVar0 /*33*/].f_5++;
												}
											}
										}
										break;
									
									case 9:
										break;
								}
								break;
							
							case 5:
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										func_99();
										unk_0xA966E518B752B92A(0, 2459,646f, 4977,735f, 50,5678f, 1f, 20000, 0,25f, 0, 1193033728);
										unk_0xA966E518B752B92A(0, 2456,221f, 4974,685f, 50,5678f, 1f, 20000, 0,25f, 0, 1193033728);
										unk_0x807D24321098A1C7(0, 2456,221f, 4974,685f, 50,5678f, 92,5678f, 1061158912);
										unk_0x2280392018BC0DD3(0, 92,5678f, 0);
										func_98(&(Local_111[iVar0 /*33*/]), 0);
										Local_111[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x9B5C1660CCDF7189(Local_111[iVar0 /*33*/], joaat("script_task_perform_sequence")) == 7)
										{
											func_105(iVar0, 7, 0, 9000);
											iVar2 = 1;
											if (iVar2 != -1)
											{
												func_105(iVar2, 7, 0, 9000);
											}
										}
										break;
									
									case 2:
										func_99();
										unk_0xA966E518B752B92A(0, 2450,491f, 4986,83f, 50,5677f, 1f, 20000, 0,25f, 0, 1193033728);
										unk_0x2280392018BC0DD3(0, 309,5567f, 0);
										unk_0x5524CAF18378DF39(0, 2000);
										func_98(&(Local_111[iVar0 /*33*/]), 0);
										Local_111[iVar0 /*33*/].f_5++;
										break;
									
									case 3:
										if (unk_0x9B5C1660CCDF7189(Local_111[iVar0 /*33*/], joaat("script_task_perform_sequence")) == 7)
										{
											Local_111[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 6:
								if (unk_0x9B5C1660CCDF7189(Local_111[iVar0 /*33*/], joaat("script_task_start_scenario_in_place")) == 7 && Local_111[iVar0 /*33*/].f_5 > 1)
								{
									Local_111[iVar0 /*33*/].f_5 = 0;
								}
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x3C0F448853B71C92(Local_111[iVar0 /*33*/], joaat("weapon_unarmed"), 1);
										unk_0x2280392018BC0DD3(Local_111[iVar0 /*33*/], 219f, 1500);
										Local_111[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x9B5C1660CCDF7189(Local_111[iVar0 /*33*/], joaat("script_task_achieve_heading")) == 7)
										{
											unk_0x21B9EFA4B4AA3A5B(Local_111[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 32:
								if (!unk_0x4FAFF4BCB7633475(Local_111[iVar0 /*33*/]))
								{
									if (Local_111[iVar0 /*33*/].f_1 == 1 || func_4(unk_0x4A8C381C258A124D(), Local_111[iVar0 /*33*/], 1) < 20f)
									{
										func_103(Local_111[iVar0 /*33*/], &(Local_111[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0, 0);
									}
									if (Local_111[iVar0 /*33*/].f_5 < 10)
									{
									}
									switch (Local_111[iVar0 /*33*/].f_5)
									{
										case 0:
											unk_0x21B9EFA4B4AA3A5B(Local_111[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", Local_111[iVar0 /*33*/].f_14, 0);
											Local_111[iVar0 /*33*/].f_5++;
											break;
										
										case 1:
											if (func_4(unk_0x4A8C381C258A124D(), Local_111[iVar0 /*33*/], 1) < 10f)
											{
												iVar3 = unk_0xC5935DFB3F39785A(0, 3);
												if (iVar3 == 0)
												{
													unk_0x4CAD907F190E6F10(Local_111[iVar0 /*33*/], "GENERIC_CURSE_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else if (iVar3 == 1)
												{
													unk_0x4CAD907F190E6F10(Local_111[iVar0 /*33*/], "GENERIC_INSULT_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else
												{
													unk_0x4CAD907F190E6F10(Local_111[iVar0 /*33*/], "CHAT_STATE", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												Local_111[iVar0 /*33*/].f_5++;
												Local_111[iVar0 /*33*/].f_14 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(5000, 10000));
											}
											break;
										
										case 2:
											if (unk_0x1DD05E817C89C737() > Local_111[iVar0 /*33*/].f_14)
											{
												Local_111[iVar0 /*33*/].f_5 = 1;
											}
											break;
										
										case 10:
											if (func_35("CHI2_hear", 8, Local_111[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_111[iVar0 /*33*/].f_5++;
												Local_111[iVar0 /*33*/].f_14 = unk_0x1DD05E817C89C737() + 1000;
											}
											break;
										
										case 11:
											if (unk_0x1DD05E817C89C737() > Local_111[iVar0 /*33*/].f_14)
											{
												unk_0xCD76801E1106CABE(Local_111[iVar0 /*33*/], unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 5000);
												Local_111[iVar0 /*33*/].f_5++;
												Local_111[iVar0 /*33*/].f_14 = unk_0x1DD05E817C89C737() + 5000;
											}
											break;
										
										case 12:
											if (unk_0xC1204DBD7B8A643E(unk_0x259BE71D8A81D4FA(), Local_111[iVar0 /*33*/]) && func_73(Local_111[iVar0 /*33*/], 2448,003f, 4982,305f, 45,8519f, 1) < 10f)
											{
												if (unk_0x1DD05E817C89C737() > (Local_111[iVar0 /*33*/].f_14 - 3000))
												{
													unk_0xA966E518B752B92A(Local_111[iVar0 /*33*/], unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1f, 20000, 0,25f, 0, 1193033728);
													Local_111[iVar0 /*33*/].f_5 = 15;
												}
											}
											else if (unk_0x1DD05E817C89C737() > Local_111[iVar0 /*33*/].f_14)
											{
												if (func_35("CHI2_nope", 8, Local_111[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_111[iVar0 /*33*/].f_5++;
												}
											}
											break;
										
										case 13:
											func_99();
											unk_0xA966E518B752B92A(0, 2449,114f, 4981,984f, 45,8102f, 1f, 20000, 0,25f, 0, 1193033728);
											unk_0x2280392018BC0DD3(0, 127,6328f, 3000);
											func_98(&(Local_111[iVar0 /*33*/]), 0);
											Local_111[iVar0 /*33*/].f_14 = unk_0x1DD05E817C89C737() + 3000;
											Local_111[iVar0 /*33*/].f_5++;
											break;
										
										case 14:
											if (unk_0x1DD05E817C89C737() > Local_111[iVar0 /*33*/].f_14 || unk_0x9B5C1660CCDF7189(Local_111[iVar0 /*33*/], joaat("script_task_perform_sequence")) == 7)
											{
												Local_111[iVar0 /*33*/].f_5 = 0;
											}
											break;
										
										case 15:
											if (func_35("CHI2_hear", 8, Local_111[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_111[iVar0 /*33*/].f_5++;
											}
											break;
										
										case 16:
											if (unk_0x9B5C1660CCDF7189(Local_111[iVar0 /*33*/], joaat("script_task_follow_nav_mesh_to_coord")) == 7)
											{
												Local_111[iVar0 /*33*/].f_14 = unk_0x1DD05E817C89C737() + 3000;
												Local_111[iVar0 /*33*/].f_5 = 12;
											}
											break;
										}
								}
								break;
							
							case 33:
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										Local_111[iVar0 /*33*/].f_14 = unk_0x1DD05E817C89C737() + 3000;
										Local_111[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x1DD05E817C89C737() > Local_111[iVar0 /*33*/].f_14)
										{
											if (func_74(iLocal_143))
											{
												unk_0xEBA229B2E0BB05E0(Local_111[iVar0 /*33*/], iLocal_143, 20000, 1, 1f, 1, 0, 0);
												Local_111[iVar0 /*33*/].f_5++;
												Local_111[iVar0 /*33*/].f_14 = 0;
												Local_111[iVar0 /*33*/].f_15 = 0;
											}
										}
										break;
									
									case 2:
										func_100(iVar0);
										break;
								}
								break;
							
							case 7:
								if (Local_111[iVar0 /*33*/].f_1 == 1 || func_4(unk_0x4A8C381C258A124D(), Local_111[iVar0 /*33*/], 1) < 20f)
								{
									func_103(Local_111[iVar0 /*33*/], &(Local_111[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0, 0);
								}
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										iVar4 = joaat("weapon_unarmed");
										if (unk_0x23B29877D0BE9547(Local_111[iVar0 /*33*/], &iVar4, 1))
										{
											unk_0x71A3A3C67C692798(Local_111[iVar0 /*33*/], 0);
										}
										Local_111[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (!unk_0x23B29877D0BE9547(Local_111[iVar0 /*33*/], &iVar4, 1))
										{
											func_99();
											if (iVar0 == 1)
											{
												if (!unk_0x4FAFF4BCB7633475(Local_111[2 /*33*/]))
												{
													unk_0x0E95B96CFEFE7B61(0, Local_111[2 /*33*/], 2000);
												}
											}
											else if (iVar0 == 2)
											{
												if (!unk_0x4FAFF4BCB7633475(Local_111[1 /*33*/]))
												{
													unk_0x0E95B96CFEFE7B61(0, Local_111[1 /*33*/], 2000);
												}
											}
											else if (iVar0 == 6)
											{
												if (!unk_0x4FAFF4BCB7633475(Local_111[7 /*33*/]))
												{
													unk_0x0E95B96CFEFE7B61(0, Local_111[7 /*33*/], 2000);
												}
											}
											else if (iVar0 == 7)
											{
												if (!unk_0x4FAFF4BCB7633475(Local_111[6 /*33*/]))
												{
													unk_0x0E95B96CFEFE7B61(0, Local_111[6 /*33*/], 2000);
												}
											}
											if (Local_111[iVar0 /*33*/].f_14 != 0)
											{
												unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_HANG_OUT_STREET", Local_111[iVar0 /*33*/].f_14, 0);
											}
											else
											{
												unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
											}
											func_98(&(Local_111[iVar0 /*33*/]), 0);
											Local_111[iVar0 /*33*/].f_5++;
											Local_111[iVar0 /*33*/].f_15 = unk_0x1DD05E817C89C737() + 15000;
										}
										break;
									
									case 2:
										if (unk_0x9B5C1660CCDF7189(Local_111[iVar0 /*33*/], joaat("script_task_perform_sequence")) == 7 || unk_0x1DD05E817C89C737() > Local_111[iVar0 /*33*/].f_15)
										{
											unk_0x974022927CB47E68(Local_111[iVar0 /*33*/]);
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0x9B5C1660CCDF7189(Local_111[iVar0 /*33*/], joaat("script_task_perform_sequence")) == 7)
										{
											if (Local_111[iVar0 /*33*/].f_4 == 5)
											{
												unk_0x71A3A3C67C692798(Local_111[iVar0 /*33*/], 1);
												Local_111[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_111[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 4:
										if (unk_0x9B5C1660CCDF7189(Local_111[iVar0 /*33*/], joaat("script_task_swap_weapon")) == 7)
										{
											if (Local_111[iVar0 /*33*/].f_4 == 5)
											{
												func_105(iVar0, Local_111[iVar0 /*33*/].f_4, 2, 0);
											}
											else
											{
												func_105(iVar0, Local_111[iVar0 /*33*/].f_4, 0, 0);
											}
										}
										break;
								}
								break;
							
							case 13:
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x21B9EFA4B4AA3A5B(Local_111[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND", 0, 0);
										unk_0xD8ED11B32DF72E0B(Local_111[iVar0 /*33*/], 0, 0);
										Local_111[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 14:
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x21B9EFA4B4AA3A5B(Local_111[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", 0, 0);
										unk_0xD8ED11B32DF72E0B(Local_111[iVar0 /*33*/], 0, 0);
										Local_111[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x9B5C1660CCDF7189(Local_111[iVar0 /*33*/], joaat("script_task_start_scenario_in_place")) == 7)
										{
											Local_111[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 15:
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x21B9EFA4B4AA3A5B(Local_111[iVar0 /*33*/], "WORLD_HUMAN_BINOCULARS", 0, 0);
										unk_0xD8ED11B32DF72E0B(Local_111[iVar0 /*33*/], 0, 0);
										Local_111[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 16:
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x21B9EFA4B4AA3A5B(Local_111[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 0);
										unk_0xD8ED11B32DF72E0B(Local_111[iVar0 /*33*/], 0, 0);
										Local_111[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 17:
								if (Local_111[iVar0 /*33*/].f_5 < 10)
								{
									if (unk_0xC1204DBD7B8A643E(unk_0x259BE71D8A81D4FA(), Local_111[iVar0 /*33*/]))
									{
										Local_111[iVar0 /*33*/].f_5 = 10;
									}
								}
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x80813AC549A1E8AE("misscarsteal2peeing");
										Local_111[iVar0 /*33*/].f_5++;
										Local_111[iVar0 /*33*/].f_14 = 0;
										break;
									
									case 1:
										if (unk_0xE100DD4F82A51BDE("misscarsteal2peeing"))
										{
											unk_0x21B9EFA4B4AA3A5B(Local_111[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 2:
										if (func_4(unk_0x4A8C381C258A124D(), Local_111[iVar0 /*33*/], 1) < 21,6f)
										{
											unk_0x10425721983AE158(Local_111[iVar0 /*33*/], "misscarsteal2peeing", "peeing_loop", 8f, -8f, 25000, 1, 0, 0, 0, 0);
											Local_111[iVar0 /*33*/].f_5++;
											Local_111[iVar0 /*33*/].f_14 = unk_0x1DD05E817C89C737() + 23000;
										}
										break;
									
									case 3:
										if (unk_0x1DD05E817C89C737() > Local_111[iVar0 /*33*/].f_14)
										{
											Local_111[iVar0 /*33*/].f_14 = -1;
											unk_0x21B9EFA4B4AA3A5B(Local_111[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 18:
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										func_99();
										unk_0xA966E518B752B92A(0, 2434,891f, 4973,864f, 50,5679f, 1f, 20000, 0,25f, 0, 1193033728);
										unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_BINOCULARS", 0, 0);
										func_98(&(Local_111[iVar0 /*33*/]), 0);
										Local_111[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 25:
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										switch (Local_111[iVar0 /*33*/].f_2)
										{
											case 12:
												if (unk_0x81E5E9AE1379B068(2433,04f, 4967,87f, 46,28f, 0,8f, 0))
												{
													unk_0xCDA51E8BE6E5790A(Local_111[iVar0 /*33*/], 2433,04f, 4967,87f, 46,28f, 0,8f, 0);
													Local_111[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 13:
												if (unk_0x81E5E9AE1379B068(2432,56f, 4968,38f, 46,27f, 0,8f, 0))
												{
													unk_0xCDA51E8BE6E5790A(Local_111[iVar0 /*33*/], 2432,56f, 4968,38f, 46,27f, 0,8f, 0);
													Local_111[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 14:
												if (unk_0x81E5E9AE1379B068(2433,12f, 4965,59f, 46,27f, 0,8f, 0))
												{
													unk_0xCDA51E8BE6E5790A(Local_111[iVar0 /*33*/], 2433,12f, 4965,59f, 46,27f, 0,8f, 0);
													Local_111[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 15:
												if (unk_0x81E5E9AE1379B068(2439,61f, 4960,99f, 46,27f, 0,4f, 0))
												{
													unk_0xCDA51E8BE6E5790A(Local_111[iVar0 /*33*/], 2439,697f, 4960,996f, 46,28f, 0,4f, 0);
													Local_111[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 16:
												if (unk_0x81E5E9AE1379B068(2440,16f, 4962,99f, 46,27f, 0,4f, 0))
												{
													unk_0xCDA51E8BE6E5790A(Local_111[iVar0 /*33*/], 2440,16f, 4962,99f, 46,27f, 0,4f, 0);
													Local_111[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 17:
												if (unk_0x81E5E9AE1379B068(2438,23f, 4962,25f, 46,27f, 0,4f, 0))
												{
													unk_0xCDA51E8BE6E5790A(Local_111[iVar0 /*33*/], 2438,23f, 4962,25f, 46,27f, 0,4f, 0);
													Local_111[iVar0 /*33*/].f_5++;
												}
												break;
										}
										break;
									
									case 1:
										if (unk_0x9B5C1660CCDF7189(Local_111[iVar0 /*33*/], joaat("script_task_use_nearest_scenario_to_pos")) == 7)
										{
											Local_111[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 28:
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), Local_111[iVar0 /*33*/]) || (func_96(unk_0xD1A6A821F5AC81DB(Local_111[iVar0 /*33*/], 1), 1f, 1120403456) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2448,583f, 4969,292f, 45,1856f, 2439,538f, 4978,061f, 46,82762f, 5,75f, 0, 1, 0)))
										{
											unk_0x0B1A40D00F279307(Local_111[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_111[iVar0 /*33*/].f_5 = 2;
										}
										break;
									
									case 2:
										if (func_35("WRK1", 1, Local_111[iVar0 /*33*/], "CHIN2Goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), Local_111[iVar0 /*33*/]) || (func_96(unk_0xD1A6A821F5AC81DB(Local_111[iVar0 /*33*/], 1), 1f, 1120403456) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2448,583f, 4969,292f, 45,1856f, 2439,538f, 4978,061f, 46,82762f, 5,75f, 0, 1, 0)))
										{
											if (func_35("TRV1", 1, unk_0x4A8C381C258A124D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_111[iVar0 /*33*/].f_5++;
												Local_111[iVar0 /*33*/].f_14 = unk_0x1DD05E817C89C737() + 2000;
											}
										}
										else
										{
											Local_111[iVar0 /*33*/].f_5++;
											Local_111[iVar0 /*33*/].f_14 = unk_0x1DD05E817C89C737() + 2000;
										}
										break;
									
									case 4:
										if (unk_0x1DD05E817C89C737() > Local_111[iVar0 /*33*/].f_14)
										{
											unk_0xD844F5E50DAB6FF7(Local_111[iVar0 /*33*/], unk_0x4A8C381C258A124D(), 200f, 200000, 0, 0);
											unk_0x44FB298D6382876D(Local_111[iVar0 /*33*/], 1);
											unk_0xF09E30AF1B8FB379(&(Local_111[iVar0 /*33*/]));
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 30:
								if (!unk_0x4FAFF4BCB7633475(Local_111[iVar0 /*33*/]))
								{
									if (Local_111[iVar0 /*33*/].f_5 < 8)
									{
										if (unk_0x690AB6F5DB2A3A54(Local_111[iVar0 /*33*/], 0, 2))
										{
											if (!unk_0x66B90BA528CFEBCE(Local_111[iVar0 /*33*/], 0, 2))
											{
												unk_0xB41DEC3AAC1AA107(Local_111[iVar0 /*33*/], joaat("weapon_pistol"), -1, 0, 1);
												unk_0x62A5310368A20EFA(Local_111[iVar0 /*33*/], unk_0x4A8C381C258A124D(), 0, 16);
												func_94();
												unk_0xAAA71DD7E9059338(Local_111[iVar0 /*33*/], 0);
												unk_0x62A5310368A20EFA(Local_111[iVar0 /*33*/], unk_0x4A8C381C258A124D(), 0, 16);
												unk_0x3CEA1FD137ACE2D9(Local_111[iVar0 /*33*/], iLocal_114);
												Local_111[iVar0 /*33*/].f_5 = 999;
											}
										}
									}
								}
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x80813AC549A1E8AE("misschinese2_crystalmaze");
										unk_0xA10F939489C3BE61(joaat("weapon_sawnoffshotgun"), 31, 0);
										unk_0xAAA71DD7E9059338(Local_111[iVar0 /*33*/], 1);
										unk_0x3CEA1FD137ACE2D9(Local_111[iVar0 /*33*/], iLocal_114);
										Local_111[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0xE100DD4F82A51BDE("misschinese2_crystalmaze") && unk_0x92A65766A892EFC6(joaat("weapon_sawnoffshotgun")))
										{
											if (!unk_0x4FAFF4BCB7633475(Local_111[iVar0 /*33*/]))
											{
												uLocal_368 = unk_0x2EC137C692A52458(2435,312f, 4967,087f, 41,35f, 0f, 0f, 11,4f, 2);
												unk_0xBF3497E24DEAD835(uLocal_368, 1);
												unk_0x3DA436E63AB0F541(Local_111[iVar0 /*33*/], iLocal_368, "misschinese2_crystalmaze", "_cower_loop", 1000f, -8f, 0, 0, 1148846080, 0);
												if (!unk_0xFC8BFE4B41177C22(iLocal_371))
												{
													iLocal_371 = unk_0x8A3572575D91006C(joaat("weapon_sawnoffshotgun"), 40, 2433,59f, 4969,7f, 42,1854f, 1, 1065353216, 0, 0, 1);
													unk_0xCF39804E8C88080E(iLocal_371, 90f, 0f, 0f, 2, 1);
												}
												unk_0xE67051907958B5EB(Local_111[iVar0 /*33*/], unk_0x4A8C381C258A124D(), -1, 0, 2);
												Local_111[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if ((iLocal_147 == 4 || iLocal_147 == 5) || iLocal_147 == 6)
										{
											if (func_93(11))
											{
												Local_111[iVar0 /*33*/].f_5++;
											}
										}
										if (iLocal_147 > 6)
										{
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										uLocal_367 = unk_0x2EC137C692A52458(2435,312f, 4967,087f, 41,35f, 0f, 0f, 11,4f, 2);
										unk_0x3DA436E63AB0F541(Local_111[iVar0 /*33*/], uLocal_367, "misschinese2_crystalmaze", "_cower_to_stand", 4f, -8f, 0, 0, 1148846080, 0);
										unk_0xE67051907958B5EB(Local_111[iVar0 /*33*/], unk_0x4A8C381C258A124D(), -1, 0, 2);
										Local_111[iVar0 /*33*/].f_5++;
										break;
									
									case 4:
										if (func_35("CHI2_DALE", 4, Local_111[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_111[iVar0 /*33*/].f_5++;
										}
										if ((unk_0x5266F1D2AEF6F73A(iLocal_367) && unk_0xBD3B265153D3BA2D(iLocal_367) > 0,98f) || !unk_0x5266F1D2AEF6F73A(iLocal_367))
										{
											Local_111[iVar0 /*33*/].f_5 = 5;
										}
										break;
									
									case 5:
										if ((unk_0x5266F1D2AEF6F73A(iLocal_367) && unk_0xBD3B265153D3BA2D(iLocal_367) > 0,98f) || !unk_0x5266F1D2AEF6F73A(iLocal_367))
										{
											iLocal_366 = unk_0x2EC137C692A52458(2435,312f, 4967,087f, 41,35f, 0f, 0f, 11,4f, 2);
											unk_0xBF3497E24DEAD835(iLocal_366, 1);
											unk_0x3DA436E63AB0F541(Local_111[iVar0 /*33*/], iLocal_366, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1148846080, 0);
											Local_111[iVar0 /*33*/].f_5++;
											Local_111[iVar0 /*33*/].f_14 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(1000, 2000));
										}
										break;
									
									case 6:
										if (!unk_0x5266F1D2AEF6F73A(iLocal_369) || iLocal_369 == 0)
										{
											if (unk_0x1DD05E817C89C737() > Local_111[iVar0 /*33*/].f_14)
											{
												iLocal_369 = unk_0x2EC137C692A52458(2435,312f, 4967,087f, 41,35f, 0f, 0f, 11,4f, 2);
												if (unk_0xC5935DFB3F39785A(0, 2) == 1)
												{
													unk_0x3DA436E63AB0F541(Local_111[iVar0 /*33*/], iLocal_369, "misschinese2_crystalmaze", "_stand_loop_a", 4f, -8f, 0, 0, 1148846080, 0);
												}
												else
												{
													unk_0x3DA436E63AB0F541(Local_111[iVar0 /*33*/], iLocal_369, "misschinese2_crystalmaze", "_stand_loop_b", 4f, -8f, 0, 0, 1148846080, 0);
												}
											}
										}
										if (!unk_0x5266F1D2AEF6F73A(iLocal_366) || iLocal_366 == 0)
										{
											if ((unk_0x5266F1D2AEF6F73A(iLocal_369) && unk_0xBD3B265153D3BA2D(iLocal_369) > 0,98f) || !unk_0x5266F1D2AEF6F73A(iLocal_369))
											{
												iLocal_366 = unk_0x2EC137C692A52458(2435,312f, 4967,087f, 41,35f, 0f, 0f, 11,4f, 2);
												unk_0xBF3497E24DEAD835(iLocal_366, 1);
												unk_0x3DA436E63AB0F541(Local_111[iVar0 /*33*/], iLocal_366, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1148846080, 0);
												Local_111[iVar0 /*33*/].f_14 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(1000, 2000));
											}
										}
										if (!func_65() || (func_73(unk_0x4A8C381C258A124D(), 2430,09f, 4965,93f, 41,55f, 1) > 3,438f && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2427,079f, 4964,971f, 41,81169f, 2432,589f, 4959,331f, 48,7548f, 3,3125f, 0, 1, 0)))
										{
											func_91();
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 7:
										if (func_35("CHI2_DALEG", 4, Local_111[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										iLocal_370 = unk_0x2EC137C692A52458(2435,312f, 4967,087f, 41,35f, 0f, 0f, 11,4f, 2);
										unk_0x3DA436E63AB0F541(Local_111[iVar0 /*33*/], iLocal_370, "misschinese2_crystalmaze", "_stand_to_aim", 4f, -8f, 0, 0, 1148846080, 0);
										unk_0x4693060C5049F4E3(iLocal_371, Local_111[iVar0 /*33*/]);
										Local_111[iVar0 /*33*/].f_5++;
										break;
									
									case 9:
										if ((unk_0x5266F1D2AEF6F73A(iLocal_370) && unk_0xBD3B265153D3BA2D(iLocal_370) > 0,98f) || !unk_0x5266F1D2AEF6F73A(iLocal_370))
										{
											unk_0x570AAA413775DFFB(Local_111[iVar0 /*33*/], 1);
											unk_0x974022927CB47E68(Local_111[iVar0 /*33*/]);
											unk_0x646DE293036A3499(Local_111[iVar0 /*33*/], unk_0x4A8C381C258A124D(), -1, 1);
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 10:
										if (!func_65())
										{
											if (func_35("CHI2_DALEA", 4, Local_111[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												unk_0xAAA71DD7E9059338(Local_111[iVar0 /*33*/], 0);
												unk_0x62A5310368A20EFA(Local_111[iVar0 /*33*/], unk_0x4A8C381C258A124D(), 0, 16);
												Local_111[iVar0 /*33*/].f_14 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(3000, 4000));
												Local_111[iVar0 /*33*/].f_15 = 0;
												Local_111[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 11:
										if (unk_0x1DD05E817C89C737() > Local_111[iVar0 /*33*/].f_14)
										{
											if (Local_111[iVar0 /*33*/].f_15 < 4)
											{
												if (func_35("CHI2_DALEA", 4, Local_111[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_111[iVar0 /*33*/].f_5++;
													Local_111[iVar0 /*33*/].f_14 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(3000, 4000));
													Local_111[iVar0 /*33*/].f_15++;
												}
											}
										}
										break;
									
									case 999:
										if (func_35("CHI2_DALEA", 4, Local_111[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 31:
								if (!unk_0x4FAFF4BCB7633475(Local_111[iVar0 /*33*/]))
								{
									if (unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(Local_111[iVar0 /*33*/], 1), 2f, 1))
									{
										Local_111[iVar0 /*33*/].f_5 = 5;
									}
								}
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										if (func_90("FRMFLC", 0, 0))
										{
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 1:
										if (func_35("WRK2", 1, Local_111[iVar0 /*33*/], "oneilcook", 2, unk_0x4A8C381C258A124D(), "trevor", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_111[iVar0 /*33*/].f_5++;
											Local_111[iVar0 /*33*/].f_14 = unk_0x1DD05E817C89C737() + 1300;
										}
										break;
									
									case 2:
										if (unk_0x1DD05E817C89C737() > Local_111[iVar0 /*33*/].f_14)
										{
											unk_0x0B1A40D00F279307(Local_111[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (!func_65())
										{
											Local_111[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (!func_65())
										{
											func_105(iVar0, 27, 0, 0);
										}
										break;
									
									case 5:
										unk_0xD844F5E50DAB6FF7(Local_111[iVar0 /*33*/], unk_0x4A8C381C258A124D(), 50f, 1000, 0, 0);
										Local_111[iVar0 /*33*/].f_5++;
										break;
									
									case 6:
										if (func_88("WRK2"))
										{
											if (unk_0xE7365CC791D1E4EB() == 1 || unk_0xE7365CC791D1E4EB() == 5)
											{
												func_87(0);
											}
											else
											{
												func_87(1);
											}
										}
										func_105(iVar0, 27, 0, 0);
										break;
								}
								break;
							
							case 27:
								switch (Local_111[iVar0 /*33*/].f_5)
								{
									case 0:
										func_99();
										unk_0x96F4A599D1C6F95A(0, 1);
										unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 200f, 999999, 0, 0);
										unk_0xAFC7A89C990C4339(0, -1);
										func_98(&(Local_111[iVar0 /*33*/]), 0);
										unk_0x44FB298D6382876D(Local_111[iVar0 /*33*/], 1);
										unk_0xF09E30AF1B8FB379(&(Local_111[iVar0 /*33*/]));
										if (unk_0xC450B06E5AAA0985(Local_111[iVar0 /*33*/].f_19))
										{
											unk_0xFE54B8568B2ABD12(&(Local_111[iVar0 /*33*/].f_19));
										}
										Local_111[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 4:
								if (iLocal_374 == 1)
								{
									if (unk_0x5266F1D2AEF6F73A(Local_111[iVar0 /*33*/].f_14))
									{
										unk_0x7BB893EF8F683419(Local_111[iVar0 /*33*/].f_14, 0,69f);
									}
									if (iVar0 == 9)
									{
										iLocal_374 = 0;
									}
								}
								if (iLocal_375 == 1)
								{
									if (unk_0x5266F1D2AEF6F73A(Local_111[iVar0 /*33*/].f_14))
									{
										unk_0x7BB893EF8F683419(Local_111[iVar0 /*33*/].f_14, 0f);
									}
									if (iVar0 == 9)
									{
										iLocal_375 = 0;
									}
									Local_111[iVar0 /*33*/].f_5 = 0;
								}
								if (Local_111[iVar0 /*33*/].f_2 == 8)
								{
									if (unk_0x5266F1D2AEF6F73A(Local_111[iVar0 /*33*/].f_14))
									{
										if (Local_111[iVar0 /*33*/].f_5 == 0)
										{
											if (!func_30(23) || iLocal_147 == 3)
											{
												if (unk_0x9B5C1660CCDF7189(Local_111[iVar0 /*33*/], joaat("script_task_synchronized_scene")) == 1)
												{
													if (unk_0xBD3B265153D3BA2D(Local_111[iVar0 /*33*/].f_14) > 0,024f && unk_0xBD3B265153D3BA2D(Local_111[iVar0 /*33*/].f_14) < 0,033f)
													{
														iVar5 = 0;
														if (!unk_0x4FAFF4BCB7633475(Local_111[iVar0 /*33*/]))
														{
															iVar6 = joaat("weapon_unarmed");
															if (unk_0x23B29877D0BE9547(Local_111[iVar0 /*33*/], &iVar6, 1))
															{
																unk_0xC652B7E19CE29859(Local_111[iVar0 /*33*/], 100);
																if (iVar6 == joaat("weapon_pistol"))
																{
																	if (func_86(&iVar5))
																	{
																		unk_0x73992DAFD09D607B(Local_111[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		unk_0xC7AF90C5FC07B06B(Local_111[iVar0 /*33*/], unk_0xD1A6A821F5AC81DB(iLocal_168[iVar5], 1), 0);
																		func_103(Local_111[iVar0 /*33*/], &(Local_111[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0, 0);
																		Local_111[iVar0 /*33*/].f_5 = 1;
																	}
																	else
																	{
																		unk_0x73992DAFD09D607B(Local_111[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		unk_0xC7AF90C5FC07B06B(Local_111[iVar0 /*33*/], 2493,1f, 4971f, 44,9f, 0);
																		func_103(Local_111[iVar0 /*33*/], &(Local_111[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0, 0);
																		Local_111[iVar0 /*33*/].f_5 = 1;
																	}
																}
															}
														}
													}
												}
											}
										}
										else if (Local_111[iVar0 /*33*/].f_5 == 1)
										{
											if (unk_0xBD3B265153D3BA2D(Local_111[iVar0 /*33*/].f_14) > 0,04f)
											{
												Local_111[iVar0 /*33*/].f_5 = 2;
												if (iLocal_372 == 0)
												{
													unk_0x4CAD907F190E6F10(Local_111[iVar0 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_02", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
											}
										}
										else if (Local_111[iVar0 /*33*/].f_5 == 2)
										{
											if (unk_0xBD3B265153D3BA2D(Local_111[iVar0 /*33*/].f_14) > 0,6f)
											{
												Local_111[iVar0 /*33*/].f_5 = 0;
											}
										}
									}
								}
								if (Local_111[iVar0 /*33*/].f_5 == 3)
								{
									if (unk_0x9B5C1660CCDF7189(Local_111[iVar0 /*33*/], joaat("script_task_go_straight_to_coord")) == 7)
									{
										func_105(iVar0, 7, 0, 0);
									}
								}
								break;
							}
					}
					break;
				
				case 5:
				case 6:
					if (Local_117[iVar0 /*24*/].f_20)
					{
						switch (Local_111[iVar0 /*33*/].f_2)
						{
							case 20:
							case 21:
							case 16:
							case 12:
							case 13:
							case 14:
								switch (Local_117[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0xDF2B856299BCDF13(Local_111[iVar0 /*33*/], 2431,704f, 4961,62f, 45,33136f, 2455,376f, 4985,934f, 48,68555f, 13,5625f, 0, 0);
										unk_0x62A5310368A20EFA(Local_111[iVar0 /*33*/], unk_0x4A8C381C258A124D(), 0, 16);
										unk_0x570AAA413775DFFB(Local_111[iVar0 /*33*/], 1);
										unk_0xBE8796DB2B90A437(Local_111[iVar0 /*33*/], 50, 1);
										Local_117[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 17:
								switch (Local_117[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0xDF2B856299BCDF13(Local_111[iVar0 /*33*/], 2431,704f, 4961,62f, 45,33136f, 2455,376f, 4985,934f, 48,68555f, 13,5625f, 0, 0);
										unk_0x62A5310368A20EFA(Local_111[iVar0 /*33*/], unk_0x4A8C381C258A124D(), 0, 16);
										unk_0x570AAA413775DFFB(Local_111[iVar0 /*33*/], 1);
										unk_0xBE8796DB2B90A437(Local_111[iVar0 /*33*/], 50, 1);
										Local_117[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 15:
								switch (Local_117[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0xDF2B856299BCDF13(Local_111[iVar0 /*33*/], 2437,982f, 4959,021f, 45,31057f, 2432,93f, 4961,941f, 48,69256f, 3,1875f, 0, 0);
										unk_0x62A5310368A20EFA(Local_111[iVar0 /*33*/], unk_0x4A8C381C258A124D(), 0, 16);
										unk_0x570AAA413775DFFB(Local_111[iVar0 /*33*/], 1);
										Local_117[iVar0 /*24*/].f_4++;
										break;
									
									case 2:
										if (func_93(18))
										{
											unk_0x805B057FA4E28531(Local_111[iVar0 /*33*/], 0);
											Local_117[iVar0 /*24*/].f_4++;
										}
										break;
								}
								break;
							
							case 10:
							case 18:
							case 19:
							case 11:
								switch (Local_117[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x62A5310368A20EFA(Local_111[iVar0 /*33*/], unk_0x4A8C381C258A124D(), 0, 16);
										unk_0x570AAA413775DFFB(Local_111[iVar0 /*33*/], 1);
										unk_0xBE8796DB2B90A437(Local_111[iVar0 /*33*/], 50, 1);
										if (iLocal_112 == 0)
										{
											unk_0x805B057FA4E28531(Local_111[iVar0 /*33*/], 0);
											unk_0xBB4D4E549F8E6E8C(Local_111[iVar0 /*33*/], 2451,677f, 4954,251f, 44,988f, 3f, 0, 0);
											iLocal_112++;
											Local_117[iVar0 /*24*/].f_4++;
										}
										else
										{
											Local_117[iVar0 /*24*/].f_4 = (unk_0x1DD05E817C89C737() + iLocal_112 * 4000);
											iLocal_112++;
										}
										Local_111[iVar0 /*33*/].f_1 = 1;
										break;
									
									case 2:
										if (func_73(Local_111[iVar0 /*33*/], 2451,677f, 4954,251f, 44,988f, 1) < 3f)
										{
											unk_0x805B057FA4E28531(Local_111[iVar0 /*33*/], 0);
											Local_117[iVar0 /*24*/].f_4++;
										}
										break;
									
									case 3:
										break;
									
									default:
										if (unk_0x1DD05E817C89C737() > Local_117[iVar0 /*24*/].f_4)
										{
											unk_0x805B057FA4E28531(Local_111[iVar0 /*33*/], 0);
											unk_0xBB4D4E549F8E6E8C(Local_111[iVar0 /*33*/], 2451,677f, 4954,251f, 44,988f, 3f, 0, 0);
											Local_117[iVar0 /*24*/].f_4 = 2;
										}
										break;
								}
								break;
							
							case 1:
								switch (Local_117[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0xDF2B856299BCDF13(Local_111[iVar0 /*33*/], 2453,084f, 4969,897f, 50,44285f, 2460,996f, 4977,822f, 53,38035f, 2,9375f, 0, 0);
										unk_0x62A5310368A20EFA(Local_111[iVar0 /*33*/], unk_0x4A8C381C258A124D(), 0, 16);
										unk_0x570AAA413775DFFB(Local_111[iVar0 /*33*/], 1);
										Local_117[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 0:
								switch (Local_117[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0xDF2B856299BCDF13(Local_111[iVar0 /*33*/], 2442,963f, 4964,217f, 50,44285f, 2449,251f, 4970,534f, 53,38035f, 2f, 0, 0);
										unk_0x62A5310368A20EFA(Local_111[iVar0 /*33*/], unk_0x4A8C381C258A124D(), 0, 16);
										unk_0x570AAA413775DFFB(Local_111[iVar0 /*33*/], 1);
										Local_117[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 2:
								switch (Local_117[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0xDF2B856299BCDF13(Local_111[iVar0 /*33*/], 2461,362f, 4976,084f, 50,44285f, 2448,743f, 4988,774f, 53,60143f, 2f, 0, 0);
										unk_0x62A5310368A20EFA(Local_111[iVar0 /*33*/], unk_0x4A8C381C258A124D(), 0, 16);
										unk_0x570AAA413775DFFB(Local_111[iVar0 /*33*/], 1);
										Local_117[iVar0 /*24*/].f_4++;
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
	
	*iParam0 = 0;
	iVar0 = 0;
	*iParam0 = unk_0xC5935DFB3F39785A(0, 10);
	bVar1 = false;
	while (!bVar1)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_168[*iParam0]) && unk_0x5105BE70DEF1F5FB(iLocal_168[*iParam0], 2495,017f, 4970,17f, 44,21808f, 2493,501f, 4971,556f, 45,40248f, 1,375f, 0, 1, 0))
		{
			return 1;
		}
		else
		{
			*iParam0++;
			iVar0++;
			if (*iParam0 == iLocal_168)
			{
				*iParam0 = 0;
			}
		}
		if (iVar0 == 10)
		{
			return 0;
		}
	}
	return 0;
}

void func_87(bool bParam0)
{
	iLocal_390 = 0;
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
	if (unk_0x1B79E937E91F40C3(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_89()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

bool func_90(char* sParam0, int iParam1, int iParam2)
{
	unk_0x32A590914F10401C(sParam0);
	if (iParam1 == 1)
	{
		unk_0xACF853FB3F6EA7D4(iParam2);
	}
	return unk_0x96DEE7666C9409E5();
}

void func_91()
{
	Global_21152 = 0;
	func_92();
}

void func_92()
{
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0xC78B293A5F4EACF9();
		Global_23297 = 0;
		unk_0x0F15249D24BC5ADA(1);
		Global_22286 = 6;
		return;
	}
}

int func_93(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_386[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_386.f_0)
	{
		if (Local_386[iVar0 /*8*/] == iParam0)
		{
			if (Local_386[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_386[iVar0 /*8*/] != 0)
		{
		}
	}
	return 0;
}

void func_94()
{
	Global_21152 = 0;
	func_95();
}

void func_95()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

int func_96(struct<3> Param0, float fParam1, float fParam2)
{
	if (unk_0x7B780C491DEC834E(Param0, fParam1))
	{
		if (!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Param0, fParam2, fParam2, fParam2, 0, 0, 0))
		{
			return 0;
		}
		else if (unk_0x15CCE8886267624F())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_386.f_0)
	{
		if (iParam0 == Local_386[iVar0 /*8*/])
		{
			if (iParam1 == 1)
			{
				Local_386[iVar0 /*8*/].f_2 = 1;
			}
			else
			{
				Local_386[iVar0 /*8*/].f_2 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_98(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xC58DD79B4CA8487F(uLocal_79, 1);
	}
	unk_0x93C0674FC00824D0(uLocal_79);
	if (!unk_0x89568FA9A6BC0B4A(*iParam0, 1))
	{
		unk_0x4BD42B0527065BB6(*iParam0, uLocal_79);
	}
	unk_0xD0557B139A542F12(&uLocal_79);
}

void func_99()
{
	unk_0xB5396F1FB088FE38(&uLocal_79);
}

void func_100(int iParam0)
{
	Local_111[iParam0 /*33*/].f_15 = (Local_111[iParam0 /*33*/].f_15 + system::floor((system::timestep() * 1000f)));
	switch (Local_111[iParam0 /*33*/].f_2)
	{
		case 7:
			if (Local_111[iParam0 /*33*/].f_15 > 2000 && !BitTest(Local_111[iParam0 /*33*/].f_14, 0))
			{
				unk_0xE237FA90A8AFEE59(Local_111[iParam0 /*33*/], 2505,634f, 4996,994f, 46,6624f, 4000, 0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_111[iParam0 /*33*/].f_14), false);
			}
			else if (Local_111[iParam0 /*33*/].f_15 > 8000 && !BitTest(Local_111[iParam0 /*33*/].f_14, 1))
			{
				unk_0xE237FA90A8AFEE59(Local_111[iParam0 /*33*/], 2472,297f, 4962,687f, 47,2297f, 6000, 0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_111[iParam0 /*33*/].f_14), true);
			}
			break;
		
		case 5:
			if (Local_111[iParam0 /*33*/].f_15 > 3000 && !BitTest(Local_111[iParam0 /*33*/].f_14, 0))
			{
				if (!unk_0x4FAFF4BCB7633475(Local_111[6 /*33*/]))
				{
					unk_0xE67051907958B5EB(Local_111[iParam0 /*33*/], Local_111[6 /*33*/], 4000, 0, 2);
					unk_0x0B0C9A0F9AAEB7F0(&(Local_111[iParam0 /*33*/].f_14), false);
				}
			}
			else if (Local_111[iParam0 /*33*/].f_15 > 11000 && !BitTest(Local_111[iParam0 /*33*/].f_14, 1))
			{
				unk_0xE237FA90A8AFEE59(Local_111[iParam0 /*33*/], 2494,634f, 5001,994f, 46,6624f, 7000, 0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_111[iParam0 /*33*/].f_14), true);
			}
			else if (Local_111[iParam0 /*33*/].f_15 > 20000 && !BitTest(Local_111[iParam0 /*33*/].f_14, 2))
			{
				unk_0xE237FA90A8AFEE59(Local_111[iParam0 /*33*/], 2477,634f, 4966,994f, 46,6624f, 7000, 0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_111[iParam0 /*33*/].f_14), 2);
			}
			break;
		
		case 4:
			if (Local_111[iParam0 /*33*/].f_15 > 3000 && !BitTest(Local_111[iParam0 /*33*/].f_14, 0))
			{
				unk_0xE237FA90A8AFEE59(Local_111[iParam0 /*33*/], 2505,634f, 4996,994f, 46,6624f, 5000, 0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_111[iParam0 /*33*/].f_14), false);
			}
			else if (Local_111[iParam0 /*33*/].f_15 > 10000 && !BitTest(Local_111[iParam0 /*33*/].f_14, 1))
			{
				unk_0xE237FA90A8AFEE59(Local_111[iParam0 /*33*/], 2461,449f, 4977,48f, 51,7483f, 6000, 0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_111[iParam0 /*33*/].f_14), true);
			}
			else if (Local_111[iParam0 /*33*/].f_15 > 18000 && !BitTest(Local_111[iParam0 /*33*/].f_14, 2))
			{
				unk_0xE237FA90A8AFEE59(Local_111[iParam0 /*33*/], 2505,634f, 4996,994f, 46,6624f, 6000, 0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_111[iParam0 /*33*/].f_14), 2);
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
	
	fVar1 = (Param2.f_0 - Param0.f_0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x4964D7A2BFD2F9A3(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_103(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = unk_0xB6B621402486C3E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (!unk_0xA23AABF378361F85(iParam0))
		{
			bVar0 = true;
			if (unk_0x1F7A48429F9F64CE(iParam0) && iParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0x2BF2F8E20C19583C(iParam0, 1);
				}
				else
				{
					unk_0xF42995E2FC0559E0(iParam0, 1, iParam8);
				}
				uParam1->f_7 = iParam0;
				unk_0x8B185FD7C0308117(iParam0, iParam2);
				unk_0x9FFBD1A17AAE3E0D(iParam0, fParam6);
				if (unk_0xC450B06E5AAA0985(*uParam1))
				{
					unk_0x1456FD5C0C438B19(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x12022943BDF6F088(iParam0, iParam9);
		}
		unk_0xB070F32F5FE88A2A(iParam0, iParam4);
		unk_0x2A253D5DC7CA1CEC(iParam0, iParam5);
		*uParam1 = unk_0xA95E5FB2D27EECF2(iParam0);
		if (!iParam9 == -1 || iParam12)
		{
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x61183D6239A9D7B8(*uParam1, iParam8);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam7))
				{
					unk_0xF3D182B81172EAB6("STRING");
					if (bParam10)
					{
						unk_0x60D332F23943B34F(iParam7);
					}
					else
					{
						unk_0xACF853FB3F6EA7D4(iParam7);
					}
					unk_0xFB605529038475D2(*uParam1);
				}
				unk_0x1456FD5C0C438B19(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x7F420695E3F776FB(iParam0, 0))
		{
			uParam1->f_1 = unk_0x294B0261C20A78E0(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (unk_0xC450B06E5AAA0985(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x61183D6239A9D7B8(uParam1->f_1, iParam8);
					}
					if (!unk_0xD6F9DEE4765092A9(iParam7))
					{
						unk_0xF3D182B81172EAB6("STRING");
						if (bParam10)
						{
							unk_0x60D332F23943B34F(iParam7);
						}
						else
						{
							unk_0xACF853FB3F6EA7D4(iParam7);
						}
						unk_0xFB605529038475D2(uParam1->f_1);
					}
					unk_0x1456FD5C0C438B19(uParam1->f_1, 7);
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xC450B06E5AAA0985(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x8744D2E3FC95740E(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xC450B06E5AAA0985(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x8744D2E3FC95740E(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_104(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		unk_0x25DBF9F9C6BDFFEA(iParam0, fParam1);
		unk_0xAF30637CFE0F3A89(iParam0, fParam2);
		unk_0xA6102F762BBA9BC9(iParam0, (fParam3 / 2f));
		unk_0x3C7306C2CE967C57(iParam0, fParam4);
		unk_0xC8DEC2468E748263(iParam0, fParam5);
		unk_0xC45887CFF81A1950(iParam0, fParam6);
		unk_0xC3AD0E1324FB3465(iParam0, 10, fParam7);
	}
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!unk_0x4FAFF4BCB7633475(Local_111[iParam0 /*33*/]))
	{
		if (iParam0 >= 0)
		{
			Local_111[iParam0 /*33*/].f_4 = Local_111[iParam0 /*33*/].f_3;
			Local_111[iParam0 /*33*/].f_3 = iParam1;
			Local_111[iParam0 /*33*/].f_5 = iParam2;
			Local_111[iParam0 /*33*/].f_6 = { 0f, 0f, 0f };
			Local_111[iParam0 /*33*/].f_9 = { 0f, 0f, 0f };
			Local_111[iParam0 /*33*/].f_12 = 0f;
			Local_111[iParam0 /*33*/].f_13 = 0f;
			Local_111[iParam0 /*33*/].f_14 = iParam3;
			Local_111[iParam0 /*33*/].f_15 = 0;
			Local_117[iParam0 /*24*/].f_3 = 3;
		}
	}
}

void func_106(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	(*iParam0)[iParam1 /*24*/] = uParam2;
	(iParam0[iParam1 /*24*/])->f_8 = iParam3;
	(iParam0[iParam1 /*24*/])->f_20 = iParam4;
	(iParam0[iParam1 /*24*/])->f_21 = iParam5;
	if (iParam1 > iLocal_50)
	{
		iLocal_50 = iParam1 + 1;
	}
}

int func_107(int iParam0, int iParam1, struct<3> Param2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iParam1 = iParam1;
	iParam6 = iParam6;
	if (Local_111[iParam0 /*33*/].f_1 != 1 && Local_111[iParam0 /*33*/].f_1 != 0)
	{
		iVar0 = unk_0x0E171121A3A25363(Param2);
		if (iVar0 == 0)
		{
			return 0;
		}
		else if (!unk_0xD0B0D1BD29678350(iVar0))
		{
			return 0;
		}
	}
	switch (iLocal_109)
	{
		case 0:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_m_hillbilly_01"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 2, 0, 1, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 3, 1, 1, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 1:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_m_hillbilly_02"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 2:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_y_methhead_01"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 3:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_m_hillbilly_01"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 2, 1, 2, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 3, 1, 0, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 4:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_m_hillbilly_02"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 5:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_y_methhead_01"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 6:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_m_hillbilly_01"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 7:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_m_hillbilly_02"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 3, 2, 0, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 8:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_y_methhead_01"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 3, 1, 0, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 9:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_m_hillbilly_02"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 3, 1, 2, 0);
			break;
		
		case 10:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_y_methhead_01"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 11:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_m_hillbilly_02"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 3, 2, 2, 0);
			break;
		
		case 12:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_m_hillbilly_01"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 2, 0, 2, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 3, 1, 2, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 13:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_m_hillbilly_02"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 3, 1, 1, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 14:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_y_methhead_01"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 3, 0, 2, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 15:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_m_hillbilly_02"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 16:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_y_methhead_01"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 17:
			Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_m_hillbilly_02"), Param2, iParam3, 1, 1);
			unk_0x77EFA99E6A8FFC43(Local_111[iParam0 /*33*/]);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 3, 1, 2, 0);
			unk_0xD1C578C204015E1F(Local_111[iParam0 /*33*/], 4, 0, 1, 0);
			break;
	}
	if (iLocal_109 > 17)
	{
		Local_111[iParam0 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_y_methhead_01"), Param2, iParam3, 1, 1);
		unk_0xC6E8E1D693021E9E(Local_111[iParam0 /*33*/], 0);
	}
	iLocal_109++;
	if (Local_111[iParam0 /*33*/].f_1 == 5)
	{
		unk_0xAAA71DD7E9059338(Local_111[iParam0 /*33*/], 1);
		unk_0x3CEA1FD137ACE2D9(Local_111[iParam0 /*33*/], iLocal_115);
	}
	else
	{
		unk_0xB41DEC3AAC1AA107(Local_111[iParam0 /*33*/], iParam4, 3000, iParam5, 1);
		unk_0x3CEA1FD137ACE2D9(Local_111[iParam0 /*33*/], iLocal_114);
		unk_0x4BD214FCF7332FF6(Local_111[iParam0 /*33*/], 1);
		unk_0xBE8796DB2B90A437(Local_111[iParam0 /*33*/], 9, 1);
		unk_0x35365D1E3ADB7109(Local_111[iParam0 /*33*/], 120f);
		unk_0x25DBF9F9C6BDFFEA(Local_111[iParam0 /*33*/], 22f);
		unk_0xC45887CFF81A1950(Local_111[iParam0 /*33*/], 22f);
		unk_0x0428AFDCAA63B06E(Local_111[iParam0 /*33*/], 118, 0);
		unk_0xC3AD0E1324FB3465(Local_111[iParam0 /*33*/], 14, 3f);
		if (Local_111[iParam0 /*33*/].f_1 == 2)
		{
			unk_0xC652B7E19CE29859(Local_111[iParam0 /*33*/], 12);
		}
		else
		{
			unk_0xC652B7E19CE29859(Local_111[iParam0 /*33*/], 45);
		}
		unk_0x9E6CC93E007219AC(Local_111[iParam0 /*33*/], 1);
		unk_0x1F7539C841C2A71F(Local_111[iParam0 /*33*/], 1);
		unk_0xBE8796DB2B90A437(Local_111[iParam0 /*33*/], 15, 0);
		unk_0xBE8796DB2B90A437(Local_111[iParam0 /*33*/], 17, 0);
		func_108(Local_111[iParam0 /*33*/], 1);
	}
	unk_0x9EDCA2C3E5F3B330(Local_111[iParam0 /*33*/]);
	unk_0x11C125313CB8ADA2(Local_111[iParam0 /*33*/], 1);
	unk_0xFFB6CB69ACC75D8D(Local_111[iParam0 /*33*/], 0f, 0f, 0f);
	unk_0x92298AA9DE8C4A55(Local_111[iParam0 /*33*/], 1);
	unk_0xE54C4227DC826E1C(Local_111[iParam0 /*33*/], 1);
	unk_0xD25E9BDC14A0B649(Local_111[iParam0 /*33*/], 150, 0, 0);
	return 1;
}

void func_108(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_64196[iVar0 /*2*/] != 0)
			{
				if (Global_64196[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_64195)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_64196[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_64196[iVar1 /*2*/] = iParam0;
	Global_64196[iVar1 /*2*/].f_1 = 7;
	Global_64195++;
}

void func_109(var uParam0, var uParam1, struct<3> Param2, struct<3> Param3, struct<3> Param4, struct<3> Param5, struct<3> Param6, struct<3> Param7, struct<3> Param8, struct<3> Param9, struct<3> Param10, struct<3> Param11)
{
	if (iLocal_50 > 0)
	{
		func_121(uParam0, Param8, Param9, Param6, Param7);
		func_113(uParam0, uParam1, Param2, Param3, Param4);
		func_110(uParam0, Param5, Param6, Param7, Param8, Param9, Param10, Param11);
	}
}

void func_110(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, struct<3> Param5, struct<3> Param6, struct<3> Param7)
{
	if (unk_0x174DBD3C5DB3557B())
	{
		if (bLocal_73)
		{
			if (((iLocal_58 > iLocal_66 || iLocal_67 != iLocal_59) || (iLocal_58 < iLocal_66 && iLocal_58 == 8)) || (iLocal_58 == 10 && bLocal_51 == 0))
			{
				iLocal_65 = 1;
				iLocal_66 = iLocal_58;
				iLocal_67 = iLocal_59;
			}
			switch (iLocal_65)
			{
				case 1:
					if (iLocal_59 > -1)
					{
						if (!unk_0x89568FA9A6BC0B4A((*uParam0)[iLocal_59 /*24*/], 1))
						{
							switch (iLocal_58)
							{
								case 8:
									if (!bLocal_51)
									{
										if (!bLocal_54)
										{
											if (!iLocal_72)
											{
												if (!func_88(Param5.f_1))
												{
													func_94();
													if (func_111(Param5.f_1, Param5.f_2, (*uParam0)[iLocal_59 /*24*/], Param5.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
													{
														iLocal_65 = 2;
													}
												}
											}
											else
											{
												iLocal_65 = 2;
											}
										}
										else if (!func_88(Param4.f_1))
										{
											func_94();
											if (func_111(Param4.f_1, Param4.f_2, (*uParam0)[iLocal_59 /*24*/], Param4.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_65 = 2;
											}
										}
									}
									else
									{
										iLocal_65 = 2;
									}
									break;
								
								case 7:
									iLocal_72 = 0;
									func_94();
									if (func_111(Param1.f_1, Param1.f_2, (*uParam0)[iLocal_59 /*24*/], Param1.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_65 = 2;
									}
									break;
								
								case 5:
									iLocal_72 = 0;
									func_94();
									if (func_111(Param6.f_1, Param6.f_2, (*uParam0)[iLocal_59 /*24*/], Param6.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_65 = 2;
									}
									break;
								
								case 3:
									if (!bLocal_51 && !iLocal_72)
									{
										func_94();
										if (func_111(Param7.f_1, Param7.f_2, (*uParam0)[iLocal_59 /*24*/], Param7.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											iLocal_65 = 2;
										}
									}
									else
									{
										iLocal_65 = 2;
									}
									break;
								
								case 6:
									if (!bLocal_54)
									{
										if (((!func_88(Param2.f_1) && !func_88(Param3.f_1)) && !func_88(Param4.f_1)) && !func_88(Param5.f_1))
										{
											iLocal_72 = 0;
											func_94();
											if (func_111(Param2.f_1, Param2.f_2, (*uParam0)[iLocal_59 /*24*/], Param2.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_65 = 2;
											}
										}
									}
									else
									{
										iLocal_65 = 2;
									}
									break;
								
								case 10:
								case 9:
									if (!bLocal_54)
									{
										if (((!func_88(Param2.f_1) && !func_88(Param3.f_1)) && !func_88(Param4.f_1)) && !func_88(Param5.f_1))
										{
											iLocal_72 = 0;
											func_94();
											if (func_111(Param3.f_1, Param3.f_2, (*uParam0)[iLocal_59 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_65 = 2;
											}
										}
									}
									else
									{
										if (!bLocal_51)
										{
											if (func_111(Param4.f_1, Param4.f_2, (*uParam0)[iLocal_59 /*24*/], Param4.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_72 = 0;
												iLocal_65 = 2;
											}
										}
										iLocal_65 = 2;
									}
									break;
							}
						}
						else
						{
							iLocal_65 = 2;
						}
					}
					else
					{
						iLocal_65 = 2;
					}
					break;
				
				case 2:
					if (!func_65())
					{
						iLocal_65 = 0;
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
	if (iParam4 != -1)
	{
		func_112(iParam4, iParam5, sParam6);
	}
	if (iParam7 != -1)
	{
		func_112(iParam7, iParam8, sParam9);
	}
	if (iParam10 != -1)
	{
		func_112(iParam10, iParam11, sParam12);
	}
	if (!func_59())
	{
		if (!unk_0xFBA523E6F8ACE541())
		{
			if (func_36(&Local_75, cLocal_76, sParam0, iParam13, 0, 0, 0))
			{
				iLocal_78 = 0;
				return 1;
			}
			else if (iLocal_77 != unk_0x1DD05E817C89C737())
			{
				iLocal_78++;
				iLocal_77 = unk_0x1DD05E817C89C737();
				if (iLocal_78 >= 10)
				{
					iLocal_78 = 0;
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_112(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_74)
	{
		if (iLocal_74[iVar0] == iParam1)
		{
			func_63(&Local_75, iVar0);
			iLocal_74[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_74[iParam0] != 0)
	{
		func_63(&Local_75, iParam0);
	}
	func_62(&Local_75, iParam0, iParam1, sParam2, 0, 1);
	iLocal_74[iParam0] = iParam1;
}

void func_113(var uParam0, var uParam1, struct<3> Param2, struct<3> Param3, struct<3> Param4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	bool bVar8;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x89568FA9A6BC0B4A((*uParam0)[iVar0 /*24*/], 1) && !unk_0x145143011E40A843((*uParam0)[iVar0 /*24*/]))
		{
			if (!(uParam0[iVar0 /*24*/])->f_21)
			{
				switch ((uParam0[iVar0 /*24*/])->f_3)
				{
					case 4:
						if ((unk_0x282B0289FBD3C119((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || unk_0x282B0289FBD3C119((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR")) || unk_0x9B5C1660CCDF7189((*uParam0)[iVar0 /*24*/], joaat("script_task_synchronized_scene")) == 1)
						{
							if (!unk_0x4FAFF4BCB7633475((*uParam0)[iVar0 /*24*/]))
							{
								unk_0x974022927CB47E68((*uParam0)[iVar0 /*24*/]);
							}
							if (!unk_0x89568FA9A6BC0B4A((*uParam0)[iVar0 /*24*/], 1))
							{
								unk_0x895CE77855F9AFD2((*uParam0)[iVar0 /*24*/]);
							}
						}
						else if (unk_0x9B5C1660CCDF7189((*uParam0)[iVar0 /*24*/], joaat("script_task_use_nearest_scenario_to_pos")) == 7)
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									if (!unk_0x89568FA9A6BC0B4A((*uParam0)[iVar0 /*24*/], 1))
									{
										unk_0x895CE77855F9AFD2((*uParam0)[iVar0 /*24*/]);
									}
									if (!unk_0x282B0289FBD3C119((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") && !unk_0x282B0289FBD3C119((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR"))
									{
										if (unk_0x7F420695E3F776FB((*uParam0)[iVar0 /*24*/], 0))
										{
											iVar2 = unk_0xCDA725BC2F170795((*uParam0)[iVar0 /*24*/]);
											if (unk_0xD9F5E1FEFD1329E4(iVar2, 0))
											{
												if (unk_0x050D073F91C5243C(iVar2))
												{
													Var3 = { unk_0xE5741C6B6539231F(iVar2) };
													unk_0x1D2DAF2A41FFC4A0(iVar2);
													unk_0x1AB7223AC0702871(iVar2, Var3);
													unk_0x092B9247AF00F5CF((*uParam0)[iVar0 /*24*/], 0, 0);
												}
											}
										}
										if (!unk_0x7F420695E3F776FB((*uParam0)[iVar0 /*24*/], 0))
										{
											switch ((uParam0[iVar0 /*24*/])->f_1)
											{
												case 2:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if ((uParam0[iVar0 /*24*/])->f_10 >= 0)
															{
																if (unk_0xFC8BFE4B41177C22((*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]))
																{
																	fVar1 = func_119((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]);
																	if (fVar1 > -45f && fVar1 < 45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar1 > -135f && fVar1 <= -45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else if (fVar1 >= 45f && fVar1 <= 135f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 4;
																	}
																	(uParam0[iVar0 /*24*/])->f_11 = unk_0x1DD05E817C89C737() + 500;
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																}
															}
															break;
														
														case 1:
															if (unk_0x1DD05E817C89C737() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																unk_0x96F4A599D1C6F95A(0, 1);
																unk_0x10425721983AE158(0, "misschinese2_bank1", "react_forward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x96F4A599D1C6F95A(0, 0);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 2:
															if (unk_0x1DD05E817C89C737() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																unk_0x96F4A599D1C6F95A(0, 1);
																unk_0x10425721983AE158(0, "misschinese2_bank1", "react_left_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x96F4A599D1C6F95A(0, 0);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 3:
															if (unk_0x1DD05E817C89C737() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																unk_0x96F4A599D1C6F95A(0, 1);
																unk_0x10425721983AE158(0, "misschinese2_bank1", "react_right_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x96F4A599D1C6F95A(0, 0);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 4:
															if (unk_0x1DD05E817C89C737() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																unk_0x96F4A599D1C6F95A(0, 1);
																unk_0x10425721983AE158(0, "misschinese2_bank1", "react_backward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x96F4A599D1C6F95A(0, 0);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 7:
													if ((uParam0[iVar0 /*24*/])->f_5 < 2)
													{
														unk_0x974022927CB47E68((*uParam0)[iVar0 /*24*/]);
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_61;
														iLocal_61++;
														if (iLocal_61 == 2)
														{
															iLocal_61 = 0;
														}
													}
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															unk_0x3C0F448853B71C92((*uParam0)[iVar0 /*24*/], unk_0xF3D409E30929BD33((*uParam0)[iVar0 /*24*/], 0), 1);
															func_99();
															if (!unk_0x7F420695E3F776FB((*uParam0)[iVar0 /*24*/], 1))
															{
																unk_0x96F4A599D1C6F95A(0, 1);
																unk_0x10425721983AE158(0, "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x96F4A599D1C6F95A(0, 0);
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															unk_0xF6CC23160DD0AAED(0, 200f, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = unk_0x1DD05E817C89C737() + 3000;
															break;
														
														case 1:
															func_99();
															unk_0x96F4A599D1C6F95A(0, 1);
															iVar4 = func_118();
															unk_0x96F4A599D1C6F95A(0, 0);
															unk_0xF6CC23160DD0AAED(0, 200f, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x1DD05E817C89C737() + iVar4);
															break;
														
														default:
															if (unk_0x13CCB1AD131C1082((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
															{
																if (unk_0x82E64DE58A6B84A8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") < 0,2f)
																{
																	unk_0x6D75623C644D6F83((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0,2f);
																}
															}
															if (unk_0x1DD05E817C89C737() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 5:
													if ((uParam0[iVar0 /*24*/])->f_5 <= 2)
													{
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_62;
														iLocal_62++;
														if (iLocal_62 == 2)
														{
															iLocal_62 = 0;
														}
													}
													if (!unk_0x7F420695E3F776FB((*uParam0)[iVar0 /*24*/], 1))
													{
														switch ((uParam0[iVar0 /*24*/])->f_5)
														{
															case 0:
																unk_0xAAA71DD7E9059338((*uParam0)[iVar0 /*24*/], 1);
																unk_0x10425721983AE158((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 4f, -4f, -1, 8, 0, 0, 0, 0);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 1:
																unk_0xAAA71DD7E9059338((*uParam0)[iVar0 /*24*/], 1);
																unk_0x10425721983AE158((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 8, 0, 0, 0, 0);
																unk_0x3C0F448853B71C92((*uParam0)[iVar0 /*24*/], unk_0xF3D409E30929BD33((*uParam0)[iVar0 /*24*/], 0), 1);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 3:
																if (unk_0x13CCB1AD131C1082((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
																{
																	if (unk_0x82E64DE58A6B84A8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0,95f)
																	{
																		if (func_116(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 4;
																		}
																		else
																		{
																			unk_0x10425721983AE158((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, unk_0xC5935DFB3F39785A(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																if (unk_0x13CCB1AD131C1082((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
																{
																	if (unk_0x82E64DE58A6B84A8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0,95f)
																	{
																		if (func_116(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 5;
																		}
																		else
																		{
																			unk_0x10425721983AE158((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_e", 4f, -2f, unk_0xC5935DFB3F39785A(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																break;
															
															case 4:
																if (unk_0x1D5CD3EAAA7422B0((unk_0xCFC0C995455A6204((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	unk_0x10425721983AE158((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, unk_0xC5935DFB3F39785A(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 5:
																if (unk_0x1D5CD3EAAA7422B0((unk_0xCFC0C995455A6204((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	unk_0x10425721983AE158((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_f", 4f, -2f, unk_0xC5935DFB3F39785A(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 6:
																if (unk_0x9B5C1660CCDF7189((*uParam0)[iVar0 /*24*/], joaat("script_task_play_anim")) == 7)
																{
																	(uParam0[iVar0 /*24*/])->f_5 = 0;
																	(uParam0[iVar0 /*24*/])->f_4++;
																}
																break;
														}
													}
													else
													{
														(uParam0[iVar0 /*24*/])->f_5 = 0;
														(uParam0[iVar0 /*24*/])->f_4++;
													}
													break;
												
												case 4:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(0, 2000));
															break;
														
														default:
															if (unk_0x1DD05E817C89C737() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_3 = 5;
																(uParam0[iVar0 /*24*/])->f_1 = 0;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
													}
													break;
												
												case 8:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 10:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 6;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 3:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(0, 2000));
															break;
														
														default:
															if (unk_0x1DD05E817C89C737() > (uParam0[iVar0 /*24*/])->f_5)
															{
																if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 5;
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
												
												case 1:
													iLocal_60 = iVar0;
													if (func_115(iVar0, uParam0, "", Param2, Param3, Param4, 0))
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_1 = 0;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 6:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if (iLocal_63 == 0)
															{
																if (!unk_0x7F420695E3F776FB((*uParam0)[iVar0 /*24*/], 1))
																{
																	Var5 = { unk_0xD1A6A821F5AC81DB((*uParam0)[iVar0 /*24*/], 1) };
																	Var6 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
																	fVar7 = unk_0x21CDF75488EFB98B(((Var6.f_2 - Var5.f_2) / func_4((*uParam0)[iVar0 /*24*/], unk_0x4A8C381C258A124D(), 0)));
																	if (fVar7 > 20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar7 < -20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
																iLocal_63++;
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_3 = 6;
																(uParam0[iVar0 /*24*/])->f_1 = 10;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
														
														case 1:
															func_99();
															unk_0x96F4A599D1C6F95A(0, 1);
															unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 1000);
															unk_0x10425721983AE158(0, "misschinese2_bank1", "spot_high", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0x96F4A599D1C6F95A(0, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 2:
															func_99();
															unk_0x96F4A599D1C6F95A(0, 1);
															unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 1000);
															unk_0x10425721983AE158(0, "misschinese2_bank1", "spot_low", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0x96F4A599D1C6F95A(0, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 3:
															func_99();
															unk_0x96F4A599D1C6F95A(0, 1);
															unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 1000);
															unk_0x10425721983AE158(0, "misschinese2_bank1", "spot_mid", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0x96F4A599D1C6F95A(0, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 4:
															if (bLocal_54)
															{
																if (unk_0x1D5CD3EAAA7422B0(func_119((*uParam0)[iVar0 /*24*/], unk_0x4A8C381C258A124D())) < 20f)
																{
																	if (unk_0x13CCB1AD131C1082((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high", 3))
																	{
																		if (unk_0x82E64DE58A6B84A8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high") > func_114(((func_4((*uParam0)[iVar0 /*24*/], unk_0x4A8C381C258A124D(), 1) + 5f) / 35f), 0,27f, 0,9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (unk_0x13CCB1AD131C1082((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid", 3))
																	{
																		if (unk_0x82E64DE58A6B84A8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid") > func_114(((func_4((*uParam0)[iVar0 /*24*/], unk_0x4A8C381C258A124D(), 1) + 5f) / 35f), 0,27f, 0,9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (unk_0x13CCB1AD131C1082((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low", 3))
																	{
																		if (unk_0x82E64DE58A6B84A8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low") > func_114(((func_4((*uParam0)[iVar0 /*24*/], unk_0x4A8C381C258A124D(), 1) + 5f) / 35f), 0,27f, 0,9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
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
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_21)
									{
										if (unk_0x13CCB1AD131C1082((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
										{
											bVar8 = true;
											if (unk_0x82E64DE58A6B84A8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0x13CCB1AD131C1082((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
										{
											bVar8 = true;
											if (unk_0x82E64DE58A6B84A8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0x13CCB1AD131C1082((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0x82E64DE58A6B84A8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0x13CCB1AD131C1082((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body", 3))
										{
											bVar8 = true;
											if (unk_0x82E64DE58A6B84A8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0x13CCB1AD131C1082((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0x82E64DE58A6B84A8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0x13CCB1AD131C1082((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0x82E64DE58A6B84A8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0x13CCB1AD131C1082((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0x82E64DE58A6B84A8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0x13CCB1AD131C1082((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0x82E64DE58A6B84A8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (!bVar8)
										{
											(uParam0[iVar0 /*24*/])->f_4 = 2;
											(uParam0[iVar0 /*24*/])->f_5 = unk_0x1DD05E817C89C737() + 2000;
											unk_0x62A5310368A20EFA((*uParam0)[iVar0 /*24*/], unk_0x4A8C381C258A124D(), 0, 16);
											unk_0x788F35D395511DFE((*uParam0)[iVar0 /*24*/], 1, 1);
											unk_0x570AAA413775DFFB((*uParam0)[iVar0 /*24*/], 1);
										}
									}
									break;
								
								case 2:
									if (unk_0x1DD05E817C89C737() > (uParam0[iVar0 /*24*/])->f_5)
									{
										(uParam0[iVar0 /*24*/])->f_3 = 5;
										(uParam0[iVar0 /*24*/])->f_1 = 0;
										(uParam0[iVar0 /*24*/])->f_4 = 0;
									}
									break;
								}
						}
						break;
					
					case 5:
					case 6:
						if (unk_0x282B0289FBD3C119((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || unk_0x5110BDFA9CB51F2B((*uParam0)[iVar0 /*24*/]))
						{
							if (!unk_0x4FAFF4BCB7633475((*uParam0)[iVar0 /*24*/]))
							{
								unk_0x974022927CB47E68((*uParam0)[iVar0 /*24*/]);
							}
						}
						else
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									(uParam0[iVar0 /*24*/])->f_11 = 0;
									if ((iVar0 == 12 || iVar0 == 13) || iVar0 == 14)
									{
									}
									unk_0x3C0F448853B71C92((*uParam0)[iVar0 /*24*/], unk_0xF3D409E30929BD33((*uParam0)[iVar0 /*24*/], 0), 1);
									unk_0xAAA71DD7E9059338((*uParam0)[iVar0 /*24*/], 0);
									unk_0xAB51C8960A87DF53((*uParam0)[iVar0 /*24*/]);
									unk_0xBE8796DB2B90A437((*uParam0)[iVar0 /*24*/], 50, 1);
									unk_0x1CA08719184AFC6F((*uParam0)[iVar0 /*24*/], 512, 1);
									(uParam0[iVar0 /*24*/])->f_4++;
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_20)
									{
										*(uParam1[0 /*3*/]) = { *(uParam1[0 /*3*/]) };
										iLocal_64 = iLocal_64;
										uLocal_68 = uLocal_68;
										unk_0x62A5310368A20EFA((*uParam0)[iVar0 /*24*/], unk_0x4A8C381C258A124D(), 0, 16);
										unk_0x788F35D395511DFE((*uParam0)[iVar0 /*24*/], 1, 1);
										unk_0x570AAA413775DFFB((*uParam0)[iVar0 /*24*/], 1);
										(uParam0[iVar0 /*24*/])->f_4++;
										(uParam0[iVar0 /*24*/])->f_11 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(20000, 35000));
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

int func_115(int iParam0, var uParam1, char* sParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, bool bParam6)
{
	switch ((uParam1[iParam0 /*24*/])->f_5)
	{
		case 0:
			if (!unk_0x1B79E937E91F40C3("chi2_hear", Param3.f_1))
			{
				if (func_65())
				{
					if (!func_88(Param3.f_1))
					{
						func_91();
					}
				}
				if (func_111(Param3.f_1, Param3.f_2, (*uParam1)[iParam0 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
				{
					(uParam1[iParam0 /*24*/])->f_12 = { unk_0xD1A6A821F5AC81DB((*uParam1)[iParam0 /*24*/], 1) };
					(uParam1[iParam0 /*24*/])->f_18 = unk_0xCFC0C995455A6204((*uParam1)[iParam0 /*24*/]);
					(uParam1[iParam0 /*24*/])->f_5 = 0;
					(uParam1[iParam0 /*24*/])->f_5++;
					(uParam1[iParam0 /*24*/])->f_11 = unk_0x1DD05E817C89C737() + 1000;
				}
			}
			else
			{
				(uParam1[iParam0 /*24*/])->f_12 = { unk_0xD1A6A821F5AC81DB((*uParam1)[iParam0 /*24*/], 1) };
				(uParam1[iParam0 /*24*/])->f_18 = unk_0xCFC0C995455A6204((*uParam1)[iParam0 /*24*/]);
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 1:
			if (unk_0x1DD05E817C89C737() > (uParam1[iParam0 /*24*/])->f_11)
			{
				unk_0xCD76801E1106CABE((*uParam1)[iParam0 /*24*/], unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 5000);
				(uParam1[iParam0 /*24*/])->f_5++;
				(uParam1[iParam0 /*24*/])->f_11 = unk_0x1DD05E817C89C737() + 5000;
			}
			break;
		
		case 2:
			if (!unk_0x1B79E937E91F40C3("chi2_hear", Param3.f_1))
			{
				if ((unk_0xC1204DBD7B8A643E(unk_0x259BE71D8A81D4FA(), (*uParam1)[iParam0 /*24*/]) || iLocal_71 == 1) && func_73((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_12, 1) < (uParam1[iParam0 /*24*/])->f_19)
				{
					if (unk_0x1DD05E817C89C737() > ((uParam1[iParam0 /*24*/])->f_11 - 3000))
					{
						unk_0xA966E518B752B92A((*uParam1)[iParam0 /*24*/], unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1f, 20000, 0,1f, 0, 1193033728);
						(uParam1[iParam0 /*24*/])->f_15 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
						(uParam1[iParam0 /*24*/])->f_5 = 5;
					}
				}
				else if (unk_0x1DD05E817C89C737() > (uParam1[iParam0 /*24*/])->f_11)
				{
					if (func_111(Param5.f_1, Param5.f_2, (*uParam1)[iParam0 /*24*/], Param5.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						if (bParam6)
						{
						}
						(uParam1[iParam0 /*24*/])->f_5++;
					}
				}
			}
			else if (unk_0x1DD05E817C89C737() > (uParam1[iParam0 /*24*/])->f_11)
			{
				unk_0x2280392018BC0DD3((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_18, 2000);
				(uParam1[iParam0 /*24*/])->f_5 = 4;
			}
			break;
		
		case 3:
			func_99();
			unk_0xA966E518B752B92A(0, (uParam1[iParam0 /*24*/])->f_12, 1f, 20000, 0,2f, 4096, 1193033728);
			unk_0x2280392018BC0DD3(0, (uParam1[iParam0 /*24*/])->f_18, 2000);
			func_98(uParam1[iParam0 /*24*/], 0);
			(uParam1[iParam0 /*24*/])->f_11 = unk_0x1DD05E817C89C737() + 3000;
			(uParam1[iParam0 /*24*/])->f_5++;
			break;
		
		case 4:
			if (unk_0x9B5C1660CCDF7189((*uParam1)[iParam0 /*24*/], joaat("script_task_perform_sequence")) == 7 || (unk_0x1B79E937E91F40C3("chi2_hear", Param3.f_1) && unk_0x9B5C1660CCDF7189((*uParam1)[iParam0 /*24*/], joaat("script_task_achieve_heading")) == 7))
			{
				if (!unk_0x1B79E937E91F40C3(sParam2, ""))
				{
					unk_0x21B9EFA4B4AA3A5B((*uParam1)[iParam0 /*24*/], sParam2, 0, 1);
				}
				(uParam1[iParam0 /*24*/])->f_4 = 0;
				(uParam1[iParam0 /*24*/])->f_5 = 0;
				(uParam1[iParam0 /*24*/])->f_1 = 0;
				(uParam1[iParam0 /*24*/])->f_2 = 0;
				if (unk_0x1B79E937E91F40C3("chi2_hear", Param3.f_1))
				{
					(uParam1[iParam0 /*24*/])->f_3 = 3;
				}
				else
				{
					(uParam1[iParam0 /*24*/])->f_3 = 2;
				}
				iLocal_60 = -1;
			}
			break;
		
		case 5:
			if (func_111(Param3.f_1, Param4.f_2, (*uParam1)[iParam0 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
			{
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 6:
			if (func_73((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_15, 1) < 2f || unk_0x9B5C1660CCDF7189((*uParam1)[iParam0 /*24*/], joaat("script_task_follow_nav_mesh_to_coord")) == 7)
			{
				if (!unk_0x4FAFF4BCB7633475((*uParam1)[iParam0 /*24*/]))
				{
					unk_0x974022927CB47E68((*uParam1)[iParam0 /*24*/]);
					func_99();
					unk_0xE237FA90A8AFEE59(0, unk_0x0D1381B6E0F3987D((*uParam1)[iParam0 /*24*/], -5f, 3f, 0f), 2500, 0, 2);
					unk_0xE237FA90A8AFEE59(0, unk_0x0D1381B6E0F3987D((*uParam1)[iParam0 /*24*/], 5f, 3f, 0f), 2500, 0, 2);
					func_98(uParam1[iParam0 /*24*/], 0);
					(uParam1[iParam0 /*24*/])->f_11 = unk_0x1DD05E817C89C737() + 3000;
					(uParam1[iParam0 /*24*/])->f_5 = 2;
				}
			}
			break;
	}
	return 0;
}

int func_116(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 1000f;
	iVar3 = -1;
	if (!unk_0x89568FA9A6BC0B4A((*uParam1)[iParam0 /*24*/], 1))
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (unk_0x89568FA9A6BC0B4A((*uParam1)[iVar0 /*24*/], 1) && unk_0xFC8BFE4B41177C22((*uParam1)[iVar0 /*24*/]))
			{
				fVar2 = func_4((*uParam1)[iVar0 /*24*/], (*uParam1)[iParam0 /*24*/], 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar3 == -1)
		{
			return 0;
		}
		else
		{
			(uParam1[iParam0 /*24*/])->f_18 = func_119((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/]);
			if (unk_0x1D5CD3EAAA7422B0((uParam1[iParam0 /*24*/])->f_18) > 20f)
			{
				if (bParam2)
				{
					unk_0x0E95B96CFEFE7B61(0, (*uParam1)[iVar3 /*24*/], 0);
				}
				else
				{
					unk_0x0E95B96CFEFE7B61((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 0);
				}
				(uParam1[iParam0 /*24*/])->f_18 = func_117((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 1);
				return 1;
			}
		}
	}
	return 0;
}

float func_117(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 0) };
	return func_102(Var0, Var1, iParam2);
}

int func_118()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -1;
	unk_0x10425721983AE158(0, "misschinese2_bank1", "reaction_forward_big_intro_a", 4f, -2f, 1400, 0, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = unk_0xC5935DFB3F39785A(0, 3);
		iVar3 = unk_0xC5935DFB3F39785A(1100, 1800);
		iVar4 = (iVar4 + iVar3);
		if (iVar2 == iVar1)
		{
			iVar2++;
			if (iVar2 > 2)
			{
				iVar2 = 0;
			}
		}
		iVar1 = iVar2;
		switch (iVar2)
		{
			case 0:
				iVar2 = unk_0xC5935DFB3F39785A(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0x10425721983AE158(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0x10425721983AE158(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0x10425721983AE158(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 1:
				iVar2 = unk_0xC5935DFB3F39785A(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0x10425721983AE158(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0x10425721983AE158(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0x10425721983AE158(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 2:
				iVar2 = unk_0xC5935DFB3F39785A(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0x10425721983AE158(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0x10425721983AE158(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0x10425721983AE158(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
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
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xFC8BFE4B41177C22(iParam1))
	{
		return func_120(iParam0, unk_0xD1A6A821F5AC81DB(iParam1, 0));
	}
	return 0f;
}

float func_120(int iParam0, struct<3> Param1)
{
	float fVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			fVar0 = func_102(unk_0xD1A6A821F5AC81DB(iParam0, 0), Param1, 1);
			return (fVar0 - unk_0xCFC0C995455A6204(iParam0));
		}
	}
	return 0f;
}

void func_121(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, struct<2> Param7, var uParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	
	if (!bLocal_51 == 1)
	{
		bLocal_80 = false;
		if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()) || unk_0x6D05C5731A838CB3(0, 24))
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!unk_0x89568FA9A6BC0B4A((*uParam0)[iVar0 /*24*/], 1))
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iLocal_81 == 0)
			{
				iLocal_81 = iVar1;
			}
			if (iVar1 < iLocal_81)
			{
				iLocal_81 = iVar1;
				bLocal_80 = true;
			}
		}
		iVar2 = 4;
		while (iVar2 > 0)
		{
			if (!unk_0x89568FA9A6BC0B4A((*uParam0)[iLocal_56 /*24*/], 1))
			{
				if ((uParam0[iLocal_56 /*24*/])->f_3 > 3 && (uParam0[iLocal_56 /*24*/])->f_1 > 1)
				{
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (!unk_0x89568FA9A6BC0B4A((*uParam0)[iVar0 /*24*/], 1))
						{
							if (iVar0 != iLocal_56)
							{
								if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
								{
									if (func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_56 /*24*/], 1) < 8f)
									{
										if ((unk_0xF8F35890F43ED2AE((*uParam0)[iLocal_56 /*24*/]) != 0 && unk_0xF8F35890F43ED2AE((*uParam0)[iVar0 /*24*/]) != 0) || (unk_0xF8F35890F43ED2AE((*uParam0)[iLocal_56 /*24*/]) == 0 && unk_0xF8F35890F43ED2AE((*uParam0)[iVar0 /*24*/]) == 0))
										{
											Var3 = { unk_0xD1A6A821F5AC81DB((*uParam0)[iVar0 /*24*/], 1) };
											Var4 = { unk_0xD1A6A821F5AC81DB((*uParam0)[iLocal_56 /*24*/], 0) };
											if (unk_0x1D5CD3EAAA7422B0((Var3.f_2 - Var4.f_2)) < 2f)
											{
												(uParam0[iVar0 /*24*/])->f_7 = 1;
												(uParam0[iVar0 /*24*/])->f_10 = iLocal_56;
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
					(uParam0[iLocal_56 /*24*/])->f_22 = -1;
					(uParam0[iLocal_56 /*24*/])->f_23 = -1;
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (iVar0 != iLocal_56)
						{
							if (unk_0xFC8BFE4B41177C22((*uParam0)[iVar0 /*24*/]))
							{
								fVar7 = func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_56 /*24*/], 1);
								if (fVar7 < 10f)
								{
									fVar8 = func_119((*uParam0)[iLocal_56 /*24*/], (*uParam0)[iVar0 /*24*/]);
									if (fVar8 > -90f && fVar8 < 90f)
									{
										if (fVar7 < fVar5)
										{
											(uParam0[iLocal_56 /*24*/])->f_23 = (uParam0[iLocal_56 /*24*/])->f_22;
											(uParam0[iLocal_56 /*24*/])->f_22 = iVar0;
											fVar6 = fVar5;
											fVar5 = fVar7;
										}
										else if (fVar7 < fVar6)
										{
											fVar6 = fVar7;
											(uParam0[iLocal_56 /*24*/])->f_23 = iVar0;
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
			iLocal_56++;
			if (iLocal_56 >= *uParam0)
			{
				iLocal_56 = 0;
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
	{
		iVar9 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (unk_0xD9F5E1FEFD1329E4(iVar9, 0))
		{
			if (unk_0x182BD9AD1675B5DE(iVar9))
			{
				iVar10 = 1;
			}
		}
	}
	if (unk_0x8764A5B95AE1F967(-1, Local_69, fLocal_70))
	{
		bLocal_52 = true;
	}
	if (!iLocal_53)
	{
		if (func_88(Param1.f_1) || func_88(Param3.f_1))
		{
			iLocal_57 = unk_0x1DD05E817C89C737() + 1000;
			iLocal_53 = 1;
		}
		if (func_88(Param5.f_1) || func_88(Param7.f_1))
		{
			iLocal_57 = unk_0x1DD05E817C89C737() + 1000;
			iLocal_53 = 1;
		}
	}
	else if (((!func_88(Param1.f_1) && !func_88(Param3.f_1)) && !func_88(Param5.f_1)) && !func_88(Param7.f_1))
	{
		iLocal_53 = 0;
	}
	else if (unk_0x1DD05E817C89C737() > iLocal_57)
	{
		if (func_88(Param1.f_1) || func_88(Param3.f_1))
		{
			bLocal_51 = true;
		}
		if (func_88(Param5.f_1) || func_88(Param7.f_1))
		{
			bLocal_54 = true;
		}
	}
	iLocal_58 = 0;
	iVar11 = -1;
	fVar12 = 13f;
	iLocal_55 = 0;
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		iVar13 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
	}
	if (iLocal_60 == -1)
	{
		iLocal_71 = 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x89568FA9A6BC0B4A((*uParam0)[iVar0 /*24*/], 1))
		{
			if ((uParam0[iVar0 /*24*/])->f_3 != 7)
			{
				(uParam0[iVar0 /*24*/])->f_2 = (uParam0[iVar0 /*24*/])->f_1;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
				if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
				{
					if (iLocal_60 == -1)
					{
						if (unk_0xD9F5E1FEFD1329E4(iVar13, 0))
						{
							if (unk_0x182BD9AD1675B5DE(iVar13))
							{
								iLocal_71 = 1;
								fVar12 = 20f;
							}
							if (unk_0xE101D58DA98B6070(iVar13))
							{
								iLocal_71 = 1;
								fVar12 = 50f;
							}
						}
						if (unk_0xC1204DBD7B8A643E(unk_0x259BE71D8A81D4FA(), (*uParam0)[iVar0 /*24*/]) || (unk_0xD9F5E1FEFD1329E4(iVar13, 0) && unk_0x182BD9AD1675B5DE(iVar13)))
						{
							if (func_4(unk_0x4A8C381C258A124D(), (*uParam0)[iVar0 /*24*/], 1) < fVar12)
							{
								if ((uParam0[iVar0 /*24*/])->f_8)
								{
									if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0xF8F35890F43ED2AE((*uParam0)[iVar0 /*24*/]))
									{
										fVar12 = func_4(unk_0x4A8C381C258A124D(), (*uParam0)[iVar0 /*24*/], 1);
										iVar11 = iVar0;
										(uParam0[iVar0 /*24*/])->f_1 = 1;
										(uParam0[iVar0 /*24*/])->f_19 = (fVar12 + 5f);
									}
								}
							}
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_7)
					{
						(uParam0[iVar0 /*24*/])->f_7 = 0;
						(uParam0[iVar0 /*24*/])->f_1 = 2;
					}
					if (bLocal_52)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 3;
					}
					if (bLocal_51)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 4;
					}
					if (bLocal_80)
					{
					}
					if (!bLocal_80 && !unk_0x8BF5256C439DF778((*uParam0)[iVar0 /*24*/]))
					{
						if (unk_0x81ECDD5A759C026D((*uParam0)[iVar0 /*24*/], 125))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0x613F3705BEA060B4((*uParam0)[iVar0 /*24*/], 125))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
							if (unk_0x81ECDD5A759C026D((*uParam0)[iVar0 /*24*/], 17))
							{
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_9)
						{
							if (unk_0xA646A9FF47E2E515(unk_0xD1A6A821F5AC81DB((*uParam0)[iVar0 /*24*/], 1), 4f, 1, 1))
							{
								(uParam0[iVar0 /*24*/])->f_1 = 7;
							}
						}
						else if (unk_0xA646A9FF47E2E515(unk_0xD1A6A821F5AC81DB((*uParam0)[iVar0 /*24*/], 1), 6f, 1, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0x81ECDD5A759C026D((*uParam0)[iVar0 /*24*/], 126))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB((*uParam0)[iVar0 /*24*/], 1), 1f, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_3 < 4)
					{
						if ((uParam0[iVar0 /*24*/])->f_22 != -1)
						{
							if (unk_0xFC8BFE4B41177C22((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
							{
								if (unk_0x89568FA9A6BC0B4A((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/], 1))
								{
									if (unk_0x300A997AE991C0A8((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_23 != -1)
						{
							if (unk_0xFC8BFE4B41177C22((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
							{
								if (unk_0x89568FA9A6BC0B4A((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/], 1))
								{
									if (unk_0x300A997AE991C0A8((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 5)
				{
					if ((uParam0[iVar0 /*24*/])->f_1 == 0)
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4 || unk_0x1B32E388988DD296((*uParam0)[iVar0 /*24*/], 0))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 8;
						}
					}
					if (((unk_0x81ECDD5A759C026D((*uParam0)[iVar0 /*24*/], 1) || unk_0x613F3705BEA060B4((*uParam0)[iVar0 /*24*/], 1)) || (unk_0x1B32E388988DD296((*uParam0)[iVar0 /*24*/], 0) && unk_0xB8CCCA6CFFCE7734((*uParam0)[iVar0 /*24*/], unk_0x4A8C381C258A124D()))) || (func_122((*uParam0)[iVar0 /*24*/]) && unk_0x613F3705BEA060B4((*uParam0)[iVar0 /*24*/], 1)))
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4)
						{
							(uParam0[iVar0 /*24*/])->f_1 = 9;
						}
						else
						{
							(uParam0[iVar0 /*24*/])->f_1 = 6;
						}
					}
				}
				if (iVar10 && func_4(unk_0x4A8C381C258A124D(), (*uParam0)[iVar0 /*24*/], 1) < 50f)
				{
					(uParam0[iVar0 /*24*/])->f_1 = 6;
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 6)
				{
					if (bLocal_54)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 10;
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_1 <= (uParam0[iVar0 /*24*/])->f_2)
				{
					(uParam0[iVar0 /*24*/])->f_1 = (uParam0[iVar0 /*24*/])->f_2;
				}
				else
				{
					(uParam0[iVar0 /*24*/])->f_3 = 4;
					(uParam0[iVar0 /*24*/])->f_4 = 0;
					(uParam0[iVar0 /*24*/])->f_5 = 0;
				}
				if ((uParam0[iVar0 /*24*/])->f_1 > iLocal_58)
				{
					iLocal_58 = (uParam0[iVar0 /*24*/])->f_1;
					iLocal_59 = iVar0;
				}
			}
			else
			{
				(uParam0[iVar0 /*24*/])->f_3 = 0;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
			}
			if ((uParam0[iVar0 /*24*/])->f_3 > 3)
			{
				iLocal_55 = 1;
			}
		}
		iVar0++;
	}
	if (iLocal_60 == -1)
	{
		if (iVar11 != -1)
		{
			if (1 > (uParam0[iVar11 /*24*/])->f_1)
			{
				(uParam0[iVar11 /*24*/])->f_1 = 1;
				iLocal_60 = iVar11;
			}
		}
	}
	else if (unk_0x89568FA9A6BC0B4A((*uParam0)[iLocal_60 /*24*/], 1))
	{
		iLocal_60 = -1;
	}
}

int func_122(var uParam0)
{
	if (unk_0x13CCB1AD131C1082(uParam0, "misschinese2_bank1", "alert_gunshot", 3))
	{
		return 1;
	}
	if (unk_0x13CCB1AD131C1082(uParam0, "misschinese2_bank1", "buddy_shot_b", 3))
	{
		return 1;
	}
	if (unk_0x13CCB1AD131C1082(uParam0, "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
	{
		return 1;
	}
	if (unk_0x13CCB1AD131C1082(uParam0, "misschinese2_bank1", "alert_body", 3))
	{
		return 1;
	}
	if (unk_0x13CCB1AD131C1082(uParam0, "misschinese2_bank1", "react_forward_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0x13CCB1AD131C1082(uParam0, "misschinese2_bank1", "react_backward_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0x13CCB1AD131C1082(uParam0, "misschinese2_bank1", "react_left_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0x13CCB1AD131C1082(uParam0, "misschinese2_bank1", "react_right_small_intro_a", 3))
	{
		return 1;
	}
	return 0;
}

void func_123()
{
	if (iLocal_390)
	{
		if (unk_0xD6F9DEE4765092A9(&Local_395))
		{
			if (func_65())
			{
				if (unk_0x1F9EB85925C3ECD7())
				{
					if (!unk_0xFBA523E6F8ACE541())
					{
						cLocal_391 = { func_124() };
						Local_395 = { func_89() };
						StringCopy(&Local_395, "", 24);
						if (!unk_0xD6F9DEE4765092A9(&cLocal_391) && !unk_0x1B79E937E91F40C3(&cLocal_391, "NULL"))
						{
							Local_395 = { func_89() };
							func_91();
						}
						else
						{
							iLocal_390 = 0;
							StringCopy(&Local_395, "", 24);
							StringCopy(&cLocal_391, "", 24);
						}
					}
				}
			}
			else
			{
				iLocal_390 = 0;
				StringCopy(&Local_395, "", 24);
				StringCopy(&cLocal_391, "", 24);
			}
		}
		else
		{
			if (unk_0x1F9EB85925C3ECD7())
			{
				if (!func_88(&Local_395))
				{
					iLocal_390 = 0;
					StringCopy(&Local_395, "", 24);
					StringCopy(&cLocal_391, "", 24);
				}
			}
			if (!unk_0xD6F9DEE4765092A9(&Local_395))
			{
				Local_389[0 /*3*/] = { Local_389[0 /*3*/] };
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
	if (Global_22286 == 4)
	{
		iVar1 = unk_0xE7365CC791D1E4EB();
		iVar1 = (iVar1 + Global_23296);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0x6BA487C862DB8DDF(&(Global_21154[iVar2 /*6*/])))
			{
				return Global_21154[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0x6BA487C862DB8DDF(&(Global_21154[iVar3 /*6*/])))
					{
						return Global_21154[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_21154[iVar1 /*6*/];
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
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
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
	struct<3> Var1;
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
	
	Var1 = { 0f, 0f, 0f };
	if (iLocal_100 == 0)
	{
		if (unk_0xDDF99E38A910C346(&Var1, Local_107[0 /*5*/]))
		{
			fVar2 = 0f;
			fVar5 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_107.f_0)
			{
				if (iVar0 > 0)
				{
					fVar2 = (fVar2 + unk_0xED977E2AE2CB16EE(Local_107[(iVar0 - 1) /*5*/], Local_107[iVar0 /*5*/], 1));
				}
				if (Local_107[iVar0 /*5*/].f_4)
				{
					if (unk_0xDDF99E38A910C346(&Var1, Local_107[iVar0 /*5*/]))
					{
						fVar4 = unk_0xED977E2AE2CB16EE(Local_107[iVar0 /*5*/], Var1, 1);
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
			if (fVar5 < fLocal_94)
			{
				iVar3 = iVar3;
				iLocal_100 = 1;
				iLocal_102 = unk_0x1DD05E817C89C737();
				fVar6 = fVar6;
				Local_97 = { Local_107[iVar3 /*5*/] };
				iLocal_98 = iVar3;
				iLocal_103 = iVar3 * 2;
				iLocal_105 = iLocal_103;
				iLocal_106 = iLocal_103;
				if (iLocal_106 < 0)
				{
					iLocal_106 = 0;
				}
				if (iLocal_105 >= Local_107.f_0 * 2)
				{
					iLocal_105 = (Local_107.f_0 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_100 == 1)
	{
		unk_0xAB03CF772B43A288();
		fVar7 = (system::to_float((unk_0x1DD05E817C89C737() - iLocal_102)) / fLocal_108);
		iVar8 = (system::floor((fVar7 / (1f / 2f))) - 1);
		iVar9 = (iLocal_103 + iVar8);
		iVar10 = (iLocal_103 - iVar8);
		if (iVar9 >= 122)
		{
			iVar9 = 121;
		}
		if (iVar10 < 0)
		{
			iVar10 = 0;
		}
		if (iVar9 > iLocal_105)
		{
			iVar0 = iLocal_105 + 1;
			while (iVar0 <= iVar9)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_107.f_0)
				{
					if (Local_107[iVar11 /*5*/].f_4)
					{
						func_127(iVar0, 1);
					}
					else
					{
						iVar9 = (iVar0 - 1);
						iVar0 = iVar9 + 1;
					}
				}
				iVar0++;
			}
			iLocal_105 = iVar9;
		}
		if (iVar10 < iLocal_106)
		{
			iVar0 = (iLocal_106 - 1);
			while (iVar0 >= iVar10)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_107.f_0)
				{
					if (Local_107[iVar11 /*5*/].f_4)
					{
						func_127(iVar0, 1);
					}
					else
					{
						iVar10 = iVar0 + 1;
						iVar0 = (iVar10 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_106 = iVar10;
		}
		iVar0 = 0;
		while (iVar0 < Local_99.f_0)
		{
			if ((unk_0x1DD05E817C89C737() - Local_99[iVar0 /*5*/].f_4) > 1000)
			{
				unk_0x726D5358D13D53BD(Local_99[iVar0 /*5*/].f_1, 0,4f, 1f);
			}
			if ((unk_0x1DD05E817C89C737() - Local_99[iVar0 /*5*/].f_4) > 6000)
			{
				unk_0xCA60A45D232EEDDB(Local_99[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 61)
			{
				func_128(Local_107[(iParam0 / 2) /*5*/] + Local_107[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_95, fLocal_95, fLocal_95), iParam1);
			}
		}
		else if ((iParam0 / 2) < 61)
		{
			func_128(Local_107[(iParam0 / 2) /*5*/] + Vector(fLocal_95, fLocal_95, fLocal_95), iParam1);
		}
	}
}

void func_128(struct<3> Param0, int iParam1)
{
	if (iLocal_101 == 0)
	{
		iParam1 = 0;
	}
	unk_0xCA60A45D232EEDDB(Local_99[iLocal_104 /*5*/]);
	if (Local_99[iLocal_104 /*5*/].f_4 != 0)
	{
		unk_0x726D5358D13D53BD(Local_99[iLocal_104 /*5*/].f_1, 0,4f, 1f);
	}
	Local_99[iLocal_104 /*5*/].f_4 = unk_0x1DD05E817C89C737();
	Local_99[iLocal_104 /*5*/].f_1 = { Param0 };
	Local_99[iLocal_104 /*5*/] = unk_0xC86536B840EE3AB3(Param0, uLocal_92, iParam1);
	iLocal_104++;
	if (iLocal_104 >= 31)
	{
		iLocal_104 = 0;
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
	
	if (bLocal_87)
	{
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0x6D05C5731A838CB3(0, 24) && unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
			{
				if (iLocal_93 == 0)
				{
					unk_0xA62957B100C8DE6D(2f, 8f, 4);
					iLocal_93 = unk_0x1DD05E817C89C737() + 250;
				}
				if (unk_0x1DD05E817C89C737() > iLocal_93)
				{
					if (!bLocal_83)
					{
						fVar4 = 9999,9f;
						Local_96 = { func_130() };
						iVar0 = 0;
						while (iVar0 < Local_107.f_0)
						{
							if (unk_0xC450B06E5AAA0985(Local_107[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0xED977E2AE2CB16EE(Local_96, unk_0x3CF9D442F2C902BD(Local_107[iVar0 /*5*/].f_3), 1);
								fVar3 = unk_0xED977E2AE2CB16EE(Local_107[iVar0 /*5*/], unk_0x3CF9D442F2C902BD(Local_107[iVar0 /*5*/].f_3), 1);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_107[iVar0 /*5*/] = { Local_96 };
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
							if (iLocal_89 != -1)
							{
								if (unk_0x510D0699BE9C6D06((iLocal_90 - iVar5)) > 1)
								{
									iLocal_90 = -1;
								}
								if (iLocal_90 == -1)
								{
									iLocal_90 = iLocal_89;
								}
								if (unk_0x510D0699BE9C6D06((iLocal_90 - iVar5)) < 3 && unk_0x510D0699BE9C6D06((iLocal_90 - iVar5)) > 0)
								{
									if (iLocal_90 < iVar5)
									{
										iVar6 = iLocal_90;
										while (iVar6 <= (iVar5 - 1))
										{
											if (unk_0xC450B06E5AAA0985(Local_107[iVar6 /*5*/].f_3))
											{
												if (unk_0xF03FBAFA0284124E(Local_107[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xF42EBD7CD0682A8B(Local_107[iVar6 /*5*/].f_3, 0);
													Local_107[iVar6 /*5*/].f_4 = 1;
													iLocal_91 = (iLocal_91 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_90)
										{
											if (unk_0xC450B06E5AAA0985(Local_107[iVar6 /*5*/].f_3))
											{
												if (unk_0xF03FBAFA0284124E(Local_107[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xF42EBD7CD0682A8B(Local_107[iVar6 /*5*/].f_3, 0);
													Local_107[iVar6 /*5*/].f_4 = 1;
													iLocal_91 = (iLocal_91 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_90 = iLocal_89;
								}
								if (iVar5 == 0)
								{
									if (unk_0xC450B06E5AAA0985(Local_107[iVar5 /*5*/].f_3))
									{
										if (unk_0xF03FBAFA0284124E(Local_107[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xF42EBD7CD0682A8B(Local_107[iVar5 /*5*/].f_3, 0);
											Local_107[iVar5 /*5*/].f_4 = 1;
											iLocal_91 = (iLocal_91 - 1);
										}
									}
								}
								if (iVar5 == 60)
								{
									if (unk_0xC450B06E5AAA0985(Local_107[iVar5 /*5*/].f_3))
									{
										if (unk_0xF03FBAFA0284124E(Local_107[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xF42EBD7CD0682A8B(Local_107[iVar5 /*5*/].f_3, 0);
											Local_107[iVar5 /*5*/].f_4 = 1;
											iLocal_91 = (iLocal_91 - 1);
										}
									}
								}
								if (iVar5 < 60)
								{
									if (func_77(Local_107[iVar5 + 1 /*5*/]))
									{
										if (unk_0xC450B06E5AAA0985(Local_107[iVar5 /*5*/].f_3))
										{
											if (unk_0xF03FBAFA0284124E(Local_107[iVar5 /*5*/].f_3) > 0)
											{
												unk_0xF42EBD7CD0682A8B(Local_107[iVar5 /*5*/].f_3, 0);
												Local_107[iVar5 /*5*/].f_4 = 1;
												iLocal_91 = (iLocal_91 - 1);
											}
										}
									}
								}
							}
							iLocal_89 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_89 = -1;
				iLocal_90 = -1;
				iLocal_93 = 0;
			}
		}
	}
}

Vector3 func_130()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	
	iVar0 = unk_0x484426882F80CACE(unk_0x4A8C381C258A124D(), 1);
	if (unk_0xFC8BFE4B41177C22(iVar0))
	{
		iVar1 = unk_0x365DC1E8054AF31A(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { unk_0x75DF72FC74EED046(iVar0, iVar1) };
		Var2 = { unk_0xF10F2A2453AF1DFB(Var2, unk_0xCFC0C995455A6204(iVar0), 0,35f, 0f, -0,15f) };
		unk_0xB1EAADCB692D69CE(Var2, &uVar4, 0, 0);
		Var3 = { Var2.f_0, Var2.f_1, uVar4 };
	}
	return Var3;
}

void func_131()
{
	int iVar0;
	
	if (iLocal_85)
	{
		if (iLocal_100)
		{
			iVar0 = 0;
			while (iVar0 < Local_99.f_0)
			{
				unk_0xCA60A45D232EEDDB(Local_99[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_85 = 0;
		iLocal_100 = 1;
		iLocal_102 = unk_0x1DD05E817C89C737();
		iVar0 = 0;
		while (iVar0 < Local_107.f_0)
		{
			Local_107[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_88 != -1)
		{
			iLocal_106 = iLocal_88;
			iLocal_105 = iLocal_88;
			iLocal_103 = iLocal_88;
		}
		else
		{
			iLocal_106 = -1;
			iLocal_105 = -1;
			iLocal_103 = iLocal_88;
		}
		iLocal_104 = 1;
	}
}

void func_132()
{
	if (!iLocal_86)
	{
		iLocal_86 = 1;
	}
}

void func_133()
{
	int iVar0;
	
	if (iLocal_147 >= 4)
	{
		iVar0 = 0;
		while (iVar0 < Local_111.f_0)
		{
			if (unk_0xFC8BFE4B41177C22(Local_111[iVar0 /*33*/]))
			{
				if (!Local_111[iVar0 /*33*/].f_23)
				{
					if (unk_0x4FAFF4BCB7633475(Local_111[iVar0 /*33*/]))
					{
						Local_111[iVar0 /*33*/].f_23 = 1;
						func_9(151, 1, 0);
					}
				}
				if (unk_0x2A661A0285B74A27(Local_111[iVar0 /*33*/]) == iLocal_114)
				{
					func_103(Local_111[iVar0 /*33*/], &(Local_111[iVar0 /*33*/].f_25), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
				}
			}
			else if (Local_111[iVar0 /*33*/] != 0)
			{
				func_134(&(Local_111[iVar0 /*33*/].f_25));
				Local_111[iVar0 /*33*/] = 0;
			}
			iVar0++;
		}
	}
}

void func_134(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xFE54B8568B2ABD12(uParam0);
		bVar0 = true;
	}
	if (unk_0xC450B06E5AAA0985(uParam0->f_1))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_7))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_7, 0))
		{
			if (unk_0xA23AABF378361F85(uParam0->f_7))
			{
				unk_0x2BF2F8E20C19583C(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_135()
{
	int iVar0;
	
	iVar0 = iLocal_147;
	func_385();
	switch (iLocal_147)
	{
		case 0:
			func_274();
			break;
		
		case 1:
			func_271();
			break;
		
		case 2:
			func_225();
			break;
		
		case 3:
			func_208();
			break;
		
		case 4:
			func_207();
			break;
		
		case 5:
			func_207();
			break;
		
		case 6:
			func_207();
			break;
		
		case 7:
			func_203();
			break;
		
		case 8:
			func_181();
			break;
		
		case 9:
			func_149();
			break;
	}
	if (iLocal_147 != iVar0)
	{
		iLocal_148 = 0;
	}
	if (bLocal_150)
	{
		func_136(0);
	}
}

void func_136(char* sParam0)
{
	while (!unk_0x86A2BC11844DEEB3("CHN2_MISSION_FAIL"))
	{
		func_28(21, 1);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam0))
	{
		sLocal_149 = sParam0;
	}
	if (unk_0xFF692AB7350A74D7(sLocal_149))
	{
		sLocal_149 = "CHFAIL";
	}
	func_138(sLocal_149);
	while (!func_137())
	{
		func_28(2, 0);
	}
	func_466(1);
}

int func_137()
{
	if (Global_4)
	{
		return 1;
	}
	if (Global_101533 == 7 || Global_101533 == 8)
	{
		return 1;
	}
	return 0;
}

void func_138(char* sParam0)
{
	func_148(sParam0);
	func_139(0);
}

void func_139(int iParam0)
{
	int iVar0;
	
	if (Global_113969.f_9088 || func_147(0))
	{
		iVar0 = func_146();
		if (!func_140(iVar0))
		{
			return;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 5);
		Global_101569 = iParam0;
	}
}

int func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_145();
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x97915D82C999021F(5000);
	}
	iVar0 = Global_92265[iParam0 /*5*/];
	iVar1 = Global_79660.f_109[iVar0 /*4*/];
	func_144(iVar1, 1);
	unk_0x3ECCF6485789A1D6(unk_0x259BE71D8A81D4FA(), 0);
	unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
	func_141(&(Global_113969.f_2366.f_539), iVar1);
	if (Global_95688 == Global_101570)
	{
		Global_113969.f_9088.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_92301[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x40AC02FA167D4D0A(0);
		}
	}
	Global_113969.f_9088.f_330[iVar1 /*6*/].f_2++;
	Global_95688 = Global_101570;
	if (iParam0 == -1)
	{
		if (Global_113969.f_9088)
		{
		}
		return 0;
	}
	if (BitTest(Global_92265[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_92265[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_141(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113969.f_18536[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113969.f_9088.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_143(Global_113969.f_18536[iVar0], &Var2, &fVar3))
			{
				Global_113969.f_18536[iVar0] = 318;
				func_142(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_98903[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_9 = 0f;
				Global_98903[iVar0 /*29*/].f_12 = 0f;
				Global_98903[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_10 = 0f;
				Global_98903[iVar0 /*29*/].f_13 = 0f;
				Global_98903[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_11 = 0f;
				Global_98903[iVar0 /*29*/].f_14 = 0f;
				Global_98903[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_26 = 0f;
				Global_98903[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_27 = 0f;
				Global_98903[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_142(var uParam0)
{
	*uParam0 = -15;
}

int func_143(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*fParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_143(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_143(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*fParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*fParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*fParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*fParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*fParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*fParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*fParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*fParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*fParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*fParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*fParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*fParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*fParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*fParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*fParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*fParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*fParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*fParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*fParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*fParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*fParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*fParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*fParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*fParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*fParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*fParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*fParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*fParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*fParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*fParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*fParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*fParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*fParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*fParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_144(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_95498[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_95498[iParam0 /*2*/] = 0;
	}
}

void func_145()
{
	Global_101568 = 1;
	if (unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_79622))
		{
			switch (func_48())
			{
				case 0:
					StringCopy(&Global_79622, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_79622, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_79622, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_79626, "", 16);
		}
		Global_101568 = 0;
	}
	else if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_79622))
		{
			switch (func_48())
			{
				case 0:
					StringCopy(&Global_79622, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_79622, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_79622, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_79626, "", 16);
		}
		Global_101568 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 25);
	}
}

int func_146()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_147(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_148(char* sParam0)
{
	if (!unk_0xD6F9DEE4765092A9(sParam0))
	{
		if (unk_0x09112CCF7824FE38(sParam0) <= 16)
		{
			StringCopy(&Global_79622, sParam0, 16);
			StringCopy(&Global_79626, "", 16);
			if (unk_0xE7585CE3CDD6F47E())
			{
				unk_0x98188EDB7446A033();
			}
		}
	}
}

void func_149()
{
	func_176(46, 52);
	func_166(1, 49, 0, 2, 48, 1, 0, 1, 0, 1, 0);
	func_166(2, 52, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(3, 53, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 54, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(5, 55, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(0, 27, 0, 0, 1, 0, 1, 0, 1, 0);
	func_155(0, 12, 0, 0, 1, 0, 1, 0);
	func_154();
	if (func_153(1, 49))
	{
		func_150();
	}
}

void func_150()
{
	unk_0x406CBCEA35499884();
	func_151(0, 0);
	func_466(0);
}

void func_151(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_64168)
	{
		Global_64168 = iParam1;
	}
	if (bParam0)
	{
		if ((func_147(0) && Global_79636.f_1 == 1) && func_152(Global_79636))
		{
		}
		else
		{
			Global_64166 = 1;
		}
	}
	if (Global_113969.f_9088 || func_147(0))
	{
		iVar0 = func_146();
		iVar1 = Global_92265[iVar0 /*5*/];
		uVar2 = Global_79660.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113969.f_9088)
			{
			}
			return;
		}
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 4);
		unk_0x0B0C9A0F9AAEB7F0(&Global_79638, true);
		Global_79654 = uVar2;
		Global_79655 = unk_0x1DD05E817C89C737();
	}
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_153(int iParam0, int iParam1)
{
	if (Local_383[iParam0 /*10*/] == iParam1)
	{
		if (Local_383[iParam0 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_154()
{
	struct<3> Var0;
	
	Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2432,476f, 4953,242f, 43,05545f, 2466,34f, 4986,15f, 57,25303f, 14,4375f, 0, 1, 0))
	{
		if (Var0.f_2 < 50f)
		{
			if ((((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2436,762f, 4956,011f, 44,49009f, 2443,38f, 4962,625f, 48,2233f, 1,5f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2447,669f, 4966,554f, 44,95141f, 2452,497f, 4969,825f, 48,89074f, 2,3125f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2454,863f, 4968,686f, 44,95141f, 2460,505f, 4974,409f, 48,82641f, 1,6875f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2459,058f, 4977,546f, 44,95141f, 2460,411f, 4979,302f, 48,82641f, 1,6875f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2457,602f, 4984,746f, 44,73669f, 2461,977f, 4989,49f, 48,47844f, 1,6875f, 0, 1, 0))
			{
				if (!unk_0x5B702A5D1F2635BE(unk_0x4A8C381C258A124D()))
				{
					unk_0x604C09F6A880730D(unk_0x4A8C381C258A124D());
				}
			}
		}
		else if ((((((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2454,179f, 4995,281f, 44,54151f, 2453,096f, 4993,905f, 48,32043f, 1,6875f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2449,401f, 4990,354f, 44,92924f, 2447,717f, 4988,865f, 48,82129f, 1,6875f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2443,906f, 4990,104f, 44,4446f, 2439,007f, 4985,271f, 48,30458f, 1,6875f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2439,602f, 4982,387f, 44,95141f, 2440,797f, 4981,365f, 48,82642f, 1,6875f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2440,259f, 4980,671f, 44,95142f, 2434,769f, 4975,055f, 48,82642f, 1,6875f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2432,165f, 4972,586f, 44,29909f, 2430,114f, 4970,545f, 48,21086f, 1,6875f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2428,46f, 4968,569f, 44,81597f, 2426,632f, 4966,603f, 48,29342f, 1,6875f, 0, 1, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(unk_0x4A8C381C258A124D()))
			{
				unk_0x604C09F6A880730D(unk_0x4A8C381C258A124D());
			}
		}
	}
	else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2455,487f, 4997,566f, 43,1101f, 2423,653f, 4962,837f, 57,34888f, 14,4375f, 0, 1, 0))
	{
		if (Var0.f_2 < 50f)
		{
			if ((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2442,913f, 4965,273f, 50,15687f, 2444,49f, 4967,41f, 53,81783f, 1,6875f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2445,239f, 4969,07f, 49,94284f, 2450,365f, 4972,188f, 54,03251f, 2,375f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2452,332f, 4971,817f, 49,94283f, 2457,977f, 4977,583f, 53,88097f, 2,375f, 0, 1, 0))
			{
				if (!unk_0x5B702A5D1F2635BE(unk_0x4A8C381C258A124D()))
				{
					unk_0x604C09F6A880730D(unk_0x4A8C381C258A124D());
				}
			}
		}
		else if ((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2457,621f, 4978,462f, 49,94283f, 2453,932f, 4982,161f, 53,81783f, 2,375f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2452,054f, 4984,156f, 49,94283f, 2448,12f, 4987,809f, 53,81316f, 2,375f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2442,014f, 4980,539f, 49,94283f, 2435,796f, 4971,945f, 53,90388f, 2,375f, 0, 1, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(unk_0x4A8C381C258A124D()))
			{
				unk_0x604C09F6A880730D(unk_0x4A8C381C258A124D());
			}
		}
	}
}

void func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	if (Local_387[iParam0 /*4*/] != iParam1)
	{
		Local_387[iParam0 /*4*/].f_1 = 0;
		Local_387[iParam0 /*4*/] = iParam1;
	}
	if (!Local_387[iParam0 /*4*/].f_1)
	{
		if (func_158(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0))
		{
			switch (Local_387[iParam0 /*4*/])
			{
				case 0:
					break;
				
				case 1:
					if (!unk_0x4C705AAF75363287())
					{
						unk_0xF65CE7345EAFDBE2(2f);
						Local_387[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 4:
					if (unk_0x568A5F4040D722C0(unk_0x259BE71D8A81D4FA(), 0))
					{
						if (unk_0xAE231F549813BBDF(0))
						{
							func_157("USESPEC_KM", -1);
						}
						else
						{
							func_157("USESPEC", -1);
						}
					}
					Local_387[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 3:
					switch (Local_387[iParam0 /*4*/].f_2)
					{
						case 0:
							func_157("FRMFLE", -1);
							Local_387[iParam0 /*4*/].f_1 = 1;
							break;
					}
					break;
				
				case 5:
					if (!func_65() && !unk_0xFBA523E6F8ACE541())
					{
						func_7("FRMLK", 7500, 1);
						Local_387[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 2:
					func_7("FRMSNP", 7500, 1);
					Local_387[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 11:
					switch (Local_387[iParam0 /*4*/].f_2)
					{
						case 0:
							if (unk_0xC2BF1F6F84E31EB2(unk_0x4A8C381C258A124D()))
							{
								Local_387[iParam0 /*4*/].f_3 = unk_0x1DD05E817C89C737() + 1000;
								Local_387[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0x1DD05E817C89C737() > Local_387[iParam0 /*4*/].f_3)
							{
								if (unk_0xAE231F549813BBDF(0))
								{
									func_157("FRMSTLTH_KM", -1);
								}
								else
								{
									func_157("FRMSTLTH", -1);
								}
								Local_387[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 6:
					switch (Local_387[iParam0 /*4*/].f_2)
					{
						case 0:
							if (unk_0x38640D2193CB547F(211) != 0)
							{
								Local_387[iParam0 /*4*/].f_3 = unk_0x1DD05E817C89C737() + 4000;
								Local_387[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0x1DD05E817C89C737() > Local_387[iParam0 /*4*/].f_3)
							{
								iVar0 = joaat("weapon_unarmed");
								unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar0, 1);
								if ((iVar0 != joaat("weapon_sniperrifle") && iVar0 != joaat("weapon_heavysniper")) && iVar0 != joaat("weapon_unarmed"))
								{
									if (!unk_0xFBA523E6F8ACE541() && !unk_0x4C705AAF75363287())
									{
										if (!func_65())
										{
											if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
											{
												func_157("FRMSHOT", -1);
												Local_387[iParam0 /*4*/].f_1 = 1;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 7:
					func_7("FRMFLC", 7500, 1);
					unk_0x594D5D0D7071B0DE(uLocal_176, "FRMBLIPB");
					Local_387[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 8:
					switch (Local_387[iParam0 /*4*/].f_2)
					{
						case 0:
							func_157("FRMPET2", -1);
							Local_387[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (!func_65())
							{
								func_156("FRMTRL", 7500, 1);
								Local_387[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							iVar1 = joaat("weapon_unarmed");
							if (unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar1, 1))
							{
								if (iVar1 == joaat("weapon_petrolcan"))
								{
									if (unk_0x6D05C5731A838CB3(0, 24))
									{
										unk_0x428C32CC68809A35(1);
									}
								}
							}
							if (!unk_0x4C705AAF75363287())
							{
								func_157("FRMTRL2", -1);
								Local_387[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 3:
							if (func_8())
							{
								if (!func_65())
								{
									if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) != 0)
									{
										if (!unk_0xC450B06E5AAA0985(uLocal_176))
										{
											unk_0x406CBCEA35499884();
											func_7("FRMSHP", 7500, 1);
											uLocal_176 = func_5(2454,895f, 4950,895f, 44,1488f, 0);
										}
									}
									else if (func_73(unk_0x4A8C381C258A124D(), 2454,895f, 4950,895f, 44,1488f, 1) < 5f)
									{
										unk_0x406CBCEA35499884();
										if (unk_0xC450B06E5AAA0985(uLocal_176))
										{
											unk_0xFE54B8568B2ABD12(&uLocal_176);
										}
										func_7("FRMIGN", 7500, 1);
										unk_0xCAC4020CCF361AC8("CHI_2_SHOOT_GAS");
										Local_387[iParam0 /*4*/].f_2++;
									}
								}
							}
							break;
						
						case 4:
							if (func_93(37))
							{
								if (func_90("FRMIGN", 0, 0))
								{
									unk_0x406CBCEA35499884();
								}
							}
							if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) != 0)
							{
								Local_387[iParam0 /*4*/].f_2 = 3;
							}
							break;
					}
					break;
				
				case 9:
					func_157("FRMMISS", -1);
					Local_387[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 10:
					if (func_93(34))
					{
						func_7("FRMFRH", 7500, 1);
					}
					else
					{
						func_7("FRMFRG", 7500, 1);
					}
					Local_387[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 12:
					func_7("FRMLEAVE", 1, 1);
					if (func_93(48))
					{
						unk_0x406CBCEA35499884();
						Local_387[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 13:
					func_7("LOSE_WANTED", 7500, 1);
					break;
				}
			}
	}
}

void func_156(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

void func_157(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bLocal_384 = false;
	iLocal_385 = 0;
	if (func_159(&bLocal_384, &iLocal_385, iParam0, iParam1))
	{
		if (func_159(&bLocal_384, &iLocal_385, iParam2, iParam3))
		{
			if (func_159(&bLocal_384, &iLocal_385, iParam4, iParam5))
			{
				if (func_159(&bLocal_384, &iLocal_385, iParam6, iParam7))
				{
				}
			}
		}
	}
	if (bLocal_384)
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_93(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_162(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_93(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 8:
			if (*iParam0)
			{
				return 0;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_93(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		
		case 4:
			if (iParam3 != 0 && func_162(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 5:
			if (iParam3 != 0 && func_93(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 7:
			if (func_161(iParam3))
			{
				if (func_162(iParam3))
				{
					*iParam0 = 1;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			else
			{
				if (func_93(iParam3))
				{
					func_160(iParam3);
				}
				*iParam0 = 0;
			}
			break;
	}
	return 1;
}

void func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_386[0 /*8*/]);
	if (Local_386[iVar0 /*8*/] == iParam0)
	{
		Local_386[iVar0 /*8*/].f_3 = 1;
	}
}

int func_161(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_386[0 /*8*/]);
	if (Local_386[iVar0 /*8*/] == iParam0)
	{
		if (Local_386[iVar0 /*8*/].f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_386[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_386.f_0)
	{
		if (Local_386[iVar0 /*8*/] == iParam0)
		{
			if (!Local_386[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_386[iVar0 /*8*/] != 0)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
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
	
	if (Local_388[iParam0 /*7*/] != iParam1)
	{
		Local_388[iParam0 /*7*/].f_1 = 0;
		Local_388[iParam0 /*7*/] = iParam1;
	}
	if (!Local_388[iParam0 /*7*/].f_1)
	{
		if (func_158(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9))
		{
			if (!Local_388[iParam0 /*7*/].f_2)
			{
				Local_388[iParam0 /*7*/].f_2 = 1;
			}
			switch (Local_388[iParam0 /*7*/])
			{
				case 0:
					break;
				
				case 1:
					if (func_35("TRV_WTF", 1, unk_0x4A8C381C258A124D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_388[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 2:
					switch (Local_388[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_388[iParam0 /*7*/].f_4 = unk_0x1DD05E817C89C737() + 2000;
							Local_388[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (unk_0x1DD05E817C89C737() > Local_388[iParam0 /*7*/].f_4)
							{
								if (func_65())
								{
									Local_388[iParam0 /*7*/].f_4 = unk_0x1DD05E817C89C737() + 2000;
								}
								else
								{
									iVar0 = 0;
									if (func_165(&iVar0, 2, 1))
									{
										if (func_35("RAGE", 1, unk_0x4A8C381C258A124D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_388[iParam0 /*7*/].f_4 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(8000, 14000));
										}
									}
									else
									{
										Local_388[iParam0 /*7*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					Local_388[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_388[iParam0 /*7*/].f_4 != -1)
					{
						if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("COOKSEE", 3, Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_388[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_388[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 3:
					switch (Local_388[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_388[iParam0 /*7*/].f_4 = func_18(15);
							Local_388[iParam0 /*7*/].f_5 = func_18(16);
							if (Local_388[iParam0 /*7*/].f_4 != -1 && Local_388[iParam0 /*7*/].f_5 != -1)
							{
								Local_388[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_388[iParam0 /*7*/].f_4 = Local_388[iParam0 /*7*/].f_5;
								if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/]))
								{
									Local_388[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_388[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_388[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD8", 5, Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_388[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_388[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 3:
							if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD9", 5, Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_388[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_388[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 4:
							if (func_165(&iVar1, 2, 1))
							{
								if (iVar1 != Local_388[iParam0 /*7*/].f_4)
								{
									Local_388[iParam0 /*7*/].f_4 = iVar1;
									Local_388[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_388[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_388[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 5:
							if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD10", 5, Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_388[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_388[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 5:
					Local_388[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_388[iParam0 /*7*/].f_4 != -1)
					{
						if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD11", 6, Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_388[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_388[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 6:
					Local_388[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_388[iParam0 /*7*/].f_4 != -1)
					{
						if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD12", 6, Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_388[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_388[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 7:
					if (func_35("CHI2_drive", 1, unk_0x4A8C381C258A124D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_388[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 9:
					switch (Local_388[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_388[iParam0 /*7*/].f_3 = unk_0xC5935DFB3F39785A(1, 3);
							}
							break;
						
						case 1:
							if (func_35("SEETREVOR", 3, Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_388[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 2:
							if (func_35("GOON2TREV", 4, Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_388[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_388[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x1DD05E817C89C737() > Local_388[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_388[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_388[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_5 /*33*/]))
							{
								if (Local_388[iParam0 /*7*/].f_6 < 3)
								{
									if (func_35("ONEILGUARD5", 5, Local_111[Local_388[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_388[iParam0 /*7*/].f_4 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(7000, 12000));
										Local_388[iParam0 /*7*/].f_6++;
										Local_388[iParam0 /*7*/].f_3 = 0;
									}
								}
								else if (Local_388[iParam0 /*7*/].f_6 < 6)
								{
									if (func_35("ONEILGUARD6", 6, Local_111[Local_388[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_388[iParam0 /*7*/].f_4 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(7000, 12000));
										Local_388[iParam0 /*7*/].f_6++;
										Local_388[iParam0 /*7*/].f_3 = 0;
									}
								}
								else
								{
									Local_388[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_388[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_388[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x1DD05E817C89C737() > Local_388[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_388[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_388[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_388[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("COOKATT", 3, Local_111[Local_388[iParam0 /*7*/].f_5 /*33*/], "oneilcook", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_388[iParam0 /*7*/].f_4 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(7000, 12000));
											Local_388[iParam0 /*7*/].f_6++;
											Local_388[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOONATT", 3, Local_111[Local_388[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_388[iParam0 /*7*/].f_4 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(7000, 12000));
											Local_388[iParam0 /*7*/].f_6++;
											Local_388[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("GOON2ATTO", 4, Local_111[Local_388[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_388[iParam0 /*7*/].f_4 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(7000, 12000));
											Local_388[iParam0 /*7*/].f_6++;
											Local_388[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_388[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_388[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 12:
					switch (Local_388[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x1DD05E817C89C737() > Local_388[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_388[iParam0 /*7*/].f_5), 2, 1))
								{
									Local_388[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_388[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("GOONIN", 3, Local_111[Local_388[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_388[iParam0 /*7*/].f_4 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(6000, 10000));
											Local_388[iParam0 /*7*/].f_6++;
											Local_388[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOON2ATTI", 4, Local_111[Local_388[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_388[iParam0 /*7*/].f_4 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(6000, 10000));
											Local_388[iParam0 /*7*/].f_6++;
											Local_388[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("ATTACKIN", 3, Local_111[Local_388[iParam0 /*7*/].f_5 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_388[iParam0 /*7*/].f_4 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(6000, 10000));
											Local_388[iParam0 /*7*/].f_6++;
											Local_388[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_388[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_388[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 14:
					switch (Local_388[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar2 = 0;
							while (iVar2 < Local_111.f_0)
							{
								if (Local_111[iVar2 /*33*/].f_1 == 2)
								{
									if (!unk_0x4FAFF4BCB7633475(Local_111[iVar2 /*33*/]))
									{
										if (unk_0x1B32E388988DD296(Local_111[iVar2 /*33*/], 0))
										{
											if (unk_0xB8CCCA6CFFCE7734(Local_111[iVar2 /*33*/], unk_0x4A8C381C258A124D()))
											{
												Local_388[iParam0 /*7*/].f_4 = iVar2;
												Local_388[iParam0 /*7*/].f_3++;
											}
										}
									}
								}
								iVar2++;
							}
							break;
						
						case 1:
							if (func_35("G2TREVIN", 4, Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_388[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 15:
					switch (Local_388[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD3", 5, Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_388[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD1", 5, Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_388[iParam0 /*7*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 16:
					switch (Local_388[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_165(&(Local_388[iParam0 /*7*/].f_4), 1, 1))
							{
								Local_388[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("ONEILGUARD7", 5, Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/], "oneilguard2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_388[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (func_35("CHI2_app", 1, unk_0x4A8C381C258A124D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_388[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 17:
					if (func_35("CHI2_app", 1, unk_0x4A8C381C258A124D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_388[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 19:
					switch (Local_388[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_88("ONEILGUARD4") || func_88("SEETREVOR"))
							{
								Local_388[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("CHI2_HARD", 1, unk_0x4A8C381C258A124D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_388[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 20:
					switch (Local_388[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x1DD05E817C89C737() > Local_388[iParam0 /*7*/].f_5)
							{
								fVar4 = 999f;
								Local_388[iParam0 /*7*/].f_4 = -1;
								iVar3 = 0;
								while (iVar3 < Local_111.f_0)
								{
									if (Local_111[iVar3 /*33*/].f_1 == 2)
									{
										if (!unk_0x4FAFF4BCB7633475(Local_111[iVar3 /*33*/]))
										{
											fVar5 = func_4(unk_0x4A8C381C258A124D(), Local_111[iVar3 /*33*/], 1);
											if (fVar5 < fVar4)
											{
												fVar4 = fVar5;
												Local_388[iParam0 /*7*/].f_4 = iVar3;
											}
										}
									}
									iVar3++;
								}
								if (Local_388[iParam0 /*7*/].f_4 == -1)
								{
									Local_388[iParam0 /*7*/].f_1 = 1;
								}
								else
								{
									Local_388[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("CHI2_outs", 5, Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/], "Oneilguard1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_388[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_388[iParam0 /*7*/].f_5 = unk_0x1DD05E817C89C737() + 6000;
								Local_388[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 18:
					switch (Local_388[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar6 = 0;
							while (iVar6 < Local_111.f_0)
							{
								if (Local_111[iVar6 /*33*/].f_2 == 8)
								{
									Local_388[iParam0 /*7*/].f_4 = iVar6;
								}
								if (Local_111[iVar6 /*33*/].f_2 == 9)
								{
									Local_388[iParam0 /*7*/].f_5 = iVar6;
								}
								iVar6++;
							}
							Local_388[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (!func_65())
							{
								if (unk_0x5266F1D2AEF6F73A(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (unk_0xBD3B265153D3BA2D(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/].f_14) > 0,15f)
									{
										if (unk_0xBD3B265153D3BA2D(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/].f_14) < 0,65f)
										{
											if (func_4(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/], unk_0x4A8C381C258A124D(), 1) < 30f)
											{
												Local_388[iParam0 /*7*/].f_3 = 3;
											}
										}
									}
								}
							}
							break;
						
						case 2:
							if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_388[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_388[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 3:
							if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_5 /*33*/]))
							{
								unk_0x4CAD907F190E6F10(Local_111[Local_388[iParam0 /*7*/].f_5 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
								Local_388[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_388[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 4:
							if (!unk_0x4FAFF4BCB7633475(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (unk_0x5266F1D2AEF6F73A(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (unk_0xBD3B265153D3BA2D(Local_111[Local_388[iParam0 /*7*/].f_4 /*33*/].f_14) > 0,75f)
									{
										Local_388[iParam0 /*7*/].f_3 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 21:
					if (func_35("CHI2_find", 1, unk_0x4A8C381C258A124D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						unk_0xA62957B100C8DE6D(5f, 8f, 4);
						Local_388[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 26:
					if (func_164())
					{
						if (func_35("CHI2_pourmis", 1, unk_0x4A8C381C258A124D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
						{
							Local_388[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 27:
					if (func_35("CHI2_boom", 1, unk_0x4A8C381C258A124D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_388[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 22:
					switch (Local_388[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_388[iParam0 /*7*/].f_4 = 2500;
							Local_388[iParam0 /*7*/].f_5 = 0;
							Local_388[iParam0 /*7*/].f_3 = 1;
							break;
						
						case 1:
							Local_388[iParam0 /*7*/].f_4 = (Local_388[iParam0 /*7*/].f_4 - system::floor((system::timestep() * 1000f)));
							if (Local_388[iParam0 /*7*/].f_4 <= 0)
							{
								Local_388[iParam0 /*7*/].f_3 = 2;
							}
							break;
						
						case 2:
							if (Local_388[iParam0 /*7*/].f_5 < 14)
							{
								if (func_35("CHI2_pour", 1, unk_0x4A8C381C258A124D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_388[iParam0 /*7*/].f_3 = 1;
									Local_388[iParam0 /*7*/].f_4 = (12000 + unk_0xC5935DFB3F39785A(3000, 5000));
									Local_388[iParam0 /*7*/].f_5++;
								}
							}
							break;
					}
					break;
				
				case 23:
					if (func_35("CHI2_light", 1, unk_0x4A8C381C258A124D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_388[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 24:
					if (func_35("CHI2_boom", 1, unk_0x4A8C381C258A124D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_388[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 25:
					if (func_35("CHI2_burn", 1, unk_0x4A8C381C258A124D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_388[iParam0 /*7*/].f_1 = 1;
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
	
	iVar0 = 0;
	while (iVar0 < Local_107.f_0)
	{
		if (Local_107[iVar0 /*5*/].f_4 == 1)
		{
			if (iVar2 == 0)
			{
				iVar2 = 1;
				iVar1++;
				if (iVar1 > 1)
				{
					return 1;
				}
			}
		}
		else if (iVar2 == 1)
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return 0;
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 9999f;
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Local_111.f_0)
	{
		if (Local_111[iVar0 /*33*/].f_1 == iParam1)
		{
			if (iParam2 == 0 || (iParam2 == 1 && !unk_0x4FAFF4BCB7633475(Local_111[iVar0 /*33*/])))
			{
				fVar1 = func_4(unk_0x4A8C381C258A124D(), Local_111[iVar0 /*33*/], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					*iParam0 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (*iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_166(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	bool bVar5;
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
	
	if (Local_383[iParam0 /*10*/] != iParam1 || Local_383[iParam0 /*10*/].f_1 == 0)
	{
		Local_383[iParam0 /*10*/] = iParam1;
		Local_383[iParam0 /*10*/].f_1 = 1;
		Local_383[iParam0 /*10*/].f_3 = 0;
		Local_383[iParam0 /*10*/].f_6 = 0;
		Local_383[iParam0 /*10*/].f_4 = 0;
		Local_383[iParam0 /*10*/].f_7 = 0;
		Local_383[iParam0 /*10*/].f_8 = 0;
		Local_383[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_383[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_158(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
	}
	if (iParam2 == 1 && !bVar0)
	{
		Local_383[iParam0 /*10*/].f_2 = 0;
	}
	if (Local_383[iParam0 /*10*/].f_3 == 0 || Local_383[iParam0 /*10*/].f_6 == -1)
	{
		if (bVar0 == 1)
		{
			if (!Local_383[iParam0 /*10*/].f_2)
			{
				Local_383[iParam0 /*10*/].f_2 = 1;
			}
			switch (Local_383[iParam0 /*10*/])
			{
				case 1:
					break;
				
				case 2:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xCAC4020CCF361AC8("CHI_2_DRIVE_TO_FARMHOUSE");
							Local_383[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								unk_0xB43467C43086A6A1("CHI_2_DRIVE_TO_FARMHOUSE");
								Local_383[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 3:
					if (func_73(unk_0x4A8C381C258A124D(), 1991,05f, 3054,262f, 46,2147f, 1) > 250f)
					{
						if (unk_0xFC8BFE4B41177C22(Local_111[11 /*33*/]))
						{
							unk_0x734A9F4537A31459(&(Local_111[11 /*33*/]));
						}
						if (unk_0xFC8BFE4B41177C22(Local_111[10 /*33*/]))
						{
							unk_0x734A9F4537A31459(&(Local_111[10 /*33*/]));
						}
						if (unk_0xFC8BFE4B41177C22(Local_111[12 /*33*/]))
						{
							unk_0x734A9F4537A31459(&(Local_111[12 /*33*/]));
						}
						if (unk_0xFC8BFE4B41177C22(Local_111[13 /*33*/]))
						{
							unk_0x734A9F4537A31459(&(Local_111[13 /*33*/]));
						}
						if (unk_0xFC8BFE4B41177C22(Local_111[14 /*33*/]))
						{
							unk_0x734A9F4537A31459(&(Local_111[14 /*33*/]));
						}
						unk_0x55098D9E9AD58806(joaat("ig_janet"));
						unk_0x55098D9E9AD58806(joaat("ig_janet"));
						unk_0x55098D9E9AD58806(joaat("ig_old_man1a"));
						unk_0x55098D9E9AD58806(joaat("ig_old_man2"));
						unk_0x55098D9E9AD58806(joaat("ig_taocheng"));
						unk_0x55098D9E9AD58806(joaat("ig_taostranslator"));
						unk_0x268BE77F77533D03("misschinese2_crystalmaze");
						unk_0x268BE77F77533D03("MISSChinese2_crystalMazeMCS1_IG");
						unk_0x268BE77F77533D03("missrampageintrooutro");
						if (iLocal_377 != -1)
						{
							if (unk_0xF935563454D3B338(iLocal_377))
							{
								unk_0x8E99C7AF6C6639AB(iLocal_377);
							}
						}
						unk_0x93586F94C370857F();
						func_31(26, 1);
						Local_383[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 5:
					if (unk_0xB3157976738FC0C0("CHI_2_FARMHOUSE_INTRO", "CHINESE2_FARMHOUSE_INTRODUCTION"))
					{
						Local_383[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 4:
					if (func_73(unk_0x4A8C381C258A124D(), 2457,49f, 4977,095f, 50,56783f, 1) < 400f)
					{
						func_32(27, 0);
						unk_0x283C0970282AA5F3(1);
						unk_0xAD9B1C8FED6B4D96(1);
						unk_0xADF8AA2F22A19163("chinese2_farmhouse_cutscene");
						Local_383[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 7:
					if ((!unk_0x4FAFF4BCB7633475(Local_111[12 /*33*/]) && !unk_0x4FAFF4BCB7633475(Local_111[13 /*33*/])) && !unk_0x4FAFF4BCB7633475(Local_111[14 /*33*/]))
					{
						if (func_175(6, 6) < 2)
						{
							if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1981,257f, 3050,721f, 41,08995f, 1984,257f, 3055,543f, 49,47314f, 3,0625f, 0, 1, 0))
							{
								if (unk_0x9B5C1660CCDF7189(Local_111[12 /*33*/], joaat("script_task_look_at_entity")) == 7)
								{
									unk_0xE67051907958B5EB(Local_111[13 /*33*/], unk_0x4A8C381C258A124D(), -1, 0, 2);
									unk_0xE67051907958B5EB(Local_111[14 /*33*/], unk_0x4A8C381C258A124D(), -1, 0, 2);
									unk_0xE67051907958B5EB(Local_111[12 /*33*/], unk_0x4A8C381C258A124D(), -1, 0, 2);
								}
							}
						}
					}
					break;
				
				case 8:
					fVar1 = func_73(unk_0x4A8C381C258A124D(), 2450,214f, 4979,208f, 60,8422f, 1);
					if (fVar1 < 900f)
					{
						if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
						{
							uVar4 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
							if (unk_0xD9F5E1FEFD1329E4(uVar4, 0))
							{
								if (unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(iVar4)) || unk_0x00C6FDED3EB75117(unk_0x4B423FAA24E8ABF0(iVar4)))
								{
									fVar2 = (900f - fVar1);
									if (fVar2 < 0f)
									{
										fVar2 = 0f;
									}
									fVar2 = (fVar2 / 900f);
									fVar2 = (fVar2 * 10000f);
									fVar3 = unk_0xDF93B3CFAC96698F(iVar4);
									fVar2 = (fVar2 * (fVar3 / 35f));
									if (fVar3 > 35f)
									{
										unk_0x96CCECDBC57DA984(iVar4, 1, 0f, -fVar2, 0f, 0, 1, 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 9:
					if (unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "missrampageintrooutro", "trvram_6_1h_run_outro", 3))
					{
						Local_383[iParam0 /*10*/].f_6 = 1;
						unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 321, 1);
						if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), unk_0x70E57E9927B6BA58("walkinterruptible")))
						{
							unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Idle"), 0, 0, 0);
							if (func_174())
							{
								unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
								Local_383[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					else if (Local_383[iParam0 /*10*/].f_6 == 1)
					{
						unk_0x268BE77F77533D03("missrampageintrooutro");
						Local_383[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 6:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							if ((!unk_0x4FAFF4BCB7633475(Local_111[12 /*33*/]) && !unk_0x4FAFF4BCB7633475(Local_111[13 /*33*/])) && !unk_0x4FAFF4BCB7633475(Local_111[14 /*33*/]))
							{
								unk_0x3CEA1FD137ACE2D9(Local_111[12 /*33*/], uLocal_152);
								unk_0x3CEA1FD137ACE2D9(Local_111[13 /*33*/], iLocal_152);
								unk_0x3CEA1FD137ACE2D9(Local_111[14 /*33*/], iLocal_152);
								unk_0xBE8796DB2B90A437(Local_111[12 /*33*/], 17, 1);
								unk_0xBE8796DB2B90A437(Local_111[13 /*33*/], 17, 1);
								unk_0xBE8796DB2B90A437(Local_111[14 /*33*/], 17, 1);
								unk_0xE4DC7B3DD712372B(Local_111[12 /*33*/]);
								unk_0xE4DC7B3DD712372B(Local_111[13 /*33*/]);
								unk_0xE4DC7B3DD712372B(Local_111[14 /*33*/]);
								Local_383[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if ((unk_0x4FAFF4BCB7633475(Local_111[12 /*33*/]) || unk_0x4FAFF4BCB7633475(Local_111[13 /*33*/])) || unk_0x4FAFF4BCB7633475(Local_111[14 /*33*/]))
							{
								Local_383[iParam0 /*10*/].f_6++;
							}
							if (!unk_0x4FAFF4BCB7633475(Local_111[12 /*33*/]))
							{
								if (unk_0xF76AF9D45D6BDA45(Local_111[12 /*33*/]))
								{
									Local_383[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!unk_0x4FAFF4BCB7633475(Local_111[13 /*33*/]))
							{
								if (unk_0xF76AF9D45D6BDA45(Local_111[13 /*33*/]))
								{
									Local_383[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!unk_0x4FAFF4BCB7633475(Local_111[14 /*33*/]))
							{
								if (unk_0xF76AF9D45D6BDA45(Local_111[14 /*33*/]))
								{
									Local_383[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							if (!unk_0x4FAFF4BCB7633475(Local_111[12 /*33*/]))
							{
								unk_0xD844F5E50DAB6FF7(Local_111[12 /*33*/], unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
								unk_0x44FB298D6382876D(Local_111[12 /*33*/], 1);
								unk_0xF09E30AF1B8FB379(&(Local_111[12 /*33*/]));
							}
							if (!unk_0x4FAFF4BCB7633475(Local_111[13 /*33*/]))
							{
								unk_0xD844F5E50DAB6FF7(Local_111[13 /*33*/], unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
								unk_0x44FB298D6382876D(Local_111[13 /*33*/], 1);
								unk_0xF09E30AF1B8FB379(&(Local_111[13 /*33*/]));
							}
							if (!unk_0x4FAFF4BCB7633475(Local_111[14 /*33*/]))
							{
								unk_0xD844F5E50DAB6FF7(Local_111[14 /*33*/], unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
								unk_0x44FB298D6382876D(Local_111[14 /*33*/], 1);
								unk_0xF09E30AF1B8FB379(&(Local_111[14 /*33*/]));
								Local_383[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xADF8AA2F22A19163("chinese2_explosion_cutscene");
							unk_0x22A76EDE2316E9A1();
							Local_383[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (iLocal_164 == 1)
							{
								if (unk_0xB3157976738FC0C0("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
								{
									Local_383[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_164 == 2)
							{
								if (unk_0xB3157976738FC0C0("CHINESE2_FARMHOUSE_EXPLOSION_STICKY_BOMB_MASTER", 0))
								{
									Local_383[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_164 == 3)
							{
								if (unk_0xB3157976738FC0C0("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
								{
									Local_383[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (unk_0xEBCB9138B2CABF20())
							{
								Local_383[iParam0 /*10*/].f_6 = 10;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 1:
							if (unk_0x1DD05E817C89C737() > Local_383[iParam0 /*10*/].f_7)
							{
								if (unk_0xF8A8852F99E201DD(unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D())))
								{
									unk_0xD2FD15A3D9DEE4CC(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) + Vector(0f, unk_0xD2AA6F822D3A55D2(0f, 4f), unk_0xD2AA6F822D3A55D2(0f, 4f)), 16, 1,5f, 1, 0, 1065353216, 0);
									Local_383[iParam0 /*10*/].f_9 = (Local_383[iParam0 /*10*/].f_9 - 1f);
									Local_383[iParam0 /*10*/].f_7 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(250, 520));
								}
								else
								{
									Local_383[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							break;
						
						default:
							bVar5 = false;
							while (bVar5 < Local_382.f_0)
							{
								if (!BitTest(Local_383[iParam0 /*10*/].f_7, bVar5))
								{
									if (unk_0x8764A5B95AE1F967(-1, Local_382[bVar5 /*3*/], 5f))
									{
										unk_0x0B0C9A0F9AAEB7F0(&(Local_383[iParam0 /*10*/].f_7), bVar5);
										if (Local_383[iParam0 /*10*/].f_6 == 0)
										{
											Local_383[iParam0 /*10*/].f_6 = unk_0x1DD05E817C89C737() + 1500;
										}
									}
								}
								bVar5++;
							}
							if (unk_0x1DD05E817C89C737() > Local_383[iParam0 /*10*/].f_8)
							{
								Local_383[iParam0 /*10*/].f_8 = 0;
								bVar5 = false;
								while (bVar5 < Local_382.f_0)
								{
									if (!BitTest(Local_383[iParam0 /*10*/].f_7, bVar5 + 9) && BitTest(Local_383[iParam0 /*10*/].f_7, bVar5))
									{
										unk_0xD2FD15A3D9DEE4CC(Local_382[bVar5 /*3*/], 16, 1,5f, 1, 0, 1065353216, 0);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_383[iParam0 /*10*/].f_7), bVar5 + 9);
										bVar5 = 8;
										Local_383[iParam0 /*10*/].f_8 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(150, 320));
									}
									bVar5++;
								}
							}
							if (Local_383[iParam0 /*10*/].f_6 != 0)
							{
								if (unk_0x1DD05E817C89C737() > Local_383[iParam0 /*10*/].f_6)
								{
									Local_383[iParam0 /*10*/].f_6 = 1;
									Local_383[iParam0 /*10*/].f_7 = unk_0x1DD05E817C89C737() + 300;
									Local_383[iParam0 /*10*/].f_9 = 16f;
								}
							}
							break;
					}
					break;
				
				case 12:
					iVar6 = func_18(8);
					iVar7 = func_18(9);
					func_105(iVar6, 20, 0, 0);
					func_105(iVar7, 20, 0, 0);
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 42:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x91115A9BE4445AA6("RADIO_01_CLASS_ROCK");
							Local_383[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								if (unk_0x2044128E627E0951())
								{
									iLocal_142 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
									if (unk_0xD9F5E1FEFD1329E4(iLocal_142, 0))
									{
										if (!unk_0x182BD9AD1675B5DE(iLocal_142))
										{
											Local_383[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
						
						case 2:
							if (unk_0x16088CC55E7F218A("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_383[iParam0 /*10*/].f_6++;
							}
							break;
							break;
						
						case 3:
							if (unk_0x86A2BC11844DEEB3("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_383[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 4:
							if (func_74(iLocal_142))
							{
								if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_142, 0))
								{
									if (unk_0x182BD9AD1675B5DE(iLocal_142))
									{
										Local_383[iParam0 /*10*/].f_7 = (Local_383[iParam0 /*10*/].f_7 + unk_0x1DD05E817C89C737() + 7000);
										Local_383[iParam0 /*10*/].f_6++;
									}
								}
							}
							break;
						
						case 5:
							if (func_74(iLocal_142))
							{
								if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_142, 0))
								{
									if (unk_0x1DD05E817C89C737() > Local_383[iParam0 /*10*/].f_7)
									{
										if (unk_0x3BB0DC333050E9BD() != 6 && unk_0x3BB0DC333050E9BD() != 0)
										{
											if (unk_0xC7E97C503E2ACEE9() != 0)
											{
												if (func_35("CHI2_rad", 1, unk_0x4A8C381C258A124D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_383[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_383[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_383[iParam0 /*10*/].f_7 = unk_0x1DD05E817C89C737() + 5000;
										}
									}
								}
							}
							break;
						
						case 6:
							if (func_88("CHI2_rad"))
							{
								Local_383[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 7:
							if (!func_88("CHI2_rad"))
							{
								if (func_74(iLocal_142))
								{
									if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_142, 0))
									{
										if (!unk_0x6D05C5731A838CB3(0, 85))
										{
											if (unk_0x3BB0DC333050E9BD() != 6)
											{
												if (iLocal_175 == -1)
												{
													iLocal_175 = unk_0xCA369FBC0DE29517();
													unk_0xBF3D28CA44F3BE2D(iLocal_175, "Change_Station_Loud", "Radio_Soundset", 1);
													Local_383[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_383[iParam0 /*10*/].f_6 = 9;
											}
										}
									}
								}
							}
							break;
						
						case 8:
							if (!unk_0x6D05C5731A838CB3(0, 85))
							{
								if (unk_0x86A2BC11844DEEB3("CHN2_TREV_RADIO_2_FRTA"))
								{
									unk_0xCAC4020CCF361AC8("CHI_2_DRIVE_ROCK_RADIO");
									Local_383[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 9:
							if (func_74(iLocal_142))
							{
								if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_142, 0))
								{
									if (unk_0x3BB0DC333050E9BD() == 6)
									{
										if (unk_0xC7E97C503E2ACEE9() != 0)
										{
											if (func_35("CHI2_radb", 1, unk_0x4A8C381C258A124D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_383[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_383[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
					}
					break;
				
				case 48:
					func_31(9, 1);
					unk_0x425BBE19F25A57AB(1f);
					unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 2, 0);
					unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
					unk_0xDAE61414743C8D1D(5);
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 49:
					if (!func_96(2448,25f, 4974,92f, 55,11f, 20f, 500f) || func_93(49))
					{
						if (iLocal_177 != 0)
						{
							unk_0xBBB6D0F765409642(iLocal_177);
						}
						iLocal_177 = 0;
						func_19(50, 2, 0, 1, 0);
						func_19(51, 2, 0, 1, 0);
						func_19(52, 2, 0, 1, 0);
						func_19(53, 2, 0, 1, 0);
						func_19(54, 1, 0, 1, 0);
						func_19(55, 1, 0, 1, 0);
						Local_383[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 50:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"), 0))
							{
								Local_383[iParam0 /*10*/].f_7 = unk_0x1149D67DB429787A(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"));
								Local_383[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"), 0))
							{
								iVar8 = unk_0x1149D67DB429787A(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"));
								if (iVar8 > Local_383[iParam0 /*10*/].f_7)
								{
									Local_383[iParam0 /*10*/].f_7 = iVar8;
								}
								else if (iVar8 < Local_383[iParam0 /*10*/].f_7)
								{
									func_9(158, (Local_383[iParam0 /*10*/].f_7 - iVar8), 0);
									Local_383[iParam0 /*10*/].f_7 = iVar8;
								}
							}
							if (unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar9, 1))
							{
								if (iVar9 == joaat("weapon_petrolcan"))
								{
									if (unk_0x6D05C5731A838CB3(0, 24))
									{
										if (Local_383[iParam0 /*10*/].f_8 == 0)
										{
											func_10(157, 0);
											Local_383[iParam0 /*10*/].f_8 = 1;
										}
									}
									else if (Local_383[iParam0 /*10*/].f_8 == 1)
									{
										func_11(0, 157);
										Local_383[iParam0 /*10*/].f_8 = 0;
									}
								}
								else if (Local_383[iParam0 /*10*/].f_8 == 1)
								{
									func_11(0, 157);
									Local_383[iParam0 /*10*/].f_8 = 0;
								}
							}
							else if (Local_383[iParam0 /*10*/].f_8 == 1)
							{
								func_11(0, 157);
								Local_383[iParam0 /*10*/].f_8 = 0;
							}
							break;
					}
					break;
				
				case 51:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_383[iParam0 /*10*/].f_7 = -1;
							Local_383[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar10, 1))
							{
								if (iVar10 == joaat("weapon_petrolcan"))
								{
									if (unk_0x6D05C5731A838CB3(0, 24))
									{
										if (Local_383[iParam0 /*10*/].f_7 == -1)
										{
											Local_383[iParam0 /*10*/].f_7 = unk_0x1149D67DB429787A(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"));
										}
										if (iLocal_91 == 0)
										{
											Local_383[iParam0 /*10*/].f_9 = (Local_383[iParam0 /*10*/].f_9 + (system::timestep() * 2f));
										}
										else if (iLocal_91 < 30 && Local_383[iParam0 /*10*/].f_9 < 70f)
										{
											Local_383[iParam0 /*10*/].f_9 = (Local_383[iParam0 /*10*/].f_9 + (system::timestep() * 1,5f));
										}
										else
										{
											Local_383[iParam0 /*10*/].f_9 = (Local_383[iParam0 /*10*/].f_9 + system::timestep());
										}
										iVar11 = system::floor((IntToFloat(Local_383[iParam0 /*10*/].f_7) * (1f - (Local_383[iParam0 /*10*/].f_9 / 90f))));
										if (iVar11 > 0)
										{
											unk_0x45FC566246B3511B(unk_0x4A8C381C258A124D(), iVar10, iVar11, 0);
										}
										else
										{
											unk_0x45FC566246B3511B(unk_0x4A8C381C258A124D(), iVar10, 0, 0);
										}
									}
								}
							}
							break;
					}
					break;
				
				case 52:
					func_15("CHN2_STOP_TRACK", 0, func_173());
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 53:
					unk_0xAE9B78A0E33292A8("AZL_CHN2_METH_LAB_FARM_FIRE", 1, 1);
					func_172(1);
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 54:
					func_172(0);
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 55:
					unk_0x283C0970282AA5F3(3);
					unk_0xAD9B1C8FED6B4D96(3);
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 56:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							if (unk_0xFC8BFE4B41177C22(Local_111[4 /*33*/].f_20))
							{
								unk_0xB3B56385ECA230B4(&(Local_111[4 /*33*/].f_20));
							}
							if (unk_0xFC8BFE4B41177C22(Local_111[5 /*33*/].f_20))
							{
								unk_0xB3B56385ECA230B4(&(Local_111[5 /*33*/].f_20));
							}
							iVar12 = 0;
							while (iVar12 < iLocal_168)
							{
								if (unk_0xFC8BFE4B41177C22(iLocal_168[iVar12]))
								{
									unk_0xB3B56385ECA230B4(&(iLocal_168[iVar12]));
								}
								iVar12++;
							}
							unk_0x55098D9E9AD58806(joaat("prop_cs_beer_bot_01"));
							unk_0x55098D9E9AD58806(joaat("prop_ld_can_01"));
							unk_0x55098D9E9AD58806(joaat("prop_cs_fertilizer"));
							Local_383[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x4FAFF4BCB7633475(Local_111[23 /*33*/]))
							{
								if (unk_0xFC8BFE4B41177C22(iLocal_371))
								{
									unk_0xB3B56385ECA230B4(&iLocal_371);
									unk_0xCF56BDC3BD787B97(joaat("weapon_sawnoffshotgun"));
									Local_383[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
					}
					break;
				
				case 47:
					if (!unk_0x4FAFF4BCB7633475(Local_111[11 /*33*/]))
					{
						if (!unk_0x912159A05BE6B52E(Local_111[11 /*33*/]))
						{
							if (unk_0x1DD05E817C89C737() > Local_383[iParam0 /*10*/].f_7)
							{
								if (!unk_0x4FAFF4BCB7633475(Local_111[11 /*33*/]))
								{
									unk_0x4CAD907F190E6F10(Local_111[11 /*33*/], "WHIMPER", "WAVELOAD_PAIN_MALE", "SPEECH_PARAMS_FORCE_NORMAL", 0);
									Local_383[iParam0 /*10*/].f_7 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(3500, 5000));
								}
							}
						}
					}
					break;
				
				case 41:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xEC9DAA34BBB4658C(joaat("ig_taocheng"));
							unk_0xEC9DAA34BBB4658C(joaat("ig_taostranslator"));
							unk_0x80813AC549A1E8AE("misschinese2_crystalmaze");
							if (iLocal_377 == -1 || (iLocal_377 != -1 && !unk_0xF935563454D3B338(iLocal_377)))
							{
								iLocal_377 = unk_0x8CC50AC10D8037C7(1991,081f, 3054,517f, 46,71474f, 4f, 4f, 4f, 0f, 0, 3);
							}
							Local_383[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if ((unk_0xE100DD4F82A51BDE("misschinese2_crystalmaze") && unk_0x6252BC0DD8A320DB(joaat("ig_taocheng"))) && unk_0x6252BC0DD8A320DB(joaat("ig_taostranslator")))
							{
								if (!unk_0xFC8BFE4B41177C22(Local_111[11 /*33*/]))
								{
									Local_111[11 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("ig_taocheng"), 1991,988f, 3054,51f, 46,215f, 0, 1, 1);
									unk_0x3CEA1FD137ACE2D9(Local_111[11 /*33*/], iLocal_116);
									unk_0x3F58BFCF656F0DF1(Local_111[11 /*33*/], 0);
								}
								else if (!unk_0x4FAFF4BCB7633475(Local_111[11 /*33*/]))
								{
									unk_0x3CEA1FD137ACE2D9(Local_111[11 /*33*/], iLocal_116);
									unk_0x3F58BFCF656F0DF1(Local_111[11 /*33*/], 0);
								}
								if (!unk_0xFC8BFE4B41177C22(Local_111[10 /*33*/]))
								{
									Local_111[10 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("ig_taostranslator"), 1991,988f, 3054,51f, 46,215f, 0, 1, 1);
									unk_0x3CEA1FD137ACE2D9(Local_111[10 /*33*/], iLocal_116);
									unk_0x3F58BFCF656F0DF1(Local_111[10 /*33*/], 0);
									unk_0x7F08C4791E6D6969(Local_111[10 /*33*/], 1, 0, 1, 0, 1);
								}
								else if (!unk_0x4FAFF4BCB7633475(Local_111[10 /*33*/]))
								{
									unk_0x3CEA1FD137ACE2D9(Local_111[10 /*33*/], iLocal_116);
									unk_0x3F58BFCF656F0DF1(Local_111[10 /*33*/], 0);
								}
								if (!unk_0x4FAFF4BCB7633475(Local_111[11 /*33*/]))
								{
									if (!unk_0x5266F1D2AEF6F73A(Local_383[iParam0 /*10*/].f_7))
									{
										Local_383[iParam0 /*10*/].f_7 = unk_0x2EC137C692A52458(1991,988f, 3054,51f, 46,215f, 0f, 0f, 50,76f, 2);
										unk_0xA7C372501A8A3B23(Local_383[iParam0 /*10*/].f_7, 1);
									}
									unk_0x3DA436E63AB0F541(Local_111[11 /*33*/], Local_383[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
								}
								if (!unk_0x4FAFF4BCB7633475(Local_111[10 /*33*/]))
								{
									if (!unk_0x5266F1D2AEF6F73A(Local_383[iParam0 /*10*/].f_7))
									{
										Local_383[iParam0 /*10*/].f_7 = unk_0x2EC137C692A52458(1991,988f, 3054,51f, 46,215f, 0f, 0f, 50,76f, 2);
										unk_0xA7C372501A8A3B23(Local_383[iParam0 /*10*/].f_7, 1);
									}
									unk_0x3DA436E63AB0F541(Local_111[10 /*33*/], Local_383[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
								}
								Local_383[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 2:
							if (!unk_0x4FAFF4BCB7633475(Local_111[10 /*33*/]) && !unk_0x4FAFF4BCB7633475(Local_111[11 /*33*/]))
							{
								unk_0xD1C578C204015E1F(Local_111[10 /*33*/], 0, 0, 0, 0);
								unk_0xAAA71DD7E9059338(Local_111[11 /*33*/], 1);
								unk_0xAAA71DD7E9059338(Local_111[10 /*33*/], 1);
								if (!unk_0x5266F1D2AEF6F73A(Local_383[iParam0 /*10*/].f_7))
								{
									Local_383[iParam0 /*10*/].f_7 = unk_0x2EC137C692A52458(1991,988f, 3054,51f, 46,215f, 0f, 0f, 50,76f, 2);
									unk_0x3DA436E63AB0F541(Local_111[11 /*33*/], Local_383[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
									unk_0x3DA436E63AB0F541(Local_111[10 /*33*/], Local_383[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
									unk_0xA7C372501A8A3B23(Local_383[iParam0 /*10*/].f_7, 1);
								}
								unk_0x0428AFDCAA63B06E(Local_111[11 /*33*/], 118, 0);
								unk_0x0428AFDCAA63B06E(Local_111[11 /*33*/], 208, 1);
								unk_0x0428AFDCAA63B06E(Local_111[10 /*33*/], 118, 0);
								unk_0x0428AFDCAA63B06E(Local_111[10 /*33*/], 208, 1);
								Local_383[iParam0 /*10*/].f_6 = 900;
							}
							break;
						
						case 900:
							if (!unk_0x4FAFF4BCB7633475(Local_111[11 /*33*/]))
							{
								if (!unk_0x8BF5256C439DF778(Local_111[11 /*33*/]))
								{
									if (unk_0x5266F1D2AEF6F73A(Local_383[iParam0 /*10*/].f_7))
									{
										if (unk_0xBD3B265153D3BA2D(Local_383[iParam0 /*10*/].f_7) == 1f)
										{
											Local_383[iParam0 /*10*/].f_7 = unk_0x2EC137C692A52458(1991,988f, 3054,51f, 46,215f, 0f, 0f, 50,76f, 2);
											unk_0xA7C372501A8A3B23(Local_383[iParam0 /*10*/].f_7, 1);
											if (unk_0xC5935DFB3F39785A(0, 3) < 2)
											{
												unk_0x3DA436E63AB0F541(Local_111[11 /*33*/], Local_383[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
												if (!unk_0x4FAFF4BCB7633475(Local_111[10 /*33*/]))
												{
													if (!unk_0x8BF5256C439DF778(Local_111[10 /*33*/]))
													{
														if (!BitTest(Local_383[iParam0 /*10*/].f_8, 0))
														{
															unk_0x3DA436E63AB0F541(Local_111[10 /*33*/], Local_383[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
														}
													}
												}
											}
											else
											{
												unk_0x3DA436E63AB0F541(Local_111[11 /*33*/], Local_383[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
												if (!unk_0x4FAFF4BCB7633475(Local_111[10 /*33*/]))
												{
													if (!unk_0x8BF5256C439DF778(Local_111[10 /*33*/]))
													{
														if (!BitTest(Local_383[iParam0 /*10*/].f_8, 0))
														{
															unk_0x3DA436E63AB0F541(Local_111[10 /*33*/], Local_383[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
														}
													}
												}
											}
										}
									}
									else
									{
										Local_383[iParam0 /*10*/].f_7 = unk_0x2EC137C692A52458(1991,988f, 3054,51f, 46,215f, 0f, 0f, 50,76f, 2);
										unk_0x3DA436E63AB0F541(Local_111[11 /*33*/], Local_383[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
										unk_0xA7C372501A8A3B23(Local_383[iParam0 /*10*/].f_7, 1);
									}
								}
							}
							if (!unk_0x4FAFF4BCB7633475(Local_111[10 /*33*/]))
							{
								if (((unk_0x9B3D4335E0EDB0BE(Local_111[10 /*33*/], unk_0x4A8C381C258A124D(), 1) || unk_0x8BF5256C439DF778(Local_111[10 /*33*/])) || unk_0x4FAFF4BCB7633475(Local_111[11 /*33*/])) || (!unk_0x4FAFF4BCB7633475(Local_111[10 /*33*/]) && unk_0x9B5C1660CCDF7189(Local_111[10 /*33*/], joaat("script_task_synchronized_scene")) == 2))
								{
									if (!BitTest(Local_383[iParam0 /*10*/].f_8, 0))
									{
										unk_0x974022927CB47E68(Local_111[10 /*33*/]);
										func_99();
										unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 30f, 20000, 0, 0);
										unk_0xAFC7A89C990C4339(0, -1);
										func_98(&(Local_111[10 /*33*/]), 0);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_383[iParam0 /*10*/].f_8), false);
									}
								}
							}
							if (!unk_0x4FAFF4BCB7633475(Local_111[11 /*33*/]))
							{
								if (((unk_0x9B3D4335E0EDB0BE(Local_111[11 /*33*/], unk_0x4A8C381C258A124D(), 1) || unk_0x8BF5256C439DF778(Local_111[11 /*33*/])) || BitTest(Local_383[iParam0 /*10*/].f_8, 1)) || (!unk_0x4FAFF4BCB7633475(Local_111[11 /*33*/]) && unk_0x9B5C1660CCDF7189(Local_111[11 /*33*/], joaat("script_task_synchronized_scene")) == 2))
								{
									unk_0xD25E9BDC14A0B649(Local_111[11 /*33*/], 0, 0, 0);
									if (!unk_0x8BF5256C439DF778(Local_111[11 /*33*/]))
									{
									}
								}
							}
							if (func_73(unk_0x4A8C381C258A124D(), 1991,988f, 3054,51f, 46,215f, 1) > 200f)
							{
								if (unk_0xFC8BFE4B41177C22(Local_111[11 /*33*/]) && unk_0xFC8BFE4B41177C22(Local_111[10 /*33*/]))
								{
									unk_0x734A9F4537A31459(&(Local_111[11 /*33*/]));
									unk_0x734A9F4537A31459(&(Local_111[10 /*33*/]));
								}
								unk_0x55098D9E9AD58806(joaat("ig_taocheng"));
								unk_0x55098D9E9AD58806(joaat("ig_taostranslator"));
								unk_0x268BE77F77533D03("misschinese2_crystalmaze");
								if (iLocal_377 != -1)
								{
									if (unk_0xF935563454D3B338(iLocal_377))
									{
										unk_0x8E99C7AF6C6639AB(iLocal_377);
									}
								}
								Local_383[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					if (func_73(unk_0x4A8C381C258A124D(), 1995,169f, 3062,162f, 46,049f, 1) < 7f)
					{
						if (!unk_0x4FAFF4BCB7633475(Local_111[11 /*33*/]))
						{
							if (unk_0x9B5C1660CCDF7189(Local_111[11 /*33*/], joaat("script_task_look_at_entity")) != 1)
							{
								unk_0xE67051907958B5EB(Local_111[11 /*33*/], unk_0x4A8C381C258A124D(), 4000, 2096, 2);
							}
						}
						if (!unk_0x4FAFF4BCB7633475(Local_111[10 /*33*/]))
						{
							if (unk_0x9B5C1660CCDF7189(Local_111[10 /*33*/], joaat("script_task_look_at_entity")) != 1)
							{
								unk_0xE67051907958B5EB(Local_111[10 /*33*/], unk_0x4A8C381C258A124D(), 4000, 2096, 2);
							}
						}
					}
					break;
				
				case 13:
					iVar13 = 0;
					iLocal_380 = 0;
					iVar13 = 0;
					while (iVar13 < Local_111.f_0)
					{
						if (unk_0xFC8BFE4B41177C22(Local_111[iVar13 /*33*/]))
						{
							if (unk_0x4FAFF4BCB7633475(Local_111[iVar13 /*33*/]))
							{
								if (Local_111[iVar13 /*33*/].f_21 == 0)
								{
									if (((unk_0x6D7C109F77738F39(Local_111[iVar13 /*33*/]) == 392730790 || unk_0x6D7C109F77738F39(Local_111[iVar13 /*33*/]) == joaat("weapon_heavysniper")) || unk_0x6D7C109F77738F39(Local_111[iVar13 /*33*/]) == joaat("weapon_remotesniper")) || unk_0x6D7C109F77738F39(Local_111[iVar13 /*33*/]) == joaat("weapon_sniperrifle"))
									{
										iLocal_380++;
									}
									Local_111[iVar13 /*33*/].f_21 = 1;
								}
							}
						}
						iVar13++;
					}
					if (iLocal_380 > 0)
					{
					}
					if (iLocal_380 > 1)
					{
						func_171(150);
						Local_383[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 14:
					func_15("CHN2_SNIPE_START", 0, "CHN2_EXPLODE");
					unk_0xA62957B100C8DE6D(4f, 15f, 4);
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 15:
					if (func_93(9))
					{
						func_15("CHN2_SPOTTED", 0, "CHN2_EXPLODE");
					}
					else
					{
						func_15("CHN2_TO_HOUSE", 0, "CHN2_EXPLODE");
					}
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 16:
					if (unk_0xB0E14182FAD64944(uLocal_174))
					{
						unk_0xDDFB0941A19702BE(uLocal_174);
					}
					iVar14 = 0;
					unk_0x0B0C9A0F9AAEB7F0(&iVar14, 3);
					unk_0x0B0C9A0F9AAEB7F0(&iVar14, 8);
					unk_0x0B0C9A0F9AAEB7F0(&iVar14, true);
					if (!unk_0xB0E14182FAD64944(uLocal_174))
					{
						uLocal_174 = unk_0x8D4CAF9A056EA9E4(joaat("pickup_weapon_petrolcan"), 2436,775f, 4967,487f, 41,4f, iVar14, -1, 1, 0);
						unk_0x57303BAC3E5DA035(uLocal_174, "V_8_BasementRm");
						uLocal_176 = func_170(uLocal_174);
						unk_0x594D5D0D7071B0DE(uLocal_176, "FRMBLIP");
					}
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 17:
					if (!func_30(5))
					{
						func_172(1);
						unk_0xCAC4020CCF361AC8("CHI_2_SHOOTOUT_STEALTH");
						unk_0xF6ECB54A7941386F(1);
						Local_383[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 19:
					unk_0x268BE77F77533D03("misschinese2_barrelRoll");
					unk_0x13F0C01028B5EE7C("move_m@gangster@var_e");
					unk_0x13F0C01028B5EE7C("move_m@gangster@var_f");
					unk_0x13F0C01028B5EE7C("move_m@gangster@generic");
					unk_0x268BE77F77533D03("misschinese2_bank5");
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 20:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_383[iParam0 /*10*/].f_7 = unk_0x1DD05E817C89C737() + 4000;
							Local_383[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x1DD05E817C89C737() > Local_383[iParam0 /*10*/].f_7)
							{
								Local_383[iParam0 /*10*/].f_7 = 0;
								while (Local_383[iParam0 /*10*/].f_7 < Local_111.f_0)
								{
									if (!unk_0x4FAFF4BCB7633475(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/]))
									{
										if (unk_0xF8F35890F43ED2AE(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/]) == 0)
										{
											Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/].f_1 = 5;
											Local_117[Local_383[iParam0 /*10*/].f_7 /*24*/].f_3 = 7;
											Local_117[Local_383[iParam0 /*10*/].f_7 /*24*/].f_4 = 0;
											Local_117[Local_383[iParam0 /*10*/].f_7 /*24*/].f_5 = 0;
											func_105(Local_383[iParam0 /*10*/].f_7, 27, 0, 0);
											unk_0x3CEA1FD137ACE2D9(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/], iLocal_115);
											func_134(&(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/].f_25));
										}
									}
									Local_383[iParam0 /*10*/].f_7++;
								}
							}
							break;
					}
					break;
				
				case 21:
					Local_383[iParam0 /*10*/].f_7 = 0;
					while (Local_383[iParam0 /*10*/].f_7 < Local_111.f_0)
					{
						if (!unk_0x4FAFF4BCB7633475(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/]))
						{
							if (unk_0x5105BE70DEF1F5FB(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/], 2457,885f, 4981,169f, 50,00518f, 2441,58f, 4965,088f, 56,24006f, 34,3125f, 0, 1, 0))
							{
								unk_0x734A9F4537A31459(&(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/]));
							}
						}
						Local_383[iParam0 /*10*/].f_7++;
					}
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 22:
					func_15("CHN2_ENTER_HOUSE", 0, "CHN2_EXPLODE");
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 23:
					iVar15 = 0;
					while (iVar15 < Local_111.f_0)
					{
						if (!unk_0x4FAFF4BCB7633475(Local_111[iVar15 /*33*/]))
						{
							if (unk_0xAB74A6FE5E16479E(Local_111[iVar15 /*33*/]) != unk_0x70E57E9927B6BA58("V_8_BasementRm"))
							{
								func_105(iVar15, 27, 0, 0);
								Local_111[iVar15 /*33*/].f_1 = 5;
								Local_117[iVar15 /*24*/].f_3 = 7;
								Local_111[iVar15 /*33*/].f_5 = 0;
							}
						}
						iVar15++;
					}
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 24:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_383[iParam0 /*10*/].f_7 = func_18(10);
							if (Local_383[iParam0 /*10*/].f_7 != -1)
							{
								Local_383[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!unk_0x4FAFF4BCB7633475(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/]))
							{
								func_105(Local_383[iParam0 /*10*/].f_7, 18, 0, 0);
								Local_383[iParam0 /*10*/].f_3 = 1;
							}
							else
							{
								Local_383[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 25:
					if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()) || func_93(9))
					{
						unk_0x96A0632EBDD87FA3(unk_0x4A8C381C258A124D(), 1, -1, 0);
						Local_383[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 26:
					unk_0xB43467C43086A6A1("CHI_2_SHOOTOUT_STEALTH");
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 27:
					unk_0xCAC4020CCF361AC8("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 28:
					if (unk_0xBC2EE32DE886BD08("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
					{
						unk_0xB43467C43086A6A1("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					}
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 44:
					if (!unk_0xBC2EE32DE886BD08("CHI_2_SHOOTOUT_IN_HOUSE"))
					{
						if (func_93(12))
						{
							unk_0xCAC4020CCF361AC8("CHI_2_SHOOTOUT_IN_HOUSE");
						}
					}
					else if (func_162(12))
					{
						unk_0xB43467C43086A6A1("CHI_2_SHOOTOUT_IN_HOUSE");
					}
					break;
				
				case 45:
					if ((func_93(9) || (!unk_0x4FAFF4BCB7633475(Local_111[8 /*33*/]) && unk_0x1B32E388988DD296(Local_111[8 /*33*/], 0))) || (!unk_0x4FAFF4BCB7633475(Local_111[9 /*33*/]) && unk_0x1B32E388988DD296(Local_111[9 /*33*/], 0)))
					{
						if (!unk_0x4FAFF4BCB7633475(Local_111[8 /*33*/]))
						{
							unk_0xC652B7E19CE29859(Local_111[8 /*33*/], 45);
						}
						if (!unk_0x4FAFF4BCB7633475(Local_111[9 /*33*/]))
						{
							unk_0xC652B7E19CE29859(Local_111[9 /*33*/], 45);
						}
						Local_383[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 29:
					if (func_93(9))
					{
						Local_383[iParam0 /*10*/].f_7 = 0;
						while (Local_383[iParam0 /*10*/].f_7 < Local_111.f_0)
						{
							if (!unk_0x4FAFF4BCB7633475(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/]))
							{
								unk_0x25DBF9F9C6BDFFEA(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/], 60f);
							}
							Local_383[iParam0 /*10*/].f_7++;
						}
						Local_383[iParam0 /*10*/].f_3 = 1;
					}
					else
					{
						switch (Local_383[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_93(12))
								{
									Local_383[iParam0 /*10*/].f_7 = 0;
									while (Local_383[iParam0 /*10*/].f_7 < Local_111.f_0)
									{
										if (!unk_0x4FAFF4BCB7633475(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												unk_0x25DBF9F9C6BDFFEA(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/], 5f);
											}
										}
										Local_383[iParam0 /*10*/].f_7++;
									}
									Local_383[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (func_162(12))
								{
									Local_383[iParam0 /*10*/].f_7 = 0;
									while (Local_383[iParam0 /*10*/].f_7 < Local_111.f_0)
									{
										if (!unk_0x4FAFF4BCB7633475(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												unk_0x25DBF9F9C6BDFFEA(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/], 30f);
											}
										}
										Local_383[iParam0 /*10*/].f_7++;
									}
									Local_383[iParam0 /*10*/].f_6 = 0;
								}
								break;
							}
					}
					break;
				
				case 46:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x80813AC549A1E8AE("misschinese2_crystalmaze");
							Local_383[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0xE100DD4F82A51BDE("misschinese2_crystalmaze"))
							{
								if (!unk_0x4FAFF4BCB7633475(Local_111[23 /*33*/]))
								{
									Local_383[iParam0 /*10*/].f_7 = unk_0x2EC137C692A52458(2435,312f, 4967,087f, 41,35f, 0f, 0f, 11,4f, 2);
									unk_0xBF3497E24DEAD835(Local_383[iParam0 /*10*/].f_7, 1);
									unk_0x3DA436E63AB0F541(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/], Local_383[iParam0 /*10*/].f_8, "misschinese2_crystalmaze", "_stand_to_aim", 1000f, -8f, 0, 0, 1148846080, 0);
									Local_383[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 30:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xEC9DAA34BBB4658C(joaat("blazer"));
							Local_383[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x6252BC0DD8A320DB(joaat("blazer")))
							{
								iLocal_144 = unk_0x5779387E956077A6(joaat("blazer"), 2478,587f, 4941,803f, 43,6736f, 227,2903f, 1, 1, 0);
								unk_0x1DE99C193C7EC64B(iLocal_144, 1084227584);
								Local_383[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 31:
					unk_0x96A0632EBDD87FA3(unk_0x4A8C381C258A124D(), 0, -1, 0);
					func_169(0);
					func_167();
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 32:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							if (func_93(29))
							{
								if (unk_0xC450B06E5AAA0985(uLocal_176))
								{
									unk_0xFE54B8568B2ABD12(&uLocal_176);
								}
								func_12(0);
								if (func_90("FRMFLC", 0, 0))
								{
									unk_0x406CBCEA35499884();
								}
								func_10(157, 0);
								unk_0xA62957B100C8DE6D(3f, 10f, 4);
								if (iLocal_165 == 0)
								{
									iLocal_165 = unk_0x1149D67DB429787A(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"));
								}
								Local_383[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!func_93(29))
							{
								func_9(158, (iLocal_165 - unk_0x1149D67DB429787A(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"))), 1);
								iLocal_178 = unk_0x8366ABB82B1ABC59(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 20f, unk_0xA0A2925EDC6DDA6D(joaat("weapon_petrolcan")), 0, 0, 1);
								if (iLocal_178 != 0)
								{
									if (unk_0xC450B06E5AAA0985(uLocal_176))
									{
										unk_0xFE54B8568B2ABD12(&uLocal_176);
									}
									uLocal_176 = func_13(iLocal_178);
									func_12(1);
									func_11(0, 157);
								}
								Local_383[iParam0 /*10*/].f_6 = 0;
							}
							break;
					}
					if (func_8())
					{
						func_11(0, 157);
						Local_383[iParam0 /*10*/].f_3 = 1;
						func_32(17, 0);
					}
					break;
				
				case 33:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xD04A772C411165F2("arm2_30");
							Local_383[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0xA08EEC7306CF6198("arm2_30"))
							{
								if (func_93(29))
								{
									unk_0x94302E8F619FAF3E("arm2_30", 1, 1065353216, 1056964608);
									unk_0xD60BA488D361DF8C("arm2_30", 2);
									Local_383[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (!func_93(29))
							{
								unk_0x94302E8F619FAF3E("arm2_30", 0, 1065353216, 1056964608);
								Local_383[iParam0 /*10*/].f_6 = 1;
							}
							break;
					}
					break;
				
				case 34:
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == 0)
						{
							if (func_73(unk_0x4A8C381C258A124D(), 2451,08f, 4961,463f, 44,4392f, 1) < 20f)
							{
								unk_0xF42A811582CF3AE1(0, 0, 0, 0, 0);
							}
						}
					}
					break;
				
				case 35:
					func_15("CHN2_JERRY_CAN", 0, "CHN2_EXPLODE");
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 36:
					func_15("CHN2_EXIT_HOUSE", 0, "CHN2_EXPLODE");
					unk_0xF37CDE164C892195(uLocal_169, "FarmhouseFire_Ignite", Local_170, "CHINESE2_SOUNDS", 0, 0, 0);
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 37:
					unk_0xCAC4020CCF361AC8("CHI_2_POUR_GAS");
					Local_383[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 38:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xD7E1DF759CD0FFF2("FARMHOUSE_FIRE", 0, -1);
							unk_0xD7E1DF759CD0FFF2("FARMHOUSE_FIRE_BG", 0, -1);
							break;
					}
					break;
				
				case 39:
					switch (Local_383[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_383[iParam0 /*10*/].f_7 = func_18(4);
							Local_383[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (func_73(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/], 2454,895f, 4950,895f, 44,1488f, 1) > 100f && func_4(Local_111[Local_383[iParam0 /*10*/].f_7 /*33*/], unk_0x4A8C381C258A124D(), 1) > 100f)
							{
								iVar16 = func_18(4);
								func_134(&(Local_111[iVar16 /*33*/].f_25));
								if (!unk_0x4FAFF4BCB7633475(Local_111[iVar16 /*33*/]))
								{
									unk_0x44FB298D6382876D(Local_111[iVar16 /*33*/], 1);
									unk_0xF09E30AF1B8FB379(&(Local_111[iVar16 /*33*/]));
								}
								Local_111[iVar16 /*33*/] = 0;
								iVar16 = func_18(5);
								func_134(&(Local_111[iVar16 /*33*/].f_25));
								if (!unk_0x4FAFF4BCB7633475(Local_111[iVar16 /*33*/]))
								{
									unk_0x44FB298D6382876D(Local_111[iVar16 /*33*/], 1);
									unk_0xF09E30AF1B8FB379(&(Local_111[iVar16 /*33*/]));
								}
								Local_111[iVar16 /*33*/] = 0;
								iVar16 = func_18(7);
								if (!unk_0x4FAFF4BCB7633475(Local_111[iVar16 /*33*/]))
								{
									unk_0x44FB298D6382876D(Local_111[iVar16 /*33*/], 1);
									unk_0xF09E30AF1B8FB379(&(Local_111[iVar16 /*33*/]));
								}
								func_134(&(Local_111[iVar16 /*33*/].f_25));
								Local_111[iVar16 /*33*/] = 0;
								if (unk_0xD9F5E1FEFD1329E4(iLocal_143, 0))
								{
									unk_0x68298CA6191CDFDB(&iLocal_143);
								}
								Local_383[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 40:
					if (func_107(24, joaat("a_m_m_hillbilly_01"), 2433,123f, 4960,47f, 45,8218f, 301f, joaat("weapon_smg"), 1, 1))
					{
						unk_0xC652B7E19CE29859(Local_111[24 /*33*/], 100);
						if (!unk_0x4FAFF4BCB7633475(Local_111[15 /*33*/]))
						{
							unk_0xC652B7E19CE29859(Local_111[15 /*33*/], 100);
						}
						if (!unk_0x4FAFF4BCB7633475(Local_111[16 /*33*/]))
						{
							unk_0xC652B7E19CE29859(Local_111[16 /*33*/], 100);
						}
						if (!unk_0x4FAFF4BCB7633475(Local_111[17 /*33*/]))
						{
							unk_0xC652B7E19CE29859(Local_111[17 /*33*/], 100);
						}
						unk_0x62A5310368A20EFA(Local_111[24 /*33*/], unk_0x4A8C381C258A124D(), 0, 16);
						unk_0x570AAA413775DFFB(Local_111[24 /*33*/], 1);
						unk_0xD25E9BDC14A0B649(Local_111[24 /*33*/], 200, 0, 0);
						Local_383[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			if (Local_383[iParam0 /*10*/].f_6 == -1)
			{
				Local_383[iParam0 /*10*/].f_3 = 1;
				Local_383[iParam0 /*10*/].f_6 = 0;
				Local_383[iParam0 /*10*/].f_1 = 0;
			}
		}
	}
}

void func_167()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < Local_107.f_0)
	{
		if (!func_168(Local_107[iVar0 /*5*/], 0f, 0f, 0f, 0))
		{
			unk_0xD7ABE01242C5B8E3(Local_107[iVar0 /*5*/], 4f);
			unk_0x2094BC4B6731BA68(Local_107[iVar0 /*5*/], 2f, 1, 0, 0, 0);
			iVar1 = 0;
			while (iVar1 < Local_111.f_0)
			{
				if (unk_0xFC8BFE4B41177C22(Local_111[iVar1 /*33*/]))
				{
					Var2 = { unk_0xD1A6A821F5AC81DB(Local_111[iVar1 /*33*/], 0) };
					if (system::vdist2(Var2, Local_107[iVar0 /*5*/]) < 2f && Var2.f_2 > 43,9f)
					{
						unk_0x734A9F4537A31459(&(Local_111[iVar1 /*33*/]));
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_168(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_169(bool bParam0)
{
	int iVar0;
	
	bLocal_87 = true;
	iLocal_91 = 0;
	iLocal_89 = -1;
	iLocal_106 = 0;
	iLocal_106 = 0;
	iLocal_100 = 0;
	if (bParam0 == 0)
	{
		iLocal_84 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_107.f_0)
	{
		unk_0x5926A824AF54BCC3(Local_107[iVar0 /*5*/], 1f);
		if (!unk_0xC450B06E5AAA0985(Local_107[iVar0 /*5*/].f_3))
		{
			if (!func_168(Local_107[iVar0 /*5*/], 0f, 0f, 0f, 0))
			{
				iLocal_91++;
				Local_107[iVar0 /*5*/].f_3 = func_5(Local_107[iVar0 /*5*/], 0);
				unk_0xA1DFF583C8070610(Local_107[iVar0 /*5*/].f_3, 1);
				unk_0x5D3946F818C6B331(Local_107[iVar0 /*5*/].f_3, 0,4f);
				unk_0x89FE619BFBB2024B(Local_107[iVar0 /*5*/].f_3, 0);
				if (!bParam0)
				{
					unk_0xF42EBD7CD0682A8B(Local_107[iVar0 /*5*/].f_3, 0);
				}
				unk_0x61183D6239A9D7B8(Local_107[iVar0 /*5*/].f_3, 5);
			}
		}
		else
		{
			Local_107[iVar0 /*5*/] = { unk_0x3CF9D442F2C902BD(Local_107[iVar0 /*5*/].f_3) };
			if (!bParam0)
			{
				unk_0xF42EBD7CD0682A8B(Local_107[iVar0 /*5*/].f_3, 0);
			}
			else
			{
				unk_0xF42EBD7CD0682A8B(Local_107[iVar0 /*5*/].f_3, 255);
			}
			iLocal_91++;
		}
		Local_107[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_99.f_0)
	{
		Local_99[iVar0 /*5*/].f_1 = { 0f, 0f, 0f };
		Local_99[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}

int func_170(var uParam0)
{
	var uVar0;
	
	if (!unk_0xB0E14182FAD64944(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA1521B7DF72BC9C8(uParam0);
	unk_0x5D3946F818C6B331(uVar0, func_6(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	return uVar0;
}

void func_171(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_64167 = 0;
	if (!Global_64391[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_76261)
	{
		if (Global_76262[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_76262[iVar1 /*9*/].f_1 = 1;
			Global_76262[iVar1 /*9*/].f_2 = 0f;
			if (Global_76262[iVar1 /*9*/].f_3 == 2)
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
		StringCopy(&Global_113025, unk_0x1AF90EB93E0012D6(), 24);
		Global_113019 = 1;
	}
	else
	{
		StringCopy(&Global_113025, "NULL", 24);
		Global_113019 = 0;
	}
}

var func_173()
{
	var uVar0;
	
	return uVar0;
}

int func_174()
{
	if (((((unk_0x6C29A57AC29D7033(2, 30) != 127 || unk_0x6C29A57AC29D7033(2, 31) != 127) || unk_0x6D05C5731A838CB3(2, 24)) || unk_0x6D05C5731A838CB3(2, 25)) || unk_0x6C29A57AC29D7033(2, 2) != 127) || unk_0x6C29A57AC29D7033(2, 1) != 127)
	{
		return 1;
	}
	return 0;
}

int func_175(int iParam0, int iParam1)
{
	if (Local_383[iParam0 /*10*/] == iParam1)
	{
		return Local_383[iParam0 /*10*/].f_6;
	}
	return -1;
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
	if (Local_386[0 /*8*/] != iParam0 && Local_386[iVar0 /*8*/] != iParam1)
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < Local_386.f_0)
		{
			if (iVar1 <= iVar0)
			{
				Local_386[iVar1 /*8*/] = (iParam0 + iVar2);
				Local_386[iVar1 /*8*/].f_1 = 1;
				Local_386[iVar1 /*8*/].f_2 = 0;
				Local_386[iVar1 /*8*/].f_3 = 0;
				iVar2++;
			}
			else
			{
				Local_386[iVar1 /*8*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_386.f_0)
	{
		switch (Local_386[iVar3 /*8*/])
		{
			case 2:
				if (!Local_386[iVar3 /*8*/].f_2)
				{
					if (Local_386[iVar3 /*8*/].f_4 == 0)
					{
						if (func_90("FRMCHSE_1", 0, 0))
						{
							Local_386[iVar3 /*8*/].f_4 = 1;
						}
					}
					else if (!func_90("FRMCHSE_1", 0, 0))
					{
						Local_386[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				Local_386[iVar3 /*8*/].f_2 = 0;
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 6:
				if (!Local_386[iVar3 /*8*/].f_2)
				{
					if (func_162(7))
					{
						if (unk_0xA646A9FF47E2E515(2493,155f, 4970,315f, 43,88038f, 3,25f, 1, 1) || unk_0x398315D0C90DE6F6(2493,155f, 4970,315f, 43,88038f, 3,25f, 1))
						{
							Local_386[iVar3 /*8*/].f_2 = 1;
						}
					}
					else
					{
						Local_386[iVar3 /*8*/].f_1 = 0;
					}
				}
				break;
			
			case 7:
				if (!Local_386[iVar3 /*8*/].f_2)
				{
					switch (Local_386[iVar3 /*8*/].f_4)
					{
						case 0:
							Local_386[iVar3 /*8*/].f_5 = func_18(8);
							Local_386[iVar3 /*8*/].f_6 = func_18(9);
							Local_386[iVar3 /*8*/].f_4++;
							break;
						
						case 1:
							if (Local_386[iVar3 /*8*/].f_5 != -1 && Local_386[iVar3 /*8*/].f_6 != -1)
							{
								if (unk_0xFC8BFE4B41177C22(Local_111[Local_386[iVar3 /*8*/].f_5 /*33*/]) && unk_0xFC8BFE4B41177C22(Local_111[Local_386[iVar3 /*8*/].f_6 /*33*/]))
								{
									if (unk_0x4FAFF4BCB7633475(Local_111[Local_386[iVar3 /*8*/].f_5 /*33*/]) || unk_0x4FAFF4BCB7633475(Local_111[Local_386[iVar3 /*8*/].f_6 /*33*/]))
									{
										Local_386[iVar3 /*8*/].f_2 = 1;
									}
								}
							}
							break;
						}
				}
				break;
			
			case 9:
				if (bLocal_51)
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
					Local_386[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 11:
				Local_386[iVar3 /*8*/].f_2 = 0;
				if (unk_0xAB74A6FE5E16479E(unk_0x4A8C381C258A124D()) == unk_0x70E57E9927B6BA58("V_8_BasementRm"))
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 12:
				Local_386[iVar3 /*8*/].f_2 = 0;
				if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) != 0 && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2421,331f, 4954,833f, 25,32829f, 2466,796f, 4996,822f, 66,07018f, 37,1875f, 0, 1, 0))
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 13:
				Local_386[iVar3 /*8*/].f_2 = 0;
				if (func_93(12))
				{
					if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2457,885f, 4981,169f, 50,00518f, 2441,58f, 4965,088f, 56,24006f, 34,3125f, 0, 1, 0))
					{
						Local_386[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 14:
				if (!Local_386[iVar3 /*8*/].f_2)
				{
					if (func_73(unk_0x4A8C381C258A124D(), 2451,517f, 4973,122f, 44,2646f, 1) < 50f)
					{
						Local_386[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 15:
				switch (Local_386[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_386[iVar3 /*8*/].f_5 = func_18(17);
						if (Local_386[iVar3 /*8*/].f_5 != -1)
						{
							Local_386[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (unk_0xFC8BFE4B41177C22(Local_111[Local_386[iVar3 /*8*/].f_5 /*33*/]))
						{
							if (unk_0x4FAFF4BCB7633475(Local_111[Local_386[iVar3 /*8*/].f_5 /*33*/]))
							{
								if (func_73(Local_111[Local_386[iVar3 /*8*/].f_5 /*33*/], 2427,851f, 4964,972f, 43,1704f, 1) < 3f)
								{
									Local_386[iVar3 /*8*/].f_2 = 1;
									Local_386[iVar3 /*8*/].f_4++;
								}
								else
								{
									Local_386[iVar3 /*8*/].f_1 = 0;
								}
							}
						}
						break;
				}
				break;
			
			case 16:
				if (!Local_386[iVar3 /*8*/].f_2)
				{
					switch (Local_386[iVar3 /*8*/].f_4)
					{
						case 0:
							if (!func_30(5))
							{
								Local_386[iVar3 /*8*/].f_4++;
							}
							break;
						
						case 1:
							bVar5 = false;
							bVar6 = false;
							iVar4 = 0;
							while (iVar4 < Local_111.f_0)
							{
								if (!unk_0x4FAFF4BCB7633475(Local_111[iVar4 /*33*/]))
								{
									bVar5 = true;
									if (Local_111[iVar4 /*33*/].f_1 == 1)
									{
										bVar6 = true;
										iVar4 = Local_111.f_0;
									}
								}
								iVar4++;
							}
							if (!bVar5)
							{
								Local_386[iVar3 /*8*/].f_2 = 1;
							}
							else
							{
								Local_386[iVar3 /*8*/].f_2 = 0;
							}
							if (bVar6)
							{
								func_97(10, 0);
							}
							else
							{
								func_97(10, 1);
							}
							break;
						}
				}
				break;
			
			case 23:
				if (!Local_386[iVar3 /*8*/].f_2)
				{
					if (func_93(9))
					{
						Local_386[iVar3 /*8*/].f_2 = 1;
						iVar8 = 0;
						iVar7 = 0;
						while (iVar7 < Local_111.f_0)
						{
							if (Local_111[iVar7 /*33*/].f_1 == 1)
							{
								if (!unk_0x4FAFF4BCB7633475(Local_111[iVar7 /*33*/]))
								{
									iVar8++;
									if (iVar8 > 1)
									{
										Local_386[iVar3 /*8*/].f_2 = 0;
										iVar7 = Local_111.f_0;
									}
								}
							}
							iVar7++;
						}
					}
				}
				break;
			
			case 24:
				switch (Local_386[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_73(unk_0x4A8C381C258A124D(), 2446,674f, 4977,788f, 57,4583f, 1) < 250f)
						{
							Local_386[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
						{
							iVar9 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
							if (unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(iVar9)) || unk_0x00C6FDED3EB75117(unk_0x4B423FAA24E8ABF0(iVar9)))
							{
								if (func_73(unk_0x4A8C381C258A124D(), 2446,674f, 4977,788f, 57,4583f, 0) > 700f)
								{
									Local_386[iVar3 /*8*/].f_2 = 1;
								}
							}
							else
							{
								bVar10 = true;
							}
						}
						else
						{
							bVar10 = true;
						}
						if (bVar10)
						{
							if (func_73(unk_0x4A8C381C258A124D(), 2446,674f, 4977,788f, 57,4583f, 1) > 250f)
							{
								Local_386[iVar3 /*8*/].f_2 = 1;
							}
						}
						break;
				}
				break;
			
			case 26:
				if (func_73(unk_0x4A8C381C258A124D(), 2441,065f, 4968,819f, 45,83075f, 1) < 2,75f)
				{
					if (!unk_0x4FAFF4BCB7633475(Local_111[15 /*33*/]))
					{
						if (func_73(Local_111[15 /*33*/], 2439,386f, 4962,049f, 45,9047f, 1) < 3f)
						{
							Local_386[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!unk_0x4FAFF4BCB7633475(Local_111[16 /*33*/]))
					{
						if (func_73(Local_111[16 /*33*/], 2439,386f, 4962,049f, 45,9047f, 1) < 3f)
						{
							Local_386[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!unk_0x4FAFF4BCB7633475(Local_111[17 /*33*/]))
					{
						if (func_73(Local_111[17 /*33*/], 2439,386f, 4962,049f, 45,9047f, 1) < 3f)
						{
							Local_386[iVar3 /*8*/].f_2 = 1;
						}
					}
					Local_386[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 27:
				switch (Local_386[iVar3 /*8*/].f_4)
				{
					case 0:
						if (!unk_0x4FAFF4BCB7633475(Local_111[4 /*33*/]) && unk_0x27E68848F0E5D7D9(Local_111[4 /*33*/]))
						{
							Local_386[iVar3 /*8*/].f_4++;
						}
						if (!unk_0x4FAFF4BCB7633475(Local_111[5 /*33*/]) && unk_0x27E68848F0E5D7D9(Local_111[5 /*33*/]))
						{
							Local_386[iVar3 /*8*/].f_4++;
						}
						if (!unk_0x4FAFF4BCB7633475(Local_111[7 /*33*/]) && unk_0x27E68848F0E5D7D9(Local_111[7 /*33*/]))
						{
							Local_386[iVar3 /*8*/].f_4++;
						}
						Local_386[iVar3 /*8*/].f_5 = unk_0x1DD05E817C89C737() + 8000;
						break;
					
					case 1:
						if (unk_0xD9F5E1FEFD1329E4(iLocal_143, 0))
						{
							if (func_96(unk_0xD1A6A821F5AC81DB(iLocal_143, 1), 5f, 150f))
							{
								Local_386[iVar3 /*8*/].f_6 = (Local_386[iVar3 /*8*/].f_6 + system::floor((system::timestep() * 1000f)));
							}
						}
						if (Local_386[iVar3 /*8*/].f_6 > 1500)
						{
							Local_386[iVar3 /*8*/].f_2 = 1;
						}
						if (unk_0x1DD05E817C89C737() > Local_386[iVar3 /*8*/].f_5)
						{
							Local_386[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 30:
				switch (Local_386[iVar3 /*8*/].f_4)
				{
					case 0:
						if (unk_0xB0E14182FAD64944(uLocal_174))
						{
							if (unk_0x313F30E8A7FB3625(uLocal_174))
							{
								Local_386[iVar3 /*8*/].f_4++;
							}
						}
						break;
					
					case 1:
						if (unk_0xB0E14182FAD64944(uLocal_174))
						{
							if (!unk_0x313F30E8A7FB3625(uLocal_174))
							{
								if (unk_0x8764A5B95AE1F967(-1, 2435,252f, 4966,748f, 41,3476f, 4f))
								{
									Local_386[iVar3 /*8*/].f_2 = 1;
								}
								Local_386[iVar3 /*8*/].f_4++;
							}
						}
						break;
				}
				break;
			
			case 8:
				if (iLocal_55 && !bLocal_51)
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 17:
				if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2442,819f, 4970,283f, 45,2481f, 2439,625f, 4966,862f, 48,14596f, 3,4375f, 0, 1, 0))
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 18:
				if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2434,671f, 4959,104f, 44,85109f, 2440,5f, 4965,189f, 48,1231f, 3,625f, 0, 1, 0))
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 19:
				if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2432,467f, 4959,473f, 44,94133f, 2430,797f, 4961,173f, 48,30901f, 1,5625f, 0, 1, 0))
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 21:
				if (bLocal_54)
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
					Local_386[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 32:
				Local_386[iVar3 /*8*/].f_2 = 0;
				if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2447,671f, 4951,438f, 43,25576f, 2454,664f, 4957,856f, 47,89117f, 6,8125f, 0, 1, 0))
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 33:
				switch (Local_386[iVar3 /*8*/].f_4)
				{
					case 0:
						if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"), 0))
						{
							Local_386[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (!unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"), 0))
						{
							Local_386[iVar3 /*8*/].f_2 = 1;
						}
						break;
				}
				break;
			
			case 29:
				Local_386[iVar3 /*8*/].f_2 = 0;
				switch (Local_386[iVar3 /*8*/].f_5)
				{
					case 0:
						if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"), 0))
						{
							Local_386[iVar3 /*8*/].f_5 = 10;
						}
						else
						{
							Local_386[iVar3 /*8*/].f_5 = 20;
						}
						break;
				}
				if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"), 0))
				{
					if (Local_386[iVar3 /*8*/].f_5 == 20)
					{
					}
					Local_386[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 34:
				if (!Local_386[iVar3 /*8*/].f_2 == 1)
				{
					if (func_8())
					{
						func_11(0, 157);
						Local_386[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 35:
				if (Local_107[0 /*5*/].f_4 == 1)
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 36:
				Local_386[iVar3 /*8*/].f_2 = 0;
				iVar11 = joaat("weapon_unarmed");
				if (unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar11, 1))
				{
					if (iVar11 == joaat("weapon_petrolcan"))
					{
						if (unk_0x6D05C5731A838CB3(0, 24))
						{
							Local_386[iVar3 /*8*/].f_2 = 1;
						}
					}
				}
				break;
			
			case 44:
				if (unk_0x9D27D35452DED6B5(-1, 2435,776f, 4963,067f, 39,34265f, 2428,118f, 4971,287f, 43,67327f, 11,875f))
				{
					if (!unk_0x9D27D35452DED6B5(24, 2435,776f, 4963,067f, 39,34265f, 2428,118f, 4971,287f, 43,67327f, 11,875f) && !unk_0x9D27D35452DED6B5(22, 2435,776f, 4963,067f, 39,34265f, 2428,118f, 4971,287f, 43,67327f, 11,875f))
					{
						Local_386[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 41:
				switch (Local_386[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_180())
						{
							iVar12 = func_179();
							if (iVar12 <= 17)
							{
								func_97(37, 1);
							}
							else
							{
								Local_386[iVar3 /*8*/].f_2 = 1;
							}
							Local_386[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 38:
				if (!Local_386[iVar3 /*8*/].f_2)
				{
					if (func_178(17))
					{
						Local_386[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 40:
				Local_386[iVar3 /*8*/].f_2 = 0;
				if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) != 0)
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 42:
				if (func_73(unk_0x4A8C381C258A124D(), 2439,52f, 4969,67f, 52,65f, 1) > 42,5f)
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 43:
				if (func_73(unk_0x4A8C381C258A124D(), 2439,52f, 4969,67f, 52,65f, 1) > 60f)
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 39:
				if (func_177())
				{
					if (!func_180())
					{
						Local_386[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 47:
				switch (Local_386[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_386[iVar3 /*8*/].f_5 = unk_0x1DD05E817C89C737() + 30000;
						Local_386[iVar3 /*8*/].f_4++;
						break;
					
					case 1:
						if (unk_0x1DD05E817C89C737() > Local_386[iVar3 /*8*/].f_5)
						{
							Local_386[iVar3 /*8*/].f_2 = 1;
							Local_386[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 48:
				Local_386[iVar3 /*8*/].f_2 = 0;
				if (!Local_386[iVar3 /*8*/].f_2)
				{
					if (func_73(unk_0x4A8C381C258A124D(), 2448,25f, 4974,92f, 55,11f, 1) > 300f)
					{
						Local_386[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 51:
				if (func_153(1, 49))
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 49:
				Local_386[iVar3 /*8*/].f_2 = 0;
				if (!Local_386[iVar3 /*8*/].f_2)
				{
					if (func_73(unk_0x4A8C381C258A124D(), 2448,25f, 4974,92f, 55,11f, 1) > 500f)
					{
						Local_386[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 50:
				Local_386[iVar3 /*8*/].f_2 = 0;
				if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
				{
					Local_386[iVar3 /*8*/].f_2 = 1;
				}
				break;
		}
		iVar3++;
	}
}

int func_177()
{
	if (iLocal_100 == 1)
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)
{
	if (unk_0xE8D2BD34CCB74431(Local_107[iParam0 /*5*/], 0,6f) > 0)
	{
		return 1;
	}
	return 0;
}

int func_179()
{
	return iLocal_98;
}

int func_180()
{
	int iVar0;
	
	iVar0 = (Local_107.f_0 - 1);
	while (iVar0 >= 0)
	{
		if (Local_107[iVar0 /*5*/].f_4)
		{
			if (unk_0xE8D2BD34CCB74431(Local_107[iVar0 /*5*/], 0,6f) > 0)
			{
				Local_97 = { Local_107[iVar0 /*5*/] };
				iLocal_98 = iVar0;
				return 1;
			}
		}
		else
		{
			return 0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_181()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x6D268E74310FA45D();
	if ((func_202() && iLocal_148 > 0) && unk_0x1DD05E817C89C737() > iLocal_157)
	{
		while (!unk_0x15CCE8886267624F())
		{
			unk_0x8F72AF14CE5AACE4(1000);
			func_28(28, 1);
		}
		iLocal_575 = 0;
		while (!func_201())
		{
			func_28(32322, 1);
		}
		unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2474,97f, 4946,047f, 44,0297f, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 230,6937f);
		unk_0xF9358C41CC69C616(unk_0x4A8C381C258A124D(), 0, 0);
		unk_0x96A0632EBDD87FA3(unk_0x4A8C381C258A124D(), 0, -1, 0);
		unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
		unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
		func_192(0, 1, 1, 0, 0, 0, 0);
		unk_0x3AA8CFEBC938A945(0);
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
		unk_0x64BB72494B9DF6DC(0f);
		unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		unk_0x406CBCEA35499884();
		unk_0x5FFA5801E4084FC5("SLOW_MO_METH_HOUSE_RAYFIRE");
		uLocal_171 = unk_0xC8C12645F5A0E13B(2457,15f, 4968,79f, 48,677f, 45f, "DES_FarmHs");
		func_31(12, 1);
		iLocal_156 = 0;
		iLocal_161 = iLocal_161;
		iLocal_161 = 99;
		iLocal_148 = 99;
		iLocal_137 = 3;
		fLocal_136 = 10000f;
		unk_0xE226F16D30AF5945(2457,15f, 4968,79f, 48,677f, 100f, joaat("v_ret_fhglassfrm"), 1);
		unk_0xE226F16D30AF5945(2457,15f, 4968,79f, 48,677f, 100f, joaat("v_ret_fhglassfrmsml"), 1);
		unk_0xE226F16D30AF5945(2457,15f, 4968,79f, 48,677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
		unk_0x22A76EDE2316E9A1();
		unk_0x3B327805C3CAF8DC();
		bLocal_163 = true;
	}
	unk_0x43AE50D2A33F6E2A();
	switch (iLocal_148)
	{
		case 0:
			func_201();
			bLocal_163 = false;
			iVar0 = 49;
			while (iVar0 <= 55)
			{
				Local_107[iVar0 /*5*/] = { Local_107[iVar0 /*5*/] + Vector(0,6f, 0f, 0f) };
				iVar0++;
			}
			if (unk_0xBC2EE32DE886BD08("CHI_2_POUR_GAS"))
			{
				unk_0xB43467C43086A6A1("CHI_2_POUR_GAS");
			}
			if (unk_0xBC2EE32DE886BD08("CHI_2_SHOOT_GAS"))
			{
				unk_0xB43467C43086A6A1("CHI_2_SHOOT_GAS");
			}
			unk_0xCAC4020CCF361AC8("CHI_2_GAS_TRAIL_FIRE");
			iLocal_157 = unk_0x1DD05E817C89C737() + 1000;
			unk_0x2094BC4B6731BA68(2570,53f, 4982,057f, 50,6819f, 100f, 1, 0, 0, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
			unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
			func_87(0);
			iLocal_390 = 0;
			func_87(1);
			unk_0x406CBCEA35499884();
			func_191(2467,775f, 4954,415f, 42,87803f, 2477,089f, 4945,079f, 46,16654f, 4,0625f, 2486,854f, 4939,086f, 43,2578f, 230f, 1, 1, 1, 0, 0);
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2455,941f, 4952,801f, 44,112f, 1, 0, 0, 1);
			}
			unk_0xE6AC149D1121535D(1f);
			unk_0x268BE77F77533D03("misschinese2_barrelRoll");
			unk_0x13F0C01028B5EE7C("move_m@gangster@var_e");
			unk_0x13F0C01028B5EE7C("move_m@gangster@var_f");
			unk_0x13F0C01028B5EE7C("move_m@gangster@generic");
			unk_0x268BE77F77533D03("misschinese2_bank5");
			unk_0x268BE77F77533D03("misschinese2_bank1");
			unk_0x268BE77F77533D03("reaction@male_stand@big_variations@b");
			unk_0x268BE77F77533D03("reaction@male_stand@big_intro@left");
			unk_0x268BE77F77533D03("reaction@male_stand@big_intro@right");
			unk_0x268BE77F77533D03("reaction@male_stand@big_intro@backward");
			unk_0x55098D9E9AD58806(joaat("a_m_m_hillbilly_02"));
			unk_0x55098D9E9AD58806(joaat("a_m_y_methhead_01"));
			unk_0x55098D9E9AD58806(joaat("prop_cs_fertilizer"));
			unk_0x55098D9E9AD58806(joaat("burrito"));
			unk_0x55098D9E9AD58806(joaat("prop_cs_beer_bot_01"));
			unk_0xF9358C41CC69C616(unk_0x4A8C381C258A124D(), 0, 0);
			iVar1 = 0;
			while (iVar1 < Local_111.f_0)
			{
				if (unk_0xFC8BFE4B41177C22(Local_111[iVar1 /*33*/]))
				{
					unk_0x734A9F4537A31459(&(Local_111[iVar1 /*33*/]));
				}
				if (unk_0xFC8BFE4B41177C22(Local_111[iVar1 /*33*/].f_20))
				{
					unk_0x51C8BEA2005931AB(&(Local_111[iVar1 /*33*/].f_20));
				}
				iVar1++;
			}
			iLocal_148++;
			break;
		
		case 1:
			if (unk_0x15CCE8886267624F() && !unk_0xDDED2C93E8FD5B69())
			{
				unk_0x10B228D2FDB7AF16(1000);
			}
			iLocal_148++;
			break;
	}
	if (iLocal_133)
	{
		iLocal_133 = 0;
		iVar2 = 0;
		while (iVar2 < Local_135.f_0)
		{
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Local_134.f_0)
		{
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < Local_135.f_0)
	{
		if (iLocal_138[iVar2])
		{
			iLocal_138[iVar2] = 0;
			Local_135[iVar2 /*18*/] = { unk_0xA452B06E281A9014(unk_0xFCB6553111578B2F()) };
			Local_135[iVar2 /*18*/].f_3 = { unk_0x9DDBEF363FADFA4C(unk_0xFCB6553111578B2F(), 2) };
			Local_135[iVar2 /*18*/].f_14 = unk_0x4A1D1AB55229AAF0(unk_0xFCB6553111578B2F());
		}
		if (iLocal_139[iVar2])
		{
			iLocal_139[iVar2] = 0;
			Local_135[iVar2 /*18*/].f_6 = { unk_0xA452B06E281A9014(unk_0xFCB6553111578B2F()) };
			Local_135[iVar2 /*18*/].f_9 = { unk_0x9DDBEF363FADFA4C(unk_0xFCB6553111578B2F(), 2) };
			Local_135[iVar2 /*18*/].f_15 = unk_0x4A1D1AB55229AAF0(unk_0xFCB6553111578B2F());
		}
		iVar2++;
	}
	if (iLocal_131)
	{
		iLocal_131 = 0;
		bLocal_132 = false;
		iLocal_172 = 0;
		unk_0x2094BC4B6731BA68(2431,097f, 4967,043f, 41,3476f, 20f, 1, 0, 0, 0);
		func_190();
	}
	if (!bLocal_132)
	{
		if (unk_0xEBCB9138B2CABF20())
		{
			unk_0x216049890A2D1EC6(5, 5, 5, 5);
			unk_0x89EAF23AE72CD8A8();
			iLocal_137 = -1;
			unk_0x3AA8CFEBC938A945(0);
			func_192(1, 1, 1, 0, 0, 0, 0);
			unk_0x80813AC549A1E8AE("misschinese2_crystalmaze");
			bLocal_132 = true;
			Local_134[0 /*6*/] = 0;
			Local_134[1 /*6*/] = 0;
			Local_134[2 /*6*/] = 0;
			Local_134[3 /*6*/] = 0;
			Local_134[0 /*6*/].f_4 = 0;
			Local_134[0 /*6*/].f_5 = 0;
			Local_134[1 /*6*/].f_4 = 0;
			Local_134[1 /*6*/].f_5 = 0;
			Local_134[2 /*6*/].f_4 = 0;
			Local_134[2 /*6*/].f_5 = 0;
			Local_134[3 /*6*/].f_4 = 0;
			Local_134[3 /*6*/].f_5 = 0;
			func_32(12, 0);
			unk_0x64B3EF30EAA9FBA3();
			unk_0xB9784D6C7219851B(4);
			switch (iLocal_164)
			{
				case 3:
					system::settimera(0);
					break;
				
				case 2:
					Local_134[0 /*6*/] = 1;
					Local_134[1 /*6*/] = 1;
					system::settimera(10900);
					iLocal_137 = 2;
					fLocal_136 = 10000f;
					break;
				
				case 1:
					Local_134[0 /*6*/] = 1;
					system::settimera(6400);
					iLocal_137 = 1;
					fLocal_136 = 10000f;
					break;
			}
			iLocal_141 = 0;
		}
	}
	if (bLocal_132)
	{
		unk_0x4B1F30FB3C9A4B7F(system::to_float(system::timera()));
	}
	if (bLocal_132)
	{
		fLocal_136 = (fLocal_136 + system::timestep());
		if (iLocal_137 == -1 || ((iLocal_137 != -1 && iLocal_137 < 4) && fLocal_136 > (Local_135[iLocal_137 /*18*/].f_13 / 1000f)))
		{
			iLocal_137++;
			if (iLocal_137 == 3)
			{
				if (unk_0xE100DD4F82A51BDE("misschinese2_crystalmaze"))
				{
					uLocal_153 = unk_0xBB209150C6081BBE(964613260, 1);
					uLocal_154 = unk_0x2EC137C692A52458(2452,914f, 4962,096f, 45,585f, 0f, 0f, 45f, 2);
					unk_0xF9B66DAE101B699C(uLocal_153, uLocal_154, "trevor_barn_walk_cam", "misschinese2_crystalmaze");
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uLocal_154, "misschinese2_crystalmaze", "trevor_barn_walk", 1000f, -8f, 0, 0, 1148846080, 0);
					}
					unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
					func_190();
					unk_0xD82473EFEF7FC622(1);
					fLocal_136 = 0f;
				}
			}
			else if (iLocal_137 < 4)
			{
				unk_0x3AA8CFEBC938A945(0);
				uLocal_153 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", Local_135[iLocal_137 /*18*/], Local_135[iLocal_137 /*18*/].f_3, Local_135[iLocal_137 /*18*/].f_14, 1, 2);
				unk_0xA3774254665BAA82(uLocal_153, Local_135[iLocal_137 /*18*/].f_6, Local_135[iLocal_137 /*18*/].f_9, Local_135[iLocal_137 /*18*/].f_15, system::floor(Local_135[iLocal_137 /*18*/].f_12), Local_135[iLocal_137 /*18*/].f_16, 1, 2);
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				if (iLocal_137 < 2)
				{
					func_189(Local_135[iLocal_137 /*18*/].f_17, 1, 1);
				}
				else
				{
					func_189(Local_135[iLocal_137 /*18*/].f_17, 1, 0);
				}
				fLocal_136 = 0f;
			}
			else if (!bLocal_130)
			{
				unk_0x3AA8CFEBC938A945(0);
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				if (func_188() && !bLocal_163)
				{
					unk_0xDCAFFD08A08087EB("CamPushInNeutral", 0, 0);
					unk_0xBF3D28CA44F3BE2D(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				unk_0xD82473EFEF7FC622(0);
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(0f, 1065353216);
				func_187(0, 0, 1, 0);
				unk_0xB43467C43086A6A1("CHI_2_GAS_TRAIL_FIRE");
				unk_0xBF86159B8525B1AE(uLocal_171, 9);
				unk_0xE6AC149D1121535D(1f);
				unk_0xE9DE8F39ED85311E();
				if (unk_0x15CCE8886267624F())
				{
					while (unk_0xEB4069FA281FFD9B(uLocal_171) != 10)
					{
						func_28(29, 1);
					}
					unk_0x10B228D2FDB7AF16(1000);
				}
				unk_0x3B327805C3CAF8DC();
				func_182(9);
			}
		}
		iVar3 = 0;
		while (iVar3 < Local_134.f_0)
		{
			if (!Local_134[iVar3 /*6*/])
			{
				if (iLocal_137 == Local_134[iVar3 /*6*/].f_1 && fLocal_136 > (Local_134[iVar3 /*6*/].f_2 / 1000f))
				{
					switch (iVar3)
					{
						case 0:
							switch (Local_134[iVar3 /*6*/].f_4)
							{
								case 0:
									iLocal_141 = 0;
									if (unk_0x1DD05E817C89C737() > Local_134[iVar3 /*6*/].f_5)
									{
										func_128(Local_140[iLocal_141 /*3*/], 0);
										Local_134[iVar3 /*6*/].f_5 = unk_0x1DD05E817C89C737() + 200;
										Local_134[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 1:
									if (unk_0x1DD05E817C89C737() > Local_134[iVar3 /*6*/].f_5)
									{
										func_128(Local_140[iLocal_141 /*3*/] + Local_140[iLocal_141 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										iLocal_141++;
										if (iLocal_141 >= 12)
										{
											Local_134[iVar3 /*6*/].f_4 = 10;
											Local_134[iVar3 /*6*/] = 1;
										}
										else
										{
											Local_134[iVar3 /*6*/].f_5 = unk_0x1DD05E817C89C737() + 200;
											Local_134[iVar3 /*6*/].f_4 = 2;
										}
									}
									break;
								
								case 2:
									if (unk_0x1DD05E817C89C737() > Local_134[iVar3 /*6*/].f_5)
									{
										func_128(Local_140[iLocal_141 /*3*/], 0);
										Local_134[iVar3 /*6*/].f_5 = unk_0x1DD05E817C89C737() + 200;
										if (iLocal_141 == 2)
										{
											Local_134[iVar3 /*6*/].f_4 = 3;
										}
										else
										{
											Local_134[iVar3 /*6*/].f_4 = 1;
										}
									}
									break;
								
								case 3:
									if (unk_0x1DD05E817C89C737() > Local_134[iVar3 /*6*/].f_5)
									{
										func_128(Local_140[iLocal_141 /*3*/] + Local_140[iLocal_141 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_128(Local_140[iLocal_141 /*3*/] + Local_140[iLocal_141 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_134[iVar3 /*6*/].f_5 = unk_0x1DD05E817C89C737() + 200;
										Local_134[iVar3 /*6*/].f_4 = 4;
										iLocal_141 = 3;
									}
									break;
								
								case 4:
									if (unk_0x1DD05E817C89C737() > Local_134[iVar3 /*6*/].f_5)
									{
										func_128(Local_140[iLocal_141 /*3*/], 0);
										func_128(Local_140[iLocal_141 + 1 /*3*/], 0);
										Local_134[iVar3 /*6*/].f_5 = unk_0x1DD05E817C89C737() + 200;
										Local_134[iVar3 /*6*/].f_4 = 5;
									}
									break;
								
								case 5:
									if (unk_0x1DD05E817C89C737() > Local_134[iVar3 /*6*/].f_5)
									{
										func_128(Local_140[iLocal_141 /*3*/] + Local_140[iLocal_141 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_128(Local_140[iLocal_141 + 1 /*3*/] + Local_140[iLocal_141 + 3 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_134[iVar3 /*6*/].f_5 = unk_0x1DD05E817C89C737() + 200;
										Local_134[iVar3 /*6*/].f_4 = 6;
										iLocal_141 = 5;
									}
									break;
								
								case 6:
									if (unk_0x1DD05E817C89C737() > Local_134[iVar3 /*6*/].f_5)
									{
										func_128(Local_140[iLocal_141 /*3*/], 0);
										func_128(Local_140[iLocal_141 + 1 /*3*/], 0);
										Local_134[iVar3 /*6*/].f_5 = unk_0x1DD05E817C89C737() + 200;
										Local_134[iVar3 /*6*/].f_4 = 2;
										iLocal_141 = 7;
									}
									break;
							}
							break;
						
						case 1:
							unk_0xD2FD15A3D9DEE4CC(2432,534f, 4968,383f, 42,2389f, 4, 0,5f, 1, 0, 1065353216, 0);
							Local_134[iVar3 /*6*/] = 1;
							break;
						
						case 2:
							iLocal_172 = 1;
							Local_134[iVar3 /*6*/] = 1;
							break;
						
						case 3:
							if (unk_0x78411E34CF90EA8C(uLocal_153))
							{
								unk_0x2A09425009DAD0F5(uLocal_153, "LARGE_EXPLOSION_SHAKE", fLocal_155);
								unk_0x687E31348D8E19AD(uLocal_153, 0,1f);
								Local_134[iVar3 /*6*/] = 1;
							}
							break;
						
						case 4:
							switch (Local_134[iVar3 /*6*/].f_4)
							{
								case 0:
									unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2473,208f, 4947,625f, 44,0664f, 1, 0, 0, 1);
									unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 223,493f);
									unk_0x64BB72494B9DF6DC(0f);
									unk_0xD815D4BD1AE9E85A(-7f, 1065353216);
									if (func_188())
									{
										unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Aiming"), 1, 0, 0);
										unk_0x8EAC8FBDF8A3830E(unk_0x259BE71D8A81D4FA(), 1f, 3000, 0, 1, 0, 0);
									}
									else
									{
										unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Walk"), 1, 0, 0);
										unk_0x8EAC8FBDF8A3830E(unk_0x259BE71D8A81D4FA(), 1f, 500, 0, 1, 0, 0);
									}
									Local_134[iVar3 /*6*/].f_4++;
									break;
								
								case 1:
									break;
							}
							break;
						
						case 5:
							switch (Local_134[iVar3 /*6*/].f_4)
							{
								case 0:
									fLocal_173 = 1f;
									Local_134[iVar3 /*6*/].f_4++;
									Local_134[iVar3 /*6*/].f_5 = unk_0x1DD05E817C89C737() + 1300;
									unk_0xF010888FF9A380E6("SLOW_MO_METH_HOUSE_RAYFIRE");
									break;
								
								case 1:
									fLocal_173 = (fLocal_173 - (system::timestep() * 1f));
									if (fLocal_173 < 0,2f)
									{
										fLocal_173 = 0,2f;
									}
									unk_0xE6AC149D1121535D(fLocal_173);
									if (unk_0x1DD05E817C89C737() > Local_134[iVar3 /*6*/].f_5)
									{
										Local_134[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 2:
									fLocal_173 = (fLocal_173 + (system::timestep() * 1f));
									if (fLocal_173 > 1f)
									{
										fLocal_173 = 1f;
										Local_134[iVar3 /*6*/].f_4++;
										Local_134[iVar3 /*6*/] = 1;
									}
									unk_0x5FFA5801E4084FC5("SLOW_MO_METH_HOUSE_RAYFIRE");
									unk_0xE6AC149D1121535D(fLocal_173);
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
	if (iParam0 == 11)
	{
		iLocal_147++;
	}
	else
	{
		iLocal_147 = iParam0;
	}
}

void func_183()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_388.f_0)
	{
		Local_388[iVar0 /*7*/] = 0;
		Local_388[iVar0 /*7*/].f_1 = 0;
		Local_388[iVar0 /*7*/].f_3 = 0;
		Local_388[iVar0 /*7*/].f_2 = 0;
		Local_388[iVar0 /*7*/].f_4 = 0;
		Local_388[iVar0 /*7*/].f_5 = 0;
		Local_388[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
}

void func_184()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_383.f_0)
	{
		if (Local_383[iVar0 /*10*/].f_4)
		{
			Local_383[iVar0 /*10*/].f_1 = 1;
			Local_383[iVar0 /*10*/].f_6 = -1;
			func_166(iVar0, Local_383[iVar0 /*10*/], 0, 0, 0, 1, 0, 1, 0, 1, 0);
		}
		Local_383[iVar0 /*10*/] = 0;
		Local_383[iVar0 /*10*/].f_1 = 0;
		Local_383[iVar0 /*10*/].f_2 = 0;
		Local_383[iVar0 /*10*/].f_3 = 0;
		Local_383[iVar0 /*10*/].f_6 = 0;
		Local_383[iVar0 /*10*/].f_4 = 0;
		Local_383[iVar0 /*10*/].f_5 = 0;
		Local_383[iVar0 /*10*/].f_7 = 0;
		Local_383[iVar0 /*10*/].f_8 = 0;
		Local_383[iVar0 /*10*/].f_9 = 0f;
		iVar0++;
	}
}

void func_185()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_386.f_0)
	{
		Local_386[iVar0 /*8*/] = 0;
		Local_386[iVar0 /*8*/].f_1 = 0;
		Local_386[iVar0 /*8*/].f_2 = 0;
		Local_386[iVar0 /*8*/].f_3 = 0;
		Local_386[iVar0 /*8*/].f_4 = 0;
		Local_386[iVar0 /*8*/].f_5 = 0;
		iVar0++;
	}
}

void func_186()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_387.f_0)
	{
		Local_387[iVar0 /*4*/] = 0;
		Local_387[iVar0 /*4*/].f_1 = 0;
		Local_387[iVar0 /*4*/].f_2 = 0;
		Local_387[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

int func_187(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4A0B7E53EBC937D5() != iParam0 && iParam2)
		{
			unk_0x7882946B06ED216B(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_188()
{
	if (unk_0xBCF87EE3DC296C2A(unk_0xBF03D0685ADC793B()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_189(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iLocal_101 = iParam2;
	if (iParam0 > -1)
	{
		iLocal_100 = 1;
		iLocal_102 = unk_0x1DD05E817C89C737();
		iLocal_103 = iParam0 * 2;
		iLocal_105 = iLocal_103;
		if (bParam1)
		{
			iLocal_106 = 0;
		}
		else
		{
			iLocal_106 = iLocal_103;
		}
		iVar0 = 0;
		while (iVar0 < Local_107.f_0)
		{
			Local_107[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_99.f_0)
		{
			unk_0xCA60A45D232EEDDB(Local_99[iVar0 /*5*/]);
			if (Local_99[iVar0 /*5*/].f_4 != 0)
			{
				unk_0x726D5358D13D53BD(Local_99[iVar0 /*5*/].f_1, 0,4f, 1f);
			}
			Local_99[iVar0 /*5*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_99.f_0)
	{
		unk_0xCA60A45D232EEDDB(Local_99[iVar0 /*5*/]);
		Local_99[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	func_169(0);
	iVar0 = 0;
	while (iVar0 < Local_107.f_0)
	{
		if (unk_0xC450B06E5AAA0985(Local_107[iVar0 /*5*/].f_3))
		{
			unk_0xFE54B8568B2ABD12(&(Local_107[iVar0 /*5*/].f_3));
		}
		Local_107[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iLocal_91 = -1;
}

void func_191(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	func_76(Param0, Param1, fParam2, Param3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_192(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_200(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_45())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_187(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_200(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_187(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_198(unk_0x259BE71D8A81D4FA())) && !func_194(unk_0x259BE71D8A81D4FA(), 0)) && !func_193()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_198(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_193()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_194(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_197(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_195(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			bVar0 = unk_0x1864096A95E36EBA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_195(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_196();
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

int func_196()
{
	return Global_1574926;
}

int func_197(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
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

int func_198(int iParam0)
{
	if (func_194(iParam0, 0))
	{
		return 1;
	}
	if (func_199())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_199()
{
	return BitTest(Global_2621446, 3);
}

void func_200(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 13);
	}
}

int func_201()
{
	switch (iLocal_575)
	{
		case 0:
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent"));
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent001"));
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent002"));
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent003"));
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent004"));
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent005"));
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent006"));
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent007"));
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent008"));
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent009"));
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent010"));
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent011"));
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent012"));
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent013"));
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent014"));
			unk_0xEC9DAA34BBB4658C(joaat("cs2_03_fmhse_vfx_parent015"));
			iLocal_575++;
			break;
		
		case 1:
			if (((((((((((((((unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent")) && unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent001"))) && unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent002"))) && unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent003"))) && unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent004"))) && unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent005"))) && unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent006"))) && unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent007"))) && unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent008"))) && unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent009"))) && unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent010"))) && unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent011"))) && unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent012"))) && unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent013"))) && unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent014"))) && unk_0x6252BC0DD8A320DB(joaat("cs2_03_fmhse_vfx_parent015")))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_202()
{
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (unk_0x875A214D5EBCA509(0, 18) || unk_0x875A214D5EBCA509(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_203()
{
	unk_0x6D268E74310FA45D();
	func_176(28, 45);
	func_155(0, 7, 0, 0, 1, 0, 1, 0);
	func_155(1, 8, 2, 29, 1, 0, 1, 0);
	func_155(2, 9, 2, 35, 5, 34, 1, 0);
	func_155(3, 10, 2, 42, 1, 0, 1, 0);
	func_163(0, 21, 2, 29, 1, 0, 1, 0, 1, 0);
	func_163(1, 22, 2, 36, 5, 34, 1, 0, 1, 0);
	func_163(2, 26, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(3, 23, 2, 37, 1, 0, 1, 0, 1, 0);
	func_205(4, 25, 3, 23, 1, 0, 1, 0, 1, 0);
	func_166(0, 30, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(1, 31, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(2, 32, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_166(3, 33, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 34, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_166(5, 35, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_166(6, 36, 0, 2, 37, 1, 0, 1, 0, 1, 0);
	func_166(7, 37, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_166(8, 38, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(9, 56, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(10, 11, 0, 2, 44, 1, 0, 1, 0, 1, 0);
	func_166(11, 50, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(12, 51, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_204(0, 2, 33, 5, 34);
	func_204(4, 2, 43, 1, 0);
	func_204(2, 2, 39, 1, 0);
	if (iLocal_164 == 0)
	{
		if (func_93(37) && !func_93(44))
		{
			iLocal_164 = 3;
		}
		if (func_93(41) && !func_93(44))
		{
			iLocal_162 = 1;
			iLocal_164 = 1;
		}
		if (func_175(10, 11) == 2)
		{
			iLocal_164 = 2;
			iLocal_162 = 1;
		}
	}
	func_166(13, 10, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	if ((((func_93(37) && func_93(38)) || iLocal_162) && func_175(13, 10) == 10) && !func_88("CHI2_light"))
	{
		func_204(1, 2, 40, 1, 0);
		if (unk_0xC450B06E5AAA0985(uLocal_176))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_176);
		}
		unk_0xA62957B100C8DE6D(10f, 5f, 4);
		func_12(1);
		func_182(11);
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_158(iParam1, iParam2, iParam3, iParam4, 1, 0, 1, 0))
	{
		switch (iParam0)
		{
			case 0:
				func_136("CHFAIL1");
				break;
			
			case 1:
				func_136("FRMSOON");
				break;
			
			case 2:
				func_136("FRMTRAI");
				break;
			
			case 3:
				if (unk_0xFC8BFE4B41177C22(Local_111[11 /*33*/]))
				{
					if (unk_0x4FAFF4BCB7633475(Local_111[11 /*33*/]))
					{
						func_136("FRMCHI");
					}
				}
				if (unk_0xFC8BFE4B41177C22(Local_111[10 /*33*/]))
				{
					if (unk_0x4FAFF4BCB7633475(Local_111[10 /*33*/]))
					{
						func_136("FRMCHI2");
					}
				}
				break;
			
			case 4:
				func_136("CHFAIL2");
				break;
			
			case 5:
				func_136("FRMGASF");
				break;
			}
	}
}

void func_205(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (!Local_388[iParam0 /*7*/].f_1)
	{
		if (func_206(iParam2, iParam3))
		{
			func_163(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0);
		}
	}
}

int func_206(int iParam0, int iParam1)
{
	if (Local_388[iParam0 /*7*/] == iParam1)
	{
		if (Local_388[iParam0 /*7*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_388[iParam0 /*7*/] != 0)
	{
	}
	return 0;
}

void func_207()
{
	func_176(5, 31);
	func_155(0, 2, 0, 0, 1, 0, 1, 0);
	func_155(1, 3, 2, 8, 1, 0, 1, 0);
	func_155(2, 5, 2, 9, 1, 0, 1, 0);
	func_155(3, 11, 0, 0, 1, 0, 1, 0);
	func_155(4, 4, 2, 12, 1, 0, 1, 0);
	func_166(0, 17, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(1, 13, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(2, 14, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(3, 16, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 15, 0, 2, 14, 6, 9, 1, 0, 1, 0);
	func_166(7, 19, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_166(8, 20, 0, 2, 12, 4, 9, 1, 0, 1, 0);
	func_166(9, 21, 0, 2, 12, 4, 13, 1, 0, 1, 0);
	func_166(10, 22, 0, 2, 12, 1, 0, 1, 0, 1, 0);
	func_166(11, 23, 0, 2, 11, 1, 0, 1, 0, 1, 0);
	func_166(12, 24, 0, 2, 14, 1, 0, 1, 0, 1, 0);
	func_166(5, 26, 0, 2, 11, 6, 16, 6, 9, 1, 0);
	func_166(6, 27, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_166(14, 40, 0, 2, 26, 1, 0, 1, 0, 1, 0);
	func_166(13, 39, 0, 2, 25, 1, 0, 1, 0, 1, 0);
	func_166(15, 28, 0, 2, 11, 6, 16, 1, 0, 1, 0);
	func_166(16, 29, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(17, 43, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(18, 44, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(19, 45, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(0, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(2, 2, 2, 21, 5, 16, 1, 0, 1, 0);
	func_163(3, 3, 2, 12, 4, 17, 1, 0, 1, 0);
	func_163(4, 5, 2, 18, 1, 0, 1, 0, 1, 0);
	func_163(5, 6, 2, 19, 1, 0, 1, 0, 1, 0);
	func_163(6, 7, 2, 27, 5, 9, 1, 0, 1, 0);
	func_163(7, 10, 2, 9, 5, 21, 5, 12, 1, 0);
	func_163(8, 11, 2, 9, 4, 21, 5, 12, 1, 0);
	func_163(9, 14, 2, 9, 4, 12, 1, 0, 1, 0);
	func_163(10, 12, 2, 9, 4, 12, 1, 0, 1, 0);
	func_163(11, 13, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(12, 16, 2, 9, 4, 23, 5, 12, 1, 0);
	func_163(13, 17, 2, 14, 5, 12, 4, 9, 1, 0);
	func_163(14, 18, 3, 20, 1, 0, 1, 0, 1, 0);
	func_163(15, 19, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(16, 20, 2, 9, 4, 10, 4, 14, 5, 12);
	func_204(4, 2, 24, 1, 0);
	func_204(5, 2, 30, 1, 0);
	if (func_93(11) && func_93(29))
	{
		func_182(7);
	}
}

void func_208()
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	unk_0x5519F1C3752E3A90(2004,447f, 3076,807f, 46,6069f, 10f);
	unk_0xD0860FF81E162052(1);
	if (((func_202() && iLocal_148 > 0) && iLocal_148 < 7) && unk_0x1DD05E817C89C737() > iLocal_157)
	{
		iLocal_148 = 10;
		iLocal_156 = 0;
		bLocal_163 = true;
	}
	if (iLocal_148 < 10)
	{
		if (unk_0x15CCE8886267624F() && !unk_0xDDED2C93E8FD5B69())
		{
			unk_0x10B228D2FDB7AF16(1000);
		}
	}
	if (iLocal_373)
	{
		unk_0x4B1F30FB3C9A4B7F(system::to_float(system::timera()));
	}
	unk_0x43AE50D2A33F6E2A();
	switch (iLocal_148)
	{
		case 0:
			if (unk_0xEBCB9138B2CABF20())
			{
				unk_0x839AD252B0708F35("CHI_2_MCS_5", 8);
				iLocal_372 = 1;
				bLocal_163 = false;
				unk_0x216049890A2D1EC6(5, 5, 5, 5);
				unk_0x89EAF23AE72CD8A8();
				unk_0x70F19143E4E40117(0);
				iLocal_376 = 0;
				iLocal_373 = 1;
				Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				fVar1 = func_102(2458,223f, 4986,042f, 49,05241f, Var0, 1);
				if (fVar1 > 180f)
				{
					fVar1 = (fVar1 - 360f);
				}
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					iVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				}
				if (((unk_0xD9F5E1FEFD1329E4(iVar2, 0) && unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(iVar2))) && unk_0x3F18810075C77D41(iVar2)) || ((unk_0xD9F5E1FEFD1329E4(iVar2, 0) && unk_0x00C6FDED3EB75117(unk_0x4B423FAA24E8ABF0(iVar2))) && unk_0x3F18810075C77D41(iVar2)))
				{
					if (fVar1 < func_224(-2,5f) && fVar1 > func_224(0,5f))
					{
						iLocal_148 = 6;
						system::settimera(30000);
						unk_0x4B1F30FB3C9A4B7F(30000f);
						iLocal_156 = 36000;
					}
					else
					{
						iLocal_148 = 7;
						system::settimera(36000);
						unk_0x4B1F30FB3C9A4B7F(36000f);
						iLocal_156 = 42000;
					}
				}
				else
				{
					if (unk_0xFC8BFE4B41177C22(iVar2))
					{
						if (unk_0xD9F5E1FEFD1329E4(iVar2, 0))
						{
							if (!(unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(iVar2)) && unk_0x3F18810075C77D41(iVar2)) && !(unk_0x00C6FDED3EB75117(unk_0x4B423FAA24E8ABF0(iVar2)) && unk_0x3F18810075C77D41(iVar2)))
							{
								unk_0x1DE99C193C7EC64B(iVar2, 1084227584);
							}
						}
					}
					if (fVar1 < func_224(-1,33f) && fVar1 > func_224(-1,92f))
					{
						iLocal_148 = 1;
						system::settimera(0);
						unk_0x4B1F30FB3C9A4B7F(0f);
						iLocal_156 = 6000;
					}
					else if (fVar1 < func_224(0,96f) && fVar1 > func_224(-1,33f))
					{
						iLocal_148 = 2;
						system::settimera(6000);
						unk_0x4B1F30FB3C9A4B7F(6000f);
						iLocal_156 = 12000;
					}
					else if (fVar1 < func_224(2,29f) && fVar1 > func_224(0,96f))
					{
						iLocal_148 = 3;
						system::settimera(12000);
						unk_0x4B1F30FB3C9A4B7F(12000f);
						iLocal_156 = 18000;
					}
					else if (fVar1 < func_224(-2,81f) || fVar1 > func_224(2,29f))
					{
						iLocal_148 = 4;
						system::settimera(18000);
						unk_0x4B1F30FB3C9A4B7F(18000f);
						iLocal_156 = 24000;
					}
					else
					{
						system::settimera(24000);
						unk_0x4B1F30FB3C9A4B7F(24000f);
						iLocal_156 = 30000;
						iLocal_148 = 5;
					}
				}
				iLocal_374 = 1;
				unk_0x3AA8CFEBC938A945(0);
				func_219(&Local_182, 1, 0);
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					iLocal_82 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
					Local_110 = { unk_0xE5741C6B6539231F(iLocal_82) };
					unk_0x5D7CD709B34C90F0(iLocal_82, 1);
					unk_0x4285E11B28063EE0(iLocal_82, 0, 0);
				}
				unk_0x64B3EF30EAA9FBA3();
				if (iLocal_148 == 1)
				{
					iLocal_376 = 1;
					func_75(2559,012f, 4958,518f, 36,02959f, 2585,447f, 4993,435f, 64,62565f, 48f, 2594,651f, 4948,114f, 38,0899f, 283,7287f, 22f, 22f, 15f, 1, 1, 1, 0, 0);
					if (unk_0xFC8BFE4B41177C22(iVar2))
					{
						if (unk_0xD9F5E1FEFD1329E4(iVar2, 0))
						{
							unk_0xC229299217554C78(iVar2, 0, 1, 0);
						}
					}
					unk_0x2094BC4B6731BA68(2445,139f, 4978,642f, 52,1489f, 150f, 1, 1, 0, 0);
					unk_0x2094BC4B6731BA68(2578,523f, 4982,284f, 51,4416f, 13f, 1, 0, 0, 0);
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2578,419f, 4981,901f, 50,587f, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 49,2184f);
					unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
					unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					unk_0x7992D566A90CD49C(unk_0x4A8C381C258A124D(), 1f);
					unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Walk"), 0, 0, 0);
					unk_0xB5396F1FB088FE38(&uVar3);
					unk_0x63C8DCBEC1CF8225(0, 2570,543f, 4982,002f, 50,6795f, 1f, 20000, 1193033728, 1056964608);
					unk_0x2280392018BC0DD3(0, 88,7065f, 0);
					unk_0x93C0674FC00824D0(uVar3);
					unk_0x4BD42B0527065BB6(unk_0x4A8C381C258A124D(), uVar3);
					unk_0xD0557B139A542F12(&uVar3);
					uLocal_153 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 1);
					unk_0xC606B0B9BA3D6036(uLocal_153, 2538,6f, 4976,9f, 50,6f, -1,8f, 0f, 93,2f, 5000, 3, 2);
					unk_0xC606B0B9BA3D6036(uLocal_153, 2536,153f, 4976,7f, 50,5267f, -1,8f, 0f, 93,2f, 6000, 3, 2);
					unk_0x58BDA5D9262F5D30(uLocal_153, 34,9f);
					unk_0x859FFC7F5DEC29DE(uLocal_153, 0);
				}
				else
				{
					switch (iLocal_148)
					{
						case 2:
							uLocal_153 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xC606B0B9BA3D6036(uLocal_153, 2426,8f, 5088,3f, 51,2f, 0f, 0f, -169f, 5000, 3, 2);
							unk_0xC606B0B9BA3D6036(uLocal_153, 2427,8f, 5087,2f, 51,2f, 0f, 0f, -169,7f, 6000, 3, 2);
							unk_0x58BDA5D9262F5D30(uLocal_153, 28,5f);
							unk_0x859FFC7F5DEC29DE(uLocal_153, 0);
							break;
						
						case 3:
							uLocal_153 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xC606B0B9BA3D6036(uLocal_153, 2326,3f, 4985,6f, 51,5f, 0f, 0f, -89,1f, 5000, 3, 2);
							unk_0xC606B0B9BA3D6036(uLocal_153, 2328f, 4985,4f, 52,1f, 0f, 0f, -89,1f, 6000, 3, 2);
							unk_0x58BDA5D9262F5D30(uLocal_153, 28,5f);
							unk_0x859FFC7F5DEC29DE(uLocal_153, 0);
							break;
						
						case 4:
							uLocal_153 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xC606B0B9BA3D6036(uLocal_153, 2403,6f, 4889,7f, 47,5f, 3,4f, 0f, -19,5f, 5000, 3, 2);
							unk_0xC606B0B9BA3D6036(uLocal_153, Vector(47,5f, 4889,7f, 2403,6f) + Vector(0,07f, 2,15f, 0,8f), 3,4f, 0f, -19,5f, 6000, 3, 2);
							unk_0x58BDA5D9262F5D30(uLocal_153, 29,8f);
							unk_0x859FFC7F5DEC29DE(uLocal_153, 0);
							break;
						
						case 5:
							uLocal_153 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xC606B0B9BA3D6036(uLocal_153, 2493,4f, 4934,8f, 45,7f, 5,2f, 0f, 48f, 5000, 3, 2);
							unk_0xC606B0B9BA3D6036(uLocal_153, Vector(45,7f, 4934,8f, 2493,4f) + Vector(0f, 1f, -1f), 5,2f, 0f, 48f, 6000, 3, 2);
							unk_0x58BDA5D9262F5D30(uLocal_153, 28,5f);
							unk_0x859FFC7F5DEC29DE(uLocal_153, 0);
							break;
						
						case 6:
							uLocal_153 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xC606B0B9BA3D6036(uLocal_153, 2570,6f, 4982f, 151,6f, -47,9f, 0f, 88,1f, 5000, 3, 2);
							unk_0xC606B0B9BA3D6036(uLocal_153, 2487,8f, 4896,9f, 151,9f, -47,2f, 0f, 28,8f, 15000, 3, 2);
							unk_0x58BDA5D9262F5D30(uLocal_153, 28,5f);
							unk_0x859FFC7F5DEC29DE(uLocal_153, 0);
							break;
						
						case 7:
							uLocal_153 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xC606B0B9BA3D6036(uLocal_153, 2487,8f, 4896,9f, 151,9f, -47,2f, 0f, 28,8f, 5000, 3, 2);
							unk_0xC606B0B9BA3D6036(uLocal_153, 2570,6f, 4982f, 151,6f, -47,9f, 0f, 88,1f, 15000, 3, 2);
							unk_0x58BDA5D9262F5D30(uLocal_153, 28,5f);
							unk_0x859FFC7F5DEC29DE(uLocal_153, 0);
							break;
						}
				}
				if (iLocal_148 < 6)
				{
					unk_0x2A09425009DAD0F5(uLocal_153, "Hand_shake", 0,2f);
				}
				else
				{
					unk_0x2A09425009DAD0F5(uLocal_153, "Hand_shake", 0,7f);
				}
				unk_0x4CBC5D1BC117616B(uLocal_153, 1);
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				unk_0xB9784D6C7219851B(4);
				unk_0xCAC4020CCF361AC8("CHI_2_FARMHOUSE_OVERVIEW");
				func_212(1);
				unk_0x425BBE19F25A57AB(0f);
				unk_0xDAE61414743C8D1D(0);
				unk_0x406CBCEA35499884();
				unk_0x428C32CC68809A35(1);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 32);
				func_192(1, 1, 1, 0, 0, 0, 0);
				unk_0xF9358C41CC69C616(unk_0x4A8C381C258A124D(), 0, 0);
				iLocal_157 = unk_0x1DD05E817C89C737() + 1000;
				iVar4 = 0;
				while (iVar4 < Local_111.f_0)
				{
					if (!unk_0x4FAFF4BCB7633475(Local_111[iVar4 /*33*/]))
					{
						unk_0xFD61BB3B8F1CDB6D(Local_111[iVar4 /*33*/], 1);
					}
					iVar4++;
				}
				iLocal_158 = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_y_methhead_01"), 2460,449f, 4976,938f, 45,5765f, 243,4917f, 1, 1);
				unk_0xB41DEC3AAC1AA107(iLocal_158, joaat("weapon_microsmg"), -1, 1, 1);
				if (!unk_0x4FAFF4BCB7633475(iLocal_158))
				{
					func_99();
					unk_0x96F4A599D1C6F95A(0, 1);
					unk_0xA966E518B752B92A(0, 2463,016f, 4974,97f, 45,5765f, 1f, -1, 0,5f, 1, 1193033728);
					unk_0xA966E518B752B92A(0, 2452,833f, 4964,785f, 45,5765f, 1f, -1, 0,5f, 1, 1193033728);
					unk_0x5524CAF18378DF39(0, 500);
					unk_0xA966E518B752B92A(0, 2460,449f, 4976,938f, 45,5765f, 1f, -1, 0,5f, 0, 1193033728);
					func_98(&iLocal_158, 1);
				}
				iLocal_145 = unk_0x5779387E956077A6(joaat("dubsta"), 2479,961f, 4990f, 45,8f, -5,37f, 1, 1, 0);
				func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
				iLocal_148 = 3;
			}
			break;
		
		case 3:
			if (system::timera() > iLocal_156)
			{
				unk_0x3AA8CFEBC938A945(0);
				uLocal_153 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 1);
				unk_0xC606B0B9BA3D6036(uLocal_153, 2445,944f, 4962,986f, 51,4782f, 7,9159f, 0f, 34,5909f, 5000, 3, 2);
				unk_0xC606B0B9BA3D6036(uLocal_153, 2445,684f, 4963,368f, 51,6659f, 3,6033f, 0f, 34,5909f, 3500, 3, 2);
				unk_0x58BDA5D9262F5D30(uLocal_153, 34f);
				unk_0x859FFC7F5DEC29DE(uLocal_153, 0);
				unk_0x2A09425009DAD0F5(uLocal_153, "Hand_shake", 0,5f);
				iLocal_156 += 3500;
				iLocal_148++;
			}
			break;
		
		case 4:
			if (system::timera() > iLocal_156)
			{
				unk_0x3AA8CFEBC938A945(0);
				uLocal_153 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 1);
				unk_0xC606B0B9BA3D6036(uLocal_153, 2465,07f, 4946,688f, 45,3372f, 7,1461f, 0f, 30,9281f, 5000, 3, 2);
				unk_0xC606B0B9BA3D6036(uLocal_153, 2466,011f, 4947,377f, 45,3509f, 7,1461f, 0f, 32,3761f, 3000, 3, 2);
				unk_0x58BDA5D9262F5D30(uLocal_153, 34f);
				unk_0x859FFC7F5DEC29DE(uLocal_153, 0);
				unk_0x2A09425009DAD0F5(uLocal_153, "Hand_shake", 0,5f);
				iLocal_156 += 3000;
				iLocal_148++;
			}
			break;
		
		case 5:
			iLocal_375 = 1;
			if (system::timera() > iLocal_156)
			{
				iLocal_375 = 1;
				unk_0x3AA8CFEBC938A945(0);
				uLocal_153 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 1);
				unk_0xC606B0B9BA3D6036(uLocal_153, 2509,691f, 4971,024f, 44,1325f, 7,2578f, 0f, 88,5226f, 5000, 3, 2);
				unk_0xC606B0B9BA3D6036(uLocal_153, 2509,415f, 4971,163f, 44,1674f, 6,6554f, 0f, 89,4229f, 2500, 3, 2);
				unk_0x58BDA5D9262F5D30(uLocal_153, 37,34f);
				unk_0x859FFC7F5DEC29DE(uLocal_153, 0);
				unk_0x2A09425009DAD0F5(uLocal_153, "Hand_shake", 0,5f);
				iLocal_156 += 2500;
				iLocal_148++;
			}
			break;
		
		case 6:
			if (system::timera() > iLocal_156)
			{
				if (func_211())
				{
					unk_0x406CBCEA35499884();
					unk_0x428C32CC68809A35(1);
					unk_0xF37AC65898011B1C(6,818f);
					if (unk_0xD9F5E1FEFD1329E4(iLocal_145, 0))
					{
						unk_0xF293D66D4452C854(iLocal_145, "EXL_2_abandoned_car", 1, joaat("dubsta"), 0);
					}
					unk_0xED65412F8B26ED99(0);
					iLocal_372 = 0;
					iLocal_148 = 11;
				}
			}
			break;
		
		case 10:
			if (unk_0xFC8BFE4B41177C22(iLocal_82) && unk_0xD9F5E1FEFD1329E4(iLocal_82, 0))
			{
				unk_0x53152C1272227778(iLocal_82);
			}
			if (!unk_0x15CCE8886267624F() && !unk_0x78ABC1D11B34F324())
			{
				unk_0x8F72AF14CE5AACE4(500);
			}
			if ((unk_0x15CCE8886267624F() && !unk_0xFD216000DC314A92()) || (unk_0x0CB7695268A7F50F() && unk_0x2B60F53D06BC6971(1)))
			{
				iLocal_148++;
			}
			break;
		
		case 11:
			if (unk_0xFC8BFE4B41177C22(iLocal_82) && unk_0xD9F5E1FEFD1329E4(iLocal_82, 0))
			{
				unk_0x53152C1272227778(iLocal_82);
			}
			if ((unk_0x15CCE8886267624F() && !unk_0xFD216000DC314A92()) || (unk_0x0CB7695268A7F50F() && unk_0x2B60F53D06BC6971(1)))
			{
				unk_0x3AA8CFEBC938A945(0);
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				if (func_188() && !bLocal_163)
				{
					unk_0xDCAFFD08A08087EB("CamPushInNeutral", 0, 0);
					unk_0xBF3D28CA44F3BE2D(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				unk_0x3B327805C3CAF8DC();
				if (func_73(unk_0x4A8C381C258A124D(), 2570,543f, 4982,002f, 50,6795f, 1) < 15f && func_73(unk_0x4A8C381C258A124D(), 2570,543f, 4982,002f, 50,6795f, 1) > 1f)
				{
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2570,543f, 4982,002f, 50,6795f, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 98,21f);
				}
				else if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), func_102(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 2458,223f, 4986,042f, 49,05241f, 1));
				}
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(-6,3f, 1065353216);
				unk_0xF37AC65898011B1C(6,818f);
				unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
				unk_0x22A76EDE2316E9A1();
				unk_0xB43467C43086A6A1("CHI_2_FARMHOUSE_OVERVIEW");
				unk_0x406CBCEA35499884();
				unk_0x428C32CC68809A35(1);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				func_212(0);
				if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_sniperrifle"), 0))
				{
					if (unk_0x1149D67DB429787A(unk_0x4A8C381C258A124D(), joaat("weapon_sniperrifle")) < 15)
					{
						unk_0x0574074EDCCCBD5E(unk_0x4A8C381C258A124D(), joaat("weapon_sniperrifle"), 50);
					}
				}
				func_192(0, 1, 1, 0, 0, 0, 0);
				if (unk_0xFC8BFE4B41177C22(iLocal_158))
				{
					unk_0x734A9F4537A31459(&iLocal_158);
				}
				iLocal_378 = func_18(4);
				if (iLocal_378 != -1)
				{
					if (!unk_0x4FAFF4BCB7633475(Local_111[iLocal_378 /*33*/]))
					{
						unk_0x734A9F4537A31459(&(Local_111[iLocal_378 /*33*/]));
					}
					if (unk_0xFC8BFE4B41177C22(Local_111[iLocal_378 /*33*/].f_20))
					{
						unk_0x51C8BEA2005931AB(&(Local_111[iLocal_378 /*33*/].f_20));
					}
					Local_117[iLocal_378 /*24*/].f_3 = 1;
					Local_111[iLocal_378 /*33*/].f_5 = 0;
					Local_111[iLocal_378 /*33*/].f_14 = 0;
					Local_111[iLocal_378 /*33*/].f_3 = 2;
				}
				iLocal_379 = func_18(5);
				if (iLocal_379 != -1)
				{
					if (!unk_0x4FAFF4BCB7633475(Local_111[iLocal_379 /*33*/]))
					{
						unk_0x734A9F4537A31459(&(Local_111[iLocal_379 /*33*/]));
					}
					if (unk_0xFC8BFE4B41177C22(Local_111[iLocal_379 /*33*/].f_20))
					{
						unk_0x51C8BEA2005931AB(&(Local_111[iLocal_379 /*33*/].f_20));
					}
					Local_117[iLocal_379 /*24*/].f_3 = 1;
					Local_111[iLocal_379 /*33*/].f_5 = 0;
					Local_111[iLocal_379 /*33*/].f_14 = 0;
					Local_111[iLocal_379 /*33*/].f_3 = 2;
				}
				func_31(20, 0);
				if (!unk_0x4FAFF4BCB7633475(iLocal_159))
				{
					unk_0x734A9F4537A31459(&iLocal_159);
				}
				if (!unk_0x4FAFF4BCB7633475(iLocal_160))
				{
					unk_0x734A9F4537A31459(&iLocal_160);
				}
				if (func_74(iLocal_145))
				{
					unk_0x8C1F7D7A31B2A38E(&iLocal_145);
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_181))
				{
					unk_0x51C8BEA2005931AB(&iLocal_181);
				}
				func_209();
				iLocal_109 = 0;
				func_27();
				unk_0x55098D9E9AD58806(joaat("prop_phone_ing"));
				unk_0x55098D9E9AD58806(joaat("dubsta"));
				iVar5 = 0;
				while (iVar5 < Local_111.f_0)
				{
					if (!unk_0x4FAFF4BCB7633475(Local_111[iVar5 /*33*/]))
					{
						unk_0xFD61BB3B8F1CDB6D(Local_111[iVar5 /*33*/], 0);
					}
					iVar5++;
				}
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(-6,3f, 1065353216);
				if (unk_0xFC8BFE4B41177C22(iLocal_82))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_82, 0))
					{
						unk_0x5D7CD709B34C90F0(iLocal_82, 0);
						if (unk_0x00C6FDED3EB75117(unk_0x4B423FAA24E8ABF0(iLocal_82)))
						{
							unk_0x1AB7223AC0702871(iLocal_82, Local_110);
							unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iLocal_82, -1);
						}
						unk_0xC229299217554C78(iLocal_82, 1, 1, 0);
						if (unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(iLocal_82)))
						{
							unk_0xCF39804E8C88080E(iLocal_82, 0f, 0f, unk_0xCFC0C995455A6204(iLocal_82), 2, 1);
							unk_0xA9F7300B498DDED7(iLocal_82);
							unk_0x1AB7223AC0702871(iLocal_82, 1f, 1f, 1f);
							unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iLocal_82, -1);
						}
						if (iLocal_376 == 0)
						{
							unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iLocal_82, -1);
						}
						unk_0x4285E11B28063EE0(iLocal_82, 1, 0);
					}
				}
				unk_0x4285E11B28063EE0(unk_0x4A8C381C258A124D(), 1, 0);
				unk_0x15263A2A8A135DF3(unk_0x259BE71D8A81D4FA(), 1, 0);
				unk_0xE9DE8F39ED85311E();
				if (unk_0x15CCE8886267624F())
				{
					unk_0x10B228D2FDB7AF16(1000);
				}
				unk_0x70F19143E4E40117(1);
				func_182(11);
			}
			break;
	}
}

void func_209()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iLocal_143))
	{
		unk_0x8C1F7D7A31B2A38E(&iLocal_143);
	}
	iVar0 = 0;
	while (iVar0 < Local_111.f_0)
	{
		if (unk_0xFC8BFE4B41177C22(Local_111[iVar0 /*33*/]))
		{
			unk_0x734A9F4537A31459(&(Local_111[iVar0 /*33*/]));
		}
		if (unk_0xFC8BFE4B41177C22(Local_111[iVar0 /*33*/].f_20))
		{
			unk_0x51C8BEA2005931AB(&(Local_111[iVar0 /*33*/].f_20));
		}
		Local_111[iVar0 /*33*/].f_3 = 0;
		Local_111[iVar0 /*33*/].f_4 = 0;
		Local_111[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_111[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_111[iVar0 /*33*/].f_2 = 25;
		Local_111[iVar0 /*33*/].f_5 = 0;
		Local_111[iVar0 /*33*/].f_12 = 0f;
		Local_111[iVar0 /*33*/].f_13 = 0f;
		Local_111[iVar0 /*33*/].f_14 = 0;
		Local_111[iVar0 /*33*/].f_15 = 0;
		Local_111[iVar0 /*33*/].f_17 = 0;
		Local_111[iVar0 /*33*/].f_16 = 0;
		Local_111[iVar0 /*33*/].f_21 = 0;
		Local_111[iVar0 /*33*/].f_22 = 0;
		Local_117[iVar0 /*24*/].f_3 = 1;
		iVar0++;
	}
	if (unk_0xB0E14182FAD64944(uLocal_166))
	{
		unk_0xDDFB0941A19702BE(uLocal_166);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_167)
	{
		if (unk_0xB0E14182FAD64944(iLocal_167[iVar0]))
		{
			unk_0xDDFB0941A19702BE(iLocal_167[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_168)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_168[iVar0]))
		{
			unk_0x51C8BEA2005931AB(&(iLocal_168[iVar0]));
		}
		iVar0++;
	}
	func_210(&Local_117, &uLocal_201, cLocal_129, 12f, 2482,197f, 4975,367f, 44,7288f, 121f, 1);
}

void func_210(var uParam0, var uParam1, char* sParam2, float fParam3, struct<3> Param4, float fParam5, int iParam6)
{
	int iVar0;
	
	iLocal_55 = iLocal_55;
	uLocal_68 = fParam3;
	Local_69 = { Param4 };
	fLocal_70 = fParam5;
	Local_75 = { *uParam1 };
	cLocal_76 = sParam2;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*24*/])->f_1 = 0;
		(uParam0[iVar0 /*24*/])->f_2 = 0;
		(uParam0[iVar0 /*24*/])->f_3 = iParam6;
		(uParam0[iVar0 /*24*/])->f_4 = 0;
		(uParam0[iVar0 /*24*/])->f_5 = 0;
		(uParam0[iVar0 /*24*/])->f_7 = 0;
		(uParam0[iVar0 /*24*/])->f_8 = 0;
		(uParam0[iVar0 /*24*/])->f_10 = 0;
		(uParam0[iVar0 /*24*/])->f_11 = 0;
		(uParam0[iVar0 /*24*/])->f_12 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_15 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_18 = 0f;
		iVar0++;
	}
	bLocal_51 = false;
	bLocal_52 = false;
	iLocal_53 = 0;
	bLocal_54 = false;
	iLocal_55 = 0;
	bLocal_73 = true;
	iLocal_72 = 0;
	iLocal_56 = 0;
	iLocal_58 = 0;
	iLocal_59 = -1;
	iLocal_60 = -1;
	iLocal_61 = 0;
	iLocal_62 = 0;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	unk_0x7A4EC4F532D19DFA(joaat("DEFAULT"), 31);
	iLocal_50 = 0;
}

bool func_211()
{
	bool bVar0;
	
	bVar0 = unk_0x0DDDD9D153BCF51F();
	if (!Global_79388)
	{
		if (!bVar0)
		{
			Global_79388 = 1;
		}
	}
	return bVar0;
}

void func_212(bool bParam0)
{
	if (bParam0)
	{
		func_218();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_217(0))
		{
			func_213(0);
		}
	}
	else if (Global_20930.f_1 == 1)
	{
		if (!Global_20930.f_1 == 0)
		{
			Global_20930.f_1 = 3;
		}
	}
}

void func_213(int iParam0)
{
	if (func_216())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_215())
		{
			func_214(1, 1);
		}
		else
		{
			func_214(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
	}
	if (unk_0xE87F28FD4128D063())
	{
		unk_0x0F15249D24BC5ADA(0);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 30);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 30);
	}
	if (!func_45())
	{
		Global_20930.f_1 = 3;
	}
}

void func_214(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_217(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				unk_0x78C4EBB0251847E2(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			unk_0x6B7EA0158D00C600(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			unk_0x6B7EA0158D00C600(Global_20867);
		}
		else
		{
			unk_0x6B7EA0158D00C600(Global_20858);
		}
	}
}

bool func_215()
{
	return BitTest(Global_1956920, 5);
}

bool func_216()
{
	return BitTest(Global_1956920, 19);
}

int func_217(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_218()
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

void func_219(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (BitTest(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_223(uParam0);
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (unk_0xC450B06E5AAA0985(uParam0->f_1[bVar0]))
		{
			unk_0xFE54B8568B2ABD12(&(uParam0->f_1[bVar0]));
		}
		func_222(bVar0, uParam0);
		func_221(bVar0, uParam0);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 31)
	{
		if (bVar0 != 8)
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), bVar0);
			unk_0x8744D2E3FC95740E(&(uParam0->f_14), bVar0);
		}
		bVar0++;
	}
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xFE54B8568B2ABD12(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[bVar0]))
		{
			unk_0xC1BC1B8A5AA67C6B(uParam0->f_17[bVar0], 1);
			unk_0xD9757FAB956617BA(uParam0->f_17[bVar0], 1);
			if (bParam2)
			{
				unk_0x0428AFDCAA63B06E(uParam0->f_17[bVar0], 32, 1);
				unk_0x0428AFDCAA63B06E(uParam0->f_17[bVar0], 305, 0);
			}
			unk_0x0428AFDCAA63B06E(uParam0->f_17[bVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0xD11A63E12F198FDB(uParam0->f_17[bVar0], func_220()) && uParam0->f_17[bVar0] != unk_0x4A8C381C258A124D())
				{
					unk_0x5C4B3034CCDA5270(uParam0->f_17[bVar0]);
				}
			}
			if (!BitTest(uParam0->f_13, 29))
			{
				unk_0x96A0632EBDD87FA3(uParam0->f_17[bVar0], 0, -1, 0);
			}
			uParam0->f_17[bVar0] = 0;
		}
		bVar0++;
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0xC1BC1B8A5AA67C6B(unk_0x4A8C381C258A124D(), 1);
		unk_0xD9757FAB956617BA(unk_0x4A8C381C258A124D(), 1);
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (bParam2)
		{
			unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_220()
{
	return unk_0xD59511AF30BE1934(unk_0xB6B621402486C3E4());
}

void func_221(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 19);
			break;
	}
}

void func_222(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 16);
			break;
	}
}

void func_223(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(uParam0->f_5))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
	}
}

float func_224(float fParam0)
{
	return (fParam0 * 57,29578f);
}

void func_225()
{
	int iVar0;
	
	func_176(1, 4);
	func_166(0, 2, 0, 2, 3, 1, 0, 1, 0, 1, 0);
	func_166(1, 3, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(3, 42, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 47, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(5, 4, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(6, 6, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(7, 7, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(8, 8, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(9, 9, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_155(0, 1, 2, 2, 1, 0, 1, 0);
	func_204(3, 0, 0, 1, 0);
	if ((func_73(unk_0x4A8C381C258A124D(), 2458,223f, 4986,042f, 49,05241f, 0) < 107,9f || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2374,441f, 4930,564f, 34,73784f, 2478,099f, 5077,488f, 60,63246f, 185f, 0, 0, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2396,726f, 4887,434f, 33,85329f, 2510,54f, 5003,356f, 58,01184f, 158,25f, 0, 0, 0))
	{
		if (unk_0xC450B06E5AAA0985(Local_182.f_5))
		{
			unk_0xBC64B805EE071A37(Local_182.f_6, 0);
		}
		func_182(11);
	}
	else
	{
		switch (iLocal_148)
		{
			case 0:
				func_32(2, 0);
				func_32(3, 0);
				func_32(1, 0);
				func_32(5, 0);
				func_270(5, -20);
				unk_0x425BBE19F25A57AB(0f);
				unk_0xDAE61414743C8D1D(0);
				iLocal_148++;
				break;
			
			case 1:
				if (func_230(&Local_182, 2608,151f, 4949,754f, 39,4f, 9f, 9f, 2f, 1, "FRMCHSE_1", 1, 1, -1))
				{
					unk_0xA62957B100C8DE6D(6f, 6f, 3);
					iLocal_148++;
					func_219(&Local_182, 1, 0);
					func_31(3, 1);
					if (unk_0xBC2EE32DE886BD08("CHI_2_DRIVE_TO_FARMHOUSE"))
					{
						unk_0xB43467C43086A6A1("CHI_2_DRIVE_TO_FARMHOUSE");
					}
					if (unk_0xBC2EE32DE886BD08("CHI_2_DRIVE_ROCK_RADIO"))
					{
						unk_0xB43467C43086A6A1("CHI_2_DRIVE_ROCK_RADIO");
					}
				}
				break;
			
			case 2:
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
					if (func_227(iVar0, 10f, 2, 1056964608, 0, 1, 0))
					{
						if (func_226(5) > 2)
						{
							iLocal_148++;
						}
					}
				}
				else
				{
					iLocal_148++;
				}
				break;
			
			case 3:
				if (func_230(&Local_182, 2573,63f, 4983,677f, 50,6978f, 12f, 12f, 2f, 0, "FRMCHSE_5", 1, 1, -1))
				{
					if (unk_0xBC2EE32DE886BD08("CHI_2_DRIVE_ROCK_RADIO"))
					{
						unk_0xB43467C43086A6A1("CHI_2_DRIVE_ROCK_RADIO");
					}
					unk_0xA62957B100C8DE6D(5f, 10f, 4);
					func_182(11);
				}
				if (unk_0xC450B06E5AAA0985(Local_182.f_5))
				{
					unk_0xBC64B805EE071A37(Local_182.f_6, 0);
				}
				break;
			}
	}
}

int func_226(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_151.f_0)
	{
		if (Local_151[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_151[iVar0 /*6*/] == iParam0)
			{
				return Local_151[iVar0 /*6*/].f_2;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_227(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_229(bParam5, bParam6);
	func_228(iParam0);
	if ((unk_0x1DD05E817C89C737() - Global_30) > 500)
	{
		unk_0xE5EE5C9DDF05D925(iParam0, fParam1, iParam2, iParam4);
	}
	Global_30 = unk_0x1DD05E817C89C737();
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_228(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0xA03728CC57F6DD36(iParam0))
		{
			if (unk_0x772683F12F46CE82(iParam0))
			{
				unk_0x5B29AF88D03CEB7A(iParam0, 0);
			}
		}
	}
}

void func_229(bool bParam0, bool bParam1)
{
	unk_0x66EFB3D6110055C4(0, 71, 1);
	unk_0x66EFB3D6110055C4(0, 72, 1);
	unk_0x66EFB3D6110055C4(0, 76, 1);
	unk_0x66EFB3D6110055C4(0, 73, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 60, 1);
	if (bParam0)
	{
		unk_0x66EFB3D6110055C4(0, 75, 1);
	}
	unk_0x66EFB3D6110055C4(0, 80, 1);
	if (!bParam1)
	{
		unk_0x66EFB3D6110055C4(0, 69, 1);
		unk_0x66EFB3D6110055C4(0, 70, 1);
		unk_0x66EFB3D6110055C4(0, 68, 1);
	}
	unk_0x66EFB3D6110055C4(0, 74, 1);
	unk_0x66EFB3D6110055C4(0, 86, 1);
	unk_0x66EFB3D6110055C4(0, 81, 1);
	unk_0x66EFB3D6110055C4(0, 82, 1);
	unk_0x66EFB3D6110055C4(0, 138, 1);
	unk_0x66EFB3D6110055C4(0, 136, 1);
	unk_0x66EFB3D6110055C4(0, 114, 1);
	unk_0x66EFB3D6110055C4(0, 107, 1);
	unk_0x66EFB3D6110055C4(0, 110, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 87, 1);
	unk_0x66EFB3D6110055C4(0, 88, 1);
	unk_0x66EFB3D6110055C4(0, 113, 1);
	unk_0x66EFB3D6110055C4(0, 115, 1);
	unk_0x66EFB3D6110055C4(0, 116, 1);
	unk_0x66EFB3D6110055C4(0, 117, 1);
	unk_0x66EFB3D6110055C4(0, 118, 1);
	unk_0x66EFB3D6110055C4(0, 119, 1);
	unk_0x66EFB3D6110055C4(0, 352, 1);
	unk_0x66EFB3D6110055C4(0, 131, 1);
	unk_0x66EFB3D6110055C4(0, 132, 1);
	unk_0x66EFB3D6110055C4(0, 123, 1);
	unk_0x66EFB3D6110055C4(0, 126, 1);
	unk_0x66EFB3D6110055C4(0, 129, 1);
	unk_0x66EFB3D6110055C4(0, 130, 1);
	unk_0x66EFB3D6110055C4(0, 133, 1);
	unk_0x66EFB3D6110055C4(0, 134, 1);
	unk_0x1C74A3A76F738D39();
}

bool func_230(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3, char* sParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_231(uParam0, Param1, Param2, func_269(), func_269(), iParam3, 1, 0, 0, 0, 0, sParam4, func_173(), func_173(), func_173(), func_173(), func_173(), 0, bParam5, func_173(), 0, 0, bParam6, iParam7, 0, 0, 0, 1, 1065353216);
}

int func_231(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam7;
	uParam0->f_17[1] = iParam8;
	uParam0->f_17[2] = iParam9;
	uParam0->f_16 = iParam7;
	func_268(uParam0);
	func_267(uParam0);
	func_266();
	if (func_250(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, uParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_249(sParam12);
		func_249(sParam13);
		func_249(sParam14);
		func_249(sParam15);
		if (unk_0x9390801B06EE998F())
		{
			bVar1 = false;
			if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
					if (!BitTest(uParam0->f_13, 9))
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
					}
					if (BitTest(uParam0->f_13, 23))
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 23);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_247(uParam0, iParam21))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
					if (!BitTest(uParam0->f_13, 9))
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_249(sParam16);
				func_249(sParam19);
				func_249("MORE_SEATS");
				if (bParam18 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					if (unk_0xC450B06E5AAA0985(uParam0->f_5))
					{
						unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
						func_249(sParam11);
					}
					if (unk_0xC450B06E5AAA0985(*uParam0))
					{
						unk_0xFE54B8568B2ABD12(uParam0);
					}
					if ((!func_244(uParam0, 1) && !func_243(uParam0)) && !BitTest(uParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_242(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_240(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), false);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), true);
					}
				}
				else
				{
					if (BitTest(uParam0->f_13, 0))
					{
						func_249("LOSE_WANTED");
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), false);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), true);
					}
					if (BitTest(uParam0->f_13, 1))
					{
						if (!func_244(uParam0, 1))
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_240(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), true);
						}
					}
					if (!unk_0xC450B06E5AAA0985(uParam0->f_5))
					{
						if (unk_0xC450B06E5AAA0985(*uParam0))
						{
							unk_0xFE54B8568B2ABD12(uParam0);
						}
						uParam0->f_5 = func_5(Var3, 0);
						if (!iParam23 == -1)
						{
							unk_0x4C905FB262965D5D(uParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_239(uParam0->f_5, uParam0);
						}
					}
					else if (!func_238(Var3, unk_0x3CF9D442F2C902BD(uParam0->f_5), 0,1f, 0))
					{
						unk_0xDABC73EF230B6665(uParam0->f_5, Var3);
						if (bParam27)
						{
							func_239(uParam0->f_5, uParam0);
						}
					}
					if (!func_244(uParam0, 2))
					{
						if (!BitTest(uParam0->f_13, 2))
						{
							func_242(uParam0, sParam11, 0);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (BitTest(uParam0->f_13, 13))
						{
							iParam5 = 0;
						}
					}
					bVar1 = false;
					iVar4 = 0;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						iVar4 = 1;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Param1, Param2, iParam5, iVar4, iVar5);
						if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Param3, Param4, fParam28, 0, iVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Param1, Param2, iParam5, iVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar2], func_220()) || !func_236(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_233(uParam0))
							{
								func_249(sParam11);
								func_249(sParam16);
								func_249(sParam12);
								func_249(sParam13);
								func_249(sParam14);
								func_249(sParam15);
								func_249("LOSE_WANTED");
								func_249("MORE_SEATS");
								func_249(sParam19);
								func_219(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xFC8BFE4B41177C22(iParam10))
			{
				if ((bParam18 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) && (!BitTest(uParam0->f_13, 9) && !BitTest(uParam0->f_13, 22)))
				{
					func_249(sParam16);
					func_249(sParam19);
					if (unk_0xC450B06E5AAA0985(uParam0->f_5) || unk_0xC450B06E5AAA0985(*uParam0))
					{
						unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
						unk_0xFE54B8568B2ABD12(uParam0);
						func_249(sParam11);
					}
					if ((!func_244(uParam0, 1) && !func_243(uParam0)) && !BitTest(uParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_242(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_240(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), false);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), true);
					}
				}
				else
				{
					if (BitTest(uParam0->f_13, 0))
					{
						func_249("LOSE_WANTED");
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), false);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), true);
					}
					if (BitTest(uParam0->f_13, 1))
					{
						if (!func_244(uParam0, 1))
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_240(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), true);
						}
					}
					if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
					{
						if (!unk_0xC450B06E5AAA0985(*uParam0))
						{
							if (unk_0xC450B06E5AAA0985(uParam0->f_5))
							{
								unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
								func_249(sParam11);
							}
							*uParam0 = func_232(iParam10, 0, 0);
							unk_0xF55F62DA99DB0C2F(*uParam0, 2);
							if (!BitTest(uParam0->f_13, 4))
							{
								func_239(*uParam0, uParam0);
							}
						}
						if (!func_244(uParam0, 2))
						{
							if (!BitTest(uParam0->f_13, 3))
							{
								func_242(uParam0, sParam16, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
								unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
							}
							else if (BitTest(uParam0->f_13, 9))
							{
								if (!unk_0xFF692AB7350A74D7(sParam19))
								{
									if (!BitTest(uParam0->f_13, 4))
									{
										func_242(uParam0, sParam19, 0);
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
									}
								}
								else if (!BitTest(uParam0->f_13, 4))
								{
									func_242(uParam0, sParam16, 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
								if (!BitTest(uParam0->f_13, 23))
								{
									if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
									{
										func_240(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xC450B06E5AAA0985(uParam0->f_5))
				{
					unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
					func_249(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_244(uParam0, 2))
						{
							if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
							{
								if (!BitTest(uParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0xC5935DFB3F39785A(0, iVar6);
									if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar7]))
									{
										func_240(uParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_242(uParam0, "MORE_SEATS", 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 13);
								}
							}
							else if (!BitTest(uParam0->f_13, 3))
							{
								func_242(uParam0, sParam16, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
								unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
							}
							else if (!BitTest(uParam0->f_13, 4))
							{
								if (BitTest(uParam0->f_13, 9))
								{
									func_242(uParam0, sParam19, 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_244(uParam0, 2))
					{
						if (!BitTest(uParam0->f_13, 3))
						{
							func_242(uParam0, sParam16, 0);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
						}
						else if (BitTest(uParam0->f_13, 9))
						{
							if (!unk_0xFF692AB7350A74D7(sParam19))
							{
								if (!BitTest(uParam0->f_13, 4))
								{
									func_242(uParam0, sParam19, 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
							}
							else if (!BitTest(uParam0->f_13, 4))
							{
								func_242(uParam0, sParam16, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (BitTest(uParam0->f_13, 0))
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), false);
		}
		func_249(sParam11);
		func_249(sParam16);
		func_249(sParam19);
		func_249(sParam16);
		func_249("LOSE_WANTED");
		if (unk_0xC450B06E5AAA0985(uParam0->f_5))
		{
			unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
		}
		if (unk_0xC450B06E5AAA0985(*uParam0))
		{
			unk_0xFE54B8568B2ABD12(uParam0);
		}
	}
	unk_0x8744D2E3FC95740E(&(uParam0->f_13), 11);
	unk_0x8744D2E3FC95740E(&(uParam0->f_13), 12);
	return 0;
}

int func_232(int iParam0, bool bParam1, bool bParam2)
{
	return func_14(iParam0, !bParam1, bParam2);
}

int func_233(var uParam0)
{
	if (BitTest(uParam0->f_13, 12))
	{
		if (func_235(unk_0x4A8C381C258A124D()))
		{
			if (func_234(1, 0, 1) || BitTest(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_234(1, 0, 1) || BitTest(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_234(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x94A7730DEC6E86C8())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
		{
			return 0;
		}
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (bParam0)
		{
			if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) != unk_0x4A8C381C258A124D())
				{
					return 0;
				}
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x032CEF99C0D59B73(iVar0) < 0,95f || unk_0x032CEF99C0D59B73(iVar0) > 1,011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!unk_0xF7C1BF3F9EB7C65E(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_235(int iParam0)
{
	float fVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		fVar0 = unk_0xDF93B3CFAC96698F(iParam0);
		if (fVar0 > -0,5f && fVar0 < 0,5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_236(int iParam0, int iParam1)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()) && iParam1)
		{
			if (func_237(unk_0x4A8C381C258A124D(), iParam0))
			{
				unk_0x316802E03D8923D8(func_220(), 50f);
				return 1;
			}
		}
		else if (unk_0xD11A63E12F198FDB(iParam0, func_220()))
		{
			unk_0x316802E03D8923D8(func_220(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x27E68848F0E5D7D9(iParam0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam0, 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (!unk_0x4FAFF4BCB7633475(iParam1))
				{
					if (unk_0xF4244288C3EF3306(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_238(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

void func_239(var uParam0, var uParam1)
{
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		if (unk_0xC450B06E5AAA0985(uParam1->f_6))
		{
			unk_0xBC64B805EE071A37(uParam1->f_6, 0);
		}
		unk_0x0F20DD0DCEB2959F(0);
		unk_0xC3C7C9791CD79114();
		uParam1->f_6 = uParam0;
		unk_0xBC64B805EE071A37(uParam0, 1);
	}
}

void func_240(var uParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_241(iParam2), 1);
}

int func_241(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_242(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xFF692AB7350A74D7(sParam1))
		{
			if (!unk_0x1B79E937E91F40C3(sParam1, ""))
			{
				func_156(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x1DD05E817C89C737();
}

int func_243(var uParam0)
{
	if (!unk_0x4FAFF4BCB7633475(uParam0->f_16))
	{
		if (unk_0x912159A05BE6B52E(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_244(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x5994A2F6D4FFFE4D())
	{
		if (unk_0xFBA523E6F8ACE541())
		{
			return 1;
		}
		if (func_246(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x5994A2F6D4FFFE4D())
	{
		if (func_65() && !func_245())
		{
			return 1;
		}
	}
	return 0;
}

int func_245()
{
	if (Global_23297 == 1)
	{
		return 1;
	}
	return 0;
}

int func_246(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x1DD05E817C89C737();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_247(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (func_248(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_248(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xFC8BFE4B41177C22(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x2EEC0612337D20CE(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x22007BC82AF0074B(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x22007BC82AF0074B(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_249(char* sParam0)
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
	{
		unk_0x4E8E15513E171E54(sParam0);
	}
}

int func_250(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
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
	struct<3> Var19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
		{
			if (!BitTest(uParam0->f_13, 29) && !BitTest(uParam0->f_13, 28))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					unk_0x96A0632EBDD87FA3(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!BitTest(uParam0->f_13, 29) && BitTest(uParam0->f_13, 28))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
			{
				unk_0x96A0632EBDD87FA3(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (BitTest(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = unk_0xF0CA45A211FFDCD9(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 50f, 0, iVar16);
			if (unk_0xD9F5E1FEFD1329E4(iVar15, 0))
			{
				uParam0->f_21 = iVar15;
			}
		}
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_21, 0))
		{
			if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) || !bParam17)
					{
						if (func_248(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
								{
									unk_0x4190C67D524CD0DC(uParam0->f_17[iVar0], 1f);
									if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_220()))
									{
										unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
									}
									if (unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle")) == 7 && !func_265(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x8BF5256C439DF778(uParam0->f_17[iVar0]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0]))
										{
											unk_0xAAA71DD7E9059338(uParam0->f_17[iVar0], 1);
											unk_0xEBA229B2E0BB05E0(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0, 0);
											unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					if (!unk_0x9D6DF8F3584AAC2B(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x974022927CB47E68(uParam0->f_17[iVar0]);
					}
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_220()))
					{
						if (func_263(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_220());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!BitTest(uParam0->f_13, 26))
	{
		if ((!func_262(uParam0) && unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D())) && !unk_0xFC8BFE4B41177C22(iParam10))
		{
			iVar10 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar10, 0))
			{
				if (!BitTest(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_244(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0xC5935DFB3F39785A(0, iVar17);
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar18]))
						{
							func_240(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_242(uParam0, "MORE_SEATS", 0);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 13);
			func_249("MORE_SEATS");
		}
		if (!unk_0xFC8BFE4B41177C22(iParam10))
		{
			if ((!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]) || !unk_0x4FAFF4BCB7633475(uParam0->f_17[1])) || !unk_0x4FAFF4BCB7633475(uParam0->f_17[2]))
			{
				if (!BitTest(uParam0->f_13, 31))
				{
					if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()) && !func_244(uParam0, 2))
					{
						iVar10 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
						if (func_261(iVar10, uParam0))
						{
							func_242(uParam0, "CMN_VEHSUIT", 0);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					unk_0x8744D2E3FC95740E(&(uParam0->f_13), 31);
					func_249("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
		{
			if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iParam10))
			{
				if (unk_0x875A214D5EBCA509(0, 75))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 21);
				}
			}
			else if (BitTest(uParam0->f_13, 21))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_17[iVar0]))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_220()))
					{
						unk_0x34A9A872D3C510BF(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x34A9A872D3C510BF(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
					{
						iVar10 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
						if (unk_0xD9F5E1FEFD1329E4(iVar10, 0))
						{
							if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_220()))
							{
								if (!func_262(uParam0) && unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
								{
									if (!func_260(uParam0->f_17[iVar0]))
									{
										unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0x1C2F771CDC87A3A5(iVar10, 0))
						{
							if (unk_0xF4244288C3EF3306(uParam0->f_17[iVar0], iVar10))
							{
								if (unk_0x69799E0840A34AFB(iVar10) && !unk_0xD2A0543EC400E1A5(iVar10))
								{
									Var19 = { unk_0xD1A6A821F5AC81DB(iVar10, 1) };
									if (Var19.f_2 < -1f)
									{
										unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_220()))
					{
						if (unk_0x27E68848F0E5D7D9(uParam0->f_17[iVar0]))
						{
							iVar10 = unk_0x6EF03BE64E058E2F(uParam0->f_17[iVar0], 0);
							if (!unk_0x1C2F771CDC87A3A5(iVar10, 0))
							{
								if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iVar10))
										{
											if (unk_0xDF93B3CFAC96698F(iVar10) > 5f)
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
									{
										iVar20 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
									}
									if (unk_0xD9F5E1FEFD1329E4(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0xDF93B3CFAC96698F(iVar10) > 5f)
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_220()))
					{
						iVar21 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
						if (unk_0xFC8BFE4B41177C22(iVar21))
						{
							if (func_248(iVar21, uParam0, 0))
							{
								if (func_259(iVar0, uParam0) || !BitTest(uParam0->f_13, 27))
								{
									unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], iVar0);
									func_221(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_259(iVar0, uParam0))
							{
								if (unk_0x4B423FAA24E8ABF0(iVar21) == joaat("sentinel2"))
								{
									unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], 2);
								}
								func_258(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_220()) && !func_257(uParam0->f_17[iVar0], iParam10)) && !func_256(uParam0->f_17[iVar0], iParam10))
					{
						if (func_263(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_220()))
							{
								if (((!unk_0x8BF5256C439DF778(uParam0->f_17[iVar0]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0])) && !unk_0xE7895DBF72C7F282(uParam0->f_17[iVar0])) && !unk_0x9D6DF8F3584AAC2B(uParam0->f_17[iVar0]))
								{
									iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
									if (iVar11 == 7)
									{
										unk_0x974022927CB47E68(uParam0->f_17[iVar0]);
									}
									unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_220());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x1DD05E817C89C737();
								uParam0->f_1[iVar0] = func_232(uParam0->f_17[iVar0], 0, 0);
								unk_0xF55F62DA99DB0C2F(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_239(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
					{
						if (((func_236(uParam0->f_17[iVar0], 1) || func_257(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xD9F5E1FEFD1329E4(iParam10, 0) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0)))
						{
							if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
							{
								unk_0xFE54B8568B2ABD12(&(uParam0->f_1[iVar0]));
								func_249(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_239(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
					{
						if (!unk_0xF4244288C3EF3306(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0xFAA48325A90263BE(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !BitTest(uParam0->f_13, 11)) && !((bParam17 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0)))
							{
								if (unk_0x27E68848F0E5D7D9(uParam0->f_17[iVar0]))
								{
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_236(uParam0->f_17[iVar0], 1))
										{
											if (func_235(uParam0->f_17[iVar0]))
											{
												iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_leave_vehicle"));
												if (iVar11 == 7)
												{
													unk_0x092B9247AF00F5CF(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_220()))
									{
										if ((((!unk_0xE7895DBF72C7F282(uParam0->f_17[iVar0]) && !unk_0x8BF5256C439DF778(uParam0->f_17[iVar0])) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0])) && !unk_0x9D6DF8F3584AAC2B(uParam0->f_17[iVar0])) && !unk_0x5B702A5D1F2635BE(iParam10))
										{
											unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
									if (iVar11 == 7 && !func_265(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xE7895DBF72C7F282(uParam0->f_17[iVar0]) && !unk_0xE7895DBF72C7F282(unk_0x4A8C381C258A124D())) && !func_255(uParam0->f_17[iVar0], 2f)) && !unk_0x8BF5256C439DF778(uParam0->f_17[iVar0])) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0])) && !unk_0x5B702A5D1F2635BE(iParam10))
										{
											unk_0xAAA71DD7E9059338(uParam0->f_17[iVar0], 1);
											if (BitTest(uParam0->f_13, 10))
											{
												unk_0x4190C67D524CD0DC(uParam0->f_17[iVar0], 1f);
											}
											unk_0xEBA229B2E0BB05E0(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0, 0);
											unk_0x379E96D5D36B27DC(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_232(uParam0->f_17[iVar0], 0, 0);
										unk_0xF55F62DA99DB0C2F(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_220()))
							{
								if (func_263(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0x8BF5256C439DF778(uParam0->f_17[iVar0]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0]))
									{
										iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
										if (iVar11 == 7)
										{
											unk_0x974022927CB47E68(uParam0->f_17[iVar0]);
										}
										unk_0xAAA71DD7E9059338(uParam0->f_17[iVar0], 0);
										unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_220());
									}
								}
							}
						}
						else if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iParam10))
						{
							if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_220()))
							{
								if (!BitTest(uParam0->f_13, 21))
								{
									unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_220());
								}
							}
							else if (BitTest(uParam0->f_13, 21))
							{
								unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_220()) && !unk_0x5B702A5D1F2635BE(iParam10))
						{
							unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
				{
					unk_0xFE54B8568B2ABD12(&(uParam0->f_1[iVar0]));
					func_249(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_244(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
						{
							if (func_260(uParam0->f_17[iVar0]) || unk_0xFAA48325A90263BE(uParam0->f_17[iVar0], unk_0x4A8C381C258A124D(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
					{
						if (!unk_0xFAA48325A90263BE(uParam0->f_17[iVar0], unk_0x4A8C381C258A124D(), (uParam0->f_8 * 0,85f), (uParam0->f_8 * 0,85f), uParam0->f_8, 0, 1, 0) && !func_260(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x1DD05E817C89C737();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!BitTest(uParam0->f_13, 5))
							{
								func_242(uParam0, sParam7, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_254(iVar0, uParam0))
									{
										if (!unk_0xFF692AB7350A74D7(uVar13[iVar0]))
										{
											if (!unk_0x1B79E937E91F40C3(uVar13[iVar0], ""))
											{
												func_252(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_251(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_254(iVar0, uParam0))
										{
											func_242(uParam0, uVar12[iVar0], 0);
											func_251(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0x8744D2E3FC95740E(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
				{
					unk_0xFE54B8568B2ABD12(&(uParam0->f_1[iVar0]));
					func_249(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_249("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_251(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 16);
			break;
	}
}

void func_252(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xFF692AB7350A74D7(sParam1))
		{
			if (!unk_0x1B79E937E91F40C3(sParam1, ""))
			{
				func_253(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x1DD05E817C89C737();
}

void func_253(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x0A3136AD174470CC(iParam2, 1);
}

int func_254(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 14);
		
		case 1:
			return BitTest(uParam1->f_13, 15);
		
		case 2:
			return BitTest(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_255(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(iParam0, 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(iParam0, 0);
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0xDF93B3CFAC96698F(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_256(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (!unk_0xD11A63E12F198FDB(iParam0, func_220()))
		{
			iVar0 = unk_0x31945A289F1359A1(iParam0);
			if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
			{
				if (unk_0xFAA48325A90263BE(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_257(int iParam0, int iParam1)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(iParam1))
		{
			if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
			{
				if (unk_0xF4244288C3EF3306(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_258(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 19);
			break;
	}
}

int func_259(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 17);
		
		case 1:
			return BitTest(uParam1->f_13, 18);
		
		case 2:
			return BitTest(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_260(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
		if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(iParam0))
			{
				iVar1 = unk_0xCDA725BC2F170795(iParam0);
				if (unk_0xD9F5E1FEFD1329E4(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0xFAA48325A90263BE(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_261(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("bus") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x4FAFF4BCB7633475(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xFD5C5BBD1FE92BB7(iParam0, 0, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0xFD5C5BBD1FE92BB7(iParam0, 1, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0xFD5C5BBD1FE92BB7(iParam0, 2, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
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
				return 1;
			}
		}
	}
	return 0;
}

int func_262(var uParam0)
{
	int iVar0;
	
	if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (func_248(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_263(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam1))
	{
		if (unk_0x27E68848F0E5D7D9(iParam1))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam1, 0);
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
				{
					if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iVar0))
					{
						if (func_262(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (func_248(iVar0, uParam0, 0))
					{
						if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
						{
							if (func_264(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_264(int iParam0)
{
	float fVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		fVar0 = unk_0xDF93B3CFAC96698F(iParam0);
		if (fVar0 > -0,5f && fVar0 < 0,5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_265(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
		{
			iVar0 = unk_0xCDA725BC2F170795(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_266()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		iVar0 = unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D());
		if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
		{
			iVar1 = unk_0xFD5C5BBD1FE92BB7(iVar0, 0, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar1))
			{
				if (iVar1 != unk_0x4A8C381C258A124D())
				{
					if (unk_0x110821AE6C63DD4F(iVar1))
					{
						if (!unk_0x2E0309EF5F2EBDB1(iVar1, unk_0x4A8C381C258A124D()))
						{
							unk_0xE67051907958B5EB(iVar1, unk_0x4A8C381C258A124D(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_267(var uParam0)
{
	int iVar0;
	
	if (!BitTest(uParam0->f_13, 25))
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_17[iVar0]))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 32, 0);
					unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 305, 1);
					unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 268, 1);
					unk_0x379E96D5D36B27DC(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 25);
	}
}

void func_268(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_17[iVar0]))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
			{
				if (unk_0x27E68848F0E5D7D9(uParam0->f_17[iVar0]))
				{
					unk_0xC1BC1B8A5AA67C6B(uParam0->f_17[iVar0], 0);
					unk_0xD9757FAB956617BA(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				unk_0xC1BC1B8A5AA67C6B(unk_0x4A8C381C258A124D(), 0);
				unk_0xD9757FAB956617BA(unk_0x4A8C381C258A124D(), 0);
			}
		}
	}
}

Vector3 func_269()
{
	struct<3> Var0;
	
	return Var0;
}

int func_270(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_151[iVar0 /*6*/] == iParam0)
		{
			if (Local_151[iVar0 /*6*/].f_1 == 1)
			{
				Local_151[iVar0 /*6*/].f_2 = iParam1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_271()
{
	var uVar0;
	var uVar1;
	
	unk_0xF9A2335AB37CF17E(0f);
	unk_0x0397A00D015A11D4(0f, 0f);
	switch (iLocal_148)
	{
		case 0:
			iLocal_142 = unk_0xDC8D5832207C2EAD();
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
			if (func_211())
			{
				unk_0x80813AC549A1E8AE("MISSChinese2_crystalMazeMCS1_IG");
				unk_0xEC9DAA34BBB4658C(joaat("ig_old_man2"));
				unk_0xEC9DAA34BBB4658C(joaat("ig_old_man1a"));
				unk_0xEC9DAA34BBB4658C(joaat("ig_janet"));
				unk_0xEC9DAA34BBB4658C(joaat("ig_taocheng"));
				unk_0xEC9DAA34BBB4658C(joaat("ig_taostranslator"));
				unk_0x80813AC549A1E8AE("misschinese2_crystalmaze");
				unk_0x80813AC549A1E8AE("missrampageintrooutro");
				unk_0xF9358C41CC69C616(unk_0x4A8C381C258A124D(), 0, 0);
				func_192(1, 1, 1, 0, 0, 0, 0);
				if (unk_0xFC8BFE4B41177C22(Global_98010.f_9[0]))
				{
					Local_111[14 /*33*/] = Global_98010.f_9[2];
					Local_111[13 /*33*/] = Global_98010.f_9[1];
					Local_111[11 /*33*/] = Global_98010.f_9[4];
					Local_111[10 /*33*/] = Global_98010.f_9[3];
					Local_111[12 /*33*/] = Global_98010.f_9[0];
					unk_0xEE0BCDB1B5E36BCB(Local_111[14 /*33*/], 1, 1);
					unk_0xEE0BCDB1B5E36BCB(Local_111[13 /*33*/], 1, 1);
					unk_0xEE0BCDB1B5E36BCB(Local_111[11 /*33*/], 1, 1);
					unk_0xEE0BCDB1B5E36BCB(Local_111[10 /*33*/], 1, 1);
					unk_0xEE0BCDB1B5E36BCB(Local_111[12 /*33*/], 1, 1);
					if (!unk_0x4FAFF4BCB7633475(Local_111[13 /*33*/]))
					{
						unk_0xF293D66D4452C854(Local_111[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					}
					if (!unk_0x4FAFF4BCB7633475(Local_111[14 /*33*/]))
					{
						unk_0xF293D66D4452C854(Local_111[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					}
					if (!unk_0x4FAFF4BCB7633475(Local_111[11 /*33*/]))
					{
						unk_0xF293D66D4452C854(Local_111[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
					}
					if (!unk_0x4FAFF4BCB7633475(Local_111[10 /*33*/]))
					{
						unk_0xF293D66D4452C854(Local_111[10 /*33*/], "Taos_Translator", 0, joaat("ig_taostranslator"), 0);
					}
					if (!unk_0x4FAFF4BCB7633475(Local_111[12 /*33*/]))
					{
						unk_0xF293D66D4452C854(Local_111[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
					}
				}
				else
				{
					Local_111[13 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("ig_old_man1a"), 1987,231f, 3052,741f, 46,214f, 0, 1, 1);
					unk_0xF293D66D4452C854(Local_111[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					Local_111[14 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("ig_old_man2"), 1987,231f, 3052,741f, 46,214f, 0, 1, 1);
					unk_0xF293D66D4452C854(Local_111[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					if (unk_0xFC8BFE4B41177C22(Local_111[11 /*33*/]))
					{
						if (!unk_0x4FAFF4BCB7633475(Local_111[11 /*33*/]))
						{
							unk_0xF293D66D4452C854(Local_111[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
						}
					}
					else
					{
						unk_0xF293D66D4452C854(Local_111[11 /*33*/], "tao", 2, joaat("ig_taocheng"), 0);
					}
					unk_0xF293D66D4452C854(Local_111[10 /*33*/], "Taos_Translator", 2, joaat("ig_taostranslator"), 0);
					Local_111[12 /*33*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("ig_janet"), 1987,231f, 3052,741f, 46,214f, 0, 1, 1);
					unk_0xF293D66D4452C854(Local_111[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
				}
				func_273();
				unk_0xED65412F8B26ED99(0);
				unk_0xB9784D6C7219851B(4);
				unk_0x55F7AC4B2B875901(1991,22f, 3054,884f, 50,27741f, 87f, 0);
				unk_0xEC73DFE5CE55E19C(1991,22f, 3054,884f, 50,27741f, 87f, 0);
				unk_0xA7B0B03284E7503C(Vector(50,27741f, 3054,884f, 1991,22f) - Vector(40f, 40f, 40f), Vector(50,27741f, 3054,884f, 1991,22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1, 1);
				unk_0x89C4F1335B4A6633(Vector(50,27741f, 3054,884f, 1991,22f) - Vector(40f, 40f, 40f), Vector(50,27741f, 3054,884f, 1991,22f) + Vector(0f, 40f, 40f));
				func_32(0, 0);
				func_32(26, 0);
				iLocal_574 = 0;
				iLocal_148++;
			}
			break;
		
		case 1:
			if (unk_0xFD216000DC314A92())
			{
				if (unk_0x15CCE8886267624F())
				{
					unk_0x10B228D2FDB7AF16(1000);
				}
				iLocal_148++;
			}
			break;
		
		case 2:
			if (unk_0xFD216000DC314A92())
			{
				if (iLocal_574 == 0)
				{
					func_272(13);
					iLocal_574++;
				}
			}
			if (!unk_0xFC8BFE4B41177C22(Local_111[13 /*33*/]))
			{
				if (unk_0xD8FC13DA1BA1DBA2("Old_Man1A", 0))
				{
					Local_111[13 /*33*/] = unk_0xBD545F8729E9F413(unk_0x4240B5D04F91480C("Old_Man1A", 0));
				}
			}
			if (!unk_0xFC8BFE4B41177C22(Local_111[14 /*33*/]))
			{
				if (unk_0xD8FC13DA1BA1DBA2("Old_Man2", 0))
				{
					Local_111[14 /*33*/] = unk_0xBD545F8729E9F413(unk_0x4240B5D04F91480C("Old_Man2", 0));
				}
			}
			if (!unk_0xFC8BFE4B41177C22(Local_111[11 /*33*/]))
			{
				if (unk_0xD8FC13DA1BA1DBA2("tao", 0))
				{
					Local_111[11 /*33*/] = unk_0xBD545F8729E9F413(unk_0x4240B5D04F91480C("tao", 0));
				}
			}
			if (!unk_0xFC8BFE4B41177C22(Local_111[10 /*33*/]))
			{
				if (unk_0xD8FC13DA1BA1DBA2("Taos_Translator", 0))
				{
					Local_111[10 /*33*/] = unk_0xBD545F8729E9F413(unk_0x4240B5D04F91480C("Taos_Translator", 0));
				}
			}
			if (!unk_0xFC8BFE4B41177C22(Local_111[12 /*33*/]))
			{
				if (unk_0xD8FC13DA1BA1DBA2("Janet", 0))
				{
					Local_111[12 /*33*/] = unk_0xBD545F8729E9F413(unk_0x4240B5D04F91480C("Janet", 0));
				}
			}
			if (unk_0xD8FC13DA1BA1DBA2("tao", 0))
			{
				if (!unk_0x4FAFF4BCB7633475(Local_111[11 /*33*/]))
				{
					unk_0x3CEA1FD137ACE2D9(Local_111[11 /*33*/], iLocal_116);
					unk_0x3F58BFCF656F0DF1(Local_111[11 /*33*/], 0);
					uVar0 = unk_0x2EC137C692A52458(1991,988f, 3054,51f, 46,215f, 0f, 0f, 50,76f, 2);
					unk_0x3DA436E63AB0F541(Local_111[11 /*33*/], uVar0, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 1, 16, 1148846080, 0);
				}
			}
			if (unk_0xD8FC13DA1BA1DBA2("Taos_Translator", 0))
			{
				if (!unk_0x4FAFF4BCB7633475(Local_111[10 /*33*/]))
				{
					unk_0x3CEA1FD137ACE2D9(Local_111[10 /*33*/], iLocal_116);
					unk_0x3F58BFCF656F0DF1(Local_111[10 /*33*/], 0);
					uVar1 = unk_0x2EC137C692A52458(1991,988f, 3054,51f, 46,215f, 0f, 0f, 50,76f, 2);
					unk_0x3DA436E63AB0F541(Local_111[10 /*33*/], uVar1, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 1, 16, 1148846080, 0);
				}
			}
			if (unk_0xD8FC13DA1BA1DBA2("Trevor", 0))
			{
				iLocal_142 = unk_0xDC8D5832207C2EAD();
				if (func_74(iLocal_142) && func_73(iLocal_142, 1995,202f, 3062,156f, 46,0491f, 1) < 5f)
				{
					unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iLocal_142, -1);
					unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					unk_0xCE41CD0179F8640B(unk_0x4B423FAA24E8ABF0(iLocal_142));
				}
				else if (unk_0xE100DD4F82A51BDE("missrampageintrooutro"))
				{
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 1992,135f, 3057,467f, 46,06f, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 325,4678f);
					unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), "missrampageintrooutro", "trvram_6_1h_run_outro", 1000f, -4f, -1, 0, 0,1f, 0, 0, 0);
					unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 1, 0);
				}
				else
				{
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 1992,919f, 3057,906f, 46,0567f, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 337,2537f);
					unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Walk"), 0, 0, 0);
					unk_0x7992D566A90CD49C(unk_0x4A8C381C258A124D(), 1f);
					unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 1, 0);
				}
			}
			if (unk_0x2B60F53D06BC6971(0))
			{
				unk_0xE3349610A15FA0D0(6);
				func_192(0, 1, 1, 0, 0, 0, 0);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(-7f, 1065353216);
				if (unk_0x15CCE8886267624F())
				{
					unk_0x6C39BDF5EA5D38FC(1992,135f, 3057,467f, 46,06f);
				}
				unk_0x3B327805C3CAF8DC();
				unk_0xA62957B100C8DE6D(0f, 7f, 3);
				func_182(11);
			}
			break;
	}
}

void func_272(int iParam0)
{
	if (Global_98435 != -1)
	{
		if (iParam0 == Global_98435)
		{
			Global_98439 = 1;
			return;
		}
	}
}

void func_273()
{
	int iVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), 0, 0, 0, 0, 0, 0, 0, 0);
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 157, 1);
		unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98882[iVar0]))
		{
			if (!unk_0x1C2F771CDC87A3A5(Global_98882[iVar0], 0))
			{
				unk_0xD0F1DB0E50B367AD(Global_98882[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x935364B4448CD584(Global_98882[iVar0], 0);
			}
		}
		iVar0++;
	}
	if ((Global_44042 != 0 && Global_44042 != 3) && Global_44042 != 2)
	{
		unk_0xDAE61414743C8D1D(5);
		unk_0x425BBE19F25A57AB(1f);
	}
}

void func_274()
{
	int iVar0;
	
	switch (iLocal_148)
	{
		case 0:
			unk_0xF2CB0224D3BE0B42("FRMCHSE", 0);
			while (!unk_0xDCB78A15E5F495DC(0))
			{
				func_28(27, 1);
			}
			func_62(&uLocal_201, 0, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
			func_62(&uLocal_201, 8, 0, "PED8", 0, 1);
			func_32(9, 1);
			func_32(29, 1);
			func_32(21, 1);
			func_384();
			unk_0xD7ABE01242C5B8E3(2442,69f, 4970,348f, 46,33f, 30f);
			unk_0xE0F4EA3A654155A3("EXTRASUNNY", 120f);
			Local_382[0 /*3*/] = { 2428,47f, 4968,91f, 42,11f };
			Local_382[1 /*3*/] = { 2431,14f, 4972,06f, 42,19f };
			Local_382[2 /*3*/] = { 2433,05f, 4969,22f, 42,26f };
			Local_382[3 /*3*/] = { 2437,71f, 4968,13f, 42,45f };
			Local_382[4 /*3*/] = { 2436,12f, 4964,76f, 42,19f };
			Local_382[5 /*3*/] = { 2432,13f, 4961,97f, 41,35f };
			Local_382[6 /*3*/] = { 2430,07f, 4963,78f, 41,35f };
			Local_382[7 /*3*/] = { 2434f, 4963,04f, 41,53f };
			Local_382[8 /*3*/] = { 2435,637f, 4969,699f, 42,19639f };
			Local_107[0 /*5*/] = { 2450,376f, 4955,83f, 43,9394f };
			Local_107[1 /*5*/] = { 2449,815f, 4956,678f, 43,9894f };
			Local_107[2 /*5*/] = { 2449,606f, 4957,675f, 44,0646f };
			Local_107[3 /*5*/] = { 2449,739f, 4958,731f, 44,1544f };
			Local_107[4 /*5*/] = { 2450,141f, 4959,745f, 44,2487f };
			Local_107[5 /*5*/] = { 2450,685f, 4960,582f, 44,3219f };
			Local_107[6 /*5*/] = { 2451,492f, 4961,333f, 44,4439f };
			Local_107[7 /*5*/] = { 2452,174f, 4962,099f, 44,5787f };
			Local_107[8 /*5*/] = { 2452,717f, 4962,906f, 44,9141f };
			Local_107[9 /*5*/] = { 2453,35f, 4963,579f, 45,3558f };
			Local_107[10 /*5*/] = { 2453,754f, 4964,565f, 45,5766f };
			Local_107[11 /*5*/] = { 2453,226f, 4965,539f, 45,5766f };
			Local_107[12 /*5*/] = { 2452,472f, 4966,293f, 45,5766f };
			Local_107[13 /*5*/] = { 2451,869f, 4967,104f, 45,5766f };
			Local_107[14 /*5*/] = { 2451,529f, 4968,083f, 45,5766f };
			Local_107[15 /*5*/] = { 2452,327f, 4968,712f, 45,5766f };
			Local_107[16 /*5*/] = { 2452,796f, 4969,643f, 45,8107f };
			Local_107[17 /*5*/] = { 2453,261f, 4970,541f, 45,8106f };
			Local_107[18 /*5*/] = { 2453,58f, 4971,548f, 45,8104f };
			Local_107[19 /*5*/] = { 2452,808f, 4972,267f, 45,8306f };
			Local_107[20 /*5*/] = { 2452,049f, 4972,928f, 45,8306f };
			Local_107[21 /*5*/] = { 2451,241f, 4973,599f, 45,8306f };
			Local_107[22 /*5*/] = { 2450,248f, 4973,889f, 45,8306f };
			Local_107[23 /*5*/] = { 2449,207f, 4973,784f, 45,8105f };
			Local_107[24 /*5*/] = { 2448,172f, 4973,814f, 45,8106f };
			Local_107[25 /*5*/] = { 2447,153f, 4973,771f, 45,8106f };
			Local_107[26 /*5*/] = { 2446,138f, 4973,724f, 45,8106f };
			Local_107[27 /*5*/] = { 2445,128f, 4973,689f, 45,8106f };
			Local_107[28 /*5*/] = { 2444,256f, 4973,056f, 45,8106f };
			Local_107[29 /*5*/] = { 2443,669f, 4972,194f, 45,8106f };
			Local_107[30 /*5*/] = { 2443,119f, 4971,275f, 45,8106f };
			Local_107[31 /*5*/] = { 2442,661f, 4970,359f, 45,8106f };
			Local_107[32 /*5*/] = { 2442,267f, 4969,425f, 45,8106f };
			Local_107[33 /*5*/] = { 2441,708f, 4968,502f, 45,8306f };
			Local_107[34 /*5*/] = { 2441,264f, 4967,534f, 45,8106f };
			Local_107[35 /*5*/] = { 2440,873f, 4966,538f, 45,8106f };
			Local_107[36 /*5*/] = { 2440,382f, 4965,634f, 45,8106f };
			Local_107[37 /*5*/] = { 2439,71f, 4964,882f, 45,8106f };
			Local_107[38 /*5*/] = { 2438,933f, 4964,146f, 45,8106f };
			Local_107[39 /*5*/] = { 2438,166f, 4963,502f, 45,8106f };
			Local_107[40 /*5*/] = { 2437,555f, 4962,709f, 45,8106f };
			Local_107[41 /*5*/] = { 2436,901f, 4961,95f, 45,8106f };
			Local_107[42 /*5*/] = { 2436,075f, 4961,257f, 45,8106f };
			Local_107[43 /*5*/] = { 2435,08f, 4961,004f, 45,8118f };
			Local_107[44 /*5*/] = { 2434,066f, 4960,713f, 45,8181f };
			Local_107[45 /*5*/] = { 2433,045f, 4960,594f, 45,8192f };
			Local_107[46 /*5*/] = { 2432,065f, 4960,25f, 45,813f };
			Local_107[47 /*5*/] = { 2431,233f, 4960,809f, 45,8089f };
			Local_107[48 /*5*/] = { 2430,575f, 4961,574f, 45,5917f };
			Local_107[49 /*5*/] = { 2429,889f, 4962,028f, 44,9345f };
			Local_107[50 /*5*/] = { 2429,26f, 4962,595f, 44,2774f };
			Local_107[51 /*5*/] = { 2428,691f, 4963,279f, 43,6202f };
			Local_107[52 /*5*/] = { 2428,073f, 4963,911f, 42,9631f };
			Local_107[53 /*5*/] = { 2428,239f, 4964,922f, 42,9631f };
			Local_107[54 /*5*/] = { 2428,961f, 4965,455f, 42,3059f };
			Local_107[55 /*5*/] = { 2429,45f, 4966,224f, 41,8679f };
			Local_107[56 /*5*/] = { 2430,073f, 4966,82f, 41,3476f };
			Local_107[57 /*5*/] = { 2431,097f, 4967,043f, 41,3476f };
			Local_107[58 /*5*/] = { 2431,89f, 4966,403f, 41,3476f };
			Local_107[59 /*5*/] = { 2432,768f, 4965,902f, 41,3476f };
			Local_107[60 /*5*/] = { 2433,776f, 4965,613f, 41,3476f };
			Local_134[0 /*6*/].f_3 = "Table Flames";
			Local_134[0 /*6*/] = 0;
			Local_134[1 /*6*/].f_3 = "Table Explosion";
			Local_134[1 /*6*/] = 0;
			Local_134[2 /*6*/].f_3 = "House Explosion";
			Local_134[2 /*6*/] = 0;
			Local_134[3 /*6*/].f_3 = "Cam Shake";
			Local_134[3 /*6*/] = 0;
			Local_134[4 /*6*/].f_3 = "Position player";
			Local_134[4 /*6*/] = 0;
			Local_134[5 /*6*/].f_3 = "Slow mo";
			Local_134[5 /*6*/] = 0;
			Local_134[0 /*6*/].f_1 = 2;
			Local_134[0 /*6*/].f_2 = 1000f;
			Local_134[1 /*6*/].f_1 = 2;
			Local_134[1 /*6*/].f_2 = 4200f;
			Local_134[2 /*6*/].f_1 = 3;
			Local_134[2 /*6*/].f_2 = 0f;
			Local_134[3 /*6*/].f_1 = 3;
			Local_134[3 /*6*/].f_2 = 0f;
			Local_134[4 /*6*/].f_1 = 3;
			Local_134[4 /*6*/].f_2 = 3200f;
			Local_134[5 /*6*/].f_1 = 3;
			Local_134[5 /*6*/].f_2 = 700f;
			Local_135[0 /*18*/] = { 2454,83f, 4974,96f, 46,4489f };
			Local_135[0 /*18*/].f_3 = { 2,9627f, 0,077f, 115,874f };
			Local_135[0 /*18*/].f_14 = 39,703f;
			Local_135[0 /*18*/].f_6 = { 2454,41f, 4974,93f, 46,4691f };
			Local_135[0 /*18*/].f_9 = { 2,6238f, 0,077f, 114,001f };
			Local_135[0 /*18*/].f_15 = 39,703f;
			Local_135[0 /*18*/].f_12 = 2500f;
			Local_135[0 /*18*/].f_13 = 2500f;
			Local_135[0 /*18*/].f_16 = 0;
			Local_135[0 /*18*/].f_17 = 18;
			Local_135[1 /*18*/] = { 2435,41f, 4960,94f, 45,9568f };
			Local_135[1 /*18*/].f_3 = { 6,677f, 0f, -49,4853f };
			Local_135[1 /*18*/].f_14 = 58,9114f;
			Local_135[1 /*18*/].f_6 = { 2435,11f, 4960,62f, 45,9441f };
			Local_135[1 /*18*/].f_9 = { 6,3596f, 0f, -44,8248f };
			Local_135[1 /*18*/].f_15 = 58,9114f;
			Local_135[1 /*18*/].f_12 = 3200f;
			Local_135[1 /*18*/].f_13 = 1900f;
			Local_135[1 /*18*/].f_16 = 0;
			Local_135[1 /*18*/].f_17 = 34;
			Local_135[2 /*18*/] = { 2434,77f, 4969,56f, 42,3654f };
			Local_135[2 /*18*/].f_3 = { 5,2773f, -0,1511f, 132,167f };
			Local_135[2 /*18*/].f_14 = 35,1297f;
			Local_135[2 /*18*/].f_6 = { 2434,66f, 4969,68f, 42,3657f };
			Local_135[2 /*18*/].f_9 = { 5,2773f, -0,1511f, 132,167f };
			Local_135[2 /*18*/].f_15 = 35,1297f;
			Local_135[2 /*18*/].f_12 = 3500f;
			Local_135[2 /*18*/].f_13 = 4500f;
			Local_135[2 /*18*/].f_16 = 3;
			Local_135[2 /*18*/].f_17 = 49;
			Local_135[3 /*18*/] = { 2472,1f, 4943,1f, 45,3f };
			Local_135[3 /*18*/].f_3 = { 6f, 0f, 25,3f };
			Local_135[3 /*18*/].f_14 = 33,1297f;
			Local_135[3 /*18*/].f_6 = { 2472,1f, 4943,1f, 45,3f };
			Local_135[3 /*18*/].f_9 = { 5,5f, 0f, 35,6f };
			Local_135[3 /*18*/].f_15 = 33,1297f;
			Local_135[3 /*18*/].f_12 = 3500f;
			Local_135[3 /*18*/].f_13 = 3500f;
			Local_135[3 /*18*/].f_16 = 0;
			Local_135[3 /*18*/].f_17 = -1;
			fLocal_155 = 0,06f;
			func_172(1);
			Local_140[0 /*3*/] = { 2432,74f, 4963,43f, 41,35f };
			Local_140[1 /*3*/] = { 2432,02f, 4962,61f, 41,35f };
			Local_140[2 /*3*/] = { 2431,06f, 4961,83f, 41,35f };
			Local_140[3 /*3*/] = { 2430,84f, 4961,08f, 42,09f };
			Local_140[4 /*3*/] = { 2430,53f, 4962,47f, 42f };
			Local_140[5 /*3*/] = { 2430,81f, 4961,1f, 42,8f };
			Local_140[6 /*3*/] = { 2429,74f, 4961,98f, 42,32f };
			Local_140[7 /*3*/] = { 2433,5f, 4966,76f, 41,35f };
			Local_140[8 /*3*/] = { 2433,24f, 4967,42f, 41,35f };
			Local_140[9 /*3*/] = { 2433,15f, 4967,43f, 42,19f };
			Local_140[10 /*3*/] = { 2432,53f, 4967,89f, 42,4f };
			Local_140[11 /*3*/] = { 2432,48f, 4969,07f, 42,19f };
			Local_140[12 /*3*/] = { 2433,36f, 4969,44f, 42,31f };
			Local_128[0 /*3*/] = { 2552,692f, 4978,566f, 45,32309f };
			Local_128[1 /*3*/] = { 2562,534f, 5013,502f, 47,46302f };
			Local_128[2 /*3*/] = { 2553,885f, 4945,661f, 47,49305f };
			Local_128[3 /*3*/] = { 2515,545f, 4936,428f, 42,88382f };
			Local_128[4 /*3*/] = { 2497,318f, 4967,818f, 43,59557f };
			Local_128[5 /*3*/] = { 2481,376f, 4951,766f, 43,99859f };
			Local_128[6 /*3*/] = { 2522,044f, 4956,372f, 43,71605f };
			Local_128[7 /*3*/] = { 2529,048f, 4985,627f, 43,86848f };
			Local_128[8 /*3*/] = { 2502,503f, 4987,245f, 46,62669f };
			Local_128[9 /*3*/] = { 2464,891f, 4939,949f, 44,25646f };
			Local_128[10 /*3*/] = { 2447,16f, 4940,272f, 44,15766f };
			Local_128[11 /*3*/] = { 2376,537f, 4946,399f, 41,77232f };
			Local_128[12 /*3*/] = { 2395,232f, 4995,63f, 44,68909f };
			Local_128[13 /*3*/] = { 2419,819f, 4991,936f, 45,36976f };
			Local_128[14 /*3*/] = { 2436,319f, 5011,725f, 45,84694f };
			Local_128[15 /*3*/] = { 2407,765f, 5023,079f, 47,77091f };
			Local_128[16 /*3*/] = { 2479,016f, 5028,829f, 42,98806f };
			Local_128[17 /*3*/] = { 2434,704f, 5042,713f, 45,34462f };
			Local_128[18 /*3*/] = { 2513,93f, 5039,333f, 51,02121f };
			Local_128[19 /*3*/] = { 2477,882f, 4986,437f, 44,99511f };
			Local_128[20 /*3*/] = { 2450,058f, 5011,858f, 44,89032f };
			func_210(&Local_117, &uLocal_201, cLocal_129, 12f, 2482,197f, 4975,367f, 44,7288f, 121f, 1);
			func_383(&Local_118, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_383(&Local_119, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_383(&Local_123, "CHI2_nope", 8, "ONEILGUARD1");
			func_383(&Local_120, "SEETREVOR", 3, "chin2goon1");
			func_383(&Local_121, "CHI2_hear", 8, "ONEILGUARD1");
			func_383(&Local_122, "CHI2_hear", 8, "ONEILGUARD1");
			func_383(&Local_124, "ONEILGUARD3", 5, "ONEILGUARD1");
			func_383(&Local_125, "ONEILGUARD2", 5, "ONEILGUARD1");
			func_383(&Local_126, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_383(&Local_127, "GOON2TREV", 4, "CHIN2goon2");
			func_32(6, 1);
			func_32(25, 1);
			iLocal_142 = unk_0x1D25F777D0165BF3();
			unk_0xCCA6D8A84EE8C88A(joaat("bodhi2"), 1);
			unk_0x06CD913C241C765E("TAOGROUP", &iLocal_116);
			unk_0xD414C47AFF81382A(1, iLocal_116, joaat("player"));
			unk_0xD414C47AFF81382A(1, joaat("player"), iLocal_116);
			func_17(0, -1);
			unk_0x7DA9B8DF3A97D040("Chinese2_Lunch", 0);
			unk_0x7DA9B8DF3A97D040("CHINESE2_HILLBILLIES", 0);
			if (func_382())
			{
				iVar0 = func_381();
				if (Global_95690 == 1)
				{
					iVar0++;
				}
				switch (iVar0)
				{
					case 0:
						func_275(2, 1, 0);
						unk_0x10B228D2FDB7AF16(1000);
						break;
					
					case 1:
						if (Global_95690 == 1)
						{
							func_275(3, 1, 0);
						}
						else
						{
							func_275(4, 1, 0);
							unk_0x10B228D2FDB7AF16(1000);
						}
						break;
					
					case 2:
						func_275(6, 1, 0);
						unk_0x10B228D2FDB7AF16(1000);
						break;
					
					case 3:
						func_275(7, 1, 0);
						unk_0x10B228D2FDB7AF16(1000);
						break;
					
					case 4:
						if (Global_95690 == 1)
						{
							func_275(8, 1, 0);
						}
						else
						{
							func_275(9, 1, 0);
							unk_0x10B228D2FDB7AF16(1000);
						}
						break;
					
					case 5:
						func_275(10, 1, 0);
						unk_0x10B228D2FDB7AF16(1000);
						func_150();
						break;
				}
			}
			else if (func_147(0))
			{
				func_275(1, 0, 1);
			}
			else
			{
				func_182(11);
			}
			break;
	}
}

void func_275(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	func_376(3);
	func_32(6, 0);
	iLocal_148 = 0;
	iLocal_147 = iParam0;
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			unk_0xEC9DAA34BBB4658C(joaat("ig_old_man2"));
			unk_0xEC9DAA34BBB4658C(joaat("ig_old_man1a"));
			unk_0xEC9DAA34BBB4658C(joaat("ig_janet"));
			unk_0xEC9DAA34BBB4658C(joaat("ig_taocheng"));
			unk_0xEC9DAA34BBB4658C(joaat("ig_taostranslator"));
			unk_0x839AD252B0708F35("chinese_2_int", 8);
			while (((((!unk_0x6252BC0DD8A320DB(joaat("ig_old_man2")) || !unk_0x6252BC0DD8A320DB(joaat("ig_old_man1a"))) || !unk_0x6252BC0DD8A320DB(joaat("ig_janet"))) || !unk_0x6252BC0DD8A320DB(joaat("ig_taocheng"))) || !unk_0x6252BC0DD8A320DB(joaat("ig_taostranslator"))) || !unk_0x0DDDD9D153BCF51F())
			{
				func_28(323, 1);
			}
			while (!func_373(&(Local_111[11 /*33*/]), 21, 1985,666f, 3052,661f, 46,2151f, 0, 1))
			{
				system::wait(0);
			}
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 1992,878f, 3057,846f, 46,0568f, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 311f);
			unk_0xD1C578C204015E1F(Local_111[11 /*33*/], 9, 1, 0, 0);
			break;
		
		case 2:
			if (bParam1)
			{
				func_372(1992,878f, 3057,846f, 46,0568f, 311f, 1, 0);
			}
			else
			{
				if (func_74(iLocal_142))
				{
					unk_0xB2BD5837A8D3CEDA(iLocal_142, 1994,387f, 3061,94f, 46,0491f, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(iLocal_142, 50,7724f);
				}
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(-7f, 1065353216);
				unk_0x6C39BDF5EA5D38FC(1992,878f, 3057,846f, 46,0568f);
			}
			unk_0xA7B0B03284E7503C(Vector(50,27741f, 3054,884f, 1991,22f) - Vector(40f, 40f, 40f), Vector(50,27741f, 3054,884f, 1991,22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1, 1);
			unk_0x89C4F1335B4A6633(Vector(50,27741f, 3054,884f, 1991,22f) - Vector(40f, 40f, 40f), Vector(50,27741f, 3054,884f, 1991,22f) + Vector(0f, 40f, 40f));
			unk_0x2094BC4B6731BA68(1984,997f, 3052,905f, 46,8556f, 10f, 1, 0, 0, 0);
			func_287(1, 0, bParam2);
			unk_0xEC9DAA34BBB4658C(joaat("ig_taocheng"));
			unk_0xEC9DAA34BBB4658C(joaat("ig_taostranslator"));
			unk_0xEC9DAA34BBB4658C(joaat("ig_old_man1a"));
			unk_0xEC9DAA34BBB4658C(joaat("ig_old_man2"));
			unk_0xEC9DAA34BBB4658C(joaat("ig_janet"));
			unk_0x80813AC549A1E8AE("misschinese2_crystalmaze");
			while (((((!unk_0x6252BC0DD8A320DB(joaat("ig_taocheng")) || !unk_0x6252BC0DD8A320DB(joaat("ig_taostranslator"))) || !unk_0x6252BC0DD8A320DB(joaat("ig_old_man1a"))) || !unk_0x6252BC0DD8A320DB(joaat("ig_old_man2"))) || !unk_0x6252BC0DD8A320DB(joaat("ig_janet"))) || !unk_0xE100DD4F82A51BDE("misschinese2_crystalmaze"))
			{
				func_28(3, 1);
			}
			if (!bParam1)
			{
				if (func_74(iLocal_142))
				{
					unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iLocal_142, -1);
					unk_0xB2BD5837A8D3CEDA(iLocal_142, 1994,387f, 3061,94f, 46,0491f, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(iLocal_142, 50,7724f);
				}
				else
				{
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 1992,878f, 3057,846f, 46,0568f, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 311f);
				}
			}
			func_28(85, 1);
			func_166(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (func_175(2, 41) != 900)
			{
				func_166(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(4, 1);
			}
			func_32(26, 0);
			if (bParam1)
			{
				if (func_74(iLocal_142))
				{
					func_284(iLocal_142, -1, 1);
				}
				else
				{
					func_284(0, -1, 1);
				}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_372(2574,049f, 4981,824f, 50,44f, 50f, 1, 0);
			}
			else
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2570,543f, 4982,002f, 50,6795f, 0, 1, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 98,21f);
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(-7f, 1065353216);
				unk_0x6C39BDF5EA5D38FC(2458,508f, 4984,504f, 52,3461f);
				func_28(323, 1);
			}
			unk_0x283C0970282AA5F3(1);
			unk_0xAD9B1C8FED6B4D96(1);
			unk_0x425BBE19F25A57AB(0f);
			func_287(0, 0, 0);
			unk_0xADF8AA2F22A19163("chinese2_farmhouse_cutscene");
			func_28(34, 1);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(5, 1);
			}
			while (!func_234(1, 0, 1))
			{
				func_28(6, 1);
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(7, 1);
			}
			while (!unk_0xEBCB9138B2CABF20())
			{
				func_28(878, 1);
			}
			if (bParam1)
			{
				func_284(0, -1, 1);
			}
			func_166(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (!func_153(10, 5))
			{
				func_166(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(234, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_372(func_283(), func_282(), 1, 0);
			}
			else
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2570,543f, 4982,002f, 50,6795f, 0, 1, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 98,21f);
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(-7f, 1065353216);
				unk_0x6C39BDF5EA5D38FC(2570,543f, 4982,002f, 50,6795f);
				func_28(323, 1);
			}
			unk_0x283C0970282AA5F3(1);
			unk_0xAD9B1C8FED6B4D96(1);
			func_287(0, 1, 0);
			unk_0x425BBE19F25A57AB(0f);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(8, 1);
			}
			iVar0 = func_281(2);
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), iVar0, 0))
				{
					unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), iVar0, 1);
				}
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(9, 1);
			}
			if (bParam1)
			{
				if ((unk_0xFC8BFE4B41177C22(iLocal_142) && unk_0xD9F5E1FEFD1329E4(iLocal_142, 0)) && func_280())
				{
					func_284(iLocal_142, -1, 1);
					if (unk_0xD9F5E1FEFD1329E4(iLocal_142, 0))
					{
						unk_0xC229299217554C78(iLocal_142, 1, 1, 0);
						if (unk_0x00C6FDED3EB75117(unk_0x4B423FAA24E8ABF0(iLocal_142)))
						{
							unk_0x93C337B66C95C99B(iLocal_142, 15f);
						}
						if (unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(iLocal_142)))
						{
							unk_0xA9F7300B498DDED7(iLocal_142);
							unk_0x1AB7223AC0702871(iLocal_142, 1f, 1f, 1f);
						}
					}
				}
				else
				{
					func_284(0, -1, 1);
				}
			}
			if (unk_0xED977E2AE2CB16EE(func_283(), 2570,538f, 4982,031f, 50,6239f, 1) < 10f)
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2570,538f, 4982,031f, 50,6239f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 98f);
			}
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				func_278(unk_0x4A8C381C258A124D(), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1));
			}
			break;
		
		case 5:
			unk_0x283C0970282AA5F3(1);
			unk_0xAD9B1C8FED6B4D96(1);
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2572,01f, 4981,678f, 50,6698f, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 90,3911f);
			unk_0x64BB72494B9DF6DC(0f);
			unk_0xD815D4BD1AE9E85A(0f, 1065353216);
			unk_0x425BBE19F25A57AB(0f);
			func_32(5, 0);
			func_172(1);
			while (func_30(5))
			{
				func_3();
				func_28(10, 1);
			}
			func_287(0, 0, 0);
			func_15("CHN2_TO_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(11, 1);
			}
			func_277(0, 1, 1);
			unk_0x64BB72494B9DF6DC(0f);
			unk_0xD815D4BD1AE9E85A(-7f, 1065353216);
			break;
		
		case 6:
			if (bParam1)
			{
				func_372(2450,871f, 4960,999f, 44,3759f, 351f, 1, 0);
			}
			else
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2450,871f, 4960,999f, 44,3759f, 0, 1, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 351,3911f);
				unk_0x6C39BDF5EA5D38FC(2432,982f, 4964,823f, 41,3476f);
				func_28(325, 1);
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(-7f, 1065353216);
			}
			func_287(0, 0, 0);
			unk_0x283C0970282AA5F3(1);
			unk_0xAD9B1C8FED6B4D96(1);
			system::wait(1);
			func_32(5, 0);
			func_172(1);
			while (func_30(5))
			{
				func_3();
				func_28(12, 1);
			}
			unk_0x425BBE19F25A57AB(0f);
			func_15("CHN2_ENTER_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(13, 1);
			}
			func_277(0, 1, 1);
			if (bParam1)
			{
				func_284(0, -1, 1);
			}
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				func_278(unk_0x4A8C381C258A124D(), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1));
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_372(2435,319f, 4966,153f, 41,3476f, 104,2964f, 1, 0);
			}
			else
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2435,319f, 4966,153f, 41,3476f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 104,2964f);
				unk_0x6C39BDF5EA5D38FC(2432,982f, 4964,823f, 41,3476f);
				system::wait(1);
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(-7f, 1065353216);
			}
			unk_0x283C0970282AA5F3(1);
			unk_0xAD9B1C8FED6B4D96(1);
			func_172(1);
			func_287(0, 0, 0);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
			iLocal_177 = unk_0x0E171121A3A25363(2432,982f, 4964,823f, 41,3476f);
			while (!unk_0xF8A8852F99E201DD(iLocal_177))
			{
				iLocal_177 = unk_0x0E171121A3A25363(2432,982f, 4964,823f, 41,3476f);
				func_28(14, 1);
			}
			while (!unk_0xD0B0D1BD29678350(iLocal_177))
			{
				func_28(15, 1);
			}
			unk_0xE3D86F90541BD5EF(iLocal_177, 1);
			unk_0xBBB6D0F765409642(iLocal_177);
			iLocal_177 = 0;
			unk_0xA10F939489C3BE61(joaat("weapon_petrolcan"), 31, 0);
			unk_0x80813AC549A1E8AE("misschinese2_crystalmaze");
			while (!unk_0x92A65766A892EFC6(joaat("weapon_petrolcan")) || !unk_0xE100DD4F82A51BDE("misschinese2_crystalmaze"))
			{
				func_28(16, 1);
			}
			func_32(11, 0);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(17, 1);
			}
			unk_0x425BBE19F25A57AB(0f);
			unk_0xEC9DAA34BBB4658C(joaat("blazer"));
			while (!unk_0x6252BC0DD8A320DB(joaat("blazer")))
			{
				func_28(18, 1);
			}
			func_276(0, 7, 1);
			unk_0xB41DEC3AAC1AA107(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"), 4500, 1, 1);
			func_169(0);
			func_15("CHN2_PETROL_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(19, 1);
			}
			if (bParam1)
			{
				func_284(0, -1, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_372(2453,124f, 4952,071f, 45,125f, 285f, 1, 0);
			}
			else
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2453,124f, 4952,071f, 45,125f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 285,8625f);
				unk_0x6C39BDF5EA5D38FC(2453,124f, 4952,071f, 45,125f);
				system::wait(1);
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(-7f, 1065353216);
			}
			func_287(0, 0, 0);
			if (!unk_0xEBCB9138B2CABF20())
			{
				unk_0xADF8AA2F22A19163("chinese2_explosion_cutscene");
			}
			unk_0x283C0970282AA5F3(1);
			unk_0xAD9B1C8FED6B4D96(1);
			unk_0xEC9DAA34BBB4658C(joaat("blazer"));
			while (!unk_0x6252BC0DD8A320DB(joaat("blazer")))
			{
				func_28(20, 1);
			}
			iLocal_144 = unk_0x5779387E956077A6(joaat("blazer"), 2478,587f, 4941,803f, 43,6736f, 227,2903f, 1, 1, 0);
			unk_0x1DE99C193C7EC64B(iLocal_144, 1084227584);
			iLocal_177 = unk_0x0E171121A3A25363(2432,982f, 4964,823f, 41,3476f);
			while (!unk_0xF8A8852F99E201DD(iLocal_177))
			{
				iLocal_177 = unk_0x0E171121A3A25363(2432,982f, 4964,823f, 41,3476f);
				func_28(21, 1);
			}
			while (!unk_0xD0B0D1BD29678350(iLocal_177))
			{
				func_28(22, 1);
			}
			iLocal_164 = 3;
			unk_0xE3D86F90541BD5EF(iLocal_177, 1);
			unk_0xBBB6D0F765409642(iLocal_177);
			iLocal_177 = 0;
			while (!unk_0x6252BC0DD8A320DB(joaat("blazer")) || !unk_0xEBCB9138B2CABF20())
			{
				func_28(24, 1);
			}
			if (bParam1)
			{
				func_284(0, -1, 1);
			}
			while (!unk_0xB3157976738FC0C0("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
			{
				func_28(23, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_372(2472,3f, 4948,181f, 44,0937f, 220f, 1, 0);
			}
			else
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2472,3f, 4948,181f, 44,0937f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 220,8569f);
				unk_0x6C39BDF5EA5D38FC(2453,124f, 4952,071f, 45,125f);
				system::wait(1);
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(-7f, 1065353216);
			}
			func_31(6, 0);
			unk_0x283C0970282AA5F3(3);
			unk_0xAD9B1C8FED6B4D96(3);
			unk_0xEC9DAA34BBB4658C(joaat("blazer"));
			while ((!unk_0x6252BC0DD8A320DB(joaat("blazer")) || !unk_0xD7E1DF759CD0FFF2("FARMHOUSE_FIRE", 0, -1)) || !unk_0xD7E1DF759CD0FFF2("FARMHOUSE_FIRE_BG", 0, -1))
			{
				func_28(25, 1);
			}
			iLocal_144 = unk_0x5779387E956077A6(joaat("blazer"), 2478,587f, 4941,803f, 43,6736f, 227,2903f, 1, 1, 0);
			unk_0x1DE99C193C7EC64B(iLocal_144, 1084227584);
			func_287(0, 0, 0);
			unk_0x6C39BDF5EA5D38FC(2453,124f, 4952,071f, 45,125f);
			func_19(50, 0, 0, 1, 0);
			func_19(51, 0, 0, 1, 0);
			func_19(52, 0, 0, 1, 0);
			func_19(53, 0, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			uLocal_171 = unk_0xC8C12645F5A0E13B(2457,15f, 4968,79f, 48,677f, 45f, "DES_FarmHs");
			while (!unk_0x502101046E18AD3F(uLocal_171))
			{
				func_28(161, 1);
			}
			unk_0xBF86159B8525B1AE(uLocal_171, 9);
			unk_0xC94AE68759E1B3BD(2457,15f, 4968,79f, 48,677f, 100f, joaat("v_ret_fhglassfrm"), 0);
			unk_0xC94AE68759E1B3BD(2457,15f, 4968,79f, 48,677f, 100f, joaat("v_ret_fhglassfrmsml"), 0);
			unk_0xC94AE68759E1B3BD(2457,15f, 4968,79f, 48,677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
			if (bParam1)
			{
				func_284(0, -1, 1);
			}
			break;
		
		case 10:
			func_31(6, 0);
			if (bParam1)
			{
				func_372(2625,776f, 4802,217f, 32,5747f, 206f, 1, 0);
			}
			else
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2625,776f, 4802,217f, 32,5747f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 206,4254f);
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(-7f, 1065353216);
				unk_0x6C39BDF5EA5D38FC(2625,776f, 4802,217f, 32,5747f);
			}
			unk_0x283C0970282AA5F3(3);
			unk_0xAD9B1C8FED6B4D96(3);
			unk_0xBF86159B8525B1AE(uLocal_171, 9);
			func_19(50, 2, 0, 1, 0);
			func_19(51, 2, 0, 1, 0);
			func_19(52, 2, 0, 1, 0);
			func_19(53, 2, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			if (bParam1)
			{
				func_284(0, -1, 1);
			}
			break;
	}
}

void func_276(int iParam0, int iParam1, int iParam2)
{
	Local_387[iParam0 /*4*/].f_1 = iParam2;
	Local_387[iParam0 /*4*/] = iParam1;
}

void func_277(int iParam0, int iParam1, int iParam2)
{
	Local_388[iParam0 /*7*/].f_1 = iParam2;
	Local_388[iParam0 /*7*/] = iParam1;
}

Vector3 func_278(int iParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0,15f);
	if (unk_0xB1EAADCB692D69CE(Param1, &uVar0, 0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_279(iParam0))
	{
		unk_0xB2BD5837A8D3CEDA(iParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

bool func_279(int iParam0)
{
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	return !unk_0x1C2F771CDC87A3A5(iParam0, 0);
}

bool func_280()
{
	return Global_107514.f_2890.f_8;
}

var func_281(int iParam0)
{
	if (Global_101570 > 0)
	{
		return Global_107514.f_21[iParam0];
	}
	return Global_104530.f_21[iParam0];
}

float func_282()
{
	return Global_107514.f_2884.f_3;
}

Vector3 func_283()
{
	return Global_107514.f_2884;
}

void func_284(int iParam0, int iParam1, int iParam2)
{
	if (func_382() && func_286())
	{
		while (Global_101528 != 6)
		{
			system::wait(0);
		}
		unk_0x98E393364463951A(0);
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0x5EF96FB2D3902DC7(unk_0x4A8C381C258A124D());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xFC8BFE4B41177C22(iParam0))
				{
					if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
					{
						if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam0, 0))
						{
							unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iParam0, iParam1);
							unk_0xD815D4BD1AE9E85A(0f, 1065353216);
							unk_0x64BB72494B9DF6DC(0f);
							system::wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			}
		}
		unk_0x7919995BD2B8745C();
		func_285(0);
	}
}

void func_285(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 13);
	}
}

var func_286()
{
	return BitTest(Global_101533.f_20, 13);
}

void func_287(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (func_371())
		{
			if (func_368(func_370(), 10f, 20f, 9f, 1))
			{
				func_367();
				while (!func_366())
				{
					func_28(54455, 1);
				}
				if (bParam2)
				{
					iLocal_142 = func_365(1994,387f, 3061,94f, 46,0491f, 50f);
				}
				else
				{
					iLocal_142 = func_365(0f, 0f, 0f, 0f);
				}
			}
		}
	}
	else if (func_364())
	{
		func_362();
		while (!func_361())
		{
			func_28(544, 1);
		}
		iLocal_142 = func_288(0f, 0f, 0f, 0f);
	}
	if (bParam1)
	{
		if (func_280())
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_142, 0))
			{
				unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iLocal_142, -1);
			}
		}
	}
}

int func_288(struct<3> Param0, float fParam1)
{
	return func_289(&(Global_107514.f_2890), Param0, fParam1, 0);
}

int func_289(var uParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_360(uParam0))
	{
		if (func_168(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x26715B0ED6702C87(Param1, -816,8716f, 185,6238f, 71,40275f, -807,4894f, 189,3762f, 75,27323f, 6,5f, 0, 1))
			{
				Param1 = { -850,93f, 158,82f, 65,7f };
				fParam2 = 89,5f;
			}
		}
		if (func_359(uParam0))
		{
			unk_0x2094BC4B6731BA68(Param1, 5f, 1, 0, 0, 0);
			func_358(Param1, 5f, 0);
			iVar0 = unk_0x5779387E956077A6(uParam0->f_12.f_66, Param1, fParam2, 1, 1, 0);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				Var1 = { unk_0xD1A6A821F5AC81DB(iVar0, 1) };
				if (system::vdist2(Var1, -1151,15f, -1530,32f, 7,48925f) <= 3f)
				{
					unk_0x62C438C53BB57AFD(iVar0, Param1, 0, 0, 1);
				}
				func_329(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (unk_0xEA4F815FDC353FEF(uParam0->f_12.f_66) || unk_0xA71279EFEE0ACEB2(uParam0->f_12.f_66))
				{
					if (!unk_0x1EF8801C2AC1FE34(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					unk_0x1DE99C193C7EC64B(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(iVar0)))
						{
							func_328(uParam0->f_11, 1);
						}
						else if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(iVar0)))
						{
							func_328(uParam0->f_11, 2);
						}
					}
					unk_0x9BC299A7D57D7CAA(iVar0, 0);
					unk_0xC13B5C4CC421EA79(iVar0, 0);
					unk_0x5FE0938FDE9B0958(iVar0, 1);
					func_327(iVar0, uParam0->f_11);
				}
				else if ((!func_325(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x1B79E937E91F40C3(unk_0x1AF90EB93E0012D6(), "startup_positioning"))
				{
					iVar4 = func_324(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_317(iVar4);
					}
				}
				if (((Global_101533 != 13 && Global_101533 != 10) && Global_101533 != 11) && Global_101533 != 12)
				{
					if (unk_0x70E57E9927B6BA58(&(Global_101533.f_3)) == Global_79167)
					{
						if (uParam0->f_12.f_66 == Global_113969.f_32753.f_69[21 /*78*/].f_66)
						{
							func_314(24, 0);
							func_317(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_290(iVar0, uParam0->f_11);
				}
				unk_0x55098D9E9AD58806(uParam0->f_12.f_66);
				Var1 = { unk_0xD1A6A821F5AC81DB(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_290(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_296(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0);
		if (!unk_0xFC8BFE4B41177C22(iVar0))
		{
			iVar0 = unk_0x6B854773972E76E4(iParam0, -1);
		}
		if (unk_0xFC8BFE4B41177C22(iVar0) && !unk_0x4FAFF4BCB7633475(iVar0))
		{
			if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113969.f_2366.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x4B423FAA24E8ABF0(iParam0) == Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xD6F9DEE4765092A9(&(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(iParam0), &(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113969.f_32753.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xD6F9DEE4765092A9(&(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(iParam0), &(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113969.f_32753.f_5590 = iParam1;
	Global_79084 = iParam0;
	Global_113969.f_32753.f_5588 = 1;
	func_291(iParam0, &(Global_113969.f_32753.f_5510));
}

void func_291(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_295(uParam1);
		uParam1->f_66 = unk_0x4B423FAA24E8ABF0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xCA7159F2C5FF745A(iParam0), 16);
		*uParam1 = unk_0x4F06416A18248EA0(iParam0);
		unk_0xFF4B16F297D9CB3E(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x741D9B0685E67684(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9D35AABAEE206518(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xDA63CE76F9AAB439(iParam0);
		uParam1->f_67 = unk_0xA089B04A208DBD0B(iParam0);
		uParam1->f_69 = unk_0x6A375D21624F9187(iParam0);
		uParam1->f_70 = unk_0x38A100E16C95161B(iParam0);
		unk_0x04434FA56DED5500(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x64FEACF0AD019F1F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xF1B79038130E3C08(iParam0, 2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 28);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 3))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 29);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 30);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_294(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7943BD10E2A03FAC(iParam0, 0))
		{
			uParam1->f_68 = unk_0x54DA32C15F7A6ABA(iParam0);
		}
		if (unk_0x00C6FDED3EB75117(uParam1->f_66))
		{
			if (unk_0x61F41693A4648B46(iParam0))
			{
				switch (unk_0x68F7F7C5DF6717F8(iParam0))
				{
					case 3:
					case 0:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xE6BE8A525BA6BD44(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 9);
		}
		if (unk_0xFDA2576D37032738(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 10);
		}
		if (unk_0xA9D64A14804D119B(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 13);
			unk_0xD9B9D4D1CCED7CA6(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x2C0B2BB7913E8DBA(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 12);
		}
		func_293(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5318DF85BEB6B95F(iParam0, iVar0 + 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_292(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x0BCE48C8677F9824(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 11);
		}
		if (unk_0xD130E7CDEE903624(iParam0, "IgnoredByQuickSave") && unk_0x3F40AE65F056B43D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 27);
		}
	}
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
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
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_293(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x90E3EAFF8AAA1A42(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				switch (unk_0xD6BA8C57BDF9DEB9(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x94C9CD3D66808551(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_295(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_296(int iParam0)
{
	if ((((((((((!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0)) || func_78(iParam0, 0, 0)) || func_78(iParam0, 1, 0)) || func_78(iParam0, 2, 0)) || func_313(iParam0) != 145) || func_312(iParam0)) || func_311(iParam0)) || func_310(iParam0)) || func_309(iParam0)) || !func_297(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		if (func_311(iParam0))
		{
		}
		if (func_311(iParam0))
		{
		}
		if (func_78(iParam0, 0, 0))
		{
		}
		if (func_78(iParam0, 1, 0))
		{
		}
		if (func_78(iParam0, 2, 0))
		{
		}
		if (func_313(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_297(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_298(iParam0, 0, -1))
	{
		return 0;
	}
	if (((unk_0xEA4F815FDC353FEF(iParam0) || unk_0x00C6FDED3EB75117(iParam0)) || unk_0xBA16CD57E37AC32A(iParam0)) || unk_0xAE447CBB33B40CA3(iParam0))
	{
		return 0;
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
		case joaat("firetruk"):
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
		case joaat("towtruck3"):
		case joaat("towtruck4"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_298(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xAD1840C2E6AF7D5E(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x76CD105BCAC6EB9F()) || (iParam0 == joaat("buffalo3") && !unk_0x76CD105BCAC6EB9F())) || (iParam0 == joaat("gauntlet2") && !unk_0x76CD105BCAC6EB9F())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x76CD105BCAC6EB9F()))
	{
		if (!func_308())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x62B04373BFAD9B85())
		{
			if (unk_0x92EAC7DBD5D1D750(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x4BFA043D318BF9AE(Var1.f_0))
					{
						return 0;
					}
				}
				else
				{
					iVar0++;
				}
				if (iParam0 == joaat("blimp"))
				{
					if ((((!func_307() && !func_306()) && !func_305()) && !func_304()) && !func_308())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_303() || unk_0x761778199FE1211C()) || func_302())
					{
					}
					else if (!func_305())
					{
						return 0;
					}
				}
				if (bParam1)
				{
					if (!func_301(iParam0, iParam2))
					{
						return 0;
					}
				}
				if (!func_299(iParam0))
				{
					return 0;
				}
				return 1;
			}

int func_299(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_300())
	{
		return 1;
	}
	unk_0x8A77EAFEB55D476D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
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
			return 1;
			break;
	}
	if (!unk_0xABE86AEC64720F91(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_300()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_301(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_2707347)
	{
		return 1;
	}
	if ((!Global_2707348 && iParam1 >= 0) && iParam1 <= 517)
	{
		if (BitTest(Global_1586521[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	iVar0 = unk_0x39D1D336459711BE();
	iVar1 = 0;
	switch (iParam0)
	{
		case -1240172147:
			iVar1 = Global_262145.f_35588[0];
			break;
		
		case -143587026:
			iVar1 = Global_262145.f_35588[1];
			break;
		
		case 1690421418:
			iVar1 = Global_262145.f_35588[2];
			break;
		
		case 258105345:
			iVar1 = Global_262145.f_35588[3];
			break;
		
		case 1249425552:
			iVar1 = Global_262145.f_35588[4];
			break;
		
		case -986656474:
			iVar1 = Global_262145.f_35588[5];
			break;
		
		case 1307736079:
			iVar1 = Global_262145.f_35588[6];
			break;
		
		case 1737348074:
			iVar1 = Global_262145.f_35588[7];
			break;
		
		case -223461503:
			iVar1 = Global_262145.f_35588[8];
			break;
		
		case 1121330119:
			iVar1 = Global_262145.f_35588[9];
			break;
		
		case -1628000569:
			iVar1 = Global_262145.f_35588[10];
			break;
		
		case -946047670:
			iVar1 = Global_262145.f_35588[11];
			break;
		
		case 1579902654:
			iVar1 = Global_262145.f_35588[12];
			break;
		
		case -773802025:
			iVar1 = Global_262145.f_35588[13];
			break;
		
		case 1968807591:
			iVar1 = Global_262145.f_35588[14];
			break;
		
		case -1958428933:
			iVar1 = Global_262145.f_35588[15];
			break;
		
		case 1881415402:
			iVar1 = Global_262145.f_35588[16];
			break;
		
		case -999594302:
			iVar1 = Global_262145.f_35588[17];
			break;
		
		case -1896488056:
			iVar1 = Global_262145.f_35588[18];
			break;
		
		case 1452003510:
			iVar1 = Global_262145.f_35588[19];
			break;
		
		case -1444856003:
			iVar1 = Global_262145.f_35588[20];
			break;
	}
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

var func_302()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_303()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_304()
{
	return 0;
}

int func_305()
{
	return 1;
}

int func_306()
{
	return 1;
}

int func_307()
{
	if (unk_0x087611B922B50F13(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_308()
{
	var uVar0;
	
	if (Global_152848 == 2)
	{
		return 1;
	}
	else if (Global_152848 == 3)
	{
		return 0;
	}
	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 6);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x76CA59C648318506())
				{
					uVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, false);
					unk_0xED11291F7127888E(uVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x76CA59C648318506())
	{
		if (BitTest(unk_0x38640D2193CB547F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_309(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	sVar1 = unk_0xCA7159F2C5FF745A(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x1B79E937E91F40C3(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_298(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_310(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98874[iVar0]))
		{
			if (Global_98874[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_311(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]) && unk_0xD9F5E1FEFD1329E4(Global_98844[iVar0], 0))
			{
				if (Global_98844[iVar0] == iParam0 && unk_0x4B423FAA24E8ABF0(Global_98844[iVar0]) == unk_0x4B423FAA24E8ABF0(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_312(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[24]))
	{
		if (iParam0 == Global_78179.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_78179.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_313(int iParam0)
{
	int iVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 145;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				return Global_98854[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_314(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_316(iParam0, 0))
		{
			func_315(iParam0, 1, 0);
			func_315(iParam0, 2, 0);
			func_315(iParam0, 3, 0);
			func_315(iParam0, 4, 0);
			func_315(iParam0, 0, 1);
			Global_78179[iParam0] = 1;
		}
	}
	else
	{
		func_315(iParam0, 0, 0);
	}
}

void func_315(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_32753[iParam0]), bParam1);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_32753[iParam0]), bParam1);
	}
}

int func_316(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_32753[iParam0], iParam1);
}

void func_317(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_321(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_78179.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xD9F5E1FEFD1329E4(Global_78179.f_139[iParam0], 0))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Global_78179.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xEE0BCDB1B5E36BCB(Global_78179.f_139[iParam0], 1, 1);
				unk_0x8C1F7D7A31B2A38E(&(Global_78179.f_139[iParam0]));
			}
		}
		Global_78179[iParam0] = 1;
		if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_316(iParam0, 0)) && Global_79088.f_66 == 0) && Global_113969.f_32753.f_1958[Global_78179.f_555[0 /*21*/].f_14] != 0) && Global_113969.f_32753.f_1958[Global_78179.f_555[0 /*21*/].f_14] > 3) && (!func_319(0, Global_78179.f_555[0 /*21*/].f_12) || !func_319(1, Global_78179.f_555[0 /*21*/].f_12)))
			{
				func_318(&(Global_113969.f_32753.f_69[Global_78179.f_555[0 /*21*/].f_14 /*78*/]), &Global_79088);
				Global_79166 = Global_113969.f_32753.f_5591;
			}
			func_314(iParam0, 0);
		}
	}
}

void func_318(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_319(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_320(&(Global_113969.f_32753.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_298(Global_113969.f_32753.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_320(var uParam0)
{
	return *uParam0;
}

int func_321(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831,8538f, 172,1154f, 69,9058f };
			uParam0->f_3 = 157,5705f;
			uParam0->f_4 = func_322(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_322(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_322(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_322(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_322(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_322(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_322(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_322(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_322(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459,509f, -1380,45f, 78,3259f };
			uParam0->f_3 = 99,6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518,947f, -1387,865f, -0,5134f };
			uParam0->f_3 = 98,3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353,0926f, 3577,593f, 32,351f };
			uParam0->f_3 = 16,6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652,004f, -3142,348f, 12,9921f };
			uParam0->f_3 = 329,1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271,649f, -3380,685f, 12,9451f };
			uParam0->f_3 = 329,5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735,586f, 3294,531f, 40,1651f };
			uParam0->f_3 = 194,9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846,27f, -1363,19f, 0,22f };
			uParam0->f_3 = 108,78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849,47f, -1354,99f, 0,24f };
			uParam0->f_3 = 109,84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852,47f, -1346,2f, 0,21f };
			uParam0->f_3 = 108,76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745,857f, -1433,904f, 4,0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756,2952f, -1441,609f, 2,9184f };
			uParam0->f_18 = { -738,0606f, -1423,068f, 8,2835f };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761,8486f, -1453,829f, 4,0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772,8158f, -1459,957f, 3,2894f };
			uParam0->f_18 = { -754,3353f, -1440,836f, 8,3334f };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769,3f, 3244f, 41,1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196,2794f, -1020,479f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199,8872f, -1020,048f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203,6006f, -1019,776f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 11);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723,2515f, -632,0496f, 27,1484f };
			uParam0->f_3 = 12,9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 11);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51,23f, 3111,9f, 24,95f };
			uParam0->f_3 = 46,78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55,7984f, -1096,586f, 25,4223f };
			uParam0->f_3 = 308,0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892,93f, 3192,37f, 11,66f };
			uParam0->f_3 = -132,35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744,308f, 3270,673f, 40,2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751,44f, 3322,643f, 42,1855f };
			uParam0->f_3 = 268,134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377,104f, -2076,2f, 52f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380,42f, -2072,77f, 51,7607f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("trash");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359,389f, 3618,441f, 33,8907f };
			uParam0->f_3 = 108,2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693,1154f, -1018,155f, 21,6387f };
			uParam0->f_3 = 177,6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73,6963f, 495,124f, 143,5226f };
			uParam0->f_3 = 155,5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67,6314f, 891,8266f, 234,5348f };
			uParam0->f_3 = 294,993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533,9048f, -169,2469f, 53,7005f };
			uParam0->f_3 = 1,2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726,8914f, -408,6952f, 34,0416f };
			uParam0->f_3 = 267,7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321,519f, 261,3993f, 61,5709f };
			uParam0->f_3 = 350,7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267,999f, 451,6463f, 93,7071f };
			uParam0->f_3 = 48,9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062,076f, -226,7637f, 37,157f };
			uParam0->f_3 = 234,2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68,16914f, -1558,958f, 29,46904f };
			uParam0->f_3 = 49,90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589,4399f, 2736,708f, 42,03316f };
			uParam0->f_3 = -175,7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488,774f, -344,5721f, 34,36356f };
			uParam0->f_3 = 82,4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288,8808f, -585,4728f, 43,15428f };
			uParam0->f_3 = -20,80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304,8294f, -1383,674f, 31,67744f };
			uParam0->f_3 = -41,11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126,194f, -1481,486f, 34,7016f };
			uParam0->f_3 = -91,43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598,36f, 5252,84f, 0f };
			uParam0->f_3 = 28,14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602,62f, 5260,37f, 0,86f };
			uParam0->f_3 = 25,32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116,571f, 4763,279f, 40,1596f };
			uParam0->f_3 = 198,723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133,21f, 120,2f, 80,9f };
			uParam0->f_3 = 134,4f;
			if (func_308())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), true);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806,31f, -2679,65f, 13,9f };
			uParam0->f_3 = 150,54f;
			if (func_308())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), true);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985,85f, 3828,96f, 31,98f };
			uParam0->f_3 = -16,58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870,75f, 4464,67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257,729f, -2564,474f, 41,717f };
			uParam0->f_3 = 284,5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643,2823f, 3014,152f, 42,2733f };
			uParam0->f_3 = 128,0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38,9368f, 850,8677f, 196,3f };
			uParam0->f_3 = 311,6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333,875f, 4262,226f, 30,78f };
			uParam0->f_3 = 262,5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113969.f_32753.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678,8f, 3229,6f, 41,8f };
				uParam0->f_3 = 106,0906f;
			}
		}
		if (!func_168(Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113969.f_32753.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113969.f_32753.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_168(Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_168(Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_322(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_50(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_323(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_323(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113969.f_9088.f_99.f_58[128] && !Global_113969.f_9088.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113969.f_9088.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113969.f_9088.f_99.f_58[118])
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
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_324(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0xFC8BFE4B41177C22(Global_78179.f_484[iVar0]) && !unk_0x1C2F771CDC87A3A5(Global_78179.f_484[iVar0], 0)) && unk_0xD9F5E1FEFD1329E4(Global_78179.f_484[iVar0], 0))
		{
			unk_0xFF4B16F297D9CB3E(iParam0, &iVar1, &iVar2);
			unk_0xFF4B16F297D9CB3E(Global_78179.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x4B423FAA24E8ABF0(iParam0) == unk_0x4B423FAA24E8ABF0(Global_78179.f_484[iVar0]) && unk_0xA089B04A208DBD0B(iParam0) == unk_0xA089B04A208DBD0B(Global_78179.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_325(int iParam0, struct<3> Param1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_326(iParam0, Global_78179.f_139[38], 0))
			{
				func_317(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_326(iParam0, Global_78179.f_139[43], 1))
			{
				func_317(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xD65B4E942A960E26(unk_0x4A8C381C258A124D(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_326(iParam0, uVar1[iVar3], 1) && func_238(unk_0xD1A6A821F5AC81DB(uVar1[iVar3], 1), 2136,133f, 4780,563f, 39,9702f, 5f, 0))
				{
					if ((!bParam2 || func_168(Param1, 0f, 0f, 0f, 0)) || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iParam0, 1), unk_0xD1A6A821F5AC81DB(uVar1[iVar3], 1), 1) < 10f)
					{
						unk_0x8C1F7D7A31B2A38E(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0xFC8BFE4B41177C22(Global_78179.f_484[14]) && unk_0xD9F5E1FEFD1329E4(iParam0, 0)) && unk_0xD9F5E1FEFD1329E4(Global_78179.f_484[14], 0))
			{
				if (unk_0x4B423FAA24E8ABF0(Global_78179.f_484[14]) == joaat("luxor2") && unk_0xA089B04A208DBD0B(iParam0) == unk_0xA089B04A208DBD0B(Global_78179.f_484[14]))
				{
					func_317(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xFC8BFE4B41177C22(Global_78179.f_484[20]) && unk_0xD9F5E1FEFD1329E4(iParam0, 0)) && unk_0xD9F5E1FEFD1329E4(Global_78179.f_484[20], 0))
			{
				if (unk_0x4B423FAA24E8ABF0(Global_78179.f_484[20]) == joaat("swift2") && unk_0xA089B04A208DBD0B(iParam0) == unk_0xA089B04A208DBD0B(Global_78179.f_484[20]))
				{
					func_317(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_326(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xFC8BFE4B41177C22(iParam1) && !unk_0x1C2F771CDC87A3A5(iParam1, 0)) && unk_0xD9F5E1FEFD1329E4(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xFF4B16F297D9CB3E(iParam0, &iVar0, &iVar1);
			unk_0xFF4B16F297D9CB3E(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_327(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			Global_98844[iVar0] = iParam0;
			Global_98854[iVar0] = iParam1;
			Global_98864[iVar0] = unk_0x4B423FAA24E8ABF0(iParam0);
			if (unk_0xD3CE8D1E6564B011(Global_98864[iVar0]))
			{
				Global_98892[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_98892[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_328(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			if (iParam0 == 145 || Global_98854[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x4B423FAA24E8ABF0(Global_98844[iVar0]) == func_322(iParam0, iParam1))
				{
					if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Global_98844[iVar0], 0))
					{
						unk_0xEE0BCDB1B5E36BCB(Global_98844[iVar0], 0, 1);
						unk_0x8C1F7D7A31B2A38E(&(Global_98844[iVar0]));
						Global_98854[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_329(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_350(iParam0))
		{
			if (unk_0x70E57E9927B6BA58(&(uParam1->f_1)) != 0)
			{
				unk_0x3FEAE59CDE6D3946(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x20DE4C1439E0FC92())
			{
				unk_0x05D3F682DDA06C20(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_292(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_292(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_292(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_292(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_292(iVar2)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_292(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_292(iVar3)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_292(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_292(iVar4)))
					{
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_292(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("surfer3"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_292(iVar5)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_292(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_292(4)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_292(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0x94C9CD3D66808551(iParam0, 10) != 0)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_292(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_292(iVar6)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_292(iVar6));
				}
				iVar6++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xE0ACB5BC9D603F02(iParam0, 0);
			if (unk_0x94C9CD3D66808551(iParam0, 5) != -1)
			{
				unk_0xE0ACB5BC9D603F02(iParam0, 1);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			unk_0x84F5FD9CD27457EE(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x963D9A7202C06F65(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			unk_0x593A3115B8AE759B(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x588D8FDC61F7CFAD(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_348(uParam1->f_5) || func_348(uParam1->f_6))
			{
			}
			else
			{
				unk_0xD133EF7430EDCD09(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xBB361D7264AC4FD8(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_347(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_346())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x5DA0536AEAD1FF31(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_294(uParam1->f_66))
		{
			unk_0xFE620ED8E0A3C209(iParam0, 0);
		}
		else
		{
			unk_0xFE620ED8E0A3C209(iParam0, 0);
			unk_0xFE620ED8E0A3C209(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			unk_0x439C904840715871(iParam0, 0);
			unk_0x519F76A38952BBD0(iParam0, 0);
		}
		if (bParam2)
		{
			unk_0x0B74F181ADFC39BF(iParam0, uParam1->f_70);
		}
		unk_0xEAB8A43F6621850F(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xE62930EC6FAABCA5(iParam0, 2, BitTest(uParam1->f_77, 28));
		unk_0xE62930EC6FAABCA5(iParam0, 3, BitTest(uParam1->f_77, 29));
		unk_0xE62930EC6FAABCA5(iParam0, 0, BitTest(uParam1->f_77, 30));
		unk_0xE62930EC6FAABCA5(iParam0, 1, BitTest(uParam1->f_77, 31));
		unk_0xD37CA6D6F8993BB9(iParam0, BitTest(uParam1->f_77, 10));
		if (unk_0xBA3ECE95D3094B0F(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xA1C03303EC67320B(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(iParam0)))
			{
				if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_345(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_345(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x7943BD10E2A03FAC(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xD6B15DF382A594C7(iParam0, 1);
			}
			else
			{
				unk_0x232B023FE4D977E2(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_337(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xBA16CD57E37AC32A(uParam1->f_66) && !unk_0xEA4F815FDC353FEF(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_292(iVar7 + 1)))
				{
					if (!unk_0x5318DF85BEB6B95F(iParam0, iVar7 + 1))
					{
						unk_0xD772F6AA66750D2B(iParam0, iVar7 + 1, 0);
					}
				}
				else if (unk_0x5318DF85BEB6B95F(iParam0, iVar7 + 1))
				{
					unk_0xD772F6AA66750D2B(iParam0, iVar7 + 1, 1);
				}
				iVar7++;
			}
		}
		if ((unk_0x4B423FAA24E8ABF0(iParam0) == joaat("sheava") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("omnis")) || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("le7b"))
		{
			if (unk_0x94C9CD3D66808551(iParam0, 0) == -1)
			{
				unk_0xD772F6AA66750D2B(iParam0, 1, 0);
			}
		}
		if ((((func_332() && unk_0x00C6FDED3EB75117(uParam1->f_66)) && unk_0x8EC15ED9ECD1E9D0(iParam0)) && !unk_0x2E6A27037F1DC473(iParam0, joaat("avenger"))) && !unk_0x2E6A27037F1DC473(iParam0, func_331(1)))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (!BitTest(uParam1->f_77, 22) && func_330(iParam0, 5f))
				{
					unk_0xC2A036647DD761E4(iParam0, 3);
				}
				else
				{
					unk_0xC2A036647DD761E4(iParam0, 2);
				}
			}
			else
			{
				unk_0xC2A036647DD761E4(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			unk_0xF46ECFD5526E8FF7(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xF46ECFD5526E8FF7(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_330(int iParam0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
		if (unk_0xB1EAADCB692D69CE(Var0, &fVar1, 0, 0))
		{
			if (unk_0x1D5CD3EAAA7422B0((Var0.f_2 - fVar1)) > fParam1)
			{
				return 1;
			}
		}
		else if (Var0.f_2 > (unk_0xFAF53F2F65D5EE26(Var0.f_0, Var0.f_1) + fParam1))
		{
			return 1;
		}
		else if (Var0.f_2 > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_331(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_332()
{
	if ((((Global_4718592.f_117195 == 6 || Global_4718592.f_117195 == 7) || Global_4718592.f_117195 == 18) || Global_4718592.f_117195 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_335(7))
	{
		if (func_334(Global_2672855.f_4.f_16) || func_333(Global_2672855.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_333(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1882632[iVar0 /*146*/].f_82.f_63 != 0;
	}
	return 0;
}

int func_334(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_41(iParam0, 9);
	}
	return 0;
}

bool func_335(int iParam0)
{
	return func_336(&(Global_2672855.f_194), iParam0);
}

var func_336(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_337(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x90E3EAFF8AAA1A42(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xB5AD06DDA85E2E8F(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0xF5501FF9869DAC7C(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0xF5501FF9869DAC7C(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x89D1FDCA3735A1E0(*iParam0, 255);
				}
				else
				{
					unk_0x89D1FDCA3735A1E0(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0xF5501FF9869DAC7C(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x94C9CD3D66808551(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xC87E4FAD00AEDD4B(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					unk_0x8450270DC5896D39(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					unk_0x8450270DC5896D39(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_343(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					unk_0x8450270DC5896D39(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_342(unk_0x4B423FAA24E8ABF0(*iParam0), 1) && unk_0x94C9CD3D66808551(*iParam0, 24) != func_340(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x8450270DC5896D39(*iParam0, 24, func_340(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_339(iParam0);
	if (func_338(*iParam0))
	{
		unk_0xD05AF216D970F274(*iParam0, 1);
		unk_0x5FE0938FDE9B0958(*iParam0, 1);
	}
	return 1;
}

int func_338(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0)) && unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
	{
		unk_0xB5AD06DDA85E2E8F(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x94C9CD3D66808551(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x1340575A0EEE0622(iParam0, iVar1, unk_0x94C9CD3D66808551(iParam0, iVar1)), 32);
				iVar2 = unk_0x70E57E9927B6BA58(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x70E57E9927B6BA58("MNU_CAGE") || iVar2 == unk_0x70E57E9927B6BA58("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_339(var uParam0)
{
	switch (unk_0x4B423FAA24E8ABF0(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x94C9CD3D66808551(*uParam0, 4) == 0)
			{
				unk_0x8450270DC5896D39(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xC87E4FAD00AEDD4B(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x8450270DC5896D39(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_340(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		switch (unk_0x4B423FAA24E8ABF0(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = func_341(iParam0, 38) + 1;
		iVar1 = func_341(iParam0, 24) + 1;
		fVar2 = (system::to_float(iParam1 + 1) / system::to_float(iVar0));
		iVar3 = (system::floor((system::to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_341(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((unk_0x441B9C85D0FFA9ED(Global_152860) && unk_0x2E6A27037F1DC473(iParam0, Global_152860)) && Global_152861 == iParam1)
	{
		return Global_152862;
	}
	iVar0 = (unk_0x5B59C12A02157D00(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_343(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_342(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14701)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14702)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14700)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14703)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14705)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14704)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18948)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18950)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18954)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18951)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18958)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18956)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18961)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20834)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20835)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_343(int iParam0, int iParam1, int iParam2)
{
	if (!func_344() && unk_0xAF82FE1B3E949337(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_344()
{
	return 0;
}

void func_345(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
	{
		unk_0xB5AD06DDA85E2E8F(iParam0, 0);
		iVar0 = unk_0x94C9CD3D66808551(iParam0, 24);
		iVar1 = unk_0xEFDD8C5443F6C9E4(iParam0, 24);
		unk_0xE33678A9AE50A01B(iParam0, uParam1);
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("tornado6") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xC87E4FAD00AEDD4B(iParam0, 24);
		}
		else
		{
			unk_0x8450270DC5896D39(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_346()
{
	return unk_0x087611B922B50F13(joaat("mpindependence"));
}

int func_347(int iParam0)
{
	var uVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
			{
				if (unk_0xD130E7CDEE903624(iParam0, "MPBitset"))
				{
					uVar0 = unk_0xE2F6FE9B61232165(iParam0, "MPBitset");
				}
				return BitTest(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_348(int iParam0)
{
	if (!func_344() && func_349(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_349(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_350(int iParam0)
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!func_356(unk_0x259BE71D8A81D4FA(), -1))
		{
			iParam0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		}
	}
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	if (func_352(unk_0x259BE71D8A81D4FA()) == 3)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (func_351(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_351(int iParam0)
{
	if (unk_0x77B62CAA5DF0922A("FMDeliverableID", 3))
	{
		if (unk_0xD130E7CDEE903624(iParam0, "FMDeliverableID"))
		{
			return unk_0xE2F6FE9B61232165(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_352(int iParam0)
{
	if (func_355(iParam0) == 233)
	{
		return func_353(iParam0);
	}
	return -1;
}

int func_353(int iParam0)
{
	if (func_354(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

int func_354(int iParam0, int iParam1)
{
	if (func_197(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_355(int iParam0)
{
	if (func_197(iParam0))
	{
		if (func_354(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_356(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_357(iParam0, 1, 1))
	{
		if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(iParam0), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iParam0), 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (unk_0x4A8C381C258A124D() == unk_0xFD5C5BBD1FE92BB7(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_357(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x75EAB09F5E974116(iParam0))
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

void func_358(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_321(&(Global_78179.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xED977E2AE2CB16EE(Param0, Global_78179.f_555[0 /*21*/], iParam2) <= fParam1)
			{
				func_317(iVar0);
			}
		}
		iVar0++;
	}
}

int func_359(var uParam0)
{
	if (func_360(uParam0))
	{
		if (unk_0x6252BC0DD8A320DB(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_360(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_298(uParam0->f_12.f_66, 0, -1))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_238(*uParam0, 1694,62f, 3276,27f, 41,31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_361()
{
	return func_359(&(Global_107514.f_2890));
}

void func_362()
{
	func_363(&(Global_107514.f_2890));
}

void func_363(var uParam0)
{
	if (func_360(uParam0))
	{
		unk_0xEC9DAA34BBB4658C(uParam0->f_12.f_66);
	}
}

bool func_364()
{
	return func_360(&(Global_107514.f_2890));
}

int func_365(struct<3> Param0, float fParam1)
{
	return func_289(&(Global_104530.f_2890), Param0, fParam1, 0);
}

bool func_366()
{
	return func_359(&(Global_104530.f_2890));
}

void func_367()
{
	func_363(&(Global_104530.f_2890));
}

int func_368(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		Param1 = { func_369() };
	}
	unk_0xC93BAF616F1C680F(iParam0, &Var0, &Var1);
	if ((Var1.f_0 - Var0.f_0) > Param1.f_0)
	{
		return 0;
	}
	else if ((Var1.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var1.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

Vector3 func_369()
{
	return 2,55f, 5,665f, 2,55f;
}

int func_370()
{
	return Global_104530.f_2890.f_12.f_66;
}

bool func_371()
{
	return func_360(&(Global_104530.f_2890));
}

void func_372(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (func_382())
	{
		unk_0xAECC5FA98C879D67(0);
		unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 2);
		unk_0x98E393364463951A(1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
		}
		Global_101529 = { Param0 };
		Global_101532 = fParam1;
		Global_101528 = 1;
		if (iParam2 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 14);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 24);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 24);
		}
		func_285(1);
	}
}

int func_373(var uParam0, int iParam1, struct<3> Param2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_50(iParam1))
	{
		iVar0 = func_375(iParam1);
		unk_0xEC9DAA34BBB4658C(iVar0);
		if (unk_0x6252BC0DD8A320DB(iVar0))
		{
			if (unk_0xFC8BFE4B41177C22(*uParam0))
			{
				unk_0x734A9F4537A31459(uParam0);
			}
			*uParam0 = unk_0xB1DBFEB95C0EFB88(26, iVar0, Param2, iParam3, 0, 0);
			unk_0x77EFA99E6A8FFC43(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0xC0120BBCC298EA2F(*uParam0, 3) == 0)
				{
					unk_0xD1C578C204015E1F(*uParam0, 5, 2, 0, 0);
				}
			}
			func_374(*uParam0, iParam1);
			if (bParam4)
			{
				unk_0x55098D9E9AD58806(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_374(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_97347[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_375(int iParam0)
{
	if (!func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_376(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_184();
	func_185();
	func_186();
	func_183();
	unk_0xE9DE8F39ED85311E();
	unk_0x283C0970282AA5F3(3);
	unk_0xAD9B1C8FED6B4D96(3);
	iLocal_390 = 0;
	iLocal_165 = 0;
	iLocal_161 = 0;
	iLocal_148 = 0;
	iLocal_112 = 0;
	iLocal_162 = 0;
	iLocal_372 = 0;
	iLocal_373 = 0;
	while (unk_0x0CB7695268A7F50F())
	{
		if (unk_0xFD216000DC314A92())
		{
			unk_0xB479965CBAA3EAE1(1);
		}
		else
		{
			unk_0xDD291722ADDCBD60();
		}
		func_28(0, 0);
	}
	if (unk_0xB0E14182FAD64944(uLocal_166))
	{
		unk_0xDDFB0941A19702BE(uLocal_166);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_167)
	{
		if (unk_0xB0E14182FAD64944(iLocal_167[iVar0]))
		{
			unk_0xDDFB0941A19702BE(iLocal_167[iVar0]);
		}
		iVar0++;
	}
	iLocal_401 = 0;
	iLocal_402 = 0;
	iLocal_403 = 0;
	sLocal_404 = "";
	sLocal_405 = "";
	func_190();
	iLocal_61 = 0;
	iLocal_62 = 0;
	iLocal_63 = 0;
	unk_0xF65CE7345EAFDBE2(1f);
	func_380();
	unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
	unk_0x3AA8CFEBC938A945(0);
	func_192(0, 1, 1, 0, 0, 0, 0);
	func_28(32, 0);
	unk_0xE6AC149D1121535D(1f);
	unk_0x406CBCEA35499884();
	func_219(&Local_182, 1, 0);
	func_72();
	func_70();
	unk_0x830C51B62E7CD5B2();
	unk_0xF6ECB54A7941386F(0);
	unk_0x33B6B083EA6305A5(Vector(44,8113f, 4961,045f, 2469,985f) - Vector(100f, 100f, 100f), Vector(44,8113f, 4961,045f, 2469,985f) + Vector(100f, 100f, 100f), 1);
	if (iParam0 == 0)
	{
		unk_0xE226F16D30AF5945(2457,15f, 4968,79f, 48,677f, 100f, joaat("v_ret_fhglassfrm"), 1);
		unk_0xE226F16D30AF5945(2457,15f, 4968,79f, 48,677f, 100f, joaat("v_ret_fhglassfrmsml"), 1);
		unk_0xE226F16D30AF5945(2457,15f, 4968,79f, 48,677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
		Global_41777 = 1;
	}
	unk_0xAE9B78A0E33292A8("AZL_CHN2_METH_LAB_FARM_FIRE", 0, 1);
	if (iParam0 != 3)
	{
		unk_0x7DA9B8DF3A97D040("Chinese2_Lunch", 1);
		unk_0x7DA9B8DF3A97D040("CHINESE2_HILLBILLIES", 0);
	}
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
	if (iLocal_377 != -1)
	{
		if (unk_0xF935563454D3B338(iLocal_377))
		{
			unk_0x8E99C7AF6C6639AB(iLocal_377);
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_378(unk_0x4A8C381C258A124D(), 2);
	}
	iVar0 = 0;
	while (iVar0 < Local_111.f_0)
	{
		if (iVar0 == 14)
		{
		}
		if (unk_0xFC8BFE4B41177C22(Local_111[iVar0 /*33*/]))
		{
			if (!unk_0x4FAFF4BCB7633475(Local_111[iVar0 /*33*/]))
			{
				if (iParam0 == 3)
				{
					unk_0x19626F992DC71FB9(Local_111[iVar0 /*33*/]);
				}
			}
			if (iParam0 == 0 || iParam0 == 2)
			{
				if (iVar0 == 14)
				{
				}
				if (!unk_0x4FAFF4BCB7633475(Local_111[iVar0 /*33*/]))
				{
					unk_0x44FB298D6382876D(Local_111[iVar0 /*33*/], 1);
					unk_0xF09E30AF1B8FB379(&(Local_111[iVar0 /*33*/]));
				}
			}
			else
			{
				if (iVar0 == 14)
				{
				}
				unk_0x734A9F4537A31459(&(Local_111[iVar0 /*33*/]));
			}
		}
		Local_111[iVar0 /*33*/].f_3 = 0;
		Local_111[iVar0 /*33*/].f_4 = 0;
		Local_111[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_111[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_111[iVar0 /*33*/].f_2 = 25;
		Local_111[iVar0 /*33*/].f_5 = 0;
		Local_111[iVar0 /*33*/].f_12 = 0f;
		Local_111[iVar0 /*33*/].f_13 = 0f;
		Local_111[iVar0 /*33*/].f_14 = 0;
		Local_111[iVar0 /*33*/].f_15 = 0;
		Local_111[iVar0 /*33*/].f_17 = 0;
		Local_111[iVar0 /*33*/].f_16 = 0;
		Local_111[iVar0 /*33*/].f_21 = 0;
		Local_111[iVar0 /*33*/].f_22 = 0;
		Local_117[iVar0 /*24*/].f_3 = 1;
		if (unk_0xFC8BFE4B41177C22(Local_111[iVar0 /*33*/].f_20))
		{
			unk_0x51C8BEA2005931AB(&(Local_111[iVar0 /*33*/].f_20));
		}
		unk_0x2B1BDC32466B40A9(Local_111[iVar0 /*33*/].f_24);
		iVar0++;
	}
	if (iParam0 != 3)
	{
		func_377();
	}
	else
	{
		func_210(&Local_117, &uLocal_201, cLocal_129, 12f, 2482,197f, 4975,367f, 44,7288f, 121f, 1);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_371))
	{
		unk_0x51C8BEA2005931AB(&iLocal_371);
	}
	if (iParam0 != 0 && iParam0 != 2)
	{
		unk_0x2094BC4B6731BA68(2438,433f, 4970,416f, 53,1778f, 450f, 1, 0, 0, 0);
		unk_0xD7ABE01242C5B8E3(2442,69f, 4970,348f, 46,33f, 30f);
	}
	iVar0 = 0;
	while (iVar0 < Local_151.f_0)
	{
		if ((Local_151[iVar0 /*6*/].f_1 == 1 && Local_151[iVar0 /*6*/].f_3 == 0) || Local_151[iVar0 /*6*/].f_3 == 0)
		{
			Local_151[iVar0 /*6*/].f_2 = -1;
			Local_151[iVar0 /*6*/].f_4 = 0;
			Local_151[iVar0 /*6*/].f_5 = 0;
			Local_151[iVar0 /*6*/].f_1 = 0;
		}
		iVar0++;
	}
	func_3();
	if (unk_0xC450B06E5AAA0985(uLocal_176))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_176);
	}
	iVar1 = 0;
	while (iVar1 < iLocal_168)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_168[iVar1]))
		{
			unk_0x51C8BEA2005931AB(&(iLocal_168[iVar1]));
		}
		iVar1++;
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_142))
	{
		if (iParam0 != 0 && iParam0 != 2)
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_142, 0))
			{
				if (unk_0x7C9905528EE2C3AB(iLocal_142, 1))
				{
					if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						unk_0x68298CA6191CDFDB(&iLocal_142);
					}
					else
					{
						unk_0x68298CA6191CDFDB(&iLocal_142);
					}
				}
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_143))
	{
		if (iParam0 != 0)
		{
			if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0x68298CA6191CDFDB(&iLocal_143);
			}
			else
			{
				unk_0x68298CA6191CDFDB(&iLocal_143);
			}
		}
		else
		{
			unk_0x68298CA6191CDFDB(&iLocal_143);
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_144))
	{
		if (func_74(iLocal_144))
		{
			unk_0x68298CA6191CDFDB(&iLocal_144);
		}
	}
	if (unk_0xB0E14182FAD64944(uLocal_174))
	{
		unk_0xDDFB0941A19702BE(uLocal_174);
	}
	if (iParam0 == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_179))
		{
			unk_0x5D7CD709B34C90F0(iLocal_179, 0);
			unk_0xB3B56385ECA230B4(&iLocal_179);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_180))
		{
			unk_0x5D7CD709B34C90F0(iLocal_180, 0);
			unk_0xB3B56385ECA230B4(&iLocal_180);
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_158))
	{
		unk_0x734A9F4537A31459(&iLocal_158);
	}
	unk_0x5926A824AF54BCC3(2439,687f, 4971,541f, 45,9442f, 150f);
	if (iParam0 != 2)
	{
		if (unk_0xFC8BFE4B41177C22(Local_111[12 /*33*/]))
		{
			unk_0x734A9F4537A31459(&(Local_111[12 /*33*/]));
		}
		if (unk_0xFC8BFE4B41177C22(Local_111[13 /*33*/]))
		{
			unk_0x734A9F4537A31459(&(Local_111[13 /*33*/]));
		}
		if (unk_0xFC8BFE4B41177C22(Local_111[14 /*33*/]))
		{
			unk_0x734A9F4537A31459(&(Local_111[14 /*33*/]));
		}
		if (unk_0xFC8BFE4B41177C22(Local_111[11 /*33*/]))
		{
			unk_0x734A9F4537A31459(&(Local_111[11 /*33*/]));
		}
		if (unk_0xFC8BFE4B41177C22(Local_111[10 /*33*/]))
		{
			unk_0x734A9F4537A31459(&(Local_111[10 /*33*/]));
		}
	}
	unk_0x55098D9E9AD58806(joaat("a_m_m_hillbilly_01"));
	unk_0x55098D9E9AD58806(joaat("a_m_m_hillbilly_02"));
	unk_0x55098D9E9AD58806(joaat("prop_cs_fertilizer"));
	unk_0x55098D9E9AD58806(joaat("burrito"));
	unk_0x55098D9E9AD58806(joaat("ig_janet"));
	unk_0x55098D9E9AD58806(joaat("ig_old_man1a"));
	unk_0x55098D9E9AD58806(joaat("ig_old_man2"));
	unk_0x55098D9E9AD58806(joaat("ig_taocheng"));
	unk_0x55098D9E9AD58806(joaat("ig_taostranslator"));
	unk_0x55098D9E9AD58806(joaat("ig_janet"));
	unk_0x13F0C01028B5EE7C("move_m@gangster@var_e");
	unk_0x13F0C01028B5EE7C("move_m@gangster@var_f");
	unk_0x13F0C01028B5EE7C("move_m@gangster@generic");
	unk_0x268BE77F77533D03("misschinese2_barrelRoll");
	unk_0x268BE77F77533D03("reaction@male_stand@big_variations@b");
	unk_0x268BE77F77533D03("reaction@male_stand@big_intro@left");
	unk_0x268BE77F77533D03("reaction@male_stand@big_intro@right");
	unk_0x268BE77F77533D03("reaction@male_stand@big_intro@backward");
	unk_0x268BE77F77533D03("misschinese2_bank1");
	unk_0x268BE77F77533D03("misschinese2_bank5");
	unk_0x268BE77F77533D03("misschinese2_crystalmazemcs1_ig");
	if (iParam0 != 3)
	{
		if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"), 0))
		{
			unk_0x4F07124B9C56ED6F(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"));
		}
	}
	iLocal_157 = 0;
	iLocal_109 = 0;
	if (unk_0xBC2EE32DE886BD08("CHI_2_DRIVE_TO_FARMHOUSE"))
	{
		unk_0xB43467C43086A6A1("CHI_2_DRIVE_TO_FARMHOUSE");
	}
	if (unk_0xBC2EE32DE886BD08("CHI_2_DRIVE_ROCK_RADIO"))
	{
		unk_0xB43467C43086A6A1("CHI_2_DRIVE_ROCK_RADIO");
	}
	if (unk_0xBC2EE32DE886BD08("CHI_2_FARMHOUSE_OVERVIEW"))
	{
		unk_0xB43467C43086A6A1("CHI_2_FARMHOUSE_OVERVIEW");
	}
	if (unk_0xBC2EE32DE886BD08("CHI_2_SHOOTOUT_STEALTH"))
	{
		unk_0xB43467C43086A6A1("CHI_2_SHOOTOUT_STEALTH");
	}
	if (unk_0xBC2EE32DE886BD08("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
	{
		unk_0xB43467C43086A6A1("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
	}
	if (unk_0xBC2EE32DE886BD08("CHI_2_POUR_GAS"))
	{
		unk_0xB43467C43086A6A1("CHI_2_POUR_GAS");
	}
	if (unk_0xBC2EE32DE886BD08("CHI_2_SHOOT_GAS"))
	{
		unk_0xB43467C43086A6A1("CHI_2_SHOOT_GAS");
	}
	if (unk_0xBC2EE32DE886BD08("CHI_2_GAS_TRAIL_FIRE"))
	{
		unk_0xB43467C43086A6A1("CHI_2_GAS_TRAIL_FIRE");
	}
	if (unk_0xBC2EE32DE886BD08("CHI_2_RAYFIRE"))
	{
		unk_0xB43467C43086A6A1("CHI_2_RAYFIRE");
	}
	unk_0x22A76EDE2316E9A1();
	if (iParam0 != 0)
	{
		func_15("CHN2_STOP_TRACK", 0, func_173());
		while (!func_2())
		{
			func_28(0, 0);
		}
	}
	if (iParam0 != 3)
	{
		func_172(0);
	}
	if (iParam0 != 0)
	{
		uLocal_171 = unk_0xC8C12645F5A0E13B(2457,15f, 4968,79f, 48,677f, 45f, "DES_FarmHs");
		if (iLocal_172)
		{
			if (unk_0x502101046E18AD3F(uLocal_171))
			{
				unk_0xBF86159B8525B1AE(uLocal_171, 2);
			}
			iLocal_172 = 0;
		}
	}
}

void func_377()
{
	unk_0x6E32AA16336291E4(joaat("DEFAULT"), 31);
}

void func_378(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0x23B29877D0BE9547(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_379(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_101570 > 0)
	{
		Global_107514.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_104530.f_21[iParam1] = iVar0;
	}
}

int func_379(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_101570 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_107514.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_107514.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_107514.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_107514.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_104530.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_104530.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_104530.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_104530.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_380()
{
	int iVar0;
	
	Global_64195 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_64196[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

int func_381()
{
	if (!Global_101533 == 10 && !Global_101533 == 9)
	{
		return 0;
	}
	return Global_101533.f_2;
}

int func_382()
{
	if (Global_101533 == 10 || Global_101533 == 9)
	{
		return 1;
	}
	return 0;
}

void func_383(var uParam0, char* sParam1, int iParam2, char* sParam3)
{
	*uParam0 = sParam3;
	uParam0->f_1 = sParam1;
	uParam0->f_2 = iParam2;
}

void func_384()
{
	unk_0x06CD913C241C765E("MYFRIEND", &iLocal_113);
	unk_0x06CD913C241C765E("FOE", &iLocal_114);
	unk_0x06CD913C241C765E("IGNORE", &iLocal_115);
	unk_0x06CD913C241C765E("BARpeds", &iLocal_152);
	unk_0xD414C47AFF81382A(3, iLocal_152, joaat("player"));
	unk_0xD414C47AFF81382A(5, unk_0x2A661A0285B74A27(unk_0x4A8C381C258A124D()), iLocal_114);
	unk_0xD414C47AFF81382A(5, iLocal_114, unk_0x2A661A0285B74A27(unk_0x4A8C381C258A124D()));
	unk_0xD414C47AFF81382A(2, iLocal_113, iLocal_115);
	unk_0xD414C47AFF81382A(2, iLocal_114, iLocal_115);
	unk_0xD414C47AFF81382A(2, iLocal_115, unk_0x2A661A0285B74A27(unk_0x4A8C381C258A124D()));
	unk_0xD414C47AFF81382A(2, iLocal_115, iLocal_114);
}

void func_385()
{
	switch (iLocal_573)
	{
		case 0:
			if (iLocal_147 >= 4)
			{
				func_386(1, "Snipe from hill", 0, 0, 0, 1);
				iLocal_573++;
			}
			break;
		
		case 1:
			if (iLocal_147 >= 4 && iLocal_147 < 7)
			{
				if (func_93(12) || iLocal_147 == 6)
				{
					func_386(2, "Inside House", 0, 0, 0, 1);
					iLocal_573++;
				}
			}
			else if (iLocal_147 == 7)
			{
				if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"), 0))
				{
					func_386(2, "Inside House", 0, 0, 0, 1);
					iLocal_573++;
				}
			}
			else if (iLocal_147 > 7)
			{
				func_386(2, "Inside House", 0, 0, 0, 1);
				iLocal_573++;
			}
			break;
		
		case 2:
			if (iLocal_147 >= 7)
			{
				func_386(3, "Pour petrol trail", 0, 0, 0, 1);
				iLocal_573++;
			}
			break;
		
		case 3:
			if (iLocal_147 == 9)
			{
				func_386(4, "Leave the farm house", 1, 0, 0, 1);
				iLocal_573++;
			}
			break;
	}
}

void func_386(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0x1B79E937E91F40C3("FinaleC2", unk_0x1AF90EB93E0012D6()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_101570)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_101570)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_465(1);
		if (iParam0 <= Global_101570)
		{
		}
		iVar1 = func_463(unk_0x1AF90EB93E0012D6(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113969.f_9088.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_461(iVar1);
			cVar3 = { Global_92301[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113969.f_9088.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x375B1B37EF136A49(&cVar3, uVar2, Global_101570, iParam0);
		}
		else
		{
			iVar4 = func_456(unk_0x1AF90EB93E0012D6(), 1);
			if (iVar4 != -1)
			{
				Global_113969.f_18577[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_455(iVar4)}, 4);
				unk_0x375B1B37EF136A49(&uVar5, 0, Global_101570, iParam0);
			}
			else
			{
				iVar6 = func_454(&(Global_101533.f_3));
				if (iVar6 > -1)
				{
					Global_113969.f_24989.f_4[iVar6] = 0;
				}
			}
		}
		Global_95691 = iParam2;
		Global_101570 = iParam0;
		func_387(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x1B79E937E91F40C3(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_101570)
	{
	}
}

void func_387(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_388(&Global_107514, unk_0x1AF90EB93E0012D6(), iParam0, uParam1, iParam3, iParam2);
}

void func_388(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_48();
	uParam0->f_1 = func_443();
	unk_0x239D73A1DE006629(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_414(&(uParam0->f_2884), 0);
		func_413(unk_0x4A8C381C258A124D());
		func_406(unk_0x4A8C381C258A124D(), 0);
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113969.f_2366.f_539.f_294[iVar1];
		if (iVar1 == func_405())
		{
			func_397(unk_0x4A8C381C258A124D(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_101258[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_101258[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_101258[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_101258[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_101258[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_101258[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_101258[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_101258[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_101258[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_101258[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113969.f_2366.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113969.f_2366.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xDF7F16323520B858(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xDF7F16323520B858(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xDF7F16323520B858(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113969.f_20567.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_61340[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113969.f_2366.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113969.f_2366.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113969.f_2366[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xDF7F16323520B858(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0xDF7F16323520B858(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0xDF7F16323520B858(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_390(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_389(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_389(var uParam0)
{
	*uParam0 = Global_97362;
	uParam0->f_1 = Global_97363;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_390(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x4A8C381C258A124D();
	}
	if (unk_0xFC8BFE4B41177C22(iParam2))
	{
		uParam1->f_5 = func_51(iParam2);
	}
	if (func_396(iParam2, &iVar0, iParam3, iParam5))
	{
		func_391(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xFC8BFE4B41177C22(iVar0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x2E6A27037F1DC473(iVar0, joaat("skylift")) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
			{
				func_391(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_391(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam2, 0))
	{
		func_393(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_392(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_392(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_101533.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_393(var uParam0, int iParam1, int iParam2)
{
	func_291(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_395(iParam1, 145, 0);
	uParam0->f_11 = func_313(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_394(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
		uParam0->f_6 = unk_0xCFC0C995455A6204(iParam1);
		uParam0->f_3 = { unk_0xE5741C6B6539231F(iParam1) };
		if (unk_0x5105BE70DEF1F5FB(iParam1, -1154,326f, -1523,871f, 3,262189f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_6 = 305,6424f;
		}
		if (Global_79084 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_394(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[iVar0]))
		{
			if (iParam0 == Global_78179.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_395(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_98854[iVar0])
				{
					if (iParam2 == 0 || unk_0x4B423FAA24E8ABF0(iParam0) == func_322(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_396(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			if (iParam0 == unk_0x4A8C381C258A124D())
			{
				*uParam1 = unk_0xDC8D5832207C2EAD();
			}
			else
			{
				*uParam1 = unk_0x6EF03BE64E058E2F(iParam0, 1);
			}
			if (unk_0xFC8BFE4B41177C22(*uParam1))
			{
				if (unk_0xD9F5E1FEFD1329E4(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(*uParam1, 1), unk_0xD1A6A821F5AC81DB(iParam0, 1), 1) < 100f)
					{
						if (unk_0x2E6A27037F1DC473(*uParam1, joaat("taxi")))
						{
							if (unk_0xFD5C5BBD1FE92BB7(*uParam1, -1, 0) != iParam0 && unk_0xFD5C5BBD1FE92BB7(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_78(*uParam1, func_48(), 1))
						{
							sVar0 = unk_0x1AF90EB93E0012D6();
							if (!unk_0x1B79E937E91F40C3(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x7F420695E3F776FB(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xD130E7CDEE903624(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x3F40AE65F056B43D(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x2E6A27037F1DC473(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_397(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		iVar0 = func_51(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_404(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_403(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_50(iVar0))
		{
			uParam1->f_59 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x76CD105BCAC6EB9F() && unk_0x4B423FAA24E8ABF0(iParam0) == unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			if (func_401(161, iParam3))
			{
				uParam1->f_59 = func_398(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_398(753, iParam3);
			}
			uParam1->f_60 = func_398(754, iParam3);
			uParam1->f_61 = func_398(755, iParam3);
		}
		if (unk_0x76CD105BCAC6EB9F() && iParam0 == unk_0x4A8C381C258A124D())
		{
			if (func_401(161, iParam3))
			{
				uParam1->f_59 = func_398(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_398(753, iParam3);
			}
		}
	}
}

int func_398(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_399(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_399(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_400(uParam1));
}

int func_400(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_196();
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

int func_401(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_402(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_402(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(2, uParam0, func_400(uParam1));
}

void func_403(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xB204F40D393426B6(iParam0, iParam1, 1);
		*uParam3 = unk_0x0DC23FA727759F9F(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x6DBAC05AFA907A23(iParam0) && unk_0xB34A70D5AC13FB8C(iParam0) != -1)
				{
					*uParam2 = unk_0xB34A70D5AC13FB8C(iParam0);
					*uParam3 = unk_0xAA6E5BB6733B4BB0(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_404(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xC0120BBCC298EA2F(iParam0, iParam1);
		*uParam3 = unk_0xD6AED6BFCC58AF7F(iParam0, iParam1);
		*uParam4 = unk_0xDAF263B0E792EAEC(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_405()
{
	func_49();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_406(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_51(iParam0);
	if (func_50(iVar0) && !unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (iParam0 == unk_0x4A8C381C258A124D())
		{
			func_407(iParam0, &(Global_113969.f_2366.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113969.f_2366.f_539.f_1730[iVar2 /*4*/][iVar0] = unk_0xFCFCA9D377ED6568(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xAE146ED24909CAF4();
					if (Global_113969.f_2366.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_113969.f_2366.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x755C848B9B13C696(unk_0x259BE71D8A81D4FA(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x1164A75E490C27B6(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x1164A75E490C27B6(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x1164A75E490C27B6(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_407(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	bool bVar10;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_412(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xBCEDAE6CA2B2046E(iParam0, func_412(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x1149D67DB429787A(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x6C81F95CADD1E6D0(iParam0, Var4.f_0);
					Var4.f_4 = unk_0xB92D606AB30C334C(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xACBE463290141D49(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_410(Var4.f_0, bVar1);
					while (iVar2 != 0)
					{
						if (unk_0x5EDED4B3E1A48E68(iParam0, Var4.f_0, iVar2))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_410(Var4.f_0, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0xAFA659708600A8CD();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0xA40B513DA7201333(iVar5, &Var7) && !func_409(Var7.f_1)) && iVar9 < 51)
			{
				if (!unk_0x4BFA043D318BF9AE(Var7.f_0))
				{
					Var4.f_0 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x1149D67DB429787A(iParam0, Var4.f_0);
					if (unk_0x66B90BA528CFEBCE(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x6C81F95CADD1E6D0(iParam0, Var4.f_0);
						Var4.f_4 = unk_0xB92D606AB30C334C(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xACBE463290141D49(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					bVar10 = false;
					bVar1 = false;
					while (bVar1 < unk_0x0A334014DFD4952C(iVar5))
					{
						if (unk_0x38A1582CAC3F4E95(iVar5, bVar1, &Var8))
						{
							if (!func_408(Var8.f_3))
							{
								if (unk_0x5EDED4B3E1A48E68(iParam0, Var4.f_0, Var8.f_3))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Var4.f_2), bVar10);
								}
								bVar10++;
							}
						}
						bVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x66B90BA528CFEBCE(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_408(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo_slide"):
		case joaat("component_pistol_mk2_camo_02_slide"):
		case joaat("component_pistol_mk2_camo_03_slide"):
		case joaat("component_pistol_mk2_camo_04_slide"):
		case joaat("component_pistol_mk2_camo_05_slide"):
		case joaat("component_pistol_mk2_camo_06_slide"):
		case joaat("component_pistol_mk2_camo_07_slide"):
		case joaat("component_pistol_mk2_camo_08_slide"):
		case joaat("component_pistol_mk2_camo_09_slide"):
		case joaat("component_pistol_mk2_camo_10_slide"):
		case joaat("component_pistol_mk2_camo_ind_01_slide"):
		case joaat("component_snspistol_mk2_camo_slide"):
		case joaat("component_snspistol_mk2_camo_02_slide"):
		case joaat("component_snspistol_mk2_camo_03_slide"):
		case joaat("component_snspistol_mk2_camo_04_slide"):
		case joaat("component_snspistol_mk2_camo_05_slide"):
		case joaat("component_snspistol_mk2_camo_06_slide"):
		case joaat("component_snspistol_mk2_camo_07_slide"):
		case joaat("component_snspistol_mk2_camo_08_slide"):
		case joaat("component_snspistol_mk2_camo_09_slide"):
		case joaat("component_snspistol_mk2_camo_10_slide"):
		case joaat("component_snspistol_mk2_camo_ind_01_slide"):
		case joaat("component_pistol_mk2_varmod_xm3_slide"):
			return 1;
			break;
	}
	return 0;
}

int func_409(int iParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case joaat("weapon_metaldetector"):
			case joaat("weapon_precisionrifle"):
			case joaat("weapon_tacticalrifle"):
			case joaat("weapon_pistolxm3"):
			case joaat("weapon_candycane"):
			case joaat("weapon_railgunxm3"):
			case 350597077:
			case joaat("weapon_battlerifle"):
			case joaat("weapon_snowlauncher"):
			case -624951259:
				return 1;
				break;
			}
	}
	return 0;
}

int func_410(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
				
				case 5:
					iVar0 = 1400690398;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
				
				case 7:
					iVar0 = joaat("component_microsmg_varmod_xm3");
					break;
				
				case 8:
					iVar0 = 1694268374;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
				
				case 10:
					iVar0 = 1605520746;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
				
				case 4:
					iVar0 = joaat("component_pumpshotgun_varmod_xm3");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 4:
					iVar0 = 221907180;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
				
				case 8:
					iVar0 = 302671608;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		case joaat("weapon_bat"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bat_varmod_xm3");
					break;
				
				case 1:
					iVar0 = joaat("component_bat_varmod_xm3_01");
					break;
				
				case 2:
					iVar0 = joaat("component_bat_varmod_xm3_02");
					break;
				
				case 3:
					iVar0 = joaat("component_bat_varmod_xm3_03");
					break;
				
				case 4:
					iVar0 = joaat("component_bat_varmod_xm3_04");
					break;
				
				case 5:
					iVar0 = joaat("component_bat_varmod_xm3_05");
					break;
				
				case 6:
					iVar0 = joaat("component_bat_varmod_xm3_06");
					break;
				
				case 7:
					iVar0 = joaat("component_bat_varmod_xm3_07");
					break;
				
				case 8:
					iVar0 = joaat("component_bat_varmod_xm3_08");
					break;
				
				case 9:
					iVar0 = joaat("component_bat_varmod_xm3_09");
					break;
			}
			break;
		
		case joaat("weapon_rpg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = -1240142720;
					break;
			}
			break;
		
		case joaat("weapon_battlerifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = -292433650;
					break;
				
				case 1:
					iVar0 = 494808810;
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			switch (bParam1)
			{
				case 0:
					iVar0 = -1675905033;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_411(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x660FA55F8D417CAB(iVar1))
					{
						if (unk_0x737024F2814ABDDD(iVar1, iVar2, &Var5))
						{
							if (!func_408(Var5.f_3))
							{
								if (iVar3 == bParam1)
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

int func_411(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9A7818E159C72516();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xDF94727C5BBB298F(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_412(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_413(int iParam0)
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
	if (func_50(iVar0) && !unk_0x4FAFF4BCB7633475(iParam0))
	{
		Global_113969.f_2366.f_539.f_294[iVar0] = unk_0xE5E6F6EFCE07789A(iParam0);
	}
}

void func_414(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	uParam0->f_3 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
	uParam0->f_5 = unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D());
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		uParam0->f_4 = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());
	}
	if (system::vdist(*uParam0, 320,9934f, 265,2515f, 82,1221f) < 10f)
	{
		*uParam0 = { 301,2162f, 202,1357f, 103,3797f };
		uParam0->f_3 = 156,5144f;
	}
	else if (system::vdist(*uParam0, 377,153f, -717,567f, 10,0536f) < 10f)
	{
		*uParam0 = { 394,2567f, -713,5439f, 28,2853f };
		uParam0->f_3 = 276,6273f;
	}
	else if (system::vdist(*uParam0, -1425,564f, -244,3f, 15,8053f) < 10f)
	{
		*uParam0 = { -1423,472f, -214,2539f, 45,5004f };
		uParam0->f_3 = 353,8757f;
	}
	else if (unk_0x486FF5D06E9659F1(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4,2587f, 525,0214f, 173,6281f };
		uParam0->f_3 = 203,6746f;
	}
	else if (BitTest(Global_79638, 4))
	{
		*uParam0 = { 452,0255f, 5571,85f, 780,1859f };
		uParam0->f_3 = 78,9858f;
	}
	else if (BitTest(Global_79638, 5))
	{
		*uParam0 = { -745,4462f, 5595,146f, 40,6594f };
		uParam0->f_3 = 261,747f;
	}
	else if (BitTest(Global_79638, 6))
	{
		*uParam0 = { -1675,521f, -1125,59f, 12,091f };
		uParam0->f_3 = 271,8208f;
	}
	else if (BitTest(Global_79638, 7))
	{
		*uParam0 = { -1631,219f, -1112,805f, 12,0212f };
		uParam0->f_3 = 316,8879f;
	}
	else if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0556019E7EE8EC9A(1272,659f, -1715,467f, 53,7715f, "v_lesters"))
	{
		*uParam0 = { 1276,956f, -1725,189f, 53,6551f };
		uParam0->f_3 = 204,1703f;
	}
	else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -415,4365f, 2068,289f, 113,3002f, -564,9516f, 1884,703f, 134,0403f, 258,75f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -596,4706f, 2089,921f, 125,4128f, -581,2134f, 2036,256f, 136,2836f, 9,5f, 0, 1, 0))
	{
		*uParam0 = { -601,59f, 2099,197f, 128,8928f };
		uParam0->f_3 = 204,7498f;
	}
	else if (system::vdist(*uParam0, -1007,393f, -477,9584f, 52,5357f) < 8f)
	{
		*uParam0 = { -1018,376f, -483,9436f, 36,0964f };
		uParam0->f_3 = 114,7664f;
	}
	else if (system::vdist(*uParam0, 480,6662f, -1317,808f, 28,20303f) < 15f)
	{
		*uParam0 = { 497,7238f, -1310,932f, 28,2372f };
		uParam0->f_3 = 289,3663f;
	}
	else if (system::vdist(*uParam0, 2329,527f, 2571,311f, 45,6779f) < 5f)
	{
		*uParam0 = { 2316,93f, 2594,153f, 45,7199f };
		uParam0->f_3 = 348,1325f;
	}
	if (iParam1 == 1)
	{
		if (func_417(&iVar0))
		{
			if (func_416(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 207,4336f, -1019,795f, -100,4728f, 189,9338f, -1019,623f, -95,56883f, 17,1875f, 0, 1, 0))
		{
			iVar3 = func_48();
			if (iVar3 == 0)
			{
				*uParam0 = { -65,1234f, 81,2517f, 70,5644f };
				uParam0->f_3 = 71,6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68,5531f, -1824,377f, 25,9424f };
				uParam0->f_3 = 215,8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220,8189f, -1162,302f, 22,0242f };
				uParam0->f_3 = 70,2711f;
			}
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 483,7175f, -1326,63f, 28,2135f, 474,9644f, -1307,998f, 34,49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495,4108f, -1306,08f, 29,2883f };
			uParam0->f_3 = 213,6273f;
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1146,77f, -1534,22f, 3,37f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_3 = 305,6424f;
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 439,5432f, -996,9769f, 24,88307f, 428,2935f, -997,0192f, 28,57458f, 8,5f, 0, 1, 0))
		{
			*uParam0 = { 431,8853f, -1013,133f, 28,7907f };
			uParam0->f_3 = 186,6814f;
		}
		else if (func_415(*uParam0, "v_hospital", 307,3065f, -589,9595f, 43,302f))
		{
			*uParam0 = { 279,4137f, -585,8815f, 43,2502f };
			uParam0->f_3 = 48,8028f;
		}
	}
}

int func_415(struct<3> Param0, char* sParam1, struct<3> Param2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7830326EF9D54DBB(Param0))
	{
		iVar0 = unk_0x0556019E7EE8EC9A(Param2, sParam1);
		if (!unk_0xF8A8852F99E201DD(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x91398220755C14BF(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_416(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829,842f, -191,7454f, 36,4386f };
			*uParam2 = 29,5061f;
			break;
		
		case 1:
			*uParam1 = { 129,8484f, -1716,528f, 28,0702f };
			*uParam2 = 50,3483f;
			break;
		
		case 2:
			*uParam1 = { -1296,913f, -1120,999f, 5,3951f };
			*uParam2 = 0,9933f;
			break;
		
		case 3:
			*uParam1 = { 1938,028f, 3718,736f, 31,3154f };
			*uParam2 = 118,2305f;
			break;
		
		case 4:
			*uParam1 = { 1197,866f, -469,3809f, 65,0885f };
			*uParam2 = 346,4477f;
			break;
		
		case 5:
			*uParam1 = { -32,2161f, -135,8212f, 56,0532f };
			*uParam2 = 186,0052f;
			break;
		
		case 6:
			*uParam1 = { -287,7696f, 6238,081f, 30,2902f };
			*uParam2 = 316,1349f;
			break;
		
		case 7:
			*uParam1 = { 99,2876f, -1395,16f, 28,2759f };
			*uParam2 = 320,2739f;
			break;
		
		case 8:
			*uParam1 = { 1679,445f, 4819,056f, 41,0035f };
			*uParam2 = 4,6192f;
			break;
		
		case 9:
			*uParam1 = { 411,3063f, -809,1863f, 28,1554f };
			*uParam2 = 1,8972f;
			break;
		
		case 10:
			*uParam1 = { -1088,054f, 2699,167f, 19,2748f };
			*uParam2 = 129,7382f;
			break;
		
		case 11:
			*uParam1 = { 1194,163f, 2695,644f, 36,9225f };
			*uParam2 = 1,1454f;
			break;
		
		case 12:
			*uParam1 = { -821,2829f, -1088,027f, 10,0499f };
			*uParam2 = 120,5883f;
			break;
		
		case 13:
			*uParam1 = { -3,3416f, 6521,303f, 30,2961f };
			*uParam2 = 316,4451f;
			break;
		
		case 14:
			*uParam1 = { -1208,417f, -785,9635f, 16,0139f };
			*uParam2 = 36,3181f;
			break;
		
		case 15:
			*uParam1 = { 623,1845f, 2739,191f, 40,9588f };
			*uParam2 = 3,5411f;
			break;
		
		case 16:
			*uParam1 = { 130,9555f, -198,2084f, 53,41f };
			*uParam2 = 251,3506f;
			break;
		
		case 17:
			*uParam1 = { -3164,065f, 1067,317f, 19,6778f };
			*uParam2 = 101,2229f;
			break;
		
		case 18:
			*uParam1 = { -713,2797f, -174,2767f, 35,8962f };
			*uParam2 = 29,8138f;
			break;
		
		case 19:
			*uParam1 = { -147,0616f, -306,4322f, 37,7912f };
			*uParam2 = 160,4526f;
			break;
		
		case 20:
			*uParam1 = { -1461,355f, -230,6092f, 48,3064f };
			*uParam2 = 318,7851f;
			break;
		
		case 21:
			*uParam1 = { -1347,739f, -1278,573f, 3,8952f };
			*uParam2 = 17,9365f;
			break;
		
		case 22:
			*uParam1 = { 325,6833f, 164,3263f, 102,4425f };
			*uParam2 = 68,6407f;
			break;
		
		case 23:
			*uParam1 = { 1858,774f, 3742,393f, 32,0779f };
			*uParam2 = 301,2329f;
			break;
		
		case 24:
			*uParam1 = { -286,3272f, 6202,802f, 30,3323f };
			*uParam2 = 225,1334f;
			break;
		
		case 25:
			*uParam1 = { -1161,596f, -1417,7f, 3,712f };
			*uParam2 = 246,9161f;
			break;
		
		case 26:
			*uParam1 = { 1308,952f, -1660,611f, 50,2362f };
			*uParam2 = 163,5456f;
			break;
		
		case 27:
			*uParam1 = { -3161,585f, 1074,214f, 19,6847f };
			*uParam2 = 98,6092f;
			break;
		
		case 28:
			*uParam1 = { 28,423f, -1110,814f, 28,2848f };
			*uParam2 = 85,2495f;
			break;
		
		case 29:
			*uParam1 = { 1704,966f, 3749,709f, 33,0188f };
			*uParam2 = 45,6778f;
			break;
		
		case 30:
			*uParam1 = { 223,949f, -38,7894f, 68,6483f };
			*uParam2 = 159,4265f;
			break;
		
		case 31:
			*uParam1 = { 837,7854f, -1017,963f, 26,3045f };
			*uParam2 = 181,0445f;
			break;
		
		case 32:
			*uParam1 = { -313,1914f, 6093,351f, 30,4625f };
			*uParam2 = 315,8405f;
			break;
		
		case 33:
			*uParam1 = { -663,4631f, -952,8069f, 20,3143f };
			*uParam2 = 92,6796f;
			break;
		
		case 34:
			*uParam1 = { -1323,06f, -392,8577f, 35,4596f };
			*uParam2 = 210,7398f;
			break;
		
		case 35:
			*uParam1 = { -1106,102f, 2684,35f, 18,0953f };
			*uParam2 = 127,0383f;
			break;
		
		case 36:
			*uParam1 = { -3157,932f, 1081,309f, 19,6953f };
			*uParam2 = 100,2942f;
			break;
		
		case 37:
			*uParam1 = { 2562,882f, 312,8641f, 107,4612f };
			*uParam2 = 179,205f;
			break;
		
		case 38:
			*uParam1 = { 822,48f, -2142,875f, 27,8496f };
			*uParam2 = 355,0598f;
			break;
		
		case 39:
			*uParam1 = { -1137,053f, -1993,916f, 12,1677f };
			*uParam2 = 43,1213f;
			break;
		
		case 40:
			*uParam1 = { 717,8107f, -1084,081f, 21,3094f };
			*uParam2 = 93,2649f;
			break;
		
		case 41:
			*uParam1 = { -387,6789f, -128,2568f, 37,6796f };
			*uParam2 = 119,1085f;
			break;
		
		case 42:
			*uParam1 = { 117,8835f, 6599,415f, 31,0134f };
			*uParam2 = 90,7225f;
			break;
		
		case 43:
			*uParam1 = { 1201,709f, 2664,813f, 36,8102f };
			*uParam2 = 133,9002f;
			break;
		
		case 44:
			*uParam1 = { -200,1521f, -1297,502f, 30,296f };
			*uParam2 = 269,0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_168(*uParam1, 0f, 0f, 0f, 0);
}

int func_417(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_34())
		{
			*uParam0 = func_422(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 6, -1, 0, 1, -1);
			if (func_421(*uParam0) && !func_418(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_418(int iParam0)
{
	return func_419(iParam0, 0, 1);
}

int func_419(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_25() == 0)
		{
			return BitTest(func_398(func_420(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_420(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12924;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

int func_421(int iParam0)
{
	return func_419(iParam0, 5, 1);
}

int func_422(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (iParam1 == 6 || iParam1 == func_442(iVar0))
		{
			if (!bParam3 || func_441(iVar0))
			{
				fVar1 = unk_0xED977E2AE2CB16EE(Param0, func_423(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
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

Vector3 func_423(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821,9946f, -187,1776f, 36,5689f;
			break;
		
		case 1:
			return 133,5702f, -1710,918f, 28,2916f;
			break;
		
		case 2:
			return -1287,082f, -1116,558f, 5,9901f;
			break;
		
		case 3:
			return 1933,119f, 3726,079f, 31,8444f;
			break;
		
		case 4:
			return 1208,333f, -470,917f, 65,208f;
			break;
		
		case 5:
			return -30,7448f, -148,4921f, 56,0765f;
			break;
		
		case 6:
			return -280,8165f, 6231,771f, 30,6955f;
			break;
		
		case 7:
			return 80,665f, -1391,669f, 28,3761f;
			break;
		
		case 8:
			return 1687,881f, 4820,55f, 41,0096f;
			break;
		
		case 9:
			return 419,531f, -807,5787f, 28,4896f;
			break;
		
		case 10:
			return -1094,049f, 2704,171f, 18,0873f;
			break;
		
		case 11:
			return 1197,972f, 2704,22f, 37,1572f;
			break;
		
		case 12:
			return -818,6218f, -1077,533f, 10,3282f;
			break;
		
		case 13:
			return -0,2361f, 6516,045f, 30,8684f;
			break;
		
		case 14:
			return -1199,809f, -776,6886f, 16,3237f;
			break;
		
		case 15:
			return 618,1857f, 2752,567f, 41,0881f;
			break;
		
		case 16:
			return 126,6853f, -212,5027f, 53,5578f;
			break;
		
		case 17:
			return -3168,966f, 1055,287f, 19,8632f;
			break;
		
		case 18:
			return -715,3598f, -155,7742f, 36,4105f;
			break;
		
		case 19:
			return -158,2199f, -304,9663f, 38,735f;
			break;
		
		case 20:
			return -1455,005f, -233,1862f, 48,7936f;
			break;
		
		case 21:
			return -1335,973f, -1278,555f, 3,8598f;
			break;
		
		case 22:
			return 321,6098f, 179,4165f, 102,5865f;
			break;
		
		case 23:
			return 1861,685f, 3750,08f, 32,0318f;
			break;
		
		case 24:
			return -290,1603f, 6199,095f, 30,4871f;
			break;
		
		case 25:
			return -1153,948f, -1425,019f, 3,9544f;
			break;
		
		case 26:
			return 1322,455f, -1651,125f, 51,1885f;
			break;
		
		case 27:
			return -3169,42f, 1074,727f, 19,8343f;
			break;
		
		case 28:
			return 17,6804f, -1114,288f, 28,797f;
			break;
		
		case 29:
			return 1697,979f, 3753,2f, 33,7053f;
			break;
		
		case 30:
			return 245,2711f, -45,8126f, 68,941f;
			break;
		
		case 31:
			return 844,1248f, -1025,571f, 27,1948f;
			break;
		
		case 32:
			return -325,8904f, 6077,026f, 30,4548f;
			break;
		
		case 33:
			return -664,2178f, -943,3646f, 20,8292f;
			break;
		
		case 34:
			return -1313,948f, -390,9637f, 35,592f;
			break;
		
		case 35:
			return -1111,238f, 2688,463f, 17,6131f;
			break;
		
		case 36:
			return -3165,231f, 1082,855f, 19,8438f;
			break;
		
		case 37:
			return 2569,612f, 302,576f, 107,7349f;
			break;
		
		case 38:
			return 811,8699f, -2149,102f, 28,6363f;
			break;
		
		case 39:
			return -1147,314f, -1992,434f, 12,1803f;
			break;
		
		case 40:
			return 724,524f, -1089,081f, 21,1692f;
			break;
		
		case 41:
			return -354,5272f, -135,4011f, 38,185f;
			break;
		
		case 42:
			return 113,2615f, 6624,28f, 30,7871f;
			break;
		
		case 43:
			return 1174,707f, 2644,45f, 36,7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211,5f, -1324,2f, 30,296f;
			}
			else
			{
				return -205,6654f, -1311,113f, 30,296f;
			}
			break;
		
		case 45:
			return func_438(Global_103686);
			break;
		
		case 46:
			if (Global_1845111 != func_42())
			{
				if (func_437(Global_1845111))
				{
					return func_430(2, 2);
				}
				else if (func_429(Global_1845111))
				{
					return func_430(45, 3);
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
		
		case 47:
			return func_427(-9,9f, -0,5f, 1f);
			break;
		
		case 48:
			return -1422,197f, -3015,803f, -79,1603f;
			break;
		
		case 49:
			return 203,0799f, 5200,189f, -89,6f;
			break;
		
		case 52:
			return 2714,547f, -354,2701f, -55,1867f;
			break;
		
		case 50:
			return Global_1964427;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159,901f, 1075,213f, -25,36174f;
			break;
		
		case 55:
			return -2194,123f, 1103,805f, -24,2451f;
			break;
		
		case 56:
			switch (func_426())
			{
				case 155:
					return 379,4285f, -53,6067f, 111,7088f;
					break;
				
				case 156:
					return -1029,166f, -426,3766f, 72,2069f;
					break;
				
				case 157:
					return -581,9924f, -721,3945f, 121,3509f;
					break;
				
				case 158:
					return -1013,718f, -768,3539f, 69,4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
		
		case 58:
			return func_424();
			break;
		
		case 59:
			return 560f, -405f, -69,6591f;
			break;
		
		case 60:
			return -1299,691f, -3017,165f, -48,2612f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_424()
{
	if (!func_77(Global_1949748))
	{
		return Global_1949748;
	}
	switch (func_425())
	{
		case 0:
			return -29,532f, 6435,136f, 31,162f;
		
		case 1:
			return 1705,214f, 4819,167f, 41,75f;
		
		case 2:
			return 1795,522f, 3899,753f, 33,869f;
		
		case 3:
			return 1335,536f, 2758,746f, 51,099f;
		
		case 4:
			return 795,583f, 1210,78f, 338,962f;
		
		case 5:
			return -3192,67f, 1077,205f, 20,594f;
		
		case 6:
			return -789,719f, 5400,921f, 33,915f;
		
		case 7:
			return -24,384f, 3048,167f, 40,703f;
		
		case 8:
			return 2666,786f, 1469,324f, 24,237f;
		
		case 9:
			return -1454,966f, 2667,503f, 3,2f;
		
		case 10:
			return 2340,418f, 3054,188f, 47,888f;
		
		case 11:
			return 1509,183f, -2146,795f, 76,853f;
		
		case 12:
			return 1137,404f, -1358,654f, 34,322f;
		
		case 13:
			return -57,208f, -2658,793f, 5,737f;
		
		case 14:
			return 1905,017f, 565,222f, 175,558f;
		
		case 15:
			return 974,484f, -1718,798f, 30,296f;
		
		case 16:
			return 779,077f, -3266,297f, 5,719f;
		
		case 17:
			return -587,728f, -1637,208f, 19,611f;
		
		case 18:
			return 733,99f, -736,803f, 26,165f;
		
		case 19:
			return -1694,632f, -454,082f, 40,712f;
		
		case 20:
			return -1330,726f, -1163,948f, 4,313f;
		
		case 21:
			return -496,618f, 40,231f, 52,316f;
		
		case 22:
			return 275,527f, 66,509f, 94,108f;
		
		case 23:
			return 260,928f, -763,35f, 30,559f;
		
		case 24:
			return -478,025f, -741,45f, 30,299f;
		
		case 25:
			return 894,94f, 3603,911f, 32,56f;
		
		case 26:
			return -2166,511f, 4289,503f, 48,733f;
		
		case 27:
			return 1465,633f, 6553,67f, 13,771f;
		
		case 28:
			return 1101,032f, -335,172f, 66,944f;
		
		case 29:
			return 149,683f, -1655,674f, 29,028f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_425()
{
	return Global_2652592.f_2671;
}

int func_426()
{
	return Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_8;
}

Vector3 func_427(struct<3> Param0)
{
	return unk_0xF10F2A2453AF1DFB(func_428(), 0f, Param0);
}

Vector3 func_428()
{
	return -880f, -2770f, -50f;
}

int func_429(int iParam0)
{
	if (iParam0 != func_42())
	{
		if ((BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 0) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 1)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_430(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1845111 != func_42())
	{
		if (iParam1 == 3)
		{
			if (func_431(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1845281[Global_1845111 /*883*/].f_268.f_292, 4))
			{
				if (func_431(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (BitTest(Global_1845281[Global_1845111 /*883*/].f_268.f_292, 5))
			{
				if (func_431(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_431(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_436(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_436(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_434(iParam0) };
	}
	else
	{
		Var2 = { func_433(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_432(Var3, -Var0.f_3.f_2) };
	Var3 = { func_432(Var3, Var1.f_3.f_2) };
	*uParam2 = { unk_0xF10F2A2453AF1DFB(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_432(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = system::sin(fParam1);
	fVar2 = system::cos(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_433(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 1:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 2:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 3:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 4:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 5:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 6:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 7:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 8:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
	}
	return Var0;
}

struct<6> func_434(int iParam0)
{
	return func_435(iParam0);
}

struct<6> func_435(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105,22f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104,105f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105,22f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104,105f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011,925f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38,125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103,213f, -3013,483f, -39,03f };
			Var0.f_3 = { 0f, 0f, 31,32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101,408f, -3012,32f, -38,45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103,037f, -3012,318f, -39,99874f };
			break;
		
		case 7:
			Var0 = { 1105,645f, -3012,04f, -39,542f };
			Var0.f_3 = { 0f, 0f, -86,04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104,063f, -3012,368f, -39,99875f };
			break;
		
		case 9:
			Var0 = { 1105,665f, -3012,334f, -38,50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102,504f, -3012,35f, -39,341f };
			Var0.f_3 = { 0f, 0f, -96,48f };
			break;
		
		case 11:
			Var0 = { 1102,928f, -3012,693f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102,942f, -3011,315f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101,994f, -3012,878f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103,152f, -3013,032f, -38,24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102,465f, -3009,515f, -39,341f };
			Var0.f_3 = { 0f, 0f, -12,96f };
			break;
		
		case 14:
			Var0 = { 1102,917f, -3009,525f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102,922f, -3010,887f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101,682f, -3009,227f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102,453f, -3008,51f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104,684f, -3009,561f, -39,341f };
			Var0.f_3 = { 0f, 0f, 169,56f };
			break;
		
		case 17:
			Var0 = { 1104,34f, -3008,698f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104,344f, -3009,618f, -37,98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105,459f, -3009,793f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104,783f, -3010,433f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104,025f, -3007,316f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 24:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 25:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 26:
			Var0 = { 1102,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 31:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 32:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 33:
			Var0 = { 1102,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 38:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 39:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
		
		case 40:
			Var0 = { 1102,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011,9f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38,115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105,174f, -3004,16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105,175f, -3005,818f, -37,91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106,6f, -3000,847f, -39,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106,601f, -3002,171f, -37,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101,95f, -3011,9f, -39,2f };
			Var0.f_3 = { 0f, 0f, 49,5f };
			break;
		
		case 52:
			Var0 = { 1101,95f, -3010f, -39,2f };
			Var0.f_3 = { 0f, 0f, 130,32f };
			break;
		
		case 53:
			Var0 = { 1105,16f, -3009,06f, -39,2f };
			Var0.f_3 = { 0f, 0f, -44,64f };
			break;
		
		case 54:
			Var0 = { 1102,476f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103,593f, -3008,27f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103,565f, -3014f, -39,988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103,55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103,55f, -3013,762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103,55f, -3006,186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103,6f, -3013,933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_436(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103,562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103,562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103,562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_437(int iParam0)
{
	if (iParam0 != func_42())
	{
		if ((BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 3) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 4)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_438(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974,9542f, -3000,091f, -35f;
			break;
		
		case 6:
			return -1586,36f, -566,6f, 106,17f;
			break;
		
		case 7:
			return -1389,87f, -465,17f, 82,68f;
			break;
		
		case 8:
			return -145,81f, -590,2f, 171,13f;
			break;
		
		case 9:
			return -62,49f, -823,55f, 288,74f;
			break;
		
		case 4:
			return 1102,515f, -3158,888f, -38,5186f;
			break;
		
		case 5:
			return 1005,861f, -3156,162f, -39,907f;
			break;
		
		case 10:
			return 1103,562f, -3000f, -40f;
			break;
		
		case 11:
			return 938,3077f, -3196,112f, -100f;
			break;
		
		case 12:
			return -1266,802f, -3014,836f, -49,4895f;
			break;
		
		case 13:
			return func_428();
			break;
		
		case 14:
			return 345,0041f, 4842,001f, -59,9997f;
			break;
		
		case 15:
			return -1604,664f, -3012,583f, -79,9999f;
			break;
		
		case 16:
			return -1421,015f, -3012,587f, -80f;
			break;
		
		case 17:
			if (func_439() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		case 21:
			return 570f, -415f, -70f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_439()
{
	return func_440(unk_0x259BE71D8A81D4FA());
}

var func_440(int iParam0)
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657971[iParam0 /*465*/].f_322.f_3, 28, 31);
}

int func_441(int iParam0)
{
	return func_419(iParam0, 0, 0);
}

int func_442(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

var func_443()
{
	var uVar0;
	
	func_453(&uVar0, unk_0x4BA5A16068183C5E());
	func_452(&uVar0, unk_0x18E502A71E28968C());
	func_451(&uVar0, unk_0x5295501D0862870D());
	func_446(&uVar0, unk_0xB12880C92EA6EE15());
	func_445(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_444(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_444(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || system::shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || system::shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_445(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_446(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_450(*uParam0);
	iVar1 = func_448(*uParam0);
	if (iParam1 < 1 || iParam1 > func_447(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_447(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_448(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_449(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_449(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_450(var uParam0)
{
	return uParam0 & 15;
}

void func_451(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_452(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_453(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_454(char* sParam0)
{
	if (unk_0x1B79E937E91F40C3("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x1B79E937E91F40C3("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x1B79E937E91F40C3("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x1B79E937E91F40C3("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_455(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_456(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x70E57E9927B6BA58(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_457(iVar0, &sVar1);
		if (unk_0x70E57E9927B6BA58(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_457(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_458(uParam1, "Abigail1", func_460(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_459(iParam0), 1, 0);
			break;
		
		case 1:
			func_458(uParam1, "Abigail2", func_460(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_459(iParam0), 1, 0);
			break;
		
		case 2:
			func_458(uParam1, "Barry1", func_460(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_459(iParam0), 1, 0);
			break;
		
		case 3:
			func_458(uParam1, "Barry2", func_460(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_459(iParam0), 1, 1);
			break;
		
		case 4:
			func_458(uParam1, "Barry3", func_460(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_459(iParam0), 0, 0);
			break;
		
		case 5:
			func_458(uParam1, "Barry3A", func_460(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 6:
			func_458(uParam1, "Barry3C", func_460(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 7:
			func_458(uParam1, "Barry4", func_460(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_459(iParam0), 0, 0);
			break;
		
		case 8:
			func_458(uParam1, "Dreyfuss1", func_460(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_459(iParam0), 0, 0);
			break;
		
		case 9:
			func_458(uParam1, "Epsilon1", func_460(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_459(iParam0), 0, 0);
			break;
		
		case 10:
			func_458(uParam1, "Epsilon2", func_460(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_459(iParam0), 1, 0);
			break;
		
		case 11:
			func_458(uParam1, "Epsilon3", func_460(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_459(iParam0), 0, 0);
			break;
		
		case 12:
			func_458(uParam1, "Epsilon4", func_460(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_459(iParam0), 0, 0);
			break;
		
		case 13:
			func_458(uParam1, "Epsilon5", func_460(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_459(iParam0), 1, 0);
			break;
		
		case 14:
			func_458(uParam1, "Epsilon6", func_460(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 15:
			func_458(uParam1, "Epsilon7", func_460(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_459(iParam0), 0, 0);
			break;
		
		case 16:
			func_458(uParam1, "Epsilon8", func_460(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_459(iParam0), 1, 0);
			break;
		
		case 17:
			func_458(uParam1, "Extreme1", func_460(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 18:
			func_458(uParam1, "Extreme2", func_460(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 19:
			func_458(uParam1, "Extreme3", func_460(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 20:
			func_458(uParam1, "Extreme4", func_460(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_459(iParam0), 0, 0);
			break;
		
		case 21:
			func_458(uParam1, "Fanatic1", func_460(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_459(iParam0), 1, 0);
			break;
		
		case 22:
			func_458(uParam1, "Fanatic2", func_460(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_459(iParam0), 1, 0);
			break;
		
		case 23:
			func_458(uParam1, "Fanatic3", func_460(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_459(iParam0), 0, 1);
			break;
		
		case 24:
			func_458(uParam1, "Hao1", func_460(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_459(iParam0), 0, 1);
			break;
		
		case 25:
			func_458(uParam1, "Hunting1", func_460(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 26:
			func_458(uParam1, "Hunting2", func_460(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 27:
			func_458(uParam1, "Josh1", func_460(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_459(iParam0), 1, 0);
			break;
		
		case 28:
			func_458(uParam1, "Josh2", func_460(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_459(iParam0), 1, 1);
			break;
		
		case 29:
			func_458(uParam1, "Josh3", func_460(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_459(iParam0), 1, 1);
			break;
		
		case 30:
			func_458(uParam1, "Josh4", func_460(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_459(iParam0), 1, 0);
			break;
		
		case 31:
			func_458(uParam1, "Maude1", func_460(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 32:
			func_458(uParam1, "Minute1", func_460(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 33:
			func_458(uParam1, "Minute2", func_460(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 34:
			func_458(uParam1, "Minute3", func_460(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 35:
			func_458(uParam1, "MrsPhilips1", func_460(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_459(iParam0), 0, 0);
			break;
		
		case 36:
			func_458(uParam1, "MrsPhilips2", func_460(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_459(iParam0), 0, 0);
			break;
		
		case 37:
			func_458(uParam1, "Nigel1", func_460(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_459(iParam0), 1, 0);
			break;
		
		case 38:
			func_458(uParam1, "Nigel1A", func_460(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_459(iParam0), 1, 1);
			break;
		
		case 39:
			func_458(uParam1, "Nigel1B", func_460(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_459(iParam0), 1, 1);
			break;
		
		case 40:
			func_458(uParam1, "Nigel1C", func_460(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_459(iParam0), 1, 1);
			break;
		
		case 41:
			func_458(uParam1, "Nigel1D", func_460(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_459(iParam0), 1, 1);
			break;
		
		case 42:
			func_458(uParam1, "Nigel2", func_460(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_459(iParam0), 1, 1);
			break;
		
		case 43:
			func_458(uParam1, "Nigel3", func_460(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_459(iParam0), 1, 1);
			break;
		
		case 44:
			func_458(uParam1, "Omega1", func_460(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_459(iParam0), 0, 0);
			break;
		
		case 45:
			func_458(uParam1, "Omega2", func_460(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_459(iParam0), 0, 0);
			break;
		
		case 46:
			func_458(uParam1, "Paparazzo1", func_460(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 47:
			func_458(uParam1, "Paparazzo2", func_460(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 48:
			func_458(uParam1, "Paparazzo3", func_460(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_459(iParam0), 0, 0);
			break;
		
		case 49:
			func_458(uParam1, "Paparazzo3A", func_460(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 50:
			func_458(uParam1, "Paparazzo3B", func_460(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 51:
			func_458(uParam1, "Paparazzo4", func_460(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_459(iParam0), 0, 0);
			break;
		
		case 52:
			func_458(uParam1, "Rampage1", func_460(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_459(iParam0), 0, 0);
			break;
		
		case 54:
			func_458(uParam1, "Rampage3", func_460(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_459(iParam0), 1, 0);
			break;
		
		case 55:
			func_458(uParam1, "Rampage4", func_460(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_459(iParam0), 1, 0);
			break;
		
		case 56:
			func_458(uParam1, "Rampage5", func_460(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_459(iParam0), 0, 0);
			break;
		
		case 53:
			func_458(uParam1, "Rampage2", func_460(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_459(iParam0), 1, 0);
			break;
		
		case 57:
			func_458(uParam1, "TheLastOne", func_460(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 58:
			func_458(uParam1, "Tonya1", func_460(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 59:
			func_458(uParam1, "Tonya2", func_460(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 60:
			func_458(uParam1, "Tonya3", func_460(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 61:
			func_458(uParam1, "Tonya4", func_460(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		case 62:
			func_458(uParam1, "Tonya5", func_460(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_459(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_458(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_459(int iParam0)
{
	switch (iParam0)
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
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_460(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_455(iParam0) };
	if (unk_0xD6F9DEE4765092A9(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

int func_461(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_462(Global_113969.f_9088.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_462(Global_113969.f_9088.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_462(Global_113969.f_9088.f_99.f_205[11]);
			break;
		
		case 90:
			return func_462(Global_113969.f_9088.f_99.f_205[7]);
			break;
		
		case 93:
			return func_462(Global_113969.f_9088.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_462(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_463(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x70E57E9927B6BA58(sParam0);
	iVar1 = func_464(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_464(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_92301[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_465(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61348[iVar0 /*3*/][0] = Global_113969.f_20567[iVar0];
		Global_61348.f_31[iVar0 /*3*/][0] = Global_113969.f_20567.f_11[iVar0];
		Global_61348.f_62[iVar0 /*3*/][0] = Global_113969.f_20567.f_22[iVar0];
		Global_61348.f_93[iVar0 /*3*/][0] = Global_113969.f_20567.f_33[iVar0];
		Global_61348.f_124[iVar0 /*3*/][0] = Global_113969.f_20567.f_44[iVar0];
		Global_61348.f_155[iVar0 /*3*/][0] = Global_113969.f_20567.f_55[iVar0];
		Global_61348.f_186[iVar0 /*3*/][0] = Global_113969.f_20567.f_66[iVar0];
		Global_61348.f_217[iVar0 /*3*/][0] = Global_113969.f_20567.f_77[iVar0];
		Global_61348.f_248[iVar0 /*3*/][0] = Global_113969.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_61348[iVar0 /*3*/][1] = Global_113969.f_20567[iVar0];
			Global_61348.f_31[iVar0 /*3*/][1] = Global_113969.f_20567.f_11[iVar0];
			Global_61348.f_62[iVar0 /*3*/][1] = Global_113969.f_20567.f_22[iVar0];
			Global_61348.f_93[iVar0 /*3*/][1] = Global_113969.f_20567.f_33[iVar0];
			Global_61348.f_124[iVar0 /*3*/][1] = Global_113969.f_20567.f_44[iVar0];
			Global_61348.f_155[iVar0 /*3*/][1] = Global_113969.f_20567.f_55[iVar0];
			Global_61348.f_186[iVar0 /*3*/][1] = Global_113969.f_20567.f_66[iVar0];
			Global_61348.f_217[iVar0 /*3*/][1] = Global_113969.f_20567.f_77[iVar0];
			Global_61348.f_248[iVar0 /*3*/][1] = Global_113969.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_466(int iParam0)
{
	func_376(iParam0);
	unk_0x70F19143E4E40117(1);
	unk_0x5A65DF56B098A5F1();
	unk_0x425BBE19F25A57AB(1f);
	unk_0xDAE61414743C8D1D(5);
	unk_0xCC1C92F7E1A3CE9D(3, 1);
	func_212(0);
	func_94();
	unk_0x406CBCEA35499884();
	if (unk_0xF935563454D3B338(iLocal_146))
	{
		unk_0x8E99C7AF6C6639AB(iLocal_146);
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x4F07124B9C56ED6F(unk_0x4A8C381C258A124D(), joaat("weapon_petrolcan"));
		unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) != 0)
		{
			if (func_73(unk_0x4A8C381C258A124D(), 2444,098f, 4977,795f, 48,9959f, 1) < 100f)
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2463,811f, 4961,747f, 44,176f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 20f);
			}
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_19(50, 0, 0, 1, 0);
		func_19(51, 0, 0, 1, 0);
		func_19(52, 0, 0, 1, 0);
		func_19(53, 0, 0, 1, 0);
		func_19(54, 0, 0, 1, 0);
		func_19(55, 0, 0, 1, 0);
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_467()
{
	int iVar0;
	
	if (unk_0xA6E4F7A73ABC4A76("buddyDeathResponse"))
	{
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_113969.f_9088 || func_147(0))
	{
		if (!func_468())
		{
			iVar0 = func_146();
			if (iVar0 != -1)
			{
				if (!func_140(iVar0))
				{
					return;
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_145();
		}
	}
}

int func_468()
{
	if (((Global_101533 == 13 || Global_101533 == 10) || Global_101533 == 11) || Global_101533 == 12)
	{
		return 0;
	}
	return 1;
}

