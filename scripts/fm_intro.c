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
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
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
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<123> Local_61 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_62 = 16;
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
	var uLocal_248 = 16;
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
	struct<6> Local_413 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_414 = 0;
	var uLocal_415 = 16;
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
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	struct<5> Local_580[2];
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	bool bLocal_587 = 0;
	bool bLocal_588 = 0;
	bool bLocal_589 = 0;
	bool bLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	struct<21> Local_595 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0,0375f;
	fLocal_31 = 0,17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_59 = 20;
	iLocal_60 = 33;
	bLocal_587 = true;
	bLocal_588 = true;
	bLocal_589 = true;
	bLocal_590 = true;
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_819(ScriptParam_595);
	}
	while (true)
	{
		func_818();
		if (func_813())
		{
			func_429(1);
		}
		if (func_426(0))
		{
			Local_580[unk_0xAE032CEDCF23C6D5() /*5*/] = 3;
		}
		if (func_425(unk_0xAE032CEDCF23C6D5()) > -1)
		{
			unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
		}
		switch (func_424(unk_0xAE032CEDCF23C6D5()))
		{
			case 0:
				if (!BitTest(uLocal_581, 10))
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 10);
					}
				}
				unk_0xF2CB0224D3BE0B42("FMINT", 0);
				if (func_423() && unk_0xCC2EFE4B1D0EE422("FMINT", 0))
				{
					if (func_422() > 0)
					{
						func_421(&uLocal_248, 1, 0, "Lamar", 0, 1);
						func_420(0);
						func_419(4, 1);
						func_419(1, 1);
						func_419(0, 1);
						func_419(2, 1);
						func_419(3, 0);
						func_417(iLocal_60, 1);
						Local_580[unk_0xAE032CEDCF23C6D5() /*5*/] = 2;
						if (bLocal_589)
						{
							Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = -2;
						}
						else
						{
							Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_422() == 4)
				{
					Local_580[unk_0xAE032CEDCF23C6D5() /*5*/] = 4;
				}
				if (func_422() == 6 && Local_580[unk_0xAE032CEDCF23C6D5() /*5*/] < 4)
				{
					Local_580[unk_0xAE032CEDCF23C6D5() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_395();
				func_23();
				if (func_422() == 4)
				{
					Local_580[unk_0xAE032CEDCF23C6D5() /*5*/] = 4;
				}
				if (func_422() == 6 && Local_580[unk_0xAE032CEDCF23C6D5() /*5*/] < 4)
				{
					Local_580[unk_0xAE032CEDCF23C6D5() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_580[unk_0xAE032CEDCF23C6D5() /*5*/] = 5;
				break;
			
			case 5:
				func_21(&(Local_413.f_5));
				if (func_20(&(Local_413.f_5)))
				{
					Local_580[unk_0xAE032CEDCF23C6D5() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_12(iLocal_59);
				Local_580[unk_0xAE032CEDCF23C6D5() /*5*/] = 6;
			
			case 6:
				func_429(0);
				break;
		}
		if (unk_0x93E08E0F531E2C35())
		{
			switch (func_422())
			{
				case 0:
					Local_413.f_0 = 2;
					break;
				
				case 2:
					func_11();
					func_10();
					func_2();
					if (func_1())
					{
						Local_413.f_0 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (!bLocal_587)
	{
		if (BitTest(Local_413.f_1, 1))
		{
			return 1;
		}
	}
	else if (BitTest(Local_413.f_1, 2))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	func_3();
}

void func_3()
{
	if (unk_0x93E08E0F531E2C35())
	{
		if (!BitTest(Local_413.f_1, 3))
		{
			if (BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_413.f_1), 3);
			}
		}
		if (!BitTest(Local_413.f_1, 4))
		{
			if (BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 2))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_413.f_1), 4);
			}
		}
		if (!BitTest(Local_413.f_1, 5))
		{
			if (BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 3))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_413.f_1), 5);
			}
		}
		if (!BitTest(Local_413.f_1, 6))
		{
			if (BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 4))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_413.f_1), 6);
			}
		}
		if (!BitTest(Local_413.f_1, 7))
		{
			if (BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 5))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_413.f_1), 7);
			}
		}
		if (!BitTest(Local_413.f_1, 8))
		{
			if (BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 6))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_413.f_1), 8);
			}
		}
		switch (Local_413.f_2)
		{
			case 0:
				if (BitTest(Local_413.f_1, 3))
				{
					if (func_4(&(Local_413.f_3), &(Local_413.f_4), -1031,788f, -2731,816f, 19,0546f, 240,4822f, &uLocal_415))
					{
						unk_0xC229299217554C78(unk_0xE38610F405049F71(Local_413.f_3), 1, 0, 0);
						Local_413.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (BitTest(Local_413.f_1, 4))
				{
					Local_413.f_2 = 1;
				}
				break;
			
			case 1:
				if (BitTest(Local_413.f_1, 5))
				{
					Local_413.f_2 = 3;
				}
				break;
			
			case 3:
				if (BitTest(Local_413.f_1, 6))
				{
					Local_413.f_2 = 4;
				}
				break;
			
			case 4:
				if (BitTest(Local_413.f_1, 7))
				{
					Local_413.f_2 = 5;
				}
				break;
			
			case 5:
				if (BitTest(Local_413.f_1, 8))
				{
					Local_413.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam3, var uParam4)
{
	if (func_9(Global_2738934.f_869) && func_9(Global_2738934.f_870))
	{
		if (!unk_0x2FC2FDC413532977(*uParam0))
		{
			if (func_6(uParam0, Global_2738934.f_869, Param2, fParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				unk_0x983B8E72C35B01F2(unk_0xE38610F405049F71(*uParam0), 1);
			}
		}
		if (!unk_0x2FC2FDC413532977(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2738934.f_870, -1, 1, 1, 1))
			{
				unk_0xAAA71DD7E9059338(unk_0xC35A3A4C05A4831B(*uParam1), 1);
				unk_0x55098D9E9AD58806(Global_2738934.f_869);
				unk_0x55098D9E9AD58806(Global_2738934.f_870);
				unk_0x11C125313CB8ADA2(unk_0xE38610F405049F71(*uParam0), 0);
				unk_0x379E96D5D36B27DC(unk_0xC35A3A4C05A4831B(*uParam1), 1);
				func_421(uParam4, 8, unk_0xC35A3A4C05A4831B(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!unk_0x2FC2FDC413532977(*uParam0) || !unk_0x2FC2FDC413532977(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xADCE9BCAFCB83364(1))
	{
		return 0;
	}
	if (!unk_0x2FC2FDC413532977(uParam1))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x9F7A52B1537567AC(unk_0x8728A378EF2B46B2(unk_0xE38610F405049F71(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		unk_0x11C125313CB8ADA2(unk_0xC35A3A4C05A4831B(*uParam0), iParam7);
		if (unk_0xC8D49539708A80B4(unk_0xC35A3A4C05A4831B(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x3C1752E361ED8FC9(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
	iVar1 = unk_0x5779387E956077A6(iParam1, Param2, fParam3, iParam5, iParam4, iParam12);
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
			func_7(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_7(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_8(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
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
		Global_2635563.f_3230[1 /*6*/].f_3 = fParam1;
		Global_2635563.f_3230[1 /*6*/].f_4 = iParam2;
		Global_2635563.f_3230[1 /*6*/].f_5 = iParam3;
	}
}

int func_8(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
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

bool func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

void func_10()
{
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			if (bLocal_587)
			{
				if (!BitTest(Local_413.f_1, 2))
				{
					if (BitTest(Local_580[iVar0 /*5*/].f_3, 2))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_413.f_1), 2);
					}
				}
			}
			else if (!BitTest(Local_413.f_1, 1))
			{
				if (BitTest(Local_580[iVar0 /*5*/].f_3, 1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_413.f_1), true);
				}
			}
		}
		iVar0++;
	}
}

void func_12(int iParam0)
{
	if (!func_15(unk_0x259BE71D8A81D4FA(), 1))
	{
		return;
	}
	if (!func_13(unk_0x259BE71D8A81D4FA()) == iParam0)
	{
		return;
	}
}

int func_13(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2657971[iParam0 /*465*/].f_1;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
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

bool func_15(int iParam0, bool bParam1)
{
	if (func_19() != 0)
	{
		return func_13(iParam0) != 0;
	}
	return func_16(iParam0, bParam1, 0);
}

int func_16(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_17(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845281[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_17(int iParam0)
{
	return func_18(iParam0);
}

var func_18(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

int func_19()
{
	return Global_32948;
}

int func_20(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_21(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x93E08E0F531E2C35())
		{
			func_22(uParam0, 0, 0);
		}
	}
}

void func_22(var uParam0, bool bParam1, bool bParam2)
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

void func_23()
{
	switch (func_425(unk_0xAE032CEDCF23C6D5()))
	{
		case -2:
			func_207();
			break;
		
		case -1:
			func_206();
			break;
		
		case 0:
			func_32();
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			func_24();
			break;
	}
}

void func_24()
{
	switch (iLocal_586)
	{
		case 0:
			if (!func_25(iLocal_60))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3), 2);
				Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = 99;
			}
			break;
	}
}

bool func_25(int iParam0)
{
	return func_26(iParam0, 5, 1);
}

int func_26(int iParam0, int iParam1, bool bParam2)
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
		if (func_19() == 0)
		{
			return BitTest(func_27(func_31(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_28(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_28(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_29(uParam1));
}

int func_29(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_30();
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

int func_30()
{
	return Global_1574926;
}

int func_31(int iParam0)
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

void func_32()
{
	int iVar0;
	
	if (func_205())
	{
		if (func_14(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			func_204(0);
		}
	}
	if (!func_203(&uLocal_238))
	{
		func_22(&uLocal_238, 0, 0);
	}
	if (!BitTest(uLocal_581, 21))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 21);
	}
	if (!BitTest(uLocal_581, 3))
	{
		if (!func_203(&uLocal_236))
		{
			func_22(&uLocal_236, 0, 0);
		}
		else if (BitTest(uLocal_581, 21))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					if (func_202(&uLocal_236, 3000, 0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 3);
					}
				}
			}
		}
		if (func_202(&uLocal_236, 40000, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 3);
		}
	}
	else if (!BitTest(uLocal_581, 16))
	{
		if (!unk_0x4C705AAF75363287())
		{
			if (!unk_0x4D9174D8796EA622())
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 16);
				func_201(&uLocal_236);
			}
		}
	}
	if (BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 2))
	{
		if (!func_203(&uLocal_242))
		{
			func_22(&uLocal_242, 0, 0);
		}
		else if (!BitTest(uLocal_582, 1))
		{
			if (func_202(&uLocal_242, 10000, 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, true);
				func_201(&uLocal_242);
			}
		}
		else if (BitTest(uLocal_581, 19))
		{
			if (!BitTest(uLocal_581, 18))
			{
				if (!func_199() || func_202(&uLocal_236, 5000, 0))
				{
					func_198(0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 18);
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 244, 0);
						unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 243, 0);
						unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 242, 0);
					}
				}
			}
		}
	}
	if (BitTest(uLocal_581, 18))
	{
		if (!BitTest(uLocal_581, 2))
		{
			if (unk_0x9390801B06EE998F())
			{
				iVar0 = 0;
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 3);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 5);
				if (func_101(&uLocal_248, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_100(1);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 2);
					if (!BitTest(uLocal_581, 20))
					{
						func_85(19, 3, 1);
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 20);
					}
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						unk_0x0974B2530CABDF56(unk_0x4A8C381C258A124D(), 1, 1);
					}
				}
			}
		}
		else if (!func_84(0))
		{
			if (!func_83())
			{
				if (!func_81())
				{
					if (!BitTest(uLocal_581, 12))
					{
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							unk_0x0974B2530CABDF56(unk_0x4A8C381C258A124D(), 0, 1);
							unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 244, 1);
							unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 243, 1);
							unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 242, 1);
						}
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 12);
						func_22(&uLocal_240, 0, 0);
						func_22(&uLocal_244, 0, 0);
					}
				}
			}
		}
		if (BitTest(uLocal_581, 12))
		{
			if (!BitTest(uLocal_581, 17))
			{
				if (!unk_0x4D9174D8796EA622())
				{
					func_77();
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 17);
					func_201(&uLocal_236);
				}
			}
			else if (!func_199())
			{
				if (!BitTest(uLocal_581, 23))
				{
					if (func_202(&uLocal_244, 4500, 0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 23);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3), 3);
					}
				}
				if (func_202(&uLocal_240, 15000, 0))
				{
					if (!BitTest(uLocal_581, 22))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 22);
					}
				}
				if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
				{
					if (BitTest(uLocal_581, 14))
					{
						unk_0x8744D2E3FC95740E(&uLocal_581, 14);
					}
					if (!func_25(iLocal_60))
					{
						if (BitTest(uLocal_581, 13))
						{
							unk_0x8744D2E3FC95740E(&uLocal_581, 13);
						}
						if (BitTest(uLocal_581, 25) || (!BitTest(uLocal_581, 25) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)))
						{
							if (!BitTest(uLocal_581, 0))
							{
								if (BitTest(uLocal_581, 15))
								{
									unk_0x8744D2E3FC95740E(&uLocal_581, 15);
								}
								if (unk_0xC450B06E5AAA0985(Global_101585.f_267[iLocal_60]))
								{
									func_71("GET_AMMU", 0);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, false);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 25);
									if (unk_0xC450B06E5AAA0985(Global_101585.f_267[iLocal_60]))
									{
										if (!BitTest(Global_2738934.f_868, 2))
										{
											unk_0xBC64B805EE071A37(Global_101585.f_267[iLocal_60], 1);
										}
										func_417(iLocal_60, 1);
									}
								}
							}
							else if (BitTest(Global_2738934.f_868, 2))
							{
								if (unk_0xC450B06E5AAA0985(Global_101585.f_267[iLocal_60]))
								{
									if (!BitTest(uLocal_581, 15))
									{
										unk_0xBC64B805EE071A37(Global_101585.f_267[iLocal_60], 0);
										unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 15);
									}
								}
							}
							else if (unk_0xC450B06E5AAA0985(Global_101585.f_267[iLocal_60]))
							{
								if (BitTest(uLocal_581, 15))
								{
									unk_0xBC64B805EE071A37(Global_101585.f_267[iLocal_60], 1);
									unk_0x8744D2E3FC95740E(&uLocal_581, 15);
								}
							}
						}
					}
					else
					{
						if (BitTest(uLocal_581, 0))
						{
							unk_0x8744D2E3FC95740E(&uLocal_581, false);
						}
						if (!BitTest(uLocal_581, 13))
						{
							func_71("GET_GUN", 0);
							func_70(1);
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 13);
						}
					}
				}
				else if (!BitTest(uLocal_581, 14))
				{
					unk_0x428C32CC68809A35(1);
					if (BitTest(uLocal_581, 0))
					{
						unk_0x8744D2E3FC95740E(&uLocal_581, false);
					}
					if (BitTest(uLocal_581, 13))
					{
						unk_0x8744D2E3FC95740E(&uLocal_581, 13);
					}
					if (unk_0xC450B06E5AAA0985(Global_101585.f_267[iLocal_60]))
					{
						unk_0xBC64B805EE071A37(Global_101585.f_267[iLocal_60], 0);
						unk_0x861AC9C2D48CEA7F(Global_101585.f_267[iLocal_60], 0);
						func_417(iLocal_60, 0);
					}
					func_71("LOSE_COP", 0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 14);
				}
			}
		}
	}
	else if (func_202(&uLocal_238, 300000, 0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 18);
	}
	if (!BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 0))
	{
		if (((unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_pistol"), 0) || unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_combatpistol"), 0)) || unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_appistol"), 0)) || unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_microsmg"), 0))
		{
			if (func_68())
			{
				func_63(1);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3), false);
				if (func_25(iLocal_60))
				{
				}
			}
		}
		else
		{
			func_45(400);
		}
	}
	else if (!BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 1))
	{
		if (!func_43())
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3), true);
			func_36();
			func_35("FM_IHELP_AMMU", -1);
			if (!BitTest(uLocal_581, 31))
			{
				func_33(119, 1, -1, 1);
				func_33(115, 1, -1, 1);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 31);
			}
			func_201(&uLocal_236);
			if (bLocal_587)
			{
				if (bLocal_588)
				{
					Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = 3;
				}
				else
				{
					Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_33(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_34(iParam0, iParam2);
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, iParam3);
	}
}

var func_34(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(2, uParam0, func_29(uParam1));
}

void func_35(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_36()
{
	if (!func_42())
	{
		return;
	}
	if (!unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == Global_1574765.f_9)
	{
		return;
	}
	func_37();
}

void func_37()
{
	func_39();
	func_38(0);
}

void func_38(bool bParam0)
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

void func_39()
{
	if (!func_41())
	{
	}
	if (func_42())
	{
		unk_0x7C59282918D59E1B(&(Global_1574765.f_12));
		func_40();
		unk_0xD4C961FBE468D19D();
	}
}

void func_40()
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

int func_41()
{
	if (!func_42())
	{
		return 0;
	}
	unk_0x32A590914F10401C(&(Global_1574765.f_12));
	func_40();
	return unk_0x96DEE7666C9409E5();
}

int func_42()
{
	if (Global_1574765 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_43()
{
	return ((((((((((func_44(28) || func_44(29)) || func_44(30)) || func_44(31)) || func_44(32)) || func_44(33)) || func_44(34)) || func_44(35)) || func_44(36)) || func_44(37)) || func_44(38));
}

int func_44(int iParam0)
{
	return func_26(iParam0, 6, 1);
}

void func_45(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		iVar0 = func_60(unk_0x259BE71D8A81D4FA());
		if (iVar0 < iParam0)
		{
			if (func_59())
			{
				func_46(joaat("service_earn_holdups"), (iParam0 - iVar0), &uVar1, 0, 0, 0);
			}
			else
			{
				unk_0xC972841F26BA2800((iParam0 - iVar0));
			}
		}
	}
}

void func_46(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_59())
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
				func_47(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_47(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_47(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_47(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_47(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_59())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_30()) || unk_0x34F31012FED51A0F())
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
			*uParam0 = func_54(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_53(1, iParam4);
			Global_4537455 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_48(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_48(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_127.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_49(iParam0);
	}
}

void func_49(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_59())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_52(iParam0))
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
		func_50(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_50(var uParam0)
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
	func_51(&(uParam0->f_14));
	func_51(&(uParam0->f_14.f_13));
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

void func_51(var uParam0)
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

int func_52(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_53(int iParam0, var uParam1)
{
	Global_2698855 = uParam1;
	Global_2698854 = iParam0;
}

int func_54(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_59())
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
				func_55(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_55(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_57(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_56();
		unk_0x71A6F836422FDD2B(1, &Var0, 37, iVar1, Var0.f_0);
	}
}

void func_56()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_57(bool bParam0)
{
	var uVar0;
	
	if (func_58(bParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam0);
	}
	return uVar0;
}

int func_58(var uParam0)
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

int func_59()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

var func_60(int iParam0)
{
	var uVar0;
	
	uVar0 = func_61(iParam0);
	return uVar0;
}

int func_61(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return unk_0x00BDC89742B13CD2(-1);
		}
		else if (func_62(iParam0))
		{
			return Global_1845281[iParam0 /*883*/].f_206.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672855.f_1, iParam0);
}

void func_63(bool bParam0)
{
	func_64(28, bParam0);
	func_64(29, bParam0);
	func_64(30, bParam0);
	func_64(31, bParam0);
	func_64(32, bParam0);
	func_64(33, bParam0);
	func_64(34, bParam0);
	func_64(35, bParam0);
	func_64(36, bParam0);
	func_64(37, bParam0);
	func_64(38, bParam0);
}

void func_64(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 14, 1))
		{
			func_67(iParam0, 14, 1);
		}
	}
	else if (func_26(iParam0, 14, 1))
	{
		func_65(iParam0, 14, 1);
	}
}

void func_65(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x8744D2E3FC95740E(&(Global_101585.f_1414[iParam0]), iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_19() == 0)
		{
			uVar0 = func_27(func_31(iParam0), -1);
			unk_0x8744D2E3FC95740E(&uVar0, bParam1);
			func_66(func_31(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_668[iParam0]), bParam1);
	}
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_28(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

void func_67(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101585.f_1414[iParam0]), bParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_19() == 0)
		{
			uVar0 = func_27(func_31(iParam0), -1);
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam1);
			func_66(func_31(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_668[iParam0]), bParam1);
	}
}

bool func_68()
{
	return ((((((((((func_69(28) || func_69(29)) || func_69(30)) || func_69(31)) || func_69(32)) || func_69(33)) || func_69(34)) || func_69(35)) || func_69(36)) || func_69(37)) || func_69(38));
}

int func_69(int iParam0)
{
	return func_26(iParam0, 3, 0);
}

void func_70(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1919772, 19))
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1919772, 19);
		}
	}
	else if (BitTest(Global_1919772, 19))
	{
		unk_0x8744D2E3FC95740E(&Global_1919772, 19);
	}
}

void func_71(char* sParam0, bool bParam1)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam0) > 23)
	{
		return;
	}
	if (func_75(sParam0))
	{
		return;
	}
	func_37();
	Global_1574765 = 0;
	StringCopy(&(Global_1574765.f_1), unk_0x1AF90EB93E0012D6(), 32);
	Global_1574765.f_9 = unk_0x70E57E9927B6BA58(&(Global_1574765.f_1));
	StringCopy(&(Global_1574765.f_12), sParam0, 16);
	func_74();
	func_73(bParam1);
	func_72();
}

void func_72()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1574765.f_59), true);
}

void func_73(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1574765.f_59), false);
		return;
	}
	unk_0x8744D2E3FC95740E(&(Global_1574765.f_59), false);
}

void func_74()
{
	Global_1574765.f_10 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 86400000);
	Global_1574765.f_11 = unk_0x7E3F74F641EE6B27();
}

bool func_75(char* sParam0)
{
	if (!func_42())
	{
		return 0;
	}
	if (Global_1574765 == 11)
	{
		return func_76(sParam0);
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574765.f_12));
}

bool func_76(char* sParam0)
{
	if (!func_42())
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574765.f_16));
}

void func_77()
{
	struct<13> Var0;
	bool bVar1;
	bool bVar2;
	
	Var0 = { func_80(unk_0x259BE71D8A81D4FA()) };
	bVar1 = unk_0xFE087BC8EB584AA2();
	bVar2 = func_79(&Var0);
	if (!bVar1 && !bVar2)
	{
		func_78("HLP_TAXI3", 9000);
	}
	else if (bVar1 && !bVar2)
	{
		func_78("HLP_SOC2", 9000);
	}
	else if (bVar1 && bVar2)
	{
		func_78("HLP_SOC1", 9000);
	}
}

void func_78(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 0, iParam1);
}

int func_79(var uParam0)
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

struct<13> func_80(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

bool func_81()
{
	return func_82();
}

bool func_82()
{
	return Global_1663588.f_40 == 3;
}

int func_83()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0)
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

void func_85(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_9486 = iParam0;
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		func_92();
		if (iParam1 == 4)
		{
			func_91(iParam0, 0, 1);
			func_91(iParam0, 1, 1);
			func_91(iParam0, 2, 1);
			func_90(iParam0, 0, 1);
			func_90(iParam0, 1, 1);
			func_90(iParam0, 2, 1);
		}
		else
		{
			if (func_89(iParam0, iParam1) == 1 && func_88(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_91(iParam0, iVar0, 1);
			func_90(iParam0, iVar0, 1);
			if (iParam0 == 172 && !BitTest(Global_2738934.f_6969, 4))
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_79389)
			{
				if (iParam1 != 4)
				{
					if (Global_20930 != iParam1)
					{
						Global_9459[iParam1 /*4*/] = { func_87(iParam0) };
						Global_9476[iParam1] = 1;
						Global_9481[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20930)
					{
					}
					else
					{
						Global_9410[1 /*6*/] = { func_87(iParam0) };
						Global_9410[1 /*6*/].f_5 = iParam1;
						func_86();
					}
				}
				else
				{
					Global_9410[1 /*6*/] = { func_87(iParam0) };
					Global_9410[1 /*6*/].f_5 = iParam1;
					func_86();
				}
			}
			else
			{
				Global_9410[1 /*6*/] = { func_87(iParam0) };
				Global_9410[1 /*6*/].f_5 = iParam1;
				func_86();
			}
		}
	}
}

void func_86()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0xFACCDE46E24AD056(&(Global_2169[Global_9486 /*29*/].f_7)), 64);
	if (Global_9505 == 0)
	{
		unk_0xCCDB0041859B85A6("");
		StringCopy(&cVar1, unk_0xFACCDE46E24AD056(&(Global_9410[1 /*6*/])), 64);
		sVar2 = unk_0xFACCDE46E24AD056("CELL_253");
		unk_0x5C7E2225D7451992(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0xCCDB0041859B85A6("CELL_255");
		unk_0xACF853FB3F6EA7D4(&(Global_9410[1 /*6*/]));
		unk_0x5C7E2225D7451992(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x8744D2E3FC95740E(&Global_8800, false);
}

struct<4> func_87(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_3;
}

int func_88(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

int func_89(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_12[iParam1];
}

void func_90(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_91(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_92()
{
	if (func_99(14))
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
		Global_20930 = func_93();
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

var func_93()
{
	func_94();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_94()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_97(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_96(unk_0x4A8C381C258A124D());
			if (func_95(iVar0) && (!func_99(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_95(Global_113969.f_2366.f_539.f_4321))
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

bool func_95(int iParam0)
{
	return iParam0 < 3;
}

int func_96(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_97(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_97(int iParam0)
{
	if (func_95(iParam0))
	{
		return func_98(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_98(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_99(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 17);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8801, 17);
	}
}

int func_101(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_196())
	{
		return 0;
	}
	if (func_195())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_102(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_102(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD6F9DEE4765092A9(sParam2))
	{
		return 0;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam3))
	{
		return 0;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6());
	iVar1 = func_194(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xD6F9DEE4765092A9(sParam7))
	{
		iVar2 = unk_0x70E57E9927B6BA58(sParam7);
	}
	if (func_193(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_189(uParam6))
	{
		return 0;
	}
	if (func_186(iVar0, iVar1, iVar2))
	{
		if (func_185())
		{
			return 0;
		}
		func_184();
		return func_109(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_108(iParam4))
	{
		return 0;
	}
	func_103(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_103(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1663588.f_40.f_1 = iParam0;
	Global_1663588.f_40.f_2 = iParam1;
	Global_1663588.f_40.f_3 = iParam2;
	StringCopy(&(Global_1663588.f_40.f_4), sParam3, 16);
	Global_1663588.f_40.f_8 = iParam4;
	Global_1663588.f_40.f_9 = iParam5;
	Global_1663588.f_40.f_14 = uParam6;
	func_104(iParam4);
	func_184();
	Global_1663588.f_40.f_13 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 7000);
}

void func_104(int iParam0)
{
	if (func_107(iParam0))
	{
		func_106();
		return;
	}
	func_105();
}

void func_105()
{
	Global_1663588.f_40.f_10 = 0;
}

void func_106()
{
	Global_1663588.f_40.f_10 = 1;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_108(int iParam0)
{
	return iParam0 > Global_1663588.f_40.f_8;
}

int func_109(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_183();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_180(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_177(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_180(uParam0, sParam3, sParam4);
		}
		return func_159(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_158(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_147(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_146(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_110(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_110(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_145();
	bVar0 = true;
	if (func_112(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_111(120000);
		return 1;
	}
	return 0;
}

void func_111(int iParam0)
{
	Global_1663588.f_40.f_11 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), iParam0);
	Global_1663588.f_40.f_12 = 1;
}

int func_112(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_144();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xBD6CA019F46AB947(iVar0);
		iVar1 = func_138(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC9FA0059132D5731(unk_0x7E3F74F641EE6B27(), Global_1663588.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_137(sParam5, bParam6, &iVar3);
	uVar5 = func_135(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		iVar6++;
		if (!unk_0xD6F9DEE4765092A9(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x1B79E937E91F40C3(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xD6F9DEE4765092A9(sVar2))
	{
		bVar12 = func_134(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_116(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_115();
	}
	func_145();
	func_114();
	func_113();
	return 1;
}

void func_113()
{
	Global_1663588.f_57 = 0;
	Global_1663588.f_57.f_1 = 0;
}

void func_114()
{
	Global_1663588.f_40 = 3;
}

void func_115()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 8);
}

int func_116(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_117(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9507 = iParam6;
			unk_0x0B0C9A0F9AAEB7F0(&Global_4543084, false);
		}
		return 1;
	}
	return 0;
}

int func_117(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x1B79E937E91F40C3(sParam14, sParam15))
	{
	}
	func_92();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20930 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20930 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20930 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()))
			{
				return 0;
			}
		}
		if (Global_4543069 == 1)
		{
			return 0;
		}
		if (unk_0x486FF5D06E9659F1(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x486FF5D06E9659F1(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_133() == 0)
	{
		func_131();
		return 0;
	}
	func_130(Global_4543068);
	StringCopy(&(Global_4541819[Global_4543068 /*104*/]), sParam1, 64);
	Global_4541819[Global_4543068 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4541819[Global_4543068 /*104*/].f_24 = iParam2;
	}
	Global_4541819[Global_4543068 /*104*/].f_25 = iParam7;
	Global_4541819[Global_4543068 /*104*/].f_26 = uParam8;
	Global_4541819[Global_4543068 /*104*/].f_29 = uParam9;
	Global_4541819[Global_4543068 /*104*/].f_30 = uParam12;
	Global_4541819[Global_4543068 /*104*/].f_31 = uParam11;
	Global_4541819[Global_4543068 /*104*/].f_28 = 0;
	Global_4541819[Global_4543068 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_33), sParam4, 64);
	Global_4541819[Global_4543068 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_50), sParam5, 64);
	Global_4541819[Global_4543068 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_83), sParam15, 64);
	func_92();
	switch (iParam16)
	{
		case 3:
			Global_4541819[Global_4543068 /*104*/].f_99[Global_20930] = 1;
			break;
		
		case 0:
			Global_4541819[Global_4543068 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4541819[Global_4543068 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4541819[Global_4543068 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20930)
		{
			case 0:
				func_129(0);
				break;
			
			case 1:
				func_129(1);
				break;
			
			case 2:
				func_129(2);
				break;
			
			case 3:
				func_129(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4543069 = 1;
				break;
			
			case 0:
				Global_4543069 = 1;
				break;
			
			case 2:
				Global_4543069 = 1;
				break;
			
			case 1:
				Global_4543069 = 1;
				break;
			}
	}
	Global_23355[Global_4543068] = 0;
	if (bParam10)
	{
		func_92();
		if (Global_20873)
		{
			StringCopy(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case 0:
					StringCopy(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_128())
			{
				unk_0xBF3D28CA44F3BE2D(-1, "Text_Arrive_Tone", &Global_20919, 1);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_127(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_123(1);
			func_127(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_118(iParam0, sParam1, bVar1, func_122(unk_0x259BE71D8A81D4FA()));
	return 1;
}

void func_118(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	struct<14> Var0;
	
	if (!func_119())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = -1180597171;
	Var0.f_2 = unk_0x70E57E9927B6BA58(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1971465.f_7;
	Var0.f_7 = Global_1971465.f_8;
	Var0.f_8 = Global_1971465.f_9;
	Var0.f_9 = Global_1971465.f_10;
	Var0.f_10 = Global_1971465.f_11;
	Var0.f_11 = Global_1971465.f_12;
	Var0.f_12 = Global_1971465.f_13;
	Var0.f_13 = Global_1971465.f_14;
	unk_0x7114D68882DD5DFB(&Var0);
	if (bParam2)
	{
		Global_1971482 = -1;
	}
}

int func_119()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_144())
	{
		return 0;
	}
	if (func_120(unk_0x259BE71D8A81D4FA()))
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

bool func_120(int iParam0)
{
	return func_121(iParam0, 20);
}

var func_121(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

var func_122(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_206.f_6;
}

void func_123(int iParam0)
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
	
	Global_23354 = 0;
	Global_9405 = iParam0;
	func_126();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_99(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar2 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21149 = 0;
								}
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_125(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar2);
								unk_0xE6B753D52F4CA222();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_124(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113969.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113969.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113969.f_14144[iVar3 /*104*/].f_99[Global_20930] == 1)
											{
												Global_23354++;
											}
										}
									}
									iVar3++;
								}
								func_124(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79389)
								{
									iVar4 = 0;
									iVar4 = Global_4541818;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541819[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541819[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541819[iVar5 /*104*/].f_99[Global_20930] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_124(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20930)
									{
										case 0:
											iVar6 = Global_45261;
											break;
										
										case 1:
											iVar6 = Global_45262;
											break;
										
										case 2:
											iVar6 = Global_45263;
											break;
										
										default:
											break;
									}
									func_124(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_124(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_125(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(Global_8806);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8801, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_125(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar7);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar8 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21149 = 0;
								}
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_125(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar8);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 8)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_125(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if ((iVar1 == 23 && unk_0x1B79E937E91F40C3(&(Global_8807[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8801, 6))
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_125(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_124(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_124(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_124(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam6));
	}
	if (!unk_0xD6F9DEE4765092A9(sParam7))
	{
		func_125(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		func_125(sParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam9))
	{
		func_125(sParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam10))
	{
		func_125(sParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam11))
	{
		func_125(sParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_125(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_126()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_127(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam6));
	}
	unk_0xE6B753D52F4CA222();
}

bool func_128()
{
	return Global_1575083;
}

void func_129(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113969.f_14054[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_130(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x4BA5A16068183C5E();
	uVar1 = unk_0x18E502A71E28968C();
	uVar2 = unk_0x5295501D0862870D();
	uVar3 = unk_0xB12880C92EA6EE15();
	uVar4 = unk_0x8825A6E0A30BDCB8() + 1;
	uVar5 = unk_0x7598FE4545010A75();
	Global_4541819[iParam0 /*104*/].f_18 = uVar0;
	Global_4541819[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4541819[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4541819[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4541819[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4541819[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_131()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4543068 = 11;
	Global_4541819[Global_4543068 /*104*/].f_18 = -1;
	Global_4541819[Global_4543068 /*104*/].f_18.f_1 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_2 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_3 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_132(Global_4541819[iVar2 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
		{
			Global_4543068 = iVar2;
		}
		iVar2++;
	}
	Global_4541819[Global_4543068 /*104*/].f_24 = 1;
}

int func_132(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_133()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4541819[iVar2 /*104*/].f_24 == 0)
		{
			Global_4543068 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4543068 = 11;
	Global_4541819[Global_4543068 /*104*/].f_18 = -1;
	Global_4541819[Global_4543068 /*104*/].f_18.f_1 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_2 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_3 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4541819[iVar2 /*104*/].f_24 == 0 || Global_4541819[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_132(Global_4541819[iVar2 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
			{
				Global_4543068 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4543068 == 11)
	{
		return 0;
	}
	Global_4541819[Global_4543068 /*104*/].f_99[0] = 0;
	Global_4541819[Global_4543068 /*104*/].f_99[1] = 0;
	Global_4541819[Global_4543068 /*104*/].f_99[2] = 0;
	return 1;
}

int func_134(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_117(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9507 = iParam10;
			unk_0x0B0C9A0F9AAEB7F0(&Global_4543084, false);
		}
		return 1;
	}
	return 0;
}

int func_135(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_136(2, iParam1);
	return iParam0;
}

void func_136(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_137(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return sLocal_16;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, sLocal_16))
	{
		return sLocal_16;
	}
	func_136(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xFACCDE46E24AD056(sParam0);
}

int func_138(int iParam0)
{
	int iVar0;
	
	iVar0 = func_141(iParam0);
	if (iVar0 == -1)
	{
		func_139(iParam0, 1);
		return 0;
	}
	Global_1681225[iVar0 /*5*/].f_4 = 1;
	return Global_1681225[iVar0 /*5*/].f_2;
}

void func_139(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_141(iParam0) != -1)
	{
		return;
	}
	if (Global_1681388)
	{
		if (iParam0 == Global_1681388.f_1)
		{
			return;
		}
	}
	if (func_140(iParam0))
	{
		return;
	}
	if (Global_1681426 >= 32)
	{
		return;
	}
	Global_1681393[Global_1681426] = iParam0;
	Global_1681426++;
	if (bParam1)
	{
	}
}

int func_140(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681426)
	{
		if (Global_1681393[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_141(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
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
		if (Global_1681225[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xCF3FA9D6B87D2277(Global_1681225[iVar0 /*5*/].f_2) && unk_0x445B6F53EA9E6A6F(Global_1681225[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_142(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_142(int iParam0)
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
	func_143(&(Global_1681225[iVar2 /*5*/]));
	Global_1681386 = (Global_1681386 - 1);
}

void func_143(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_144();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x76CD105BCAC6EB9F())
	{
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();
	}
}

int func_144()
{
	return -1;
}

void func_145()
{
	Global_1663588.f_40.f_9 = 4;
}

int func_146(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_145();
	bVar0 = false;
	return func_112(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_147(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_148(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_148(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_144();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xBD6CA019F46AB947(iVar0);
		iVar1 = func_138(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC9FA0059132D5731(unk_0x7E3F74F641EE6B27(), Global_1663588.f_40.f_13))
			{
				return 0;
			}
		}
		Global_23347 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_137(sParam5, bParam6, &iVar3);
	uVar5 = func_135(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		iVar6++;
		if (!unk_0xD6F9DEE4765092A9(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x1B79E937E91F40C3(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xD6F9DEE4765092A9(sVar2))
	{
		bVar12 = func_157(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_150(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_115();
	}
	func_149();
	func_114();
	func_113();
	return 1;
}

void func_149()
{
	Global_1663588.f_40.f_9 = 3;
}

int func_150(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x8744D2E3FC95740E(&Global_8800, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_151(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9507 = iParam6;
			Global_9410[3 /*6*/] = { func_87(iParam0) };
			Global_9487 = iParam0;
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, true);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

int func_151(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x1B79E937E91F40C3(sParam14, sParam15))
	{
	}
	func_92();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20930 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20930 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20930 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()))
			{
				return 0;
			}
		}
		if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x486FF5D06E9659F1(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x486FF5D06E9659F1(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_156() == 0)
	{
		func_154();
		return 0;
	}
	func_153(Global_23353);
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/]), sParam1, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_24 = iParam2;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_25 = iParam7;
	Global_113969.f_14144[Global_23353 /*104*/].f_26 = uParam8;
	Global_113969.f_14144[Global_23353 /*104*/].f_29 = uParam9;
	Global_113969.f_14144[Global_23353 /*104*/].f_30 = uParam12;
	Global_113969.f_14144[Global_23353 /*104*/].f_31 = uParam11;
	Global_113969.f_14144[Global_23353 /*104*/].f_28 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_33), sParam4, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_50), sParam5, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8800, 10))
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
		Global_9506 = 4;
		func_129(0);
		func_129(2);
		func_129(1);
	}
	else
	{
		func_92();
		switch (iParam16)
		{
			case 3:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[Global_20930] = 1;
				break;
			
			case 0:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20930)
			{
				case 0:
					func_129(0);
					Global_9506 = 0;
					break;
				
				case 1:
					func_129(1);
					Global_9506 = 1;
					break;
				
				case 2:
					func_129(2);
					Global_9506 = 2;
					break;
				
				case 3:
					func_129(3);
					Global_9506 = 3;
					break;
				
				default:
					Global_9506 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8800, 10))
		{
			Global_113969.f_14054[0 /*20*/].f_17 = 1;
			Global_113969.f_14054[1 /*20*/].f_17 = 1;
			Global_113969.f_14054[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113969.f_14054[Global_20930 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113969.f_14054[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113969.f_14054[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113969.f_14054[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_23355[Global_23353] = 0;
	if (bParam10)
	{
		func_92();
		if (Global_20873)
		{
			StringCopy(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case 0:
					StringCopy(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_128())
			{
				unk_0xBF3D28CA44F3BE2D(-1, "Text_Arrive_Tone", &Global_20919, 1);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_127(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_123(1);
			func_127(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_152(iParam0, sParam1, bVar1, func_122(unk_0x259BE71D8A81D4FA()));
	return 1;
}

void func_152(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	struct<14> Var0;
	
	if (!func_119())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = 1654525105;
	Var0.f_2 = unk_0x70E57E9927B6BA58(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1971465.f_7;
	Var0.f_7 = Global_1971465.f_8;
	Var0.f_8 = Global_1971465.f_9;
	Var0.f_9 = Global_1971465.f_10;
	Var0.f_10 = Global_1971465.f_11;
	Var0.f_11 = Global_1971465.f_12;
	Var0.f_12 = Global_1971465.f_13;
	Var0.f_13 = Global_1971465.f_14;
	unk_0x7114D68882DD5DFB(&Var0);
	if (bParam2)
	{
		Global_1971482 = -1;
	}
}

void func_153(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x4BA5A16068183C5E();
	uVar1 = unk_0x18E502A71E28968C();
	uVar2 = unk_0x5295501D0862870D();
	uVar3 = unk_0xB12880C92EA6EE15();
	uVar4 = unk_0x8825A6E0A30BDCB8() + 1;
	uVar5 = unk_0x7598FE4545010A75();
	Global_113969.f_14144[iParam0 /*104*/].f_18 = uVar0;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_154()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_155(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
		{
			Global_23353 = iVar2;
		}
		iVar2++;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_24 = 1;
}

int func_155(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_156()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 0)
		{
			Global_23353 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 0 || Global_113969.f_14144[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_155(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
			{
				Global_23353 = iVar2;
			}
		}
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_23353 == 34)
	{
		return 0;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 0;
	return 1;
}

int func_157(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x8744D2E3FC95740E(&Global_8800, 10);
	iVar0 = 3;
	if (func_151(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9507 = iParam10;
			Global_9410[3 /*6*/] = { func_87(iParam0) };
			Global_9487 = iParam0;
			StringCopy(&Global_9488, sParam5, 64);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, true);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

int func_158(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
	}
	if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	func_149();
	bVar0 = true;
	if (func_148(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_111(120000);
		return 1;
	}
	return 0;
}

int func_159(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (BitTest(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (BitTest(uParam4, 4))
	{
		bVar0 = func_176(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_165(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_164(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_163(1);
		}
		func_162();
		func_114();
		func_161();
		func_160();
		return 1;
	}
	return 0;
}

void func_160()
{
	Global_2749372 = 0;
}

void func_161()
{
	Global_1663588.f_57 = 1;
	Global_1663588.f_57.f_1 = 0;
}

void func_162()
{
	Global_1663588.f_40.f_9 = 1;
}

void func_163(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8802, false);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8802, false);
	}
}

void func_164(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 20);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 20);
	}
}

int func_165(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_175(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_166(sParam3, iParam4, bParam7);
}

int func_166(char* sParam0, int iParam1, bool bParam2)
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
					func_174();
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
		if (func_173(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_172();
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
				func_92();
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
				if (func_171())
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
			if (func_170())
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
			func_169();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_168();
		func_167();
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
		func_174();
	}
	return 0;
}

void func_167()
{
	if (!func_119())
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

void func_168()
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

void func_169()
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

int func_170()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_171()
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

void func_172()
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

bool func_173(int iParam0, int iParam1)
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

void func_174()
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

void func_175(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_176(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_175(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_22334 = 1;
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
	return func_166(sParam3, iParam4, bParam7);
}

int func_177(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
	}
	if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	if (func_179(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_178();
		func_162();
		func_114();
		func_161();
		func_160();
		return 1;
	}
	return 0;
}

void func_178()
{
	Global_23304 = 0;
}

bool func_179(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_175(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 1;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 1;
	Global_22340 = 0;
	StringCopy(&Global_22434, sParam5, 24);
	Global_2883585 = 0;
	return func_166(sParam3, iParam4, bParam8);
}

int func_180(var uParam0, char* sParam1, char* sParam2)
{
	if (func_182(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_181();
		func_114();
		func_161();
		return 1;
	}
	return 0;
}

void func_181()
{
	Global_1663588.f_40.f_9 = 2;
}

bool func_182(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_175(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_166(sParam2, iParam3, 0);
}

void func_183()
{
	Global_1663588.f_55 = Global_1663588.f_40.f_1;
	Global_1663588.f_55.f_1 = Global_1663588.f_40.f_10;
}

void func_184()
{
	Global_1663588.f_40 = 1;
}

bool func_185()
{
	return Global_1663588.f_40 == 1;
}

int func_186(int iParam0, int iParam1, int iParam2)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	if (Global_1663588.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1663588.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_187(int iParam0)
{
	if (!func_188())
	{
		return 0;
	}
	if (!Global_1663588.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_188()
{
	if (Global_1663588.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_189(var uParam0)
{
	if (func_192())
	{
		return 0;
	}
	if (func_82())
	{
		return 0;
	}
	if (func_84(0))
	{
		return 0;
	}
	if (Global_1574633.f_18 != 0)
	{
		return 0;
	}
	if (Global_1928440 || func_191())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_190())
		{
			return 0;
		}
	}
	return 1;
}

bool func_190()
{
	return unk_0xC9FA0059132D5731(unk_0x7E3F74F641EE6B27(), Global_1680101);
}

int func_191()
{
	if (Global_4521801.f_945 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_192()
{
	return func_170();
}

int func_193(int iParam0, int iParam1, int iParam2)
{
	if (!func_82())
	{
		return 0;
	}
	return func_186(iParam0, iParam1, iParam2);
}

int func_194(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x70E57E9927B6BA58(&cVar0);
}

bool func_195()
{
	return Global_2746025.f_1;
}

int func_196()
{
	if (Global_1663776.f_2)
	{
		return 1;
	}
	return func_197();
}

bool func_197()
{
	return func_192();
}

void func_198(int iParam0)
{
	Global_2749863.f_1072 = iParam0;
}

int func_199()
{
	if (func_200("HLP_TAXI3"))
	{
		return 1;
	}
	if (func_200("HLP_SOC1"))
	{
		return 1;
	}
	if (func_200("HLP_SOC2"))
	{
		return 1;
	}
	return 0;
}

bool func_200(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_201(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_202(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_22(uParam0, bParam2, 0);
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

bool func_203(var uParam0)
{
	return uParam0->f_1;
}

void func_204(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140, 8))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140), 8);
		}
	}
	else if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140, 8))
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140), 8);
	}
}

bool func_205()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140, 8);
}

void func_206()
{
	unk_0x10B228D2FDB7AF16(800);
	if (!bLocal_589 || bLocal_590)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
		}
	}
	if (!bLocal_590)
	{
		Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = 0;
	}
	else
	{
		Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = 3;
	}
}

void func_207()
{
	if (func_213(&Local_61, &(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_4)))
	{
		Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = -1;
	}
	func_208(&Local_61);
}

void func_208(var uParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x4D9174D8796EA622();
	switch (iLocal_585)
	{
		case 0:
			if (BitTest(*uParam0, 18))
			{
				if (!func_203(&uLocal_591))
				{
					func_22(&uLocal_591, 0, 0);
				}
				if (!bVar0)
				{
					if (!unk_0x4C705AAF75363287())
					{
						func_78("HLP_XP1", 9000);
						func_201(&uLocal_591);
						func_22(&uLocal_591, 0, 0);
						iLocal_585++;
					}
				}
				else if (func_202(&uLocal_591, 5000, 0))
				{
					iLocal_585++;
					func_201(&uLocal_591);
					func_22(&uLocal_591, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!bVar0)
			{
				if (!unk_0x4C705AAF75363287())
				{
					func_78("HLP_XP2", 9000);
					func_201(&uLocal_591);
					func_22(&uLocal_591, 0, 0);
					iLocal_585++;
				}
			}
			else if (func_202(&uLocal_591, 5000, 0))
			{
				iLocal_585++;
				func_201(&uLocal_591);
				func_22(&uLocal_591, 0, 0);
			}
			break;
		
		case 2:
			if (!bVar0)
			{
				if (!unk_0x4C705AAF75363287())
				{
					func_78("HLP_RNK1", 9000);
					func_212(1);
					Global_2738934.f_1970 = 1;
					func_211(1, 0, -1);
					func_201(&uLocal_591);
					func_22(&uLocal_591, 0, 0);
					iLocal_585++;
				}
			}
			else if (func_202(&uLocal_591, 5000, 0))
			{
				iLocal_585++;
				func_201(&uLocal_591);
				func_22(&uLocal_591, 0, 0);
			}
			break;
		
		case 3:
			if (!bVar0)
			{
				if (!unk_0x4C705AAF75363287())
				{
					func_198(0);
					if (unk_0x1226C55CA7D2269A() || func_210())
					{
						func_78("HLP_CASHXBX", 9000);
					}
					else if (unk_0x0BA1A956D36B210F() || func_209())
					{
						func_78("HLP_CASHPSN", 9000);
					}
					else
					{
						func_78("HLP_CASHGEN", 9000);
					}
					func_201(&uLocal_591);
					func_22(&uLocal_591, 0, 0);
					iLocal_585 = 99;
				}
			}
			else if (func_202(&uLocal_591, 5000, 0))
			{
				iLocal_585 = 99;
				func_201(&uLocal_591);
				func_22(&uLocal_591, 0, 0);
			}
			break;
		
		case 99:
			if (!BitTest(uLocal_582, 2))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 2);
			}
			break;
	}
}

var func_209()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_210()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

void func_211(bool bParam0, bool bParam1, int iParam2)
{
	switch (bParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1668667.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1668667.f_1046), bParam0);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Global_1668667.f_1046), bParam0);
			}
			break;
	}
}

void func_212(int iParam0)
{
	Global_2738934.f_4650 = iParam0;
}

int func_213(var uParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	
	if (!BitTest(*uParam0, 13))
	{
		if (unk_0x78411E34CF90EA8C(unk_0xFCB6553111578B2F()))
		{
			Var3 = { unk_0xA452B06E281A9014(unk_0xFCB6553111578B2F()) };
			if ((Var3.f_0 != 0f || Var3.f_1 != 0f) || Var3.f_2 != 0f)
			{
				unk_0x2D8D239B3F1D13F9(Var3, 0f, 0f, 0f);
				if (!BitTest(*uParam0, 14))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 14);
				}
			}
		}
	}
	else if (BitTest(*uParam0, 14))
	{
		unk_0xE3F88173F42C071B();
		unk_0x8744D2E3FC95740E(uParam0, 14);
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 337, 1);
	}
	func_394(uParam0);
	unk_0xF8A2800C0B863DB1(1f);
	func_388(uParam0);
	func_387(unk_0x259BE71D8A81D4FA());
	if (!BitTest(*uParam0, 31))
	{
		if (uParam0->f_6 > 0)
		{
			uParam0->f_32 = unk_0x0556019E7EE8EC9A(234,0331f, -1005,203f, -98,4626f, "hei_dlc_garage_high_new");
			if (uParam0->f_32 != 0)
			{
				unk_0x74C1590CC91B3930(uParam0->f_32);
				unk_0x0B0C9A0F9AAEB7F0(uParam0, 31);
			}
		}
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		switch (uParam0->f_6)
		{
			case 0:
				uParam0->f_292 = 1;
				uParam0->f_293 = 0;
				uParam0->f_295 = 0;
				uParam0->f_294 = 0;
				if (unk_0x486FF5D06E9659F1(joaat("fm_intro")) > 0)
				{
					uParam0->f_295 = 1;
					uParam0->f_294 = 1;
				}
				else if (unk_0x486FF5D06E9659F1(func_386()) > 0)
				{
					uParam0->f_295 = 1;
				}
				if (!Global_2738934.f_1969)
				{
					Global_2738934.f_1969 = 1;
					unk_0x4314716E4B544721(0);
				}
				if (!func_205())
				{
					func_204(1);
				}
				if (!unk_0x15CCE8886267624F() && !unk_0x78ABC1D11B34F324())
				{
					unk_0x8F72AF14CE5AACE4(800);
				}
				if (!func_203(&(uParam0->f_15)))
				{
					func_22(&(uParam0->f_15), 0, 0);
				}
				unk_0xD314260005F064BF(&Global_1928941);
				Global_1928942 = 0;
				Global_1928944 = 0;
				Global_1928943 = 0;
				Global_1928945 = 0;
				uParam0->f_19 = { 0f, 0f, 0f };
				if (unk_0x15CCE8886267624F())
				{
					*uParam0 = 0;
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					func_375(0, 0, 0, 1, 1, 1, 0);
					unk_0x61780C0351CEFAD1(1, 0);
					func_420(1);
					unk_0x01C8E9BB989C1EEE(1);
					unk_0x88791F880F624022("EXTRASUNNY");
					unk_0xAFD3BC0F6EBB5474(19, 0, 0);
					unk_0x0A83667A5D36A4FF(1);
					func_374(0);
					unk_0xD82473EFEF7FC622(0);
					func_366(1, 0);
					func_337(1, 1);
					if (unk_0x486FF5D06E9659F1(joaat("fm_intro")) < 1 || !func_336())
					{
						if (uParam0->f_292)
						{
							if (func_335() == 0)
							{
								unk_0xADF8AA2F22A19163("GTAO_INTRO_MALE");
								unk_0x6BD0E2C3AF4FF666(1);
							}
						}
					}
					func_326(14, 0);
					uParam0->f_6 = 1;
					*uParam0 = 0;
					unk_0x8744D2E3FC95740E(uParam0, false);
					unk_0x8744D2E3FC95740E(uParam0, true);
					unk_0x8744D2E3FC95740E(uParam0, 2);
					unk_0x8744D2E3FC95740E(uParam0, 9);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 7);
					uParam0->f_122 = unk_0xA7B0B03284E7503C(-1012,787f, -2747,597f, 15f, -1052,03f, -2716,144f, 25f, 0, 1, 1, 1, 1);
				}
				break;
			
			case 1:
				unk_0xEC9DAA34BBB4658C(joaat("frogger"));
				if (unk_0x6252BC0DD8A320DB(joaat("frogger")))
				{
					if (!uParam0->f_292 || unk_0xEBCB9138B2CABF20())
					{
						if (func_323())
						{
							unk_0x8F8802BEE0727FD5(0);
							func_318(1, 1, 0, 1);
							unk_0xF5AB6155B7363507(0);
							unk_0x428C32CC68809A35(1);
							if (!func_197())
							{
								func_317();
							}
							func_212(0);
							func_316();
							unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Global_1574726, 1, 0, 0, 1);
							unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 1);
							unk_0x44C48AC14D3C09ED(unk_0x4A8C381C258A124D(), false, 0);
							unk_0xDAE61414743C8D1D(0);
							if (unk_0xC450B06E5AAA0985(unk_0x413A91F497E3428F()))
							{
								unk_0x5D3946F818C6B331(unk_0x413A91F497E3428F(), 0f);
							}
							unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), true);
							uParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!unk_0x3555462DB47B7AB1())
				{
					if (!BitTest(*uParam0, 4))
					{
						if (func_315() == 65 || func_315() == 66)
						{
							unk_0xE3F88173F42C071B();
							unk_0xAC48F8E2BF2BEBF7(754,2219f, 1226,831f, 356,5081f, func_314(-14,367f, 0f, 157,3524f), 100f, 0);
							func_201(&(uParam0->f_17));
							func_22(&(uParam0->f_17), 0, 0);
							unk_0x0B0C9A0F9AAEB7F0(uParam0, 4);
						}
					}
					else if (unk_0x16088CC55E7F218A("FM_INTRO_START") && (unk_0x9E2D35FA908F57B4() || func_202(&(uParam0->f_17), 5000, 0)))
					{
						if (!BitTest(*uParam0, 24))
						{
							if (BitTest(*uParam0, 7))
							{
								unk_0x86A2BC11844DEEB3("FM_INTRO_START");
								unk_0x0B0C9A0F9AAEB7F0(uParam0, 24);
								unk_0x0B0C9A0F9AAEB7F0(uParam0, 21);
							}
						}
						else if (unk_0x1304366BC7BE185B() > 0)
						{
							unk_0x6981C3213B841071();
							unk_0xE3349610A15FA0D0(6);
							if (!unk_0x78411E34CF90EA8C(uParam0->f_7))
							{
								uParam0->f_7 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
								unk_0x4CBC5D1BC117616B(uParam0->f_7, 1);
							}
							unk_0xA3774254665BAA82(uParam0->f_7, 754,2219f, 1226,831f, 356,5081f, -14,367f, 0f, 157,3524f, 42,2442f, 0, 1, 1, 2);
							unk_0xA3774254665BAA82(uParam0->f_7, 740,7797f, 1193,923f, 351,1997f, -9,6114f, 0f, 157,8659f, 44,8314f, 6500, 0, 0, 2);
							unk_0x2A09425009DAD0F5(uParam0->f_7, "HAND_SHAKE", 0,15f);
							unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 1, 0);
							func_313(uParam0);
							unk_0x0B0C9A0F9AAEB7F0(uParam0, 11);
							if (uParam0->f_292)
							{
								unk_0x216049890A2D1EC6(9, 9, 9, 9);
								unk_0x89EAF23AE72CD8A8();
							}
							unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), true);
							if (unk_0x15CCE8886267624F())
							{
								unk_0x10B228D2FDB7AF16(800);
							}
							uParam0->f_6 = 6;
						}
					}
				}
				break;
			
			case 6:
				func_312(uParam0, 6);
				func_311(uParam0);
				if (func_310(uParam0, 6, 0))
				{
					unk_0x428C32CC68809A35(1);
					uParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!BitTest(*uParam0, 2))
				{
					unk_0x428C32CC68809A35(1);
					func_78("FMIC_INTRO2", -1);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 2);
				}
				unk_0xA3774254665BAA82(uParam0->f_7, -259,3686f, -553,8571f, 142,6048f, 13,2752f, -0,5186f, -143,3378f, 44,9959f, 0, 1, 1, 2);
				unk_0xA3774254665BAA82(uParam0->f_7, -277,7789f, -569,962f, 142,8625f, 12,4479f, -0,5186f, -134,9992f, 44,9959f, 6000, 0, 0, 2);
				unk_0x216049890A2D1EC6(9, 13, 9, 13);
				uParam0->f_6 = 8;
				break;
			
			case 8:
				func_312(uParam0, 8);
				if (func_311(uParam0))
				{
					func_309(uParam0);
					if (func_310(uParam0, 8, 0))
					{
						uParam0->f_6 = 9;
					}
				}
				break;
			
			case 9:
				if (!BitTest(*uParam0, 10))
				{
					func_308();
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 10);
				}
				unk_0xA3774254665BAA82(uParam0->f_7, -4,6668f, -900,9736f, 184,887f, -1,6106f, -0,5186f, 78,3786f, 45,0069f, 0, 1, 1, 2);
				unk_0xA3774254665BAA82(uParam0->f_7, -23,0087f, -896,4288f, 184,1939f, -2,8529f, -0,5186f, 81,8262f, 45,0069f, 8000, 0, 0, 2);
				if (unk_0xD9F5E1FEFD1329E4(uParam0->f_48, 0))
				{
					unk_0x937DE6A451B47D92(uParam0->f_48);
					unk_0x4285E11B28063EE0(uParam0->f_48, true, 0);
					unk_0xA9F7300B498DDED7(uParam0->f_48);
				}
				uParam0->f_6 = 10;
				break;
			
			case 10:
				if (unk_0xD9F5E1FEFD1329E4(uParam0->f_48, 0))
				{
					unk_0xA9F7300B498DDED7(uParam0->f_48);
				}
				func_312(uParam0, 10);
				if (func_307())
				{
					if (func_306(uParam0))
					{
						if (func_309(uParam0))
						{
							if (func_310(uParam0, 10, 0))
							{
								if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
								{
									unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -2870,804f, 81,4979f, 13,1957f, 1, 0, 0, 1);
									unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), true);
								}
								fVar0 = 5000f;
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[0], 0))
								{
									unk_0x88556DA0593A0748(uParam0->f_92[0], 100, "FM_Intro_uber", 1);
									unk_0x8BCD7C11D27FB9A1(uParam0->f_92[0], fVar0);
								}
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[1], 0))
								{
									unk_0x88556DA0593A0748(uParam0->f_92[1], 101, "FM_Intro_uber", 1);
									unk_0x8BCD7C11D27FB9A1(uParam0->f_92[1], fVar0);
								}
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[2], 0))
								{
									unk_0x88556DA0593A0748(uParam0->f_92[2], 102, "FM_Intro_uber", 1);
									unk_0x8BCD7C11D27FB9A1(uParam0->f_92[2], fVar0);
								}
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[3], 0))
								{
									unk_0x88556DA0593A0748(uParam0->f_92[3], 103, "FM_Intro_uber", 1);
									unk_0x8BCD7C11D27FB9A1(uParam0->f_92[3], fVar0);
								}
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[4], 0))
								{
									unk_0x88556DA0593A0748(uParam0->f_92[4], 104, "FM_Intro_uber", 1);
									unk_0x8BCD7C11D27FB9A1(uParam0->f_92[4], fVar0);
								}
								unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
								unk_0x10B228D2FDB7AF16(800);
								uParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (BitTest(*uParam0, 15))
				{
					unk_0xAFD3BC0F6EBB5474(16, 0, 0);
					func_305(uParam0);
					func_304(uParam0, "race_camera_1", "mp_intro_seq@", -2237,39f, -333,52f, 12,47f, 0f, 0f, 0f, 0,1982f, 1065353216);
					unk_0x584EE85BE0BFA70E(uParam0->f_7, 1);
					unk_0x9BC35A57CAC5458D(uParam0->f_7);
					unk_0x85E6A1E36B5E2E4D(uParam0->f_7, 0);
					unk_0xCAC4020CCF361AC8("MP_INTRO_RACE_SCENE");
					unk_0x216049890A2D1EC6(9, 12, 9, 12);
					func_302(uParam0, 14);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				if (!BitTest(*uParam0, 5))
				{
					func_78("FMIC_RACE1", -1);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 5);
				}
				func_312(uParam0, 14);
				if (func_310(uParam0, 14, 0))
				{
					func_301(uParam0, 23539f, 0);
					unk_0xAFD3BC0F6EBB5474(16, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (BitTest(*uParam0, 15))
				{
					func_304(uParam0, "race_camera_2", "mp_intro_seq@", -2237,39f, -333,52f, 12,47f, 0f, 0f, 0f, 0,39f, 1065353216);
					func_302(uParam0, 15);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				if (!BitTest(uParam0->f_3, 0))
				{
					func_290(uParam0);
				}
				else if (func_289(uParam0) && func_283(uParam0))
				{
					func_281(uParam0);
				}
				func_312(uParam0, 15);
				if (func_310(uParam0, 15, 0))
				{
					func_301(uParam0, 28833,33f, 75f);
					unk_0xAFD3BC0F6EBB5474(16, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (BitTest(*uParam0, 15))
				{
					func_280(uParam0, "race_camera_3a", "mp_intro_seq@", uParam0->f_92[4], 0f, 0f, -0,1f, 0f, 0f, 0f);
					func_302(uParam0, 16);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				if (!BitTest(uParam0->f_3, 0))
				{
					func_290(uParam0);
				}
				else if (func_289(uParam0) && func_283(uParam0))
				{
					func_281(uParam0);
				}
				func_312(uParam0, 16);
				if (func_310(uParam0, 16, 0))
				{
					func_301(uParam0, 29700f, 0);
					unk_0xAFD3BC0F6EBB5474(16, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (BitTest(*uParam0, 15))
				{
					func_304(uParam0, "race_camera_3b", "mp_intro_seq@", -2237,39f, -333,52f, 12,47f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x16B754A9C2FD8E74(uParam0->f_9, 0,7f);
					func_302(uParam0, 17);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				if (!BitTest(*uParam0, 6))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 6);
					func_78("FMIC_RACE2", -1);
				}
				if (!BitTest(uParam0->f_3, 0))
				{
					func_290(uParam0);
				}
				else if (func_289(uParam0) && func_283(uParam0))
				{
					func_281(uParam0);
				}
				func_312(uParam0, 17);
				if (func_310(uParam0, 17, 0))
				{
					func_301(uParam0, 36450f, 0);
					unk_0xAFD3BC0F6EBB5474(16, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (BitTest(*uParam0, 15))
				{
					func_304(uParam0, "race_camera_4", "mp_intro_seq@", -2237,39f, -333,52f, 12,47f, 0f, 0f, 0f, 0, 1065353216);
					func_302(uParam0, 18);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				if (!BitTest(uParam0->f_3, 0))
				{
					func_290(uParam0);
				}
				else if (func_289(uParam0) && func_283(uParam0))
				{
					func_281(uParam0);
				}
				func_312(uParam0, 18);
				if (func_279() && func_310(uParam0, 18, 0))
				{
					func_301(uParam0, 43650f, 0);
					unk_0xAFD3BC0F6EBB5474(16, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (BitTest(*uParam0, 15))
				{
					if (unk_0xFC8BFE4B41177C22(uParam0->f_92[2]))
					{
						unk_0x8C1F7D7A31B2A38E(&(uParam0->f_92[2]));
					}
					if (unk_0xFC8BFE4B41177C22(uParam0->f_92[3]))
					{
						unk_0x8C1F7D7A31B2A38E(&(uParam0->f_92[3]));
					}
					if (unk_0xFC8BFE4B41177C22(uParam0->f_92[4]))
					{
						unk_0x8C1F7D7A31B2A38E(&(uParam0->f_92[4]));
					}
					func_304(uParam0, "race_camera_5", "mp_intro_seq@", -2237,39f, -333,52f, 12,47f, 0f, 0f, 0f, 0, 1065353216);
					func_302(uParam0, 19);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				if (!BitTest(uParam0->f_3, 0))
				{
					func_290(uParam0);
				}
				else
				{
					if (!BitTest(uParam0->f_3, 6))
					{
						if (uParam0->f_32 != 0)
						{
							if (unk_0xD0B0D1BD29678350(uParam0->f_32))
							{
								if (!unk_0x1C2F771CDC87A3A5(uParam0->f_91, 0))
								{
									unk_0x10D289FA72A25777(uParam0->f_91, uParam0->f_32, unk_0x70E57E9927B6BA58("GtaMloRoom001"));
								}
								unk_0xC897319696131088("SE_MP_GARAGE_L_RADIO", 0);
								iVar2 = 0;
								while (iVar2 < 8)
								{
									if (!unk_0x1C2F771CDC87A3A5(uParam0->f_49[iVar2], 0))
									{
										unk_0x10D289FA72A25777(uParam0->f_49[iVar2], uParam0->f_32, unk_0x70E57E9927B6BA58("GtaMloRoom001"));
									}
									iVar2++;
								}
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 6);
							}
						}
					}
					if (func_289(uParam0) && func_283(uParam0))
					{
						func_281(uParam0);
					}
				}
				func_278(uParam0);
				func_277(uParam0);
				func_312(uParam0, 19);
				if (func_310(uParam0, 19, 0) && BitTest(uParam0->f_3, 0))
				{
					if (BitTest(*uParam0, 12))
					{
						unk_0x8744D2E3FC95740E(uParam0, 12);
					}
					uParam0->f_6 = 22;
				}
				else if (func_310(uParam0, 19, -4968))
				{
					if (!BitTest(*uParam0, 12))
					{
						unk_0x428C32CC68809A35(1);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 12);
					}
				}
				else if (func_310(uParam0, 19, -5618))
				{
					if (!BitTest(*uParam0, 30))
					{
						unk_0xDCAFFD08A08087EB("MP_intro_logo", 0, 0);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 30);
					}
				}
				break;
			
			case 22:
				func_278(uParam0);
				func_277(uParam0);
				if (BitTest(uParam0->f_3, 0))
				{
					if (!unk_0x78411E34CF90EA8C(uParam0->f_7))
					{
						uParam0->f_7 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					unk_0x4CBC5D1BC117616B(uParam0->f_7, 1);
					unk_0xA3774254665BAA82(uParam0->f_7, 228,1892f, -1006,758f, -96,8311f, -13,0682f, 0,0572f, 0,7306f, 40,033f, 0, 1, 1, 2);
					unk_0xA3774254665BAA82(uParam0->f_7, 228,2493f, -1006,155f, -98,1976f, -2,3097f, 0,0572f, 0,7306f, 40,033f, 6000, 0, 0, 2);
					unk_0x2A09425009DAD0F5(uParam0->f_7, "HAND_SHAKE", 0,1f);
					unk_0xA88C91AADCB02A8A(uParam0->f_32, unk_0x70E57E9927B6BA58("GtaMloRoom001"));
					unk_0xC897319696131088("SE_MP_GARAGE_L_RADIO", 0);
					unk_0xE3349610A15FA0D0(0);
					unk_0x7BB893EF8F683419(uParam0->f_10, 0f);
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_91))
					{
						unk_0xD8ED11B32DF72E0B(uParam0->f_91, 0, 0);
					}
					if (unk_0xBC2EE32DE886BD08("MP_INTRO_RACE_SCENE"))
					{
						unk_0xB43467C43086A6A1("MP_INTRO_RACE_SCENE");
					}
					unk_0x216049890A2D1EC6(9, 13, 9, 13);
					func_276(uParam0);
					func_275();
					func_78("FMIC_GAR", -1);
					uParam0->f_6 = 23;
				}
				break;
			
			case 23:
				func_278(uParam0);
				func_277(uParam0);
				func_312(uParam0, 23);
				if (func_289(uParam0) && func_283(uParam0))
				{
					func_281(uParam0);
				}
				if (func_310(uParam0, 23, 0))
				{
					unk_0xA3774254665BAA82(uParam0->f_7, 222,9166f, -999,9128f, -99,4285f, 5,5453f, 0,0572f, -57,3736f, 31,9442f, 0, 1, 1, 2);
					unk_0xA3774254665BAA82(uParam0->f_7, 223,1394f, -999,8619f, -99,4078f, 5,5453f, 0,0572f, -56,2437f, 31,9442f, 3500, 0, 0, 2);
					unk_0x7BB893EF8F683419(uParam0->f_10, 0f);
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_91))
					{
						unk_0xD8ED11B32DF72E0B(uParam0->f_91, 0, 0);
					}
					func_273(uParam0, 0);
					func_273(uParam0, 1);
					func_273(uParam0, 5);
					func_273(uParam0, 6);
					uParam0->f_6 = 24;
				}
				break;
			
			case 24:
				func_278(uParam0);
				func_277(uParam0);
				func_312(uParam0, 24);
				if (func_289(uParam0) && func_283(uParam0))
				{
					func_281(uParam0);
				}
				if (func_310(uParam0, 24, 0))
				{
					uParam0->f_6 = 27;
				}
				break;
			
			case 27:
				func_278(uParam0);
				func_277(uParam0);
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -1148,286f, -1639,737f, 5,106698f, 1, 0, 0, 1);
				unk_0x0B0C9A0F9AAEB7F0(uParam0, 13);
				unk_0xA3774254665BAA82(uParam0->f_7, 226,4832f, -978,9647f, -98,874f, -3,0848f, 0,0347f, -115,3629f, 25,2446f, 0, 1, 1, 2);
				unk_0xA3774254665BAA82(uParam0->f_7, 226,4608f, -978,0541f, -98,874f, -3,0848f, 0,0347f, -115,3629f, 25,2446f, 1500, 3, 3, 2);
				unk_0xAFD3BC0F6EBB5474(18, 0, 0);
				func_273(uParam0, 2);
				func_273(uParam0, 7);
				unk_0x55098D9E9AD58806(func_272());
				if (unk_0xFC8BFE4B41177C22(uParam0->f_91))
				{
					unk_0x734A9F4537A31459(&(uParam0->f_91));
				}
				unk_0x0B0C9A0F9AAEB7F0(uParam0, 29);
				uParam0->f_6 = 28;
				break;
			
			case 28:
				func_278(uParam0);
				func_277(uParam0);
				if (!BitTest(*uParam0, 8))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 8);
				}
				if (func_289(uParam0) && func_283(uParam0))
				{
					func_281(uParam0);
				}
				func_312(uParam0, 28);
				if ((unk_0x16088CC55E7F218A("FM_INTRO_DRIVE_START") && BitTest(uParam0->f_3, 3)) && func_310(uParam0, 28, 0))
				{
					uParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (uParam0->f_295)
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						if (func_269(uParam0))
						{
							unk_0xF293D66D4452C854(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							unk_0xF293D66D4452C854(unk_0x4A8C381C258A124D(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0xF293D66D4452C854(unk_0x4A8C381C258A124D(), "MP_Male_Character", 0, 0, 0);
							unk_0xF293D66D4452C854(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_269(uParam0))
				{
					unk_0xF293D66D4452C854(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					unk_0xF293D66D4452C854(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
				{
					unk_0xF293D66D4452C854(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
				{
					unk_0xF293D66D4452C854(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!unk_0x1C2F771CDC87A3A5(uParam0->f_33, 0))
				{
					unk_0x4285E11B28063EE0(uParam0->f_33, true, 0);
					unk_0xF293D66D4452C854(uParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_267(uParam0);
				unk_0xEE3C332799057645("CONTRAILS", 0);
				unk_0x216049890A2D1EC6(9, 9, 9, 9);
				func_78("FMIC_TENN", -1);
				unk_0xED65412F8B26ED99(4);
				func_259(1, 1, 1, 0, 0, 0, 0);
				uParam0->f_6 = 30;
				break;
			
			case 30:
				if (unk_0xFD216000DC314A92())
				{
					if (uParam0->f_32 != 0)
					{
						unk_0xBBB6D0F765409642(uParam0->f_32);
					}
					func_258(uParam0);
					if (uParam0->f_293)
					{
						uParam0->f_26 = (unk_0x1DD05E817C89C737() - uParam0->f_13);
					}
					else
					{
						uParam0->f_26 = 52618;
						uParam0->f_27 = 52618;
					}
					uParam0->f_6 = 31;
				}
				break;
			
			case 31:
				if (uParam0->f_295)
				{
					if (func_269(uParam0))
					{
						if (unk_0xD8FC13DA1BA1DBA2("MP_Female_Character", 0))
						{
							if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
							{
								if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
								{
									if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
									{
										unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), uParam0->f_34, 20000, 0, 1f, 1048592, 0, 0);
									}
								}
							}
						}
					}
					else if (unk_0xD8FC13DA1BA1DBA2("MP_Male_Character", 0))
					{
						if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
						{
							if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
							{
								if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
								{
									unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), uParam0->f_34, 20000, 0, 1f, 1048592, 0, 0);
								}
							}
						}
					}
				}
				if (unk_0xD8FC13DA1BA1DBA2("LAMAR", 0))
				{
					if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
					{
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_35))
						{
							if (!unk_0x7F420695E3F776FB(uParam0->f_35, 0))
							{
								unk_0xEBA229B2E0BB05E0(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0, 0);
								unk_0xD8ED11B32DF72E0B(uParam0->f_35, 0, 0);
							}
						}
					}
				}
				if (unk_0xD8FC13DA1BA1DBA2("MP_Lamar_Car", 0))
				{
					if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
					{
						unk_0xC229299217554C78(uParam0->f_34, 1, 1, 0);
						unk_0xB2BD5837A8D3CEDA(uParam0->f_34, -1028,406f, -2732,782f, 19,5931f, 1, 0, 0, 1);
						unk_0x5C96CEA06531AB03(uParam0->f_34, -106,11f);
						func_257(uParam0, 3099,997f);
						unk_0xC3680B85B2D7086A(uParam0->f_34, 1);
					}
				}
				if (unk_0x2B60F53D06BC6971(0))
				{
					unk_0xAFD3BC0F6EBB5474(21, 0, 0);
					func_302(uParam0, 33);
					func_304(uParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (BitTest(*uParam0, 29))
				{
					if (unk_0xF1FEB57E542C41F1() || unk_0x15EF8F22A719BE5E() > 3254)
					{
						unk_0x8744D2E3FC95740E(uParam0, 29);
					}
				}
				if ((func_256(uParam0) && func_255(uParam0)) && !unk_0xFD216000DC314A92())
				{
					if (uParam0->f_293)
					{
						uParam0->f_28 = (unk_0x1DD05E817C89C737() - uParam0->f_13);
					}
					else
					{
						uParam0->f_29 = 134784;
						if (func_269(uParam0))
						{
							uParam0->f_28 = 134784;
						}
						else
						{
							uParam0->f_28 = 134784;
						}
					}
					unk_0x59ABC1F373CE1F5B();
					unk_0x9136D50973A71229();
					if (BitTest(*uParam0, 7))
					{
						unk_0x86A2BC11844DEEB3("FM_INTRO_DRIVE_START");
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 21);
					}
					if (!unk_0xC9BA6D804FA4FAAA())
					{
						unk_0xB479965CBAA3EAE1(0);
					}
					if (!BitTest(*uParam1, 1))
					{
						unk_0x0B0C9A0F9AAEB7F0(uParam1, true);
					}
					func_254(uParam0);
					func_253(uParam0);
					func_259(0, 1, 1, 0, 0, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					unk_0x8744D2E3FC95740E(uParam0, 13);
					uParam0->f_6 = 33;
				}
				else
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x1DD05E817C89C737() - (uParam0->f_26 + unk_0x15EF8F22A719BE5E()));
					}
					if (!BitTest(*uParam0, 22))
					{
						if (unk_0x6BC87CF59151C630() == 1)
						{
							unk_0xAFD3BC0F6EBB5474(19, 59, 0);
							unk_0x0B0C9A0F9AAEB7F0(uParam0, 22);
						}
					}
					if (func_251(uParam0))
					{
						if (unk_0x6BC87CF59151C630() == 2)
						{
							if (!BitTest(*uParam0, 18))
							{
								unk_0x0B0C9A0F9AAEB7F0(uParam0, 18);
							}
							if (unk_0x15EF8F22A719BE5E() > 23146)
							{
								if (!BitTest(*uParam0, 27))
								{
									unk_0xDD19F75405614D3C("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, -2,508f, -3,666f, -3,584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0x0B0C9A0F9AAEB7F0(uParam0, 27);
								}
								if (!BitTest(*uParam0, 28))
								{
									unk_0xDD19F75405614D3C("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, 3,508f, -3,666f, -3,584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0x0B0C9A0F9AAEB7F0(uParam0, 28);
								}
							}
							unk_0xF5EF5C15CE92F236(4950f);
							if (BitTest(*uParam0, 22))
							{
								unk_0xAFD3BC0F6EBB5474(21, 0, 0);
								unk_0x8744D2E3FC95740E(uParam0, 22);
							}
							if (unk_0x15EF8F22A719BE5E() > 23254)
							{
								func_250(uParam0);
							}
						}
					}
					if (unk_0x6BC87CF59151C630() > 2)
					{
						func_253(uParam0);
						if (!BitTest(*uParam0, 22))
						{
							unk_0xAFD3BC0F6EBB5474(21, 0, 0);
							unk_0x0B0C9A0F9AAEB7F0(uParam0, 22);
						}
						if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
						{
							unk_0x53152C1272227778(uParam0->f_34);
							unk_0xBA3C1A9AA7FD9616(uParam0->f_34, 2);
						}
					}
					uParam0->f_31 = unk_0x15EF8F22A719BE5E();
				}
				break;
			
			case 33:
				if (func_269(uParam0))
				{
					if (!BitTest(uParam0->f_1, 1))
					{
						if (func_310(uParam0, 33, -5450))
						{
							if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), true);
							}
						}
					}
					if (!BitTest(uParam0->f_1, 2))
					{
						if (func_310(uParam0, 33, -5450))
						{
							if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_269(uParam0))
				{
					if (!BitTest(uParam0->f_1, 1))
					{
						if (func_310(uParam0, 33, -5450))
						{
							if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), true);
							}
						}
					}
				}
				if (BitTest(*uParam0, 15))
				{
					unk_0xCAC4020CCF361AC8("MP_INTRO_LAMAR_DRIVE_SCENE");
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 33);
				func_248(uParam0);
				if (func_310(uParam0, 33, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_269(uParam0))
				{
					if (!BitTest(uParam0->f_1, 2))
					{
						if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 2);
						}
					}
				}
				if (BitTest(*uParam0, 15))
				{
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0x03F10D56CCA2C055(uParam0->f_7, uParam0->f_34, 0,8056f, 2,2245f, 0,5533f, 1);
						unk_0xD6B4D02A102485DC(uParam0->f_7, uParam0->f_34, -0,4552f, -0,4977f, 0,5449f, 1);
						unk_0x58BDA5D9262F5D30(uParam0->f_7, 33,3479f);
						unk_0x2A09425009DAD0F5(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x4CBC5D1BC117616B(uParam0->f_7, 1);
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_35, false, 0);
						}
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x2DCB8CA1FE6895AB(uParam0->f_11, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_dside_f"));
						if (func_269(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_pside_f"));
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0,129f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0,129f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, 0);
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0,145f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0,145f);
						}
						unk_0xD8ED11B32DF72E0B(uParam0->f_36, 0, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_302(uParam0, 34);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 34);
				func_248(uParam0);
				if (func_310(uParam0, 34, 0))
				{
					func_257(uParam0, 18966,65f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_269(uParam0))
				{
					if (!BitTest(uParam0->f_1, 3))
					{
						if (func_310(uParam0, 34, 1100))
						{
							if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 3);
							}
						}
					}
					if (!BitTest(uParam0->f_1, 4))
					{
						if (func_310(uParam0, 34, 1100))
						{
							if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_269(uParam0))
				{
					if (!BitTest(uParam0->f_1, 3))
					{
						if (func_310(uParam0, 34, 1000))
						{
							if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 3);
							}
						}
					}
				}
				if (BitTest(*uParam0, 15))
				{
					func_304(uParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_35, true, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_36, false, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), uParam0->f_34, 20000, 0, 1f, 1048592, 0, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_302(uParam0, 35);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 35);
				func_248(uParam0);
				if (func_310(uParam0, 35, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_269(uParam0))
				{
					if (!BitTest(uParam0->f_1, 5))
					{
						if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 5);
						}
					}
				}
				if (!func_269(uParam0))
				{
					if (!BitTest(uParam0->f_1, 4))
					{
						if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 4);
						}
					}
					if (!BitTest(uParam0->f_1, 5))
					{
						if (func_310(uParam0, 36, -3750))
						{
							if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 5);
							}
						}
					}
				}
				if (BitTest(*uParam0, 15))
				{
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0x03F10D56CCA2C055(uParam0->f_7, uParam0->f_34, 0,8056f, 2,2245f, 0,5533f, 1);
						unk_0xD6B4D02A102485DC(uParam0->f_7, uParam0->f_34, -0,4552f, -0,4977f, 0,5449f, 1);
						unk_0x58BDA5D9262F5D30(uParam0->f_7, 33,3479f);
						unk_0x2A09425009DAD0F5(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x4CBC5D1BC117616B(uParam0->f_7, 1);
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_35, false, 0);
						}
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x2DCB8CA1FE6895AB(uParam0->f_11, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_dside_f"));
						if (func_269(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_pside_f"));
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0,363f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0,363f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, 0);
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0,298f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0,298f);
						}
						unk_0xD8ED11B32DF72E0B(uParam0->f_36, 0, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_302(uParam0, 36);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 36);
				func_248(uParam0);
				if (func_310(uParam0, 36, 0))
				{
					func_257(uParam0, 42700,96f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_269(uParam0))
				{
					if (!BitTest(uParam0->f_1, 6))
					{
						if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 6);
						}
					}
				}
				if (!func_269(uParam0))
				{
					if (!BitTest(uParam0->f_1, 6))
					{
						if (func_310(uParam0, 36, 1000))
						{
							if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 6);
							}
						}
					}
				}
				if (BitTest(*uParam0, 15))
				{
					func_304(uParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_35, true, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_36, false, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), uParam0->f_34, 20000, 0, 1f, 1048592, 0, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_302(uParam0, 37);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 37);
				func_248(uParam0);
				if (func_310(uParam0, 37, 0))
				{
					func_257(uParam0, 51033,28f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_269(uParam0))
				{
					if (!BitTest(uParam0->f_1, 7))
					{
						if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 7);
						}
					}
					if (!BitTest(uParam0->f_1, 8))
					{
						if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 8);
						}
					}
					if (!BitTest(uParam0->f_1, 9))
					{
						if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 9);
						}
					}
				}
				if (!func_269(uParam0))
				{
					if (!BitTest(uParam0->f_1, 7))
					{
						if (func_310(uParam0, 37, 2500))
						{
							if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 7);
							}
						}
					}
				}
				if (BitTest(*uParam0, 15))
				{
					func_304(uParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					func_302(uParam0, 38);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 38);
				func_248(uParam0);
				if (func_310(uParam0, 38, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_269(uParam0))
				{
					if (!BitTest(uParam0->f_1, 8))
					{
						if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 8);
						}
					}
					if (!BitTest(uParam0->f_1, 9))
					{
						if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 9);
						}
					}
					if (!BitTest(uParam0->f_1, 31))
					{
						if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 31);
						}
					}
				}
				if (func_269(uParam0))
				{
					if (!BitTest(uParam0->f_1, 31))
					{
						if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 31);
						}
					}
				}
				if (BitTest(*uParam0, 15))
				{
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0x03F10D56CCA2C055(uParam0->f_7, uParam0->f_34, 0,8056f, 2,2245f, 0,5533f, 1);
						unk_0xD6B4D02A102485DC(uParam0->f_7, uParam0->f_34, -0,4552f, -0,4977f, 0,5449f, 1);
						unk_0x58BDA5D9262F5D30(uParam0->f_7, 33,3479f);
						unk_0x2A09425009DAD0F5(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x4CBC5D1BC117616B(uParam0->f_7, 1);
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_35, false, 0);
						}
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x2DCB8CA1FE6895AB(uParam0->f_11, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_dside_f"));
						if (func_269(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_pside_f"));
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0,811f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0,811f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, 0);
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0,791f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0,791f);
						}
						unk_0xD8ED11B32DF72E0B(uParam0->f_36, 0, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_302(uParam0, 39);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 39);
				func_248(uParam0);
				if (func_310(uParam0, 39, 0))
				{
					func_257(uParam0, 85050f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!BitTest(uParam0->f_1, 31))
				{
					if (func_249(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 31);
					}
				}
				if (BitTest(*uParam0, 15))
				{
					func_304(uParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x216049890A2D1EC6(9, 12, 9, 12);
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_35, true, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_36, false, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), uParam0->f_34, 20000, 0, 1f, 1048592, 0, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_302(uParam0, 40);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 40);
				if (func_248(uParam0) && func_310(uParam0, 40, 0))
				{
					func_257(uParam0, 116366,5f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (BitTest(*uParam0, 15))
				{
					unk_0xAFD3BC0F6EBB5474(0, 0, 0);
					func_304(uParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0,235f, 0,75f);
					func_302(uParam0, 41);
					unk_0xE6FCB8178DFE489F("CONTRAILS", 0);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 41);
				if (func_310(uParam0, 41, 0))
				{
					unk_0x4DA9E018E2F3A01C(1);
					func_257(uParam0, 127166,5f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (BitTest(*uParam0, 15))
				{
					func_247(uParam0);
					func_304(uParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					func_302(uParam0, 42);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 42);
				if (func_310(uParam0, 42, 0))
				{
					unk_0x4DA9E018E2F3A01C(0);
					func_257(uParam0, 170800f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (BitTest(*uParam0, 15))
				{
					func_304(uParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					func_302(uParam0, 43);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 43);
				if (func_310(uParam0, 43, 0))
				{
					unk_0x216049890A2D1EC6(9, 12, 9, 12);
					func_257(uParam0, 191799,8f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (BitTest(*uParam0, 15))
				{
					func_304(uParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					func_302(uParam0, 44);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 44);
				if (func_310(uParam0, 44, 0))
				{
					func_257(uParam0, 196633,1f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (BitTest(*uParam0, 15))
				{
					func_304(uParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					func_302(uParam0, 45);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 45);
				if (func_310(uParam0, 45, 0))
				{
					func_257(uParam0, 201466,5f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (BitTest(*uParam0, 15))
				{
					func_304(uParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					func_302(uParam0, 46);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 46);
				if (func_310(uParam0, 46, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_246(uParam0);
				if (BitTest(*uParam0, 15))
				{
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0x03F10D56CCA2C055(uParam0->f_7, uParam0->f_34, 0,8056f, 2,2245f, 0,5533f, 1);
						unk_0xD6B4D02A102485DC(uParam0->f_7, uParam0->f_34, -0,4552f, -0,4977f, 0,5449f, 1);
						unk_0x58BDA5D9262F5D30(uParam0->f_7, 33,3479f);
						unk_0x2A09425009DAD0F5(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x4CBC5D1BC117616B(uParam0->f_7, 1);
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_35, false, 0);
						}
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x2DCB8CA1FE6895AB(uParam0->f_11, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_dside_f"));
						if (func_269(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_pside_f"));
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0,726f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0,74f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, 0);
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0,726f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0,815f);
						}
						unk_0xD8ED11B32DF72E0B(uParam0->f_36, 0, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_302(uParam0, 47);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 47);
				if (func_310(uParam0, 47, 0))
				{
					func_257(uParam0, 213066,4f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_246(uParam0);
				if (BitTest(*uParam0, 15))
				{
					func_304(uParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_35, true, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_36, false, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), uParam0->f_34, 20000, 0, 1f, 1048592, 0, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_302(uParam0, 48);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 48);
				if (func_310(uParam0, 48, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140), 3);
					func_245(uParam0, 10177,75f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_246(uParam0);
				if (BitTest(*uParam0, 15))
				{
					func_304(uParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038,78f, -2732,61f, 19,08f, 0f, 0f, 0f, 0, 1065353216);
					func_302(uParam0, 49);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_312(uParam0, 49);
				if (unk_0x16088CC55E7F218A("FM_INTRO_DRIVE_END") && func_310(uParam0, 49, 0))
				{
					func_243(uParam0, 4500f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_246(uParam0);
				if (!unk_0x9390801B06EE998F())
				{
					if (!unk_0xDDED2C93E8FD5B69())
					{
						unk_0x10B228D2FDB7AF16(250);
					}
				}
				if (BitTest(*uParam0, 15))
				{
					func_304(uParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197,9f, 301f, 96,4f, 0f, 0f, 180f, 0, 1065353216);
					if (uParam0->f_292)
					{
						unk_0xE9DE8F39ED85311E();
						unk_0x8744D2E3FC95740E(uParam0, 11);
					}
					func_302(uParam0, 50);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				if (!BitTest(*uParam0, 20))
				{
					if (func_269(uParam0))
					{
						unk_0x839AD252B0708F35("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						unk_0x839AD252B0708F35("MP_INT_MCS_5_ALT1", 8);
					}
					if (uParam0->f_295)
					{
						if (unk_0xB3FA103AA6383C28())
						{
							if (func_269(uParam0))
							{
								unk_0x7901DE0AC779EB29("MP_Female_Character", 0, 1);
							}
							else
							{
								unk_0x7901DE0AC779EB29("MP_1", 0, 1);
							}
						}
					}
					if (unk_0x0DDDD9D153BCF51F())
					{
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 20);
					}
				}
				func_312(uParam0, 50);
				if (!unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
				{
					if (unk_0x050D073F91C5243C(uParam0->f_34))
					{
						if (unk_0xDF93B3CFAC96698F(uParam0->f_34) < 1f)
						{
							unk_0x1D2DAF2A41FFC4A0(uParam0->f_34);
						}
					}
				}
				if (func_310(uParam0, 50, 0) && BitTest(*uParam0, 20))
				{
					if (BitTest(*uParam0, 21))
					{
						unk_0x86A2BC11844DEEB3("FM_INTRO_DRIVE_END");
						unk_0x8744D2E3FC95740E(uParam0, 21);
					}
					unk_0x1D2DAF2A41FFC4A0(uParam0->f_34);
					uParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (uParam0->f_295)
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						if (func_269(uParam0))
						{
							unk_0xF293D66D4452C854(unk_0x4A8C381C258A124D(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0xF293D66D4452C854(unk_0x4A8C381C258A124D(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
				{
					unk_0xF293D66D4452C854(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
				{
					unk_0xF293D66D4452C854(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				unk_0x0B0C9A0F9AAEB7F0(uParam0, 13);
				if (unk_0xBC2EE32DE886BD08("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					unk_0xB43467C43086A6A1("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				unk_0xED65412F8B26ED99(4);
				func_259(1, 1, 1, 0, 0, 0, 0);
				uParam0->f_6 = 52;
				break;
			
			case 52:
				if (unk_0xFD216000DC314A92())
				{
					unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
					if (uParam0->f_293)
					{
						uParam0->f_30 = (unk_0x1DD05E817C89C737() - uParam0->f_13);
					}
					else
					{
						uParam0->f_30 = func_242(uParam0);
					}
					uParam0->f_14 = 0;
					uParam0->f_6 = 53;
				}
				break;
			
			case 53:
				if (uParam0->f_295)
				{
					if (func_269(uParam0))
					{
						if (!BitTest(*uParam0, 23))
						{
							if (unk_0xD8FC13DA1BA1DBA2("MP_Female_Character", 0))
							{
								if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
								{
									unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -200,8225f, 302,9014f, 95,9455f, 1, 0, 0, 1);
									Var1 = { Vector(95,9465f, 307,0503f, -210,3399f) - Vector(95,9455f, 302,9014f, -200,8225f) };
									unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1));
									unk_0x64BB72494B9DF6DC(0);
									unk_0xD815D4BD1AE9E85A(0, 1065353216);
									unk_0x0B0C9A0F9AAEB7F0(uParam0, 23);
								}
							}
						}
					}
					else if (!BitTest(*uParam0, 23))
					{
						if (unk_0xD8FC13DA1BA1DBA2("MP_1", 0))
						{
							if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
							{
								unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -200,8225f, 302,9014f, 95,9455f, 1, 0, 0, 1);
								Var1 = { Vector(95,9465f, 307,0503f, -210,3399f) - Vector(95,9455f, 302,9014f, -200,8225f) };
								unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1));
								unk_0x64BB72494B9DF6DC(0);
								unk_0xD815D4BD1AE9E85A(0, 1065353216);
								unk_0x0B0C9A0F9AAEB7F0(uParam0, 23);
							}
						}
					}
				}
				if (unk_0xD8FC13DA1BA1DBA2("LAMAR", 0))
				{
					if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
					{
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_35))
						{
							if (!unk_0x7F420695E3F776FB(uParam0->f_35, 0))
							{
								unk_0xEBA229B2E0BB05E0(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0, 0);
							}
						}
					}
				}
				if (unk_0xD8FC13DA1BA1DBA2("MP_Lamar_Car", 0))
				{
					if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
					{
						unk_0x1DE99C193C7EC64B(uParam0->f_34, 1084227584);
					}
				}
				if (unk_0x2B60F53D06BC6971(0))
				{
					func_241(1);
					unk_0x64BB72494B9DF6DC(0);
					unk_0xD815D4BD1AE9E85A(0, 1065353216);
				}
				if (!func_240(unk_0x259BE71D8A81D4FA()))
				{
					func_239(1);
				}
				if (unk_0xFD216000DC314A92())
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x1DD05E817C89C737() - (uParam0->f_30 + unk_0x15EF8F22A719BE5E()));
					}
					switch (uParam0->f_14)
					{
						case 0:
							func_238(uParam0, 0);
							break;
						
						case 10:
							func_238(uParam0, 1);
							break;
						
						case 20:
							func_238(uParam0, 2);
							break;
						
						case 30:
							func_238(uParam0, 3);
							break;
						
						case 40:
							func_238(uParam0, 4);
							break;
						
						case 50:
							func_238(uParam0, 5);
							break;
						
						case 60:
							func_238(uParam0, 6);
							break;
						
						case 70:
							func_238(uParam0, 7);
							break;
						
						case 80:
							func_238(uParam0, 8);
							break;
						
						case 90:
							func_238(uParam0, 9);
							break;
						
						case 100:
							if (unk_0xFC8BFE4B41177C22(uParam0->f_36))
							{
								unk_0x734A9F4537A31459(&(uParam0->f_36));
							}
							break;
					}
					uParam0->f_14++;
				}
				else
				{
					unk_0x59ABC1F373CE1F5B();
					unk_0x9136D50973A71229();
					if (!unk_0xC9BA6D804FA4FAAA())
					{
						unk_0xB479965CBAA3EAE1(0);
					}
					func_259(0, 1, 1, 0, 0, 0, 0);
					unk_0x8744D2E3FC95740E(uParam0, 13);
					uParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (unk_0xFD216000DC314A92())
				{
					unk_0xA7E4AA8D29D3DAC1();
				}
				else if (!BitTest(*uParam0, 17))
				{
					if (unk_0x15CCE8886267624F())
					{
						unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 13);
						unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -195,2f, 307,1825f, 95,9455f, 1, 0, 0, 1);
						unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), true);
						if (uParam0->f_292)
						{
							unk_0xE9DE8F39ED85311E();
							unk_0x8744D2E3FC95740E(uParam0, 11);
						}
						func_201(&(uParam0->f_17));
						func_22(&(uParam0->f_17), 0, 0);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 17);
					}
					else if (!unk_0x78ABC1D11B34F324())
					{
						unk_0x8F72AF14CE5AACE4(250);
					}
				}
				else if (func_202(&(uParam0->f_17), 10000, 0))
				{
					if (func_237(uParam0))
					{
						func_305(uParam0);
						func_253(uParam0);
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), false);
							if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								unk_0x44C48AC14D3C09ED(unk_0x4A8C381C258A124D(), true, 0);
								unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -200,8225f, 302,9014f, 95,9455f, 1, 0, 0, 1);
								unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 61,3164f);
							}
						}
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_35))
						{
							if (!unk_0x7F420695E3F776FB(uParam0->f_35, 0))
							{
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
								{
									unk_0xEBA229B2E0BB05E0(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0, 0);
								}
							}
						}
						func_241(1);
						if (!func_240(unk_0x259BE71D8A81D4FA()))
						{
							func_239(1);
						}
						func_259(0, 1, 1, 0, 0, 0, 0);
						unk_0xAFD3BC0F6EBB5474(0, 0, 0);
						if (BitTest(*uParam0, 21))
						{
							unk_0x86A2BC11844DEEB3("FM_INTRO_DRIVE_END");
							unk_0x8744D2E3FC95740E(uParam0, 21);
						}
						unk_0x0B0C9A0F9AAEB7F0(uParam0, true);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
						uParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (unk_0xFD216000DC314A92())
				{
					unk_0xA7E4AA8D29D3DAC1();
				}
				else if (!BitTest(*uParam0, 17))
				{
					if (unk_0x15CCE8886267624F())
					{
						unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 13);
						unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -195,2f, 307,1825f, 95,9455f, 1, 0, 0, 1);
						unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), true);
						if (uParam0->f_292)
						{
							unk_0xE9DE8F39ED85311E();
							unk_0x8744D2E3FC95740E(uParam0, 11);
						}
						func_201(&(uParam0->f_17));
						func_22(&(uParam0->f_17), 0, 0);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 17);
					}
					else if (!unk_0x78ABC1D11B34F324())
					{
						unk_0x8F72AF14CE5AACE4(250);
					}
				}
				else if (func_202(&(uParam0->f_17), 10000, 0))
				{
					if (func_289(uParam0))
					{
						func_305(uParam0);
						func_253(uParam0);
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), false);
							if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								unk_0x44C48AC14D3C09ED(unk_0x4A8C381C258A124D(), true, 0);
								unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -200,8225f, 302,9014f, 95,9455f, 1, 0, 0, 1);
								unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 61,3164f);
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
								{
									unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), uParam0->f_34, 20000, 0, 1f, 1048592, 0, 0);
								}
							}
						}
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_35))
						{
							if (!unk_0x7F420695E3F776FB(uParam0->f_35, 0))
							{
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
								{
									unk_0xEBA229B2E0BB05E0(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0, 0);
								}
							}
						}
						if (!func_240(unk_0x259BE71D8A81D4FA()))
						{
						}
						func_259(0, 1, 1, 0, 0, 0, 0);
						if (BitTest(*uParam0, 21))
						{
							unk_0x86A2BC11844DEEB3("FM_INTRO_DRIVE_END");
							unk_0x8744D2E3FC95740E(uParam0, 21);
						}
						unk_0x10B228D2FDB7AF16(250);
						unk_0xAFD3BC0F6EBB5474(0, 0, 0);
						unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140), 3);
						uParam0->f_13 = (unk_0x1DD05E817C89C737() - func_234(uParam0, 48, 0));
						uParam0->f_293 = 1;
						func_245(uParam0, 10177,75f);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
						uParam0->f_6 = 49;
					}
				}
				break;
			
			case 57:
				func_312(uParam0, 57);
				bVar4 = !uParam0->f_288;
				func_222(uParam0, bVar4, 0);
				if (uParam0->f_292)
				{
					unk_0xE9DE8F39ED85311E();
					unk_0x8744D2E3FC95740E(uParam0, 11);
				}
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_35))
				{
					unk_0x0FD8B5F4BB15CD71(uParam0->f_35, -1);
					unk_0x44FB298D6382876D(uParam0->f_35, 1);
				}
				unk_0x4314716E4B544721(1);
				if (!uParam0->f_288)
				{
					func_33(115, 1, -1, 1);
					return 1;
				}
				break;
			
			case 58:
				break;
			
			case 54:
				break;
			
			case 59:
				return 1;
				break;
		}
		func_221(uParam0);
		if (!uParam0->f_291)
		{
			if (uParam0->f_293)
			{
				uParam0->f_289 = system::to_float((unk_0x1DD05E817C89C737() - uParam0->f_13));
			}
			else
			{
				uParam0->f_289 = system::to_float(func_242(uParam0));
			}
			uParam0->f_290 = func_220(uParam0);
		}
		uParam0->f_291 = 0;
		if (uParam0->f_292 && BitTest(*uParam0, 11))
		{
			if (uParam0->f_293)
			{
				unk_0x4B1F30FB3C9A4B7F(uParam0->f_289);
			}
			else
			{
				unk_0x4B1F30FB3C9A4B7F(uParam0->f_290);
			}
		}
		func_217(uParam0);
		if (BitTest(*uParam0, 12))
		{
			if (func_279())
			{
				func_216();
			}
		}
		if (uParam0->f_6 > 0 && uParam0->f_6 <= 57)
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
				{
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), false, 60);
				}
			}
			func_214(uParam0);
			unk_0x6C978B200DAA54DE();
			unk_0x4EB223432F8FA0A0(9);
			unk_0x4EB223432F8FA0A0(7);
			unk_0x4EB223432F8FA0A0(18);
			unk_0x4EB223432F8FA0A0(6);
			unk_0x4EB223432F8FA0A0(3);
			unk_0x4EB223432F8FA0A0(13);
			unk_0x4EB223432F8FA0A0(4);
		}
		if (Global_2738934.f_1970)
		{
			unk_0xB211E45F1FE1ED2D(2, 187, 1);
		}
	}
	return 0;
}

void func_214(var uParam0)
{
	var uVar0;
	
	if (!BitTest(*uParam0, 9))
	{
		if (uParam0->f_6 > 0)
		{
			if (!unk_0xF859473E4AD09F30())
			{
				if (!unk_0x6457A0C458E98FFB())
				{
					uVar0 = unk_0x259BE71D8A81D4FA() + 32;
					unk_0x5147DD7078544AD1(1, uVar0);
					func_215(1);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 9);
				}
			}
			else
			{
				func_215(1);
				unk_0x0B0C9A0F9AAEB7F0(uParam0, 9);
			}
		}
	}
}

void func_215(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140, 18))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140), 18);
		}
	}
	else if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140, 18))
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140), 18);
	}
}

void func_216()
{
	unk_0xA91A4C18A2DB01BD(Global_1577906, 255, 255, 255, 255, 0);
	if (Global_1577908 == 0)
	{
		unk_0x88F483FBD433696A(Global_1577906, "SET_BIG_LOGO_VISIBLE");
		unk_0x330108B080A2132F(1);
		unk_0x557F1E2300EF1A3E(1);
		unk_0xE6B753D52F4CA222();
		Global_1577908 = 1;
	}
}

void func_217(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xFC8BFE4B41177C22(uParam0->f_58[uParam0->f_90]))
	{
		if (unk_0x1C2F771CDC87A3A5(uParam0->f_58[uParam0->f_90], 0))
		{
		}
		Var0 = { unk_0xD1A6A821F5AC81DB(uParam0->f_58[uParam0->f_90], 1) };
		if (Var0.f_2 < -50f)
		{
			func_218(uParam0, uParam0->f_90);
		}
	}
	uParam0->f_90++;
	if (uParam0->f_90 >= 15)
	{
		uParam0->f_90 = 0;
	}
}

void func_218(var uParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0->f_58[bParam1]))
	{
		if (unk_0x1C2F771CDC87A3A5(uParam0->f_58[bParam1], 0))
		{
		}
		func_219(bParam1, &Var0, &fVar1);
		unk_0xB2BD5837A8D3CEDA(uParam0->f_58[bParam1], Var0, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(uParam0->f_58[bParam1], fVar1);
		unk_0x5D7CD709B34C90F0(uParam0->f_58[bParam1], true);
		unk_0xF698038C13845696(uParam0->f_58[bParam1]);
		unk_0x44C48AC14D3C09ED(uParam0->f_58[bParam1], false, 0);
		unk_0x4285E11B28063EE0(uParam0->f_58[bParam1], false, 0);
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_74[bParam1]))
	{
		if (unk_0x1C2F771CDC87A3A5(uParam0->f_74[bParam1], 0))
		{
		}
		unk_0x4285E11B28063EE0(uParam0->f_74[bParam1], false, 0);
	}
}

void func_219(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -285,8592f, -914,3868f, 30,08f };
			*uParam2 = 77,3101f;
			break;
		
		case 1:
			*uParam1 = { -303,4057f, -910,434f, 30,0797f };
			*uParam2 = 77,3122f;
			break;
		
		case 2:
			*uParam1 = { -328,6838f, -905,0965f, 30,0783f };
			*uParam2 = 74,4975f;
			break;
		
		case 3:
			*uParam1 = { -353,6149f, -896,1278f, 30,0707f };
			*uParam2 = 358,6274f;
			break;
		
		case 4:
			*uParam1 = { -354,2628f, -915,5025f, 30,08f };
			*uParam2 = 358,0417f;
			break;
		
		case 5:
			*uParam1 = { -354,6489f, -935,3478f, 30,08f };
			*uParam2 = 0,5678f;
			break;
		
		case 6:
			*uParam1 = { -354,4816f, -953,4573f, 30,08f };
			*uParam2 = 0,4572f;
			break;
		
		case 7:
			*uParam1 = { -343,5193f, -967,0103f, 30,08f };
			*uParam2 = 247,6961f;
			break;
		
		case 8:
			*uParam1 = { -324,7872f, -974,6605f, 30,08f };
			*uParam2 = 247,7728f;
			break;
		
		case 9:
			*uParam1 = { -301,3824f, -977,9114f, 30,08f };
			*uParam2 = 249,2065f;
			break;
		
		case 10:
			*uParam1 = { -342,4198f, -1019,456f, 29,3849f };
			*uParam2 = 250,0953f;
			break;
		
		case 11:
			*uParam1 = { -317,1607f, -1025,859f, 29,3849f };
			*uParam2 = 250,7381f;
			break;
		
		case 12:
			*uParam1 = { -302,658f, -1022,401f, 29,385f };
			*uParam2 = 244,0013f;
			break;
		
		case 13:
			*uParam1 = { -283,3195f, -1029,469f, 29,385f };
			*uParam2 = 252,7933f;
			break;
		
		case 14:
			*uParam1 = { -276,4286f, -1013,534f, 29,385f };
			*uParam2 = 339,4764f;
			break;
	}
}

float func_220(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (uParam0->f_6 >= 31 && uParam0->f_6 < 33)
	{
		if (func_269(uParam0))
		{
			fVar0 = system::to_float((uParam0->f_27 + unk_0x15EF8F22A719BE5E()));
			if (unk_0x6BC87CF59151C630() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / system::to_float(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = system::to_float((uParam0->f_27 + unk_0x15EF8F22A719BE5E()));
		}
		return fVar0;
	}
	return uParam0->f_289;
}

void func_221(var uParam0)
{
	if (BitTest(*uParam0, 29))
	{
		unk_0xE2E1B9096BCD8C5C(-1160,942f, -1657,686f, 5,129621f, 0,8912546f, -0,3982928f, -0,2168599f, 226, 130, 78, 3,999999f, 6,6f, 1f, 30f, 1f);
		unk_0xE2E1B9096BCD8C5C(-1157,324f, -1659,878f, 5,449264f, -0,8403507f, 0,3984679f, -0,3674699f, 226, 130, 78, 3,900002f, 8,8f, 1f, 30f, 1f);
	}
}

void func_222(var uParam0, bool bParam1, bool bParam2)
{
	if (!BitTest(*uParam0, 0))
	{
		if (unk_0xFD216000DC314A92())
		{
			unk_0xB479965CBAA3EAE1(0);
		}
		unk_0x01C8E9BB989C1EEE(0);
		if (uParam0->f_292)
		{
			unk_0x6BD0E2C3AF4FF666(0);
			unk_0xE9DE8F39ED85311E();
			unk_0x8744D2E3FC95740E(uParam0, 11);
		}
		if (BitTest(*uParam0, 14))
		{
			unk_0xE3F88173F42C071B();
			unk_0x8744D2E3FC95740E(uParam0, 14);
		}
		func_233();
		func_254(uParam0);
		func_305(uParam0);
		func_253(uParam0);
		func_275();
		func_258(uParam0);
		func_276(uParam0);
		func_232(uParam0);
		func_247(uParam0);
		unk_0x830C51B62E7CD5B2();
		if (bParam2)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_34))
			{
				unk_0x68298CA6191CDFDB(&(uParam0->f_34));
			}
			if (unk_0xFC8BFE4B41177C22(uParam0->f_35))
			{
				unk_0xF09E30AF1B8FB379(&(uParam0->f_35));
			}
		}
		if (unk_0xFC8BFE4B41177C22(uParam0->f_36))
		{
			unk_0x734A9F4537A31459(&(uParam0->f_36));
		}
		if (!uParam0->f_288)
		{
			func_420(0);
		}
		func_230();
		func_223();
		func_259(0, 1, 1, 0, 0, 0, 0);
		unk_0xD7C0EA10993D3214(0, -1);
		unk_0x938C85923AD6778A(1);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if (unk_0x0721B5D4CF3ACD02())
			{
				unk_0x42B4970D598C8A72(0, 1);
			}
		}
		if (BitTest(*uParam0, 21))
		{
			unk_0x86A2BC11844DEEB3("FM_INTRO_DRIVE_END");
			unk_0x8744D2E3FC95740E(uParam0, 21);
		}
		unk_0x0A83667A5D36A4FF(0);
		func_374(1);
		if (BitTest(*uParam0, 26))
		{
			func_366(1, 0);
			unk_0x8744D2E3FC95740E(uParam0, 26);
		}
		Global_2672855.f_3585 = 0;
		if (!unk_0x3555462DB47B7AB1())
		{
			unk_0x030379A8083CE8F9(0);
		}
		unk_0xD82473EFEF7FC622(1);
		if (bParam1)
		{
		}
		func_198(0);
		func_212(1);
		Global_2738934.f_1970 = 0;
		Global_2738934.f_1969 = 0;
		if (unk_0xBC2EE32DE886BD08("MP_INTRO_RACE_SCENE"))
		{
			unk_0xB43467C43086A6A1("MP_INTRO_RACE_SCENE");
		}
		if (unk_0xBC2EE32DE886BD08("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			unk_0xB43467C43086A6A1("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_326(14, 1);
		unk_0xDAE61414743C8D1D(5);
		unk_0xE6FCB8178DFE489F("CONTRAILS", 0);
		unk_0x7821F942CAEEBEE1(5, "FMINTRO");
		unk_0x7821F942CAEEBEE1(6, "FMINTRO");
		unk_0x7821F942CAEEBEE1(7, "FMINTRO");
		unk_0x268BE77F77533D03("mp_intro_seq@");
		unk_0x268BE77F77533D03("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x268BE77F77533D03("mp_intro_seq@ig_1_lamar_drive_radio");
		unk_0x268BE77F77533D03("mp_intro_seq@ig_1_lamar_drive_male");
		if (unk_0xC450B06E5AAA0985(unk_0x413A91F497E3428F()))
		{
			unk_0x5D3946F818C6B331(unk_0x413A91F497E3428F(), 0,7f);
		}
		unk_0x4D2F1CB87CBF249D(0);
		unk_0x64BB72494B9DF6DC(0);
		unk_0xD815D4BD1AE9E85A(0, 1065353216);
		if (unk_0x76CD105BCAC6EB9F())
		{
			unk_0x81F9331288182129();
			unk_0x4314716E4B544721(1);
		}
		unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), false);
		if (!unk_0x9390801B06EE998F() && !unk_0xDDED2C93E8FD5B69())
		{
			unk_0x10B228D2FDB7AF16(800);
		}
		unk_0x0B0C9A0F9AAEB7F0(uParam0, false);
	}
}

void func_223()
{
	func_224(0);
}

void func_224(bool bParam0)
{
	if (bParam0)
	{
		func_229();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_84(0))
		{
			func_225(0);
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

void func_225(int iParam0)
{
	if (func_228())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_227())
		{
			func_226(1, 1);
		}
		else
		{
			func_226(0, 0);
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
	if (!func_170())
	{
		Global_20930.f_1 = 3;
	}
}

void func_226(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_84(0))
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

bool func_227()
{
	return BitTest(Global_1956920, 5);
}

bool func_228()
{
	return BitTest(Global_1956920, 19);
}

void func_229()
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

void func_230()
{
	if (!Global_1574755)
	{
		return;
	}
	func_231();
}

void func_231()
{
	Global_1574755 = 0;
	StringCopy(&(Global_1574755.f_1), "", 32);
	Global_1574755.f_9 = 0;
}

void func_232(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_238(uParam0, iVar0);
		iVar0++;
	}
}

void func_233()
{
	unk_0x2AF2D6F164BD6F5A(-533,6674f, -1961,788f, 16,82666f, -429,5074f, -1860,31f, 22,79688f, 20,5f, 1);
	unk_0x2AF2D6F164BD6F5A(224,4978f, -274,7691f, 48,87971f, 263,1581f, -170,5107f, 63,18772f, 21f, 1);
}

int func_234(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam1 < 31)
	{
		iVar1 = 0;
		iVar2 = 6;
		iVar3 = 28;
	}
	else
	{
		if (bParam2)
		{
			iVar1 = uParam0->f_29;
		}
		else
		{
			iVar1 = uParam0->f_28;
		}
		iVar2 = 33;
		iVar3 = 57;
	}
	iVar0 = 0;
	while (iVar0 < (iVar3 - iVar2) + 1)
	{
		iVar4 = (iVar2 + iVar0);
		if (bParam2)
		{
			iVar1 = (iVar1 + func_236(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + func_235(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_236(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_237(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	unk_0xEC9DAA34BBB4658C(iVar0);
	unk_0xEC9DAA34BBB4658C(iVar1);
	if (unk_0x6252BC0DD8A320DB(iVar0) && unk_0x6252BC0DD8A320DB(iVar1))
	{
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_34))
		{
			uParam0->f_34 = unk_0x5779387E956077A6(iVar1, -198,221f, 301,8606f, 95,9455f, 148,1586f, 0, 0, 0);
			unk_0x05177DCE3DD6F271(uParam0->f_34, 1);
			unk_0x4DC72C4B884A6C59(uParam0->f_34, 0);
			unk_0xD0F1DB0E50B367AD(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
			unk_0xBA3C1A9AA7FD9616(uParam0->f_34, 2);
		}
		else if (!unk_0xFC8BFE4B41177C22(uParam0->f_35))
		{
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0xB1DBFEB95C0EFB88(26, iVar0, -195,2f, 307,1825f, 95,9455f, 143,6341f, 0, 0);
				unk_0xAAA71DD7E9059338(uParam0->f_35, 1);
				unk_0x935364B4448CD584(uParam0->f_34, 1);
				unk_0x935364B4448CD584(uParam0->f_35, 1);
				unk_0x3CEA1FD137ACE2D9(uParam0->f_35, unk_0x2A661A0285B74A27(unk_0x4A8C381C258A124D()));
				unk_0xD0F1DB0E50B367AD(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0xFC8BFE4B41177C22(uParam0->f_34) || !unk_0xFC8BFE4B41177C22(uParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_238(var uParam0, int iParam1)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_58[iParam1]))
	{
		unk_0x8C1F7D7A31B2A38E(&(uParam0->f_58[iParam1]));
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_74[iParam1]))
	{
		unk_0x734A9F4537A31459(&(uParam0->f_74[iParam1]));
	}
}

void func_239(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_144), 22);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_144), 22);
	}
}

bool func_240(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_144, 22);
}

void func_241(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140), 4);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140), 4);
	}
}

int func_242(var uParam0)
{
	if (uParam0->f_6 < 31)
	{
		return unk_0x1304366BC7BE185B();
	}
	if (uParam0->f_6 < 33)
	{
		return (uParam0->f_26 + unk_0x15EF8F22A719BE5E());
	}
	return (uParam0->f_28 + unk_0x1304366BC7BE185B());
}

void func_243(var uParam0, float fParam1)
{
	func_244(uParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_244(var uParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		if (bParam4)
		{
			unk_0x1D2DAF2A41FFC4A0(uParam0);
			unk_0x88556DA0593A0748(uParam0, iParam1, sParam2, 1);
		}
		else if (!unk_0x050D073F91C5243C(uParam0))
		{
			unk_0x88556DA0593A0748(uParam0, iParam1, sParam2, 1);
			unk_0xF2FCE3F2F4D0CB50(uParam0, 1);
		}
		else
		{
			iVar0 = unk_0x95610E68DFCFC225(iParam1, sParam2);
			if (unk_0x0008A5B9B95FED93(uParam0) != iVar0)
			{
				unk_0x88556DA0593A0748(uParam0, iParam1, sParam2, 1);
				unk_0xF2FCE3F2F4D0CB50(uParam0, 1);
			}
		}
		unk_0x8BCD7C11D27FB9A1(uParam0, (fParam3 - unk_0x157F3D5A4AAB2C50(uParam0)));
	}
}

void func_245(var uParam0, float fParam1)
{
	func_244(uParam0->f_34, 6, "FMINTRO", fParam1, 1);
}

void func_246(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!uParam0->f_296)
	{
		iVar0 = unk_0x70E57E9927B6BA58("ss1_rd1_03");
		iVar1 = iVar0;
		if (unk_0xE7D342E0F16AAA8F(iVar1))
		{
			func_9(iVar1);
			uParam0->f_296 = 1;
		}
	}
}

void func_247(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_37[iVar0]))
		{
			unk_0x734A9F4537A31459(&(uParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	unk_0x55098D9E9AD58806(joaat("g_m_y_mexgoon_02"));
	unk_0x268BE77F77533D03("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	unk_0x268BE77F77533D03("amb@world_human_hang_out_street@male_a@base");
}

int func_248(var uParam0)
{
	int iVar0;
	
	if (BitTest(uParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		unk_0xEC9DAA34BBB4658C(joaat("g_m_y_mexgoon_02"));
		unk_0x80813AC549A1E8AE("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x80813AC549A1E8AE("amb@world_human_hang_out_street@male_a@base");
		if ((unk_0x6252BC0DD8A320DB(joaat("g_m_y_mexgoon_02")) && unk_0xE100DD4F82A51BDE("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && unk_0xE100DD4F82A51BDE("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!unk_0xFC8BFE4B41177C22(uParam0->f_37[iVar0]))
				{
					uParam0->f_37[iVar0] = unk_0xB1DBFEB95C0EFB88(4, joaat("g_m_y_mexgoon_02"), -85,925f, -1233,407f, 27,759f, 0f, 0, 0);
					unk_0x935364B4448CD584(uParam0->f_37[iVar0], 1);
					unk_0xAAA71DD7E9059338(uParam0->f_37[iVar0], 1);
					switch (iVar0)
					{
						case 0:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85,925f, -1233,407f, 27,759f, 0f, 0f, 97,75f, 1000f, -1000f, -1, 1025, 0, 2, 0);
							break;
						
						case 1:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86,487f, -1232,985f, 28,759f, 0f, 0f, -110,5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 2:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82,139f, -1203,525f, 26,574f, 0f, 0f, 90,75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 3:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83,539f, -1203,537f, 27,549f, 0f, 0f, -85,25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 4:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83,75f, -1197,136f, 26,471f, 0f, 0f, -174,5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 5:
							unk_0xB2BD5837A8D3CEDA(uParam0->f_37[iVar0], -82,0542f, -1199,264f, 26,592f, 1, 0, 0, 1);
							unk_0x5C96CEA06531AB03(uParam0->f_37[iVar0], 76,8852f);
							unk_0xB41DEC3AAC1AA107(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0x5D7CD709B34C90F0(uParam0->f_37[iVar0], true);
							break;
						
						case 6:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222,397f, 27,417f, 0f, 0f, 98,75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 7:
							unk_0xB2BD5837A8D3CEDA(uParam0->f_37[iVar0], -85,5161f, -1205,781f, 26,5847f, 1, 0, 0, 1);
							unk_0x5C96CEA06531AB03(uParam0->f_37[iVar0], 87,5786f);
							unk_0xB41DEC3AAC1AA107(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0x5D7CD709B34C90F0(uParam0->f_37[iVar0], true);
							break;
						
						case 8:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87,1f, -1221,762f, 28,367f, 0f, 0f, -85,25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 9:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87,063f, -1222,918f, 28,417f, 0f, 0f, -45,5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x55098D9E9AD58806(joaat("g_m_y_mexgoon_02"));
		unk_0x268BE77F77533D03("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x268BE77F77533D03("amb@world_human_hang_out_street@male_a@base");
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 5);
		return 1;
	}
	return 0;
}

bool func_249(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_175(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22293 = 0;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 1;
	Global_23279 = 0;
	Global_23283 = 0;
	StringCopy(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_166(sParam2, iParam4, 0);
}

void func_250(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!BitTest(*uParam0, 25))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			switch (iVar0)
			{
				case 0:
					Var1 = { -1403,42f, -2437,447f, 12,9496f };
					break;
				
				case 1:
					Var1 = { -1245,758f, -2311,979f, 12,9445f };
					break;
			}
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_98[iVar0]) && unk_0xD9F5E1FEFD1329E4(uParam0->f_92[iVar0], 0))
			{
				unk_0x5D7CD709B34C90F0(uParam0->f_92[iVar0], false);
				unk_0x93C337B66C95C99B(uParam0->f_92[iVar0], 10f);
				unk_0xCF6CC9EA0D2EFE23(uParam0->f_98[iVar0], uParam0->f_92[iVar0], Var1, 5f, 0, unk_0x4B423FAA24E8ABF0(uParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		unk_0x0B0C9A0F9AAEB7F0(uParam0, 25);
	}
}

int func_251(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	if (BitTest(uParam0->f_3, 11))
	{
		return 1;
	}
	iVar3 = joaat("shamal");
	unk_0xEC9DAA34BBB4658C(iVar3);
	unk_0xEC9DAA34BBB4658C(func_252());
	if (unk_0x6252BC0DD8A320DB(iVar3))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_92[iVar0]))
			{
				switch (iVar0)
				{
					case 0:
						Var1 = { -1358,973f, -2361,92f, 12,9502f };
						fVar2 = 149,9339f;
						break;
					
					case 1:
						Var1 = { -1302,004f, -2279,378f, 12,9468f };
						fVar2 = 239,9712f;
						break;
				}
				uParam0->f_92[iVar0] = unk_0x5779387E956077A6(iVar3, Var1, fVar2, 0, 0, 0);
				unk_0x1DE99C193C7EC64B(uParam0->f_92[iVar0], 1084227584);
				unk_0x5D7CD709B34C90F0(uParam0->f_92[iVar0], true);
				unk_0xBA3C1A9AA7FD9616(uParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (unk_0x6252BC0DD8A320DB(func_252()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_98[iVar0]))
			{
				if (unk_0xFC8BFE4B41177C22(uParam0->f_92[iVar0]))
				{
					if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[iVar0], 0))
					{
						uParam0->f_98[iVar0] = unk_0x8728A378EF2B46B2(uParam0->f_92[iVar0], 4, func_252(), -1, 0, false);
						unk_0xAAA71DD7E9059338(uParam0->f_98[iVar0], 1);
						unk_0xC229299217554C78(uParam0->f_92[iVar0], 1, 1, 0);
					}
				}
			}
			iVar0++;
		}
	}
	unk_0x55098D9E9AD58806(iVar3);
	unk_0x55098D9E9AD58806(func_252());
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 11);
	return 1;
}

int func_252()
{
	return unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D());
}

void func_253(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_92[iVar0]))
		{
			unk_0x8C1F7D7A31B2A38E(&(uParam0->f_92[iVar0]));
		}
		if (unk_0xFC8BFE4B41177C22(uParam0->f_98[iVar0]))
		{
			unk_0x734A9F4537A31459(&(uParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	unk_0x55098D9E9AD58806(joaat("shamal"));
	unk_0x55098D9E9AD58806(func_252());
}

void func_254(var uParam0)
{
	int iVar0;
	
	if (BitTest(uParam0->f_3, 2))
	{
		unk_0x55098D9E9AD58806(joaat("p_cs_mp_jet_01_s"));
		if (unk_0xFC8BFE4B41177C22(uParam0->f_33))
		{
			unk_0x51C8BEA2005931AB(&(uParam0->f_33));
		}
		if (uParam0->f_294)
		{
			if (unk_0x9CFFB7009B578840(uParam0->f_120))
			{
				unk_0x5301FEC6BB8F21DF(uParam0->f_120, 0);
			}
			if (unk_0x9CFFB7009B578840(uParam0->f_121))
			{
				unk_0x5301FEC6BB8F21DF(uParam0->f_121, 0);
			}
			if (unk_0x6F13318788EDDAD8())
			{
				unk_0xAE427DA16687F323();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_104[iVar0]))
			{
				unk_0x734A9F4537A31459(&(uParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		unk_0x8744D2E3FC95740E(&(uParam0->f_3), 2);
	}
}

int func_255(var uParam0)
{
	if (func_269(uParam0))
	{
		unk_0x80813AC549A1E8AE("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x80813AC549A1E8AE("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0xE100DD4F82A51BDE("mp_intro_seq@ig_1_lamar_drive_female") && unk_0xE100DD4F82A51BDE("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		unk_0x80813AC549A1E8AE("mp_intro_seq@ig_1_lamar_drive_male");
		unk_0x80813AC549A1E8AE("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0xE100DD4F82A51BDE("mp_intro_seq@ig_1_lamar_drive_male") && unk_0xE100DD4F82A51BDE("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	return 0;
}

int func_256(var uParam0)
{
	int iVar0;
	
	iVar0 = joaat("cs_lamardavis");
	if (!BitTest(uParam0->f_3, 10))
	{
		unk_0xEC9DAA34BBB4658C(iVar0);
		if (unk_0x6252BC0DD8A320DB(iVar0))
		{
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_36))
			{
				uParam0->f_36 = unk_0xB1DBFEB95C0EFB88(26, iVar0, -976,6968f, -2679,861f, 35,6049f, 138,062f, 0, 0);
				unk_0xAAA71DD7E9059338(uParam0->f_36, 1);
				unk_0x935364B4448CD584(uParam0->f_36, 1);
				unk_0x4285E11B28063EE0(uParam0->f_36, false, 0);
				unk_0x3CEA1FD137ACE2D9(uParam0->f_36, unk_0x2A661A0285B74A27(unk_0x4A8C381C258A124D()));
				unk_0xD0F1DB0E50B367AD(uParam0->f_36, 1, 1, 1, 1, 1, 1, 1, 0);
				func_421(&(uParam0->f_123), 1, uParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_36))
		{
			return 0;
		}
		unk_0x55098D9E9AD58806(iVar0);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 10);
	}
	return 1;
}

void func_257(var uParam0, float fParam1)
{
	func_244(uParam0->f_34, 5, "FMINTRO", fParam1, 0);
}

void func_258(var uParam0)
{
	int iVar0;
	
	unk_0x55098D9E9AD58806(func_272());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_273(uParam0, iVar0);
		iVar0++;
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_91))
	{
		unk_0x734A9F4537A31459(&(uParam0->f_91));
	}
}

void func_259(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_266(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_170())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_265(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_266(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_265(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_263(unk_0x259BE71D8A81D4FA())) && !func_261(unk_0x259BE71D8A81D4FA(), 0)) && !func_260()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_263(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_260()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_261(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_262(-1, 0) == 8;
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

int func_262(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_30();
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

int func_263(int iParam0)
{
	if (func_261(iParam0, 0))
	{
		return 1;
	}
	if (func_264())
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

bool func_264()
{
	return BitTest(Global_2621446, 3);
}

int func_265(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4A0B7E53EBC937D5() != iParam0 && uParam2)
		{
			unk_0x7882946B06ED216B(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_266(int iParam0)
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

void func_267(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_104[iVar0], 0))
		{
			unk_0xAF8337BF5A296283(uParam0->f_104[iVar0]);
			unk_0xF293D66D4452C854(uParam0->f_104[iVar0], func_268(iVar0), 0, 0, 64);
		}
		iVar0++;
	}
}

char* func_268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_Plane_Passenger_1";
			break;
		
		case 1:
			return "MP_Plane_Passenger_2";
			break;
		
		case 2:
			return "MP_Plane_Passenger_3";
			break;
		
		case 3:
			return "MP_Plane_Passenger_4";
			break;
		
		case 4:
			return "MP_Plane_Passenger_5";
			break;
		
		case 5:
			return "MP_Plane_Passenger_6";
			break;
		
		case 6:
			return "MP_Plane_Passenger_7";
			break;
	}
	return "";
}

int func_269(var uParam0)
{
	if (uParam0->f_295)
	{
		return func_270();
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_270()
{
	return func_271(unk_0x259BE71D8A81D4FA());
}

int func_271(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_272()
{
	return joaat("s_m_y_xmech_02");
}

void func_273(var uParam0, int iParam1)
{
	unk_0x55098D9E9AD58806(func_274(iParam1));
	if (unk_0xFC8BFE4B41177C22(uParam0->f_49[iParam1]))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[iParam1], 0))
		{
		}
		unk_0xFB54FC989415871E(uParam0->f_49[iParam1]);
		unk_0x8C1F7D7A31B2A38E(&(uParam0->f_49[iParam1]));
	}
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("penumbra");
			break;
		
		case 1:
			return joaat("feltzer2");
			break;
		
		case 2:
			return joaat("coquette");
			break;
		
		case 3:
			return joaat("felon2");
			break;
		
		case 4:
			return joaat("sabregt");
			break;
		
		case 5:
			return joaat("dubsta");
			break;
		
		case 6:
			return joaat("tornado");
			break;
		
		case 7:
			return joaat("monroe");
			break;
	}
	return joaat("tailgater");
}

void func_275()
{
	Global_1577908 = 0;
	if (unk_0xA0C7B98BCF1EEF9E(Global_1577906))
	{
		unk_0x88F483FBD433696A(Global_1577906, "SET_BIG_LOGO_VISIBLE");
		unk_0x330108B080A2132F(1);
		unk_0x557F1E2300EF1A3E(0);
		unk_0xE6B753D52F4CA222();
		unk_0xD314260005F064BF(&Global_1577906);
	}
}

void func_276(var uParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_92[iVar1]))
		{
			uVar0 = uParam0->f_92[iVar1];
			unk_0x81A7F3CD719DD53B(&uVar0);
		}
		if (unk_0xFC8BFE4B41177C22(uParam0->f_98[iVar1]))
		{
			uVar0 = uParam0->f_98[iVar1];
			unk_0x81A7F3CD719DD53B(&uVar0);
		}
		iVar1++;
	}
	unk_0x55098D9E9AD58806(joaat("cheetah"));
	unk_0x55098D9E9AD58806(joaat("monroe"));
	unk_0x55098D9E9AD58806(joaat("entityxf"));
	unk_0x55098D9E9AD58806(joaat("feltzer2"));
	unk_0x7821F942CAEEBEE1(100, "FM_Intro_uber");
	unk_0x7821F942CAEEBEE1(101, "FM_Intro_uber");
	unk_0x7821F942CAEEBEE1(102, "FM_Intro_uber");
	unk_0x7821F942CAEEBEE1(103, "FM_Intro_uber");
	unk_0x7821F942CAEEBEE1(104, "FM_Intro_uber");
	unk_0x268BE77F77533D03("mp_intro_seq@");
}

void func_277(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_49[2]))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[2], 0))
		{
			unk_0x53152C1272227778(uParam0->f_49[2]);
		}
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_49[4]))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[4], 0))
		{
			unk_0x53152C1272227778(uParam0->f_49[4]);
		}
	}
}

void func_278(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_49[2]))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[2], 0))
		{
			unk_0x3E13A302AA0F06BF(uParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_279()
{
	if (unk_0xDCE42B3C644D1A4E())
	{
		return 0;
	}
	if (!unk_0xA0C7B98BCF1EEF9E(Global_1577906))
	{
		Global_1577906 = unk_0x8DE4F68A9728925E("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_280(var uParam0, char* sParam1, char* sParam2, int iParam3, struct<3> Param4, struct<3> Param5)
{
	if (unk_0xFC8BFE4B41177C22(uParam3))
	{
		if (unk_0x1C2F771CDC87A3A5(iParam3, 0))
		{
		}
		if (!unk_0x78411E34CF90EA8C(uParam0->f_8))
		{
			uParam0->f_8 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 0);
		}
		uParam0->f_9 = -1;
		uParam0->f_9 = unk_0x2EC137C692A52458(Param4, Param5, 2);
		unk_0x2DCB8CA1FE6895AB(uParam0->f_9, iParam3, 0);
		unk_0xF9B66DAE101B699C(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
		unk_0x4CBC5D1BC117616B(uParam0->f_8, 1);
		unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 1, 0);
	}
}

void func_281(var uParam0)
{
	if (!BitTest(uParam0->f_3, 3))
	{
		unk_0xC540300DE977409D("CONTRAILS");
		if (func_269(uParam0))
		{
			unk_0x046FF102DCE74A94("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			unk_0x046FF102DCE74A94("MP_INTRO_CONCAT", 31, 8);
		}
		if (unk_0xB3FA103AA6383C28())
		{
			if (uParam0->f_295)
			{
				if (func_269(uParam0))
				{
					unk_0x7901DE0AC779EB29("MP_Female_Character", 0, 1);
				}
				else
				{
					unk_0x7901DE0AC779EB29("MP_Male_Character", 0, 1);
				}
			}
			func_282();
		}
		if (unk_0x0DDDD9D153BCF51F())
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 3);
		}
	}
}

void func_282()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		unk_0x7901DE0AC779EB29(func_268(iVar0), 0, 1);
		iVar0++;
	}
}

int func_283(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142,385f };
	if (!BitTest(uParam0->f_3, 2))
	{
		unk_0xEC9DAA34BBB4658C(joaat("p_cs_mp_jet_01_s"));
		unk_0xEC9DAA34BBB4658C(joaat("mp_m_freemode_01"));
		unk_0xEC9DAA34BBB4658C(joaat("mp_f_freemode_01"));
		if (uParam0->f_294)
		{
			unk_0x8003D3C0115A1035();
		}
		if (((unk_0x6252BC0DD8A320DB(joaat("p_cs_mp_jet_01_s")) && unk_0x6252BC0DD8A320DB(joaat("mp_m_freemode_01"))) && unk_0x6252BC0DD8A320DB(joaat("mp_f_freemode_01"))) && (!uParam0->f_294 || unk_0x6F13318788EDDAD8()))
		{
			uParam0->f_33 = unk_0x4E55EAB577C13329(joaat("p_cs_mp_jet_01_s"), Var1, 0, 0, 0);
			unk_0xF88FC425EC7D675D(uParam0->f_33, 3000);
			unk_0x11C125313CB8ADA2(uParam0->f_33, 0);
			unk_0x4285E11B28063EE0(uParam0->f_33, false, 0);
			if (uParam0->f_294)
			{
				uParam0->f_120 = unk_0x62750FD2BDD8BD49("scr_mp_intro_plane_exhaust", uParam0->f_33, -5,403f, -8f, -2,2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				uParam0->f_121 = unk_0x62750FD2BDD8BD49("scr_mp_intro_plane_exhaust", uParam0->f_33, 6,629f, -8f, -2,2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
			if (uParam0->f_295)
			{
				func_287(uParam0);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_286(uParam0, iVar0))
				{
					uParam0->f_104[iVar0] = unk_0xB1DBFEB95C0EFB88(26, joaat("mp_f_freemode_01"), -1117,778f, -1557,625f, 3,3819f, 0f, 0, 0);
				}
				else
				{
					uParam0->f_104[iVar0] = unk_0xB1DBFEB95C0EFB88(26, joaat("mp_m_freemode_01"), -1117,778f, -1557,625f, 3,3819f, 0f, 0, 0);
				}
				if (func_285(uParam0, iVar0))
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(unk_0xB23E0F9B63D009A8(uParam0->f_112[iVar0])), 0))
					{
					}
					unk_0x4E719C7F4406EC93(unk_0x56E414973C2A8C0E(unk_0xB23E0F9B63D009A8(uParam0->f_112[iVar0])), uParam0->f_104[iVar0]);
					unk_0xAF8337BF5A296283(uParam0->f_104[iVar0]);
				}
				else
				{
					func_284(uParam0, iVar0);
				}
				iVar0++;
			}
			unk_0x55098D9E9AD58806(joaat("p_cs_mp_jet_01_s"));
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_284(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 0, 21, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 2, 9, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 4, 9, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 6, 4, 8, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 8, 15, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 0, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 1, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 2, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 3, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 4, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 5, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 6, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 7, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 1:
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 0, 13, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 2, 5, 4, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 4, 10, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 6, 10, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 7, 11, 2, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 8, 13, 6, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 0, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 1, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 2, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 3, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 4, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 5, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 6, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 7, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 2:
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 0, 15, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 2, 1, 4, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 4, 0, 1, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 6, 1, 7, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 8, 2, 9, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 11, 6, 0, 0);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 0, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 1, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 2, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 3, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 4, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 5, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 6, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 7, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 3:
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 0, 14, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 2, 5, 3, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 4, 1, 6, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 6, 11, 5, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 11, 3, 12, 0);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 0, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 1, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 2, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 3, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 4, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 5, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 6, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 7, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 4:
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 0, 18, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 2, 15, 3, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 3, 15, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 4, 2, 5, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 6, 4, 6, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 7, 4, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 11, 4, 0, 0);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 0, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 1, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 2, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 3, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 4, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 5, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 6, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 7, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 5:
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 0, 27, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 2, 7, 3, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 3, 11, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 4, 4, 8, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 6, 13, 14, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 7, 5, 3, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 11, 2, 7, 0);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 0, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 1, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 2, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 3, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 4, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 5, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 6, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 7, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 6:
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 0, 16, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 2, 15, 1, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 4, 5, 6, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 6, 2, 8, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 11, 3, 7, 0);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 0, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 1, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 2, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 3, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 4, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 5, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 6, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 7, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 8, 1);
			break;
	}
}

int func_285(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_14(unk_0xB23E0F9B63D009A8(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_286(var uParam0, int iParam1)
{
	if (func_285(uParam0, iParam1))
	{
		return func_271(unk_0xB23E0F9B63D009A8(uParam0->f_112[iParam1]));
	}
	else if (((iParam1 == 3 || iParam1 == 4) || iParam1 == 5) || iParam1 == 6)
	{
		return 1;
	}
	return 0;
}

void func_287(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 < 7)
	{
		uParam0->f_112[bVar1] = -1;
		bVar1++;
	}
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_14(iVar2, 0, 1))
		{
			if (unk_0x259BE71D8A81D4FA() != iVar2)
			{
				if (iVar0 < 4)
				{
					uParam0->f_112[func_288(iVar0)] = bVar1;
					iVar0++;
				}
			}
		}
		bVar1++;
	}
}

int func_288(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 6;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 1;
			break;
		
		case 5:
			return 3;
			break;
		
		case 6:
			return 2;
			break;
	}
	return 0;
}

int func_289(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	if (BitTest(uParam0->f_3, 9))
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iVar0);
	unk_0xEC9DAA34BBB4658C(iVar1);
	unk_0xD772E6694B8472A6(5, "FMINTRO");
	unk_0xD772E6694B8472A6(6, "FMINTRO");
	unk_0xD772E6694B8472A6(7, "FMINTRO");
	unk_0x80813AC549A1E8AE("mp_intro_seq@");
	if (((((unk_0x6252BC0DD8A320DB(iVar0) && unk_0x6252BC0DD8A320DB(iVar1)) && unk_0x266D9DB5FCE4003B(5, "FMINTRO")) && unk_0x266D9DB5FCE4003B(6, "FMINTRO")) && unk_0x266D9DB5FCE4003B(7, "FMINTRO")) && unk_0xE100DD4F82A51BDE("mp_intro_seq@"))
	{
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_34))
		{
			unk_0x2094BC4B6731BA68(-1034,035f, -2730,485f, 19,0565f, 3f, 1, 0, 0, 0);
			uParam0->f_34 = unk_0x5779387E956077A6(iVar1, -1032,322f, -2731,192f, 19,0658f, 239,2169f, 0, 0, 0);
			unk_0x05177DCE3DD6F271(uParam0->f_34, 1);
			unk_0x4DC72C4B884A6C59(uParam0->f_34, 0);
			unk_0xD0F1DB0E50B367AD(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
		}
		else if (!unk_0xFC8BFE4B41177C22(uParam0->f_35))
		{
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0xB1DBFEB95C0EFB88(26, iVar0, -1031,6f, -2730,15f, 20,15f, 143,6341f, 0, 0);
				unk_0xEBA229B2E0BB05E0(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0, 0);
				unk_0xAAA71DD7E9059338(uParam0->f_35, 1);
				unk_0x935364B4448CD584(uParam0->f_34, 1);
				unk_0x935364B4448CD584(uParam0->f_35, 1);
				unk_0x3CEA1FD137ACE2D9(uParam0->f_35, unk_0x2A661A0285B74A27(unk_0x4A8C381C258A124D()));
				unk_0xD0F1DB0E50B367AD(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0xFC8BFE4B41177C22(uParam0->f_34) || !unk_0xFC8BFE4B41177C22(uParam0->f_35))
	{
		return 0;
	}
	unk_0x55098D9E9AD58806(iVar0);
	unk_0x55098D9E9AD58806(iVar1);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 9);
	return 1;
}

void func_290(var uParam0)
{
	int iVar0;
	
	if (!BitTest(uParam0->f_3, 0))
	{
		func_300();
		func_298();
		if (func_292(uParam0))
		{
			if (func_291(uParam0))
			{
				if (!unk_0x78411E34CF90EA8C(uParam0->f_7))
				{
					uParam0->f_7 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				unk_0xA3774254665BAA82(uParam0->f_7, 228,1892f, -1006,758f, -96,8311f, -13,0682f, 0,0572f, 0,7306f, 40,033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					unk_0x55098D9E9AD58806(func_274(iVar0));
					iVar0++;
				}
				unk_0x55098D9E9AD58806(func_272());
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), false);
			}
		}
	}
}

int func_291(var uParam0)
{
	int iVar0;
	
	iVar0 = func_272();
	if (!unk_0xFC8BFE4B41177C22(uParam0->f_91))
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_49[2]))
		{
			if (unk_0xE7D342E0F16AAA8F(iVar0))
			{
				if (unk_0x6252BC0DD8A320DB(iVar0))
				{
					if (unk_0xE100DD4F82A51BDE("MP_INTRO_SEQ@"))
					{
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_49[2], 0))
						{
							uParam0->f_10 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = unk_0xB1DBFEB95C0EFB88(4, iVar0, 226,6826f, -998,5228f, -99,9999f, 63,813f, 0, 0);
							unk_0xAAA71DD7E9059338(uParam0->f_91, 1);
							unk_0x3DA436E63AB0F541(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1148846080, 0);
							unk_0xBF3497E24DEAD835(uParam0->f_10, 1);
							unk_0x5D7CD709B34C90F0(uParam0->f_91, true);
							unk_0x44C48AC14D3C09ED(uParam0->f_91, false, 0);
							unk_0x4F07124B9C56ED6F(uParam0->f_91, joaat("gadget_parachute"));
							unk_0xD1C578C204015E1F(uParam0->f_91, 0, 1, 1, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 1, 0, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 2, 0, 2, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 3, 0, 2, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 4, 1, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 5, 0, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 6, 0, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 7, 0, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 8, 0, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 9, 0, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 10, 0, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 11, 0, 0, 0);
							unk_0x09397806857F5DFB(uParam0->f_91, 0, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 1, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 2, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 3, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 4, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 5, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 6, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 7, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 8, 1);
						}
					}
				}
			}
		}
	}
	if (!unk_0xFC8BFE4B41177C22(uParam0->f_91))
	{
		return 0;
	}
	return 1;
}

int func_292(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	bool bVar3;
	
	if (!BitTest(uParam0->f_2, 31))
	{
		func_300();
		bVar3 = false;
		while (bVar3 < 8)
		{
			func_297(bVar3, &Var1, &fVar2);
			if (!func_296(Var1, 0f, 0f, 0f, 0))
			{
				if (!unk_0xFC8BFE4B41177C22(uParam0->f_49[bVar3]))
				{
					iVar0 = func_274(bVar3);
					if (unk_0xE7D342E0F16AAA8F(iVar0))
					{
						if (unk_0x6252BC0DD8A320DB(iVar0))
						{
							uParam0->f_49[bVar3] = unk_0x5779387E956077A6(iVar0, Var1, fVar2, 0, 0, 0);
							unk_0x11C125313CB8ADA2(uParam0->f_49[bVar3], 1);
							unk_0x9452FE4900245259(uParam0->f_49[bVar3], 0f);
							unk_0x9BC299A7D57D7CAA(uParam0->f_49[bVar3], 0);
							if (bVar3 == 2)
							{
								unk_0xBFE60A5CC0C835D8(uParam0->f_49[bVar3], 4, 0, 1);
								unk_0x3E13A302AA0F06BF(uParam0->f_49[bVar3], 4, 0, 1f);
							}
							func_295(uParam0, bVar3);
							func_294(uParam0, bVar3);
							unk_0x55098D9E9AD58806(iVar0);
						}
					}
				}
			}
			bVar3++;
		}
		bVar3 = false;
		while (bVar3 < 8)
		{
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_49[bVar3]))
			{
				return 0;
			}
			if (!BitTest(uParam0->f_2, bVar3))
			{
				if (func_293(uParam0, bVar3))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_2), bVar3);
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bVar3], 0))
			{
				if (!unk_0xA7A8B7E924089F0A(uParam0->f_49[bVar3]))
				{
					return 0;
				}
			}
			bVar3++;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_293(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 0:
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bParam1], 0))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_49[bParam1]) > 0)
				{
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 0, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 1, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 2, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 3, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 4, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 5, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 7, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 10, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 12, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 14, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 15, 4, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 23, 11, 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bParam1], 0))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_49[bParam1]) > 0)
				{
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 12, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 15, 3, 0);
					unk_0xF5501FF9869DAC7C(uParam0->f_49[bParam1], 22, 1);
					unk_0x439C904840715871(uParam0->f_49[bParam1], 0);
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bParam1], 0))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_49[bParam1]) > 0)
				{
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 0, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 4, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 14, 5, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 15, 3, 0);
					unk_0xF5501FF9869DAC7C(uParam0->f_49[bParam1], 22, 1);
					unk_0x439C904840715871(uParam0->f_49[bParam1], 0);
					return 1;
				}
			}
			break;
		
		case 3:
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bParam1], 0))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_49[bParam1]) > 0)
				{
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 15, 3, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 23, 11, 0);
					unk_0xF5501FF9869DAC7C(uParam0->f_49[bParam1], 22, 1);
					unk_0x439C904840715871(uParam0->f_49[bParam1], 0);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bParam1], 0))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_49[bParam1]) > 0)
				{
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 1, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 2, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 4, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 7, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 11, 3, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 12, 2, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 13, 2, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 15, 3, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 16, 4, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 23, 5, 0);
					unk_0xF5501FF9869DAC7C(uParam0->f_49[bParam1], 22, 1);
					unk_0x439C904840715871(uParam0->f_49[bParam1], 0);
					return 1;
				}
			}
			break;
		
		case 5:
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bParam1], 0))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_49[bParam1]) > 0)
				{
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 0, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 1, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 2, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 3, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 4, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 6, 2, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 10, 3, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 14, 7, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 15, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 23, 5, 0);
					unk_0xF5501FF9869DAC7C(uParam0->f_49[bParam1], 22, 1);
					unk_0x439C904840715871(uParam0->f_49[bParam1], 0);
					return 1;
				}
			}
			break;
		
		case 6:
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bParam1], 0))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_49[bParam1]) > 0)
				{
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 1, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 4, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 8, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 14, 7, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 23, 0, 0);
					unk_0xF5501FF9869DAC7C(uParam0->f_49[bParam1], 22, 1);
					unk_0x439C904840715871(uParam0->f_49[bParam1], 0);
					return 1;
				}
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void func_294(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0xB5AD06DDA85E2E8F(uParam0->f_49[iParam1], 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 0, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 1, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 2, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 3, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 4, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 5, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 7, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 10, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			unk_0xB5AD06DDA85E2E8F(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			unk_0xB5AD06DDA85E2E8F(uParam0->f_49[iParam1], 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 0, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			unk_0xB5AD06DDA85E2E8F(uParam0->f_49[iParam1], 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			unk_0xB5AD06DDA85E2E8F(uParam0->f_49[iParam1], 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 1, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 2, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 4, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 7, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			unk_0xB5AD06DDA85E2E8F(uParam0->f_49[iParam1], 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 0, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 1, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 2, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 3, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 4, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 6, 2);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 10, 3);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			unk_0xB5AD06DDA85E2E8F(uParam0->f_49[iParam1], 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 1, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 4, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 8, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_295(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0xD133EF7430EDCD09(uParam0->f_49[iParam1], 83, 134);
			unk_0xBB361D7264AC4FD8(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			unk_0xD133EF7430EDCD09(uParam0->f_49[iParam1], 0, 0);
			unk_0xBB361D7264AC4FD8(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			unk_0xD133EF7430EDCD09(uParam0->f_49[iParam1], 49, 0);
			unk_0xBB361D7264AC4FD8(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			unk_0xD133EF7430EDCD09(uParam0->f_49[iParam1], 0, 0);
			unk_0xBB361D7264AC4FD8(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			unk_0xD133EF7430EDCD09(uParam0->f_49[iParam1], 43, 5);
			unk_0xBB361D7264AC4FD8(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			unk_0xD133EF7430EDCD09(uParam0->f_49[iParam1], 3, 3);
			unk_0xBB361D7264AC4FD8(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			unk_0xD133EF7430EDCD09(uParam0->f_49[iParam1], 35, 0);
			unk_0xBB361D7264AC4FD8(uParam0->f_49[iParam1], 0, 156);
			break;
	}
}

bool func_296(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_297(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 224,478f, -986,548f, -99,9999f };
			*uParam2 = 240,399f;
			break;
		
		case 1:
			*uParam1 = { 224,305f, -991,848f, -99,9999f };
			*uParam2 = 240,399f;
			break;
		
		case 2:
			*uParam1 = { 224,535f, -997,348f, -99,9999f };
			*uParam2 = 240,399f;
			break;
		
		case 3:
			*uParam1 = { 232,847f, -986,818f, -99,9999f };
			*uParam2 = 118,309f;
			break;
		
		case 4:
			*uParam1 = { 232,847f, -980,848f, -99,9999f };
			*uParam2 = 118,309f;
			break;
		
		case 5:
			*uParam1 = { 224,535f, -980,848f, -99,9999f };
			*uParam2 = 240,399f;
			break;
		
		case 6:
			*uParam1 = { 232,779f, -992,84f, -99,9999f };
			*uParam2 = 118,309f;
			break;
		
		case 7:
			*uParam1 = { 232,709f, -997,348f, -99,9999f };
			*uParam2 = 118,309f;
			break;
	}
}

void func_298()
{
	unk_0xEC9DAA34BBB4658C(func_272());
	unk_0x80813AC549A1E8AE(func_299());
}

char* func_299()
{
	return "MP_INTRO_SEQ@";
}

void func_300()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		unk_0xEC9DAA34BBB4658C(func_274(iVar0));
		iVar0++;
	}
}

void func_301(var uParam0, float fParam1, float fParam2)
{
	func_244(uParam0->f_92[0], 100, "FM_Intro_uber", fParam1, 0);
	func_244(uParam0->f_92[1], 101, "FM_Intro_uber", fParam1, 0);
	func_244(uParam0->f_92[2], 102, "FM_Intro_uber", (fParam1 + fParam2), 0);
	func_244(uParam0->f_92[3], 103, "FM_Intro_uber", fParam1, 0);
	func_244(uParam0->f_92[4], 104, "FM_Intro_uber", fParam1, 0);
}

void func_302(var uParam0, int iParam1)
{
	bool bVar0;
	var uVar1;
	
	switch (iParam1)
	{
		case 14:
			func_303(uParam0, 0, -2997,174f, 330,9234f, 14,2341f, -15,97f, &uVar1, 1);
			func_303(uParam0, 2, -2983,9f, 423,7414f, 14,4122f, -5,25f, &uVar1, 1);
			break;
		
		case 15:
			func_303(uParam0, 1, -2622,208f, -109,3386f, 19,2643f, 39,34f, &uVar1, 1);
			func_303(uParam0, 3, -2583,95f, -143,6469f, 20,6224f, 48,89f, &uVar1, 1);
			func_303(uParam0, 7, -2552,145f, -169,0495f, 19,8664f, 60,04f, &uVar1, 1);
			func_303(uParam0, 8, -2531,474f, -174,4581f, 19,2269f, 58,09f, &uVar1, 1);
			break;
		
		case 16:
			break;
		
		case 17:
			func_303(uParam0, 0, -2420,618f, -232,2668f, 15,3525f, 57,71f, &uVar1, 1);
			func_303(uParam0, 2, -2399,709f, -249,2471f, 14,9551f, 58,19f, &uVar1, 1);
			func_303(uParam0, 4, -2568,499f, -153,4655f, 20,4075f, 54,1f, &uVar1, 1);
			func_303(uParam0, 5, -2485,392f, -198,0737f, 17,5783f, 63,83f, &uVar1, 1);
			func_303(uParam0, 6, -2469,139f, -206,5518f, 17,0201f, 60,64f, &uVar1, 1);
			func_303(uParam0, 9, -2408,733f, -238,8328f, 15,2055f, 59,84f, &uVar1, 1);
			break;
		
		case 18:
			func_303(uParam0, 1, -2146,384f, -323,4933f, 12,0429f, 14,8813f, &uVar1, 1);
			func_303(uParam0, 3, -2075,444f, -374,131f, 11,556f, 56,66f, &uVar1, 1);
			func_303(uParam0, 7, -2160,252f, -294,0829f, 12,5163f, 163,95f, &uVar1, 1);
			func_303(uParam0, 8, -2191,429f, -335,8769f, 12,7225f, 84,71f, &uVar1, 1);
			break;
		
		case 19:
			func_303(uParam0, 0, -1833,87f, -561,7711f, 11,0989f, 48,11f, &uVar1, 1);
			func_303(uParam0, 1, -1630,587f, -685,6821f, 16,5351f, 58,23f, &uVar1, 1);
			func_303(uParam0, 2, -1668,738f, -662,7587f, 14,7925f, 60,52f, &uVar1, 1);
			func_303(uParam0, 3, -1564,946f, -738,6324f, 10,7672f, 68,32f, &uVar1, 1);
			func_303(uParam0, 4, -1706,507f, -720,8959f, 9,6281f, -132,94f, &uVar1, 1);
			func_303(uParam0, 5, -1626,756f, -769,9745f, 10,2367f, -128,8f, &uVar1, 1);
			func_303(uParam0, 6, -1782,764f, -610,5726f, 10,3008f, 52,34f, &uVar1, 1);
			func_303(uParam0, 7, -1595,258f, -733,587f, 10,8576f, 68,39f, &uVar1, 1);
			func_303(uParam0, 8, -1751,892f, -682,1017f, 9,6795f, -134,89f, &uVar1, 1);
			func_303(uParam0, 9, -1742,098f, -642,5658f, 9,8169f, 48,19f, &uVar1, 1);
			break;
		
		case 33:
			func_303(uParam0, 0, -934,4687f, -2716,038f, 12,7365f, 309,2312f, &uVar1, 0);
			func_303(uParam0, 5, -975,6617f, -2733,517f, 12,8172f, 267,4944f, &uVar1, 0);
			break;
		
		case 34:
			break;
		
		case 35:
			break;
		
		case 36:
			func_303(uParam0, 6, -850,1183f, -2615,271f, 14,1979f, 327,7461f, &uVar1, 0);
			break;
		
		case 37:
			break;
		
		case 38:
			func_303(uParam0, 0, -712,0925f, -1983,516f, 25,688f, -167,99f, &uVar1, 0);
			func_303(uParam0, 1, -533,9934f, -2004,727f, 26,9085f, 58,71f, &uVar1, 0);
			func_303(uParam0, 2, -653,3551f, -2047,782f, 27,3566f, -112,14f, &uVar1, 0);
			func_303(uParam0, 3, -663,821f, -1934,85f, 27,1417f, -121,65f, &uVar1, 0);
			func_303(uParam0, 4, -656,6017f, -2009,078f, 30,0188f, -106,53f, &uVar1, 0);
			func_303(uParam0, 5, -502,696f, -2023,068f, 26,2376f, 60,2827f, &uVar1, 0);
			func_303(uParam0, 6, -460,1447f, -2044,032f, 26,2371f, 63,9022f, &uVar1, 0);
			func_303(uParam0, 7, -624,7944f, -1960,975f, 26,29f, 237,3848f, &uVar1, 0);
			func_303(uParam0, 8, -463,0545f, -1998,255f, 36,6533f, 27,85f, &uVar1, 0);
			func_303(uParam0, 9, -473,4099f, -1950,213f, 24,7576f, 37,16f, &uVar1, 0);
			func_303(uParam0, 10, -574,5834f, -1994,9f, 26,2871f, 236,0571f, &uVar1, 0);
			func_303(uParam0, 11, -546,7894f, -2012,781f, 26,3137f, 235,9205f, &uVar1, 0);
			func_303(uParam0, 12, -584,929f, -1970,332f, 26,2437f, 55,8826f, &uVar1, 0);
			func_303(uParam0, 13, -633,4936f, -1937,682f, 26,2413f, 54,9911f, &uVar1, 0);
			func_303(uParam0, 14, -601,2188f, -1941,419f, 17,4986f, 148,6622f, &uVar1, 0);
			break;
		
		case 39:
			func_303(uParam0, 4, -499,2335f, -1906,532f, 16,3534f, 133,5751f, &uVar1, 0);
			func_303(uParam0, 9, -518,8654f, -1918,144f, 16,3355f, 134,6305f, &uVar1, 0);
			break;
		
		case 40:
			func_303(uParam0, 3, -270,2197f, -1499,752f, 29,4309f, -13,07f, &uVar1, 0);
			func_303(uParam0, 7, -313,1461f, -1559,589f, 24,2966f, 145,66f, &uVar1, 0);
			func_303(uParam0, 8, -301,9485f, -1550,052f, 25,5595f, 146,95f, &uVar1, 0);
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			func_303(uParam0, 1, 246,1231f, -238,5137f, 52,9482f, 251,5966f, &uVar1, 0);
			func_303(uParam0, 2, 214,2755f, -202,6486f, 53,5033f, 70,72f, &uVar1, 0);
			func_303(uParam0, 6, 263,1977f, -115,1292f, 69,0366f, 155,02f, &uVar1, 0);
			break;
		
		case 44:
			func_303(uParam0, 0, 392,6941f, 239,868f, 102,5932f, 159,15f, &uVar1, 0);
			func_303(uParam0, 7, 375,2224f, 192,316f, 102,0397f, 160,4247f, &uVar1, 0);
			func_303(uParam0, 12, 377,4185f, 166,3668f, 102,0407f, 337,9135f, &uVar1, 0);
			break;
		
		case 45:
			func_303(uParam0, 1, 267,8363f, 181,3352f, 103,7037f, 71,7724f, &uVar1, 0);
			func_303(uParam0, 3, 216,3894f, 211,8832f, 105,2308f, -19,82f, &uVar1, 0);
			func_303(uParam0, 4, 290,3365f, 172,6194f, 103,7313f, 67,09f, &uVar1, 0);
			func_303(uParam0, 5, 283,6507f, 155,574f, 103,264f, 252,0678f, &uVar1, 0);
			func_303(uParam0, 8, 309,5128f, 156,7439f, 103,3183f, -112,52f, &uVar1, 0);
			func_303(uParam0, 9, 249,0189f, 168,3015f, 104,5421f, -112,05f, &uVar1, 0);
			func_303(uParam0, 11, 313,7221f, 144,8591f, 102,6542f, 249,0527f, &uVar1, 0);
			func_303(uParam0, 13, 171,2032f, 216,4137f, 105,2411f, 69,1778f, &uVar1, 0);
			break;
		
		case 46:
			break;
		
		case 47:
			func_303(uParam0, 2, 226,2312f, 176,6035f, 104,3217f, 252,5577f, &uVar1, 0);
			func_303(uParam0, 6, 247,4283f, 168,6965f, 103,9378f, 250,2977f, &uVar1, 0);
			func_303(uParam0, 7, 211,375f, 181,7446f, 104,561f, 250,2252f, &uVar1, 0);
			break;
		
		case 48:
			break;
		
		case 49:
			func_303(uParam0, 2, -192,4192f, 249,71f, 91,7534f, -99,42f, &uVar1, 0);
			func_303(uParam0, 3, -45,3246f, 256,5581f, 105,0516f, 272,9104f, &uVar1, 0);
			func_303(uParam0, 4, -24,1551f, 272,3286f, 106,4563f, 96,6005f, &uVar1, 0);
			func_303(uParam0, 5, 6,5526f, 270,3987f, 108,268f, 84,5591f, &uVar1, 0);
			func_303(uParam0, 6, -124,1576f, 245,0871f, 96,1105f, -89,91f, &uVar1, 0);
			func_303(uParam0, 7, -140,9613f, 262,532f, 94,5308f, 87,51f, &uVar1, 0);
			func_303(uParam0, 9, -83,4766f, 247,5941f, 99,488f, 275,7796f, &uVar1, 0);
			func_303(uParam0, 10, -215,5077f, 252,4543f, 91,0469f, 264,726f, &uVar1, 0);
			break;
		
		case 50:
			break;
	}
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (!BitTest(uVar1, bVar0))
		{
			func_218(uParam0, bVar0);
		}
		bVar0++;
	}
}

void func_303(var uParam0, bool bParam1, struct<3> Param2, float fParam3, var uParam4, bool bParam5)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_58[bParam1], 0) && !unk_0x4FAFF4BCB7633475(uParam0->f_74[bParam1]))
	{
		unk_0x5D7CD709B34C90F0(uParam0->f_58[bParam1], false);
		unk_0x44C48AC14D3C09ED(uParam0->f_58[bParam1], true, 0);
		unk_0xB2BD5837A8D3CEDA(uParam0->f_58[bParam1], Param2, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(uParam0->f_58[bParam1], fParam3);
		unk_0x1DE99C193C7EC64B(uParam0->f_58[bParam1], 1084227584);
		unk_0xF698038C13845696(uParam0->f_58[bParam1]);
		if (bParam5)
		{
			unk_0xB3DA477F44309390(uParam0->f_74[bParam1], uParam0->f_58[bParam1], 0, 1, 35f, 786603, 5f, 5f, 1);
			unk_0x93C337B66C95C99B(uParam0->f_58[bParam1], 30f);
		}
		else
		{
			unk_0xB3DA477F44309390(uParam0->f_74[bParam1], uParam0->f_58[bParam1], 0, 1, 15f, 786603, 5f, 5f, 1);
			unk_0x93C337B66C95C99B(uParam0->f_58[bParam1], 10f);
		}
		unk_0x44FB298D6382876D(uParam0->f_74[bParam1], 1);
		unk_0x4285E11B28063EE0(uParam0->f_58[bParam1], true, 0);
		unk_0x4285E11B28063EE0(uParam0->f_74[bParam1], true, 0);
		unk_0x0B0C9A0F9AAEB7F0(uParam4, bParam1);
	}
}

void func_304(var uParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param4, float fParam5, int iParam6)
{
	if (!unk_0x78411E34CF90EA8C(uParam0->f_8))
	{
		uParam0->f_8 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 0);
	}
	uParam0->f_9 = -1;
	uParam0->f_9 = unk_0x2EC137C692A52458(Param3, Param4, 2);
	unk_0xF9B66DAE101B699C(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
	unk_0x7BB893EF8F683419(uParam0->f_9, fParam5);
	unk_0x16B754A9C2FD8E74(uParam0->f_9, iParam6);
	unk_0x4CBC5D1BC117616B(uParam0->f_8, 1);
	unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 1, 0);
}

void func_305(var uParam0)
{
	unk_0x55098D9E9AD58806(joaat("frogger"));
	unk_0x7821F942CAEEBEE1(8, "FMIntro");
	if (unk_0xFC8BFE4B41177C22(uParam0->f_48))
	{
		unk_0x8C1F7D7A31B2A38E(&(uParam0->f_48));
	}
}

int func_306(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (BitTest(uParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_308();
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_92[0]))
		{
			if (unk_0x6252BC0DD8A320DB(joaat("cheetah")))
			{
				uParam0->f_92[0] = unk_0x5779387E956077A6(joaat("cheetah"), -3007,912f, 370,6909f, 13,7517f, 184,1746f, 0, 0, 0);
				unk_0x4DC72C4B884A6C59(uParam0->f_92[0], 0);
				unk_0x439C904840715871(uParam0->f_92[0], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_92[1]))
		{
			if (unk_0x6252BC0DD8A320DB(joaat("entityxf")))
			{
				uParam0->f_92[1] = unk_0x5779387E956077A6(joaat("entityxf"), -2999,383f, 404,3465f, 14,3213f, 184,1746f, 0, 0, 0);
				unk_0x4DC72C4B884A6C59(uParam0->f_92[1], 0);
				unk_0xF425E0B05426E088(uParam0->f_92[1], -0,0001f, -0,002f, 0,9978f, 0,0661f);
				unk_0x20DD46D27530FAC7(uParam0->f_92[1], 8);
				unk_0x439C904840715871(uParam0->f_92[1], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_92[2]))
		{
			if (unk_0x6252BC0DD8A320DB(joaat("monroe")))
			{
				uParam0->f_92[2] = unk_0x5779387E956077A6(joaat("monroe"), -2994,417f, 435,5293f, 14,278f, 184,1746f, 0, 0, 0);
				unk_0x4DC72C4B884A6C59(uParam0->f_92[2], 0);
				unk_0xF425E0B05426E088(uParam0->f_92[2], 0,0072f, -0,0028f, 0,9981f, 0,0612f);
				unk_0x20DD46D27530FAC7(uParam0->f_92[2], 2);
				unk_0x439C904840715871(uParam0->f_92[2], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_92[3]))
		{
			if (unk_0x6252BC0DD8A320DB(joaat("cheetah")))
			{
				uParam0->f_92[3] = unk_0x5779387E956077A6(joaat("cheetah"), -2992,259f, 473,8287f, 14,5044f, 184,1746f, 0, 0, 0);
				unk_0x4DC72C4B884A6C59(uParam0->f_92[3], 0);
				unk_0xF425E0B05426E088(uParam0->f_92[3], 0,0071f, -0,0058f, 0,9993f, 0,0375f);
				unk_0x20DD46D27530FAC7(uParam0->f_92[3], 15);
				unk_0x439C904840715871(uParam0->f_92[3], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_92[4]))
		{
			if (unk_0x6252BC0DD8A320DB(joaat("feltzer2")))
			{
				uParam0->f_92[4] = unk_0x5779387E956077A6(joaat("feltzer2"), -2988,246f, 425,2664f, 14,387f, 184,1746f, 0, 0, 0);
				unk_0x4DC72C4B884A6C59(uParam0->f_92[4], 0);
				unk_0xF425E0B05426E088(uParam0->f_92[4], 0,0026f, -0,0014f, 0,998f, 0,0637f);
				unk_0xD133EF7430EDCD09(uParam0->f_92[4], 0, 0);
				unk_0xBB361D7264AC4FD8(uParam0->f_92[4], 0, 156);
				unk_0xB5AD06DDA85E2E8F(uParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[4], 0))
		{
			if (!BitTest(uParam0->f_3, 1))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_92[4]) > 0)
				{
					unk_0xF5501FF9869DAC7C(uParam0->f_92[4], 22, 1);
					unk_0x439C904840715871(uParam0->f_92[4], 0);
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), true);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (unk_0x6252BC0DD8A320DB(func_252()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!unk_0xFC8BFE4B41177C22(uParam0->f_98[iVar1]))
				{
					if (unk_0xFC8BFE4B41177C22(uParam0->f_92[iVar1]))
					{
						if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[iVar1], 0))
						{
							uParam0->f_98[iVar1] = unk_0x8728A378EF2B46B2(uParam0->f_92[iVar1], 4, func_252(), -1, 0, false);
							unk_0xAAA71DD7E9059338(uParam0->f_98[iVar1], 1);
							unk_0xC229299217554C78(uParam0->f_92[iVar1], 1, 1, 0);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			unk_0x55098D9E9AD58806(joaat("cheetah"));
			unk_0x55098D9E9AD58806(joaat("monroe"));
			unk_0x55098D9E9AD58806(joaat("entityxf"));
			unk_0x55098D9E9AD58806(joaat("feltzer2"));
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_307()
{
	func_308();
	if (unk_0x6252BC0DD8A320DB(func_252()))
	{
		if (unk_0x6252BC0DD8A320DB(joaat("cheetah")))
		{
			if (unk_0x6252BC0DD8A320DB(joaat("monroe")))
			{
				if (unk_0x6252BC0DD8A320DB(joaat("entityxf")))
				{
					if (unk_0x6252BC0DD8A320DB(joaat("feltzer2")))
					{
						if (unk_0x266D9DB5FCE4003B(100, "FM_Intro_uber"))
						{
							if (unk_0x266D9DB5FCE4003B(101, "FM_Intro_uber"))
							{
								if (unk_0x266D9DB5FCE4003B(102, "FM_Intro_uber"))
								{
									if (unk_0x266D9DB5FCE4003B(103, "FM_Intro_uber"))
									{
										if (unk_0x266D9DB5FCE4003B(104, "FM_Intro_uber"))
										{
											if (unk_0xE100DD4F82A51BDE("mp_intro_seq@"))
											{
												return 1;
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
	return 0;
}

void func_308()
{
	unk_0xEC9DAA34BBB4658C(joaat("cheetah"));
	unk_0xEC9DAA34BBB4658C(joaat("monroe"));
	unk_0xEC9DAA34BBB4658C(joaat("entityxf"));
	unk_0xEC9DAA34BBB4658C(joaat("feltzer2"));
	unk_0xEC9DAA34BBB4658C(func_252());
	unk_0xD772E6694B8472A6(100, "FM_Intro_uber");
	unk_0xD772E6694B8472A6(101, "FM_Intro_uber");
	unk_0xD772E6694B8472A6(102, "FM_Intro_uber");
	unk_0xD772E6694B8472A6(103, "FM_Intro_uber");
	unk_0xD772E6694B8472A6(104, "FM_Intro_uber");
	unk_0x80813AC549A1E8AE("mp_intro_seq@");
}

int func_309(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (BitTest(uParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		unk_0xEC9DAA34BBB4658C(joaat("asterope"));
		unk_0xEC9DAA34BBB4658C(joaat("sentinel"));
		unk_0xEC9DAA34BBB4658C(func_252());
		if ((unk_0x6252BC0DD8A320DB(joaat("asterope")) && unk_0x6252BC0DD8A320DB(joaat("sentinel"))) && unk_0x6252BC0DD8A320DB(func_252()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!unk_0xFC8BFE4B41177C22(uParam0->f_58[iVar0]))
				{
					if (iVar0 < 7)
					{
						iVar1 = joaat("asterope");
					}
					else
					{
						iVar1 = joaat("sentinel");
					}
					func_219(iVar0, &Var2, &fVar3);
					uParam0->f_58[iVar0] = unk_0x5779387E956077A6(iVar1, Var2, fVar3, 0, 0, 0);
					unk_0x20DD46D27530FAC7(uParam0->f_58[iVar0], iVar0);
					unk_0x935364B4448CD584(uParam0->f_58[iVar0], 1);
					unk_0xBA3C1A9AA7FD9616(uParam0->f_58[iVar0], 2);
					unk_0x5D7CD709B34C90F0(uParam0->f_58[iVar0], true);
				}
				if (unk_0xFC8BFE4B41177C22(uParam0->f_58[iVar0]))
				{
					if (!unk_0xFC8BFE4B41177C22(uParam0->f_74[iVar0]))
					{
						uParam0->f_74[iVar0] = unk_0x8728A378EF2B46B2(uParam0->f_58[iVar0], 4, func_252(), -1, 0, false);
						unk_0x935364B4448CD584(uParam0->f_74[iVar0], 1);
						unk_0xAAA71DD7E9059338(uParam0->f_74[iVar0], 1);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_58[iVar0]) || !unk_0xFC8BFE4B41177C22(uParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x55098D9E9AD58806(joaat("asterope"));
		unk_0x55098D9E9AD58806(joaat("sentinel"));
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 4);
		return 1;
	}
	return 0;
}

int func_310(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_234(uParam0, iParam1, 0);
	if (uParam0->f_293)
	{
		if ((uParam0->f_13 + iVar0) + iParam2) <= unk_0x1DD05E817C89C737()
		{
			return 1;
		}
	}
	else if (iVar0 + iParam2) <= func_242(uParam0)
	{
		return 1;
	}
	return 0;
}

int func_311(var uParam0)
{
	int iVar0;
	
	if (BitTest(uParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	unk_0xEC9DAA34BBB4658C(iVar0);
	unk_0xD772E6694B8472A6(8, "FMIntro");
	if (unk_0x6252BC0DD8A320DB(iVar0) && unk_0x266D9DB5FCE4003B(8, "FMIntro"))
	{
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_48))
		{
			uParam0->f_48 = unk_0x5779387E956077A6(iVar0, unk_0x2A03585144C38A2A(8, 0f, "FMIntro"), 0f, 0, 0, 0);
			unk_0x88556DA0593A0748(uParam0->f_48, 8, "FMIntro", 1);
			unk_0x8BCD7C11D27FB9A1(uParam0->f_48, 5000f);
			unk_0x36D3AD4491CD32BA(uParam0->f_48);
			unk_0x4285E11B28063EE0(uParam0->f_48, false, 0);
			unk_0x55098D9E9AD58806(iVar0);
		}
	}
	if (!unk_0xFC8BFE4B41177C22(uParam0->f_48))
	{
		return 0;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 8);
	return 1;
}

void func_312(var uParam0, int iParam1)
{
	if (func_310(uParam0, iParam1, 0))
	{
		if (uParam0->f_293)
		{
			uParam0->f_13 = (unk_0x1DD05E817C89C737() - func_234(uParam0, iParam1, 0));
		}
		else
		{
			uParam0->f_291 = 1;
		}
	}
}

void func_313(var uParam0)
{
	uParam0->f_13 = unk_0x1DD05E817C89C737();
}

Vector3 func_314(struct<3> Param0)
{
	return (-system::sin(Param0.f_2) * system::cos(Param0.f_0)), (system::cos(Param0.f_2) * system::cos(Param0.f_0)), system::sin(Param0.f_0);
}

int func_315()
{
	return Global_1575011;
}

void func_316()
{
	unk_0x5E08BBBF87BC4886(-533,6674f, -1961,788f, 16,82666f, -429,5074f, -1860,31f, 22,79688f, 20,5f, 0, 0, 0);
	unk_0x5E08BBBF87BC4886(224,4978f, -274,7691f, 48,87971f, 263,1581f, -170,5107f, 63,18772f, 21f, 0, 0, 0);
}

void func_317()
{
	func_225(0);
	func_224(1);
}

void func_318(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_322();
	func_320(1);
	unk_0x428C32CC68809A35(1);
	unk_0x406CBCEA35499884();
	func_259(1, 1, 1, 0, 0, 0, bParam2);
	func_319();
	func_211(12, 1, -1);
	func_212(0);
	if (bParam3)
	{
		unk_0xD7C0EA10993D3214(1, -1);
	}
	unk_0x37B894853929BF1A(0);
	unk_0x747786364137DC63(0);
	func_320(1);
	func_266(1);
	Global_2672855.f_3585 = 1;
	if (bParam0)
	{
		if (!unk_0x0721B5D4CF3ACD02())
		{
			unk_0x42B4970D598C8A72(1, iParam1);
		}
	}
}

void func_319()
{
	func_212(0);
	func_211(4, 1, -1);
	func_211(6, 1, -1);
	func_211(7, 1, -1);
	func_211(3, 1, -1);
	func_211(1, 1, -1);
	func_211(2, 1, -1);
	func_211(11, 1, -1);
	func_211(13, 1, -1);
	func_211(14, 1, -1);
	func_211(16, 1, -1);
}

void func_320(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112618)
	{
		unk_0x665A7E873A6664BC(iVar0, iParam0);
		func_321(iVar0);
		iVar0++;
	}
}

void func_321(int iParam0)
{
	Global_112618[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_112618[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_112618[iParam0 /*28*/].f_4), "", 64);
	Global_112618[iParam0 /*28*/].f_23 = 0;
	Global_112618[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112618[iParam0 /*28*/].f_27 = 0;
	Global_112618[iParam0 /*28*/].f_20 = 0;
	Global_112618[iParam0 /*28*/].f_22 = 0;
}

void func_322()
{
	Global_1574755 = 1;
	StringCopy(&(Global_1574755.f_1), unk_0x1AF90EB93E0012D6(), 32);
	Global_1574755.f_9 = unk_0x70E57E9927B6BA58(&(Global_1574755.f_1));
}

int func_323()
{
	if (unk_0x15CCE8886267624F())
	{
		func_325(0);
		unk_0xD2D97A8EA35312E0();
		return 1;
	}
	if (func_324() == 3)
	{
		func_325(2);
		unk_0xB63687B4F0E3E236(250f);
	}
	if (unk_0x6C91BB4DA2CAE9B1() >= 250f)
	{
		unk_0xB63687B4F0E3E236(250f);
	}
	if (unk_0xF2CF182F5FDA78DF() == 0)
	{
		unk_0xB63687B4F0E3E236(250f);
	}
	if (unk_0x6C91BB4DA2CAE9B1() <= 0f)
	{
		func_325(0);
		return 1;
	}
	return 0;
}

int func_324()
{
	return Global_1574633.f_19;
}

void func_325(int iParam0)
{
	if (Global_1574633.f_19 != iParam0)
	{
		Global_1574633.f_19 = iParam0;
	}
}

void func_326(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_330(iParam0, &iVar1);
	if (!unk_0x1B79E937E91F40C3("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0xE849FB3A0C73A0D9(iVar1))
			{
				return;
			}
			if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == iVar1)
			{
				func_329(iParam0, 1);
				return;
			}
			iVar2 = unk_0x92EA98681B1610F2();
			if (iVar2 != 0 && iVar2 == iVar1)
			{
				func_329(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0xE849FB3A0C73A0D9(iVar1))
			{
				return;
			}
			if (func_327(iParam0))
			{
				func_329(iParam0, 0);
			}
		}
		unk_0xD3EBDA853981B983(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_327(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_328(iParam0) };
	if (Var0.f_1 != -1 && BitTest(Global_39391[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_328(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = (iParam0 % 32);
	Var0.f_1 = (iParam0 / 32);
	if (Var0.f_1 >= 8)
	{
		Var0.f_0 = -1;
		Var0.f_1 = -1;
	}
	return Var0;
}

void func_329(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_328(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_39391[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_39391[Var0.f_1]), Var0.f_0);
	}
}

var func_330(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_331(iParam0) };
	*iParam1 = unk_0x0556019E7EE8EC9A(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_331(int iParam0)
{
	struct<5> Var0;
	struct<3> Var1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447,4833f, 280,3197f, 77,5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906,786f, -573,7576f, 19,0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399,973f, 1148,756f, 113,3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598,6379f, -1608,399f, 26,0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556,5089f, 286,3181f, 81,1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111,7116f, -11,912f, 69,5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274,934f, -1714,726f, 53,7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147,433f, -2201,37f, 3,688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320,9934f, 265,2515f, 82,1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425,564f, -244,3f, 15,8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377,153f, -717,567f, 10,0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245,1564f, 370,211f, 104,7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173,1176f, -1003,279f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199,9715f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228,6058f, -992,0537f, -99,9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854,254f, 3686,739f, 33,2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444,8907f, 6013,587f, 30,7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522,845f, 3707,965f, 19,9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717,2994f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717,299f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449,785f, 4983,825f, 45,8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087,195f, -1988,445f, 28,649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982,233f, -2160,382f, 28,4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479,0568f, -1316,825f, 28,2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005,663f, -478,3461f, 49,0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var1 = { func_334(1, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var1 = { func_334(2, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var1 = { func_334(3, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var1 = { func_334(4, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var1 = { func_334(5, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var1 = { func_334(6, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var1 = { func_334(7, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1312298[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var1 = { func_334(35, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var1 = { func_334(36, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var1 = { func_334(37, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var1 = { func_334(38, 0) };
			Var0 = { -20,1f, -580,8f, 91,3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var1 = { func_334(39, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var1 = { func_334(40, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var1 = { func_334(41, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var1 = { func_334(42, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var1 = { func_334(43, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470,3754f, -698,5207f, 51,5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460,6133f, -691,5562f, 69,9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300,633f, -997,4288f, -99,9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374,2012f, 416,9688f, 142,5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16,29585f, -684,0385f, 33,50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341,1f, -1000f, -99,2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199,9716f, -1018,954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388,001f, -618,4197f, 30,8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var1 = { func_334(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var1 = { func_334(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var1 = { func_334(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var1 = { func_334(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var1 = { func_334(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var1 = { func_334(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var1 = { func_334(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var1 = { func_334(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var1 = { func_334(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var1 = { func_334(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var1 = { func_334(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var1 = { func_334(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var1 = { func_334(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var1 = { func_334(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var1 = { func_334(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var1 = { func_334(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var1 = { func_334(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var1 = { func_334(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var1 = { func_334(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var1 = { func_334(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var1 = { func_334(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var1 = { func_334(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var1 = { func_334(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var1 = { func_334(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var1 = { func_334(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var1 = { func_334(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var1 = { func_334(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var1 = { func_334(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var1 = { func_334(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var1 = { func_334(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var1 = { func_334(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var1 = { func_334(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var1 = { func_334(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var1 = { func_334(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var1 = { func_334(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var1 = { func_334(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var1 = { func_334(91, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var1 = { func_334(97, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var1 = { func_334(103, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var1 = { func_334(104, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var1 = { func_334(105, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var1 = { func_334(106, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var1 = { func_334(107, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var1 = { func_334(108, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var1 = { func_334(109, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var1 = { func_334(110, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var1 = { func_334(111, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var1 = { func_334(112, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var1 = { func_334(113, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var1 = { func_334(114, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var1 = { func_334(103, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var1 = { func_334(106, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var1 = { func_334(109, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var1 = { func_334(112, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938,3077f, -3196,112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512,5f, 4852f, -62,6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61,9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047,6f, -232,3503f, 38,0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520,0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266,802f, -3014,849f, -49,4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974,9203f, -3000,065f, -40,647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969,5376f, -3000,411f, -48,647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094,997f, -3100,012f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059,995f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010,008f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372,6707f, 405,5235f, 144,5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282,0588f, -955,17f, 85,3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342,7946f, -997,4225f, -99,7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260,3268f, -997,4298f, -100,0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108,2369f, -753,5364f, 233,1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135,3226f, -746,3677f, 253,1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108,2572f, -753,5342f, 44,7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228,6161f, -992,053f, -99,9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 1257f, 4796,7f, -39,1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 694,4f, 5898,9f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1121,8f, 5516,3f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 1279,6f, 5233,2f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1158,6f, 5467,1f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 705,9f, 5838,5f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1316,5f, 5184f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 1248f, 5276,1f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1090,2f, 5559,2f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1261f, 4808,6f, -39,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 721,8f, 5781,4f, -146,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 780,8f, 5703,4f, -136,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 868,1f, 5659,2f, -126,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 1218,2f, 5321,2f, -85,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 1278,5f, 4859,7f, -44,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1187,2f, 5419,8f, -96,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1344,7f, 5136,4f, -75,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1363,4f, 5039,5f, -65,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1049,3f, 5602,1f, -107,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1337,8f, 4944,3f, -55,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 961,5f, 5646,9f, -117,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 345,0041f, 4842,001f, -59,9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 279,9322f, -1337,49f, 23,7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { -1604,664f, -3012,583f, -79,9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
		case 212:
			Var0 = { -1505,783f, -3012,587f, -79,9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -630,4205f, -236,7843f, 37,057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { 2800f, -3942f, 182,5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 195:
			Var0 = { 1049,6f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 223:
			Var0 = { 2920f, 4470f, -100f };
			Var0.f_3 = "sf_dlc_warehouse_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 1093,6f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 197:
			Var0 = { 1009,5f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 976,6364f, 70,29476f, 115,1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 2479,3f, -273,9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2800f, -380f, -48,5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2497,7f, -312,8f, -69,9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2523,4f, -270f, -58,7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2504,4f, -257,2f, -39,1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2554f, -281,4f, -64,7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2488,3f, -267,4f, -70,6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2519,9f, -255,3f, -24,1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2572,9f, -253,4f, -64,7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 1103,562f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 214:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 215:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 216:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 217:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 218:
			Var0 = { -2000f, 1113,4f, 25,7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 219:
			Var0 = { -1350f, 160f, -99,2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 220:
			Var0 = { 1,1f, -705,6f, 16,1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 221:
			Var0 = { -1010f, -70f, -99,4f };
			Var0.f_3 = "sf_dlc_studio_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 222:
			Var0 = { 1550f, 250f, -50f };
			Var0.f_3 = "h4_dlc_int_02_h4";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 224:
			Var0 = { -935,7f, -2992,2f, 13,9f };
			Var0.f_3 = "v_hanger";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 225:
			Var0 = { 730f, -2990f, -39f };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 226:
			Var0 = { 152,3f, -1004,4f, -97,8f };
			Var0.f_3 = "v_motel_mp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 227:
			Var0 = { 170f, 5190f, 10f };
			Var0.f_3 = "xs_x18_int_mod2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 228:
			Var0 = { 850f, -3000f, -50f };
			Var0.f_3 = "reh_dlc_int_04_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 229:
			Var0 = { 495f, -2560f, -50f };
			Var0.f_3 = "xm3_DLC_INT_04_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 230:
			Var0 = { 570f, -415,1f, -69,6f };
			Var0.f_3 = "xm3_DLC_INT_03_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 231:
			Var0 = { 984,4f, -95,4f, 76,8f };
			Var0.f_3 = "bkr_biker_dlc_int_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 232:
			Var0 = { -880f, -2770f, -49f };
			Var0.f_3 = "M23_1_dlc_int_01_M23_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 233:
			Var0 = { 800f, -3000f, -69f };
			Var0.f_3 = "reh_dlc_int_03_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 234:
			Var0 = { 930,1f, -2269,9f, -50,4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 235:
			Var0 = { 930,1f, -2240,1f, -50,4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 236:
			Var0 = { 930,1f, -2213,2f, -50,4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 237:
			Var0 = { 930,1f, -2183,4f, -50,4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 238:
			Var0 = { 1000f, -2200f, -50f };
			Var0.f_3 = "m23_2_dlc_int_warehouse2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 239:
			Var0 = { 1000f, -2230f, -50f };
			Var0.f_3 = "m23_2_dlc_int_warehouse2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 240:
			Var0 = { 1220f, -2280f, -49f };
			Var0.f_3 = "m23_2_int_warehouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 241:
			Var0 = { -1421,015f, -3012,587f, -80f };
			Var0.f_3 = "ba_dlc_int_03_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 242:
			Var0 = { -2000f, 1113,2f, 27,6f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 243:
			Var0 = { Global_4718592.f_222620[0 /*160*/].f_16 };
			Var0.f_3 = func_333(&(Global_4718592.f_222620[0 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 244:
			Var0 = { Global_4718592.f_222620[1 /*160*/].f_16 };
			Var0.f_3 = func_333(&(Global_4718592.f_222620[1 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 245:
			Var0 = { Global_4718592.f_222620[2 /*160*/].f_16 };
			Var0.f_3 = func_333(&(Global_4718592.f_222620[2 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 246:
			Var0 = { Global_4718592.f_222620[3 /*160*/].f_16 };
			Var0.f_3 = func_333(&(Global_4718592.f_222620[3 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 247:
			Var0 = { Global_4718592.f_222620[4 /*160*/].f_16 };
			Var0.f_3 = func_333(&(Global_4718592.f_222620[4 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 248:
			Var0 = { -196,14f, -580,65f, 135f };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = "imp_dt1_02_cargarage_a";
			break;
			if (func_332(Var0))
			{
			}
			return Var0;
	}
}

int func_332(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_333(var uParam0)
{
	return uParam0;
}

struct<6> func_334(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761,0982f, 317,6259f, 169,5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761,1888f, 317,6295f, 216,0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795,3856f, 340,0188f, 152,7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778,5056f, 332,3779f, 212,1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258,1807f, -950,6853f, 70,0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285,0051f, -957,6552f, 85,3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471,882f, -530,7484f, 62,34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471,882f, -530,7484f, 49,72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463,15f, -540,2369f, 74,2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885,3702f, -451,4775f, 119,327f };
			Var0.f_3 = { 0f, 0f, 27,55617f };
			break;
		
		case 36:
			Var0 = { -913,0385f, -438,4284f, 114,3997f };
			Var0.f_3 = { 0f, 0f, -153,3093f };
			break;
		
		case 37:
			Var0 = { -892,5499f, -430,4789f, 88,25368f };
			Var0.f_3 = { 0f, 0f, 116,9193f };
			break;
		
		case 38:
			Var0 = { -35,0462f, -576,317f, 82,90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10,3788f, -590,7431f, 93,02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22,2487f, -589,1461f, 80,2305f };
			Var0.f_3 = { 0f, 0f, 69,88f };
			break;
		
		case 40:
			Var0 = { -900,6311f, -376,7462f, 78,27306f };
			Var0.f_3 = { 0f, 0f, 26,92611f };
			break;
		
		case 41:
			Var0 = { -929,483f, -374,5104f, 102,2329f };
			Var0.f_3 = { 0f, 0f, -152,5531f };
			break;
		
		case 63:
			Var0 = { -914,4202f, -375,8189f, 114,4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617,1647f, 64,6042f, 100,8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584,2015f, 42,7133f, 86,4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609,5665f, 50,2203f, 98,3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = { 0f, 0f, -63,5f };
			break;
		
		case 75:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = { 0f, 0f, -71,5f };
			break;
		
		case 76:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = { 0f, 0f, 40,5f };
			break;
		
		case 77:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = { 0f, 0f, -14,5f };
			break;
		
		case 79:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = { 0f, 0f, 4,5f };
			break;
		
		case 81:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374,2012f, 416,9688f, 142,6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573,098f, -4085,806f, 9,7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342,8157f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260,3297f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572,187f, -570,8315f, 109,9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383,954f, -476,7112f, 73,507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138,0029f, -629,739f, 170,2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74,8895f, -817,6883f, 244,8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100,764f, -3159,384f, -34,9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005,806f, -3157,67f, -36,0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576,571f, -569,7595f, 85,5f };
				Var0.f_3 = { 0f, 0f, 36,1f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571,254f, -566,5865f, 85,5f };
				Var0.f_3 = { 0f, 0f, -53,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568,098f, -571,9171f, 85,5f };
				Var0.f_3 = { 0f, 0f, -143,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384,518f, -475,8657f, 56,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384,538f, -475,8829f, 48,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378,994f, -477,2481f, 56,1f };
				Var0.f_3 = { 0f, 0f, -81,1f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186,5683f, -576,4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96,16f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113,886f, -564,3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110,96f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134,6568f, -635,1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9,04f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79,0479f, -822,6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70,3086f, -819,5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79,9861f, -818,425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_335()
{
	return Global_2697636;
}

bool func_336()
{
	return Global_2696170;
}

void func_337(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x8744D2E3FC95740E(&(Global_1938834.f_1), 13);
		func_362(bParam0, 0);
	}
	func_360(0);
	func_338(66);
}

void func_338(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_315();
	if (Global_1575083)
	{
		sVar1 = func_359(iParam0);
		iVar2 = unk_0x70E57E9927B6BA58(sVar1);
		uVar3 = func_358(&Global_2698777, 1, 0);
		func_357(&Global_2698775, 1, 0);
		unk_0x350F7DB8B2765EC2(iVar2, 1, iVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_339();
	}
	Global_1575011 = iParam0;
}

void func_339()
{
	if (Global_2696095)
	{
		if (func_341())
		{
			unk_0x8F72AF14CE5AACE4(0);
			func_340();
		}
	}
}

void func_340()
{
	if (Global_2696092)
	{
		if (!Global_2696091)
		{
			Global_2696091 = 1;
			Global_2696100 = unk_0x1DD05E817C89C737();
			Global_2696099 = 1;
		}
	}
}

int func_341()
{
	int iVar0;
	
	if (Global_2685444.f_6668 && Global_2696092)
	{
		if (func_346(0))
		{
			if (func_344() && !unk_0x15CCE8886267624F())
			{
				if ((((Global_2685444.f_6692 == 122 || Global_2685444.f_6692 == 123) || Global_2685444.f_6692 == 124) || Global_2685444.f_6692 == 125) || Global_2685444.f_6692 == 154)
				{
					return 1;
				}
				if (Global_2685444.f_6692 > -1)
				{
					iVar0 = func_343(Global_2685444.f_6692);
					if (iVar0 == 24)
					{
						return 1;
					}
				}
				if (BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_74.f_2, 26))
				{
					return 1;
				}
				if (BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_74.f_2, 27))
				{
					return 1;
				}
				if (func_342())
				{
					return 1;
				}
				if (Global_1956950)
				{
					return 1;
				}
				if (BitTest(Global_4718592.f_37, 23))
				{
					if (!func_261(unk_0x259BE71D8A81D4FA(), 0) && !func_264())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_342()
{
	return Global_2684504.f_24;
}

int func_343(int iParam0)
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

int func_344()
{
	if (func_345() == 0)
	{
		return 1;
	}
	return 0;
}

int func_345()
{
	return Global_1574633.f_18;
}

int func_346(int iParam0)
{
	if (func_356(unk_0x259BE71D8A81D4FA()) && BitTest(Global_1943520.f_4, 22))
	{
		return 0;
	}
	if (Global_1577911)
	{
		return 0;
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 0;
	}
	if (func_355())
	{
		return 0;
	}
	if ((Global_2696093 && func_354()) || Global_2696093 == 0)
	{
		return 1;
	}
	if (Global_2685444.f_6692 == 123 && Global_2696096)
	{
		return 1;
	}
	if (Global_2696094)
	{
		if (Global_2685444.f_6692 == 122)
		{
			return 1;
		}
	}
	if (BitTest(Global_4718592.f_37, 23))
	{
		if (!func_261(unk_0x259BE71D8A81D4FA(), 0) && !func_264())
		{
			return 1;
		}
	}
	if (Global_2696097)
	{
		if (iParam0 == 0)
		{
			if ((Global_2685444.f_6692 == 123 || (Global_2685444.f_6692 == 124 && func_352() == 1)) || Global_2685444.f_6692 == 125)
			{
				return 1;
			}
		}
	}
	if ((Global_2685444.f_6668 || func_350(-1046478848)) && Global_2696098)
	{
		if (iParam0 == 0)
		{
			return 1;
		}
	}
	if (BitTest(Global_4718592.f_37, 23))
	{
		return 1;
	}
	if (func_347() || func_342())
	{
		return 1;
	}
	return 0;
}

var func_347()
{
	return func_348(unk_0x259BE71D8A81D4FA());
}

var func_348(int iParam0)
{
	return func_349(&(Global_2657971[iParam0 /*465*/].f_444), 0);
}

var func_349(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

int func_350(float fParam0)
{
	struct<3> Var0;
	
	Var0 = { func_351(unk_0x259BE71D8A81D4FA()) };
	if (Var0.f_2 < fParam0)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if (!unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()))
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_351(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

int func_352()
{
	return func_353(unk_0x259BE71D8A81D4FA());
}

var func_353(int iParam0)
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657971[iParam0 /*465*/].f_322.f_3, 28, 31);
}

bool func_354()
{
	return BitTest(Global_4718592.f_178389, 12);
}

bool func_355()
{
	return BitTest(Global_2684504.f_2, 11);
}

int func_356(int iParam0)
{
	if (iParam0 != func_144())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_343(Global_2657971[iParam0 /*465*/].f_322.f_8) == 13;
			}
		}
	}
	return 0;
}

void func_357(var uParam0, bool bParam1, bool bParam2)
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

int func_358(var uParam0, bool bParam1, bool bParam2)
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

char* func_359(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 69:
			return "TRANSITION_STATE_SPAWN_INTO_PERSONAL_VEHICLE";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 29:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 28:
			return "TRANSITION_STATE_POST_BINK_VIDEO_WARP";
		
		case 30:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 31:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 33:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 34:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 35:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 37:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 38:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 39:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 44:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 46:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 47:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 48:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 50:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 51:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 52:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 45:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 54:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 53:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 55:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 57:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 61:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 62:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 63:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 64:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 65:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 66:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 67:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		case 68:
			return "TRANSITION_STATE_DLC_INTRO_BINK";
		
		default:
	}
	return "";
}

void func_360(int iParam0)
{
	var uVar0;
	
	uVar0 = func_361();
	Global_1575010 = iParam0;
}

var func_361()
{
	return Global_1575010;
}

void func_362(bool bParam0, bool bParam1)
{
	int iVar0;
	
	func_364(&Global_23612, bParam1);
	unk_0xF5AB6155B7363507(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0xF4DB2666A609235A();
			func_363(0);
			if (unk_0xFC8BFE4B41177C22(Global_1577865))
			{
				if (unk_0x7C9905528EE2C3AB(Global_1577865, 0))
				{
					if (!unk_0x110821AE6C63DD4F(Global_1577865))
					{
						unk_0xEE0BCDB1B5E36BCB(Global_1577865, 0, 0);
					}
					unk_0x734A9F4537A31459(&Global_1577865);
				}
			}
		}
	}
}

void func_363(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2698753 = 0;
	}
	Global_1574633.f_18 = iParam0;
}

void func_364(var uParam0, bool bParam1)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (unk_0x78411E34CF90EA8C(uParam0->f_9))
	{
		if (unk_0xBC886554B5888A64(uParam0->f_9))
		{
			func_365(0);
		}
		unk_0x85E6A1E36B5E2E4D(uParam0->f_9, 0);
	}
	if (!Global_45215)
	{
		unk_0x9AFEC71EEA2F7754(1);
		unk_0x9B669C0440D2AB57(0f);
		unk_0xC30B691CAD767629(0f);
	}
	Global_2635563.f_604 = 0f;
	if (!bParam1)
	{
		unk_0xE37AF9002E782BA0(0, 0, 0, 1, 0, 0);
	}
}

void func_365(int iParam0)
{
	Global_23690 = iParam0;
}

void func_366(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_371(1, 0, 1);
	}
	else
	{
		func_367(iParam1);
	}
}

void func_367(int iParam0)
{
	func_370();
	if (iParam0 == 0)
	{
		if (unk_0xA7D416B098808337())
		{
			return;
		}
	}
	if (func_369() == 0 || unk_0x4D9174D8796EA622())
	{
		func_368(1);
		unk_0xDD98B34A4A3AFA89(0);
		unk_0xDD98B34A4A3AFA89(0);
	}
}

void func_368(int iParam0)
{
	if (Global_1574633.f_20 != iParam0)
	{
		Global_1574633.f_20 = iParam0;
	}
}

int func_369()
{
	return Global_1574633.f_20;
}

void func_370()
{
	Global_2698057 = 1;
}

void func_371(int iParam0, bool bParam1, bool bParam2)
{
	if (func_372())
	{
		return;
	}
	if ((func_369() == 1 || unk_0x4D9174D8796EA622()) || iParam0)
	{
		func_368(0);
		if (Global_2697540)
		{
			Global_2697540 = 0;
		}
		unk_0xDD98B34A4A3AFA89(1);
		if (!bParam1)
		{
			unk_0xDD98B34A4A3AFA89(1);
		}
		if (bParam2)
		{
			unk_0x063FC71162B675A0();
		}
	}
}

int func_372()
{
	if (func_373())
	{
		return Global_2696099;
	}
	return 0;
}

int func_373()
{
	if (Global_2696092)
	{
		return Global_2696091;
	}
	return 0;
}

void func_374(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5A65DF56B098A5F1();
		unk_0xECDFDC2E8AC2D613(-1);
		unk_0x474491073FE815A8(1);
		unk_0xEFAF1ADDE0F583C3(1);
		unk_0xA0265306DFF63938(1f);
		unk_0x283C0970282AA5F3(3);
		unk_0xAD9B1C8FED6B4D96(3);
	}
	else
	{
		unk_0xA63572E348CC4CFB(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
		unk_0xECDFDC2E8AC2D613(0);
		unk_0x474491073FE815A8(0);
		unk_0xEFAF1ADDE0F583C3(0);
		unk_0xA0265306DFF63938(0f);
		unk_0x283C0970282AA5F3(0);
		unk_0xAD9B1C8FED6B4D96(0);
	}
}

void func_375(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_317();
	func_224(1);
	func_212(1);
	func_211(12, 1, -1);
	func_385();
	unk_0x938C85923AD6778A(0);
	if (bParam0)
	{
		unk_0xBD9FF88287E84727(unk_0x259BE71D8A81D4FA(), iParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_376(unk_0x259BE71D8A81D4FA(), 0, iVar0, 0);
	if (bParam5)
	{
		if (unk_0xDC91B9320E14F119(unk_0x4A8C381C258A124D()))
		{
			unk_0xD0B00571D4BDDC97(unk_0x4A8C381C258A124D(), 0);
		}
	}
}

void func_376(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x828F3FAE99DA791A())
		{
			unk_0x6FF322107B12B749(0);
		}
	}
	if (func_384())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		uVar0 = iParam2;
		unk_0x4686BC3BFDBB5348(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x834C960822A4683F())
		{
			bVar1 = false;
		}
		if (!func_344())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x762604C40829DB72(iParam0) && (unk_0x75EAB09F5E974116(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x56E414973C2A8C0E(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x76CD105BCAC6EB9F())
				{
					unk_0x6E2FA5434737D22F(1);
				}
				else if (bVar14 || ((!func_261(unk_0x259BE71D8A81D4FA(), 0) && !func_264()) && !func_263(unk_0x259BE71D8A81D4FA())))
				{
					unk_0x4285E11B28063EE0(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x76CD105BCAC6EB9F() && !bVar19)
					{
						unk_0x6E2FA5434737D22F(0);
					}
					Global_2657971[iParam0 /*465*/].f_255 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_381(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_380(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(uVar27, true, 0);
					}
				}
				if (!unk_0xA3736D76B0E93E93(uVar27))
				{
					if (!bVar21)
					{
						unk_0x5D7CD709B34C90F0(uVar27, false);
					}
					unk_0x11C125313CB8ADA2(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5D7CD709B34C90F0(iVar27, false);
				}
				unk_0x3F58BFCF656F0DF1(iVar27, true);
				unk_0x2B52F77101390E6F(iParam0, 0);
				unk_0x6C4F5AA91D39455C(iParam0, 0);
				if (unk_0x4CEC77F224BCD884(iVar27) && unk_0x69CD279BFCFE278E(iVar27))
				{
					unk_0xAF8337BF5A296283(iVar27);
				}
				unk_0x9FF00EA9A61211D2(iVar27, 1);
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_379();
					func_378();
				}
				if (unk_0x705A7AB2D4BC0A9B())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x787F8EE1F6FBDC6D())
				{
				}
				Global_2657971[iParam0 /*465*/].f_256 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697540)
				{
					unk_0xDD98B34A4A3AFA89(1);
					unk_0xDD98B34A4A3AFA89(1);
					Global_2697540 = 0;
				}
				if (Global_2635563.f_2981)
				{
					Global_2635563.f_2981 = 0;
				}
			}
			else
			{
				if (!func_380(iVar27) && !unk_0xB431D60610E7F85F(iVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(iVar27, !bVar15, 0);
					}
					if (!unk_0xA3736D76B0E93E93(iVar27))
					{
						if (!bVar21)
						{
							unk_0x5D7CD709B34C90F0(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x11C125313CB8ADA2(iVar27, 1);
						}
					}
					if (func_377(Global_4718592.f_185586))
					{
						unk_0x5D7CD709B34C90F0(iVar27, true);
					}
				}
				if (Global_1575055)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x2B52F77101390E6F(iParam0, 0);
				}
				else
				{
					unk_0x2B52F77101390E6F(iParam0, 1);
				}
				unk_0x3F58BFCF656F0DF1(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xBFD01C2045360289(iVar27) && !unk_0x7F420695E3F776FB(iVar27, 0))
					{
						unk_0x19626F992DC71FB9(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x4686BC3BFDBB5348(iParam0, bParam1, iVar28);
		}
	}
}

bool func_377(int iParam0)
{
	return iParam0 == 17;
}

void func_378()
{
	struct<3> Var0;
	
	Global_2672855.f_1067 = 0;
	Global_2672855.f_1068 = 0;
	Global_2672855.f_1069 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2672855.f_1074 = -1;
	Global_2672855.f_1075 = 0;
	Global_2635563.f_2992 = { Var0 };
}

void func_379()
{
	Global_2635563.f_702 = 0;
	Global_2635563.f_3035 = 0;
	Global_2635563.f_515 = 0;
	Global_2635563.f_606 = 0;
	Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_218 = 0;
	Global_2635563.f_2990 = 0;
}

int func_380(int iParam0)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_381(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xFC8BFE4B41177C22(iParam1))
		{
			if (unk_0x501EBB0523078750(iParam1))
			{
				if (!unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), unk_0x1C1C92A1CBAE364B(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_383();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x07938654FF332D78(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), true);
			}
		}
		if (func_261(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_382(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_382(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_383()
{
	int iVar0;
	
	if (!unk_0xAD15761928FCF79C())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0xBCF87EE3DC296C2A(iVar0);
				iVar0++;
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), false);
		}
	}
}

int func_384()
{
	if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2) && !Global_2685444.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_385()
{
	Global_23692.f_5 = 1;
}

int func_386()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_387(int iParam0)
{
	unk_0x0FB8E752BCC547A9(unk_0x56E414973C2A8C0E(iParam0), 346, 1);
}

void func_388(var uParam0)
{
	if (!BitTest(uParam0->f_3, 12))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 12);
	}
	else
	{
		if (uParam0->f_6 > 30)
		{
			if (!Global_1928942)
			{
				Global_1928942 = 1;
				Global_1928943 = 1;
			}
		}
		if (uParam0->f_6 > 31)
		{
			if (unk_0xA0C7B98BCF1EEF9E(Global_1928941))
			{
				if (uParam0->f_5 < 23)
				{
					switch (uParam0->f_5)
					{
						case 0:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 33)
								{
									if (((unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 10) || unk_0x8608526719A575EE() == 8) || unk_0x8608526719A575EE() == 12)
									{
										func_393("artdir", 0f, 420f, "left", 0,3f, 0,3f);
									}
									else
									{
										func_393("artdir", 0f, 450f, "left", 0,3f, 0,3f);
									}
									func_392("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("artdir", "AARON GARBUT", 210f, "|", 1);
									func_390("artdir", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 33, -3390))
							{
								func_389("artdir", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 1:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_310(uParam0, 33, -2940))
								{
									func_393("techdir", 0f, 30f, "left", 0,3f, 0,3f);
									func_392("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_391("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_390("techdir", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 33, -450))
							{
								func_389("techdir", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 2:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 35)
								{
									func_393("assartdir", 0f, 100f, "left", 0,3f, 0f);
									func_392("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_391("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_390("assartdir", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 35)
							{
								func_389("assartdir", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 3:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 36)
								{
									if (((unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 10) || unk_0x8608526719A575EE() == 8) || unk_0x8608526719A575EE() == 12)
									{
										func_393("asstecdir", 0f, 370f, "right", 0,3f, 0,3f);
									}
									else
									{
										func_393("asstecdir", 0f, 400f, "right", 0,3f, 0,3f);
									}
									func_392("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_391("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_390("asstecdir", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 36, -4740))
							{
								func_389("asstecdir", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 4:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_310(uParam0, 36, -3810))
								{
									func_393("leadprog", 30f, 20f, "right", 0,3f, 0,3f);
									func_392("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_390("leadprog", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 36, -600))
							{
								func_389("leadprog", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 5:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 37)
								{
									if (((unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 10) || unk_0x8608526719A575EE() == 8) || unk_0x8608526719A575EE() == 12)
									{
										func_393("senprog", 0f, 200f, "left", 0,3f, 0,3f);
									}
									else
									{
										func_393("senprog", 0f, 225f, "left", 0,3f, 0,3f);
									}
									func_392("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_391("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_390("senprog", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 37, -1350))
							{
								func_389("senprog", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 6:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 38)
								{
									func_393("prog", 0f, 100f, "left", 0,3f, 0,3f);
									func_392("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_391("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_390("prog", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 38, -4320))
							{
								func_389("prog", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 7:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_310(uParam0, 38, -3240))
								{
									if (((unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 10) || unk_0x8608526719A575EE() == 8) || unk_0x8608526719A575EE() == 12)
									{
										func_393("socclub", 40f, 305f, "right", 0,3f, 0,3f);
									}
									else
									{
										func_393("socclub", 40f, 325f, "right", 0,3f, 0,3f);
									}
									func_392("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_391("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_390("socclub", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 38, -870))
							{
								func_389("socclub", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 8:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 39)
								{
									func_393("audio", 0f, 10f, "right", 0,3f, 0,3f);
									func_392("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_390("audio", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 39, -1620))
							{
								func_389("audio", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 9:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 40)
								{
									func_393("scrlead", 50f, 85f, "right", 0,3f, 0,3f);
									func_392("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_391("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_390("scrlead", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 40, -1470))
							{
								func_389("scrlead", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 10:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 41)
								{
									func_393("script1", 0f, 10f, "left", 0,3f, 0,3f);
									func_392("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_391("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_390("script1", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 41, -1200))
							{
								func_389("script1", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 11:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 42)
								{
									func_393("script2", 0f, 10f, "left", 0,3f, 0,3f);
									func_392("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_391("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_390("script2", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 42, -1320))
							{
								func_389("script2", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 12:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 43)
								{
									func_393("visdes", 0f, 45f, "left", 0,2f, 0,2f);
									func_392("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_392("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_390("visdes", 0,05f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 43, -1320))
							{
								func_389("visdes", 0,05f);
								uParam0->f_5++;
							}
							break;
						
						case 13:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 44)
								{
									func_393("uides", 40f, 20f, "right", 0f, 0,3f);
									func_392("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_391("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_390("uides", 0f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 45, -1650))
							{
								func_389("uides", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 14:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 46)
								{
									func_393("concre", 0f, 20f, "left", 0f, 0,3f);
									func_392("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_391("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_391("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_390("concre", 0f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 46, -1950))
							{
								func_389("concre", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 15:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 47)
								{
									func_393("devass", 0f, 400f, "right", 0f, 0f);
									func_392("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_391("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_390("devass", 0f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 47)
							{
								func_389("devass", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 16:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 48)
								{
									func_393("qasup", 20f, 0f, "right", 0,3f, 0,3f);
									func_392("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_392("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_390("qasup", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 48, -1320))
							{
								func_389("qasup", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 17:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 49)
								{
									func_393("senta", 0f, 25f, "left", 0,3f, 0,3f);
									func_392("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_391("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_390("senta", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 49, -5070))
							{
								func_389("senta", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 18:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_310(uParam0, 49, -3750))
								{
									func_393("asspro", 20f, 350f, "right", 0,3f, 0,3f);
									func_392("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_391("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_390("asspro", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_310(uParam0, 49, -720))
							{
								func_389("asspro", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 19:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_269(uParam0))
								{
									if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 2468)
									{
										func_393("animdir", 0f, 95f, "left", 0,3f, 0,3f);
										func_392("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_391("animdir", "ROB NELSON", 200f, "|", 1);
										func_390("animdir", 0,16f);
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (uParam0->f_6 >= 50)
								{
									func_393("animdir", 50f, 90f, "right", 0,3f, 0,3f);
									func_392("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_391("animdir", "ROB NELSON", 90f, "|", 1);
									func_390("animdir", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_269(uParam0))
							{
								if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 6123)
								{
									func_389("animdir", 0,16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 1898)
							{
								func_389("animdir", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 20:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_269(uParam0))
								{
									if (unk_0xFD216000DC314A92() && unk_0xF1FEB57E542C41F1())
									{
										func_393("producer", 65f, 55f, "right", 0f, 0f);
										func_392("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_391("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_390("producer", 0f);
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 2452)
								{
									func_393("producer", 0f, 100f, "left", 0,3f, 0f);
									func_392("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_390("producer", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_269(uParam0))
							{
								if (unk_0xFD216000DC314A92() && unk_0xF1FEB57E542C41F1())
								{
									func_389("producer", 0f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xFD216000DC314A92() && unk_0xF1FEB57E542C41F1())
							{
								func_389("producer", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 21:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_269(uParam0))
								{
									if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 13265)
									{
										func_393("vpcre", 65f, 55f, "right", 0,3f, 0,3f);
										func_392("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_391("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_390("vpcre", 0,16f);
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 6921)
								{
									func_393("vpcre", 65f, 80f, "right", 0,3f, 0,3f);
									func_392("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_391("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_390("vpcre", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_269(uParam0))
							{
								if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 16955)
								{
									func_389("vpcre", 0,16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 10513)
							{
								func_389("vpcre", 0,16f);
								uParam0->f_5++;
							}
							break;
						
						case 22:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_269(uParam0))
								{
									if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 18077)
									{
										Global_1928943 = 0;
										func_393("execpro", 0f, 375f, "left", 0,3f, 0,3f);
										func_392("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_391("execpro", "SAM HOUSER", 165f, "|", 1);
										func_390("execpro", 0,16f);
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 12358)
								{
									Global_1928943 = 0;
									func_393("execpro", 0f, 340f, "left", 0,3f, 0,3f);
									func_392("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_391("execpro", "SAM HOUSER", 190f, "|", 1);
									func_390("execpro", 0,16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_269(uParam0))
							{
								if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 21785)
								{
									func_389("execpro", 0,16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 15333)
							{
								func_389("execpro", 0,16f);
								uParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1928943)
				{
					unk_0xA91A4C18A2DB01BD(Global_1928941, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_389(char* sParam0, float fParam1)
{
	unk_0x88F483FBD433696A(Global_1928941, "HIDE");
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam0);
	unk_0xCFAD3D478C87321A();
	unk_0x74BF156C860580D4(fParam1);
	unk_0xE6B753D52F4CA222();
}

void func_390(char* sParam0, float fParam1)
{
	unk_0x88F483FBD433696A(Global_1928941, "SHOW_CREDIT_BLOCK");
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam0);
	unk_0xCFAD3D478C87321A();
	unk_0x74BF156C860580D4(fParam1);
	unk_0xE6B753D52F4CA222();
}

void func_391(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0x88F483FBD433696A(Global_1928941, "ADD_NAMES_TO_CREDIT_BLOCK");
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam0);
	unk_0xCFAD3D478C87321A();
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam1);
	unk_0xCFAD3D478C87321A();
	unk_0x74BF156C860580D4(fParam2);
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam3);
	unk_0xCFAD3D478C87321A();
	unk_0x557F1E2300EF1A3E(iParam4);
	unk_0xE6B753D52F4CA222();
}

void func_392(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0x88F483FBD433696A(Global_1928941, "ADD_ROLE_TO_CREDIT_BLOCK");
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam0);
	unk_0xCFAD3D478C87321A();
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam1);
	unk_0xCFAD3D478C87321A();
	unk_0x74BF156C860580D4(fParam2);
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam3);
	unk_0xCFAD3D478C87321A();
	unk_0x557F1E2300EF1A3E(iParam4);
	unk_0xE6B753D52F4CA222();
}

void func_393(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	unk_0x88F483FBD433696A(Global_1928941, "SETUP_CREDIT_BLOCK");
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam0);
	unk_0xCFAD3D478C87321A();
	unk_0x74BF156C860580D4(fParam1);
	unk_0x74BF156C860580D4(fParam2);
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam3);
	unk_0xCFAD3D478C87321A();
	unk_0x74BF156C860580D4(fParam4);
	unk_0x74BF156C860580D4(fParam5);
	unk_0xE6B753D52F4CA222();
}

void func_394(var uParam0)
{
	if (uParam0->f_6 >= 33 && uParam0->f_6 < 51)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_34))
		{
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
			{
				unk_0x748651DF4DA0A890(unk_0x0D1381B6E0F3987D(uParam0->f_34, 0f, 0,25f, 0,6f), 255, 255, 255, 1,5f, 0,5f);
			}
		}
	}
}

void func_395()
{
	var uVar0;
	
	if (unk_0x93BF17E19A9F0E9B(Local_413.f_3))
	{
		switch (Local_413.f_2)
		{
			case 2:
				if (BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 1))
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (func_415(Local_413.f_3))
						{
							if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								if (unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_enter_vehicle")) != 1 && unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_enter_vehicle")) != 0)
								{
									unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_413.f_3), 20000, 2, 1f, 1, 0, 0);
								}
							}
							else if (!BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 2))
							{
								if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_413.f_3)))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_4), 2);
									func_414(1);
								}
								else
								{
									unk_0x60040CDD28AA1BC3(-1031,788f, -2731,816f, 19,0546f, 50f, 0, 0, 0, 0, 0, 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_415(Local_413.f_3))
				{
					if (!func_413(Local_413.f_4))
					{
						if (BitTest(uLocal_581, 26))
						{
							if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_413.f_4), joaat("script_task_vehicle_mission")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_413.f_4), joaat("script_task_vehicle_mission")) != 0)
							{
								unk_0x30CCF17FEE4BDA53(unk_0xC35A3A4C05A4831B(Local_413.f_4), unk_0xE38610F405049F71(Local_413.f_3), -663,8057f, -952,3882f, 20,2985f, 4, 15f, 802987, 5f, 5f, 0);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!BitTest(uLocal_581, 27))
				{
					if (!unk_0x15CCE8886267624F() && !unk_0x78ABC1D11B34F324())
					{
						if (!func_128())
						{
							if (!unk_0x4D9174D8796EA622())
							{
								unk_0x8F72AF14CE5AACE4(800);
							}
						}
					}
					else if (unk_0x15CCE8886267624F())
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 27);
					}
				}
				else if (!BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 4))
				{
					if (func_402(-649,4202f, -954,0247f, 20,5269f, 90,7653f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
					{
						unk_0x60040CDD28AA1BC3(-649,4202f, -954,0247f, 20,5269f, 20f, 0, 0, 0, 0, 0, 0, 0);
						unk_0x59ABC1F373CE1F5B();
						unk_0x9136D50973A71229();
						unk_0x64BB72494B9DF6DC(0);
						unk_0xD815D4BD1AE9E85A(0, 1065353216);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_413(Local_413.f_4))
				{
					if (!BitTest(uLocal_581, 29))
					{
						if (func_415(Local_413.f_3))
						{
							unk_0x2D864CC37DDFA963(unk_0xC35A3A4C05A4831B(Local_413.f_4), unk_0xE38610F405049F71(Local_413.f_3), -664,8411f, -952,2484f, 20,283f, 92,0219f, 0, 60f, 1);
							unk_0x10B228D2FDB7AF16(800);
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 29);
						}
					}
					else if (!BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 5))
					{
						if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_413.f_4), joaat("script_task_vehicle_park")) == 7)
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_leave_any_vehicle")) != 1 && unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_leave_any_vehicle")) != 0)
						{
							unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
						}
					}
					else if (!BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 6))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3), 6);
						unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_868), 4);
						unk_0x8744D2E3FC95740E(&(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_4), 2);
						func_376(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
						func_401();
						func_414(0);
						func_35("HLP_TAXI", -1);
						if (func_59())
						{
							func_46(joaat("service_spend_taxi"), 200, &uVar0, 0, 0, 0);
						}
						else
						{
							func_398(-200, 0);
							unk_0x46B2ECD9DD5C325A(200, 0, 0, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_413(Local_413.f_4))
				{
					if (func_415(Local_413.f_3))
					{
						if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_413.f_4), joaat("script_task_vehicle_drive_wander")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_413.f_4), joaat("script_task_vehicle_drive_wander")) != 0)
						{
							unk_0x44FB298D6382876D(unk_0xC35A3A4C05A4831B(Local_413.f_4), 1);
							unk_0x7C8E9DE09D4AD3FF(unk_0xC35A3A4C05A4831B(Local_413.f_4), unk_0xE38610F405049F71(Local_413.f_3), 12f, 786599);
							func_397(&(Local_413.f_3));
							func_397(&(Local_413.f_4));
						}
					}
				}
				break;
		}
		if (BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 1))
		{
			unk_0x693ACD1AA0BDB375(-1614,173f, -3243,317f, 28,4915f, -440,9012f);
			if (!BitTest(uLocal_581, 26))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 26);
			}
		}
		if (!BitTest(uLocal_581, 28))
		{
			if (BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 2))
			{
				if (!func_203(&uLocal_246))
				{
					func_223();
					func_22(&uLocal_246, 0, 0);
				}
				else if (func_202(&uLocal_246, 5000, 0))
				{
					if (func_182(&uLocal_415, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 28);
					}
				}
			}
		}
		if (!BitTest(uLocal_581, 30))
		{
			if (BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 5))
			{
				if (func_182(&uLocal_415, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_581, 30);
				}
			}
		}
		if (!BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 6))
		{
			func_396();
		}
		if (BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 2))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
				}
			}
		}
	}
}

void func_396()
{
	Global_2750949.f_258 = 1;
}

void func_397(var uParam0)
{
	var uVar0;
	
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x76AD45C3946F87DD(&uVar0);
	}
}

void func_398(int iParam0, int iParam1)
{
	func_400(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_399(iParam0, 0);
	}
}

void func_399(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_400(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = system::floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_4 = iVar1;
	Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_3 = (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_399(iVar1, 0);
	}
}

void func_401()
{
	unk_0xB211E45F1FE1ED2D(0, 22, 1);
	unk_0xB211E45F1FE1ED2D(0, 36, 1);
	unk_0xB211E45F1FE1ED2D(0, 32, 1);
	unk_0xB211E45F1FE1ED2D(0, 34, 1);
	unk_0xB211E45F1FE1ED2D(0, 35, 1);
	unk_0xB211E45F1FE1ED2D(0, 33, 1);
	unk_0xB211E45F1FE1ED2D(0, 31, 1);
	unk_0xB211E45F1FE1ED2D(0, 30, 1);
	unk_0xB211E45F1FE1ED2D(0, 44, 1);
	unk_0xB211E45F1FE1ED2D(0, 141, 1);
	unk_0xB211E45F1FE1ED2D(0, 140, 1);
	unk_0xB211E45F1FE1ED2D(0, 263, 1);
	unk_0xB211E45F1FE1ED2D(0, 264, 1);
	unk_0xB211E45F1FE1ED2D(0, 143, 1);
	unk_0xB211E45F1FE1ED2D(0, 24, 1);
	unk_0xB211E45F1FE1ED2D(0, 257, 1);
	unk_0xB211E45F1FE1ED2D(0, 263, 1);
	unk_0xB211E45F1FE1ED2D(0, 264, 1);
	unk_0xB211E45F1FE1ED2D(0, 143, 1);
	unk_0xB211E45F1FE1ED2D(0, 262, 1);
	unk_0xB211E45F1FE1ED2D(0, 261, 1);
	unk_0xB211E45F1FE1ED2D(0, 37, 1);
	unk_0xB211E45F1FE1ED2D(0, 25, 1);
	unk_0xB211E45F1FE1ED2D(0, 26, 1);
}

int func_402(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	Global_23692.f_6 = 1;
	if (Global_2672855.f_1067 && Global_2672855.f_1075)
	{
		func_410(0, bParam7);
		return 1;
	}
	if (unk_0x3555462DB47B7AB1() && !bParam7)
	{
		if (Global_2672855.f_1067)
		{
			func_410(0, bParam7);
		}
		return 0;
	}
	if ((unk_0x787F8EE1F6FBDC6D() && !bParam7) && !unk_0x705A7AB2D4BC0A9B())
	{
		return 0;
	}
	if (!func_409(0))
	{
		if (func_408(unk_0x259BE71D8A81D4FA(), 1, 0) && !(func_407() || func_406()))
		{
			if (((bParam7 && func_14(unk_0x259BE71D8A81D4FA(), 1, 0)) && unk_0x3555462DB47B7AB1()) && Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_233 == 1)
			{
			}
			else if (func_315() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	if (fParam1 >= 360f)
	{
		fParam1 = (fParam1 + -360f);
	}
	if (!Global_2672855.f_1067 && !bParam9)
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
		if ((unk_0x1D5CD3EAAA7422B0((Var1.f_0 - Param0.f_0)) < 0,2f && unk_0x1D5CD3EAAA7422B0((Var1.f_1 - Param0.f_1)) < 0,2f) && unk_0x1D5CD3EAAA7422B0((Var1.f_2 - Param0.f_2)) < 1,2f)
		{
			fVar2 = (fParam1 - unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (unk_0x1D5CD3EAAA7422B0(fVar2) < 1f)
			{
				Global_2672855.f_1067 = 0;
				Global_2672855.f_1068 = 0;
				if (unk_0x705A7AB2D4BC0A9B())
				{
					unk_0xEB205B72FDDFDFC6();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2672855.f_1069 || !Param0.f_1 == Global_2672855.f_1069.f_1) || !Param0.f_2 == Global_2672855.f_1069.f_2) || !fParam1 == Global_2672855.f_1072)
	{
		if (Global_2672855.f_1067 == 1)
		{
			if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2672855.f_1073) < func_405(0))
			{
				return 0;
			}
			unk_0xEB205B72FDDFDFC6();
			Global_2672855.f_1068 = 1;
		}
		else
		{
			Global_2672855.f_1068 = 0;
		}
		Global_2672855.f_1069 = { Param0 };
		Global_2672855.f_1072 = fParam1;
		Global_2672855.f_1067 = 0;
	}
	if (bParam2)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
			if (unk_0xFC8BFE4B41177C22(uVar0) && unk_0x4B423FAA24E8ABF0(iVar0) == joaat("kosatka"))
			{
				bParam2 = false;
			}
		}
	}
	if (!Global_2672855.f_1067 && !unk_0x705A7AB2D4BC0A9B())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		bParam5 = bParam5;
		if (bParam5)
		{
		}
		if (bParam3)
		{
		}
		if (bParam6)
		{
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (!BitTest(Global_101585.f_1414[44], 16))
			{
				func_404(0);
			}
			if (!unk_0x51B462E1DEB9F762(unk_0x4A8C381C258A124D(), &(Global_2635563.f_502)))
			{
				Global_2635563.f_502 = 0;
			}
		}
		if (bParam2)
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
				if (unk_0xA6D8AF5A058A75F0(iVar0))
				{
					Global_2672855.f_1074 = 0;
				}
			}
		}
		if (Global_2672855.f_1074 > -1)
		{
			Global_2672855.f_1073 = unk_0x7E3F74F641EE6B27();
			Global_2672855.f_1067 = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
						if (unk_0x1B1A446EFA398EB5(iVar0))
						{
							unk_0xB2BD5837A8D3CEDA(iVar0, Param0, 0, 1, 1, 1);
							unk_0x5C96CEA06531AB03(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								unk_0xCF39804E8C88080E(iVar0, fParam10, 0f, fParam1, 2, 1);
							}
						}
						else
						{
							unk_0xF093E270C0B6B318(iVar0);
						}
					}
					else
					{
						unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Param0, 0, 0, 0, 1);
						unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), fParam1);
					}
				}
				else
				{
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Param0, 0, 0, 0, 1);
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), fParam1);
				}
				func_410(bParam4, bParam7);
				return 1;
			}
			else
			{
				unk_0xE3F88173F42C071B();
				unk_0xCB7327FDCE6757E1(unk_0x259BE71D8A81D4FA(), Param0, fParam1, bParam2, iParam8, 0);
			}
			Global_2672855.f_1073 = unk_0x7E3F74F641EE6B27();
			Global_2672855.f_1067 = 1;
		}
	}
	if (Global_2672855.f_1067)
	{
		Global_23692.f_6 = 1;
		Global_2672855.f_1073 = unk_0x7E3F74F641EE6B27();
		if (Global_2672855.f_1074 > -1)
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
			}
			if (func_403(&(Global_2672855.f_1074), Param0, fParam1, iVar0))
			{
				func_410(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Global_2672855.f_1069) < 2f)
				{
					if (unk_0x705A7AB2D4BC0A9B())
					{
						unk_0xEB205B72FDDFDFC6();
					}
					func_410(bParam4, bParam7);
					return 1;
				}
			}
			if (!unk_0x705A7AB2D4BC0A9B())
			{
				if (fParam10 != 0f)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
						unk_0xCF39804E8C88080E(iVar0, fParam10, 0f, fParam1, 2, 1);
						Global_2672855.f_1075 = 1;
						return 0;
					}
				}
				func_410(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_403(var uParam0, struct<3> Param1, float fParam2, var uParam3)
{
	if (unk_0xFC8BFE4B41177C22(Global_2672855.f_1076) && !unk_0x1C2F771CDC87A3A5(Global_2672855.f_1076, 0))
	{
		unk_0xF093E270C0B6B318(Global_2672855.f_1076);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2672855.f_1076 = uParam3;
			unk_0xF093E270C0B6B318(Global_2672855.f_1076);
			if (unk_0x1B1A446EFA398EB5(Global_2672855.f_1076))
			{
				if (!unk_0x1C2F771CDC87A3A5(Global_2672855.f_1076, 0))
				{
					unk_0x5C96CEA06531AB03(Global_2672855.f_1076, fParam2);
					unk_0xB2BD5837A8D3CEDA(Global_2672855.f_1076, Param1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_404(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2635563.f_2991;
	if ((unk_0x7507A74A3D963966() && Global_2635563.f_2989 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2635563.f_2988)
	{
		if (!unk_0xC47E3FF56898A28B())
		{
			Global_2635563.f_2988 = iVar0;
		}
	}
}

int func_405(bool bParam0)
{
	if (unk_0x15CCE8886267624F())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_406()
{
	return ((BitTest(Global_4718592.f_30, 12) && BitTest(Global_1963846, 12)) && Global_1963845 == 8);
}

var func_407()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1963846, 0));
}

int func_408(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2657971[iParam0 /*465*/].f_233 == 99)
	{
		if ((iParam2 && Global_2657971[iParam0 /*465*/].f_236 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2657971[iParam0 /*465*/].f_233 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_409(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_410(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		unk_0x64BB72494B9DF6DC(0f);
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x5EF96FB2D3902DC7(unk_0x4A8C381C258A124D());
	}
	if (!bParam1)
	{
		unk_0xE3F88173F42C071B();
	}
	if (unk_0x705A7AB2D4BC0A9B())
	{
		unk_0xEB205B72FDDFDFC6();
	}
	func_378();
	if (!BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 14) && !func_412())
	{
		func_411();
	}
}

void func_411()
{
	Global_2748996.f_92 = 1;
}

int func_412()
{
	if (!unk_0x834C960822A4683F() && !func_409(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_194413[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_413(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(uParam0));
	}
	return 1;
}

void func_414(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140, 15))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140), 15);
		}
	}
	else if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140, 15))
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140), 15);
	}
}

int func_415(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return !func_416(unk_0xE38610F405049F71(uParam0));
	}
	return 0;
}

int func_416(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
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

void func_417(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 8, 0))
		{
			func_67(iParam0, 8, 0);
			func_418(iParam0);
		}
	}
	else if (func_26(iParam0, 8, 0))
	{
		func_65(iParam0, 8, 0);
		func_418(iParam0);
	}
}

void func_418(int iParam0)
{
	Global_101585.f_205[iParam0] = 1;
	Global_101585.f_204 = 1;
}

void func_419(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_101585.f_9[iParam0] = 1;
	}
	else
	{
		Global_101585.f_9[iParam0] = 0;
	}
}

void func_420(bool bParam0)
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
		func_418(iVar0);
		iVar0++;
	}
}

void func_421(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_422()
{
	return Local_413.f_0;
}

int func_423()
{
	return 1;
}

int func_424(int iParam0)
{
	return Local_580[iParam0 /*5*/];
}

int func_425(int iParam0)
{
	return Local_580[iParam0 /*5*/].f_2;
}

int func_426(bool bParam0)
{
	if (func_428())
	{
		if (bParam0)
		{
			if (!Global_1836675 && !func_427(unk_0x259BE71D8A81D4FA(), 2))
			{
				unk_0xDCAFFD08A08087EB("MinigameTransitionIn", 0, 1);
				func_366(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_427(int iParam0, int iParam1)
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_219, iParam1);
}

bool func_428()
{
	return Global_2672855.f_23;
}

void func_429(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (bLocal_587)
		{
			if (BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 2))
			{
				if (!BitTest(uLocal_581, 31))
				{
					func_33(119, 1, -1, 1);
					func_33(115, 1, -1, 1);
				}
				func_773(1);
				bVar0 = true;
			}
		}
		else if (BitTest(Local_580[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 1))
		{
			if (!BitTest(uLocal_581, 31))
			{
				func_33(119, 1, -1, 1);
				func_33(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_222(&Local_61, 0, bParam0);
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (Global_2672855.f_3585)
		{
			func_766(0, 1, 0, 1);
		}
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_414(0);
	}
	unk_0xD7B6A43ACC36D868(Local_61.f_122, 0);
	unk_0x2AF2D6F164BD6F5A(-1042,918f, -2723,14f, 17,34114f, -1087,764f, -2667,605f, 25,79593f, 25,5625f, 1);
	unk_0x2AF2D6F164BD6F5A(-1005,742f, -2734,265f, 14,91912f, -1082,958f, -2675,189f, 26,01647f, 39,375f, 1);
	unk_0x8744D2E3FC95740E(&(Global_2738934.f_868), 4);
	func_100(0);
	func_63(0);
	func_765();
	func_764(iLocal_60, 0);
	func_201(&(Global_2672855.f_3835));
	Global_2672855.f_3833 = 0;
	Global_2672855.f_3832 = 0;
	Global_2672855.f_3834 = 0;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 244, 1);
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 243, 1);
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 242, 1);
	}
	if (bVar0)
	{
		func_432(0, 0, 0, 0, 1, 1);
	}
	else
	{
		unk_0x428C32CC68809A35(1);
		func_432(0, 0, 3, 1, 1, 1);
	}
	unk_0x8744D2E3FC95740E(&(Global_2738934.f_868), false);
	func_420(0);
	func_419(4, 0);
	func_419(1, 0);
	func_419(0, 0);
	func_419(2, 0);
	func_419(3, 0);
	func_417(iLocal_60, 0);
	func_401();
	func_36();
	if (unk_0xC450B06E5AAA0985(Global_101585.f_267[iLocal_60]))
	{
		unk_0xBC64B805EE071A37(Global_101585.f_267[iLocal_60], 0);
	}
	if (unk_0xC450B06E5AAA0985(uLocal_584))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_584);
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_431(0);
		func_204(0);
	}
	func_430(Local_413.f_5);
}

void func_430(struct<2> Param0)
{
	if (Param0.f_1)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Param0.f_0)) >= 1000)
		{
			unk_0x0A3E878F88F44843();
		}
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_431(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140), 5);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140), 5);
	}
}

void func_432(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
	struct<6> Var9;
	struct<6> Var10;
	int iVar11;
	char* sVar12;
	struct<2> Var13;
	bool bVar14;
	int iVar15;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	iVar1 = Global_1845281[iVar0 /*883*/];
	func_763();
	func_759();
	unk_0xF27E6847E6EE009E(0);
	func_758();
	Global_1057197 = 0;
	Global_1835456 = 0;
	func_757();
	unk_0x6E8BBCAC6E64214C(0);
	func_756();
	Global_786547 = 0;
	Global_786547.f_1 = 0;
	Global_1836458 = 0;
	Global_2621440 = 0;
	Global_2621441 = 0;
	func_755(0);
	Global_1836447 = 0;
	Global_1836446 = 0;
	Global_1836471 = 0;
	Global_1836695 = 0;
	Global_1836701 = 0;
	Global_1836170 = 0;
	Global_1837413 = 1;
	Global_1836666 = 0;
	Global_1836459 = -1;
	func_754(0);
	unk_0x8744D2E3FC95740E(&(Global_2621446.f_1), 5);
	if (!func_753() && !func_751())
	{
		func_750();
	}
	func_749();
	func_748();
	func_747();
	func_746(bParam5);
	func_745();
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_744();
		func_743();
	}
	if (func_742() || !func_741())
	{
		func_740();
		func_739(1, 1, 1);
		func_738();
		func_737();
		if (iVar0 != -1)
		{
			Global_1882632[iVar0 /*146*/].f_1 = 0;
			Global_1882632[iVar0 /*146*/].f_2 = 0;
			Global_1882632[iVar0 /*146*/] = 0;
			Global_1882632[iVar0 /*146*/].f_15 = 0;
			Global_1882632[iVar0 /*146*/].f_16 = 0;
		}
	}
	func_736();
	if ((((Global_4718592 != 6 && func_735(Global_4718592.f_127178) != 14) && func_735(Global_4718592.f_127178) != 15) && !func_354()) && !func_751())
	{
		if (func_14(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (unk_0x6DBAC05AFA907A23(unk_0x4A8C381C258A124D()))
			{
				unk_0xE4E1DBF4388028C0(unk_0x4A8C381C258A124D(), 1);
			}
		}
	}
	Global_1835477 = 0;
	if (Global_1919969.f_9 == 4)
	{
		if (func_734(unk_0x259BE71D8A81D4FA()) || func_733(unk_0x259BE71D8A81D4FA()))
		{
			Global_1835477 = 1;
		}
	}
	func_731();
	if (func_730())
	{
		func_729();
	}
	func_728();
	Global_4718592.f_127742 = 0;
	Global_1919928.f_4 = 0;
	if (!BitTest(Global_4718592.f_29, 1) && !func_727())
	{
		if (BitTest(Global_4718592.f_14, 17))
		{
			unk_0xC4A38E060739AAF9(unk_0x259BE71D8A81D4FA(), 0);
			unk_0xD8D822FF4C3DCD7D(1);
		}
		else
		{
			unk_0xC4A38E060739AAF9(unk_0x259BE71D8A81D4FA(), 1);
			unk_0xD8D822FF4C3DCD7D(0);
		}
	}
	StringCopy(&(Global_4718592.f_127170), "", 32);
	if (!func_751())
	{
		unk_0x0C9B2F8C2BD128C2();
		unk_0x4EB223432F8FA0A0(18);
		if ((bParam3 && !func_726()) && !func_725())
		{
			unk_0x43AE50D2A33F6E2A();
		}
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1881773[iVar3] = 0;
		Global_1881740[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2685444.f_6055), 3);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_2685444.f_6055), 3);
	}
	if (iVar0 != -1 && Global_2684504.f_669.f_12 != 0)
	{
		Global_1882632[unk_0x259BE71D8A81D4FA() /*146*/].f_2 = Global_2684504.f_669.f_12;
	}
	if (func_428() || (iVar0 != -1 && BitTest(Global_1845281[iVar0 /*883*/].f_879, 7)))
	{
		if (!bParam4)
		{
			Global_4718592 = 2;
			func_723();
			Global_4718592 = 0;
		}
		else
		{
			func_723();
		}
		func_722();
		func_721(1, 1);
		func_739(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1882632[iVar0 /*146*/].f_1 = 0;
			Global_1882632[iVar0 /*146*/].f_2 = 0;
			Global_1882632[iVar0 /*146*/] = 0;
			Global_1882632[iVar0 /*146*/].f_15 = 0;
			Global_1882632[iVar0 /*146*/].f_16 = 0;
		}
		func_720(1);
		if (func_719())
		{
			func_718();
		}
		if (!func_17(unk_0x259BE71D8A81D4FA()))
		{
			func_716(4);
		}
		func_738();
		func_715(0);
		func_714();
		Global_1837405 = 0;
	}
	if (!func_713())
	{
		func_712();
		if (func_711())
		{
			if (func_710())
			{
				func_722();
			}
		}
		func_720(1);
		if (!func_709())
		{
			Global_2685444.f_6396 = 0;
			Global_2685444.f_6397 = 0;
			Global_2685444.f_6395 = 0;
			Global_2685444.f_6394 = 0;
			Global_2685444.f_6575 = 0;
		}
	}
	else
	{
		func_708(unk_0x259BE71D8A81D4FA(), 0);
	}
	bVar4 = ((Global_1919969.f_9 != 4 && !func_713()) && !func_709());
	if (func_713())
	{
	}
	func_707(bVar4);
	func_706(bVar4);
	func_705(bVar4);
	func_704(bVar4);
	func_702(bVar4);
	func_701(bVar4);
	func_700(bVar4);
	if (func_709())
	{
		Global_2685444.f_6486 = 1;
	}
	else
	{
		Global_2685444.f_6486 = 0;
	}
	if (!func_713())
	{
		if (func_709())
		{
			Global_2685444.f_6487 = 1;
		}
		else
		{
			Global_2685444.f_6487 = 0;
		}
	}
	if (func_698())
	{
		if (func_697())
		{
			Global_2685444.f_6488 = 1;
		}
		else
		{
			Global_2685444.f_6488 = 0;
		}
	}
	if (!func_753())
	{
		Global_1919995.f_1345 = 0;
	}
	if (!func_713() && !func_753())
	{
		func_721(1, Global_1919969.f_9 != 4);
		func_739(1, 1, 0);
		func_696(0);
		func_695();
		Global_1837407 = 0;
		if (iVar0 != -1)
		{
			Global_1882632[iVar0 /*146*/].f_1 = 0;
			Global_1882632[iVar0 /*146*/].f_2 = 0;
			Global_1882632[iVar0 /*146*/] = 0;
			Global_1882632[iVar0 /*146*/].f_15 = 0;
			Global_1882632[iVar0 /*146*/].f_16 = 0;
		}
	}
	func_692(1, -1);
	if (func_691())
	{
		func_690();
	}
	if (unk_0x834C960822A4683F())
	{
		unk_0xDC5F81D7F618A8A6();
	}
	if ((!func_726() && !func_713()) && !func_725())
	{
		func_685();
	}
	Global_4718592.f_127738 = 0;
	func_684();
	Global_1836440 = -1;
	Global_1881822 = -1;
	Global_1881813 = -1;
	Global_1881816 = -1;
	Global_1836445 = 0;
	Global_1881814 = 0;
	Global_1836677 = 0;
	Global_1836669 = 0;
	Global_1881823 = 0;
	func_683(0);
	func_682();
	unk_0x8744D2E3FC95740E(&(Global_1845281[iVar0 /*883*/].f_879), 7);
	Global_1881811 = 0f;
	Global_1881812 = 0f;
	Global_1836679 = 0;
	Global_1836680 = -1;
	func_681(0);
	Global_1836667 = 0;
	Global_1836171 = 0;
	func_680();
	unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 0);
	unk_0xCFBD89D2F1F18961("DisableFlightMusic", 0);
	func_679(1);
	if (func_678())
	{
		func_677();
	}
	if (func_676())
	{
		if (func_674(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0xC259E614564DAB8F() < 2)
			{
				func_673();
				func_672(1);
			}
			else
			{
				func_671();
			}
			if (Global_1919969.f_9 != -1)
			{
				func_670();
			}
		}
		else if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 0)
		{
			if (Global_1919969.f_9 != -1)
			{
				func_670();
			}
		}
	}
	bVar5 = func_18(iVar0);
	Global_1845281[iVar0 /*883*/].f_195 = 0;
	if (bVar5 && !func_753())
	{
		func_669();
	}
	if (!bVar5)
	{
		func_668(0);
	}
	if ((func_667() != 40 && func_667() != 39) && !func_666())
	{
		Global_1835430 = { 0f, 0f, 0f };
	}
	if (func_665() && func_260())
	{
	}
	else
	{
		func_664();
	}
	func_663();
	func_672(0);
	iVar7 = 0;
	if (!bVar5)
	{
		if (Global_1919969.f_9 == 6)
		{
			iVar7 = 1;
		}
		if (!func_662())
		{
			func_661(0, iVar7);
		}
	}
	unk_0x725A501C189FDB29(0);
	if (unk_0x76CD105BCAC6EB9F())
	{
		switch (Global_1919969.f_9)
		{
			case 1:
				if (!func_660() && func_657(0) > 0)
				{
					Global_1938445[0 /*8*/].f_5 = 1;
				}
				if (!bVar5)
				{
					func_655();
					func_654();
				}
				break;
			
			case 6:
				Global_1837405 = 0;
				if (!bVar5)
				{
					func_655();
				}
				func_654();
				Global_1919969 = 0;
				Global_1919969.f_23 = { 0f, 0f, 0f };
				unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879), true);
				StringCopy(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_227), "", 24);
				Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_224 = { 0f, 0f, 0f };
				func_653(0);
				break;
			
			case 2:
				func_652(0);
				if (!func_651() || (func_651() && unk_0xD6F9DEE4765092A9(&(Global_2684504.f_33))))
				{
					func_650(Global_1919969.f_17);
					func_649(Global_1919969.f_17);
				}
				iVar6 = Global_1845281[iVar0 /*883*/].f_10;
				if (iVar6 != func_144())
				{
					if (unk_0x762604C40829DB72(iVar6))
					{
						Global_2685444.f_6056 = { func_80(iVar6) };
					}
					else
					{
						iVar8 = 1;
					}
				}
				else
				{
					iVar8 = 1;
				}
				if ((iVar8 && func_651()) && unk_0x7F258099B06D4C7C() == 1)
				{
					Global_2685444.f_6056 = { func_648() };
				}
				if (((((Global_4718592.f_3527 > 1 && !func_640()) && !func_639(Global_4718592.f_127178)) && !func_638(Global_4718592.f_127178)) && Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_97.f_28 > -1) && Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_97.f_28 < 4)
				{
					func_637(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_97.f_28);
				}
				else
				{
					func_636();
				}
				break;
			
			case 3:
				func_652(0);
				iVar2 = 1;
				func_635();
				iVar6 = Global_1845281[iVar0 /*883*/].f_10;
				if (iVar6 != func_144())
				{
					if (unk_0x762604C40829DB72(iVar6))
					{
						Global_2685444.f_6056 = { func_80(iVar6) };
					}
				}
				if (((Global_4718592.f_3527 > 1 && !func_640()) && !func_639(Global_4718592.f_127178)) && !func_638(Global_4718592.f_127178))
				{
					func_637(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_97.f_28);
				}
				else
				{
					func_636();
				}
				break;
			
			case 4:
				func_652(0);
				iVar2 = 1;
				if (func_634())
				{
					func_633();
				}
				else if (func_632())
				{
				}
				else
				{
					if (!(func_631() || func_709()) || !func_630())
					{
						Global_2685444.f_6396 = 0;
						Global_2685444.f_6397 = 0;
					}
					if (!func_630())
					{
						Global_2685444.f_6395 = 0;
						Global_2685444.f_6394 = 0;
					}
				}
				if (func_734(unk_0x259BE71D8A81D4FA()) || func_733(unk_0x259BE71D8A81D4FA()))
				{
					Global_786435.f_34++;
				}
				else if (func_629())
				{
					Global_786481.f_34++;
					if (Global_786481.f_64 == 0)
					{
						Global_786481.f_64 = 1;
					}
				}
				else if (func_627())
				{
					Global_1941686.f_17++;
				}
				else if (func_342())
				{
					Global_1941773.f_18++;
				}
				else if (((func_625() || func_623()) || func_620()) || (func_618() && func_617(249)))
				{
					Global_1941907.f_18++;
				}
				if (func_616(Global_4718592.f_127178))
				{
					if (Global_1941606.f_14 == 0)
					{
						Global_1941606.f_14 = 1;
					}
				}
				if (!BitTest(Global_4718592.f_12, 22))
				{
					if (func_615() == -1)
					{
						if (!BitTest(Global_4718592.f_12, 15))
						{
							func_614(Global_4718592.f_127633);
						}
						else
						{
							func_613(Global_4718592.f_181504, Global_4718592.f_181505);
						}
						if (Global_1919969.f_14 > -1)
						{
							unk_0xAFD3BC0F6EBB5474(Global_1919969.f_14, Global_1919969.f_15, 0);
						}
						else if (func_612() > -1)
						{
							func_610(func_612(), 0);
						}
					}
					else
					{
						unk_0xAFD3BC0F6EBB5474(func_615(), 0, 0);
					}
				}
				if (func_609())
				{
					Var9 = { func_608() };
					func_607(Var9);
					if (func_606() != -1)
					{
						Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_97.f_28 = func_606();
					}
					func_605();
					func_604();
				}
				else
				{
					func_635();
				}
				if (!func_261(unk_0x259BE71D8A81D4FA(), 0))
				{
					unk_0x3D203A4099538B41(0);
					func_381(0, 0, 1);
				}
				break;
			
			case 5:
				func_652(0);
				iVar2 = 1;
				func_635();
				break;
			
			case 8:
				if (!func_651())
				{
					func_650(Global_1919969.f_17);
				}
				break;
			
			case 9:
				func_652(0);
				iVar2 = 1;
				func_635();
				func_649(Global_4718592.f_127465);
				Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_227 = { Global_4718592.f_127465 };
				if (func_603())
				{
					func_602();
				}
				if (!func_261(unk_0x259BE71D8A81D4FA(), 0))
				{
					unk_0x3D203A4099538B41(0);
					func_381(0, 0, 1);
				}
				break;
			
			case 10:
				func_581(10, 0f, 0f, 0f, Var10);
				func_580();
				break;
		}
	}
	else
	{
		Global_1837405 = 0;
	}
	if (iVar2 || func_733(unk_0x259BE71D8A81D4FA()))
	{
		if ((func_579(unk_0x259BE71D8A81D4FA()) || func_734(unk_0x259BE71D8A81D4FA())) || func_733(unk_0x259BE71D8A81D4FA()))
		{
			if (Global_1928922 > 0)
			{
				Global_2685444.f_1.f_2829.f_13 = Global_1928922;
				Global_2685444.f_1.f_2829 = { Global_1928922.f_1 };
			}
		}
		else
		{
			func_578();
		}
	}
	Global_2685444.f_1.f_842 = 0;
	unk_0x8744D2E3FC95740E(&Global_1836175, false);
	func_577(0);
	Global_1836450 = 0;
	Global_1836662 = -1;
	Global_1881739 = 0;
	Global_1574602 = 0;
	Global_1919969.f_1 = 0;
	Global_1919969.f_2 = 0;
	if (func_576() == 0)
	{
		if (Global_1919969.f_9 == -1 && bVar5 == 0)
		{
			func_568(0);
		}
		else
		{
			Global_1919969.f_9 = -1;
		}
	}
	func_567();
	if (func_566())
	{
		func_565();
	}
	if (func_564())
	{
		func_563();
	}
	if (!unk_0x834C960822A4683F())
	{
		unk_0x56B77EAF3DD4C954(1);
	}
	if (func_576() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if (((((!func_562(Global_1845281[iVar0 /*883*/]) && !func_726()) && !bVar5) && !func_409(0)) && !func_713()) && !func_725())
			{
				func_561(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_560();
	Global_1919969.f_1 = 0;
	if (!func_676())
	{
		func_559();
	}
	if (Global_1845281[iVar0 /*883*/] != -1)
	{
		iParam2 = iParam2;
		if (func_558(Global_1845281[iVar0 /*883*/]))
		{
			if (unk_0x261E3728EE56B3AC())
			{
				iVar11 = func_532(0);
				func_531(1213, -1);
				func_528(joaat("mpply_mgame_cheat_end"), iVar11);
				if (iVar11 > 0)
				{
					func_528(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0x6F146BCF099DE910(unk_0x259BE71D8A81D4FA());
	}
	func_526();
	if (Global_1919969 == 0)
	{
		if (!bVar5)
		{
			Global_1845281[iVar0 /*883*/].f_10 = -1;
			unk_0x8744D2E3FC95740E(&(Global_1845281[iVar0 /*883*/].f_879), true);
		}
	}
	if (bVar5)
	{
		func_561(0);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[iVar0 /*883*/].f_879), true);
		Global_1845281[iVar0 /*883*/].f_10 = func_525(unk_0x259BE71D8A81D4FA());
		unk_0x3D203A4099538B41(0);
		func_381(0, 0, 1);
		if (func_524())
		{
			func_522();
		}
	}
	if ((Global_1845281[iVar0 /*883*/] < 10 && Global_1845281[iVar0 /*883*/] != -1) && !func_409(0))
	{
		if ((!unk_0xD6F9DEE4765092A9(&(Global_1845281[iVar0 /*883*/].f_145)) && Global_1845281[iVar0 /*883*/] != 5) && Global_1845281[iVar0 /*883*/] != 148)
		{
			func_519(&(Global_1845281[iVar0 /*883*/].f_145));
		}
	}
	if (Global_1845281[iVar0 /*883*/] != 6)
	{
		Global_1919915 = 1;
	}
	Global_1845281[iVar0 /*883*/] = -1;
	Global_1845281[iVar0 /*883*/].f_36.f_2 = -1;
	Global_1845281[iVar0 /*883*/].f_36.f_16 = -1;
	Global_1845281[iVar0 /*883*/].f_36.f_1 = -1;
	Global_4718592 = 0;
	if (!bVar5)
	{
		func_518(0);
	}
	Global_1845281[iVar0 /*883*/].f_36.f_18 = 0;
	unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x383461852896D73D() /*883*/].f_822), false);
	unk_0x9A2CEA4E7EBB6D0C(0, 0);
	if (iVar1 != 6 && iVar1 != 148)
	{
		unk_0xC138265FD0CDEA4E();
		Global_2697655 = 0;
	}
	if (!bVar5)
	{
		StringCopy(&(Global_1845281[iVar0 /*883*/].f_145), sVar12, 24);
		StringCopy(&(Global_1845281[iVar0 /*883*/].f_151), sVar12, 24);
		func_517();
	}
	StringCopy(&(Global_1873538[iVar0 /*16*/]), sVar12, 64);
	StringCopy(&(Global_1845281[iVar0 /*883*/].f_165), sVar12, 64);
	Global_1882632[iVar0 /*146*/].f_36 = { Var13 };
	Global_1882632[iVar0 /*146*/].f_38 = { Var13 };
	Global_1836672 = 0;
	Global_1836673 = 0;
	Global_1836183 = -1;
	bVar14 = false;
	func_516();
	func_515();
	func_514();
	if (func_513())
	{
		func_512();
	}
	if (func_511() && unk_0x834C960822A4683F())
	{
		func_510();
		func_376(unk_0x259BE71D8A81D4FA(), 0, 57348, 0);
	}
	if (func_509())
	{
		func_508();
	}
	else if (func_507())
	{
		func_508();
	}
	else if (func_506())
	{
		func_508();
	}
	else if (func_505())
	{
		func_508();
	}
	else if (func_504())
	{
		func_508();
	}
	else if (func_576())
	{
		func_508();
	}
	else if (func_503() && func_502())
	{
		func_508();
	}
	else if (func_501())
	{
		func_508();
	}
	else
	{
		func_500();
		if (!BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 1) && !func_753())
		{
			if (unk_0x834C960822A4683F())
			{
				if (func_524())
				{
					func_499();
				}
				else
				{
					if (!BitTest(Global_4718592.f_28, 10))
					{
						if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
						{
							Global_2685444.f_2847.f_198 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
						}
					}
					func_498();
					func_738();
					func_497(6);
					func_654();
					if (bVar5)
					{
						func_715(0);
					}
				}
				func_496();
				func_495();
				func_494();
				if (Global_2685444.f_2847.f_4 == 2)
				{
					Global_2685444.f_2847.f_4 = 1;
				}
				if (func_261(unk_0x259BE71D8A81D4FA(), 0))
				{
					func_493();
				}
				func_492();
				Global_2685444.f_2847 = 0;
			}
			else
			{
				func_491();
				func_508();
			}
		}
		else
		{
			if (!func_709() && !func_753())
			{
			}
			func_491();
			func_508();
		}
	}
	if ((((((((((!func_509() && !func_490()) && !func_502()) && !func_503()) && !func_506()) && !func_507()) && !func_489()) && !func_504()) && !func_576()) && !func_505()) && !func_488())
	{
		if (!func_487())
		{
			func_486();
			func_484();
			func_483();
			func_481(1);
		}
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (unk_0xF859473E4AD09F30())
		{
			if (!unk_0x6457A0C458E98FFB())
			{
				if (!func_480())
				{
					if (!bVar14)
					{
						if (func_17(unk_0x259BE71D8A81D4FA()))
						{
							unk_0x5A80107016E75ABC();
							unk_0x2DB5A63C4A5800E5();
						}
					}
				}
			}
		}
	}
	if (!func_409(0))
	{
		StringCopy(&(Global_4718592.f_127185), "", 64);
	}
	if (func_479(116, &iVar15))
	{
		func_478(iVar15);
	}
	if (func_479(123, &iVar15))
	{
		func_478(iVar15);
	}
	if (!func_753())
	{
		func_470();
	}
	else if (func_469())
	{
		func_468();
	}
	func_467();
	if (!func_713() && !func_709())
	{
		func_466();
	}
	func_465();
	func_459();
	func_433(bParam3);
}

void func_433(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_676())
		{
		}
		else if ((((!func_713() && !func_709()) && !func_753()) && Global_1919969.f_9 != 9) && Global_1919969.f_9 != 4)
		{
			func_610(0, 1);
		}
	}
	unk_0x830C51B62E7CD5B2();
	if (!func_458(unk_0x259BE71D8A81D4FA()) && !BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 17))
	{
		func_457();
	}
	if (func_456())
	{
		func_455(1);
		func_454(1);
		func_453(1);
		func_452(1);
	}
	if ((((bParam0 && !func_451()) && !func_713()) && !Global_262145.f_4413) && !func_450())
	{
		unk_0x58A3B74F26D2B532();
	}
	unk_0xCC1C92F7E1A3CE9D(5, 1);
	unk_0xCC1C92F7E1A3CE9D(3, 1);
	func_440(&uVar0, -1);
	if ((func_19() == 0 && !func_128()) && !func_713())
	{
		if (func_439())
		{
			func_438();
		}
		else
		{
			func_435(1147932892, 28, 0);
		}
	}
	func_434(0);
}

void func_434(int iParam0)
{
	if (!Global_1928412 == iParam0)
	{
		Global_1928412 = iParam0;
	}
}

void func_435(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_437(iParam1, iParam2))
	{
		iVar0 = func_436();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_436()
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

int func_437(int iParam0, var uParam1)
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

void func_438()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1048576.f_10), 22);
}

bool func_439()
{
	return BitTest(Global_1048576.f_10, 21);
}

void func_440(var uParam0, int iParam1)
{
	func_446(uParam0, iParam1);
	func_441(iParam1);
}

void func_441(int iParam0)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	uVar0 = func_445(iParam0);
	uVar1 = unk_0x38640D2193CB547F(uVar0);
	if (func_442())
	{
		if (BitTest(uVar1, 1))
		{
			func_33(133, 1, -1, 1);
		}
	}
}

int func_442()
{
	if (func_444() && func_443(0))
	{
		return 1;
	}
	return 0;
}

var func_443(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_444()
{
	return func_443(func_30() + 1);
}

int func_445(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_446(var uParam0, int iParam1)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_30();
	}
	uVar1 = func_449(iParam1);
	uVar2 = unk_0x38640D2193CB547F(uVar1);
	if (BitTest(uVar2, 1))
	{
		func_531(1208, iParam1);
		func_528(joaat("mpply_dm_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, true);
		bVar0 = true;
	}
	if (BitTest(uVar2, 2))
	{
		func_447(1210, iParam1);
		func_528(joaat("mpply_race_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 2);
		bVar0 = true;
	}
	if (BitTest(uVar2, 3))
	{
		func_531(1119, iParam1);
		func_528(joaat("mpply_mc_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 3);
		bVar0 = true;
	}
	if (BitTest(uVar2, 4))
	{
		func_531(1212, iParam1);
		func_528(joaat("mpply_mgame_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 4);
		bVar0 = true;
	}
	if (BitTest(uVar2, 5))
	{
		func_531(1925, iParam1);
		func_528(joaat("mpply_cap_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 5);
		bVar0 = true;
	}
	if (BitTest(uVar2, 6))
	{
		func_531(1927, iParam1);
		func_528(joaat("mpply_sur_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 6);
		bVar0 = true;
	}
	if (BitTest(uVar2, 7))
	{
		func_531(1929, iParam1);
		func_528(joaat("mpply_lts_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 7);
		bVar0 = true;
	}
	if (BitTest(uVar2, 8))
	{
		func_531(1931, iParam1);
		func_528(joaat("mpply_para_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 8);
		bVar0 = true;
	}
	if (BitTest(uVar2, 9))
	{
		func_531(12584, iParam1);
		func_528(joaat("mpply_heist_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 9);
		bVar0 = true;
	}
	if (BitTest(uVar2, 26))
	{
		func_531(1933, iParam1);
		func_528(joaat("mpply_fmevn_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		unk_0x91F6DFBE57E45538(uVar2, iParam1);
	}
}

void func_447(int iParam0, int iParam1)
{
	func_448(iParam0, func_27(iParam0, iParam1) + 1, iParam1);
}

void func_448(int iParam0, var uParam1, int iParam2)
{
	func_66(iParam0, uParam1, iParam2, 1);
}

int func_449(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
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

int func_450()
{
	if (func_734(unk_0x259BE71D8A81D4FA()) || func_733(unk_0x259BE71D8A81D4FA()))
	{
		if (func_631() || func_709())
		{
			return 1;
		}
	}
	return 0;
}

bool func_451()
{
	return Global_1836675;
}

void func_452(int iParam0)
{
	Global_2685444.f_6574 = iParam0;
}

void func_453(int iParam0)
{
	Global_2685444.f_6573 = iParam0;
}

void func_454(int iParam0)
{
	Global_2685444.f_6572 = iParam0;
}

void func_455(int iParam0)
{
	Global_2685444.f_6393 = iParam0;
}

int func_456()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (!unk_0xD6F9DEE4765092A9(&(Global_4718592.f_127493[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_457()
{
	unk_0xDAE61414743C8D1D(6);
	unk_0x425BBE19F25A57AB(1f);
	unk_0xD682DD0578BF5392(1);
}

int func_458(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1887305[iVar0 /*610*/] != -1;
	}
	return 0;
}

void func_459()
{
	if (Global_1963771)
	{
		if (func_354())
		{
			if (func_464(Global_4718592.f_185586))
			{
				switch (Global_4718592.f_178456)
				{
					case 1:
						unk_0xC94AE68759E1B3BD(2947,73f, -3860,622f, 142,6144f, 5f, joaat("xs_combined_dyst_06_build_03"), 0);
						break;
				}
			}
			else if (func_463(Global_4718592.f_185586))
			{
				switch (Global_4718592.f_178456)
				{
					case 3:
						unk_0xC94AE68759E1B3BD(2943,765f, -3859,625f, 151,1007f, 5f, joaat("xs_propint3_set_waste_03_licencep"), 0);
						break;
				}
			}
			else if (func_462(Global_4718592.f_185586))
			{
				switch (Global_4718592.f_178456)
				{
					case 3:
						unk_0xC94AE68759E1B3BD(2948,968f, -3854,075f, 150,7258f, 5f, joaat("xs_propint4_waste_08_plates"), 0);
						break;
				}
			}
			else if (func_461(Global_4718592.f_185586))
			{
				switch (Global_4718592.f_178456)
				{
					case 3:
						unk_0xC94AE68759E1B3BD(2944,726f, -3846,384f, 140f, 5f, joaat("xs_propint5_waste_09_ground_d"), 0);
						unk_0xC94AE68759E1B3BD(2948,589f, -3859,259f, 145,6578f, 5f, joaat("xs_propint5_waste_09_ground_cut"), 0);
						unk_0xC94AE68759E1B3BD(2950,465f, -3861,078f, 149,8605f, 5f, joaat("xs_propint4_waste_09_lollywall"), 0);
						break;
				}
			}
			else if (func_460(Global_4718592.f_185586))
			{
				switch (Global_4718592.f_178456)
				{
					case 3:
						unk_0xC94AE68759E1B3BD(2943,765f, -3859,625f, 151,1007f, 5f, joaat("xs_propint3_set_waste_03_licencep"), 0);
						break;
					}
				}
		}
		Global_1963771 = 0;
	}
}

bool func_460(int iParam0)
{
	return iParam0 == 76;
}

bool func_461(int iParam0)
{
	return iParam0 == 77;
}

bool func_462(int iParam0)
{
	return iParam0 == 83;
}

bool func_463(int iParam0)
{
	return iParam0 == 74;
}

bool func_464(int iParam0)
{
	return iParam0 == 78;
}

void func_465()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		Global_1962436[iVar0] = -1;
		Global_1962473[iVar0] = -1;
		Global_1962510[iVar0] = -1;
		iVar0++;
	}
}

void func_466()
{
	Global_2684504.f_43.f_41 = 0;
}

void func_467()
{
	Global_1919969.f_6 = 0;
}

void func_468()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_97.f_32), 5);
}

bool func_469()
{
	return BitTest(Global_2684504.f_3, 7);
}

void func_470()
{
	struct<3> Var0;
	struct<2> Var1;
	int iVar2;
	
	if (!func_476(func_477(), Var0))
	{
		Var1.f_0 = -1225769426;
		Var1.f_1 = unk_0x259BE71D8A81D4FA();
		iVar2 = func_475(1, 1);
		if (!iVar2 == 0)
		{
			func_472();
			func_471(0);
			unk_0x71A6F836422FDD2B(1, &Var1, 3, iVar2, Var1.f_0);
		}
	}
}

void func_471(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2672855.f_3580 = unk_0x7E3F74F641EE6B27();
	}
	Global_2672855.f_3464 = iParam0;
}

void func_472()
{
	func_474();
	func_473();
}

void func_473()
{
	struct<72> Var0;
	
	if (func_62(unk_0x259BE71D8A81D4FA()))
	{
		Var0.f_6 = 32;
		Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_127 = { Var0 };
	}
}

void func_474()
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2672855.f_3464.f_79 };
	Var0.f_95 = { Global_2672855.f_3464.f_95 };
	Global_2672855.f_3464 = { Var0 };
}

var func_475(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_14(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
				else if (!func_261(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_476(struct<3> Param0, struct<3> Param1)
{
	if ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_477()
{
	return Global_2657219[unk_0x259BE71D8A81D4FA() /*10*/];
}

void func_478(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (((Global_2698929[iParam0 /*5*/].f_1 == -1 || Global_2698929[iParam0 /*5*/].f_2 == -1) || Global_2698929[iParam0 /*5*/].f_3 == -1) || Global_2698929[iParam0 /*5*/].f_4 == -1)
	{
		return;
	}
	unk_0x2BC0725CAF2E0D6B(Global_2698929[iParam0 /*5*/], Global_2698929[iParam0 /*5*/].f_1, Global_2698929[iParam0 /*5*/].f_2, Global_2698929[iParam0 /*5*/].f_3, Global_2698929[iParam0 /*5*/].f_4);
	Global_2698929[iParam0 /*5*/] = -1;
	Global_2698929[iParam0 /*5*/].f_1 = -1;
	Global_2698929[iParam0 /*5*/].f_2 = -1;
	Global_2698929[iParam0 /*5*/].f_3 = -1;
	Global_2698929[iParam0 /*5*/].f_4 = -1;
}

int func_479(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2698929[iVar0 /*5*/] == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_480()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140, 18);
}

void func_481(bool bParam0)
{
	int iVar0;
	struct<57> Var1;
	int iVar2;
	
	Global_2685444.f_1.f_2798 = 0;
	Global_2685444.f_1.f_2799 = 0;
	Global_2685444.f_1.f_2825 = 0;
	Global_2685444.f_1.f_2805 = 0;
	Global_2685444.f_1.f_2806 = 0;
	Global_2685444.f_1.f_2809 = 0;
	Global_2685444.f_1.f_2810 = 0;
	Global_2685444.f_1.f_2808 = -1;
	Global_2685444.f_1.f_2811 = -1;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2685444.f_1.f_2813[iVar0] = 0;
		iVar0++;
	}
	Global_2685444.f_1.f_2826 = -1;
	if (bParam0)
	{
		Global_2685444.f_1.f_2823 = -1;
		Global_2685444.f_1.f_2824 = -1;
	}
	Global_2685444.f_1.f_2845 = 0;
	func_482();
	Var1.f_33 = 2;
	Var1.f_36 = 7;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		Global_2685444.f_1.f_845[iVar2 /*57*/] = { Var1 };
		iVar2++;
	}
	Global_2680685.f_33 = -1;
	Global_2680685.f_34 = -1;
}

void func_482()
{
	Global_2680685.f_32 = 0;
}

void func_483()
{
	Global_2684504.f_693 = 0;
}

void func_484()
{
	Global_2684504.f_694 = 0;
	func_485();
}

void func_485()
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	if (iVar0 >= 0)
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[iVar0 /*883*/].f_97.f_32), 6);
	}
}

void func_486()
{
	Global_2684504 = 0;
	Global_2684504.f_2 = 0;
	Global_2684504.f_3 = 0;
}

bool func_487()
{
	return Global_2684504.f_693;
}

bool func_488()
{
	return Global_1928913;
}

bool func_489()
{
	return BitTest(Global_2684504, 1);
}

bool func_490()
{
	return BitTest(Global_2684504, 16);
}

void func_491()
{
	unk_0x8744D2E3FC95740E(&Global_2684504, 21);
}

void func_492()
{
	Global_2685444.f_2847.f_35 = 1;
}

void func_493()
{
	Global_2685444.f_1.f_2828 = 1;
}

void func_494()
{
	Global_2684504.f_829 = 1;
}

void func_495()
{
	Global_2685444.f_1.f_2827 = 1;
}

void func_496()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2684504, 21);
}

void func_497(int iParam0)
{
	Global_2685444.f_1.f_837 = iParam0;
	Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_223 = iParam0;
}

void func_498()
{
	struct<38> Var0;
	
	Var0 = 31;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_2680723 = { Var0 };
}

void func_499()
{
	Global_2685444.f_2847.f_1 = 1;
}

void func_500()
{
	Global_2685444.f_2847.f_1 = 0;
}

bool func_501()
{
	return Global_2684504.f_718;
}

bool func_502()
{
	return Global_2684504.f_708;
}

bool func_503()
{
	return Global_2684504.f_695;
}

bool func_504()
{
	return Global_2684504.f_704;
}

bool func_505()
{
	return BitTest(Global_2684504.f_2, 15);
}

bool func_506()
{
	return BitTest(Global_2684504, 20);
}

bool func_507()
{
	return BitTest(Global_2684504, 2);
}

void func_508()
{
	Global_2685444.f_2847.f_35 = 0;
}

bool func_509()
{
	return BitTest(Global_1048576.f_10, 8);
}

void func_510()
{
	Global_2684504.f_723 = 0;
}

var func_511()
{
	return Global_2684504.f_723;
}

void func_512()
{
	Global_2684504.f_754 = 0;
}

bool func_513()
{
	return Global_2684504.f_754;
}

void func_514()
{
	Global_2685444.f_1.f_838 = 0;
	Global_2685444.f_1.f_839 = 0;
	Global_2685444.f_1.f_841 = 0;
}

void func_515()
{
	unk_0x8744D2E3FC95740E(&Global_2684504, 4);
}

void func_516()
{
	unk_0x8744D2E3FC95740E(&Global_2684504, 28);
}

void func_517()
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	unk_0x8744D2E3FC95740E(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 4);
	unk_0x8744D2E3FC95740E(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 5);
	unk_0x8744D2E3FC95740E(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 7);
	unk_0x8744D2E3FC95740E(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 8);
	unk_0x8744D2E3FC95740E(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 9);
	unk_0x8744D2E3FC95740E(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 10);
	unk_0x8744D2E3FC95740E(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 11);
	unk_0x8744D2E3FC95740E(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 12);
	unk_0x8744D2E3FC95740E(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 13);
}

void func_518(int iParam0)
{
	unk_0x3D203A4099538B41(iParam0);
}

void func_519(var uParam0)
{
	var uVar0;
	
	if ((!func_521() && func_520(120, -1)) && !func_409(0))
	{
		unk_0xD41EE13851E1A5D7(uParam0, &uVar0, 13);
		if (unk_0xA8F635A578C0CE07(&uVar0, 13))
		{
			if (unk_0xEDD63461767A518C(&uVar0))
			{
			}
		}
	}
}

int func_520(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_34(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_521()
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	if ((Global_1845281[iVar0 /*883*/].f_36.f_2 == 63 || Global_1845281[iVar0 /*883*/].f_36.f_2 == 62) || Global_1845281[iVar0 /*883*/].f_36.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_522()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1048576.f_10), 8);
	func_523();
}

void func_523()
{
	Global_2684504.f_884 = 1;
}

bool func_524()
{
	return Global_2685444.f_2847.f_2;
}

var func_525(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_97.f_2;
}

void func_526()
{
	if (func_527())
	{
		unk_0x428C32CC68809A35(1);
	}
}

bool func_527()
{
	return func_200("FM_RETRY_INV");
}

void func_528(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_530(iParam0);
	iVar0 = (iVar0 + iParam1);
	func_529(iParam0, iVar0);
}

void func_529(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, 1);
	}
}

int func_530(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_531(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0, func_29(iParam1));
	iVar0++;
	func_66(iParam0, iVar0, iParam1, 1);
}

int func_532(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 2;
	bVar1 = func_549();
	if (Global_2697530 == 0)
	{
		return 0;
	}
	if (func_548())
	{
		if (unk_0x834C960822A4683F() || (func_547() || func_543()))
		{
			Global_2696176 = 1;
		}
	}
	Global_2697530 = 0;
	if (Global_1577925)
	{
		iVar0 = 1;
	}
	if (Global_2696176)
	{
		iVar0 = 1;
	}
	if (Global_2696175)
	{
		iVar0 = 1;
	}
	if (func_542(Global_112997.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2696115)
	{
		iVar0 = 1;
	}
	if (func_541(512))
	{
		iVar0 = 1;
	}
	if (func_540(128))
	{
		iVar0 = 1;
	}
	if (Global_1577949 == 1)
	{
		if (bVar1)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 2;
		}
	}
	if (func_409(0))
	{
		iVar0 = 0;
	}
	if (Global_2696674)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_538())
		{
			if (Global_4718592.f_127740 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_261(unk_0x259BE71D8A81D4FA(), 0))
	{
		iVar0 = 0;
	}
	if (func_537())
	{
		iVar0 = 0;
	}
	if ((Global_2696176 || Global_2696175) || Global_1577925)
	{
		if (func_543())
		{
			iVar0 = 0;
		}
	}
	if (Global_1837416)
	{
		iVar0 = 2;
	}
	Global_2696674 = 0;
	Global_2696175 = 0;
	Global_2696176 = 0;
	Global_1577925 = 0;
	Global_2696115 = 0;
	func_535(&(Global_112997.f_1), 32);
	func_534(512);
	func_533(128);
	Global_1837416 = 0;
	return iVar0;
}

void func_533(int iParam0)
{
	Global_113054 = (Global_113054 - (Global_113054 && iParam0));
}

void func_534(int iParam0)
{
	Global_113055 = (Global_113055 - (Global_113055 && iParam0));
}

void func_535(var uParam0, int iParam1)
{
	func_536(uParam0, iParam1);
}

void func_536(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_537()
{
	if (((Global_1836699 || Global_1836668) || func_261(unk_0x259BE71D8A81D4FA(), 0)) || func_260())
	{
		return 1;
	}
	return 0;
}

int func_538()
{
	switch (func_539())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_539()
{
	return Global_2685444.f_1.f_2823;
}

bool func_540(int iParam0)
{
	return (Global_113054 && iParam0) != 0;
}

bool func_541(int iParam0)
{
	return (Global_113055 && iParam0) != 0;
}

bool func_542(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_543()
{
	if (func_546(Global_2698685))
	{
		return 0;
	}
	if (func_544(unk_0x259BE71D8A81D4FA(), 146))
	{
		return 1;
	}
	return 0;
}

int func_544(int iParam0, int iParam1)
{
	if (Global_1887305[iParam0 /*610*/] == iParam1)
	{
		return func_545(iParam0);
	}
	return 0;
}

int func_545(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 0);
	}
	return 0;
}

int func_546(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11855)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11857)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11854)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11858)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11859)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11860)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11856)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11861)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11862)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11863)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11864)
			{
				return 1;
			}
			break;
		
		case 236:
		case 150:
			break;
	}
	return 0;
}

int func_547()
{
	if (func_546(Global_2698685))
	{
		return 0;
	}
	if (func_545(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	return 0;
}

bool func_548()
{
	return BitTest(Global_1574589, 0);
}

int func_549()
{
	if (Global_1577949 == 1 && (func_618() || func_550()))
	{
		return 1;
	}
	return 0;
}

int func_550()
{
	if ((((((func_342() || func_625()) || func_623()) || func_556(Global_4718592.f_127178)) || func_554(Global_4718592.f_127178)) || func_551()) || func_620())
	{
		return 1;
	}
	return 0;
}

int func_551()
{
	return func_552(Global_4718592.f_127178);
}

int func_552(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_553(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_553(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32988[iParam0];
	}
	return -1;
}

int func_554(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (iParam0 == func_555(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_555(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33127[iParam0];
	}
	return -1;
}

int func_556(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_557(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_557(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32176[iParam0];
	}
	return -1;
}

int func_558(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

void func_559()
{
	if (unk_0xD130E7CDEE903624(unk_0xE8466DBC1A7E794F(unk_0x259BE71D8A81D4FA()), "MissionType"))
	{
		unk_0x97AC7D93ABD65D96(unk_0xE8466DBC1A7E794F(unk_0x259BE71D8A81D4FA()), "MissionType");
	}
	if (unk_0xD130E7CDEE903624(unk_0xE8466DBC1A7E794F(unk_0x259BE71D8A81D4FA()), "MatchId"))
	{
		unk_0x97AC7D93ABD65D96(unk_0xE8466DBC1A7E794F(unk_0x259BE71D8A81D4FA()), "MatchId");
	}
	if (unk_0xD130E7CDEE903624(unk_0xE8466DBC1A7E794F(unk_0x259BE71D8A81D4FA()), "TeamId"))
	{
		unk_0x97AC7D93ABD65D96(unk_0xE8466DBC1A7E794F(unk_0x259BE71D8A81D4FA()), "TeamId");
	}
}

void func_560()
{
	Global_2684504.f_699 = 0;
	unk_0x5AB2FA2EDFF61EB9();
}

void func_561(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879), 2);
		}
	}
	else if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2))
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879), 2);
	}
}

int func_562(int iParam0)
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_563()
{
	Global_2684504.f_844 = 0;
}

bool func_564()
{
	return Global_2684504.f_844;
}

void func_565()
{
	Global_2684504.f_848 = 0;
}

bool func_566()
{
	return Global_2684504.f_848;
}

void func_567()
{
	unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_97.f_32), true);
}

int func_568(int iParam0)
{
	int iVar0;
	
	if (func_260())
	{
		return 1;
	}
	if (func_573())
	{
		return 1;
	}
	if (unk_0xD6F9DEE4765092A9(&(Global_4718592.f_127465)))
	{
		return 1;
	}
	if (func_572())
	{
		return 1;
	}
	func_571();
	unk_0x87BA8B7277ED162C(0);
	iVar0 = unk_0x6C99356A4D3C7B09(0);
	if (iParam0 == 0)
	{
		Global_1919928++;
		unk_0xCBF0312D1370143F(iVar0, "quit", Global_1919928);
		unk_0xCBF0312D1370143F(iVar0, "quitd", 1);
		unk_0xCBF0312D1370143F(iVar0, "ply", Global_1919928.f_2);
		unk_0xCBF0312D1370143F(iVar0, "lp", unk_0x39D1D336459711BE());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1919953.f_1++;
		unk_0xCBF0312D1370143F(iVar0, "quit", Global_1919953.f_1);
		unk_0xCBF0312D1370143F(iVar0, "quitd", 1);
		unk_0xCBF0312D1370143F(iVar0, "ply", Global_1919953.f_4);
		unk_0xCBF0312D1370143F(iVar0, "lp", unk_0x39D1D336459711BE());
	}
	if (iParam0 == 0)
	{
		if (unk_0x18EEF6291DBCAC51(&(Global_4718592.f_127465), 0f, func_570(iParam0), 0))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (unk_0x18EEF6291DBCAC51(&(Global_1048576.f_44), 0f, func_570(iParam0), 0))
		{
		}
	}
	func_569();
	func_571();
	unk_0xB7CBD1698172CFDD();
	return 1;
}

void func_569()
{
	Global_1919928 = 0;
	Global_1919928.f_2 = 0;
	Global_1919928.f_8 = 0;
	Global_1919928.f_3 = 0;
	Global_1919928.f_6 = 0;
}

char* func_570(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

void func_571()
{
	if (unk_0x6C99356A4D3C7B09(0) != 0)
	{
		unk_0x27DEA4A6845A22BC(0);
	}
}

int func_572()
{
	if (unk_0xFA49944CF453C338())
	{
		return 1;
	}
	else if (unk_0x3076B63C4BC614DC())
	{
		return 1;
	}
	else if (unk_0x2DD9F4C2D128C690())
	{
		return 1;
	}
	return 0;
}

int func_573()
{
	if (!func_574())
	{
		return 1;
	}
	return 0;
}

int func_574()
{
	if (func_575())
	{
		return 0;
	}
	if (unk_0x5676319ACE5BEC37() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_575()
{
	return Global_2696683;
}

bool func_576()
{
	return Global_2684504.f_736;
}

void func_577(bool bParam0)
{
	if (bParam0)
	{
		Global_1574615 = 1;
	}
	else
	{
		Global_1574615 = 0;
	}
}

void func_578()
{
	Global_2685444.f_1.f_2829.f_13 = 0;
	Global_2685444.f_1.f_2829 = 0;
	Global_2685444.f_1.f_2829.f_1 = 0;
	Global_2685444.f_1.f_2829.f_2 = 0;
	Global_2685444.f_1.f_2829.f_3 = 0;
	Global_2685444.f_1.f_2829.f_4 = 0;
	Global_2685444.f_1.f_2829.f_5 = 0;
	Global_2685444.f_1.f_2829.f_6 = 0;
	Global_2685444.f_1.f_2829.f_7 = 0;
	Global_2685444.f_1.f_2829.f_8 = 0;
	Global_2685444.f_1.f_2829.f_9 = 0;
	Global_2685444.f_1.f_2829.f_10 = 0;
	Global_2685444.f_1.f_2829.f_11 = 0;
	Global_2685444.f_1.f_2829.f_12 = 0;
}

bool func_579(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 1;
}

void func_580()
{
	Global_2684504.f_718 = 1;
}

void func_581(int iParam0, struct<3> Param1, struct<6> Param2)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_601();
	func_600();
	func_599();
	func_598();
	func_597();
	func_738();
	Global_1919969.f_9 = iParam0;
	switch (Global_1919969.f_9)
	{
		case 1:
			Global_1919969 = 0;
			Global_1919969.f_23 = { 0f, 0f, 0f };
			unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879), true);
			func_594();
			break;
		
		case 2:
			Global_1919969 = 1;
			Global_1919969.f_23 = { Param1 };
			Global_1919969.f_17 = { Param2 };
			unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879), true);
			break;
		
		case 3:
			if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 0 || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 1)
			{
				func_593(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_97.f_28);
			}
			func_592();
			Global_1919969 = 1;
			Global_1919969.f_23 = { Param1 };
			if (func_591())
			{
				Global_1919969.f_17 = { Param2 };
			}
			unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879), true);
			break;
		
		case 4:
			func_590();
			func_592();
			Global_1919969 = 1;
			if (func_733(unk_0x259BE71D8A81D4FA()) || func_734(unk_0x259BE71D8A81D4FA()))
			{
				func_589(1);
			}
			if ((func_588() || func_634()) && func_609())
			{
				Global_1919969.f_17 = { func_608() };
				Param2 = { Global_1919969.f_17 };
				Global_1919969.f_23 = { func_587() };
			}
			else if (func_588() || func_634())
			{
				if (func_586())
				{
					Global_1919969.f_23 = { func_585() };
				}
				else
				{
					Global_1919969.f_23 = { Param1 };
				}
			}
			else
			{
				Global_1919969.f_23 = { Param1 };
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879), true);
			break;
		
		case 5:
			func_590();
			func_584();
			func_592();
			if (func_733(unk_0x259BE71D8A81D4FA()) || func_734(unk_0x259BE71D8A81D4FA()))
			{
				func_589(1);
			}
			Global_1919969 = 1;
			Global_1919969.f_23 = { Param1 };
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879), true);
			break;
		
		case 8:
			Global_1919969 = 0;
			Global_1919969.f_23 = { Param1 };
			Global_1919969.f_17 = { Param2 };
			unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879), true);
			break;
		
		case 9:
			func_592();
			Global_1919969 = 1;
			Global_1919969.f_23 = { Param1 };
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879), true);
			break;
		
		case 10:
			Global_1919969 = 0;
			Global_1919969.f_23 = { 0f, 0f, 0f };
			unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879), true);
			break;
	}
	func_583();
	func_582();
	func_497(Global_1919969.f_9);
	Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_224 = { Global_1919969.f_23 };
	Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_227 = { Param2 };
}

void func_582()
{
	unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18), 23);
}

void func_583()
{
	unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18), 12);
}

void func_584()
{
	Global_1919969.f_4 = 1;
}

Vector3 func_585()
{
	return Global_2684504.f_43.f_575;
}

int func_586()
{
	if ((Global_2684504.f_43.f_575 != 0f || Global_2684504.f_43.f_575.f_1 != 0f) || Global_2684504.f_43.f_575.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_587()
{
	return Global_2684504.f_43.f_578;
}

var func_588()
{
	return Global_2684504.f_43.f_57;
}

void func_589(int iParam0)
{
	Global_2685444.f_6392 = iParam0;
}

void func_590()
{
	Global_1919969.f_3 = 1;
}

bool func_591()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 24);
}

void func_592()
{
	Global_1919969.f_7 = 1;
}

void func_593(var uParam0)
{
	Global_1919969.f_10 = uParam0;
}

int func_594()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	
	if (!unk_0xA8F635A578C0CE07(&(Global_2685444.f_6676), 13))
	{
		return 0;
	}
	iVar2 = unk_0x259BE71D8A81D4FA();
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar0 = unk_0xB23E0F9B63D009A8(bVar1);
		if (unk_0x762604C40829DB72(iVar0) && iVar0 != iVar2)
		{
			Var3 = { func_80(iVar0) };
			if (unk_0xD43ED7463CB7671C(&Var3, &(Global_2685444.f_6676)) && func_596(iVar0))
			{
				func_595();
				return 1;
			}
		}
		bVar1++;
	}
	return 0;
}

void func_595()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18), 9);
}

var func_596(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_36.f_18, 9);
}

void func_597()
{
	Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_5 = 0;
}

void func_598()
{
	Global_1919969.f_10 = -1;
}

void func_599()
{
	Global_1919969.f_4 = 0;
}

void func_600()
{
	Global_1919969.f_3 = 0;
}

void func_601()
{
	Global_2685444.f_2847.f_2 = 1;
}

void func_602()
{
	Global_2684504.f_669.f_16 = 0;
}

bool func_603()
{
	return Global_2684504.f_669.f_16;
}

void func_604()
{
	Global_2684504.f_43.f_55 = 0;
}

void func_605()
{
	Global_2684504.f_43.f_43 = -1;
}

int func_606()
{
	return Global_2684504.f_43.f_43;
}

void func_607(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (unk_0xD6F9DEE4765092A9(&uParam0))
	{
		return;
	}
	if (!Global_2629351)
	{
		return;
	}
	if (!unk_0x1B79E937E91F40C3(&uParam0, &(Global_2629351.f_1)))
	{
		return;
	}
	Global_2629417 = 1;
}

struct<6> func_608()
{
	return Global_2684504.f_43.f_12;
}

bool func_609()
{
	return Global_2684504.f_43.f_59;
}

void func_610(int iParam0, bool bParam1)
{
	if (func_727())
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (unk_0x75193D36C5FA4721())
				{
					unk_0x99599AE2C0FDB2A1();
				}
			}
			break;
		
		case 1:
			unk_0xAFD3BC0F6EBB5474(6, 0, 0);
			break;
		
		case 2:
			unk_0xAFD3BC0F6EBB5474(12, 0, 0);
			break;
		
		case 3:
			if (func_611(Global_4718592.f_185586))
			{
				unk_0xAFD3BC0F6EBB5474(20, 50, 0);
			}
			else
			{
				unk_0xAFD3BC0F6EBB5474(21, 0, 0);
			}
			break;
		
		case 4:
			unk_0xAFD3BC0F6EBB5474(0, 0, 0);
			break;
		
		default:
			break;
	}
}

bool func_611(int iParam0)
{
	return iParam0 == 10;
}

int func_612()
{
	return Global_1919969.f_12;
}

void func_613(var uParam0, var uParam1)
{
	Global_1919969.f_14 = uParam0;
	Global_1919969.f_15 = uParam1;
}

void func_614(var uParam0)
{
	Global_1919969.f_12 = uParam0;
}

int func_615()
{
	return Global_1919969.f_13;
}

int func_616(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_4724[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_617(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 9)
	{
		return 0;
	}
	return BitTest(Global_2685444.f_1.f_2813[iVar0], iVar1);
}

int func_618()
{
	return func_619(Global_4718592.f_127178);
}

int func_619(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_620()
{
	return func_621(Global_4718592.f_127178);
}

int func_621(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == func_622(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_622(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33015[iParam0];
	}
	return -1;
}

int func_623()
{
	return func_624(Global_4718592.f_127178);
}

int func_624(int iParam0)
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

int func_625()
{
	return func_626(Global_4718592.f_127178);
}

int func_626(int iParam0)
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

bool func_627()
{
	if (unk_0x834C960822A4683F())
	{
		return func_630();
	}
	return func_628(Global_4718592.f_127178);
}

int func_628(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_6007[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_629()
{
	return Global_2684504.f_19;
}

bool func_630()
{
	return Global_2684504.f_21;
}

var func_631()
{
	return BitTest(Global_1574950, 4);
}

bool func_632()
{
	return Global_2684504.f_17;
}

void func_633()
{
	Global_2684504.f_43.f_56 = 1;
}

bool func_634()
{
	return Global_2684504.f_43.f_55;
}

void func_635()
{
	if (unk_0xD6F9DEE4765092A9(&(Global_2621534.f_4.f_3)))
	{
		return;
	}
	if (!unk_0xD6F9DEE4765092A9(&(Global_2628648.f_3)))
	{
		if (unk_0x1B79E937E91F40C3(&(Global_2628648.f_3), &(Global_2621534.f_4.f_3)))
		{
			Global_1573982 = 0;
		}
		else
		{
			Global_1573982 = 1;
		}
	}
	Global_1573983 = 0;
	Global_1573983.f_1 = { Global_2621534.f_4.f_3 };
}

void func_636()
{
	Global_1919969.f_5 = 0;
	Global_1919969.f_11 = -1;
}

void func_637(var uParam0)
{
	Global_1919969.f_5 = 1;
	Global_1919969.f_11 = uParam0;
}

int func_638(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_185586 == 46)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9678[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_639(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_185586 == 21)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9514[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_640()
{
	if (BitTest(Global_4718592.f_18, 0))
	{
		return 1;
	}
	return ((((((func_647(Global_4718592.f_127178, 1) || func_646(Global_4718592.f_127178)) || func_645(Global_4718592.f_127178)) || func_644(Global_4718592.f_127178)) || func_643(Global_4718592.f_185586)) || func_642(Global_4718592.f_185586)) || func_641(Global_4718592.f_185586));
}

bool func_641(int iParam0)
{
	return iParam0 == 65;
}

bool func_642(int iParam0)
{
	return iParam0 == 48;
}

bool func_643(int iParam0)
{
	return (iParam0 == 8 || iParam0 == 91);
}

int func_644(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_185586 == 35)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9757[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_645(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_185586 == 27)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9700[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_646(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_185586 == 32)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9581[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_647(int iParam0, bool bParam1)
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

struct<13> func_648()
{
	struct<13> Var0;
	
	unk_0x677540FE33795D26(&Var0, 13);
	return Var0;
}

void func_649(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	var uVar0;
	
	if (unk_0xD6F9DEE4765092A9(&uParam0))
	{
		return;
	}
	if (!Global_4594767)
	{
		return;
	}
	uVar0 = unk_0x70E57E9927B6BA58(&uParam0);
	Global_4594769 = uVar0;
	Global_4594770 = (unk_0x1DD05E817C89C737() + 60000);
}

void func_650(struct<6> Param0)
{
	if (unk_0xD6F9DEE4765092A9(&Param0))
	{
		return;
	}
	Global_1573983 = 1;
	Global_1573983.f_1 = { Param0 };
}

bool func_651()
{
	return Global_2684504.f_14;
}

void func_652(int iParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0x1D9E253CF963B125(iParam0);
		unk_0x26E61E347F8C2FB5(0);
	}
}

void func_653(int iParam0)
{
	if (Global_2707769 != iParam0)
	{
		Global_2707769 = iParam0;
	}
}

void func_654()
{
	Global_1057440 = -1;
}

void func_655()
{
	func_656(-1f);
}

void func_656(float fParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0xF2EE6216DEB74ACC(0);
		unk_0x8D163415FF0DAFC3(0);
		unk_0x1D9E253CF963B125(fParam0);
		unk_0x26E61E347F8C2FB5(0);
	}
}

int func_657(int iParam0)
{
	int iVar0;
	
	if (Global_1938445[iParam0 /*8*/] == -1)
	{
		iVar0 = func_27(func_659(iParam0), -1);
		if (iVar0 == -1)
		{
			func_658(iParam0, 0);
			iVar0 = 0;
		}
		Global_1938445[iParam0 /*8*/] = iVar0;
	}
	return Global_1938445[iParam0 /*8*/];
}

void func_658(int iParam0, int iParam1)
{
	Global_1938445[iParam0 /*8*/] = iParam1;
	func_448(func_659(iParam0), iParam1, -1);
}

int func_659(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12925;
		
		default:
	}
	return 12925;
}

bool func_660()
{
	return Global_4718592.f_1 == 0;
}

void func_661(int iParam0, int iParam1)
{
	unk_0xF303C195C2A60638(iParam0);
	unk_0x690E83E7292EA12C(iParam0);
	if (unk_0x7242220B378B8CCF())
	{
		unk_0x82B8FC206B9F77F8(iParam1);
	}
}

bool func_662()
{
	return Global_2684504.f_745;
}

void func_663()
{
	if (BitTest(Global_2621446, 24))
	{
		unk_0x8744D2E3FC95740E(&Global_2621446, 24);
	}
}

void func_664()
{
	unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18), 14);
}

var func_665()
{
	return Global_2707769;
}

bool func_666()
{
	return Global_2684504.f_834;
}

int func_667()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_193;
}

void func_668(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1836451 == 0)
		{
			Global_1836451 = 1;
		}
	}
	else if (Global_1836451 == 1)
	{
		Global_1836451 = 0;
	}
}

void func_669()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2685444.f_1.f_845[iVar0 /*57*/].f_44 = 0;
		Global_2685444.f_1.f_845[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_670()
{
	int iVar0;
	
	if (func_260())
	{
		return 1;
	}
	if (func_573())
	{
		return 1;
	}
	if (func_572())
	{
		return 1;
	}
	if (unk_0xD6F9DEE4765092A9(&(Global_4718592.f_127465)))
	{
		return 1;
	}
	func_571();
	unk_0x87BA8B7277ED162C(0);
	iVar0 = unk_0x6C99356A4D3C7B09(0);
	Global_1919928.f_2++;
	if (Global_1919928.f_2 < 1)
	{
		Global_1919928.f_2 = 1;
	}
	unk_0xCBF0312D1370143F(iVar0, "quit", Global_1919928);
	unk_0xCBF0312D1370143F(iVar0, "ply", Global_1919928.f_2);
	unk_0xCBF0312D1370143F(iVar0, "plyd", 1);
	unk_0xCBF0312D1370143F(iVar0, "lp", unk_0x39D1D336459711BE());
	if (unk_0x18EEF6291DBCAC51(&(Global_4718592.f_127465), -1f, func_570(0), 0))
	{
	}
	func_569();
	func_571();
	unk_0xB7CBD1698172CFDD();
	return 1;
}

void func_671()
{
	Global_2684504.f_847 = 1;
}

void func_672(bool bParam0)
{
	if (bParam0)
	{
		unk_0x9EABCC9DA69DEDC2();
	}
	else
	{
		unk_0x1E528DDB9C065FB7();
	}
}

void func_673()
{
	Global_2684504.f_846 = 1;
}

int func_674(int iParam0)
{
	switch (func_19())
	{
		case 0:
			if (!func_675(iParam0))
			{
				if (Global_1845281[iParam0 /*883*/] == 2 || Global_1845281[iParam0 /*883*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_675(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_193 != 0;
}

bool func_676()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140, 2);
}

void func_677()
{
	Global_2684504.f_846 = 0;
}

bool func_678()
{
	return Global_2684504.f_846;
}

void func_679(int iParam0)
{
	unk_0xC897319696131088("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", iParam0);
	unk_0xC897319696131088("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", iParam0);
	unk_0xC897319696131088("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", iParam0);
}

void func_680()
{
	Global_1919969.f_12 = -1;
	Global_1919969.f_14 = -1;
	Global_1919969.f_15 = -1;
}

void func_681(int iParam0)
{
	Global_1057441 = iParam0;
}

void func_682()
{
	Global_1881817 = 0;
	Global_1836665 = 4;
}

void func_683(bool bParam0)
{
	if (bParam0)
	{
		Global_1836679 = 1;
	}
	else
	{
		Global_1836679 = 0;
	}
}

void func_684()
{
	Global_1881818 = -1;
	Global_1881819 = -1;
	Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_463 = -1;
	Global_1881824 = 0;
}

void func_685()
{
	Global_2738934.f_287 = 0;
	func_689(3782, 0, -1);
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_687())
		{
			unk_0xD1C578C204015E1F(unk_0x4A8C381C258A124D(), 5, 0, 0, 0);
			func_686();
		}
	}
}

void func_686()
{
	Global_79361 = 0;
	Global_79362 = -1;
	Global_79363 = -1;
	Global_79364 = -1;
	Global_79365 = -1;
	Global_79369 = -1;
}

bool func_687()
{
	return func_688(unk_0x4A8C381C258A124D());
}

int func_688(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xC0120BBCC298EA2F(uParam0, 5);
	iVar1 = -1;
	switch (unk_0x4B423FAA24E8ABF0(uParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x94B8A32AA940A6B5(iParam0, 5, iVar0, unk_0xD6AED6BFCC58AF7F(iParam0, 5));
			if (unk_0x304A39EB177D246B(iVar1, joaat("parachute"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x94B8A32AA940A6B5(iParam0, 5, iVar0, unk_0xD6AED6BFCC58AF7F(iParam0, 5));
			if (unk_0x304A39EB177D246B(iVar1, joaat("parachute"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_689(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_30();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

void func_690()
{
	Global_2684504.f_847 = 0;
}

bool func_691()
{
	return Global_2684504.f_847;
}

void func_692(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_694(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23831.f_9116)
	{
		unk_0xDCFF86AAD108A201(15);
		Global_23831.f_9116 = 0;
	}
	unk_0x043244A32AD6E17D(0f);
	if (Global_23831.f_6231[iVar0])
	{
		unk_0xA790E8E6FD7393AC(9, 0);
		Global_23831.f_6231[iVar0] = 0;
	}
	if (Global_23831.f_6217[iVar0])
	{
		unk_0x633E3833FB96BCCB("CommonMenu");
		Global_23831.f_6217[iVar0] = 0;
	}
	if (Global_23831.f_6224[iVar0])
	{
		unk_0x633E3833FB96BCCB("MPShopSale");
		Global_23831.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_693(&(Global_23831.f_6263[iVar0 /*10*/]));
		Global_23831.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23831.f_6324[iVar0] = 0;
	}
	unk_0x633E3833FB96BCCB("Shared");
}

void func_693(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			unk_0xD314260005F064BF(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_694(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x76CD105BCAC6EB9F() && unk_0xE8DB952A4BA8F328())
		{
			iParam2 = unk_0xF25E5B7C1279A85B();
		}
	}
	StringCopy(&cVar0, unk_0x1AF90EB93E0012D6(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x70E57E9927B6BA58(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23831.f_6324[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23831.f_6324[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23831.f_6324[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_695()
{
}

void func_696(int iParam0)
{
	struct<42> Var0;
	int iVar1;
	var uVar2;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	if (Global_2684504.f_669.f_10 == 0)
	{
		Global_1919995.f_1345 = 0;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		uVar2 = Global_1919995[iVar1 /*42*/].f_3;
		Global_1919995[iVar1 /*42*/] = { Var0 };
		if (func_753())
		{
			Global_1919995[iVar1 /*42*/].f_3 = uVar2;
		}
		Global_1919995[iVar1 /*42*/].f_1 = func_144();
		Global_1919995[iVar1 /*42*/] = -1;
		Global_1919995[iVar1 /*42*/].f_2 = -1;
		iVar1++;
	}
	if ((!func_753() && !func_713()) && iParam0)
	{
		Global_1919995.f_1347 = 0;
		Global_1919995.f_1348 = 0;
	}
}

int func_697()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1919995[iVar0 /*42*/].f_1 != func_144())
		{
			if (Global_1919995[iVar0 /*42*/].f_10 > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_698()
{
	if (unk_0x834C960822A4683F())
	{
		return func_629();
	}
	return func_699(Global_4718592.f_127178);
}

int func_699(int iParam0)
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

void func_700(bool bParam0)
{
	struct<35> Var0;
	
	if (!bParam0)
	{
		Var0.f_2 = Global_1941907.f_2;
		Var0.f_15 = Global_1941907.f_15;
		Var0.f_18 = Global_1941907.f_18;
		Var0.f_23 = Global_1941907.f_23;
		Var0.f_25 = Global_1941907.f_25;
		Var0.f_26 = Global_1941907.f_26;
		Var0.f_33 = Global_1941907.f_33;
	}
	Global_1941907 = { Var0 };
}

void func_701(bool bParam0)
{
	struct<25> Var0;
	
	if (!bParam0)
	{
	}
	Global_1942058 = { Var0 };
}

void func_702(bool bParam0)
{
	struct<39> Var0;
	
	if (!bParam0)
	{
		Var0.f_18 = Global_1941975.f_18;
		Var0.f_29 = Global_1941975.f_29;
		Var0.f_30 = Global_1941975.f_30;
		Var0.f_35 = func_703();
		Var0.f_27 = Global_1941975.f_27;
		Var0.f_0 = Global_1941975;
		Var0.f_1 = Global_1941975.f_1;
		Var0.f_2 = Global_1941975.f_2;
		Var0.f_3 = Global_1941975.f_3;
		Var0.f_4 = Global_1941975.f_4;
		Var0.f_5 = Global_1941975.f_5;
		Var0.f_6 = Global_1941975.f_6;
		Var0.f_32 = Global_1941975.f_32;
	}
	Global_1941975 = { Var0 };
}

int func_703()
{
	if (Global_1941975.f_35 == 1 || Global_1919969.f_3)
	{
		return 1;
	}
	return 0;
}

void func_704(bool bParam0)
{
	struct<78> Var0;
	
	if (!bParam0)
	{
		Var0.f_37 = Global_1941773.f_37;
		Var0.f_33 = Global_1941773.f_33;
		Var0.f_30 = Global_1941773.f_30;
		Var0.f_39 = Global_1941773.f_39;
		Var0.f_20 = Global_1941773.f_20;
		Var0.f_15 = Global_1941773.f_15;
		Var0.f_35 = Global_1941773.f_35;
		Var0.f_36 = Global_1941773.f_36;
		Var0.f_31 = Global_1941773.f_31;
		Var0.f_34 = Global_1941773.f_34;
		Var0.f_27 = Global_1941773.f_27;
		Var0.f_28 = Global_1941773.f_28;
		Var0.f_32 = Global_1941773.f_32;
		Var0.f_29 = Global_1941773.f_29;
		Var0.f_77 = Global_1941773.f_77;
	}
	Global_1941773 = { Var0 };
}

void func_705(bool bParam0)
{
	struct<52> Var0;
	
	if (!bParam0)
	{
		Var0.f_2 = { Global_1941686.f_2 };
		Var0.f_14 = Global_1941686.f_14;
		Var0.f_19 = Global_1941686.f_19;
		Var0.f_23 = Global_1941686.f_23;
		Var0.f_25 = Global_1941686.f_25;
		Var0.f_30 = Global_1941686.f_30;
		Var0.f_26 = Global_1941686.f_26;
		Var0.f_27 = Global_1941686.f_27;
		Var0.f_28 = Global_1941686.f_28;
		Var0.f_29 = Global_1941686.f_29;
		Var0.f_31 = Global_1941686.f_31;
		Var0.f_32 = Global_1941686.f_32;
		Var0.f_33 = Global_1941686.f_33;
		Var0.f_40 = Global_1941686.f_40;
		Var0.f_42 = Global_1941686.f_42;
		Var0.f_50 = Global_1941686.f_50;
		Var0.f_46 = Global_1941686.f_46;
		Var0.f_51 = Global_1941686.f_51;
	}
	Global_1941686 = { Var0 };
}

void func_706(bool bParam0)
{
	Global_786481.f_3 = 0;
	Global_786481.f_4 = 0;
	Global_786481.f_6 = 0;
	Global_786481.f_7 = 0;
	Global_786481.f_8 = 0;
	Global_786481.f_9 = 0;
	Global_786481.f_10 = 0;
	Global_786481.f_11 = 0;
	Global_786481.f_12 = 0;
	Global_786481.f_13 = 0;
	Global_786481.f_14 = 0;
	Global_786481.f_15 = 0;
	Global_786481.f_16 = 0;
	Global_786481.f_17 = 0;
	Global_786481.f_18 = 0;
	Global_786481.f_20 = 0;
	if (((!func_709() && !func_634()) && Global_1919969.f_9 != 4) && !func_713())
	{
		Global_786481.f_43 = 0;
		Global_786481.f_44 = 0;
	}
	Global_786481.f_22 = 0;
	Global_786481.f_24 = 0;
	Global_786481.f_25 = 0;
	Global_786481.f_28 = 0;
	Global_786481.f_29 = 0;
	Global_786481.f_30 = 0;
	Global_786481.f_31 = 0;
	Global_786481.f_32 = 0;
	Global_786481.f_33 = 0;
	Global_786481.f_36 = 0;
	Global_786481.f_37 = 0;
	Global_786481.f_38 = 0;
	Global_786481.f_39 = 0;
	Global_786481.f_40 = 0;
	Global_786481.f_41 = 0;
	Global_786481.f_42 = 0;
	Global_786481.f_35 = 0;
	Global_786481.f_63 = 0;
	if (bParam0)
	{
		Global_786481 = 0;
		Global_786481.f_1 = 0;
		if ((!func_709() && !func_634()) && Global_1919969.f_9 != 4)
		{
			Global_786481.f_2 = 0;
			Global_786481.f_21 = 0;
		}
		Global_786481.f_5 = 0;
		Global_786481.f_19 = 0;
		Global_786481.f_23 = 0;
		Global_786481.f_26 = 0;
		Global_786481.f_46 = 0;
		Global_786481.f_47 = 0;
		Global_786481.f_48 = 0;
		Global_786481.f_50 = 0;
		Global_786481.f_51 = 0;
		Global_786481.f_52 = 0;
		Global_786481.f_53 = 0;
		Global_786481.f_54 = 0;
		Global_786481.f_55 = 0;
	}
}

void func_707(bool bParam0)
{
	Global_786435.f_3 = 0;
	Global_786435.f_4 = 0;
	Global_786435.f_6 = 0;
	Global_786435.f_7 = 0;
	Global_786435.f_8 = 0;
	Global_786435.f_9 = 0;
	Global_786435.f_10 = 0;
	Global_786435.f_11 = 0;
	Global_786435.f_12 = 0;
	Global_786435.f_13 = 0;
	Global_786435.f_14 = 0;
	Global_786435.f_15 = 0;
	Global_786435.f_16 = 0;
	Global_786435.f_17 = 0;
	Global_786435.f_18 = 0;
	Global_786435.f_20 = 0;
	Global_786435.f_21 = 0;
	Global_786435.f_22 = 0;
	Global_786435.f_24 = 0;
	Global_786435.f_25 = 0;
	Global_786435.f_28 = 0;
	Global_786435.f_29 = 0;
	Global_786435.f_30 = 0;
	Global_786435.f_31 = 0;
	Global_786435.f_32 = 0;
	Global_786435.f_33 = 0;
	Global_786435.f_36 = 0;
	Global_786435.f_37 = 0;
	Global_786435.f_38 = 0;
	Global_786435.f_39 = 0;
	Global_786435.f_40 = 0;
	Global_786435.f_41 = 0;
	Global_786435.f_42 = 0;
	Global_786435.f_35 = 0;
	if (bParam0)
	{
		Global_786435 = 0;
		Global_786435.f_1 = 0;
		Global_786435.f_2 = 0;
		Global_786435.f_5 = 0;
		Global_786435.f_19 = 0;
		Global_786435.f_23 = 0;
		Global_786435.f_26 = 0;
	}
}

void func_708(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xD130E7CDEE903624(unk_0xE8466DBC1A7E794F(iParam0), "MPBitset"))
	{
		iVar0 = unk_0xE2F6FE9B61232165(unk_0xE8466DBC1A7E794F(iParam0), "MPBitset");
	}
	unk_0x8744D2E3FC95740E(&iVar0, bParam1);
	unk_0xEE8559BBFC27701B(unk_0xE8466DBC1A7E794F(iParam0), "MPBitset", iVar0);
}

bool func_709()
{
	return Global_1919969.f_3;
}

bool func_710()
{
	return Global_2693440.f_7;
}

bool func_711()
{
	return BitTest(Global_2684504.f_43.f_4, 8);
}

void func_712()
{
	Global_2684504.f_43.f_57 = 0;
}

bool func_713()
{
	return BitTest(Global_2684504.f_43.f_4, 0);
}

void func_714()
{
	unk_0x8744D2E3FC95740E(&(Global_1048576.f_10), 8);
}

void func_715(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_11.f_1), false);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_11.f_1), false);
	}
}

void func_716(int iParam0)
{
	if ((unk_0x76CD105BCAC6EB9F() && !Global_1575055) && !Global_1575056)
	{
		if (((Global_2685444.f_3494 != 0 && Global_2685444.f_3494.f_1 != 0) && Global_2685444.f_3494.f_2 != 0) && Global_2685444.f_3494.f_3 != 0)
		{
			unk_0x7B6C12F588333BA9(Global_2685444.f_3494, Global_2685444.f_3494.f_1, Global_2685444.f_3494.f_2, Global_2685444.f_3494.f_3, iParam0);
		}
	}
	func_717();
}

void func_717()
{
	Global_2685444.f_3494 = 0;
	Global_2685444.f_3494.f_1 = 0;
	Global_2685444.f_3494.f_2 = 0;
	Global_2685444.f_3494.f_3 = 0;
}

void func_718()
{
	Global_2685444.f_1.f_2801 = 1;
}

bool func_719()
{
	return BitTest(Global_2685444.f_1.f_2809, 12);
}

void func_720(int iParam0)
{
	if (!func_713() || iParam0)
	{
		Global_1837404 = 0;
		Global_1837403 = 0;
	}
}

void func_721(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar1;
	
	Global_2684504.f_43 = -1;
	Global_2684504.f_43.f_139 = -1;
	Global_2684504.f_43.f_2 = -1;
	Global_2684504.f_43.f_5 = 0;
	Global_2684504.f_43.f_40 = 0;
	Global_2684504.f_43.f_3 = 0;
	Global_2684504.f_43.f_4 = 0;
	Global_2684504.f_43.f_42 = -1;
	Global_2684504.f_43.f_6 = { Var0 };
	Global_2684504.f_43.f_62 = 0;
	Global_2684504.f_43.f_137 = 0;
	Global_2684504.f_43.f_213 = 0;
	Global_2684504.f_43.f_428 = 0;
	Global_2684504.f_43.f_63 = 0;
	Global_2684504.f_43.f_138 = 0;
	Global_2684504.f_43.f_214 = 0;
	Global_2684504.f_43.f_429 = 0;
	Global_2684504.f_43.f_617 = 0;
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		Global_2684504.f_43.f_560[iVar1] = 0;
		iVar1++;
	}
	Global_2684504.f_43.f_136 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Global_2684504.f_43.f_140[iVar1] = 0;
		iVar1++;
	}
	Global_2684504.f_43.f_212 = 0;
	iVar1 = 0;
	while (iVar1 <= 29)
	{
		Global_2684504.f_43.f_215[iVar1] = 0;
		iVar1++;
	}
	Global_2684504.f_43.f_61 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Global_2684504.f_43.f_64[iVar1] = 0;
		iVar1++;
	}
	Global_2684504.f_43.f_427 = 0;
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		Global_2684504.f_43.f_430[iVar1] = 0;
		Global_2684504.f_43.f_445[iVar1] = 0;
		Global_2684504.f_43.f_475[iVar1 /*6*/] = { Var0 };
		Global_2684504.f_43.f_460[iVar1] = 0;
		iVar1++;
	}
	if (bParam0)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_2684504.f_43.f_44[iVar1] = 0;
			iVar1++;
		}
		if (bParam1)
		{
			Global_2684504.f_43.f_581 = 0;
			Global_2684504.f_43.f_582 = 0;
			iVar1 = 0;
			while (iVar1 < 5)
			{
				Global_2684504.f_43.f_589[iVar1] = -1;
				Global_2684504.f_43.f_595[iVar1] = -1;
				iVar1++;
			}
			Global_2684504.f_43.f_55 = 0;
			Global_2684504.f_43.f_12 = { Var0 };
			Global_2684504.f_43.f_59 = 0;
			Global_2684504.f_43.f_575 = { 0f, 0f, 0f };
			Global_2684504.f_43.f_578 = { 0f, 0f, 0f };
			Global_2684504.f_43.f_58 = 0;
			Global_2684504.f_43.f_57 = 0;
			Global_2684504.f_43.f_1 = -1;
			Global_2684504.f_43.f_601 = -1;
		}
	}
}

void func_722()
{
	Global_2693440.f_8 = 0;
	Global_2693440.f_7 = 0;
}

void func_723()
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	uVar0 = unk_0x6AC5EDDD33D79407();
	iVar1 = unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(Global_1057193, unk_0x7E3F74F641EE6B27()));
	unk_0x41D32B3516729590(Global_4718592, &(Global_4718592.f_127465), uVar0, iVar1, Global_1057193.f_1);
	func_724();
}

void func_724()
{
	Global_1057193 = 0;
	Global_1057193.f_1 = 0;
}

bool func_725()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 148;
}

bool func_726()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 5;
}

int func_727()
{
	if (func_354() && unk_0x834C960822A4683F())
	{
		return 1;
	}
	return 0;
}

void func_728()
{
	Global_1928993.f_1774 = 0;
}

void func_729()
{
	Global_2684504.f_840 = 0;
}

bool func_730()
{
	return Global_2684504.f_840;
}

void func_731()
{
	Global_21152 = 0;
	func_732();
}

void func_732()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

bool func_733(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 7;
}

bool func_734(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 2;
}

int func_735(int iParam0)
{
	if (iParam0 == Global_262145.f_4707[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_4707[1])
	{
		return 1;
	}
	else if (iParam0 == Global_262145.f_4707[2])
	{
		return 2;
	}
	else if (iParam0 == Global_262145.f_4707[3])
	{
		return 3;
	}
	else if (iParam0 == Global_262145.f_4707[4])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_4707[5])
	{
		return 5;
	}
	else if (iParam0 == Global_262145.f_4707[6])
	{
		return 6;
	}
	else if (iParam0 == Global_262145.f_4707[7])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_4707[8])
	{
		return 8;
	}
	else if (iParam0 == Global_262145.f_4707[9])
	{
		return 9;
	}
	else if (iParam0 == Global_262145.f_4707[10])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_4707[11])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_4707[12])
	{
		return 12;
	}
	else if (iParam0 == Global_262145.f_4707[13])
	{
		return 13;
	}
	else if (iParam0 == Global_262145.f_4707[14])
	{
		return 14;
	}
	else if (iParam0 == Global_262145.f_4707[15])
	{
		return 15;
	}
	return -1;
}

void func_736()
{
	Global_2684504.f_702 = 0;
}

void func_737()
{
	struct<17> Var0;
	int iVar1;
	
	Var0.f_4 = -1;
	Var0.f_14 = 2147483647;
	iVar1 = unk_0x259BE71D8A81D4FA();
	if (iVar1 != -1)
	{
		Global_1882632[iVar1 /*146*/] = { Var0 };
	}
}

void func_738()
{
	Global_1919969.f_7 = 0;
}

void func_739(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2684504.f_669.f_3 = { Var0 };
	Global_2684504.f_669 = 0;
	Global_2684504.f_669.f_1 = 0;
	Global_2684504.f_669.f_14 = 0;
	if (bParam0)
	{
		Global_2684504.f_669.f_2 = 0;
		Global_2684504.f_669.f_15 = 0;
		Global_2684504.f_669.f_16 = 0;
		Global_2625314 = 0;
		if (bParam1)
		{
			Global_2684504.f_669.f_10 = 0;
			Global_2684504.f_669.f_12 = 0;
			Global_2684504.f_669.f_13 = 0;
			Global_2684504.f_669.f_9 = 0;
			Global_2684504.f_669.f_11 = 0;
			Global_2684504.f_669.f_18 = -1;
		}
		if (iParam2 && !unk_0x834C960822A4683F())
		{
			Global_1919995.f_1347 = 0;
			Global_1919995.f_1348 = 0;
		}
		if (unk_0x259BE71D8A81D4FA() != -1)
		{
			Global_1882632[unk_0x259BE71D8A81D4FA() /*146*/].f_2 = 0;
			Global_1882632[unk_0x259BE71D8A81D4FA() /*146*/] = 0;
			Global_1882632[unk_0x259BE71D8A81D4FA() /*146*/].f_15 = 0;
			Global_1882632[unk_0x259BE71D8A81D4FA() /*146*/].f_16 = 0;
		}
	}
}

void func_740()
{
	Global_2684504.f_669.f_14 = 0;
}

bool func_741()
{
	return Global_2684504.f_669.f_10 > 0;
}

var func_742()
{
	return Global_2684504.f_669.f_14;
}

void func_743()
{
	unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_97.f_32), 11);
}

void func_744()
{
	unk_0x8744D2E3FC95740E(&(Global_1882632[unk_0x259BE71D8A81D4FA() /*146*/].f_33), 3);
}

void func_745()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1837418[iVar0] = 0;
		iVar0++;
	}
}

void func_746(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			Global_1882632[iVar0 /*146*/].f_5 = 0;
			return;
		}
		unk_0x8744D2E3FC95740E(&(Global_1882632[iVar0 /*146*/].f_5), false);
	}
}

void func_747()
{
	Global_2696646 = 0;
	Global_2696647 = 0;
	Global_2696648 = 0;
	Global_2696649 = 0;
}

void func_748()
{
	Global_2684504.f_43.f_56 = 0;
}

void func_749()
{
	Global_2684504.f_43.f_58 = 0;
}

void func_750()
{
	if (unk_0xBCF87EE3DC296C2A(unk_0xBF03D0685ADC793B()) != Global_1680241)
	{
		if (unk_0xBF03D0685ADC793B() == 0 && Global_1680241 == 3)
		{
			Global_1680241 = unk_0xBCF87EE3DC296C2A(0);
		}
		unk_0x07938654FF332D78(unk_0xBF03D0685ADC793B(), Global_1680241);
	}
}

int func_751()
{
	if (func_752() != 2)
	{
		return 0;
	}
	if (!func_713() && !((Global_1936862 || Global_1574972) && func_588()))
	{
		return 0;
	}
	return 1;
}

int func_752()
{
	return Global_2684504.f_43.f_40;
}

bool func_753()
{
	return BitTest(Global_2684504.f_669.f_1, 0);
}

void func_754(int iParam0)
{
	if (unk_0x761778199FE1211C())
	{
		unk_0x5C381D09C558ACD0(iParam0);
	}
}

void func_755(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x383461852896D73D();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!BitTest(Global_1845281[iVar0 /*883*/].f_200, 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[iVar0 /*883*/].f_200), false);
			}
		}
		else if (BitTest(Global_1845281[iVar0 /*883*/].f_200, 0))
		{
			unk_0x8744D2E3FC95740E(&(Global_1845281[iVar0 /*883*/].f_200), false);
		}
	}
}

void func_756()
{
	unk_0x8744D2E3FC95740E(&(Global_2684504.f_2), 31);
}

void func_757()
{
	Global_2672855.f_1728.f_816 = func_144();
}

void func_758()
{
	Global_2684504.f_888 = 0;
}

void func_759()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_762(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1937329.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_761();
	func_760();
	Global_1937329 = 0;
}

void func_760()
{
	Global_1937329.f_4 = 0;
}

void func_761()
{
	Global_1937329.f_3 = 0;
}

void func_762(int iParam0)
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1937329.f_5[iParam0 /*53*/] = { Var0 };
}

void func_763()
{
	unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18), 20);
}

void func_764(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 18, 1))
		{
			func_67(iParam0, 18, 1);
		}
	}
	else if (func_26(iParam0, 18, 1))
	{
		func_65(iParam0, 18, 1);
	}
}

void func_765()
{
	unk_0x8744D2E3FC95740E(&(Global_2738934.f_868), 3);
}

void func_766(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_230();
	if (bParam0)
	{
		func_320(1);
		unk_0x428C32CC68809A35(1);
	}
	unk_0x406CBCEA35499884();
	func_223();
	unk_0x2F30818D75D66C5B(0);
	func_259(0, 1, 1, 0, 0, bParam2, 0);
	func_772();
	func_211(12, 0, -1);
	func_212(1);
	unk_0xD7C0EA10993D3214(0, -1);
	unk_0x37B894853929BF1A(1);
	unk_0x747786364137DC63(1);
	func_771();
	unk_0x938C85923AD6778A(1);
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (bParam3)
		{
			if (unk_0x0721B5D4CF3ACD02())
			{
				unk_0x42B4970D598C8A72(0, 0);
			}
		}
	}
	func_266(0);
	if (((((func_128() == 0 && func_770() == 0) && iParam1) && !func_263(unk_0x259BE71D8A81D4FA())) && !unk_0x787F8EE1F6FBDC6D()) && func_344())
	{
		func_376(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
	}
	Global_2672855.f_3585 = 0;
	func_767();
}

void func_767()
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x76CD105BCAC6EB9F() && func_203(&Global_2748794))
	{
		if (!func_202(&Global_2748794, 3500, 1) || unk_0xCF580EB76CEC15FD(unk_0x259BE71D8A81D4FA()))
		{
			if (!func_769())
			{
				if (unk_0x15CCE8886267624F())
				{
					func_357(&Global_2748794, 1, 0);
				}
				else if (!func_261(unk_0x259BE71D8A81D4FA(), 0))
				{
					if ((unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_parachute")) != 1 && unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_parachute")) != 0) && (unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == -1 || Global_2748864))
					{
						unk_0xA6DFB7FC64F53E33(1);
						unk_0x8DDE9E4E8A102CD9(unk_0x259BE71D8A81D4FA(), 1);
					}
					unk_0xC1DAC4DA85BB166D(unk_0x4A8C381C258A124D(), 255, 0);
				}
			}
			else
			{
				func_357(&Global_2748794, 1, 0);
			}
		}
		else
		{
			if (unk_0x76CD105BCAC6EB9F())
			{
				unk_0xC14A2FED36D0EBB9(unk_0x4A8C381C258A124D());
			}
			func_201(&Global_2748794);
		}
	}
	if (Global_2748798 > 0)
	{
		bVar0 = false;
		while (bVar0 < 32)
		{
			if (BitTest(Global_2748798, bVar0))
			{
				bVar1 = unk_0xB23E0F9B63D009A8(bVar0);
				if (func_14(bVar1, 1, 1))
				{
					func_768(bVar1);
				}
			}
			bVar0++;
		}
	}
}

void func_768(bool bParam0)
{
	if (BitTest(Global_2748798, bParam0) && unk_0x76CD105BCAC6EB9F())
	{
		if (!func_202(&(Global_2748799[bParam0 /*2*/]), 3500, 1) || unk_0xCF580EB76CEC15FD(bParam0))
		{
			if (!func_769())
			{
				if (unk_0x15CCE8886267624F())
				{
					func_357(&(Global_2748799[bParam0 /*2*/]), 1, 0);
				}
				else if (!func_261(bParam0, 0))
				{
					unk_0x8DDE9E4E8A102CD9(bParam0, 1);
					if (!unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(bParam0), 0))
					{
						unk_0xC1DAC4DA85BB166D(unk_0x56E414973C2A8C0E(bParam0), 255, 0);
					}
				}
			}
			else
			{
				func_357(&(Global_2748799[bParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(bParam0), 0))
			{
				unk_0xC14A2FED36D0EBB9(unk_0x56E414973C2A8C0E(bParam0));
			}
			func_201(&(Global_2748799[bParam0 /*2*/]));
			unk_0x8744D2E3FC95740E(&Global_2748798, bParam0);
		}
	}
}

int func_769()
{
	if (unk_0xFD216000DC314A92() || unk_0x0721B5D4CF3ACD02())
	{
		return 1;
	}
	return 0;
}

int func_770()
{
	return BitTest(Global_2684504, 7);
}

void func_771()
{
	Global_23692.f_5 = 0;
}

void func_772()
{
	func_212(1);
	func_211(4, 0, -1);
	func_211(6, 0, -1);
	func_211(7, 0, -1);
	func_211(3, 0, -1);
	func_211(1, 0, -1);
	func_211(2, 0, -1);
	func_211(11, 0, -1);
	func_211(13, 0, -1);
	func_211(14, 0, -1);
	func_211(16, 0, -1);
}

void func_773(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1574612)
	{
		if (!func_812())
		{
			iVar0 = 0;
			while (iVar0 <= 10)
			{
				Global_1836944[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_810(unk_0x259BE71D8A81D4FA(), bParam0);
	iVar2 = func_807(iVar1, bParam0);
	if (!func_806(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 10)
		{
			Global_1836944[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		Global_1836944[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 342)
	{
		iVar3 = func_805(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_803(iVar4))
			{
				func_793(iVar4, 1);
			}
		}
		iVar4++;
	}
	if (!func_792(1))
	{
		func_785(func_786(59, 0, 0), 0);
		func_783(func_786(135, 0, 0), 1);
		func_782(func_786(22, 0, 0), func_786(73, 0, 0));
	}
	else
	{
		func_782(0, 0);
	}
	if (func_781())
	{
		if (func_520(77, -1))
		{
			func_780(1);
			func_779(1);
		}
	}
	if (func_778() || func_777())
	{
		func_33(77, 1, -1, 1);
		if (unk_0x76CD105BCAC6EB9F())
		{
			func_774(28, 1, 0);
			func_774(29, 1, 0);
			func_774(30, 1, 0);
			func_774(31, 1, 0);
			func_774(32, 1, 0);
			func_774(33, 1, 0);
			func_774(34, 1, 0);
			func_774(35, 1, 0);
			func_774(36, 1, 0);
			func_774(37, 1, 0);
			func_774(38, 1, 0);
			func_774(58, 1, 0);
		}
	}
	if (func_786(21, 0, 0))
	{
		unk_0x28365F67ED751FCB(0);
	}
	Global_1057442 = 0;
}

void func_774(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 0, 0))
		{
			if (iParam2 && Global_101585.f_18[iParam0])
			{
				if (func_776(iParam0) == 3 && !func_25(iParam0))
				{
					func_775(iParam0);
					func_67(iParam0, 0, 0);
					func_65(iParam0, 1, 0);
					func_418(iParam0);
				}
				else
				{
					func_67(iParam0, 1, 0);
					func_418(iParam0);
				}
			}
			else
			{
				func_67(iParam0, 0, 0);
				func_65(iParam0, 1, 0);
				func_418(iParam0);
			}
		}
		else
		{
			func_65(iParam0, 1, 0);
			func_418(iParam0);
		}
	}
	else if (func_26(iParam0, 0, 0))
	{
		func_65(iParam0, 0, 0);
		func_65(iParam0, 1, 0);
		func_418(iParam0);
	}
}

void func_775(int iParam0)
{
	if (Global_101585.f_18[iParam0])
	{
		func_67(iParam0, 10, 1);
		func_67(iParam0, 19, 1);
	}
}

int func_776(int iParam0)
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

bool func_777()
{
	return Global_1575071;
}

bool func_778()
{
	return Global_1575073;
}

void func_779(bool bParam0)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	func_774(28, bParam0, 0);
	func_774(30, bParam0, 0);
	func_774(31, bParam0, 0);
	func_774(33, bParam0, 0);
	func_774(34, bParam0, 0);
	func_774(38, bParam0, 0);
	func_774(58, bParam0, 0);
}

void func_780(bool bParam0)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	func_774(29, bParam0, 0);
	func_774(32, bParam0, 0);
	func_774(36, bParam0, 0);
	func_774(35, bParam0, 0);
	func_774(37, bParam0, 0);
}

int func_781()
{
	if (!func_812())
	{
		return 0;
	}
	return 1;
}

void func_782(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_774(0, bParam0, 1);
	func_774(1, bParam0, 1);
	func_774(2, bParam0, 1);
	func_774(3, bParam0, 1);
	func_774(4, bParam0, 1);
	func_774(5, bParam0, 1);
	func_774(6, bParam0, 1);
	func_774(7, bParam0, bVar0);
	func_774(8, bParam0, 1);
	func_774(9, bParam0, 1);
	func_774(10, bParam0, 1);
	func_774(11, bParam0, 1);
	func_774(12, bParam0, bVar0);
	func_774(13, bParam0, 1);
	func_774(21, bParam0, 1);
	func_774(14, bParam0, 1);
	func_774(15, bParam0, 1);
	func_774(16, bParam0, 1);
	func_774(17, bParam0, 1);
	func_774(18, bParam0, 1);
	func_774(19, bParam0, 1);
	func_774(20, bParam0, 1);
	func_774(22, bParam0, 1);
	func_774(23, bParam0, 1);
	func_774(24, bParam0, 1);
	func_774(25, bParam0, 1);
	func_774(26, bParam0, 1);
	func_774(27, bParam0, 1);
	func_419(1, !bParam1);
	if (!bVar0)
	{
		func_775(12);
	}
}

void func_783(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	uVar0 = func_784(0);
	if (Global_262145.f_61 == 1 && func_786(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_774(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(44))
		{
			func_775(44);
		}
	}
	if (bParam0)
	{
		if (func_657(0) > 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_1850), 10);
		}
	}
}

int func_784(bool bParam0)
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!BitTest(Global_2738934.f_1841, 26))
		{
			uVar0 = func_27(1192, -1);
			if (!BitTest(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_520(122, -1);
}

void func_785(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	uVar0 = func_784(0);
	func_774(39, bParam0, 0);
	func_774(40, bParam0, 0);
	func_774(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_774(43, bParam0, 0);
		func_774(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(39))
		{
			func_775(39);
		}
		if (!func_25(40))
		{
			func_775(40);
		}
		if (!func_25(41))
		{
			func_775(41);
		}
		if (!func_25(42))
		{
			func_775(42);
		}
		if (!func_25(43))
		{
			func_775(43);
		}
	}
}

int func_786(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_8337 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_788(unk_0x259BE71D8A81D4FA(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4408 == 1)
		{
			return 1;
		}
	}
	if (func_778() || func_777())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_787())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return BitTest(Global_1836944[iVar1], iVar0);
}

int func_787()
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2738934.f_1846, 23))
	{
		return 1;
	}
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	uVar0 = func_27(1304, -1);
	if (BitTest(uVar0, 7))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_1846), 23);
		return 1;
	}
	return 0;
}

int func_788(int iParam0, int iParam1)
{
	if (!func_781())
	{
		return 0;
	}
	if (func_791())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_789(&(Global_1845281[iParam0 /*883*/].f_819), func_790(iParam1));
}

var func_789(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_790(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		case 177:
			return 39;
		
		case 182:
			return 40;
		
		case 188:
			return 41;
		
		case 190:
			return 42;
		
		case 197:
			return 43;
		
		case 201:
			return 44;
		
		default:
	}
	return 1;
}

bool func_791()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_144, 3);
}

int func_792(int iParam0)
{
	return 0;
}

void func_793(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_802(-1))
			{
				if (!func_812())
				{
					return;
				}
			}
			if (!func_802(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_801() && !func_800())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_799())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_802(-1))
				{
					if (!func_794())
					{
						return;
					}
				}
			}
		}
		bVar0 = iParam0;
		iVar1 = (bVar0 / 32);
		bVar0 = (bVar0 % 32);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1836944[iVar1]), bVar0);
	}
}

int func_794()
{
	var uVar0;
	
	if (func_798(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	uVar0 = func_27(1304, -1);
	if (BitTest(uVar0, 2))
	{
		func_795(1);
		return 1;
	}
	return 0;
}

void func_795(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140, 25))
		{
			func_796(unk_0x259BE71D8A81D4FA(), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140), 25);
		}
	}
	else if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140, 25))
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_140), 25);
	}
}

void func_796(int iParam0, int iParam1)
{
	func_797(&(Global_1845281[iParam0 /*883*/].f_819), func_790(iParam1));
}

int func_797(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (!BitTest((*uParam0)[iVar1], bVar2))
	{
		unk_0x0B0C9A0F9AAEB7F0(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

int func_798(int iParam0)
{
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	return BitTest(Global_1845281[iParam0 /*883*/].f_140, 25);
}

int func_799()
{
	var uVar0;
	
	if (BitTest(Global_2738934.f_1846, 6))
	{
		return 1;
	}
	uVar0 = func_27(1304, -1);
	if (BitTest(uVar0, 0))
	{
		if (!BitTest(Global_2738934.f_1846, 6))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_1846), 6);
		}
		return 1;
	}
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	return 0;
}

bool func_800()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_144, 7);
}

int func_801()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	return func_520(121, -1);
}

bool func_802(int iParam0)
{
	return func_520(123, iParam0);
}

int func_803(int iParam0)
{
	var uVar0;
	bool bVar1;
	
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			bVar1 = iParam0;
			bVar1 = (bVar1 % 32);
			uVar0 = func_27(func_804(iParam0), -1);
			if (BitTest(uVar0, bVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_804(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1201;
			break;
		
		case 1:
			return 1202;
			break;
		
		case 2:
			return 1203;
			break;
		
		case 3:
			return 1204;
			break;
		
		case 4:
			return 1205;
			break;
		
		case 5:
			return 1207;
			break;
		
		case 6:
			return 3818;
			break;
		
		case 7:
			return 4021;
			break;
		
		case 8:
			return 5475;
			break;
		
		case 9:
			return 10354;
			break;
	}
	return 1201;
}

int func_805(int iParam0)
{
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
		case 78:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_802(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_806(int iParam0)
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	return func_520(119, iParam0);
}

int func_807(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_808(iParam0, 0);
}

int func_808(int iParam0, int iParam1)
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
		if (func_809(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_809(iVar3) < iParam0)
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

int func_809(int iParam0)
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

int func_810(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_811(iParam0);
}

int func_811(int iParam0)
{
	if (Global_1574633.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x259BE71D8A81D4FA())
			{
				return func_27(640, -1);
			}
			else if (func_62(iParam0))
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_1;
			}
		}
	}
	else
	{
		return func_27(640, -1);
	}
	return 0;
}

int func_812()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	return func_520(120, -1);
}

int func_813()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_503())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_817())
	{
		return 1;
	}
	if (func_816(159))
	{
		if (!func_815())
		{
			return 1;
		}
	}
	if (func_816(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_814() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_814()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_814()
{
	switch (func_19())
	{
		case 0:
			return func_386();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_815()
{
	return Global_2684504.f_700;
}

int func_816(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_817()
{
	return Global_2696172;
}

void func_818()
{
	system::wait(0);
}

void func_819(struct<17> Param0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	var uVar0;
	
	unk_0xDB2434E51017FFCC(2, 0, Param0.f_16);
	func_824(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_413, 7, 0);
	unk_0x7B13DC83218D9AF5(&Local_580, 11, 0);
	Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] = 16;
	if (bLocal_589)
	{
		if (!unk_0x15CCE8886267624F() && !unk_0x78ABC1D11B34F324())
		{
			unk_0x8F72AF14CE5AACE4(800);
		}
		if (!unk_0xF859473E4AD09F30())
		{
			if (!unk_0x6457A0C458E98FFB())
			{
				uVar0 = unk_0x259BE71D8A81D4FA() + 32;
				unk_0x5147DD7078544AD1(1, uVar0);
				func_215(1);
			}
		}
	}
	unk_0x17C7D9B3979F5759(1);
	unk_0x552B3BADB43FF551(1);
	if (!func_823())
	{
		func_429(0);
	}
	unk_0xAECC5FA98C879D67(0);
	func_764(iLocal_60, 1);
	func_431(1);
	if (!bLocal_589)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			func_376(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
		}
	}
	Global_2738934.f_1841 = 0;
	unk_0x5E08BBBF87BC4886(-1005,742f, -2734,265f, 14,91912f, -1082,958f, -2675,189f, 26,01647f, 39,375f, 0, 0, 0);
	func_822();
	func_820();
	Local_580[unk_0xAE032CEDCF23C6D5() /*5*/] = 0;
}

void func_820()
{
	unk_0xF303C195C2A60638(1);
	func_821(1, -1);
	unk_0x690E83E7292EA12C(1);
	if (func_520(133, -1))
	{
		func_33(133, 0, -1, 1);
	}
	Global_2684504.f_745 = 1;
}

void func_821(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_30();
	}
	switch (bParam0)
	{
		case 0:
			unk_0x1A169A00A9C3A74E(0, iParam1);
			break;
		
		default:
			uVar1 = func_445(iParam1);
			iVar0 = unk_0x38640D2193CB547F(uVar1);
			if (BitTest(iVar0, bParam0))
			{
				unk_0x8744D2E3FC95740E(&iVar0, bParam0);
				unk_0x1A169A00A9C3A74E(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_33(120, 0, iParam1, 1);
			func_33(124, 0, iParam1, 1);
			func_33(115, 0, iParam1, 1);
			func_33(119, 0, iParam1, 1);
			break;
	}
}

void func_822()
{
	unk_0xB5396F1FB088FE38(&uLocal_583);
	unk_0x092B9247AF00F5CF(0, 0, 0);
	unk_0xCD76801E1106CABE(0, 17,0693f, -1115,935f, 28,7968f, 0);
	unk_0x93C0674FC00824D0(uLocal_583);
}

int func_823()
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
		if (func_503())
		{
			return 0;
		}
		if (func_816(157))
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

int func_824(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_825();
			}
			else
			{
				return 0;
			}
		}
		if (!func_409(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_825();
					}
					else
					{
						return 0;
					}
				}
				if (func_503())
				{
					if (!bParam2)
					{
						func_825();
					}
					else
					{
						return 0;
					}
				}
				if (func_816(157))
				{
					if (!bParam2)
					{
						func_825();
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
					func_825();
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
				func_825();
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
			func_825();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_825()
{
	unk_0xBBC29EBE6E1A48FA();
}

