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
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	struct<3> Local_41 = { 0, 0, 0 } ;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	float fLocal_70 = 0f;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	float fLocal_80 = 0f;
	float fLocal_81 = 0f;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	char* sLocal_105 = NULL;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 12;
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
	var uLocal_580 = 0;
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
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
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
	var uLocal_621 = 0;
	var uLocal_622 = 0;
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
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
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
	var uLocal_663 = 0;
	var uLocal_664 = 0;
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
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
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
	var uLocal_705 = 0;
	var uLocal_706 = 0;
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
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
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
	var uLocal_747 = 0;
	var uLocal_748 = 0;
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
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
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
	var uLocal_789 = 0;
	var uLocal_790 = 0;
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
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 1065353216;
	var uLocal_811 = 0;
	struct<9> Local_812 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	struct<3> Local_817[40];
	int iLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	char cLocal_822[32] = "";
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	struct<3> Local_827 = { 0, 0, 0 } ;
	struct<3> Local_828 = { 0, 0, 0 } ;
	struct<3> Local_829 = { 0, 0, 0 } ;
	struct<3> Local_830 = { 0, 0, 0 } ;
	struct<3> Local_831 = { 0, 0, 0 } ;
	struct<3> Local_832 = { 0, 0, 0 } ;
	struct<3> Local_833 = { 0, 0, 0 } ;
	struct<3> Local_834 = { 0, 0, 0 } ;
	struct<3> Local_835 = { 0, 0, 0 } ;
	struct<3> Local_836 = { 0, 0, 0 } ;
	int iLocal_837 = 0;
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
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	iLocal_42 = unk_0x8CC13B3BF7A9890A();
	iLocal_43 = unk_0x2A3612A4B836469E();
	iLocal_67 = 1076369579;
	iLocal_68 = 1076631591;
	fLocal_71 = 0,22f;
	fLocal_72 = 50f;
	fLocal_73 = -4f;
	fLocal_74 = 4f;
	fLocal_75 = -89f;
	fLocal_76 = 89f;
	fLocal_77 = 4f;
	fLocal_80 = 0f;
	fLocal_82 = 0,4f;
	fLocal_83 = 0,6f;
	fLocal_84 = 0,201f;
	fLocal_85 = 0,351f;
	iLocal_88 = -1;
	iLocal_103 = -1;
	iLocal_104 = -1;
	sLocal_105 = unk_0xE934399D6F2C3AC5(2, 195, 1);
	iLocal_106 = joaat("prop_taxi_meter_2");
	iLocal_108 = 3;
	iLocal_814 = -1;
	iLocal_815 = 263;
	StringCopy(&cLocal_822, "oddjobs@taxi@driver", 32);
	Local_828 = { 0f, 0f, 0f };
	Local_829 = { 0f, 0f, 0f };
	Local_833 = { 0f, -0,25f, 0,55f };
	Local_834 = { -0,3f, 1f, 0,35f };
	Local_835 = { -0,01f, 0,6f, 0,24f };
	Local_836 = { -5f, 0f, 0f };
	if (unk_0x96CFB880BAC634CE(66))
	{
		if (unk_0x36E4BBBE16306470() == 64)
		{
			func_238(0);
		}
		else
		{
			func_238(1);
		}
		unk_0xBBC29EBE6E1A48FA();
	}
	if (!func_231())
	{
		func_238(1);
	}
	while (true)
	{
		if (!func_230())
		{
			func_238(1);
		}
		if (func_229(iLocal_820))
		{
			func_238(1);
		}
		switch (iLocal_820)
		{
			case 1:
				func_64();
				break;
			
			case 2:
				func_1();
				break;
			
			case 3:
				break;
		}
		system::wait(0);
	}
}

void func_1()
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (Global_113016)
		{
			Global_113016 = 0;
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				unk_0x19AD76EC04A73800(unk_0x259BE71D8A81D4FA(), 1);
			}
			unk_0xFD61BB3B8F1CDB6D(unk_0x4A8C381C258A124D(), 0);
			if ((iLocal_819 == 2 || iLocal_819 == 3) || iLocal_819 == 4)
			{
				func_7();
			}
		}
	}
	func_5();
	if (func_3(Global_113000) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Global_113000, 1))
	{
		if (!func_2(unk_0x4A8C381C258A124D(), joaat("script_task_leave_any_vehicle")) && !func_2(unk_0x4A8C381C258A124D(), joaat("script_task_leave_vehicle")))
		{
			unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
		}
	}
	else
	{
		if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
		{
			if (!unk_0x4FAFF4BCB7633475(Global_113001) && unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
			{
				if (unk_0xCECDBB848D53DEB2(Global_113001, Global_113000, 0))
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						unk_0x13DE13EA38996410(Global_113001, Global_113000, unk_0x4A8C381C258A124D(), 8, 25f, 790564, 300f, 15f, 1);
					}
				}
				else if (!unk_0xCA038E64C65D1F9D(Global_113001))
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						unk_0xD844F5E50DAB6FF7(Global_113001, unk_0x4A8C381C258A124D(), 300f, -1, 0, 0);
					}
				}
				unk_0x44FB298D6382876D(Global_113001, 1);
				unk_0xAAA71DD7E9059338(Global_113001, 0);
			}
		}
		else if (!unk_0x4FAFF4BCB7633475(Global_113001) && unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
		{
			if (unk_0xCECDBB848D53DEB2(Global_113001, Global_113000, 0))
			{
				if (!func_2(Global_113001, joaat("script_task_vehicle_drive_wander")))
				{
					unk_0x7C8E9DE09D4AD3FF(Global_113001, Global_113000, 12f, 790699);
				}
			}
			unk_0x44FB298D6382876D(Global_113001, 1);
			unk_0xAAA71DD7E9059338(Global_113001, 0);
		}
		func_238(1);
	}
}

int func_2(int iParam0, int iParam1)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(iParam0))
			{
				if (unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 1 || unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (func_4(uParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_5()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (unk_0xDC469CE2BE7CE722(func_6()))
	{
		unk_0xE6E9D3B5BEFF0EB3(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			uVar2 = unk_0x619062CCF4C1D4D5(func_6(), 0);
			if (!unk_0x4FAFF4BCB7633475(uVar2))
			{
				unk_0x974022927CB47E68(iVar2);
				if (!unk_0x1C2F771CDC87A3A5(Global_113000, 0))
				{
					if (unk_0xCECDBB848D53DEB2(iVar2, Global_113000, 0))
					{
						unk_0x23EB5FC236231892(iVar2, Global_113000, 64);
					}
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = unk_0x619062CCF4C1D4D5(func_6(), 1);
				if (!unk_0x4FAFF4BCB7633475(iVar2))
				{
					unk_0x974022927CB47E68(iVar2);
					if (!unk_0x1C2F771CDC87A3A5(Global_113000, 0))
					{
						if (unk_0xCECDBB848D53DEB2(iVar2, Global_113000, 0))
						{
							unk_0x23EB5FC236231892(iVar2, Global_113000, 64);
						}
					}
				}
			}
		}
	}
}

var func_6()
{
	return unk_0xD59511AF30BE1934(unk_0xB6B621402486C3E4());
}

void func_7()
{
	bool bVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
	{
		if (!unk_0x4FAFF4BCB7633475(Global_113001))
		{
			if (unk_0xF4244288C3EF3306(Global_113001, Global_113000))
			{
				if (!func_62())
				{
					bVar0 = true;
					if (func_55(func_56()) >= iLocal_99)
					{
						if (bLocal_63)
						{
							if (iLocal_99 > 0)
							{
								if (fLocal_70 > 75f)
								{
									iLocal_816 = 6;
								}
								else
								{
									iLocal_816 = 5;
								}
								func_45(Global_113001, &iLocal_816);
								func_9(func_56(), 21, iLocal_99);
								bVar0 = false;
							}
						}
						else if (iLocal_64 || iLocal_819 == 3)
						{
							if (iLocal_99 > 0)
							{
								iLocal_816 = 13;
								func_45(Global_113001, &iLocal_816);
								func_9(func_56(), 21, iLocal_99);
								bVar0 = false;
							}
						}
						else if (unk_0xDF93B3CFAC96698F(Global_113000) > 5f)
						{
							if (!func_8())
							{
								iLocal_816 = 12;
								func_45(Global_113001, &iLocal_816);
								unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 1, 0);
								unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
							}
						}
						else
						{
							iLocal_816 = 13;
							func_45(Global_113001, &iLocal_816);
							if (iLocal_99 > 0)
							{
								func_9(func_56(), 21, iLocal_99);
							}
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						if (iLocal_99 > 0)
						{
							iLocal_816 = 7;
							func_45(Global_113001, &iLocal_816);
							unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 1, 0);
							unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
						}
					}
				}
			}
		}
	}
}

int func_8()
{
	if (((Global_101533 == 13 || Global_101533 == 10) || Global_101533 == 11) || Global_101533 == 12)
	{
		return 0;
	}
	return 1;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	if (func_44(iParam0) == 3)
	{
		return 0;
	}
	if (func_44(iParam0) == 4)
	{
		return 0;
	}
	return func_10(func_44(iParam0), 0, iParam1, iParam2, 0);
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_43();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_42(99, 1);
					func_41(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_41(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_41(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_25(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_22(5))
					{
						fVar0 = 0,9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_41(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_22(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_41(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_41(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_41(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x931D15B1D60C81B0())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_22(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_21(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_42(95, iParam3);
					break;
				
				case 1:
					func_42(97, iParam3);
					break;
				
				case 2:
					func_42(96, iParam3);
					break;
			}
			func_42(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_13(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_13(bVar1);
	}
	iVar5 = (Global_61340[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_61340[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_61340[iVar2] = 2147483647;
				}
				else
				{
					Global_61340[iVar2] = (Global_61340[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_41(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_41(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_41(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_61340[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_61340[iVar2];
			Global_61340[iVar2] = (Global_61340[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113969.f_20567.f_233[iVar2 /*69*/]++;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_12(iParam0);
	if (Global_44042 == 15)
	{
		func_11(0);
	}
	return 1;
}

void func_11(bool bParam0)
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

void func_12(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_61340[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x1164A75E490C27B6(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x1164A75E490C27B6(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x1164A75E490C27B6(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_13(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_20(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_20(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_20(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_20(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_16(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_16(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_16(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_16(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_16(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_16(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x76CD105BCAC6EB9F())
	{
		if (BitTest(Global_113969.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			unk_0x8744D2E3FC95740E(&(Global_113969.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113969.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_15() /*5570*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x8744D2E3FC95740E(&(Global_113969.f_20567.f_471), bParam0);
		unk_0x8744D2E3FC95740E(&(Global_2359296[func_15() /*5570*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xCCDB0041859B85A6("COUP_RED");
		unk_0xACF853FB3F6EA7D4(func_14(bParam0));
		unk_0x5C7E2225D7451992(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_14(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_15()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_16(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_17(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_17(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_18(uParam1));
}

int func_18(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1574926;
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

void func_21(int iParam0)
{
	func_42(93, iParam0);
	func_42(29, iParam0);
	func_42(30, iParam0);
}

int func_22(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_24(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_24(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_24(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_24(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x39D1D336459711BE();
		iVar1 = func_23(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x39D1D336459711BE();
		iVar3 = func_23(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x39D1D336459711BE();
		iVar5 = func_23(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x39D1D336459711BE();
		iVar7 = func_23(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x39D1D336459711BE();
		iVar9 = func_23(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x39D1D336459711BE();
		iVar11 = func_23(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return BitTest(Global_113969.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_15() /*5570*/].f_681.f_10, iParam0);
}

int func_23(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_17(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_24(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_25(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x37088D2C63AC4C01(27))
	{
		return 0;
	}
	if (unk_0xDF7F16323520B858(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDF7F16323520B858(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDF7F16323520B858(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xDF7F16323520B858(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x1164A75E490C27B6(joaat("num_cash_spent"), iVar1, 1);
		func_40(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_26(27, 1);
	return 1;
}

int func_26(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_27(iParam0, iParam1);
}

int func_27(int iParam0, int iParam1)
{
	if (func_39(14) && !func_38(iParam0))
	{
		return 0;
	}
	if (unk_0x37088D2C63AC4C01(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33199 != 0 && !Global_79389)
	{
		return 0;
	}
	if (func_37(&Global_4543384))
	{
		if (func_35(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_28(&Global_4543384, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x584E143398F9661C(iParam0))
		{
			return 0;
		}
		if (unk_0x37088D2C63AC4C01(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_28(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_39(14) && !func_38(iParam1))
	{
		return 0;
	}
	if (func_35(uParam0, iParam1))
	{
		return 0;
	}
	if (func_34(uParam0) < 0f)
	{
		func_33(uParam0, 0);
	}
	func_31(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_29(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_29(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_39(14) && !func_38(iParam1))
	{
		return 0;
	}
	if (func_35(uParam0, iParam1))
	{
		return 0;
	}
	if (func_34(uParam0) < 0f)
	{
		func_33(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_30(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_30(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_31(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_32(uParam0, iVar0);
		iVar0++;
	}
	func_33(uParam0, (Global_4543383 - 0,5f));
}

void func_32(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_33(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_34(var uParam0)
{
	return uParam0->f_80;
}

bool func_35(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1) != -1;
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_37(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_39(int iParam0)
{
	return Global_44042 == iParam0;
}

int func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xB3E8CE9ABB5AD331(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xE3872E56266EDEDC(iParam0, iParam1);
	}
	return 0;
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDF7F16323520B858(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(iParam0, iVar0, 1);
}

void func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/])
	{
		unk_0xDF7F16323520B858(Global_59908[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x1164A75E490C27B6(Global_59908[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_43()
{
	int iVar0;
	
	if (unk_0x5F9F81C08516558E())
	{
		unk_0xDF7F16323520B858(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_61340[0] == iVar0)
		{
			Global_61340[0] = iVar0;
		}
		unk_0xDF7F16323520B858(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_61340[1] == iVar0)
		{
			Global_61340[1] = iVar0;
		}
		unk_0xDF7F16323520B858(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_61340[2] == iVar0)
		{
			Global_61340[2] = iVar0;
		}
	}
}

int func_44(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_17;
}

void func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (!func_51(iParam0, 0))
		{
			if (!*iParam1 == 0)
			{
				if (*iParam1 == 1)
				{
					func_49(iParam0, "TAXID_WHERE_TO", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 2)
				{
					if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
					{
						func_46();
						*iParam1 = 3;
					}
				}
				else if (*iParam1 == 3)
				{
					func_49(iParam0, "TAXID_BEGIN_JOURNEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 4)
				{
					func_49(iParam0, "TAXID_BANTER", 24);
					*iParam1 = 22;
				}
				else if (*iParam1 == 5)
				{
					func_49(iParam0, "TAXID_ARRIVE_AT_DEST", 7);
					*iParam1 = 23;
				}
				else if (*iParam1 == 6)
				{
					func_49(iParam0, "TAXID_CLOSE_AS_POSS", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 7)
				{
					func_49(iParam0, "TAXID_NO_MONEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 9)
				{
					if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
					{
						bVar0 = unk_0xE8B33D130955481B(unk_0x4A8C381C258A124D());
						if (bVar0)
						{
							unk_0xFD61BB3B8F1CDB6D(unk_0x4A8C381C258A124D(), 0);
						}
						func_49(unk_0x4A8C381C258A124D(), "TAXI_CHANGE_DEST", 7);
						if (bVar0)
						{
							unk_0xFD61BB3B8F1CDB6D(unk_0x4A8C381C258A124D(), 1);
						}
						*iParam1 = 10;
					}
				}
				else if (*iParam1 == 10)
				{
					if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
					{
						func_46();
						*iParam1 = 11;
					}
				}
				else if (*iParam1 == 11)
				{
					func_49(iParam0, "TAXID_CHANGE_DEST", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 12)
				{
					func_49(iParam0, "TAXID_RUN_AWAY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 13)
				{
					func_49(iParam0, "TAXID_GET_OUT_EARLY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 14)
				{
					func_49(iParam0, "TAXID_TRASHED", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 15)
				{
					if (!Global_113021)
					{
						func_49(iParam0, "TAXID_AFFORD_PART_JOURNEY", 7);
						Global_113021 = 1;
					}
					*iParam1 = 22;
				}
				else if (*iParam1 == 16)
				{
					func_49(iParam0, "TAXID_TAKE_FIRST_CAB", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 17)
				{
					*iParam1 = 18;
				}
				else if (*iParam1 == 18)
				{
					if (unk_0xC47E3FF56898A28B())
					{
						system::settimera(0);
					}
					else if (system::timera() > 4000)
					{
						if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
						{
							bVar0 = unk_0xE8B33D130955481B(unk_0x4A8C381C258A124D());
							if (bVar0)
							{
								unk_0xFD61BB3B8F1CDB6D(unk_0x4A8C381C258A124D(), 0);
							}
							switch (unk_0xE1799BB6E4C1CDFB())
							{
								case 0:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_VIBE", 7);
									break;
								
								case 1:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_LRR", 7);
									break;
								
								case 2:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_JNR", 7);
									break;
								
								case 3:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_MASSIVEB", 7);
									break;
								
								case 4:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_K109", 7);
									break;
								
								case 5:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_WKTT", 7);
									break;
								
								case 6:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_LCHC", 7);
									break;
								
								case 7:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_JOURNEY", 7);
									break;
								
								case 8:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_FUSION", 7);
									break;
								
								case 9:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_BEAT", 7);
									break;
								
								case 10:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_BROKER", 7);
									break;
								
								case 11:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_VLADIVOSTOK", 7);
									break;
								
								case 12:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_PLR", 7);
									break;
								
								case 13:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_SANJUAN", 7);
									break;
								
								case 14:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_FRANCOIS", 7);
									break;
								
								case 15:
									func_49(unk_0x4A8C381C258A124D(), "RADIO_REQ_CLASSICS", 7);
									break;
							}
							if (bVar0)
							{
								unk_0xFD61BB3B8F1CDB6D(unk_0x4A8C381C258A124D(), 1);
							}
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 19)
				{
					*iParam1 = 22;
				}
				else if (*iParam1 == 20)
				{
					if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
					{
						bVar0 = unk_0xE8B33D130955481B(unk_0x4A8C381C258A124D());
						if (bVar0)
						{
							unk_0xFD61BB3B8F1CDB6D(unk_0x4A8C381C258A124D(), 0);
						}
						func_49(unk_0x4A8C381C258A124D(), "TAXI_STEP_ON_IT", 7);
						if (bVar0)
						{
							unk_0xFD61BB3B8F1CDB6D(unk_0x4A8C381C258A124D(), 1);
						}
						*iParam1 = 21;
					}
				}
				else if (*iParam1 == 21)
				{
					func_49(iParam0, "TAXID_SPEED_UP", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 23)
				{
					if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
					{
						bVar0 = unk_0xE8B33D130955481B(unk_0x4A8C381C258A124D());
						if (bVar0)
						{
							unk_0xFD61BB3B8F1CDB6D(unk_0x4A8C381C258A124D(), 0);
						}
						func_49(unk_0x4A8C381C258A124D(), "THANKS", 7);
						if (bVar0)
						{
							unk_0xFD61BB3B8F1CDB6D(unk_0x4A8C381C258A124D(), 1);
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 22)
				{
					if (!func_51(iParam0, 0))
					{
						*iParam1 = 0;
					}
				}
			}
		}
	}
}

void func_46()
{
	char* sVar0;
	bool bVar1;
	
	sVar0 = func_47();
	if (!unk_0xD6F9DEE4765092A9(sVar0))
	{
		bVar1 = unk_0xE8B33D130955481B(unk_0x4A8C381C258A124D());
		if (bVar1)
		{
			unk_0xFD61BB3B8F1CDB6D(unk_0x4A8C381C258A124D(), 0);
		}
		func_49(unk_0x4A8C381C258A124D(), sVar0, 7);
		if (bVar1)
		{
			unk_0xFD61BB3B8F1CDB6D(unk_0x4A8C381C258A124D(), 1);
		}
	}
}

char* func_47()
{
	char cVar0[32];
	
	StringCopy(&cVar0, unk_0xDAEDE051F3F4FD45(func_48(Local_41.f_0)), 32);
	if (unk_0x1B79E937E91F40C3("SanAnd", &cVar0))
	{
		return "LOCATION_SAN_ANDREAS";
	}
	else if (unk_0x1B79E937E91F40C3("Alamo", &cVar0))
	{
		return "LOCATION_ALAMO_SEA";
	}
	else if (unk_0x1B79E937E91F40C3("Alta", &cVar0))
	{
		return "LOCATION_ALTA";
	}
	else if (unk_0x1B79E937E91F40C3("Airp", &cVar0))
	{
		return "LOCATION_LOS_SANTOS_INTERNATIONAL_AIRPORT";
	}
	else if (unk_0x1B79E937E91F40C3("ArmyB", &cVar0))
	{
		return "LOCATION_FORT_ZANCUDO";
	}
	else if (unk_0x1B79E937E91F40C3("BhamCa", &cVar0))
	{
		return "LOCATION_BANHAM_CANYON";
	}
	else if (unk_0x1B79E937E91F40C3("Banning", &cVar0))
	{
		return "LOCATION_BANNING";
	}
	else if (unk_0x1B79E937E91F40C3("Baytre", &cVar0))
	{
		return "LOCATION_BAYTREE_CANYON";
	}
	else if (unk_0x1B79E937E91F40C3("Beach", &cVar0))
	{
		return "LOCATION_VESPUCCI_BEACH";
	}
	else if (unk_0x1B79E937E91F40C3("BradT", &cVar0))
	{
		return "LOCATION_BRADDOCK_TUNNEL";
	}
	else if (unk_0x1B79E937E91F40C3("BradP", &cVar0))
	{
		return "LOCATION_BRADDOCK_PASS";
	}
	else if (unk_0x1B79E937E91F40C3("Burton", &cVar0))
	{
		return "LOCATION_BURTON";
	}
	else if (unk_0x1B79E937E91F40C3("CANNY", &cVar0))
	{
		return "LOCATION_RATON_CANYON";
	}
	else if (unk_0x1B79E937E91F40C3("CCreak", &cVar0))
	{
		return "LOCATION_CASSIDY_CREEK";
	}
	else if (unk_0x1B79E937E91F40C3("CalafB", &cVar0))
	{
		return "LOCATION_CALAFIA_BRIDGE";
	}
	else if (unk_0x1B79E937E91F40C3("ChamH", &cVar0))
	{
		return "LOCATION_CHAMBERLAIN_HILLS";
	}
	else if (unk_0x1B79E937E91F40C3("CHU", &cVar0))
	{
		return "LOCATION_CHUMASH";
	}
	else if (unk_0x1B79E937E91F40C3("CHIL", &cVar0))
	{
		return "LOCATION_VINEWOOD_HILLS";
	}
	else if (unk_0x1B79E937E91F40C3("COSI", &cVar0))
	{
		return "LOCATION_COUNTRYSIDE";
	}
	else if (unk_0x1B79E937E91F40C3("CMSW", &cVar0))
	{
		return "LOCATION_CHILIAD_MOUNTAIN_STATE_WILDERNESS";
	}
	else if (unk_0x1B79E937E91F40C3("Cypre", &cVar0))
	{
		return "LOCATION_CYPRESS_FLATS";
	}
	else if (unk_0x1B79E937E91F40C3("Davis", &cVar0))
	{
		return "LOCATION_DAVIS";
	}
	else if (unk_0x1B79E937E91F40C3("Desrt", &cVar0))
	{
		return "LOCATION_GRAND_SENORA_DESERT";
	}
	else if (unk_0x1B79E937E91F40C3("DelBe", &cVar0))
	{
		return "LOCATION_DEL_PERRO_BEACH";
	}
	else if (unk_0x1B79E937E91F40C3("DelPe", &cVar0))
	{
		return "LOCATION_DEL_PERRO";
	}
	else if (unk_0x1B79E937E91F40C3("DelSol", &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (unk_0x1B79E937E91F40C3("Downt", &cVar0))
	{
		return "LOCATION_DOWNTOWN";
	}
	else if (unk_0x1B79E937E91F40C3("DTVine", &cVar0))
	{
		return "LOCATION_DOWNTOWN_VINEWOOD";
	}
	else if (unk_0x1B79E937E91F40C3("Eclips", &cVar0))
	{
		return "LOCATION_ECLIPSE";
	}
	else if (unk_0x1B79E937E91F40C3("ELSant", &cVar0))
	{
		return "LOCATION_EAST_LOS_SANTOS";
	}
	else if (unk_0x1B79E937E91F40C3("EBuro", &cVar0))
	{
		return "LOCATION_EL_BURRO_HEIGHTS";
	}
	else if (unk_0x1B79E937E91F40C3("ELGorl", &cVar0))
	{
		return "LOCATION_EL_GORDO_LIGHTHOUSE";
	}
	else if (unk_0x1B79E937E91F40C3("Elysian", &cVar0))
	{
		return "LOCATION_ELYSIAN_ISLAND";
	}
	else if (unk_0x1B79E937E91F40C3("Galli", &cVar0))
	{
		return "LOCATION_GALILEO_PARK";
	}
	else if (unk_0x1B79E937E91F40C3("Galfish", &cVar0))
	{
		return "LOCATION_GALILEE";
	}
	else if (unk_0x1B79E937E91F40C3("Greatc", &cVar0))
	{
		return "LOCATION_GREAT_CHAPARRAL";
	}
	else if (unk_0x1B79E937E91F40C3("Golf", &cVar0))
	{
		return "LOCATION_GWC_AND_GOLFING_SOCIETY";
	}
	else if (unk_0x1B79E937E91F40C3("GrapeS", &cVar0))
	{
		return "LOCATION_GRAPESEED";
	}
	else if (unk_0x1B79E937E91F40C3("Hawick", &cVar0))
	{
		return "LOCATION_HAWICK";
	}
	else if (unk_0x1B79E937E91F40C3("Harmo", &cVar0))
	{
		return "LOCATION_HARMONY";
	}
	else if (unk_0x1B79E937E91F40C3("Heart", &cVar0))
	{
		return "LOCATION_HEART_ATTACKS_BEACH";
	}
	else if (unk_0x1B79E937E91F40C3("HumLab", &cVar0))
	{
		return "LOCATION_HUMANE_LABS_AND_RESEARCH";
	}
	else if (unk_0x1B79E937E91F40C3("HORS", &cVar0))
	{
		return "LOCATION_VINEWOOD_RACETRACK";
	}
	else if (unk_0x1B79E937E91F40C3("Koreat", &cVar0))
	{
		return "LOCATION_LITTLE_SEOUL";
	}
	else if (unk_0x1B79E937E91F40C3("Jail", &cVar0))
	{
		return "LOCATION_BOLINGBROKE_PENITENTIARY";
	}
	else if (unk_0x1B79E937E91F40C3("LAct", &cVar0))
	{
		return "LOCATION_LAND_ACT_RESERVOIR";
	}
	else if (unk_0x1B79E937E91F40C3("LDam", &cVar0))
	{
		return "LOCATION_LAND_ACT_DAM";
	}
	else if (unk_0x1B79E937E91F40C3("Lago", &cVar0))
	{
		return "LOCATION_LAGO_ZANCUDO";
	}
	else if (unk_0x1B79E937E91F40C3("LegSqu", &cVar0))
	{
		return "LOCATION_LEGION_SQUARE";
	}
	else if (unk_0x1B79E937E91F40C3("LosSF", &cVar0))
	{
		return "LOCATION_LOS_SANTOS_FREEWAY";
	}
	else if (unk_0x1B79E937E91F40C3("LMesa", &cVar0))
	{
		return "LOCATION_LA_MESA";
	}
	else if (unk_0x1B79E937E91F40C3("LosPuer", &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (unk_0x1B79E937E91F40C3("LosPFy", &cVar0))
	{
		return "LOCATION_LA_PUERTA_FWY";
	}
	else if (unk_0x1B79E937E91F40C3("Mirr", &cVar0))
	{
		return "LOCATION_MIRROR_PARK";
	}
	else if (unk_0x1B79E937E91F40C3("Morn", &cVar0))
	{
		return "LOCATION_MORNINGWOOD";
	}
	else if (unk_0x1B79E937E91F40C3("Murri", &cVar0))
	{
		return "LOCATION_MURRIETA_HEIGHTS";
	}
	else if (unk_0x1B79E937E91F40C3("MTChil", &cVar0))
	{
		return "LOCATION_MOUNT_CHILIAD";
	}
	else if (unk_0x1B79E937E91F40C3("MTJose", &cVar0))
	{
		return "LOCATION_MOUNT_JOSIAH";
	}
	else if (unk_0x1B79E937E91F40C3("MTGordo", &cVar0))
	{
		return "LOCATION_MOUNT_GORDO";
	}
	else if (unk_0x1B79E937E91F40C3("Movie", &cVar0))
	{
		return "LOCATION_RICHARDS_MAJESTIC";
	}
	else if (unk_0x1B79E937E91F40C3("NCHU", &cVar0))
	{
		return "LOCATION_NORTH_CHUMASH";
	}
	else if (unk_0x1B79E937E91F40C3("Oceana", &cVar0))
	{
		return "LOCATION_PACIFIC_OCEAN";
	}
	else if (unk_0x1B79E937E91F40C3("Observ", &cVar0))
	{
		return "LOCATION_GALILEO_OBSERVATORY";
	}
	else if (unk_0x1B79E937E91F40C3("Palmpow", &cVar0))
	{
		return "LOCATION_PALMER-TAYLOR_POWER_STATION";
	}
	else if (unk_0x1B79E937E91F40C3("PBOX", &cVar0))
	{
		return "LOCATION_PILLBOX_HILL";
	}
	else if (unk_0x1B79E937E91F40C3("PBluff", &cVar0))
	{
		return "LOCATION_PACIFIC_BLUFFS";
	}
	else if (unk_0x1B79E937E91F40C3("Paleto", &cVar0))
	{
		return "LOCATION_PALETO_BAY";
	}
	else if (unk_0x1B79E937E91F40C3("PalCov", &cVar0))
	{
		return "LOCATION_PALETO_COVE";
	}
	else if (unk_0x1B79E937E91F40C3("PalFor", &cVar0))
	{
		return "LOCATION_PALETO_FOREST";
	}
	else if (unk_0x1B79E937E91F40C3("PalHigh", &cVar0))
	{
		return "LOCATION_PALOMINO_HIGHLANDS";
	}
	else if (unk_0x1B79E937E91F40C3("ProcoB", &cVar0))
	{
		return "LOCATION_PROCOPIO_BEACH";
	}
	else if (unk_0x1B79E937E91F40C3("Prol", &cVar0))
	{
		return "LOCATION_NORTH_YANKTON";
	}
	else if (unk_0x1B79E937E91F40C3("RTRAK", &cVar0))
	{
		return "LOCATION_REDWOOD_LIGHTS_TRACK";
	}
	else if (unk_0x1B79E937E91F40C3("Rancho", &cVar0))
	{
		return "LOCATION_RANCHO";
	}
	else if (unk_0x1B79E937E91F40C3("RGLEN", &cVar0))
	{
		return "LOCATION_RICHMAN_GLEN";
	}
	else if (unk_0x1B79E937E91F40C3("Richm", &cVar0))
	{
		return "LOCATION_RICHMAN";
	}
	else if (unk_0x1B79E937E91F40C3("Rockf", &cVar0))
	{
		return "LOCATION_ROCKFORD_HILLS";
	}
	else if (unk_0x1B79E937E91F40C3("SANDY", &cVar0))
	{
		return "LOCATION_SANDY_SHORES";
	}
	else if (unk_0x1B79E937E91F40C3("TongvaH", &cVar0))
	{
		return "LOCATION_TONGVA_HILLS";
	}
	else if (unk_0x1B79E937E91F40C3("TongvaV", &cVar0))
	{
		return "LOCATION_TONGVA_VALLEY";
	}
	else if (unk_0x1B79E937E91F40C3("East_V", &cVar0))
	{
		return "LOCATION_EAST_VINEWOOD";
	}
	else if (unk_0x1B79E937E91F40C3("Zenora", &cVar0))
	{
		return "LOCATION_SENORA_FREEWAY";
	}
	else if (unk_0x1B79E937E91F40C3("Slab", &cVar0))
	{
		return "LOCATION_SLAB_CITY";
	}
	else if (unk_0x1B79E937E91F40C3("SKID", &cVar0))
	{
		return "LOCATION_MISSION_ROW";
	}
	else if (unk_0x1B79E937E91F40C3("SLSant", &cVar0))
	{
		return "LOCATION_SOUTH_LOS_SANTOS";
	}
	else if (unk_0x1B79E937E91F40C3("Stad", &cVar0))
	{
		return "LOCATION_MAZE_BANK_ARENA";
	}
	else if (unk_0x1B79E937E91F40C3("Tatamo", &cVar0))
	{
		return "LOCATION_TATAVIAM_MOUNTAINS";
	}
	else if (unk_0x1B79E937E91F40C3("Termina", &cVar0))
	{
		return "LOCATION_TERMINAL";
	}
	else if (unk_0x1B79E937E91F40C3("TEXTI", &cVar0))
	{
		return "LOCATION_TEXTILE_CITY";
	}
	else if (unk_0x1B79E937E91F40C3("WVine", &cVar0))
	{
		return "LOCATION_WEST_VINEWOOD";
	}
	else if (unk_0x1B79E937E91F40C3("UtopiaG", &cVar0))
	{
		return "LOCATION_UTOPIA_GARDENS";
	}
	else if (unk_0x1B79E937E91F40C3("Vesp", &cVar0))
	{
		return "LOCATION_VESPUCCI";
	}
	else if (unk_0x1B79E937E91F40C3("VCana", &cVar0))
	{
		return "LOCATION_VESPUCCI_CANALS";
	}
	else if (unk_0x1B79E937E91F40C3("Vine", &cVar0))
	{
		return "LOCATION_VINEWOOD";
	}
	else if (unk_0x1B79E937E91F40C3("WMirror", &cVar0))
	{
		return "LOCATION_W_MIRROR_DRIVE";
	}
	else if (unk_0x1B79E937E91F40C3("WindF", &cVar0))
	{
		return "LOCATION_RON_ALTERNATES_WIND_WARM";
	}
	else if (unk_0x1B79E937E91F40C3("Zancudo", &cVar0))
	{
		return "LOCATION_ZANCUDO_RIVER";
	}
	else if (unk_0x1B79E937E91F40C3("SanChia", &cVar0))
	{
		return "LOCATION_SAN_CHIANSKI_MOUNTAIN_RANGE";
	}
	else if (unk_0x1B79E937E91F40C3("STRAW", &cVar0))
	{
		return "LOCATION_STRAWBERRY";
	}
	else if (unk_0x1B79E937E91F40C3("zQ_UAR", &cVar0))
	{
		return "LOCATION_DAVIS_QUARTZ";
	}
	else if (unk_0x1B79E937E91F40C3("ZP_ORT", &cVar0))
	{
		return "LOCATION_PORT_OF_SOUTH_LOS_SANTOS";
	}
	return "";
}

Vector3 func_48(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	Var0 = { 0f, 0f, 0f };
	iVar5 = unk_0x6AEAF32EC173BB39(uParam0);
	if (iVar5 == 1)
	{
		iVar1 = unk_0xA143F1936B350BD0(iParam0);
		if (unk_0xD9F5E1FEFD1329E4(iVar1, 0))
		{
			Var0 = { unk_0xD1A6A821F5AC81DB(iVar1, 1) };
		}
	}
	else if (iVar5 == 2)
	{
		iVar2 = unk_0xBD545F8729E9F413(unk_0xA143F1936B350BD0(iParam0));
		if (!unk_0x4FAFF4BCB7633475(iVar2))
		{
			Var0 = { unk_0xD1A6A821F5AC81DB(iVar2, 1) };
		}
	}
	else if (iVar5 == 3)
	{
		iVar3 = unk_0x0646D07BB2D516CD(unk_0xA143F1936B350BD0(iParam0));
		if (unk_0xFC8BFE4B41177C22(iVar3))
		{
			Var0 = { unk_0xD1A6A821F5AC81DB(iVar3, 1) };
		}
	}
	else if (iVar5 == 4)
	{
		Var0 = { unk_0x3CF9D442F2C902BD(iParam0) };
	}
	else if (iVar5 == 6)
	{
		uVar4 = unk_0xFBDAF3DB03D61421(iParam0);
		if (unk_0xB0E14182FAD64944(uVar4))
		{
			Var0 = { unk_0x80C8AA1625977488(uVar4) };
		}
	}
	else if (iVar5 == 5)
	{
		Var0 = { unk_0x3CF9D442F2C902BD(iParam0) };
	}
	return Var0;
}

void func_49(int iParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(iParam0, sParam1, func_50(iParam2), 1);
}

int func_50(int iParam0)
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

int func_51(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x912159A05BE6B52E(iParam0))
		{
			func_53("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return 1;
		}
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x912159A05BE6B52E(unk_0x4A8C381C258A124D()))
		{
			func_53("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return 1;
		}
	}
	if (func_52())
	{
		func_53("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xFBA523E6F8ACE541())
		{
			func_53("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return 1;
		}
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xDC469CE2BE7CE722(func_6()))
		{
			unk_0xE6E9D3B5BEFF0EB3(func_6(), &iVar2, &iVar1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar0 = unk_0x619062CCF4C1D4D5(func_6(), iVar2);
					if (!unk_0x4FAFF4BCB7633475(iVar0))
					{
						if (unk_0x912159A05BE6B52E(iVar0))
						{
							func_53("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return 1;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0;
}

int func_52()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_53(char* sParam0)
{
	func_54(sParam0);
}

void func_54(char* sParam0)
{
	if (unk_0x1B79E937E91F40C3(uParam0, uParam0))
	{
	}
}

int func_55(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xDF7F16323520B858(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xDF7F16323520B858(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xDF7F16323520B858(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_56()
{
	func_57();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_57()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_60(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_59(unk_0x4A8C381C258A124D());
			if (func_58(iVar0) && (!func_39(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_58(Global_113969.f_2366.f_539.f_4321))
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

bool func_58(int iParam0)
{
	return iParam0 < 3;
}

int func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_60(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_60(int iParam0)
{
	if (func_58(iParam0))
	{
		return func_61(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_61(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

int func_62()
{
	if (func_63(1) == func_56())
	{
		return 1;
	}
	return 0;
}

int func_63(int iParam0)
{
	return Global_113969.f_24907[iParam0 /*4*/];
}

void func_64()
{
	if (func_227())
	{
		func_225();
		func_224();
		func_223();
		if (!func_220())
		{
			func_214();
		}
		func_213();
		if (iLocal_819 != 4)
		{
			func_45(Global_113001, &iLocal_816);
			if (iLocal_819 != 0)
			{
				if (func_211())
				{
					if (unk_0xA0C7B98BCF1EEF9E(uLocal_109))
					{
						func_188();
						iLocal_56 = 1;
					}
				}
				func_179();
			}
		}
		switch (iLocal_819)
		{
			case 0:
				if (!unk_0x4FAFF4BCB7633475(Global_113001) && unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
				{
					if (unk_0xF4244288C3EF3306(Global_113001, Global_113000))
					{
						if (!unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_enter", 3) && !unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_idle", 3))
						{
							if (!func_2(Global_113001, joaat("script_task_vehicle_temp_action")))
							{
								unk_0xFCCE667AD0E974AD(Global_113001, Global_113000, 1, 1000000);
							}
						}
					}
				}
				if (func_178())
				{
					if (func_177() && !unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()))
					{
						func_188();
						iLocal_816 = 1;
						iLocal_818 = 0;
						Global_113037 = 0;
						iLocal_86 = 0;
						iLocal_64 = 0;
						iLocal_54 = 0;
						iLocal_56 = 1;
						func_176();
						iLocal_819 = 1;
					}
				}
				break;
			
			case 1:
				if (!unk_0x4FAFF4BCB7633475(Global_113001) && unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
				{
					if (unk_0xF4244288C3EF3306(Global_113001, Global_113000))
					{
						if (!unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_enter", 3) && !unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_idle", 3))
						{
							if (!func_2(Global_113001, joaat("script_task_vehicle_temp_action")))
							{
								unk_0xFCCE667AD0E974AD(Global_113001, Global_113000, 1, 1000000);
							}
						}
					}
				}
				func_175(&Global_113000, iLocal_837);
				if (func_174())
				{
					unk_0x3CAC0DB32E69B1B8(joaat("sp_number_of_taxis_used"), 1f);
					iLocal_56 = 1;
					iLocal_819 = 2;
				}
				break;
			
			case 2:
				if (func_174())
				{
					func_171();
				}
				break;
			
			case 3:
				func_170();
				break;
			
			case 4:
				func_80();
				break;
		}
		func_65();
	}
	else
	{
		iLocal_820 = 2;
	}
}

void func_65()
{
	char* sVar0;
	
	if (!func_220())
	{
		if (unk_0xA0C7B98BCF1EEF9E(uLocal_110))
		{
			if (iLocal_819 != 0)
			{
				sVar0 = unk_0xE934399D6F2C3AC5(2, 218, 1);
				if (!unk_0x1B79E937E91F40C3(sLocal_105, sVar0))
				{
					sLocal_105 = sVar0;
					iLocal_56 = 1;
				}
				if (iLocal_56)
				{
					Local_812 = { func_79() };
					func_77(&uLocal_111);
					func_76(0, 75, "TXM_EXIT", &uLocal_111, 0, 365);
					if (iLocal_89 > 1)
					{
						func_76(2, 218, "TXM_CDES", &uLocal_111, 0, 365);
					}
					if (!bLocal_58)
					{
						if (iLocal_89 > 0)
						{
							func_76(2, 176, "TXM_SLCT", &uLocal_111, 0, 365);
						}
					}
					else if (iLocal_819 == 2)
					{
						func_76(2, 177, "TXM_STOP", &uLocal_111, 0, 365);
						if (bLocal_57)
						{
							func_76(2, 176, "TXM_SLCT", &uLocal_111, 0, 365);
						}
						if (func_75())
						{
							func_76(2, 176, "TXM_SKIP", &uLocal_111, 0, 365);
						}
						if (!bLocal_62)
						{
							func_76(2, 179, "TXM_HURY", &uLocal_111, 0, 365);
						}
					}
					else if (iLocal_819 == 3)
					{
						func_76(2, 177, "TXM_STRT", &uLocal_111, 0, 365);
						if (bLocal_57)
						{
							func_76(2, 176, "TXM_SLCT", &uLocal_111, 0, 365);
						}
					}
					iLocal_56 = 0;
				}
				unk_0x61055542D9D877AE(unk_0xB803C9D209A7C3DC());
				unk_0xA66AC5949E305457(0);
				func_74(1);
				func_73(1);
				func_66(&uLocal_110, &Local_812, &uLocal_111, func_72(&uLocal_111));
			}
		}
		else
		{
			uLocal_110 = unk_0x8DE4F68A9728925E("instructional_buttons");
		}
	}
	else
	{
		unk_0xD314260005F064BF(&uLocal_110);
		iLocal_56 = 1;
	}
}

void func_66(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x7811C74D5B749F76(2))
	{
		*uParam2 = 0;
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(0);
				unk_0xE6B753D52F4CA222();
			}
			unk_0x88F483FBD433696A(*uParam0, "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
		}
		func_71(uParam2);
	}
	if (Global_1577937 < 2)
	{
		func_73(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			*uParam0 = unk_0x8DE4F68A9728925E("instructional_buttons");
		}
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			unk_0xB750FE3C9F094356(*uParam0, "CLEAR_ALL");
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(1);
				unk_0xE6B753D52F4CA222();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_70(unk_0xE934399D6F2C3AC5(iVar1, iVar2, 1));
						if (iVar3 < 365)
						{
							func_70(unk_0xE934399D6F2C3AC5(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						uVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_70(unk_0xF761D79754BC3043(uVar4, uVar5, 1));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0xBD34A69071611974(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xCFAD3D478C87321A();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x60D332F23943B34F(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						func_69(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x761778199FE1211C())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							unk_0x557F1E2300EF1A3E(1);
							unk_0x330108B080A2132F(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							unk_0x557F1E2300EF1A3E(0);
							unk_0x330108B080A2132F(365);
						}
					}
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(bVar0);
					func_70(&(uParam2->f_1[bVar0 /*57*/]));
					if (!unk_0xD6F9DEE4765092A9(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_70(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0xBD34A69071611974(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xCFAD3D478C87321A();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x60D332F23943B34F(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						func_69(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x761778199FE1211C())
					{
						unk_0x557F1E2300EF1A3E(0);
						unk_0x330108B080A2132F(365);
					}
					unk_0xE6B753D52F4CA222();
				}
				bVar0++;
			}
			unk_0x88F483FBD433696A(*uParam0, "SET_MAX_WIDTH");
			unk_0x74BF156C860580D4(uParam2->f_699);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x330108B080A2132F(false);
			unk_0xE6B753D52F4CA222();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0,05f;
	uParam2->f_696 = 0,045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1 && unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		func_68(*uParam0, uParam1);
	}
	func_67();
}

void func_67()
{
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(8);
	unk_0x4EB223432F8FA0A0(9);
}

void func_68(var uParam0, var uParam1)
{
	unk_0xA91A4C18A2DB01BD(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_69(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_70(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

void func_71(var uParam0)
{
	Global_1979636 = 0;
	uParam0->f_692 = 0;
}

int func_72(var uParam0)
{
	return (Global_1979636 || uParam0->f_692);
}

void func_73(int iParam0)
{
	Global_1577937 = iParam0;
}

void func_74(int iParam0)
{
	Global_1670224.f_1163 = iParam0;
}

int func_75()
{
	if (iLocal_819 != 2)
	{
		return 0;
	}
	if (bLocal_57)
	{
		return 0;
	}
	if (fLocal_81 < 50f)
	{
		return 0;
	}
	if (unk_0x78411E34CF90EA8C(uLocal_66))
	{
		if (unk_0xBC886554B5888A64(uLocal_66))
		{
			return 0;
		}
	}
	return 1;
}

void func_76(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	uParam3->f_1[iVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_691), iVar0);
		if (iParam5 < 365)
		{
		}
	}
	uParam3->f_693++;
}

void func_77(var uParam0)
{
	func_78(uParam0);
	uParam0->f_692 = 1;
}

void func_78(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 365;
		uParam0->f_1[iVar0 /*57*/].f_56 = 365;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
	Global_1979636 = 0;
}

struct<9> func_79()
{
	struct<9> Var0;
	
	Var0.f_0 = 0,5f;
	Var0.f_1 = 0,5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_80()
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	fVar2 = 1f;
	unk_0xD4510218399ED105(0);
	unk_0xD4510218399ED105(1);
	unk_0xD4510218399ED105(2);
	switch (iLocal_821)
	{
		case 0:
			func_162(1);
			if (func_161(iLocal_87, 500))
			{
				unk_0x8F72AF14CE5AACE4(250);
				unk_0xCAC4020CCF361AC8("FADE_OUT_WORLD_250MS_SCENE");
				iLocal_821 = 1;
			}
			break;
		
		case 1:
			if (unk_0x15CCE8886267624F() && unk_0xBC2EE32DE886BD08("FADE_OUT_WORLD_250MS_SCENE"))
			{
				if (unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
				{
					unk_0x4DC72C4B884A6C59(Global_113000, 0);
				}
				unk_0x406CBCEA35499884();
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				if (unk_0xC13AFEAFC3F7AD96("taxi"))
				{
					unk_0xF8211BE23F0D0552("taxi");
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_107))
				{
					unk_0x51C8BEA2005931AB(&iLocal_107);
					unk_0x55098D9E9AD58806(iLocal_106);
				}
				if (unk_0xBC886554B5888A64(uLocal_66))
				{
					unk_0x2F30818D75D66C5B(0);
					Global_113017 = 0;
					unk_0x4CBC5D1BC117616B(uLocal_66, 0);
					unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
					unk_0x33311EBA9464741D();
					unk_0xF3E3EA936C653F22();
					unk_0x4D2F1CB87CBF249D(0);
				}
				func_159(iLocal_837);
				iLocal_87 = unk_0x1DD05E817C89C737();
				if (bLocal_57)
				{
					bLocal_59 = false;
					bLocal_57 = false;
					Local_41 = { Local_817[iLocal_90 /*3*/] };
				}
				if (!bLocal_59)
				{
					iLocal_86 = 0;
					iLocal_818 = 0;
					iLocal_821 = 2;
				}
				else
				{
					func_158();
					iLocal_821 = 3;
				}
			}
			else
			{
				unk_0xCAC4020CCF361AC8("FADE_OUT_WORLD_250MS_SCENE");
			}
			break;
		
		case 2:
			if (func_125(&Local_41, &Global_113007, &Global_113013))
			{
				func_158();
				iLocal_821 = 3;
			}
			break;
		
		case 3:
			if (Global_79405 == -1)
			{
				func_124();
				func_123();
				func_121();
				func_117();
				func_116();
				unk_0x2094BC4B6731BA68(Global_113007, 5f, 1, 0, 0, 0);
				func_112(1097859072);
				if (!unk_0x4FAFF4BCB7633475(Global_113001) && unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
				{
					unk_0xB2BD5837A8D3CEDA(Global_113000, Global_113007, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(Global_113000, Global_113013);
					unk_0x5D7CD709B34C90F0(Global_113000, 1);
				}
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(0f, 1065353216);
				unk_0x6981C3213B841071();
				unk_0x2094BC4B6731BA68(Global_113007, 5000f, 1, 0, 0, 0);
				unk_0xBAAB54D57B40765E(Global_113007, 5000f, 0);
				unk_0xEC73DFE5CE55E19C(Global_113007, 30f, 0);
				unk_0xA69DCC67B2B61AD1(Global_113007, 5000f);
				unk_0x5926A824AF54BCC3(Global_113007, 5000f);
				if (Global_98435 != -1)
				{
					func_111(Global_98435, 1);
					func_110(Global_98435);
				}
				iLocal_813 = func_109(Local_41.f_0);
				if (iLocal_813 != -1)
				{
					func_111(iLocal_813, 1);
				}
				iLocal_55 = 0;
				iLocal_821 = 4;
			}
			break;
		
		case 4:
			if (unk_0x4A3280817398D754(Global_113007, 4500f, 0))
			{
				iLocal_55 = 1;
				iLocal_821 = 5;
			}
			else if (func_161(iLocal_87, 2500))
			{
				iLocal_821 = 5;
			}
			break;
		
		case 5:
			if (unk_0x787F8EE1F6FBDC6D())
			{
				if (unk_0x9E2D35FA908F57B4())
				{
					if (iLocal_813 != -1)
					{
						unk_0x6981C3213B841071();
						iLocal_55 = 0;
						func_107(iLocal_813);
						func_111(iLocal_813, 0);
					}
					iLocal_821 = 6;
				}
				else if (func_161(iLocal_87, 20000))
				{
					if (iLocal_813 != -1)
					{
						unk_0x6981C3213B841071();
						iLocal_55 = 0;
						func_107(iLocal_813);
						func_111(iLocal_813, 0);
					}
					iLocal_821 = 6;
				}
			}
			else
			{
				if (iLocal_813 != -1)
				{
					func_107(iLocal_813);
					func_111(iLocal_813, 0);
				}
				iLocal_55 = 0;
				iLocal_821 = 6;
			}
			break;
		
		case 6:
			func_106();
			unk_0x337117D37E592B05();
			unk_0x6874AA782954505E();
			unk_0x1BBEB35757ED1961();
			if (iLocal_813 != -1)
			{
				bVar1 = true;
				if (Global_92301[iLocal_813 /*34*/].f_13 == -1 && Global_92301[iLocal_813 /*34*/].f_14 == -1)
				{
					bVar1 = false;
				}
				if (bVar1)
				{
					if (((func_56() == 0 && !BitTest(Global_92301[iLocal_813 /*34*/].f_15, 8)) || (func_56() == 1 && !BitTest(Global_92301[iLocal_813 /*34*/].f_15, 9))) || (func_56() == 2 && !BitTest(Global_92301[iLocal_813 /*34*/].f_15, 10)))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (func_104(Global_92301[iLocal_813 /*34*/].f_13, Global_92301[iLocal_813 /*34*/].f_14))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					unk_0x77A5275126602303(Global_92301[iLocal_813 /*34*/].f_13, 0, 0);
				}
			}
			iLocal_103 = func_97(1129381888, 1);
			iLocal_821 = 7;
			break;
		
		case 7:
			bVar0 = true;
			if (func_96(iLocal_103))
			{
				bVar0 = false;
			}
			if (!func_86(Global_113007))
			{
				bVar0 = false;
			}
			if (!func_85())
			{
				bVar0 = false;
			}
			if (!unk_0xEA02634993F717CE())
			{
				bVar0 = false;
			}
			if (iLocal_55)
			{
				if (unk_0x787F8EE1F6FBDC6D())
				{
					if (!unk_0x9E2D35FA908F57B4())
					{
						bVar0 = false;
					}
				}
			}
			if (iLocal_813 != -1 && Global_98440)
			{
				bVar0 = false;
			}
			if (func_161(iLocal_87, 29500))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (iLocal_55)
				{
					if (unk_0x787F8EE1F6FBDC6D())
					{
						unk_0x6981C3213B841071();
					}
					iLocal_55 = 0;
				}
				if (iLocal_65)
				{
					iLocal_65 = 0;
					unk_0xB1EAADCB692D69CE(Global_113007 + Vector(100f, 0f, 0f), &fVar2, 0, 0);
					if (fVar2 > Global_113007.f_2)
					{
						Global_113007.f_2 = (fVar2 + 0,5f);
					}
				}
				func_112(12f);
				func_82();
				if (!unk_0x4FAFF4BCB7633475(Global_113001) && unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
				{
					unk_0x5D7CD709B34C90F0(Global_113000, 0);
					unk_0x5C96CEA06531AB03(Global_113000, Global_113013);
					unk_0xB2BD5837A8D3CEDA(Global_113000, Global_113007, 1, 0, 0, 1);
					unk_0x1DE99C193C7EC64B(Global_113000, 1084227584);
					unk_0xFCCE667AD0E974AD(Global_113001, Global_113000, 24, 5000);
				}
				iLocal_87 = unk_0x1DD05E817C89C737();
				iLocal_821 = 8;
			}
			break;
		
		case 8:
			if (func_161(iLocal_87, 500))
			{
				if (unk_0xBC2EE32DE886BD08("FADE_OUT_WORLD_250MS_SCENE"))
				{
					unk_0xB43467C43086A6A1("FADE_OUT_WORLD_250MS_SCENE");
				}
				if (unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
				{
					unk_0x4DC72C4B884A6C59(Global_113000, 1);
				}
				if (!func_81())
				{
					unk_0x10B228D2FDB7AF16(250);
				}
				iLocal_821 = 9;
			}
			break;
		
		case 9:
			if (unk_0x9390801B06EE998F() || func_81())
			{
				if (((!Global_98441 && iLocal_813 != -1) && iLocal_813 != 72) && iLocal_813 != 87)
				{
					func_110(iLocal_813);
				}
				func_162(0);
				if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Global_113000, 1))
					{
						unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
					}
				}
				unk_0xFCCE667AD0E974AD(Global_113001, Global_113000, 24, 5000);
				unk_0x44FB298D6382876D(Global_113001, 1);
				bLocal_63 = true;
				iLocal_820 = 2;
				iLocal_821 = 10;
			}
			break;
		
		case 10:
			break;
	}
}

bool func_81()
{
	return BitTest(Global_101533.f_20, 13);
}

void func_82()
{
	struct<3> Var0;
	float fVar1;
	
	switch (iLocal_814)
	{
		case 92:
			Var0 = { func_84(229, 0) };
			fVar1 = unk_0xED977E2AE2CB16EE(Global_113007, Var0, 1);
			if (fVar1 < 100f)
			{
				Var0 = { func_83(Global_113007 - Var0) };
				Var0 = { (Global_113007 + (Var0.f_0 * IntToFloat((100 - system::round(fVar1))))), (Global_113007.f_1 + (Var0.f_1 * IntToFloat((100 - system::round(fVar1))))), Global_113007.f_2 };
				unk_0x813ADF2A2A03F440(Var0, &Global_113007, &Global_113013, 1, 1077936128, 0);
				unk_0xB2BD5837A8D3CEDA(Global_113000, Global_113007, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(Global_113000, Global_113013);
			}
			break;
	}
}

Vector3 func_83(struct<3> Param0)
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

Vector3 func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_33328[iVar0 /*23*/][iParam1 /*3*/];
}

bool func_85()
{
	return !Global_78179.f_553;
}

int func_86(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = func_94(Param0);
	if (!func_93(&uLocal_48))
	{
		iLocal_47 = 0;
		func_91(&uLocal_48, 0f);
	}
	if (iVar0 == iLocal_47 || func_88(&uLocal_48) > 8f)
	{
		func_87(&uLocal_48);
		iLocal_47 = 0;
		return 1;
	}
	return 0;
}

void func_87(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_88(var uParam0)
{
	if (func_93(uParam0))
	{
		if (func_90(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_89(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_89(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = system::to_float(unk_0x1DD05E817C89C737());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		iVar2 = unk_0x7E3F74F641EE6B27();
		fVar3 = system::to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (system::to_float(unk_0x1DD05E817C89C737()) / 1000f);
}

bool func_90(var uParam0)
{
	return BitTest(*uParam0, 2);
}

void func_91(var uParam0, float fParam1)
{
	if (!func_93(uParam0))
	{
		func_92(uParam0, fParam1);
	}
}

void func_92(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_89(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_93(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_94(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	if (func_95(0, 4))
	{
		iVar1 = 70;
		while (iVar1 <= 72)
		{
			fVar2 = system::vdist2(func_84(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_95(0, 0))
	{
		iVar1 = 125;
		while (iVar1 <= 137)
		{
			fVar2 = system::vdist2(func_84(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_95(0, 10))
	{
		iVar1 = 125;
		fVar2 = system::vdist2(func_84(iVar1, 0), Param0);
		if (fVar2 <= 1225f)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	iVar0 = BitTest(Global_113969.f_9088.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

int func_96(int iParam0)
{
	if (iParam0 != -1)
	{
		if (!Global_113056[iParam0 /*10*/].f_1)
		{
			return 1;
		}
	}
	return 0;
}

int func_97(int iParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = iParam0;
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (func_58(func_56()))
		{
			iVar5 = func_103();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113969.f_18577[iVar1 /*6*/], 2) && !BitTest(Global_113969.f_18577[iVar1 /*6*/], 3))
				{
					func_98(iVar1, &Var0);
					fVar4 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var0.f_6, 1);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
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

void func_98(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_99(uParam1, "Abigail1", func_101(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 1:
			func_99(uParam1, "Abigail2", func_101(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 2:
			func_99(uParam1, "Barry1", func_101(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 3:
			func_99(uParam1, "Barry2", func_101(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
		
		case 4:
			func_99(uParam1, "Barry3", func_101(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 5:
			func_99(uParam1, "Barry3A", func_101(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 6:
			func_99(uParam1, "Barry3C", func_101(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 7:
			func_99(uParam1, "Barry4", func_101(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_100(iParam0), 0, 0);
			break;
		
		case 8:
			func_99(uParam1, "Dreyfuss1", func_101(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 9:
			func_99(uParam1, "Epsilon1", func_101(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 10:
			func_99(uParam1, "Epsilon2", func_101(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 11:
			func_99(uParam1, "Epsilon3", func_101(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 12:
			func_99(uParam1, "Epsilon4", func_101(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 13:
			func_99(uParam1, "Epsilon5", func_101(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 14:
			func_99(uParam1, "Epsilon6", func_101(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 15:
			func_99(uParam1, "Epsilon7", func_101(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 16:
			func_99(uParam1, "Epsilon8", func_101(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 17:
			func_99(uParam1, "Extreme1", func_101(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 18:
			func_99(uParam1, "Extreme2", func_101(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 19:
			func_99(uParam1, "Extreme3", func_101(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 20:
			func_99(uParam1, "Extreme4", func_101(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 21:
			func_99(uParam1, "Fanatic1", func_101(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_100(iParam0), 1, 0);
			break;
		
		case 22:
			func_99(uParam1, "Fanatic2", func_101(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_100(iParam0), 1, 0);
			break;
		
		case 23:
			func_99(uParam1, "Fanatic3", func_101(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_100(iParam0), 0, 1);
			break;
		
		case 24:
			func_99(uParam1, "Hao1", func_101(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_100(iParam0), 0, 1);
			break;
		
		case 25:
			func_99(uParam1, "Hunting1", func_101(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 26:
			func_99(uParam1, "Hunting2", func_101(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 27:
			func_99(uParam1, "Josh1", func_101(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 28:
			func_99(uParam1, "Josh2", func_101(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
		
		case 29:
			func_99(uParam1, "Josh3", func_101(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
		
		case 30:
			func_99(uParam1, "Josh4", func_101(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 31:
			func_99(uParam1, "Maude1", func_101(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 32:
			func_99(uParam1, "Minute1", func_101(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 33:
			func_99(uParam1, "Minute2", func_101(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 34:
			func_99(uParam1, "Minute3", func_101(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 35:
			func_99(uParam1, "MrsPhilips1", func_101(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 36:
			func_99(uParam1, "MrsPhilips2", func_101(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 37:
			func_99(uParam1, "Nigel1", func_101(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 38:
			func_99(uParam1, "Nigel1A", func_101(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
		
		case 39:
			func_99(uParam1, "Nigel1B", func_101(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_100(iParam0), 1, 1);
			break;
		
		case 40:
			func_99(uParam1, "Nigel1C", func_101(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_100(iParam0), 1, 1);
			break;
		
		case 41:
			func_99(uParam1, "Nigel1D", func_101(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_100(iParam0), 1, 1);
			break;
		
		case 42:
			func_99(uParam1, "Nigel2", func_101(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
		
		case 43:
			func_99(uParam1, "Nigel3", func_101(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
		
		case 44:
			func_99(uParam1, "Omega1", func_101(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 45:
			func_99(uParam1, "Omega2", func_101(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 46:
			func_99(uParam1, "Paparazzo1", func_101(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 47:
			func_99(uParam1, "Paparazzo2", func_101(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 48:
			func_99(uParam1, "Paparazzo3", func_101(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 49:
			func_99(uParam1, "Paparazzo3A", func_101(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 50:
			func_99(uParam1, "Paparazzo3B", func_101(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 51:
			func_99(uParam1, "Paparazzo4", func_101(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 52:
			func_99(uParam1, "Rampage1", func_101(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 54:
			func_99(uParam1, "Rampage3", func_101(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 55:
			func_99(uParam1, "Rampage4", func_101(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 56:
			func_99(uParam1, "Rampage5", func_101(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_100(iParam0), 0, 0);
			break;
		
		case 53:
			func_99(uParam1, "Rampage2", func_101(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
		
		case 57:
			func_99(uParam1, "TheLastOne", func_101(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 58:
			func_99(uParam1, "Tonya1", func_101(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 59:
			func_99(uParam1, "Tonya2", func_101(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 60:
			func_99(uParam1, "Tonya3", func_101(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 61:
			func_99(uParam1, "Tonya4", func_101(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		case 62:
			func_99(uParam1, "Tonya5", func_101(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_99(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_100(int iParam0)
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

struct<2> func_101(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_102(iParam0) };
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

struct<2> func_102(int iParam0)
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

int func_103()
{
	func_57();
	switch (Global_113969.f_2366.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

bool func_104(int iParam0, int iParam1)
{
	return func_105(unk_0x5295501D0862870D(), iParam0, iParam1);
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_106()
{
	Global_78179.f_553 = 1;
	Global_78179.f_554 = 0;
}

void func_107(int iParam0)
{
	if (func_108(iParam0))
	{
		Global_98436 = iParam0;
		Global_98440 = 1;
		return;
	}
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 67:
		case 90:
		case 0:
		case 31:
		case 27:
		case 28:
		case 50:
		case 51:
		case 52:
		case 53:
		case 56:
		case 57:
			return 0;
			break;
	}
	return 1;
}

int func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_98446[iVar0 /*17*/])
		{
			if (Global_98446[iVar0 /*17*/].f_9 != 263)
			{
				if (Global_33328[Global_98446[iVar0 /*17*/].f_9 /*23*/].f_19 == iParam0)
				{
					return Global_98446[iVar0 /*17*/].f_5;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_110(int iParam0)
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

void func_111(int iParam0, bool bParam1)
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

void func_112(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	
	if (!(((((((func_115(89) || func_115(88)) || func_115(92)) || func_115(33)) || func_114() == 89) || func_114() == 88) || func_114() == 92) || func_114() == 33))
	{
		return;
	}
	iVar0 = 0;
	bVar1 = false;
	iVar2 = 1;
	Var3 = { Global_113007 };
	while (!bVar1 && iVar2 < 10)
	{
		bVar1 = true;
		if (func_113(&iVar0, Var3, iParam0))
		{
			bVar1 = false;
			if (unk_0x8B777C12D64DF209(Global_113007, iVar2, &Var3, 1, 1077936128, 0))
			{
				iVar2++;
			}
		}
	}
	if (system::vdist2(Var3, Global_113007) > 2f)
	{
		unk_0xC0EEE6A2207F3CB8(Var3, 0, &Global_113007, 0);
	}
}

int func_113(int iParam0, struct<3> Param1, var uParam2)
{
	int iVar0[5];
	int iVar1;
	
	iVar0[0] = joaat("crusader");
	iVar0[1] = joaat("barracks");
	iVar0[2] = joaat("trash");
	iVar0[3] = joaat("boxville3");
	iVar0[4] = joaat("fbi2");
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		*iParam0 = unk_0xF0CA45A211FFDCD9(Param1, uParam2, iVar0[iVar1], 67590);
		if (*iParam0 != 0)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_114()
{
	return Global_79652;
}

int func_115(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_95498[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_92265)
	{
		if (Global_92265[iVar0 /*5*/] != -1)
		{
			if (Global_79660.f_109[Global_92265[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_116()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_76261)
	{
		switch (Global_64391[Global_76262[iVar0 /*9*/] /*13*/])
		{
			case 1:
				Global_76262[iVar0 /*9*/].f_3 = 3;
				break;
			
			case 4:
				if (Global_64174)
				{
					Global_76262[iVar0 /*9*/].f_3 = 3;
				}
				break;
		}
		iVar0++;
	}
}

void func_117()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = 0;
	if (iVar1 == 0)
	{
		if (iVar2 == 0)
		{
		}
	}
	fVar0 = func_120(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Global_113007);
	if (bLocal_62)
	{
		iVar1 = system::floor(((fVar0 / 200f) / 60f));
		iVar2 = system::round(((fVar0 / 200f) - (60f * system::to_float(iVar1))));
	}
	else
	{
		iVar1 = system::floor(((fVar0 / 100f) / 60f));
		iVar2 = system::round(((fVar0 / 100f) - (60f * system::to_float(iVar1))));
	}
	unk_0x2C9A2F8762B95F5C(iVar1, iVar2, 0);
	func_118((system::to_float((iVar1 * 60 + iVar2)) / 60f));
}

void func_118(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_93(&(Global_113969.f_18106.f_175[iVar0 /*19*/].f_5)))
		{
			func_119(&(Global_113969.f_18106.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_93(&(Global_113969.f_18106.f_362[iVar1 /*3*/])))
		{
			func_119(&(Global_113969.f_18106.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0xDB57B7ED2C49BEAD();
}

void func_119(var uParam0, float fParam1)
{
	if (func_93(uParam0))
	{
		func_92(uParam0, (func_88(uParam0) + fParam1));
	}
}

float func_120(struct<3> Param0, struct<3> Param1)
{
	return (system::vmag(Param1 - Param0) * 1,3f);
}

void func_121()
{
	float fVar0;
	int iVar1;
	
	fVar0 = (((func_120(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Global_113007) / 50f) * fLocal_71) * 2,4f);
	iVar1 = (system::floor(fLocal_80) + system::round(fVar0));
	fVar0 = system::to_float(iVar1);
	fVar0 = (fVar0 * 1,33f);
	iVar1 = system::round(fVar0);
	iLocal_99 = (iLocal_99 + iVar1);
	fLocal_80 = (fLocal_80 + IntToFloat(iLocal_99));
	func_122();
}

void func_122()
{
	iLocal_101 = (iLocal_101 + system::round((unk_0x0B852B0BF94A8DC1() * 1000f)));
	if (iLocal_101 > 5000)
	{
		fLocal_80 = (fLocal_80 + fLocal_71);
		iLocal_101 = 0;
	}
	if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Local_831, 0) > 50f)
	{
		fLocal_80 = (fLocal_80 + fLocal_71);
		iLocal_101 = 0;
		Local_831 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
	}
	iLocal_99 = system::ceil(fLocal_80);
	if (iLocal_99 != iLocal_100)
	{
		unk_0x88F483FBD433696A(uLocal_109, "SET_TAXI_PRICE");
		unk_0x330108B080A2132F(iLocal_99);
		unk_0xE6B753D52F4CA222();
		fLocal_81 = system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Global_113007);
		iLocal_100 = bLocal_99;
	}
}

void func_123()
{
	int iVar0;
	float fVar1;
	
	switch (iLocal_69)
	{
		case 0:
			iVar0 = joaat("sp0_dist_as_passenger_taxi");
			break;
		
		case 1:
			iVar0 = joaat("sp1_dist_as_passenger_taxi");
			break;
		
		case 2:
			iVar0 = joaat("sp2_dist_as_passenger_taxi");
			break;
		
		default:
			if (!func_39(14))
			{
			}
			break;
	}
	if (!func_39(14))
	{
		fVar1 = unk_0x1287CC087A5CE000(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Global_113007);
		unk_0x3CAC0DB32E69B1B8(iVar0, fVar1);
	}
}

void func_124()
{
	unk_0x6981C3213B841071();
	if (unk_0x5561E31B168FA823(Global_112676.f_218))
	{
		unk_0x6C730FCE8A68AF6F(Global_112676.f_218);
	}
}

int func_125(int iParam0, var uParam1, var uParam2)
{
	struct<3> Var0;
	
	if (unk_0xC450B06E5AAA0985(*iParam0))
	{
		switch (iLocal_818)
		{
			case 0:
				iLocal_108 = 3;
				Local_827 = { func_48(*iParam0) };
				if (unk_0xC450B06E5AAA0985(Global_113005) && *iParam0 == Global_113005)
				{
					*uParam1 = { Global_113010 };
					*uParam2 = Global_113014;
					Var0 = { Local_827 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_70 = system::vmag(Var0);
					iLocal_108 = 7;
					iLocal_818 = 4;
					return 1;
				}
				else
				{
					if (func_145(Local_827, uParam1, uParam2))
					{
						Var0 = { Local_827 - *uParam1 };
						Var0.f_2 = 0f;
						fLocal_70 = system::vmag(Var0);
						iLocal_108 = 7;
						iLocal_818 = 4;
						return 1;
					}
					iLocal_818 = 1;
					return 0;
				}
				break;
			
			case 1:
				if (func_134(Local_827, uParam1, uParam2, 1))
				{
					Var0 = { Local_827 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_70 = system::vmag(Var0);
					iLocal_108 = 7;
					iLocal_818 = 4;
					return 1;
				}
				else
				{
					iLocal_86 = 0;
					iLocal_818 = 2;
					return 0;
				}
				break;
			
			case 2:
				if (unk_0xFC8BFE4B41177C22(Global_113000))
				{
					if (func_126(&Global_113000, unk_0xD1A6A821F5AC81DB(Global_113000, 0), Local_827, uParam1, uParam2, &iLocal_86, iParam0, 1000))
					{
						iLocal_818 = 3;
						return 0;
					}
					else
					{
						return 0;
					}
				}
				break;
			
			case 3:
				if (func_145(*uParam1, uParam1, uParam2))
				{
					Var0 = { Local_827 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_70 = system::vmag(Var0);
					iLocal_108 = 7;
				}
				iLocal_818 = 4;
				return 1;
				break;
			
			case 4:
				return 1;
				break;
			
			case 5:
				break;
		}
	}
	return 0;
}

int func_126(var uParam0, struct<3> Param1, struct<3> Param2, var uParam3, var uParam4, int iParam5, var uParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	
	fVar0 = 3f;
	fVar1 = 2,5f;
	iVar5 = 0;
	bVar13 = false;
	iVar14 = 1;
	if (!func_133(Param2))
	{
		iVar14 = 9;
	}
	iVar15 = 1;
	iVar18 = *iParam5 + 2;
	iVar19 = 50;
	func_131(Param1, Param2, &Local_828, &Local_829, iParam7);
	if (func_130(Local_828, Local_829))
	{
		while (!bVar13 && *iParam5 < iVar18)
		{
			if (Param2.f_2 == 1f)
			{
				fVar0 = 0f;
			}
			if (unk_0x6009FBA2EAAA60BE(Param2, *iParam5, uParam3, uParam4, &iVar6, iVar14, fVar0, fVar1))
			{
				uVar12 = unk_0x97C50CC028477E0D(*uParam3, 1, iVar14, 1077936128, 0);
				if (unk_0x2EE1ADDFD32F7C35(uVar12))
				{
					if (unk_0x748728E3BFD8E371(*uParam3, 1f, 1, &uVar4, &uVar3, &iVar8, &iVar7, &fVar10, iVar15))
					{
						if (*uParam4 < 90f || *uParam4 >= 270f)
						{
							bVar17 = true;
						}
						else
						{
							bVar17 = false;
						}
						bVar16 = false;
						if (bVar17)
						{
							if (iVar6 == iVar8)
							{
								bVar16 = true;
							}
						}
						else if (iVar6 == iVar7)
						{
							bVar16 = true;
						}
						if (fVar10 < 0f)
						{
							fVar9 = 0f;
						}
						else if (unk_0xD2507ABB3A05C571(uVar12) || !unk_0x8D4953B2FFED058B(uVar12))
						{
							fVar9 = 0f;
						}
						else
						{
							if (bVar17)
							{
								if (bVar16)
								{
									fVar9 = (4,2f * (system::to_float(iVar8) * 0,5f));
								}
								else
								{
									fVar9 = (4,2f * system::to_float(iVar8));
								}
								if (bVar16)
								{
									if (iVar8 > 2)
									{
										fVar9 = (fVar9 + (IntToFloat((iVar8 - 2)) * 1f));
									}
								}
								else if (iVar8 > 1)
								{
									fVar9 = (fVar9 + (IntToFloat((iVar8 - 1)) * 1f));
								}
							}
							else
							{
								if (bVar16)
								{
									fVar9 = (4,2f * (system::to_float(iVar7) * 0,5f));
								}
								else
								{
									fVar9 = (4,2f * system::to_float(iVar7));
								}
								if (bVar16)
								{
									if (iVar7 > 2)
									{
										fVar9 = (fVar9 + (IntToFloat((iVar7 - 2)) * 1f));
									}
								}
								else if (iVar7 > 1)
								{
									fVar9 = (fVar9 + (IntToFloat((iVar7 - 1)) * 1f));
								}
							}
							if (unk_0x99FBD9356770254E(*uParam3, &uVar21, &uVar20))
							{
								if (!uVar20 & 64 == 0)
								{
									fVar9 = (fVar9 + (0,9f * fVar10));
								}
								if (!uVar20 & 4 == 0)
								{
									fVar9 = (fVar9 + -0,7f);
								}
							}
						}
						fVar11 = (Param2.f_2 - uParam3->f_2);
						if (fVar11 < 0f)
						{
							fVar11 = (fVar11 * -1f);
						}
						if ((func_129(Param2, *uParam3) || fVar11 < 0,5f) || func_127(uParam6))
						{
							*uParam3 = { unk_0xF10F2A2453AF1DFB(*uParam3, *uParam4, fVar9, 0f, 0f) };
							if (unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
							{
								iVar5 = *uParam0;
							}
							if (!unk_0xD7813C7A74CA9AF9(*uParam3, 3f, 3f, 3f, iVar5))
							{
								if (func_134(*uParam3, uParam3, uParam4, 1))
								{
								}
								bVar13 = true;
							}
						}
					}
				}
			}
			*iParam5++;
			if (*iParam5 >= iVar19)
			{
				*uParam3 = { Param2 };
				if (uParam3->f_2 == 1f)
				{
					fVar11 = 1f;
					fVar11 = unk_0x05DB7284C236A9DE((*uParam3 - 2f), (uParam3->f_1 - 2f), (*uParam3 + 2f), (uParam3->f_1 + 2f));
					if (fVar11 > 1f)
					{
						iLocal_65 = 1;
						uParam3->f_2 = fVar11;
						uParam3->f_2 = (uParam3->f_2 + 0,5f);
					}
				}
				bVar13 = true;
			}
		}
		if (bVar13)
		{
			Var2 = { Param2 - *uParam3 };
			Var2.f_2 = 0f;
			fLocal_70 = system::vmag(Var2);
			if (fLocal_70 != 0f)
			{
			}
			return 1;
		}
	}
	return 0;
}

int func_127(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(*uParam0) && func_128(*uParam0) == unk_0x2A3612A4B836469E())
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)
{
	var uVar0;
	
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		uVar0 = unk_0x8FACE824AEC046E8(iParam0);
	}
	return uVar0;
}

int func_129(struct<3> Param0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (Param1.f_2 - Param0.f_2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (Param0.f_2 <= 1f)
	{
		func_53("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = system::vdist(Param0, Param1);
	fVar0 = (fVar0 / 1,75f);
	if (fVar1 < fVar0)
	{
		func_53("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_130(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	if (unk_0xFFEB5F24B372DFF6(Param0.f_0, Param0.f_1, Param2.f_0, Param2.f_1))
	{
		return 1;
	}
	return 0;
}

void func_131(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (Param2.f_0 <= Param0.f_0)
	{
		Var0.f_0 = Param2.f_0;
		Var1.f_0 = Param0.f_0;
	}
	else
	{
		Var0.f_0 = Param0.f_0;
		Var1.f_0 = Param2.f_0;
	}
	if (Param2.f_1 <= Param0.f_1)
	{
		Var0.f_1 = Param2.f_1;
		Var1.f_1 = Param0.f_1;
	}
	else
	{
		Var0.f_1 = Param0.f_1;
		Var1.f_1 = Param2.f_1;
	}
	Var0 = { Var0 - Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
	Var1 = { Var1 + Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
	if (!func_132(Var0, *uParam4, 1056964608, 0) || !func_132(Var0, *uParam4, 1056964608, 0))
	{
		*uParam4 = { Var0 };
		*uParam5 = { Var1 };
	}
	unk_0x693ACD1AA0BDB375(*uParam4, uParam4->f_1, *uParam5, uParam5->f_1);
}

int func_132(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

int func_133(struct<3> Param0)
{
	char* sVar0;
	
	sVar0 = unk_0xDAEDE051F3F4FD45(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((unk_0x1B79E937E91F40C3("SanAnd", sVar0) || unk_0x1B79E937E91F40C3("Alamo", sVar0)) || unk_0x1B79E937E91F40C3("ArmyB", sVar0)) || unk_0x1B79E937E91F40C3("BhamCa", sVar0)) || unk_0x1B79E937E91F40C3("Baytre", sVar0)) || unk_0x1B79E937E91F40C3("BradT", sVar0)) || unk_0x1B79E937E91F40C3("BradP", sVar0)) || unk_0x1B79E937E91F40C3("CANNY", sVar0)) || unk_0x1B79E937E91F40C3("CCreak", sVar0)) || unk_0x1B79E937E91F40C3("ChamH", sVar0)) || unk_0x1B79E937E91F40C3("CHU", sVar0)) || unk_0x1B79E937E91F40C3("COSI", sVar0)) || unk_0x1B79E937E91F40C3("CMSW", sVar0)) || unk_0x1B79E937E91F40C3("Cypre", sVar0)) || unk_0x1B79E937E91F40C3("Desrt", sVar0)) || unk_0x1B79E937E91F40C3("ELGorl", sVar0)) || unk_0x1B79E937E91F40C3("Galli", sVar0)) || unk_0x1B79E937E91F40C3("Galfish", sVar0)) || unk_0x1B79E937E91F40C3("Harmo", sVar0)) || unk_0x1B79E937E91F40C3("HumLab", sVar0)) || unk_0x1B79E937E91F40C3("Jail", sVar0)) || unk_0x1B79E937E91F40C3("LAct", sVar0)) || unk_0x1B79E937E91F40C3("LDam", sVar0)) || unk_0x1B79E937E91F40C3("Lago", sVar0)) || unk_0x1B79E937E91F40C3("MTChil", sVar0)) || unk_0x1B79E937E91F40C3("MTJose", sVar0)) || unk_0x1B79E937E91F40C3("MTGordo", sVar0)) || unk_0x1B79E937E91F40C3("NCHU", sVar0)) || unk_0x1B79E937E91F40C3("Oceana", sVar0)) || unk_0x1B79E937E91F40C3("Palmpow", sVar0)) || unk_0x1B79E937E91F40C3("PBluff", sVar0)) || unk_0x1B79E937E91F40C3("Paleto", sVar0)) || unk_0x1B79E937E91F40C3("PalCov", sVar0)) || unk_0x1B79E937E91F40C3("PalFor", sVar0)) || unk_0x1B79E937E91F40C3("PalHigh", sVar0)) || unk_0x1B79E937E91F40C3("RTRAK", sVar0)) || unk_0x1B79E937E91F40C3("Rancho", sVar0)) || unk_0x1B79E937E91F40C3("SANDY", sVar0)) || unk_0x1B79E937E91F40C3("TongvaH", sVar0)) || unk_0x1B79E937E91F40C3("TongvaV", sVar0)) || unk_0x1B79E937E91F40C3("Zenora", sVar0)) || unk_0x1B79E937E91F40C3("Slab", sVar0)) || unk_0x1B79E937E91F40C3("WindF", sVar0)) || unk_0x1B79E937E91F40C3("Zancudo", sVar0)) || unk_0x1B79E937E91F40C3("SanChia", sVar0)) || unk_0x1B79E937E91F40C3("zQ_UAR", sVar0))
	{
		return 1;
	}
	return 0;
}

int func_134(struct<3> Param0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2[6];
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	float fVar11;
	float fVar12;
	bool bVar13;
	
	if (func_144(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam1 = { 1261,58f, -3332,685f, 5,4191f };
		*uParam2 = 163,87f;
		return 1;
	}
	else if (func_144(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam1 = { -1577,16f, 5166,51f, 19,1864f };
		*uParam2 = 0f;
		return 1;
	}
	else if (func_144(Param0, -874,9833f, 125,7645f, -100f, -768,6254f, 193,0297f, 100f))
	{
		*uParam1 = { -856,6151f, 163,7361f, 65,093f };
		*uParam2 = 355,3355f;
		return 1;
	}
	else if (func_144(Param0, -39,2005f, -1473,55f, -100f, 10,6133f, -1430,099f, 100f))
	{
		*uParam1 = { -15,5181f, -1456,4f, 29,4244f };
		*uParam2 = 94,6893f;
		return 1;
	}
	else if (func_144(Param0, 1964,742f, 3792,59f, -100f, 1992,636f, 3840,253f, 100f))
	{
		*uParam1 = { 1996,372f, 3818,831f, 31,1612f };
		*uParam2 = 170,0221f;
		return 1;
	}
	else if (unk_0x26715B0ED6702C87(Param0, -68,2187f, -1086,951f, -100f, -10,54518f, -1106,895f, 100f, 43,5f, 0, 1))
	{
		*uParam1 = { -63,5854f, -1074,732f, 26,0995f };
		*uParam2 = 324,1257f;
		return 1;
	}
	else if (unk_0x26715B0ED6702C87(Param0, 398,7899f, -1651,417f, -100f, 423,8372f, -1619,432f, 100f, 45f, 0, 1))
	{
		*uParam1 = { 416,871f, -1613,081f, 28,1401f };
		*uParam2 = 227,9333f;
		return 1;
	}
	else if (unk_0x26715B0ED6702C87(Param0, -988,8535f, -2553,177f, -100f, -1041,486f, -2644,97f, 100f, 49,75f, 0, 1) && !unk_0x76CD105BCAC6EB9F())
	{
		*uParam1 = { -1039,542f, -2574,467f, 12,7566f };
		*uParam2 = 162,2744f;
		return 1;
	}
	else if (unk_0x26715B0ED6702C87(Param0, -906,902f, -2600,461f, -100f, -959,7651f, -2692,057f, 100f, 49,75f, 0, 1) && !unk_0x76CD105BCAC6EB9F())
	{
		*uParam1 = { -911,1597f, -2676,132f, 12,7567f };
		*uParam2 = 338,9414f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28f;
	}
	if (unk_0x26715B0ED6702C87(Var1, -209,3372f, -2011,099f, 26,62037f, -257,2225f, -2076,963f, 36,62037f, 30f, 0, 1))
	{
		*uParam1 = { -211,8546f, -2030,771f, 26,6204f };
		*uParam2 = 154,4302f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 159f;
	}
	if (unk_0x26715B0ED6702C87(Var1, -804,05f, 4216,412f, 204,4872f, -509,0679f, 4135,19f, 123,2502f, 250f, 0, 1))
	{
		*uParam1 = { -623,3622f, 3996f, 120,7669f };
		*uParam2 = 37,8784f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 180f;
	}
	if (unk_0x26715B0ED6702C87(Var1, -2203,167f, 183,3549f, 167,4022f, -2311,587f, 434,3828f, 195,4669f, 138,5f, 0, 1))
	{
		*uParam1 = { -2294,945f, 376,2506f, 173,4669f };
		*uParam2 = 296,6963f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (unk_0x26715B0ED6702C87(Var1, -2041,478f, -553,2159f, -0,089962f, -1787,08f, -768,0886f, 37,99918f, 220f, 0, 1))
	{
		*uParam1 = { -1897,077f, -557,3334f, 10,7279f };
		*uParam2 = 228,7709f;
		if (unk_0x26715B0ED6702C87(Var1, -1882,883f, -541,7442f, 4,675224f, -1929,626f, -598,6026f, 40,4298f, 35f, 0, 1))
		{
			return 1;
		}
		else
		{
			Var2[0 /*3*/] = { -1962,468f, -503,4229f, 10,8349f };
			Var2[1 /*3*/] = { -1924,472f, -534,7357f, 10,8181f };
			Var2[2 /*3*/] = { -1896,324f, -557,768f, 10,7256f };
			Var2[3 /*3*/] = { -1850,661f, -595,8367f, 10,4649f };
			Var2[4 /*3*/] = { -1809f, -632,1207f, 10,0016f };
			Var2[5 /*3*/] = { -1745,043f, -694,4053f, 9,1245f };
			iVar3 = -1;
			fVar4 = 99999f;
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				fVar5 = system::vdist(Var2[iVar6 /*3*/], Var1);
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
					iVar3 = iVar6;
				}
				iVar6++;
			}
			*uParam1 = { Var2[iVar3 /*3*/] };
			if (iVar3 == 0)
			{
				*uParam2 = 234,3999f;
			}
			else if (iVar3 == 1)
			{
				*uParam2 = 232,2255f;
			}
			else if (iVar3 == 2)
			{
				*uParam2 = 228,2855f;
			}
			else if (iVar3 == 3)
			{
				*uParam2 = 231,4914f;
			}
			else if (iVar3 == 4)
			{
				*uParam2 = 230,6703f;
			}
			else if (iVar3 == 5)
			{
				*uParam2 = 228,7709f;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 330f;
	}
	if (unk_0x26715B0ED6702C87(Var1, -446,12f, 1057,452f, 318,6169f, -405,8336f, 1194,486f, 337,0966f, 106,25f, 0, 1))
	{
		*uParam1 = { -411,3629f, 1174,587f, 324,6421f };
		*uParam2 = 255,2881f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x26715B0ED6702C87(Var1, -1362,091f, -29,26777f, -100f, -1377,953f, 152,2389f, 100f, 50f, 0, 1))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { -1380,101f, 95,1566f, 53,5054f };
				*uParam2 = 4,555f;
				break;
			
			case 2:
				*uParam1 = { -1379,139f, 84,2472f, 53,0592f };
				*uParam2 = 6,9278f;
				break;
			
			case 3:
				*uParam1 = { -1378,427f, 74,5077f, 52,6622f };
				*uParam2 = 2,6813f;
				break;
			
			case 4:
				*uParam1 = { -1384,177f, 73,9207f, 52,7438f };
				*uParam2 = 5,542f;
				break;
			
			case 5:
				*uParam1 = { -1381,118f, 35,7838f, 52,659f };
				*uParam2 = 7,6687f;
				break;
			
			case 6:
				*uParam1 = { -1383,741f, 64,1491f, 52,6647f };
				*uParam2 = 2,5572f;
				break;
			
			case 7:
				*uParam1 = { -1382,616f, 49,6876f, 52,6585f };
				*uParam2 = 3,0185f;
				break;
			
			default:
				*uParam1 = { -1383,299f, 54,4598f, 52,6562f };
				*uParam2 = 6,2155f;
				break;
		}
		return 1;
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (unk_0x26715B0ED6702C87(Param0, 48,31006f, -1120,669f, 28,0305f, -12,12345f, -1112,084f, 36,08567f, 60f, 0, 1))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { 50,9889f, -1092,525f, 28,2152f };
					*uParam2 = 150,8833f;
					break;
				
				case 2:
					*uParam1 = { 46,7725f, -1099,751f, 28,1639f };
					*uParam2 = 149,4322f;
					break;
				
				case 3:
					*uParam1 = { 41,6146f, -1107,742f, 28,1318f };
					*uParam2 = 154,1378f;
					break;
				
				case 4:
					*uParam1 = { 38,1922f, -1113,394f, 28,1507f };
					*uParam2 = 146,3778f;
					break;
				
				case 5:
					*uParam1 = { 13,0436f, -1124,767f, 27,7359f };
					*uParam2 = 91,163f;
					break;
				
				case 6:
					*uParam1 = { 1,4336f, -1125,042f, 27,1705f };
					*uParam2 = 91,0578f;
					break;
				
				case 7:
					*uParam1 = { -11,1811f, -1125,811f, 26,3688f };
					*uParam2 = 91,866f;
					break;
				
				default:
					*uParam1 = { 21,9431f, -1124,573f, 27,9417f };
					*uParam2 = 91,6961f;
					break;
			}
			return 1;
		}
		else if (unk_0x26715B0ED6702C87(Param0, -1061,018f, -2540,235f, 18,66932f, -1023,332f, -2562,115f, 31,57616f, 250f, 0, 1))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1023,982f, -2489,882f, 19,0755f };
					*uParam2 = 148,7004f;
					break;
				
				case 2:
					*uParam1 = { -1029,968f, -2500,438f, 19,0803f };
					*uParam2 = 148,7144f;
					break;
				
				case 3:
					*uParam1 = { -1070,546f, -2570,859f, 19,0836f };
					*uParam2 = 150,0955f;
					break;
				
				case 4:
					*uParam1 = { -1056,065f, -2545,662f, 19,0809f };
					*uParam2 = 149,5649f;
					break;
				
				case 5:
					*uParam1 = { -1050,578f, -2536,219f, 19,0824f };
					*uParam2 = 150,7363f;
					break;
				
				case 6:
					*uParam1 = { -1036,032f, -2510,902f, 19,0794f };
					*uParam2 = 147,2113f;
					break;
				
				case 7:
					*uParam1 = { -1044,487f, -2525,534f, 19,079f };
					*uParam2 = 150,7597f;
					break;
				
				default:
					*uParam1 = { -1064,5f, -2560,653f, 19,0905f };
					*uParam2 = 150,7081f;
					break;
			}
			return 1;
		}
		else if (unk_0x26715B0ED6702C87(Param0, -1061,059f, -2540,254f, 10,94467f, -1023,297f, -2562,052f, 18,51685f, 250f, 0, 1))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1044,741f, -2528,786f, 12,7568f };
					*uParam2 = 150,9439f;
					break;
				
				case 2:
					*uParam1 = { -1050,763f, -2539,498f, 12,7566f };
					*uParam2 = 150,851f;
					break;
				
				case 3:
					*uParam1 = { -1054,952f, -2546,86f, 12,7566f };
					*uParam2 = 149,9285f;
					break;
				
				case 4:
					*uParam1 = { -1060,397f, -2556,898f, 12,6066f };
					*uParam2 = 150,8244f;
					break;
				
				case 5:
					*uParam1 = { -1020,744f, -2490,084f, 12,6396f };
					*uParam2 = 148,6134f;
					break;
				
				case 6:
					*uParam1 = { -1076,904f, -2589,179f, 12,6858f };
					*uParam2 = 149,0112f;
					break;
				
				case 7:
					*uParam1 = { -1026,387f, -2501,952f, 12,6923f };
					*uParam2 = 149,7553f;
					break;
				
				default:
					*uParam1 = { -1070,506f, -2578,389f, 12,6932f };
					*uParam2 = 148,5232f;
					break;
			}
			return 1;
		}
		else if (unk_0x26715B0ED6702C87(Param0, -1043,364f, -2747,29f, 16,96057f, -991,5368f, -2657,682f, 69,12349f, 200f, 0, 1))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1067,846f, -2708,94f, 19,0588f };
					*uParam2 = 230,9025f;
					break;
				
				case 2:
					*uParam1 = { -1058,224f, -2716,217f, 19,06f };
					*uParam2 = 237,1285f;
					break;
				
				case 3:
					*uParam1 = { -1004,567f, -2744,797f, 19,0811f };
					*uParam2 = 255,6885f;
					break;
				
				case 4:
					*uParam1 = { -1049,509f, -2721,58f, 19,0546f };
					*uParam2 = 242,3581f;
					break;
				
				case 5:
					*uParam1 = { -1017,154f, -2740,117f, 19,0525f };
					*uParam2 = 243,5798f;
					break;
				
				case 6:
					*uParam1 = { -1042,087f, -2726,077f, 19,0452f };
					*uParam2 = 240,2381f;
					break;
				
				case 7:
					*uParam1 = { -1027,353f, -2734,462f, 19,0509f };
					*uParam2 = 239,8703f;
					break;
				
				default:
					*uParam1 = { -1033,74f, -2730,746f, 19,0521f };
					*uParam2 = 239,9237f;
					break;
			}
			return 1;
		}
		else if (unk_0x26715B0ED6702C87(Param0, -1047,646f, -2754,947f, 2,941969f, -991,7314f, -2653,153f, 16,89228f, 200f, 0, 1))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -971,9154f, -2749,122f, 12,6069f };
					*uParam2 = 265,8022f;
					break;
				
				case 2:
					*uParam1 = { -980,6166f, -2748,535f, 12,757f };
					*uParam2 = 263,5472f;
					break;
				
				case 3:
					*uParam1 = { -987,6072f, -2747,273f, 12,6069f };
					*uParam2 = 257,2886f;
					break;
				
				case 4:
					*uParam1 = { -1006,815f, -2739,345f, 12,6334f };
					*uParam2 = 242,1315f;
					break;
				
				case 5:
					*uParam1 = { -1051,83f, -2713,553f, 12,6333f };
					*uParam2 = 239,9312f;
					break;
				
				case 6:
					*uParam1 = { -1041,004f, -2719,647f, 12,6402f };
					*uParam2 = 240,1081f;
					break;
				
				case 7:
					*uParam1 = { -1023,832f, -2729,465f, 12,6445f };
					*uParam2 = 239,6737f;
					break;
				
				default:
					*uParam1 = { -1012,848f, -2735,172f, 12,6656f };
					*uParam2 = 237,6545f;
					break;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 845,7216f, -990,7473f, 37,4696f, 846,3397f, -1066,88f, 16,96623f, 90f, 0, 1))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { 868,1039f, -995,9224f, 29,7369f };
				*uParam2 = 93,132f;
				break;
			
			case 2:
				*uParam1 = { 859,283f, -996,4102f, 28,7865f };
				*uParam2 = 92,2581f;
				break;
			
			case 3:
				*uParam1 = { 849,4288f, -997,1062f, 27,5347f };
				*uParam2 = 92,714f;
				break;
			
			case 4:
				*uParam1 = { 841,1268f, -997,4826f, 26,5744f };
				*uParam2 = 92,8628f;
				break;
			
			case 5:
				*uParam1 = { 831,2605f, -1009,556f, 25,599f };
				*uParam2 = 268,6186f;
				break;
			
			case 6:
				*uParam1 = { 844,6506f, -1010,09f, 26,9894f };
				*uParam2 = 270,076f;
				break;
			
			case 7:
				*uParam1 = { 852,2498f, -1010,132f, 27,8091f };
				*uParam2 = 269,722f;
				break;
			
			default:
				*uParam1 = { 861,4028f, -1010,025f, 28,808f };
				*uParam2 = 270,7686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 767,3736f, -1077,429f, -10,78654f, 682,8284f, -1080,686f, 79,67303f, 60f, 0, 1))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { 703,2726f, -1067,7f, 21,4765f };
				*uParam2 = 181,3629f;
				break;
			
			case 2:
				*uParam1 = { 715,2089f, -1070,399f, 21,2708f };
				*uParam2 = 175,4362f;
				break;
			
			case 3:
				*uParam1 = { 715,2911f, -1059,42f, 21,0876f };
				*uParam2 = 181,0347f;
				break;
			
			case 4:
				*uParam1 = { 709,6841f, -1086,78f, 21,419f };
				*uParam2 = 233,169f;
				break;
			
			case 5:
				*uParam1 = { 703,807f, -1057,866f, 21,4152f };
				*uParam2 = 170,1609f;
				break;
			
			case 6:
				*uParam1 = { 708,1994f, -1048,194f, 21,216f };
				*uParam2 = 134,2729f;
				break;
			
			case 7:
				*uParam1 = { 711,1124f, -1069,423f, 21,3129f };
				*uParam2 = 177,9198f;
				break;
			
			default:
				*uParam1 = { 703,545f, -1078,718f, 21,3987f };
				*uParam2 = 180,5686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 31f;
	}
	if (func_141(3, Var1))
	{
		if (func_140(Var1, 3, 0, 0))
		{
			*uParam1 = { -1520,121f, 2731,511f, 16,6437f };
			*uParam2 = 48,1572f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 77,2f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 1535,987f, -2041,497f, 68,21275f, 1529,357f, -2204,463f, 96,11195f, 105f, 0, 1))
	{
		*uParam1 = { 1540,75f, -2051,49f, 76,85f };
		*uParam2 = 255,41f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 51,1739f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 1185,81f, -1768,367f, 28,31145f, 1369,068f, -1701,452f, 66,25389f, 70f, 1, 1))
	{
		if (func_139(Var1, 1283,326f, -1731,522f, 51,78555f, 17f))
		{
			*uParam1 = { 1283,326f, -1731,522f, 51,78555f };
			*uParam2 = 275,4274f;
			return 1;
		}
		if (func_139(Var1, 1334,386f, -1709,762f, 55,70131f, 41f))
		{
			*uParam1 = { 1334,386f, -1709,762f, 55,70131f };
			*uParam2 = 275,4411f;
			return 1;
		}
		if (func_139(Var1, 1246,166f, -1750,625f, 45,35691f, 28f))
		{
			*uParam1 = { 1246,166f, -1750,625f, 45,35691f };
			*uParam2 = 301,2981f;
			return 1;
		}
		if (func_139(Var1, 1196,272f, -1753,051f, 37,63976f, 32f))
		{
			*uParam1 = { 1196,272f, -1753,051f, 37,63976f };
			*uParam2 = 209,4354f;
			return 1;
		}
		*uParam1 = { 1283,326f, -1731,522f, 51,78555f };
		*uParam2 = 275,4274f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 25f;
	}
	if (func_139(Var1, -1693,302f, -1109,13f, 17,89778f, 240f))
	{
		if ((unk_0x26715B0ED6702C87(Var1, -1538,981f, -941,1323f, 10,56623f, -1715,57f, -1139,766f, 52,20361f, 110f, 0, 1) || unk_0x26715B0ED6702C87(Var1, -1739,989f, -1115,973f, 10,08726f, -1800,515f, -1187,18f, 52,0172f, 25f, 0, 1)) || unk_0x26715B0ED6702C87(Var1, -1801,766f, -1180,252f, 4,017236f, -1857,718f, -1244,628f, 38,49653f, 85f, 0, 1))
		{
			*uParam1 = { -1624,445f, -976,9755f, 12,0175f };
			*uParam2 = 141,167f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (unk_0x26715B0ED6702C87(Var1, -1140,89f, -1573,135f, -6,566939f, -1067,084f, -1675,976f, 23,53153f, 52f, 0, 1))
	{
		*uParam1 = { -1095,63f, -1577,24f, 3,82f };
		*uParam2 = 216,12f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 114f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 1324,172f, 1110,748f, 99,65493f, 1523,097f, 1110,473f, 132,8859f, 170f, 0, 1))
	{
		iVar0 = 3;
		switch (unk_0xC5935DFB3F39785A(0, iVar0))
		{
			case 0:
				*uParam1 = { 1369,246f, 1147,653f, 112,7592f };
				*uParam2 = 182,0998f;
				break;
			
			case 1:
				*uParam1 = { 1360,848f, 1139,121f, 112,7592f };
				*uParam2 = 83,3356f;
				break;
			
			case 2:
				*uParam1 = { 1364,751f, 1154,367f, 112,7592f };
				*uParam2 = 223,2795f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 40f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 1737,39f, 3287,795f, 35,13897f, 1724,345f, 3337,854f, 57,20038f, 40f, 0, 1))
	{
		*uParam1 = { 1782,19f, 3300,076f, 40,4593f };
		*uParam2 = 142,426f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 7f;
	}
	if (unk_0x26715B0ED6702C87(Var1, -695,7981f, -1379,678f, 24,48124f, -777,3731f, -1491,13f, -3,594945f, 72f, 0, 1))
	{
		*uParam1 = { -658,2056f, -1388,789f, 9,499f };
		*uParam2 = 174,6945f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 325f;
	}
	if (system::vdist2(Var1, -75,59782f, -818,6082f, 325,1745f) < (58f * 58f))
	{
		*uParam1 = { -142,367f, -895,0251f, 28,191f };
		*uParam2 = 71,6555f;
		return 1;
	}
	if (!func_137())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36,1141f;
		}
		if (func_141(7, Var1))
		{
			if (func_140(Var1, 7, 0, 0))
			{
				*uParam1 = { -1012,31f, -465,1634f, 36,1141f };
				*uParam2 = 112,1485f;
				return 1;
			}
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 12,7091f;
	}
	if (func_141(2, Var1))
	{
		if (func_140(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!unk_0x76CD105BCAC6EB9F())
			{
				switch (unk_0xC5935DFB3F39785A(0, iVar0))
				{
					case 0:
						*uParam1 = { -979,95f, -2746,109f, 12,7091f };
						*uParam2 = 91,4929f;
						break;
					
					case 1:
						*uParam1 = { -1025,193f, -2728,218f, 12,6647f };
						*uParam2 = 239,0041f;
						break;
					
					case 2:
						*uParam1 = { -1051,315f, -2713,069f, 12,6676f };
						*uParam2 = 236,4666f;
						break;
					
					case 3:
						*uParam1 = { -1095,742f, -2637,871f, 12,6461f };
						*uParam2 = 188,9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam3 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam1 = { -1023,982f, -2489,882f, 19,0755f };
						*uParam2 = 148,7004f;
						break;
					
					case 2:
						*uParam1 = { -1029,968f, -2500,438f, 19,0803f };
						*uParam2 = 148,7144f;
						break;
					
					case 3:
						*uParam1 = { -1070,546f, -2570,859f, 19,0836f };
						*uParam2 = 150,0955f;
						break;
					
					case 4:
						*uParam1 = { -1056,065f, -2545,662f, 19,0809f };
						*uParam2 = 149,5649f;
						break;
					
					case 5:
						*uParam1 = { -1050,578f, -2536,219f, 19,0824f };
						*uParam2 = 150,7363f;
						break;
					
					case 6:
						*uParam1 = { -1036,032f, -2510,902f, 19,0794f };
						*uParam2 = 147,2113f;
						break;
					
					case 7:
						*uParam1 = { -1044,487f, -2525,534f, 19,079f };
						*uParam2 = 150,7597f;
						break;
					
					default:
						*uParam1 = { -1064,5f, -2560,653f, 19,0905f };
						*uParam2 = 150,7081f;
						break;
					}
			}
			return 1;
		}
	}
	Var7 = { -509,5746f, 4938,918f, 146,3271f };
	fVar8 = 232,0109f;
	fVar9 = func_136(Param0, Var7);
	Var10 = { 2450,604f, 5129,224f, 45,9722f };
	fVar11 = 241,1957f;
	fVar12 = func_136(Param0, Var10);
	Var1 = { Param0 };
	bVar13 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (unk_0x26715B0ED6702C87(Var1, -148,8777f, 4862,204f, 305,6442f, 454,6274f, 5573,104f, 804,097f, 250f, 0, 1))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (unk_0x26715B0ED6702C87(Var1, -482,8931f, 4990,255f, 155,1601f, 7,830751f, 5009,371f, 430,7604f, 250f, 0, 1))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		*uParam1 = { Var7 };
		*uParam2 = fVar8;
		if (fVar12 < fVar9)
		{
			*uParam1 = { Var10 };
			*uParam2 = fVar11;
		}
		return 1;
	}
	bVar13 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 700f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 441,3999f, 5579,99f, 802,5138f, 965,7776f, 5675,921f, 601,2646f, 250f, 0, 1))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 954,1139f, 5641,051f, 646,5054f, 2140,375f, 5377,753f, 149,1221f, 250f, 0, 1))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 2117,348f, 5377,259f, 173,3297f, 2439,934f, 5297,445f, 62,68662f, 100f, 0, 1))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 2393,347f, 5321,58f, 107,0624f, 2523,946f, 5124,746f, 41,68384f, 70f, 0, 1))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		*uParam1 = { Var10 };
		*uParam2 = fVar11;
		if (fVar9 < fVar12)
		{
			*uParam1 = { Var7 };
			*uParam2 = fVar8;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 6f;
	}
	if (func_135(Var1, -99,68751f, -2448,891f, 5,01731f, 230f))
	{
		if ((((unk_0x26715B0ED6702C87(Var1, 85,05448f, -2511,884f, -2,996267f, -57,59977f, -2412,716f, 15,00095f, 75f, 0, 1) || unk_0x26715B0ED6702C87(Var1, 7,516524f, -2546,741f, 1,331557f, -177,3268f, -2417,047f, 19,16044f, 80f, 0, 1)) || unk_0x26715B0ED6702C87(Var1, -260,0354f, -2419,978f, 1,399635f, -27,26375f, -2423,848f, 25,00064f, 80f, 0, 1)) || unk_0x26715B0ED6702C87(Var1, -187,4256f, -2516,086f, -6,849975f, -186,7518f, -2438,149f, 25,0016f, 40f, 0, 1)) || unk_0x26715B0ED6702C87(Var1, -73,60813f, -2538,564f, -6,989857f, -183,2556f, -2465,145f, 25,0203f, 70f, 0, 1))
		{
			iVar0 = 2;
			if (unk_0xC5935DFB3F39785A(0, iVar0) == 0)
			{
				*uParam1 = { 29,5582f, -2553,587f, 5,0004f };
				*uParam2 = 253,9545f;
			}
			else
			{
				*uParam1 = { -189,6824f, -2531,649f, 5,0031f };
				*uParam2 = 0,0408f;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28,4f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 412,279f, 6481,868f, 25,80821f, 468,9353f, 6442,752f, 45,60727f, 24f, 0, 1))
	{
		*uParam1 = { 445,231f, 6476,948f, 28,4862f };
		*uParam2 = 219,4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28,2065f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 476,5394f, -1301,548f, 44,82458f, 499,5822f, -1339,025f, 26,31703f, 35f, 0, 1))
	{
		*uParam1 = { 498,185f, -1288,535f, 28,1923f };
		*uParam2 = 181,3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28,2065f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 496,9816f, -1412,255f, 43,29391f, 497,269f, -1339,364f, 26,31648f, 40f, 0, 1))
	{
		*uParam1 = { 504,1738f, -1421,251f, 28,2065f };
		*uParam2 = 83,2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 951,1704f, -147,0047f, 71,54326f, 1005,245f, -98,44745f, 95,62679f, 70f, 0, 1))
	{
		*uParam1 = { 961,3104f, -150,1964f, 73,4016f };
		*uParam2 = 58,9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 1137,022f, 89,06853f, 74,89022f, 1267,821f, 292,0106f, 102,9904f, 195f, 0, 1))
	{
		*uParam1 = { 1118,751f, 262,0209f, 79,8555f };
		*uParam2 = 52,3086f;
		return 1;
	}
	else if (unk_0x26715B0ED6702C87(Var1, 1137,022f, 89,06853f, 71,89022f, 1010,046f, -91,56699f, 103,4568f, 180f, 0, 1))
	{
		*uParam1 = { 1134,053f, 53,1835f, 79,7553f };
		*uParam2 = 145,5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30,6f;
	}
	if (unk_0x26715B0ED6702C87(Var1, 191,8731f, -723,553f, 40,23576f, 79,58656f, -687,6684f, 29,54734f, 85f, 0, 1))
	{
		iVar0 = 2;
		if (unk_0xC5935DFB3F39785A(0, iVar0) == 0)
		{
			*uParam1 = { 182,6361f, -753,5836f, 31,8051f };
			*uParam2 = 162,0019f;
		}
		else
		{
			*uParam1 = { 81,5318f, -675,4875f, 30,5695f };
			*uParam2 = 341,8541f;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 33,5f;
	}
	if (unk_0x26715B0ED6702C87(Var1, -40f, -687,7f, 36,6f, -72,7f, -682f, 29,6f, 15f, 0, 1) || unk_0x26715B0ED6702C87(Var1, -45,3f, -687,8f, 29,3f, 5,9f, -688,7f, 36,8f, 55f, 0, 1))
	{
		*uParam1 = { -88,4f, -660,9f, 35f };
		*uParam2 = -20f;
		return 1;
	}
	else if (unk_0x26715B0ED6702C87(Var1, 8,1f, -685,5f, 31,2f, 26,3f, -665,7f, 35,2f, 10f, 0, 1))
	{
		*uParam1 = { 61,4f, -653,2f, 32f };
		*uParam2 = 160f;
		return 1;
	}
	if (unk_0x26715B0ED6702C87(Param0, 496,2593f, -3116,586f, 13,6414f, 471,4366f, -3116,258f, 5,7109f, 10f, 0, 1))
	{
		*uParam1 = { 484,0132f, -3033,162f, 5,0717f };
		*uParam2 = 140,7302f;
		return 1;
	}
	return 0;
}

bool func_135(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return system::vdist2(Param0, Param1) <= (fParam2 * fParam2);
}

float func_136(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return system::vdist2(Param0.f_0, Param0.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
}

int func_137()
{
	int iVar0;
	
	iVar0 = func_56();
	if (iVar0 == 0)
	{
		if (func_138(65))
		{
			return 1;
		}
		if (unk_0x486FF5D06E9659F1(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_138(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_138(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_138(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_58[iParam0];
}

bool func_139(struct<3> Param0, struct<3> Param1, float fParam2)
{
	struct<3> Var0;
	
	Var0 = { Param1 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam2 * fParam2);
}

int func_140(struct<3> Param0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332,211f, 100,4608f, 40,38437f };
			Var1[0 /*3*/] = { -1094,238f, 148,4274f, 73f };
			fVar2[0] = 171,25f;
			Var0[1 /*3*/] = { -999,7344f, -110,2231f, 25,25706f };
			Var1[1 /*3*/] = { -1149,494f, 109,2558f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035,113f, -84,95885f, 28,2746f };
			Var1[2 /*3*/] = { -1261,103f, 50,08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804,3439f, -3346,5f, 10f };
			Var1[0 /*3*/] = { -1816,954f, -2768,893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911,488f, -2934,197f, 10f };
			Var1[1 /*3*/] = { -968,6236f, -3477,748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844,9433f, -2802,785f, 10f };
			Var1[2 /*3*/] = { -1011,081f, -3086,904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185,5f;
			Var0[3 /*3*/] = { -1021,086f, -2952,277f, 10f };
			Var1[3 /*3*/] = { -1599,008f, -2616,271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027,136f, -2436,457f, 10f };
			Var1[4 /*3*/] = { -1392,61f, -2226,763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193,5f;
			Var0[5 /*3*/] = { -1497,549f, -2408,712f, 10f };
			Var1[5 /*3*/] = { -1136,917f, -2617,955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234,5f;
			Var0[6 /*3*/] = { -982,7924f, -2831,709f, 12,93313f };
			Var1[6 /*3*/] = { -966,4677f, -2803,458f, 16,68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110,083f, -3496,806f, 12f };
			Var1[7 /*3*/] = { -1955,298f, -3010,431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886,899f, -3193,024f, 12f };
			Var1[8 /*3*/] = { -1836,143f, -3105,268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134,337f, -3535,648f, 12f };
			Var1[9 /*3*/] = { -1259,649f, -3463,486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30,75f;
			Var0[10 /*3*/] = { -969,1279f, -3463,899f, 12f };
			Var1[10 /*3*/] = { -896,3734f, -3505,715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369,491f, -2173,579f, 10f };
			Var1[11 /*3*/] = { -1685,626f, -2720,364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29,25f;
			Var0[12 /*3*/] = { -1010,926f, -3550,943f, 10f };
			Var1[12 /*3*/] = { -1110,198f, -3493,617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773,944f, 3287,334f, 30f };
			Var1[0 /*3*/] = { -2029,776f, 2845,083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			Var0[1 /*3*/] = { -2725,889f, 3291,099f, 30f };
			Var1[1 /*3*/] = { -2009,182f, 2879,835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442,026f, 3326,699f, 30f };
			Var1[2 /*3*/] = { -2033,928f, 3089,049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			Var0[3 /*3*/] = { -1917,165f, 3374,209f, 30f };
			Var1[3 /*3*/] = { -2016,791f, 3195,058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86,25f;
			Var0[4 /*3*/] = { -2192,753f, 3373,278f, 30f };
			Var1[4 /*3*/] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150,5f;
			Var0[5 /*3*/] = { -2077,663f, 3344,514f, 30f };
			Var1[5 /*3*/] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140,5f;
			Var0[6 /*3*/] = { -2861,755f, 3352,661f, 30f };
			Var1[6 /*3*/] = { -2715,871f, 3269,916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005,574f, 3364,533f, 30f };
			Var1[7 /*3*/] = { -1977,569f, 3330,888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682,235f, 3004,285f, 30f };
			Var1[8 /*3*/] = { -1942,747f, 2947,441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248,75f;
			Var0[9 /*3*/] = { -2393,295f, 2936,406f, 31,6801f };
			Var1[9 /*3*/] = { -2453,037f, 3006,863f, 52,31003f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347,185f, 3023,83f, 31,56573f };
			Var1[10 /*3*/] = { -2517,33f, 2989,063f, 49,95644f };
			fVar2[10] = 140f;
			Var0[11 /*3*/] = { -2259,922f, 3358,04f, 29,99972f };
			Var1[11 /*3*/] = { -2299,772f, 3385,79f, 38,06014f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476,309f, 3363,914f, 31,67933f };
			Var1[12 /*3*/] = { -2431,981f, 3287,669f, 39,97826f };
			fVar2[12] = 214,25f;
			Var0[13 /*3*/] = { -2103,081f, 2797,783f, 29,37864f };
			Var1[13 /*3*/] = { -2096,821f, 2874,423f, 57,80989f };
			fVar2[13] = 65,75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541,607f, 2527,555f, 40f };
			Var1[0 /*3*/] = { 1815,575f, 2535,06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788,879f, 2445,727f, 40f };
			Var1[1 /*3*/] = { 1716,96f, 2502,957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88,5f;
			Var0[2 /*3*/] = { 1601,157f, 2436,244f, 40f };
			Var1[2 /*3*/] = { 1650,078f, 2515,923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133,25f;
			Var0[3 /*3*/] = { 1706,331f, 2407,597f, 40f };
			Var1[3 /*3*/] = { 1698,555f, 2460,208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104,5f;
			Var0[4 /*3*/] = { 1712,452f, 2756,218f, 40f };
			Var1[4 /*3*/] = { 1718,848f, 2589,162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121,75f;
			Var0[5 /*3*/] = { 1830,228f, 2661,24f, 40f };
			Var1[5 /*3*/] = { 1774,812f, 2679,419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84,5f;
			Var0[6 /*3*/] = { 1559,05f, 2632,22f, 40f };
			Var1[6 /*3*/] = { 1657,208f, 2595,484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103,75f;
			Var0[7 /*3*/] = { 1612,021f, 2716,869f, 40f };
			Var1[7 /*3*/] = { 1657,165f, 2669,721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104,25f;
			Var0[8 /*3*/] = { 1809,872f, 2729,827f, 40f };
			Var1[8 /*3*/] = { 1789,855f, 2705,037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818,789f, 2605,948f, 40f };
			Var1[9 /*3*/] = { 1783,114f, 2606,783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51,25f;
			iVar3 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411,002f, 3663,185f, 20f };
			Var1[0 /*3*/] = { 3615,583f, 3626,194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45,75f;
			Var0[1 /*3*/] = { 3426,66f, 3733,078f, 20f };
			Var1[1 /*3*/] = { 3643,801f, 3694,362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446,036f, 3795,688f, 20f };
			Var1[2 /*3*/] = { 3650,914f, 3766,152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81,5f;
			iVar3 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526,053f, -3391,497f, -10f };
			Var1[0 /*3*/] = { 523,2289f, -3118,678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459,4397f, -3199,99f, 4,819676f };
			Var1[1 /*3*/] = { 593,8928f, -3199,998f, 30,06926f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552,8467f, -3111,054f, 4,819394f };
			Var1[2 /*3*/] = { 585,3137f, -3111,844f, 17,56923f };
			fVar2[2] = 12,5f;
			Var0[3 /*3*/] = { 598,4666f, -3140,147f, 4,819257f };
			Var1[3 /*3*/] = { 597,4973f, -3117,063f, 17,31926f };
			fVar2[3] = 9,75f;
			iVar3 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108,55f, -570,8798f, 20f };
			Var1[0 /*3*/] = { -1187,811f, -477,5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201,378f, -485,9673f, 20f };
			Var1[1 /*3*/] = { -1215,796f, -464,8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985,6311f, -525,4233f, 20f };
			Var1[2 /*3*/] = { -1013,393f, -475,2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055,849f, -477,8226f, 20f };
			Var1[3 /*3*/] = { -1073,333f, -498,717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461,5684f, -984,572f, 29,43951f };
			Var1[0 /*3*/] = { 471,17f, -984,4292f, 40,14212f };
			fVar2[0] = 7,75f;
			Var0[1 /*3*/] = { 457,3404f, -984,756f, 34,43951f };
			Var1[1 /*3*/] = { 457,2084f, -993,7189f, 29,38958f };
			fVar2[1] = 14,75f;
			Var0[2 /*3*/] = { 477,6227f, -986,6f, 40,00819f };
			Var1[2 /*3*/] = { 424,8687f, -986,3279f, 48,71241f };
			fVar2[2] = 31,5f;
			Var0[3 /*3*/] = { 474,3889f, -974,4613f, 39,55761f };
			Var1[3 /*3*/] = { 474,0358f, -1021,972f, 49,10033f };
			fVar2[3] = 30,5f;
			Var0[4 /*3*/] = { 442,1768f, -974,1888f, 29,68951f };
			Var1[4 /*3*/] = { 442,1855f, -979,8635f, 33,43951f };
			fVar2[4] = 6,75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x26715B0ED6702C87(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_141(int iParam0, struct<3> Param1)
{
	return system::vdist2(Param1, func_143(iParam0)) < func_142(iParam0);
}

float func_142(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_143(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1155,877f, 48,3426f, 52,4985f;
			break;
		
		case 2:
			return -1245,12f, -2818,38f, 12,94f;
			break;
		
		case 3:
			return -2176,19f, 3092,07f, 31,81f;
			break;
		
		case 4:
			return 1701,666f, 2586,261f, 51,4925f;
			break;
		
		case 5:
			return 3525,058f, 3711,323f, 35,6423f;
			break;
		
		case 6:
			return 548,1421f, -3157,961f, 5,0696f;
			break;
		
		case 7:
			return -1142,411f, -526,4487f, 31,6878f;
			break;
		
		case 8:
			return 456,8879f, -985,2783f, 35,6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_144(struct<3> Param0, struct<3> Param1, struct<3> Param2)
{
	if (((((Param0.f_0 > Param1.f_0 && Param0.f_0 < Param2.f_0) && Param0.f_1 > Param1.f_1) && Param0.f_1 < Param2.f_1) && Param0.f_2 > Param1.f_2) && Param0.f_2 < Param2.f_2)
	{
		return 1;
	}
	return 0;
}

int func_145(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = 1E+08f;
	fVar1 = 1E+08f;
	fVar2 = 1E+08f;
	func_157(&Param0, &iLocal_814, &fVar0);
	func_155(&Param0, &iLocal_104, &fVar1);
	func_152(&Param0, &iLocal_815, &fVar2);
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		if (func_151(iLocal_814, Param0))
		{
			if (func_150(iLocal_814, uParam1, uParam2))
			{
				return 1;
			}
		}
	}
	else if (fVar1 < fVar0 && fVar1 < fVar2)
	{
		if (func_149(iLocal_104, Param0))
		{
			if (func_148(iLocal_104, uParam1, uParam2))
			{
				return 1;
			}
		}
	}
	else if (fVar2 != 1E+08f)
	{
		if (func_147(iLocal_815, Param0))
		{
			if (func_146(iLocal_815, uParam1, uParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_146(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 76:
			*uParam1 = { -1094,711f, -2641,982f, 12,7071f };
			*uParam2 = 188,2694f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { -1917,719f, 4445,75f, 38,6592f };
			*uParam2 = 45,822f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { -482,5762f, 1993,85f, 206,3482f };
			*uParam2 = 263,9373f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { -208,3305f, 4195,341f, 43,1714f };
			*uParam2 = 333,4403f;
			return 1;
			break;
		
		case 74:
			*uParam1 = { 1619,446f, 3820,96f, 33,9381f };
			*uParam2 = 129,6464f;
			return 1;
			break;
		
		case 75:
			*uParam1 = { 2045,169f, 2155,887f, 94,3423f };
			*uParam2 = 347,9475f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 2952,767f, 2807,028f, 40,7635f };
			*uParam2 = 121,2574f;
			return 1;
			break;
		
		case 105:
		case 106:
			*uParam1 = { 2119,676f, 4747,198f, 40,1793f };
			*uParam2 = 305,2213f;
			return 1;
			break;
		
		case 125:
			*uParam1 = { -817,3487f, -1303,89f, 4,0005f };
			*uParam2 = 253,9379f;
			return 1;
			break;
		
		case 126:
			*uParam1 = { 1118,751f, 262,0209f, 79,8555f };
			*uParam2 = 52,3086f;
			return 1;
			break;
		
		case 127:
			*uParam1 = { 2414,063f, 1503,77f, 35,6614f };
			*uParam2 = 124,0994f;
			return 1;
			break;
		
		case 128:
			*uParam1 = { -203,2552f, 6536,089f, 10,0979f };
			*uParam2 = 311,0677f;
			return 1;
			break;
		
		case 129:
			*uParam1 = { -142,367f, -895,0251f, 28,191f };
			*uParam2 = 71,6555f;
			return 1;
			break;
		
		case 131:
			*uParam1 = { -1214,252f, 4629,887f, 133,873f };
			*uParam2 = 123,1562f;
			return 1;
			break;
		
		case 132:
			*uParam1 = { -767,9527f, 4521,882f, 91,6871f };
			*uParam2 = 85,6363f;
			return 1;
			break;
		
		case 134:
			*uParam1 = { -1363,183f, 4468,691f, 23,1468f };
			*uParam2 = 272,2546f;
			return 1;
			break;
		
		case 135:
			*uParam1 = { 2477,088f, 4948,677f, 44,0936f };
			*uParam2 = 49,3948f;
			return 1;
			break;
		
		case 136:
			*uParam1 = { 1047,931f, -203,879f, 69,0164f };
			*uParam2 = 62,0197f;
			return 1;
			break;
		
		case 107:
			*uParam1 = { -1200,863f, -2049,46f, 12,9248f };
			*uParam2 = 334,965f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1960,388f, 3124,797f, 46,877f };
			*uParam2 = 233,484f;
			return 1;
			break;
	}
	return 0;
}

int func_147(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 76:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 15f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -1157,595f, -2726,636f, 12,94464f, -1110,794f, -2679,33f, 22,94466f, 26f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 70:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 38,5f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -1908,065f, 4432,693f, 51,3842f, -1962,212f, 4473,8f, 22,93989f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 71:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 206,5f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -541,8311f, 2050,599f, 186,3904f, -499,787f, 1968,325f, 228,0183f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 73:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 43,1f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -179,8588f, 4216,167f, 30,26505f, -246,32f, 4226,653f, 53,77886f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 74:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 1634,122f, 3858,049f, 28,33912f, 1573,259f, 3800,442f, 48,35476f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 75:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 94f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 2057,873f, 2059,198f, 63,88074f, 1999,045f, 2190,544f, 122,2642f, 110f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 72:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40,7f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 3028,084f, 2768,167f, 57,72984f, 2944,284f, 2772,836f, 30,23068f, 85f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 105:
		case 106:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 305f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 2097,951f, 4820,308f, 55,48169f, 2151,254f, 4726,398f, 31,0732f, 120f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 125:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 4,7f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -763,5086f, -1297,98f, 2,000373f, -864,1372f, -1278,007f, 24,15038f, 85f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 126:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 52f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 1137,022f, 89,06853f, 74,89022f, 1267,821f, 292,0106f, 102,9904f, 195f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 127:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35,6f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 2512,305f, 1519,462f, 28,55504f, 2380,374f, 1521,587f, 58,80984f, 90f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 128:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 10,0979f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -193,5583f, 6533,439f, -1,902109f, -299,2512f, 6645,049f, 20,45973f, 120f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 129:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (system::vdist2(Param1, -75,59782f, -818,6082f, 325,1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		
		case 131:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 133f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -1171,147f, 4647,89f, 203,7937f, -1280,149f, 4457,597f, 5,653551f, 120f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 132:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 91,6f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -687,974f, 4499,52f, 114,781f, -826,0081f, 4496,864f, 49,88359f, 140f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 134:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -1364,701f, 4490,626f, 49,52477f, -1367,169f, 4340,34f, -1,682158f, 100f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 135:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 2566,189f, 5007,007f, 97,36896f, 2491,714f, 4923,261f, 30,43494f, 80f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 136:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 69f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 1009,917f, -163,4684f, 102,1028f, 1113,474f, -221,3295f, 49,8745f, 90f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 107:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 12f;
			}
			if (system::vdist2(Param1, -1230,622f, -2049,97f, 12,8882f) < (75f * 75f))
			{
				return 1;
			}
			break;
		
		case 65:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 47f;
			}
			if (system::vdist2(Param1, -1968,1f, 3116,7f, 46,8882f) < (30f * 30f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_148(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 9:
			iVar0 = 2;
			switch (unk_0xC5935DFB3F39785A(0, iVar0))
			{
				case 0:
					*uParam1 = { -1646,118f, 4206,743f, 82,9658f };
					*uParam2 = 251,0217f;
					break;
				
				case 1:
					*uParam1 = { -1582,89f, 4201,409f, 79,5905f };
					*uParam2 = 95,4232f;
					break;
			}
			return 1;
			break;
		
		case 11:
			iVar0 = 2;
			switch (unk_0xC5935DFB3F39785A(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885,446f, 4738,612f, 39,4154f };
					*uParam2 = 43,9908f;
					break;
				
				case 1:
					*uParam1 = { 1702,424f, 4687,697f, 41,9431f };
					*uParam2 = 2,4487f;
					break;
			}
			return 1;
			break;
		
		case 12:
			iVar0 = 2;
			switch (unk_0xC5935DFB3F39785A(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885,446f, 4738,612f, 39,4154f };
					*uParam2 = 43,9908f;
					break;
				
				case 1:
					*uParam1 = { 1702,424f, 4687,697f, 41,9431f };
					*uParam2 = 2,4487f;
					break;
			}
			return 1;
			break;
		
		case 14:
			iVar0 = 2;
			switch (unk_0xC5935DFB3F39785A(0, iVar0))
			{
				case 0:
					*uParam1 = { -2934,66f, 3238,404f, 9,4456f };
					*uParam2 = 228,5574f;
					break;
				
				case 1:
					*uParam1 = { -2842,023f, 3145,086f, 9,24f };
					*uParam2 = 45,7287f;
					break;
			}
			return 1;
			break;
		
		case 17:
			*uParam1 = { -204,0333f, 1313,973f, 303,4189f };
			*uParam2 = 126,7738f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { -906,4329f, -2694,28f, 12,8182f };
			*uParam2 = 329,3241f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { -142,367f, -895,0251f, 28,191f };
			*uParam2 = 71,6555f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1753,901f, 107,8206f, 170,2481f };
			*uParam2 = 288,8676f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { -1859,543f, -411,3196f, 44,9677f };
			*uParam2 = 242,8712f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 827,072f, 1282,288f, 359,2872f };
			*uParam2 = 90f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -640,2675f, 6050,98f, 7,4082f };
			*uParam2 = 138,3021f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { -92,2052f, -1254,828f, 28,1682f };
			*uParam2 = 349,959f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { -701,0541f, 5819,116f, 16,198f };
			*uParam2 = 336,3649f;
			return 1;
			break;
		
		case 28:
		case 29:
			*uParam1 = { 569,276f, -1730,967f, 28,1277f };
			*uParam2 = 246,5764f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { -1110,088f, 253,6757f, 63,5431f };
			*uParam2 = 279,1973f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 67,1562f, 4560,134f, 97,8678f };
			*uParam2 = 113,412f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { -1069,076f, 789,2375f, 164,9551f };
			*uParam2 = 98,4554f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { -1073,129f, 364,1223f, 67,3617f };
			*uParam2 = 359,3075f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { -91,4237f, -1305,558f, 28,1569f };
			*uParam2 = 2,2198f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 2479,249f, 3401,234f, 48,9551f };
			*uParam2 = 35,1009f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { -60,0571f, 292,1416f, 104,6818f };
			*uParam2 = 74,4771f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 166,2055f, 194,86f, 104,9587f };
			*uParam2 = 247,5814f;
			return 1;
			break;
		
		case 50:
			*uParam1 = { 1149,978f, -506,4045f, 63,7076f };
			*uParam2 = 97,5469f;
			return 1;
			break;
		
		case 58:
		case 59:
		case 62:
			*uParam1 = { -27,2198f, -1467,933f, 29,8592f };
			*uParam2 = 273,1409f;
			return 1;
			break;
	}
	return 0;
}

int func_149(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 9:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 83,3f;
			}
			if (system::vdist2(Param1, -1619,53f, 4204,1f, 83,3f) < (20f * 20f))
			{
				return 1;
			}
			break;
		
		case 11:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 1882,79f, 4725,034f, 34,74373f, 1701,497f, 4677,47f, 47,89289f, 159,5f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 12:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 1882,79f, 4725,034f, 34,74373f, 1701,497f, 4677,47f, 47,89289f, 159,5f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 14:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 11,66f;
			}
			if (system::vdist2(Param1, -2892,93f, 3192,37f, 11,66f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 17:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 302,86f;
			}
			if (system::vdist2(Param1, -188,22f, 1296,1f, 302,86f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 18:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 14,64f;
			}
			if (system::vdist2(Param1, -954,19f, -2760,05f, 14,64f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 19:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (system::vdist2(Param1, -75,59782f, -818,6082f, 325,1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		
		case 20:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 170,29f;
			}
			if (system::vdist2(Param1, 1732,27f, 96,36f, 170,29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 21:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44,9677f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -1903,322f, -401,2384f, 19,23456f, -1844,879f, -445,7261f, 73,56197f, 115f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 22:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 359f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 794,2453f, 1277,443f, -100f, 833,8215f, 1277,108f, 400f, 19f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 23:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -1015,526f, 6287,513f, -10,94449f, -761,3104f, 5895,014f, 45,33727f, 167,75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29,6f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -72,13491f, -1267,587f, 27,68361f, -72,18015f, -1256,712f, 31f, 30f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 26:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 16,3f;
			}
			if (system::vdist2(Param1, -683,4159f, 5841,043f, 16,3306f) < (20f * 20f))
			{
				return 1;
			}
			break;
		
		case 28:
		case 29:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29f;
			}
			if (system::vdist2(Param1, 566,1639f, -1773,817f, 29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 30:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 63,1146f;
			}
			if (system::vdist2(Param1, -1103,628f, 288,1084f, 63,1146f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 33:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -21,12362f, 4518,907f, 119,7836f, 43,13283f, 4538,929f, 72,58955f, 48f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 37:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67,5f;
			}
			if (system::vdist2(Param1, -1099,502f, 790,2614f, 163,3998f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 39:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67,5f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -1088,425f, 372,0723f, 62,75896f, -967,03f, 363,5976f, 101,3483f, 75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 43:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28,2f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -91,45676f, -1296,975f, 26,15437f, 40,67288f, -1297,459f, 58,29368f, 110f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 44:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 49,9f;
			}
			if (system::vdist2(Param1, 2468,51f, 3437,39f, 49,9f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 110f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -78,38029f, 285,5254f, 102,6286f, -51,1546f, 357,5217f, 122,0617f, 40f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 49:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 420,5196f, 116,2892f, 77,57532f, 212,2937f, 193,6794f, 131,8767f, 250f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 50:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 64f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 1140,158f, -540,9644f, 49,99944f, 972,3716f, -535,1002f, 85,64397f, 168,25f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 58:
		case 59:
		case 62:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29,6f;
			}
			if (system::vdist2(Param1, -16,5304f, -1473,121f, 29,611f) < (8f * 8f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_150(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 3:
			*uParam1 = { -1456,347f, -962,5814f, 6,3112f };
			*uParam2 = 140,57f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { 147,6034f, -404,7993f, 40,0892f };
			*uParam2 = 164,0206f;
			return 1;
			break;
		
		case 32:
		case 38:
			*uParam1 = { 1361,675f, -2040,575f, 51,0214f };
			*uParam2 = 281,5022f;
			return 1;
			break;
		
		case 41:
		case 47:
			iVar0 = 2;
			switch (unk_0xC5935DFB3F39785A(0, iVar0))
			{
				case 0:
					*uParam1 = { -43,9252f, -1460,432f, 30,7052f };
					*uParam2 = 104,5827f;
					break;
				
				case 1:
					*uParam1 = { 14,0313f, -1460,48f, 29,4397f };
					*uParam2 = 61,9499f;
					break;
			}
			return 1;
			break;
		
		case 48:
			*uParam1 = { -2313,9f, 450,9f, 173,47f };
			*uParam2 = 178,6132f;
			return 1;
			break;
		
		case 45:
			iVar0 = 3;
			switch (unk_0xC5935DFB3F39785A(0, iVar0))
			{
				case 0:
					*uParam1 = { 1369,246f, 1147,653f, 112,7592f };
					*uParam2 = 182,0998f;
					break;
				
				case 1:
					*uParam1 = { 1360,848f, 1139,121f, 112,7592f };
					*uParam2 = 83,3356f;
					break;
				
				case 2:
					*uParam1 = { 1364,751f, 1154,367f, 112,7592f };
					*uParam2 = 223,2795f;
					break;
			}
			return 1;
			break;
		
		case 24:
			iVar0 = 2;
			*uParam1 = { 1430,097f, -2588,065f, 47,0326f };
			*uParam2 = 353,6747f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { -943,9154f, -487,7569f, 35,7331f };
			*uParam2 = 27,4f;
			return 1;
			break;
		
		case 86:
			*uParam1 = { 764,6179f, -972,5101f, 24,903f };
			*uParam2 = 162,2939f;
			return 1;
			break;
		
		case 87:
			*uParam1 = { 185,1471f, -3047,229f, 4,7824f };
			*uParam2 = 163,8686f;
			return 1;
			break;
		
		case 78:
			iVar0 = 2;
			switch (unk_0xC5935DFB3F39785A(0, iVar0))
			{
				case 0:
					*uParam1 = { 504,1742f, -1652,472f, 28,1893f };
					*uParam2 = 52,3367f;
					break;
				
				case 1:
					*uParam1 = { 275,9677f, -1554,22f, 28,0311f };
					*uParam2 = 303,3013f;
					break;
			}
			return 1;
			break;
		
		case 79:
			iVar0 = 2;
			switch (unk_0xC5935DFB3F39785A(0, iVar0))
			{
				case 0:
					*uParam1 = { 853,9595f, -1590,922f, 30,5996f };
					*uParam2 = 7,148f;
					break;
				
				case 1:
					*uParam1 = { 847,5631f, -1559,719f, 28,7923f };
					*uParam2 = 20,965f;
					break;
			}
			return 1;
			break;
		
		case 83:
			iVar0 = 2;
			switch (unk_0xC5935DFB3F39785A(0, iVar0))
			{
				case 0:
					*uParam1 = { 2602,427f, 2852,173f, 35,28f };
					*uParam2 = 19,36f;
					break;
				
				case 1:
					*uParam1 = { 2686,404f, 2957,39f, 35,4683f };
					*uParam2 = 106,36f;
					break;
			}
			return 1;
			break;
		
		case 76:
		case 84:
			*uParam1 = { 135,4725f, -1309,896f, 28,0485f };
			*uParam2 = 301,12f;
			return 1;
			break;
	}
	return 0;
}

int func_151(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 3:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 7f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -1535,754f, -922,101f, 4,122119f, -1487,87f, -961,3929f, 26,71922f, 50f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 8:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 53,12898f, -463,9999f, 36,9208f, 99,3761f, -329,3476f, 118,0454f, 125f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 32:
		case 38:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51,0214f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 1420,347f, -2036,558f, 47,36072f, 1341,11f, -2103,844f, 72,32651f, 55f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 41:
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51,0214f;
			}
			if (system::vdist2(Param1, -13,89061f, -1449,29f, 29,64636f) < (36f * 36f))
			{
				return 1;
			}
			break;
		
		case 48:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 173,47f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -2306,98f, 435,3038f, 171,4666f, -2303,291f, 366,3199f, 179,6018f, 65,5f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 45:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 114f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 1324,172f, 1110,748f, 99,65493f, 1523,097f, 1110,473f, 132,8859f, 170f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 46f;
			}
			if (system::vdist2(Param1, 1330,389f, -2553,744f, 45,9221f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 60:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34,5f;
			}
			if (unk_0x26715B0ED6702C87(Param1, -995,978f, -517,4324f, 11,37763f, -1060,725f, -547,5588f, 65,33043f, 35,75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 86:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23,18f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 682,6544f, -968,7439f, 19,97575f, 762,8684f, -964,4064f, 43,03712f, 53f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 87:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 148,8361f, -3029,146f, 4,277727f, 148,1396f, -3342,344f, 22,90379f, 97,75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 78:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28,1893f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 446,8174f, -1691,708f, 23,28233f, 288,5565f, -1552,352f, 108,3117f, 155f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 79:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28,1893f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 910,9382f, -1749,91f, 14,50614f, 921,7415f, -1455,248f, 99,67125f, 210f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 83:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 37f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 2657,302f, 2974,529f, 34,53447f, 2591,657f, 2880,223f, 68,08156f, 78,75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 76:
		case 84:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28f;
			}
			if (unk_0x26715B0ED6702C87(Param1, 83,32325f, -1312,172f, 23,33694f, 148,383f, -1273,553f, 49,46651f, 65f, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_152(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	
	iVar0 = 263;
	fVar1 = 999999f;
	iVar3 = 65;
	while (iVar3 <= 111)
	{
		*iParam1 = iVar3;
		if (func_154(iParam1))
		{
			if (func_153(*iParam1))
			{
				Var4 = { func_84(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = system::vdist(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	iVar3 = 125;
	while (iVar3 <= 137)
	{
		*iParam1 = iVar3;
		if (func_154(iParam1))
		{
			if (func_153(*iParam1))
			{
				Var4 = { func_84(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = system::vdist(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	if (iVar0 != 263)
	{
		*iParam1 = iVar0;
		*fParam2 = fVar1;
		return 1;
	}
	*iParam1 = 263;
	*fParam2 = 999999f;
	return 0;
}

bool func_153(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xC450B06E5AAA0985(Global_33328[iVar0 /*23*/].f_19);
}

int func_154(var uParam0)
{
	if ((((((((((((((((((((*uParam0 == 70 || *uParam0 == 71) || *uParam0 == 73) || *uParam0 == 74) || *uParam0 == 75) || *uParam0 == 72) || *uParam0 == 76) || *uParam0 == 105) || *uParam0 == 106) || *uParam0 == 125) || *uParam0 == 126) || *uParam0 == 127) || *uParam0 == 128) || *uParam0 == 129) || *uParam0 == 131) || *uParam0 == 132) || *uParam0 == 134) || *uParam0 == 135) || *uParam0 == 136) || *uParam0 == 107) || *uParam0 == 65)
	{
		return 1;
	}
	return 0;
}

int func_155(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	struct<27> Var5;
	
	iVar0 = -1;
	fVar1 = 999999f;
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 63)
	{
		*iParam1 = iVar4;
		if (BitTest(Global_113969.f_18577[*iParam1 /*6*/], 0) && !BitTest(Global_113969.f_18577[*iParam1 /*6*/], 3))
		{
			func_98(*iParam1, &Var5);
			if (BitTest(Var5.f_26, func_156()))
			{
				Var3 = { Var5.f_6 };
				if (uParam0->f_2 == 1f)
				{
					Var3.f_2 = 1f;
				}
				fVar2 = system::vdist(*uParam0, Var3);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 209f)
					{
						fVar1 = fVar2;
						iVar0 = iVar4;
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = iVar0;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}

int func_156()
{
	if (func_39(14))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[0 /*29*/])
			{
				return 0;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[1 /*29*/])
			{
				return 1;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[2 /*29*/])
			{
				return 2;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			return 3;
		}
	}
	return func_56();
}

int func_157(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	
	iVar0 = -1;
	fVar1 = 999999f;
	iVar4 = 0;
	while (iVar4 < 8)
	{
		if (Global_98446[iVar4 /*17*/])
		{
			if (Global_98446[iVar4 /*17*/].f_9 != 263)
			{
				if (unk_0xC450B06E5AAA0985(Global_33328[Global_98446[iVar4 /*17*/].f_9 /*23*/].f_19))
				{
					Var3 = { unk_0x3CF9D442F2C902BD(Global_33328[Global_98446[iVar4 /*17*/].f_9 /*23*/].f_19) };
					if (uParam0->f_2 == 1f)
					{
						Var3.f_2 = 1f;
					}
					fVar2 = system::vdist(*uParam0, Var3);
					if (fVar2 < fVar1)
					{
						if (fVar2 < Global_98446[iVar4 /*17*/].f_10.f_2)
						{
							fVar1 = fVar2;
							iVar0 = iVar4;
						}
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = Global_98446[iVar0 /*17*/].f_5;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}

void func_158()
{
	if (Global_113969.f_9088)
	{
		Global_79406 = 1;
	}
}

void func_159(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xDC469CE2BE7CE722(func_6()))
	{
		unk_0xE6E9D3B5BEFF0EB3(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			if (iVar0 > 1)
			{
				iVar2 = unk_0x619062CCF4C1D4D5(func_6(), 1);
				if (!unk_0x4FAFF4BCB7633475(iVar2))
				{
					if (!unk_0xF4244288C3EF3306(iVar2, Global_113000))
					{
						iVar3 = 0;
						if (!unk_0xC39AE5D390581AD5(Global_113000, iVar3, 0))
						{
							iVar3 = func_160(&Global_113000);
							if (unk_0xC39AE5D390581AD5(Global_113000, iVar3, 0))
							{
								unk_0x974022927CB47E68(iVar2);
								unk_0x73CAFD2038E812B3(iVar2, Global_113000, iVar3);
							}
						}
						else
						{
							unk_0x974022927CB47E68(iVar2);
							unk_0x73CAFD2038E812B3(iVar2, Global_113000, iVar3);
						}
					}
				}
			}
			iVar2 = unk_0x619062CCF4C1D4D5(func_6(), 0);
			if (!unk_0x4FAFF4BCB7633475(iVar2))
			{
				if (!unk_0xF4244288C3EF3306(iVar2, Global_113000))
				{
					unk_0x974022927CB47E68(iVar2);
					iVar3 = 1;
					if (iParam0 == 1)
					{
						iVar3 = 2;
					}
					if (!unk_0xC39AE5D390581AD5(Global_113000, iVar3, 0))
					{
						iVar3 = func_160(&Global_113000);
						if (unk_0xC39AE5D390581AD5(Global_113000, iVar3, 0))
						{
							unk_0x974022927CB47E68(iVar2);
							unk_0x73CAFD2038E812B3(iVar2, Global_113000, iVar3);
						}
					}
					else
					{
						unk_0x974022927CB47E68(iVar2);
						unk_0x73CAFD2038E812B3(iVar2, Global_113000, iVar3);
					}
				}
			}
		}
	}
}

int func_160(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(*uParam0, 0))
		{
			if (unk_0xC39AE5D390581AD5(*uParam0, 0, 0))
			{
				return 0;
			}
			if (unk_0xC39AE5D390581AD5(*uParam0, 1, 0))
			{
				return 1;
			}
			if (unk_0xC39AE5D390581AD5(*uParam0, 2, 0))
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_161(int iParam0, int iParam1)
{
	return (unk_0x1DD05E817C89C737() - iParam0) > iParam1;
}

void func_162(bool bParam0)
{
	if (bParam0)
	{
		func_169();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_168(0))
		{
			func_163(0);
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

void func_163(int iParam0)
{
	if (func_167())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_166())
		{
			func_165(1, 1);
		}
		else
		{
			func_165(0, 0);
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
	if (!func_164())
	{
		Global_20930.f_1 = 3;
	}
}

int func_164()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_165(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_168(0))
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

bool func_166()
{
	return BitTest(Global_1956920, 5);
}

bool func_167()
{
	return BitTest(Global_1956920, 19);
}

int func_168(int iParam0)
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

void func_169()
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

void func_170()
{
	struct<3> Var0;
	var uVar1;
	
	if (!unk_0x4FAFF4BCB7633475(Global_113001) && unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
	{
		if (unk_0xF4244288C3EF3306(Global_113001, Global_113000))
		{
			if (unk_0x1CE980E99A2A6FB6(Global_113000))
			{
				if (!unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_enter", 3) && !unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_idle", 3))
				{
					if (!func_2(Global_113001, joaat("script_task_vehicle_temp_action")))
					{
						unk_0xFCCE667AD0E974AD(Global_113001, Global_113000, 1, 1000000);
					}
					else
					{
						func_176();
					}
				}
				func_175(&Global_113000, iLocal_837);
			}
			else if (!func_2(Global_113001, joaat("script_task_vehicle_park")))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(Global_113000, 1) };
				uVar1 = unk_0xCFC0C995455A6204(Global_113000);
				unk_0x2D864CC37DDFA963(Global_113001, Global_113000, Var0, uVar1, 3, 60f, 0);
			}
		}
	}
}

void func_171()
{
	int iVar0;
	float fVar1;
	
	if (bLocal_58)
	{
		if (bLocal_59)
		{
			func_122();
			if (unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
			{
				if (!unk_0x4FAFF4BCB7633475(Global_113001))
				{
					if (func_173())
					{
						if (unk_0xDF93B3CFAC96698F(Global_113000) < 2f)
						{
							if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
							{
								if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Global_113000, 1))
								{
									unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
								}
							}
							unk_0xFCCE667AD0E974AD(Global_113001, Global_113000, 24, 5000);
							unk_0x44FB298D6382876D(Global_113001, 1);
							bLocal_63 = true;
							iLocal_820 = 2;
						}
					}
					else if (unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_enter", 3) || unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_idle", 3))
					{
						if (unk_0x9E437CA2E2CAD79D(Global_113001, unk_0x4A8C381C258A124D()))
						{
							unk_0x84B06A81C98DA4B8(Global_113001);
						}
						unk_0x10425721983AE158(Global_113001, &cLocal_822, "leanover_exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_exit", 3))
					{
						unk_0x458AA1A01F53901E(Global_113001, &cLocal_822, "leanover_exit", 1,2f);
						iLocal_88 = unk_0x1DD05E817C89C737();
						func_175(&Global_113000, iLocal_837);
					}
					else if (!func_2(Global_113001, joaat("script_task_perform_sequence")))
					{
						if (func_172(&iLocal_88, iLocal_837))
						{
							if (!func_2(Global_113001, joaat("script_task_vehicle_temp_action")))
							{
								unk_0xFCCE667AD0E974AD(Global_113001, Global_113000, 1, 1000000);
							}
						}
						else
						{
							iLocal_54 = 0;
							if (bLocal_62)
							{
								fVar1 = 25f;
								iVar0 = iLocal_68;
							}
							else
							{
								fVar1 = 12f;
								iVar0 = iLocal_67;
							}
							unk_0x974022927CB47E68(Global_113001);
							unk_0x84B06A81C98DA4B8(Global_113001);
							unk_0x6D618646705A0465(Global_113001, 0,5f);
							unk_0xB5396F1FB088FE38(&uLocal_811);
							unk_0x6C33493626F3C0D1(0, Global_113000, Global_113007, fVar1, iVar0, 45f);
							unk_0x2D864CC37DDFA963(0, Global_113000, Global_113007, Global_113013, iLocal_108, 60f, 1);
							unk_0x93C0674FC00824D0(uLocal_811);
							unk_0x4BD42B0527065BB6(Global_113001, uLocal_811);
							unk_0xD0557B139A542F12(&uLocal_811);
						}
					}
				}
			}
		}
	}
}

int func_172(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	if (func_161(*iParam0, 2000) || *iParam0 == -1)
	{
		return 0;
	}
	if (!unk_0xDC469CE2BE7CE722(func_6()))
	{
		*iParam0 = -1;
		return 0;
	}
	unk_0xE6E9D3B5BEFF0EB3(func_6(), &uVar1, &iVar0);
	if (iVar0 < 1)
	{
		*iParam0 = -1;
		return 0;
	}
	bVar4 = true;
	bVar5 = false;
	iVar3 = unk_0x619062CCF4C1D4D5(func_6(), 0);
	if (!unk_0x4FAFF4BCB7633475(iVar3))
	{
		iVar6 = 1;
		if (iParam1 == 1)
		{
			iVar6 = 2;
		}
		bVar4 = true;
		iVar2 = unk_0xFD5C5BBD1FE92BB7(Global_113000, iVar6, 0);
		if (unk_0xFC8BFE4B41177C22(iVar2))
		{
			if (iVar2 == unk_0x4A8C381C258A124D())
			{
				bVar4 = false;
			}
			else if (iVar2 == iVar3)
			{
				bVar4 = false;
			}
		}
		if (unk_0x49F8918E2DC5FFBC(iVar3, 167, 0))
		{
			bVar4 = false;
		}
		if (func_2(iVar3, joaat("script_task_enter_vehicle")))
		{
			bVar4 = false;
			bVar5 = true;
		}
		if (bVar4)
		{
			unk_0xEBA229B2E0BB05E0(iVar3, Global_113000, 20000, iVar6, 2f, 9437185, 0, 0);
			bVar5 = true;
		}
	}
	if (iVar0 > 1)
	{
		iVar3 = unk_0x619062CCF4C1D4D5(func_6(), 1);
		if (!unk_0x4FAFF4BCB7633475(iVar3))
		{
			bVar4 = true;
			iVar6 = 0;
			iVar2 = unk_0xFD5C5BBD1FE92BB7(Global_113000, iVar6, 0);
			if (unk_0xFC8BFE4B41177C22(iVar2))
			{
				if (iVar2 == unk_0x4A8C381C258A124D())
				{
					bVar4 = false;
				}
				else if (iVar2 == iVar3)
				{
					bVar4 = false;
				}
			}
			if (unk_0x49F8918E2DC5FFBC(iVar3, 167, 0))
			{
				bVar4 = false;
			}
			if (func_2(iVar3, joaat("script_task_enter_vehicle")))
			{
				bVar4 = false;
				bVar5 = true;
			}
			if (bVar4)
			{
				unk_0xEBA229B2E0BB05E0(iVar3, Global_113000, 20000, iVar6, 2f, 9437185, 0, 0);
				bVar5 = true;
			}
		}
	}
	if (bVar5)
	{
		return 1;
	}
	return 0;
}

int func_173()
{
	if ((unk_0x65FFA94B82A71741(Global_113000, Global_113007, 45f, 45f, 20f, 0, 1, 0) || iLocal_54) || iLocal_819 == 4)
	{
		iLocal_54 = 1;
		if (unk_0x9B5C1660CCDF7189(Global_113001, joaat("script_task_perform_sequence")) == 7)
		{
			return 1;
		}
	}
	return 0;
}

int func_174()
{
	if (bLocal_58)
	{
		if (bLocal_59)
		{
			return 1;
		}
		else if (func_125(&Local_41, &Global_113007, &Global_113013))
		{
			iLocal_101 = 0;
			Local_831 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
			fLocal_81 = system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Global_113007);
			bLocal_59 = true;
			return 1;
		}
	}
	return 0;
}

void func_175(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (unk_0xDC469CE2BE7CE722(func_6()))
	{
		unk_0xE6E9D3B5BEFF0EB3(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = unk_0x619062CCF4C1D4D5(func_6(), 0);
			if (!unk_0x4FAFF4BCB7633475(iVar2))
			{
				iVar5 = 1;
				if (iParam1 == 1)
				{
					iVar5 = 2;
				}
				bVar4 = true;
				iVar3 = unk_0xFD5C5BBD1FE92BB7(*uParam0, iVar5, 0);
				if (unk_0xFC8BFE4B41177C22(iVar3))
				{
					if (iVar3 == unk_0x4A8C381C258A124D())
					{
						bVar4 = false;
					}
					else if (iVar3 == iVar2)
					{
						bVar4 = false;
					}
				}
				if (unk_0x49F8918E2DC5FFBC(iVar2, 167, 0))
				{
					bVar4 = false;
				}
				if (func_2(iVar2, joaat("script_task_enter_vehicle")))
				{
					bVar4 = false;
				}
				if (bVar4)
				{
					unk_0xEBA229B2E0BB05E0(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0, 0);
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = unk_0x619062CCF4C1D4D5(func_6(), 1);
				if (!unk_0x4FAFF4BCB7633475(iVar2))
				{
					bVar4 = true;
					iVar5 = 0;
					iVar3 = unk_0xFD5C5BBD1FE92BB7(*uParam0, iVar5, 0);
					if (unk_0xFC8BFE4B41177C22(iVar3))
					{
						if (iVar3 == unk_0x4A8C381C258A124D())
						{
							bVar4 = false;
						}
						else if (iVar3 == iVar2)
						{
							bVar4 = false;
						}
					}
					if (unk_0x49F8918E2DC5FFBC(iVar2, 167, 0))
					{
						bVar4 = false;
					}
					if (func_2(iVar2, joaat("script_task_enter_vehicle")))
					{
						bVar4 = false;
					}
					if (bVar4)
					{
						unk_0xEBA229B2E0BB05E0(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0, 0);
					}
				}
			}
		}
	}
}

int func_176()
{
	if (!unk_0x4FAFF4BCB7633475(Global_113001) && unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
	{
		if (unk_0xF4244288C3EF3306(Global_113001, Global_113000))
		{
			unk_0x80813AC549A1E8AE(&cLocal_822);
			if (unk_0xE100DD4F82A51BDE(&cLocal_822))
			{
				if (unk_0x9E437CA2E2CAD79D(Global_113001, unk_0x4A8C381C258A124D()))
				{
					unk_0x84B06A81C98DA4B8(Global_113001);
				}
				unk_0xB5396F1FB088FE38(&uLocal_811);
				unk_0x10425721983AE158(0, &cLocal_822, "leanover_enter", 4f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, &cLocal_822, "leanover_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_811);
				unk_0x4BD42B0527065BB6(Global_113001, uLocal_811);
				unk_0xD0557B139A542F12(&uLocal_811);
				return 1;
			}
		}
	}
	return 0;
}

int func_177()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_107))
	{
		return 1;
	}
	if (unk_0xFC8BFE4B41177C22(Global_113000))
	{
		if (unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
		{
			iLocal_107 = unk_0x4E55EAB577C13329(iLocal_106, unk_0xD1A6A821F5AC81DB(Global_113000, 1), 1, 1, 0);
			unk_0x4D306DD94DD6FDBA(iLocal_107, Global_113000, unk_0x365DC1E8054AF31A(Global_113000, "Chassis"), Local_835, Local_836, 0, 0, 0, 0, 2, 1, 0);
			unk_0x0B29D0B41AC20799(Global_113000, 0);
			if (!unk_0xC13AFEAFC3F7AD96("taxi"))
			{
				unk_0x106F99CDCDEED9A0("taxi", 0);
				unk_0xF1C26EB47E689774(unk_0x4B423FAA24E8ABF0(iLocal_107));
			}
			uLocal_91 = unk_0x08732C0099FA1813("taxi");
		}
	}
	return 0;
}

int func_178()
{
	unk_0xEC9DAA34BBB4658C(iLocal_106);
	uLocal_109 = unk_0x8DE4F68A9728925E("taxi_display");
	uLocal_110 = unk_0x8DE4F68A9728925E("instructional_buttons");
	unk_0x80813AC549A1E8AE(&cLocal_822);
	if (((unk_0x6252BC0DD8A320DB(iLocal_106) && unk_0xA0C7B98BCF1EEF9E(uLocal_109)) && unk_0xA0C7B98BCF1EEF9E(uLocal_110)) && unk_0xE100DD4F82A51BDE(&cLocal_822))
	{
		return 1;
	}
	return 0;
}

void func_179()
{
	if (!unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
	{
		return;
	}
	if (!unk_0x78411E34CF90EA8C(uLocal_66))
	{
		if (!func_187() && !func_186(8, -1))
		{
			uLocal_66 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
			unk_0x03F10D56CCA2C055(uLocal_66, Global_113000, Local_833, 1);
			func_183();
			unk_0x29BBAB7031C36984(uLocal_66, 1);
		}
	}
	else if (!bLocal_58 || bLocal_57)
	{
		if (!func_187() && !func_186(8, -1))
		{
			if (!unk_0xBC886554B5888A64(uLocal_66))
			{
				func_182(4, 1, -1);
				unk_0x29BBAB7031C36984(uLocal_66, 1);
				func_181();
				unk_0x4CBC5D1BC117616B(uLocal_66, 1);
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				Global_113017 = 1;
				unk_0x2F30818D75D66C5B(1);
				func_183();
				iLocal_56 = 1;
			}
			else
			{
				func_183();
			}
			unk_0x66EFB3D6110055C4(0, 0, 1);
		}
	}
	else if (unk_0xBC886554B5888A64(uLocal_66))
	{
		unk_0x4CBC5D1BC117616B(uLocal_66, 0);
		unk_0x64BB72494B9DF6DC(0f);
		unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		Global_113017 = 0;
		unk_0x2F30818D75D66C5B(0);
		unk_0x33311EBA9464741D();
		unk_0xF3E3EA936C653F22();
		unk_0x4D2F1CB87CBF249D(0);
		iLocal_56 = 1;
		func_180();
	}
}

void func_180()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_89)
	{
		if (bLocal_58)
		{
			if (Local_41.f_0 == Local_817[iVar0 /*3*/])
			{
				iLocal_90 = iVar0;
			}
		}
		iVar0++;
	}
	unk_0x88F483FBD433696A(uLocal_109, "HIGHLIGHT_DESTINATION");
	unk_0x330108B080A2132F(iLocal_90);
	unk_0xE6B753D52F4CA222();
}

void func_181()
{
	struct<3> Var0;
	
	if (unk_0xC450B06E5AAA0985(Local_41.f_0))
	{
		Var0 = { unk_0x3CF9D442F2C902BD(Local_41.f_0) };
		if (unk_0x78411E34CF90EA8C(uLocal_66) && unk_0xBC886554B5888A64(uLocal_66))
		{
			unk_0x43F4B7E163A31644(Var0.f_0, Var0.f_1);
			unk_0xCD1B743BDEC39145(0);
			unk_0x4D2F1CB87CBF249D(1400);
		}
	}
}

void func_182(bool bParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
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
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1668667.f_1046), iParam0);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Global_1668667.f_1046), iParam0);
			}
			break;
	}
}

void func_183()
{
	if (unk_0x78411E34CF90EA8C(uLocal_66))
	{
		func_184(Global_113000, &uLocal_66, Local_834);
		unk_0x58BDA5D9262F5D30(uLocal_66, fLocal_72);
		unk_0x3AAB5D3F3D4028CC(uLocal_66, 0,01f);
		unk_0x2F0877034716FB33(uLocal_66, 1);
		unk_0x2AFB778D9C7EA690(1);
	}
}

void func_184(int iParam0, var uParam1, struct<3> Param2)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		if (unk_0x78411E34CF90EA8C(*uParam1))
		{
			Var0 = { unk_0x88124E0D60FB8D11(iParam0, 2) };
			uVar3 = Var0.f_1;
			Var4 = { func_83(unk_0x0D1381B6E0F3987D(Global_113000, Param2) - unk_0x0D1381B6E0F3987D(Global_113000, Local_833)) };
			func_185(Var4, &uVar1, &uVar2, 1);
			unk_0x5E5CEC33463AD803(*uParam1, uVar1, uVar3, uVar2, 2);
		}
	}
}

void func_185(struct<3> Param0, var uParam1, var uParam2, int iParam3)
{
	float fVar0;
	
	if (Param0.f_1 != 0f)
	{
		*uParam2 = unk_0x4964D7A2BFD2F9A3(Param0.f_0, Param0.f_1);
	}
	else if (Param0.f_0 < 0f)
	{
		*uParam2 = -90f;
	}
	else
	{
		*uParam2 = 90f;
	}
	if (iParam3 == 1)
	{
		*uParam2 = (*uParam2 * -1f);
		if (*uParam2 < 0f)
		{
			*uParam2 = (*uParam2 + 360f);
		}
	}
	fVar0 = system::sqrt(((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)));
	if (fVar0 != 0f)
	{
		*uParam1 = unk_0x4964D7A2BFD2F9A3(Param0.f_2, fVar0);
	}
	else if (Param0.f_2 < 0f)
	{
		*uParam1 = -90f;
	}
	else
	{
		*uParam1 = 90f;
	}
}

bool func_186(int iParam0, int iParam1)
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

bool func_187()
{
	return Global_23690;
}

void func_188()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<3> Var5;
	int iVar6;
	
	iVar0 = 0;
	func_193();
	unk_0x88F483FBD433696A(uLocal_109, "CLEAR_TAXI_DISPLAY");
	unk_0xE6B753D52F4CA222();
	iVar0 = 0;
	while (iVar0 < iLocal_89)
	{
		if (!unk_0xC450B06E5AAA0985(Local_817[iVar0 /*3*/]))
		{
		}
		else if (func_128(Local_817[iVar0 /*3*/]) == -1)
		{
		}
		else if (func_132(unk_0x3CF9D442F2C902BD(Local_817[iVar0 /*3*/]), 0f, 0f, 0f, 1056964608, 0))
		{
		}
		else
		{
			unk_0x88F483FBD433696A(uLocal_109, "ADD_TAXI_DESTINATION");
			unk_0x330108B080A2132F(iVar0);
			unk_0x330108B080A2132F(unk_0x8FACE824AEC046E8(Local_817[bVar0 /*3*/]));
			unk_0xA306E6FD2A6558E6(unk_0x2B91B956D741B8CE(Local_817[bVar0 /*3*/]), &iVar1, &iVar2, &iVar3, &uVar4);
			unk_0x330108B080A2132F(iVar1);
			unk_0x330108B080A2132F(iVar2);
			unk_0x330108B080A2132F(iVar3);
			iVar6 = func_191(Local_817[bVar0 /*3*/]);
			if (iVar6 == -1)
			{
				unk_0x882AEFD55B8D51FB("STRING");
				unk_0x273F00982486DCC6(Local_817[bVar0 /*3*/]);
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("STRING");
				unk_0xACF853FB3F6EA7D4(func_189(iVar6));
				unk_0xCFAD3D478C87321A();
			}
			if (unk_0x6AEAF32EC173BB39(Local_817[bVar0 /*3*/]) == 2)
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(unk_0xA143F1936B350BD0(Local_817[bVar0 /*3*/]))))
				{
					Var5 = { unk_0xD1A6A821F5AC81DB(unk_0xBD545F8729E9F413(unk_0xA143F1936B350BD0(Local_817[bVar0 /*3*/])), 1) };
				}
			}
			else if (unk_0x6AEAF32EC173BB39(Local_817[bVar0 /*3*/]) == 1)
			{
				if (unk_0xD9F5E1FEFD1329E4(unk_0xA143F1936B350BD0(Local_817[bVar0 /*3*/]), 0))
				{
					Var5 = { unk_0xD1A6A821F5AC81DB(unk_0xA143F1936B350BD0(Local_817[bVar0 /*3*/]), 1) };
				}
			}
			else
			{
				Var5 = { unk_0x3CF9D442F2C902BD(Local_817[bVar0 /*3*/]) };
			}
			func_69(unk_0xDAEDE051F3F4FD45(Var5));
			if (Local_817[bVar0 /*3*/].f_2 == 0)
			{
				if (Local_817[bVar0 /*3*/].f_1 != 0)
				{
					unk_0x882AEFD55B8D51FB("STRTNM1");
					unk_0xD4006E065B0782FA(Local_817[bVar0 /*3*/].f_1);
					unk_0xCFAD3D478C87321A();
				}
			}
			else
			{
				unk_0x882AEFD55B8D51FB("STRTNM2");
				unk_0xD4006E065B0782FA(Local_817[bVar0 /*3*/].f_1);
				unk_0xD4006E065B0782FA(Local_817[bVar0 /*3*/].f_2);
				unk_0xCFAD3D478C87321A();
			}
			unk_0xE6B753D52F4CA222();
			if (bLocal_58)
			{
				if (Local_41.f_0 == Local_817[bVar0 /*3*/])
				{
					bLocal_90 = bVar0;
				}
			}
		}
		bVar0++;
	}
	if (bLocal_58)
	{
		unk_0x88F483FBD433696A(uLocal_109, "SHOW_TAXI_DESTINATION");
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(uLocal_109, "HIGHLIGHT_DESTINATION");
		unk_0x330108B080A2132F(bLocal_90);
		unk_0xE6B753D52F4CA222();
	}
	else
	{
		unk_0x88F483FBD433696A(uLocal_109, "SET_TAXI_PRICE");
		unk_0x330108B080A2132F(bLocal_99);
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(uLocal_109, "SHOW_TAXI_DESTINATION");
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(uLocal_109, "HIGHLIGHT_DESTINATION");
		unk_0x330108B080A2132F(bLocal_90);
		unk_0xE6B753D52F4CA222();
	}
}

char* func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
			break;
		
		case 1:
			return "SB_BAR";
			break;
		
		case 2:
			return "SB_BAR";
			break;
		
		case 3:
			return "SB_BAR";
			break;
		
		case 4:
			return "SB_BAR";
			break;
		
		case 5:
			return "SB_BAR";
			break;
		
		case 6:
			return "SB_BAR";
			break;
		
		case 7:
			return func_190(iParam0, 0, 0);
			break;
		
		case 8:
			return func_190(iParam0, 0, 0);
			break;
		
		case 9:
			return func_190(iParam0, 0, 0);
			break;
		
		case 10:
			return func_190(iParam0, 0, 0);
			break;
		
		case 11:
			return func_190(iParam0, 0, 0);
			break;
		
		case 12:
			return func_190(iParam0, 0, 0);
			break;
		
		case 13:
			return func_190(iParam0, 0, 0);
			break;
		
		case 14:
			return func_190(iParam0, 0, 0);
			break;
		
		case 15:
			return func_190(iParam0, 0, 0);
			break;
		
		case 16:
			return func_190(iParam0, 0, 0);
			break;
		
		case 17:
			return func_190(iParam0, 0, 0);
			break;
		
		case 18:
			return func_190(iParam0, 0, 0);
			break;
		
		case 19:
			return func_190(iParam0, 0, 0);
			break;
		
		case 20:
			return func_190(iParam0, 0, 0);
			break;
		
		case 21:
			return func_190(iParam0, 0, 0);
			break;
		
		case 22:
			return "SB_TAT";
			break;
		
		case 23:
			return "SB_TAT";
			break;
		
		case 24:
			return "SB_TAT";
			break;
		
		case 25:
			return "SB_TAT";
			break;
		
		case 26:
			return "SB_TAT";
			break;
		
		case 27:
			return "SB_TAT";
			break;
		
		case 28:
			return "SB_AMU2";
			break;
		
		case 29:
			return "SB_AMU";
			break;
		
		case 30:
			return "SB_AMU";
			break;
		
		case 31:
			return "SB_AMU";
			break;
		
		case 32:
			return "SB_AMU";
			break;
		
		case 33:
			return "SB_AMU";
			break;
		
		case 34:
			return "SB_AMU";
			break;
		
		case 35:
			return "SB_AMU";
			break;
		
		case 36:
			return "SB_AMU";
			break;
		
		case 37:
			return "SB_AMU";
			break;
		
		case 38:
			return "SB_AMU2";
			break;
		
		case 39:
			return func_190(iParam0, 0, 0);
			break;
		
		case 40:
			return func_190(iParam0, 0, 0);
			break;
		
		case 41:
			return func_190(iParam0, 0, 0);
			break;
		
		case 42:
			return func_190(iParam0, 0, 0);
			break;
		
		case 43:
			return func_190(iParam0, 0, 0);
			break;
		
		case 44:
			return func_190(iParam0, 0, 0);
			break;
		
		case 45:
			return func_190(iParam0, 0, 0);
			break;
		
		case 46:
			return "SB_AMU";
			break;
		
		case 47:
			return "SB_AMU";
			break;
		
		case 48:
			return "SB_AMU";
			break;
		
		case 49:
			return "SB_AMU";
			break;
		
		case 52:
			return "SB_AMU";
			break;
		
		case 50:
			return "SB_BAR";
			break;
		
		case 51:
			return "S_CL_BL";
			break;
		
		case 53:
			return "SB_AMU";
			break;
		
		case 54:
			return "SB_TAT";
			break;
		
		case 55:
			return func_190(iParam0, 0, 0);
			break;
		
		case 56:
			return "SB_AMU";
			break;
		
		case 57:
			return func_190(iParam0, 0, 0);
			break;
		
		case 58:
			return func_190(iParam0, 0, 0);
			break;
		
		case 59:
			return "SB_AMU";
			break;
		
		case 60:
			return "SB_AMU";
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_190(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
					}
					else
					{
						return "S_MO_10";
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
					}
					else
					{
						return "S_MO_10";
					}
					break;
				
				case 11:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
					}
					else
					{
						return "S_MO_B";
					}
					break;
				
				case 10:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
					}
					else
					{
						return "S_MO_T";
					}
					break;
				
				case 12:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
					}
					else
					{
						return "S_MO_HA";
					}
					break;
				
				case 13:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_AOC";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 14:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BASE";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 15:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 16:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 17:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 18:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 19:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 20:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_FIXER_HQ";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 21:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_JUGGALO_HIDEOUT";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
			break;
		
		case 48:
			return "S_G_14";
			break;
		
		case 49:
			return "S_G_15";
			break;
		
		case 52:
			return "S_G_16";
			break;
		
		case 53:
			return "S_G_17";
			break;
		
		case 50:
			return "S_H_08";
			break;
		
		case 51:
			return "S_CL_09";
			break;
		
		case 54:
			return "S_T_07";
			break;
		
		case 55:
			return "S_CL_10";
			break;
		
		case 56:
			return "S_G_18";
			break;
		
		case 57:
			return "S_CL_11";
			break;
		
		case 58:
			return "S_G_19";
			break;
		
		case 59:
			return "S_G_20";
			break;
		
		case 60:
			return "S_G_21";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_191(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 61)
	{
		iVar1 = iVar0;
		iVar2 = func_192(iVar1);
		if (Global_33328[iVar2 /*23*/].f_19 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 263;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		case 44:
			return 64;
			break;
		
		case 45:
			return 64;
			break;
		
		case 46:
			return 48;
			break;
		
		case 47:
			return 48;
			break;
		
		case 48:
			return 48;
			break;
		
		case 49:
			return 48;
			break;
		
		case 52:
			return 48;
			break;
		
		case 50:
			return 25;
			break;
		
		case 51:
			return 40;
			break;
		
		case 53:
			return 48;
			break;
		
		case 54:
			return 42;
			break;
		
		case 55:
			return 40;
			break;
		
		case 56:
			return 48;
			break;
		
		case 57:
			return 40;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 48;
			break;
		
		case 60:
			return 48;
			break;
		
		default:
			break;
	}
	return 263;
}

void func_193()
{
	int iVar0;
	
	iLocal_89 = 0;
	func_210();
	func_197(iLocal_42, 0);
	func_197(iLocal_43, 0);
	func_197(32, 0);
	func_197(143, 0);
	func_197(144, 0);
	func_197(145, 0);
	func_197(146, 0);
	func_197(78, 0);
	func_197(79, 0);
	func_197(88, 0);
	func_197(124, 0);
	func_197(112, 0);
	func_197(123, 0);
	func_197(293, 0);
	func_197(86, 0);
	func_197(77, 0);
	func_197(89, 0);
	func_197(106, 0);
	func_197(108, 0);
	func_197(120, 0);
	func_197(352, 0);
	func_197(107, 0);
	func_197(96, 0);
	func_197(104, 0);
	func_197(105, 0);
	func_197(80, 0);
	func_197(113, 0);
	func_197(118, 0);
	func_197(207, 1);
	func_197(208, 1);
	func_197(209, 1);
	func_197(210, 1);
	func_197(211, 1);
	func_197(212, 1);
	func_197(213, 1);
	func_197(214, 1);
	func_197(321, 1);
	func_197(320, 1);
	func_197(319, 1);
	func_197(322, 1);
	func_197(325, 1);
	func_197(324, 1);
	func_197(349, 1);
	func_197(323, 1);
	func_197(326, 1);
	func_197(317, 1);
	func_197(318, 1);
	func_197(363, 0);
	func_197(355, 0);
	func_197(263, 1);
	func_197(262, 1);
	func_197(267, 1);
	func_197(266, 1);
	func_197(265, 1);
	func_197(400, 0);
	func_197(381, 0);
	func_197(384, 0);
	func_197(382, 0);
	func_197(206, 0);
	func_197(405, 0);
	func_197(385, 0);
	func_197(383, 0);
	func_197(386, 0);
	func_197(387, 0);
	func_197(389, 0);
	func_197(388, 0);
	func_197(149, 0);
	func_197(66, 0);
	func_197(115, 0);
	func_197(114, 0);
	func_197(205, 1);
	func_197(48, 0);
	func_197(40, 1);
	func_197(357, 1);
	func_197(356, 1);
	func_197(359, 1);
	func_197(110, 1);
	func_197(60, 1);
	func_197(41, 1);
	func_197(61, 1);
	func_197(374, 1);
	func_197(375, 1);
	func_197(64, 1);
	func_197(165, 1);
	func_197(166, 1);
	func_197(167, 1);
	func_197(168, 1);
	func_197(169, 1);
	func_197(170, 1);
	func_197(172, 1);
	func_197(280, 1);
	func_197(37, 1);
	func_197(147, 1);
	func_197(62, 0);
	func_197(95, 1);
	func_197(99, 1);
	func_197(102, 1);
	func_197(135, 1);
	func_197(103, 1);
	func_197(90, 1);
	func_197(109, 1);
	func_197(141, 1);
	func_197(136, 1);
	func_197(127, 1);
	func_197(142, 1);
	func_197(38, 1);
	func_197(84, 1);
	func_197(119, 1);
	func_197(121, 1);
	func_197(122, 1);
	func_197(68, 1);
	func_197(126, 1);
	func_197(85, 1);
	func_197(140, 1);
	func_197(197, 1);
	func_197(162, 1);
	func_197(315, 1);
	func_197(71, 1);
	func_197(72, 1);
	func_197(446, 1);
	func_197(225, 1);
	func_197(73, 1);
	func_197(111, 1);
	func_197(75, 1);
	func_197(93, 1);
	func_197(98, 1);
	func_197(117, 1);
	iLocal_92 = func_194();
	iLocal_93 = unk_0xC802478C8862BDAD();
	if (unk_0x3D2EB53CF281A77E())
	{
		if (iLocal_92 == 0)
		{
			if (unk_0xC450B06E5AAA0985(Global_113004))
			{
				iVar0 = 0;
				while (iVar0 < 40)
				{
					if (unk_0xC450B06E5AAA0985(Local_817[iVar0 /*3*/]))
					{
						if (Local_817[iVar0 /*3*/] == Global_113004)
						{
							bLocal_90 = iVar0;
							iVar0 = 40;
						}
					}
					iVar0++;
				}
			}
		}
	}
	else if (!Global_113004 == 0)
	{
		Global_113004 = 0;
	}
	if (unk_0x3D2EB53CF281A77E())
	{
		if (!Global_113006 == -1)
		{
			iVar0 = 0;
			while (iVar0 < 40)
			{
				if (unk_0xC450B06E5AAA0985(Local_817[iVar0 /*3*/]))
				{
					if (func_128(Local_817[iVar0 /*3*/]) == Global_113006)
					{
						bLocal_90 = iVar0;
						iVar0 = 40;
					}
				}
				iVar0++;
			}
		}
	}
	else if (!Global_113006 == -1)
	{
		Global_113006 = -1;
	}
}

int func_194()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = unk_0xD56419CB9E15983F(iLocal_42);
	while (unk_0xC450B06E5AAA0985(iVar1))
	{
		if (func_196(iVar1))
		{
			if ((unk_0x6AEAF32EC173BB39(iVar1) == 4 || unk_0x6AEAF32EC173BB39(iVar1) == 6) || unk_0x6AEAF32EC173BB39(iVar1) == 3)
			{
				iVar0++;
			}
			if (unk_0x6AEAF32EC173BB39(iVar1) == 2 || unk_0x6AEAF32EC173BB39(iVar1) == 1)
			{
				if (func_195(iVar1))
				{
					iVar0++;
				}
			}
		}
		iVar1 = unk_0xA3F6143A8F610118(iLocal_42);
	}
	iVar1 = unk_0xD56419CB9E15983F(iLocal_43);
	while (unk_0xC450B06E5AAA0985(iVar1))
	{
		if (func_196(iVar1))
		{
			if (unk_0x6AEAF32EC173BB39(iVar1) == 4)
			{
				iVar0++;
			}
		}
		iVar1 = unk_0xA3F6143A8F610118(iLocal_43);
	}
	return iVar0;
}

int func_195(int iParam0)
{
	if (((unk_0x2B91B956D741B8CE(iParam0) == 9 || unk_0x2B91B956D741B8CE(iParam0) == 11) || unk_0x2B91B956D741B8CE(iParam0) == 10) || unk_0x2B91B956D741B8CE(iParam0) == 61)
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)
{
	int iVar0;
	
	if (unk_0xC450B06E5AAA0985(iParam0))
	{
		iVar0 = unk_0xC4BDFF590B6DE7A5(iParam0);
		if (!iVar0 == 0 && !iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_197(int iParam0, bool bParam1)
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar2 = unk_0xD56419CB9E15983F(iParam0);
	iVar3 = 20;
	while (unk_0xC450B06E5AAA0985(iVar2))
	{
		if (iLocal_96 >= iVar3)
		{
			system::wait(0);
			iLocal_96 = 0;
			if (!func_230())
			{
				func_238(1);
			}
			func_183();
			func_225();
			func_224();
		}
		if (iLocal_89 < 40)
		{
			if (func_196(iVar2))
			{
				if (func_209(iVar2))
				{
					if (!func_207(&iVar2))
					{
						bVar1 = false;
						switch (iParam0)
						{
							case 32:
							case 143:
							case 144:
							case 145:
							case 146:
							case 78:
							case 79:
							case 88:
							case 124:
							case 112:
							case 123:
							case 293:
							case 86:
							case 77:
							case 89:
							case 106:
							case 108:
							case 120:
							case 352:
							case 107:
							case 96:
							case 104:
							case 105:
							case 80:
							case 113:
							case 118:
							case 62:
							case 400:
							case 381:
							case 384:
							case 382:
							case 206:
							case 405:
							case 385:
							case 383:
							case 386:
							case 387:
							case 389:
							case 388:
							case 149:
							case 66:
							case 115:
							case 114:
							case 48:
							case 40:
							case 357:
							case 356:
							case 359:
							case 110:
							case 60:
							case 41:
							case 61:
							case 374:
							case 375:
							case 64:
							case 37:
							case 147:
							case 95:
							case 99:
							case 102:
							case 135:
							case 103:
							case 90:
							case 109:
							case 141:
							case 136:
							case 127:
							case 142:
							case 38:
							case 84:
							case 119:
							case 121:
							case 122:
							case 68:
							case 126:
							case 85:
							case 140:
							case 71:
							case 72:
							case 446:
							case 225:
							case 73:
							case 111:
							case 75:
							case 93:
							case 98:
							case 117:
							case 315:
							case 197:
							case 162:
							case 205:
							case 207:
							case 208:
							case 209:
							case 210:
							case 211:
							case 212:
							case 213:
							case 214:
							case 165:
							case 166:
							case 167:
							case 168:
							case 169:
							case 170:
							case 172:
							case 280:
							case 355:
							case 263:
							case 262:
							case 267:
							case 266:
							case 265:
							case 321:
							case 320:
							case 319:
							case 322:
							case 325:
							case 324:
							case 349:
							case 323:
							case 326:
							case 317:
							case 318:
								bVar1 = true;
								break;
							
							case 363:
								iVar5 = func_206(&iVar2);
								if (((iVar5 == 33 || iVar5 == 92) || iVar5 == 89) || iVar5 == 88)
								{
									bVar1 = false;
								}
								else
								{
									bVar1 = true;
								}
								break;
							
							default:
								bVar1 = false;
								if (iParam0 == iLocal_43)
								{
									bVar1 = true;
								}
								else if (iParam0 == iLocal_42)
								{
									if (func_205(&iVar2))
									{
										bVar1 = true;
									}
								}
								break;
						}
						if (unk_0xC450B06E5AAA0985(Global_113003))
						{
							if (func_128(iVar2) == iLocal_42)
							{
								if (!Global_113003 == iVar2)
								{
									bVar1 = false;
								}
							}
						}
						if (bVar1)
						{
							bVar1 = false;
							if (func_196(iVar2))
							{
								iVar4 = unk_0x6AEAF32EC173BB39(iVar2);
								if (((iVar4 == 4 || iVar4 == 5) || iVar4 == 2) || iVar4 == 1)
								{
									bVar1 = true;
								}
							}
							if (bVar1)
							{
								func_204(&iVar2, &Var0);
								func_198(Var0, bParam1);
							}
						}
					}
				}
			}
		}
		iLocal_96++;
		iVar2 = unk_0xA3F6143A8F610118(iParam0);
	}
}

void func_198(struct<3> Param0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	if (func_128(Param0.f_0) == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_128(Local_817[iVar0 /*3*/]) == func_128(Param0.f_0))
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		else if (iVar0 == iLocal_89)
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (iVar0 < iVar1)
		{
			iVar0 = iVar1;
		}
		if (iVar0 < iLocal_89)
		{
			if (func_128(Local_817[iVar0 /*3*/]) == func_128(Param0.f_0))
			{
				if (func_202(Param0, Local_817[iVar0 /*3*/]))
				{
					if (bParam1)
					{
						func_201(Param0, iVar0);
						iVar0 = 40;
						return;
					}
					else
					{
						func_199(Param0, iVar0);
						iLocal_89++;
						iVar0 = 40;
						return;
					}
				}
				else if (bParam1)
				{
					iVar0 = 40;
					return;
				}
			}
			else
			{
				func_199(Param0, iVar0);
				iLocal_89++;
				iVar0 = 40;
				return;
			}
		}
		else
		{
			func_199(Param0, iVar0);
			iLocal_89++;
			iVar0 = 40;
			return;
		}
		iVar0++;
	}
}

void func_199(struct<3> Param0, int iParam1)
{
	func_200(iParam1);
	Local_817[iParam1 /*3*/] = { Param0 };
	if (func_128(Local_817[iParam1 /*3*/]) == unk_0x2A3612A4B836469E())
	{
		iLocal_95 = iParam1;
		Local_832 = { unk_0x3CF9D442F2C902BD(Local_817[iParam1 /*3*/]) };
	}
}

void func_200(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 39;
	while (iVar0 > iParam0)
	{
		Var1 = { Local_817[(iVar0 - 1) /*3*/] };
		Local_817[iVar0 /*3*/] = { Var1 };
		if ((iVar0 - 1) == iLocal_95)
		{
			iLocal_95 = iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
}

void func_201(struct<3> Param0, int iParam1)
{
	Local_817[iParam1 /*3*/] = { Param0 };
	if (func_128(Local_817[iParam1 /*3*/]) == unk_0x2A3612A4B836469E())
	{
		iLocal_95 = iParam1;
		Local_832 = { unk_0x3CF9D442F2C902BD(Local_817[iParam1 /*3*/]) };
	}
}

int func_202(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_203(uParam0) < func_203(uParam3))
	{
		return 1;
	}
	return 0;
}

float func_203(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 1E+07f };
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xC450B06E5AAA0985(uParam0))
		{
			Var0 = { func_48(iParam0) - unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		}
	}
	return system::vmag(Var0);
}

void func_204(int iParam0, var uParam1)
{
	struct<3> Var0;
	
	*uParam1 = *iParam0;
	if (!*uParam1 == Global_113005)
	{
		Var0 = { func_48(*uParam1) };
		unk_0x77BCD89051F77C43(Var0, &(uParam1->f_1), &(uParam1->f_2));
	}
	else
	{
		unk_0x77BCD89051F77C43(Global_113007, &(uParam1->f_1), &(uParam1->f_2));
	}
}

int func_205(var uParam0)
{
	int iVar0;
	
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		iVar0 = unk_0x2B91B956D741B8CE(*uParam0);
		if (((iVar0 == 9 || iVar0 == 11) || iVar0 == 10) || iVar0 == 61)
		{
			return 1;
		}
		else if ((iVar0 == 12 || iVar0 == 14) || iVar0 == 13)
		{
			return 1;
		}
	}
	return 0;
}

int func_206(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_98446[iVar0 /*17*/])
		{
			if (Global_98446[iVar0 /*17*/].f_9 != 263)
			{
				if (unk_0xC450B06E5AAA0985(Global_33328[Global_98446[iVar0 /*17*/].f_9 /*23*/].f_19))
				{
					if (Global_33328[Global_98446[iVar0 /*17*/].f_9 /*23*/].f_19 == *uParam0)
					{
						return Global_98446[iVar0 /*17*/].f_5;
					}
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_207(var uParam0)
{
	if (!unk_0xC450B06E5AAA0985(*uParam0))
	{
		return 1;
	}
	if (Global_113002 == *uParam0)
	{
		return 1;
	}
	if (unk_0xA247F53580E53DCE(*uParam0) == 39)
	{
		return 1;
	}
	if (func_208(unk_0x3CF9D442F2C902BD(*uParam0), 0f, 0f, 0f, 0))
	{
		return 1;
	}
	if (func_128(*uParam0) == -1)
	{
		return 1;
	}
	return 0;
}

bool func_208(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_209(var uParam0)
{
	float fVar0;
	
	if (!func_128(uParam0) == iLocal_42)
	{
		fVar0 = func_203(uParam0);
		if (fVar0 > 50f)
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

void func_210()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		Local_817[iVar0 /*3*/] = 0;
		iVar0++;
	}
	iLocal_89 = 0;
	iLocal_95 = -1;
	Local_832 = { 0f, 0f, 0f };
	iLocal_96 = 0;
}

bool func_211()
{
	bool bVar0;
	struct<3> Var1;
	var uVar2;
	
	bVar0 = false;
	if (!unk_0xC450B06E5AAA0985(Local_817[bLocal_90 /*3*/]))
	{
		if (bLocal_90 != iLocal_95)
		{
			return 1;
		}
	}
	if (system::timerb() > 250)
	{
		if (!bVar0)
		{
			if (iLocal_93 != unk_0xC802478C8862BDAD())
			{
				bVar0 = true;
			}
			iLocal_93 = unk_0xC802478C8862BDAD();
			if (iLocal_94 != func_212())
			{
				bVar0 = true;
			}
			iLocal_94 = func_212();
		}
		if (!bVar0)
		{
			if (iLocal_95 != -1)
			{
				if (unk_0xC450B06E5AAA0985(Local_817[iLocal_95 /*3*/]))
				{
					if (func_128(Local_817[iLocal_95 /*3*/]) == unk_0x2A3612A4B836469E())
					{
						Var1 = { unk_0x3CF9D442F2C902BD(Local_817[iLocal_95 /*3*/]) };
						if (!func_132(Var1, Local_832, 1056964608, 0))
						{
							bVar0 = true;
						}
					}
				}
				else
				{
					uVar2 = unk_0xD56419CB9E15983F(unk_0x2A3612A4B836469E());
					if (unk_0xC450B06E5AAA0985(uVar2))
					{
						Var1 = { unk_0x3CF9D442F2C902BD(iVar2) };
						if (!func_132(Var1, Local_832, 1056964608, 0))
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		system::settimerb(0);
	}
	return bVar0;
}

int func_212()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_3(Global_113000))
	{
		if (!unk_0xC39AE5D390581AD5(Global_113000, -1, 0))
		{
			iVar0++;
		}
		if (!unk_0xC39AE5D390581AD5(Global_113000, 0, 0))
		{
			iVar0++;
		}
		if (!unk_0xC39AE5D390581AD5(Global_113000, 1, 0))
		{
			iVar0++;
		}
		if (!unk_0xC39AE5D390581AD5(Global_113000, 2, 0))
		{
			iVar0++;
		}
	}
	return iVar0;
}

void func_213()
{
	if (iLocal_819 != 0)
	{
		unk_0x61055542D9D877AE(uLocal_91);
		unk_0xA4F67CEB594AE064(4);
		unk_0xA66AC5949E305457(1);
		if (unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
		{
			unk_0x6D16B99FEB0AFFF1(uLocal_109, fLocal_84, fLocal_85, fLocal_82, fLocal_83, 0, 0, 0, 255, 0);
		}
	}
}

void func_214()
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (iLocal_819 != 0)
	{
		if (iLocal_89 > 1)
		{
			func_219(&iVar0, &uVar1, &uVar2, &uVar3, 0);
			if (unk_0xAE231F549813BBDF(2))
			{
				unk_0x4CC1CF98851922CE(2, 241);
				unk_0x4CC1CF98851922CE(2, 242);
				unk_0x4CC1CF98851922CE(2, 180);
				unk_0x4CC1CF98851922CE(2, 181);
			}
			if (iVar0 > 28 || unk_0xDEE3EFEA31A1F555(2, 180))
			{
				if (!iLocal_60)
				{
					if (bLocal_58)
					{
						if (bLocal_57)
						{
							func_218();
						}
						else
						{
							iLocal_56 = 1;
						}
						bLocal_57 = true;
					}
					else
					{
						func_218();
					}
					iLocal_102 = unk_0x1DD05E817C89C737();
					iLocal_60 = 1;
				}
			}
			else
			{
				iLocal_60 = 0;
			}
			if (iVar0 < -28 || unk_0x875A214D5EBCA509(2, 181))
			{
				if (!iLocal_61)
				{
					if (bLocal_58)
					{
						if (bLocal_57)
						{
							func_216();
						}
						else
						{
							iLocal_56 = 1;
						}
						bLocal_57 = true;
					}
					else
					{
						func_216();
					}
					iLocal_102 = unk_0x1DD05E817C89C737();
					iLocal_61 = 1;
				}
			}
			else
			{
				iLocal_61 = 0;
			}
		}
		if (!bLocal_58)
		{
			if (iLocal_89 > 0)
			{
				unk_0x0A0A06C514052E80(0);
				if (unk_0x875A214D5EBCA509(2, 176))
				{
					if (unk_0xC450B06E5AAA0985(Local_817[bLocal_90 /*3*/]))
					{
						iLocal_816 = 2;
						Local_41 = { Local_817[bLocal_90 /*3*/] };
						iLocal_54 = 0;
						iLocal_88 = unk_0x1DD05E817C89C737();
						iLocal_97 = unk_0x1DD05E817C89C737();
						iLocal_98 = unk_0x1DD05E817C89C737();
						iLocal_86 = 0;
						iLocal_818 = 0;
						bLocal_58 = true;
						iLocal_56 = 1;
						bLocal_57 = false;
					}
				}
			}
		}
		else
		{
			unk_0x0A0A06C514052E80(0);
			if (iLocal_819 == 2)
			{
				if (unk_0x875A214D5EBCA509(2, 177))
				{
					iLocal_816 = 13;
					iLocal_56 = 1;
					if (!unk_0x4FAFF4BCB7633475(Global_113001))
					{
						unk_0x974022927CB47E68(Global_113001);
					}
					iLocal_819 = 3;
				}
				if (!bLocal_62)
				{
					if (unk_0x875A214D5EBCA509(2, 179))
					{
						iLocal_816 = 20;
						bLocal_62 = true;
						iLocal_56 = 1;
						fLocal_71 = (0,22f * 2f);
						if (!unk_0x4FAFF4BCB7633475(Global_113001))
						{
							if (!unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_enter", 3))
							{
								if (!unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_idle", 3))
								{
									if (!unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_exit", 3))
									{
										unk_0x974022927CB47E68(Global_113001);
									}
								}
							}
						}
					}
				}
				if (func_75())
				{
					if (unk_0x875A214D5EBCA509(2, 176))
					{
						if (bLocal_59)
						{
							iLocal_56 = 1;
							iLocal_87 = unk_0x1DD05E817C89C737();
							iLocal_821 = 0;
							iLocal_819 = 4;
						}
					}
				}
				if (iLocal_816 == 0)
				{
					if (iLocal_97 != -1)
					{
						if (func_161(iLocal_97, 68000))
						{
							iLocal_816 = 4;
							iLocal_97 = -1;
						}
					}
				}
				if (iLocal_816 == 0)
				{
					if (iLocal_98 != -1)
					{
						if (func_161(iLocal_98, 5000))
						{
							if ((unk_0x6D05C5731A838CB3(2, 81) || unk_0x6D05C5731A838CB3(2, 82)) || unk_0x6D05C5731A838CB3(2, 85))
							{
								iLocal_816 = 17;
								iLocal_97 = -1;
							}
						}
					}
				}
			}
			else if (iLocal_819 == 3)
			{
				if (unk_0x875A214D5EBCA509(2, 177))
				{
					iLocal_816 = 3;
					iLocal_56 = 1;
					iLocal_819 = 2;
				}
			}
			if (bLocal_57)
			{
				if (func_215())
				{
					if (unk_0x875A214D5EBCA509(2, 176))
					{
						if (unk_0xC450B06E5AAA0985(Local_817[bLocal_90 /*3*/]))
						{
							iLocal_816 = 9;
							bLocal_59 = false;
							if (iLocal_819 == 3)
							{
								iLocal_819 = 2;
							}
							iLocal_56 = 1;
							Local_41 = { Local_817[bLocal_90 /*3*/] };
							iLocal_54 = 0;
							iLocal_88 = unk_0x1DD05E817C89C737();
							iLocal_86 = 0;
							iLocal_818 = 0;
							if (!unk_0x4FAFF4BCB7633475(Global_113001))
							{
								if (!unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_enter", 3))
								{
									if (!unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_idle", 3))
									{
										if (!unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_exit", 3))
										{
											unk_0x974022927CB47E68(Global_113001);
										}
									}
								}
							}
							iLocal_102 = unk_0x1DD05E817C89C737();
							bLocal_57 = false;
						}
					}
					if (func_161(iLocal_102, 3000))
					{
						bLocal_57 = false;
					}
				}
			}
		}
	}
}

int func_215()
{
	if (unk_0x78411E34CF90EA8C(uLocal_66))
	{
		if (unk_0xBC886554B5888A64(uLocal_66))
		{
			return 1;
		}
	}
	if (bLocal_57)
	{
		return 1;
	}
	return 0;
}

void func_216()
{
	struct<3> Var0;
	
	unk_0x88F483FBD433696A(uLocal_109, "SET_INPUT_EVENT");
	unk_0x330108B080A2132F(8);
	unk_0xE6B753D52F4CA222();
	bLocal_90 = (bLocal_90 - 1);
	if (bLocal_90 < 0)
	{
		bLocal_90 = (iLocal_89 - 1);
	}
	if (unk_0xC450B06E5AAA0985(Local_817[bLocal_90 /*3*/]))
	{
		Var0 = { unk_0x3CF9D442F2C902BD(Local_817[bLocal_90 /*3*/]) };
		if (!func_217(Var0))
		{
			unk_0x43F4B7E163A31644(Var0.f_0, Var0.f_1);
		}
	}
}

int func_217(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_218()
{
	struct<3> Var0;
	
	unk_0x88F483FBD433696A(uLocal_109, "SET_INPUT_EVENT");
	unk_0x330108B080A2132F(9);
	unk_0xE6B753D52F4CA222();
	bLocal_90++;
	if (bLocal_90 > (iLocal_89 - 1))
	{
		bLocal_90 = false;
	}
	if (unk_0xC450B06E5AAA0985(Local_817[bLocal_90 /*3*/]))
	{
		Var0 = { unk_0x3CF9D442F2C902BD(Local_817[bLocal_90 /*3*/]) };
		if (!func_217(Var0))
		{
			unk_0x43F4B7E163A31644(Var0.f_0, Var0.f_1);
		}
	}
}

void func_219(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = system::floor((unk_0xB504E1B50AA21FC5(2, 218) * 127f));
	*uParam1 = system::floor((unk_0xB504E1B50AA21FC5(2, 219) * 127f));
	*uParam2 = system::floor((unk_0xB504E1B50AA21FC5(2, 220) * 127f));
	*uParam3 = system::floor((unk_0xB504E1B50AA21FC5(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = system::floor((unk_0xF069618D9974EB9D(2, 218) * 127f));
			*uParam1 = system::floor((unk_0xF069618D9974EB9D(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = system::floor((unk_0xF069618D9974EB9D(2, 220) * 127f));
			*uParam3 = system::floor((unk_0xF069618D9974EB9D(2, 221) * 127f));
		}
	}
}

int func_220()
{
	if (iLocal_819 == 4)
	{
		return 1;
	}
	if (func_222())
	{
		return 1;
	}
	if (unk_0x4D9174D8796EA622())
	{
		return 1;
	}
	if (func_221())
	{
		return 1;
	}
	if (func_186(8, -1))
	{
		return 1;
	}
	if (func_168(0))
	{
		return 1;
	}
	if (unk_0xEF37E704F02B50F3())
	{
		return 1;
	}
	if (func_187())
	{
		return 1;
	}
	if (Global_79650 || Global_79651)
	{
		return 1;
	}
	return 0;
}

bool func_221()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

bool func_222()
{
	return Global_76498;
}

void func_223()
{
	if (!Global_113005 == 0)
	{
		if (!unk_0xC450B06E5AAA0985(Global_113005))
		{
			Global_113005 = 0;
		}
	}
}

void func_224()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
		unk_0x4BD41CDB13AC8486(unk_0x259BE71D8A81D4FA());
		unk_0xFE89392FAC7394F2(unk_0x259BE71D8A81D4FA(), 2);
		unk_0xFE89392FAC7394F2(unk_0x259BE71D8A81D4FA(), 3);
		unk_0xFE89392FAC7394F2(unk_0x259BE71D8A81D4FA(), 4);
		unk_0xFE89392FAC7394F2(unk_0x259BE71D8A81D4FA(), 5);
		unk_0xFE89392FAC7394F2(unk_0x259BE71D8A81D4FA(), 15);
	}
}

void func_225()
{
	unk_0xE0EEB603997F273F(0);
	unk_0xE0EEB603997F273F(1);
	unk_0xE0EEB603997F273F(2);
	unk_0x66EFB3D6110055C4(0, 99, 1);
	unk_0x66EFB3D6110055C4(0, 100, 1);
	unk_0x66EFB3D6110055C4(0, 16, 1);
	unk_0x66EFB3D6110055C4(0, 17, 1);
	unk_0x66EFB3D6110055C4(0, 73, 1);
	unk_0x66EFB3D6110055C4(0, 25, 1);
	func_226();
	unk_0x66EFB3D6110055C4(0, 200, 1);
	if (func_222() || func_168(0))
	{
		unk_0x66EFB3D6110055C4(0, 75, 1);
	}
}

void func_226()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 4);
}

int func_227()
{
	int iVar0;
	
	if (Global_113001 == 0)
	{
		return 0;
	}
	if (!unk_0x4FAFF4BCB7633475(Global_113001))
	{
		if (unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
		{
			if (!unk_0xF4244288C3EF3306(Global_113001, Global_113000))
			{
				return 0;
			}
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
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
		{
			if (unk_0xD9F5E1FEFD1329E4(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0))
			{
				if (func_228(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
				{
					iVar0 = unk_0xFD5C5BBD1FE92BB7(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), -1, 0);
					if (!iVar0 == unk_0x4A8C381C258A124D())
					{
						if (!unk_0x4FAFF4BCB7633475(iVar0))
						{
							Global_113016 = 1;
							unk_0x19AD76EC04A73800(unk_0x259BE71D8A81D4FA(), 0);
							unk_0x4EB223432F8FA0A0(2);
							unk_0xFD61BB3B8F1CDB6D(unk_0x4A8C381C258A124D(), 1);
							return 1;
						}
					}
				}
			}
		}
	}
	if (unk_0x78411E34CF90EA8C(uLocal_66))
	{
		if (unk_0xBC886554B5888A64(uLocal_66))
		{
			unk_0x2F30818D75D66C5B(0);
			Global_113017 = 0;
		}
		unk_0x4CBC5D1BC117616B(uLocal_66, 0);
		unk_0x85E6A1E36B5E2E4D(uLocal_66, 0);
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		unk_0x33311EBA9464741D();
		unk_0xF3E3EA936C653F22();
		unk_0x4D2F1CB87CBF249D(0);
	}
	return 0;
}

int func_228(var uParam0)
{
	if (unk_0x2E6A27037F1DC473(uParam0, joaat("taxi")))
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		return 1;
	}
	if (func_59(unk_0x4A8C381C258A124D()) != iLocal_69)
	{
		return 1;
	}
	if (!unk_0xFC8BFE4B41177C22(Global_113000))
	{
		return 1;
	}
	if (!unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
	{
		return 1;
	}
	if (!unk_0xFC8BFE4B41177C22(Global_113001))
	{
		return 1;
	}
	if (unk_0x4FAFF4BCB7633475(Global_113001))
	{
		return 1;
	}
	if (iLocal_819 != 4)
	{
		if (iParam0 == 1)
		{
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
			{
				return 1;
			}
			if (((unk_0xA24B9FF9863A909D(Global_113000, 2, 30000) || unk_0xA24B9FF9863A909D(Global_113000, 3, 30000)) || unk_0xA24B9FF9863A909D(Global_113000, 0, 7000)) || unk_0xA24B9FF9863A909D(Global_113000, 1, 7000))
			{
				return 1;
			}
		}
		Var0 = { unk_0xD1A6A821F5AC81DB(Global_113000, 0) };
		if (unk_0x398315D0C90DE6F6(Var0, 7f, 0))
		{
			return 1;
		}
		fVar1 = 15f;
		Var2 = { Var0 };
		Var3 = { Var2 };
		Var2.f_0 = (Var2.f_0 - fVar1);
		Var2.f_1 = (Var2.f_1 - fVar1);
		Var2.f_2 = (Var2.f_2 - fVar1);
		Var3.f_0 = (Var3.f_0 + fVar1);
		Var3.f_1 = (Var3.f_1 + fVar1);
		Var3.f_2 = (Var3.f_2 + fVar1);
		if (unk_0xE94C7FA27FEB00DD(Var2, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_230()
{
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	if (Global_98433 == 1)
	{
		return 0;
	}
	if (unk_0xFD216000DC314A92())
	{
		return 0;
	}
	if (Global_113020)
	{
		return 0;
	}
	if (Global_5)
	{
		return 0;
	}
	if (unk_0xD5FD8DD00FB16F99())
	{
		return 0;
	}
	return 1;
}

int func_231()
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		iLocal_93 = unk_0xC802478C8862BDAD();
		if (func_235(&uVar0, func_237(), func_236()))
		{
			iVar1 = unk_0xFD5C5BBD1FE92BB7(uVar0, -1, 0);
			func_223();
			unk_0x19AD76EC04A73800(unk_0x259BE71D8A81D4FA(), 0);
			unk_0x4EB223432F8FA0A0(2);
			unk_0xFD61BB3B8F1CDB6D(unk_0x4A8C381C258A124D(), 1);
			if (unk_0xFD5C5BBD1FE92BB7(uVar0, 1, 0) == unk_0x4A8C381C258A124D())
			{
				iLocal_837 = 1;
			}
			else
			{
				iLocal_837 = 2;
			}
			if (func_233(&uVar0, &iVar1, 1))
			{
				Local_830 = { unk_0xD1A6A821F5AC81DB(Global_113000, 1) - unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				Local_830.f_2 = 0f;
				fLocal_70 = system::vmag(Local_830);
				iLocal_69 = func_59(unk_0x4A8C381C258A124D());
				func_232();
				iLocal_94 = func_212();
				iLocal_56 = 1;
				unk_0x66EFB3D6110055C4(0, 75, 1);
				Global_113016 = 1;
				iLocal_819 = 0;
				iLocal_820 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_232()
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
	{
		if (!unk_0xC39AE5D390581AD5(Global_113000, 1, 0))
		{
			iVar0 = unk_0xFD5C5BBD1FE92BB7(Global_113000, 1, 0);
			if (unk_0x4A8C381C258A124D() != iVar0)
			{
				if (!unk_0xD11A63E12F198FDB(iVar0, unk_0xD59511AF30BE1934(unk_0x259BE71D8A81D4FA())))
				{
					unk_0xD844F5E50DAB6FF7(iVar0, unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
				}
			}
		}
		if (!unk_0xC39AE5D390581AD5(Global_113000, 2, 0))
		{
			iVar0 = unk_0xFD5C5BBD1FE92BB7(Global_113000, 2, 0);
			if (unk_0x4A8C381C258A124D() != iVar0)
			{
				if (!unk_0xD11A63E12F198FDB(iVar0, unk_0xD59511AF30BE1934(unk_0x259BE71D8A81D4FA())))
				{
					unk_0xD844F5E50DAB6FF7(iVar0, unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
				}
			}
		}
	}
}

int func_233(var uParam0, int iParam1, bool bParam2)
{
	if (!*uParam0 == Global_113000 && !Global_113000 == 0)
	{
		func_234();
	}
	if (unk_0xFC8BFE4B41177C22(*uParam0) && unk_0xFC8BFE4B41177C22(*iParam1))
	{
		if (unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(*iParam1))
			{
				if (unk_0xF4244288C3EF3306(*iParam1, *uParam0))
				{
					Global_113000 = *uParam0;
					Global_113001 = *iParam1;
					Global_113015 = 1;
					if (bParam2)
					{
						unk_0xEE0BCDB1B5E36BCB(Global_113001, 1, 1);
						unk_0xEE0BCDB1B5E36BCB(Global_113000, 1, 1);
						StringCopy(&Global_113031, unk_0x1AF90EB93E0012D6(), 24);
					}
					else
					{
						if (!unk_0x110821AE6C63DD4F(Global_113001))
						{
							unk_0xEE0BCDB1B5E36BCB(Global_113001, 1, 0);
						}
						if (!unk_0x110821AE6C63DD4F(Global_113000))
						{
							unk_0xEE0BCDB1B5E36BCB(Global_113000, 1, 0);
							StringCopy(&Global_113031, unk_0x1AF90EB93E0012D6(), 24);
						}
					}
					unk_0x0428AFDCAA63B06E(Global_113001, 251, 1);
					unk_0xBE8796DB2B90A437(Global_113001, 5, 0);
					unk_0xBE8796DB2B90A437(Global_113001, 17, 1);
					unk_0x1CA08719184AFC6F(Global_113001, 512, 0);
					unk_0xAAA71DD7E9059338(Global_113001, 1);
					unk_0x397CF4F4C8B17365(Global_113001, "A_M_M_EASTSA_02_LATINO_FULL_01");
					unk_0x0B74F181ADFC39BF(Global_113000, 1);
					unk_0x983B8E72C35B01F2(Global_113000, 1);
					unk_0xDD38B2935A3EAC56(Global_113000, 0, 0);
					unk_0x40891A689350468D(Global_113000, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_234()
{
	var uVar0;
	
	if (unk_0xFC8BFE4B41177C22(Global_113001))
	{
		if (!unk_0x4FAFF4BCB7633475(Global_113001))
		{
			unk_0x0428AFDCAA63B06E(Global_113001, 251, 0);
			unk_0xAAA71DD7E9059338(Global_113001, 0);
			if (!unk_0xCA038E64C65D1F9D(Global_113001) && !unk_0x1B32E388988DD296(Global_113001, 0))
			{
				if (unk_0x7F420695E3F776FB(Global_113001, 0))
				{
					if (unk_0xFC8BFE4B41177C22(Global_113000))
					{
						if (unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
						{
							if (unk_0xF4244288C3EF3306(Global_113001, Global_113000))
							{
								if (unk_0x9B5C1660CCDF7189(Global_113001, joaat("script_task_vehicle_drive_wander")) != 1 && unk_0x9B5C1660CCDF7189(Global_113001, joaat("script_task_vehicle_drive_wander")) != 0)
								{
									unk_0xB5396F1FB088FE38(&uVar0);
									if ((!unk_0xC39AE5D390581AD5(Global_113000, 1, 0) || !unk_0xC39AE5D390581AD5(Global_113000, 2, 0)) || !unk_0xC39AE5D390581AD5(Global_113000, 0, 0))
									{
										unk_0x5524CAF18378DF39(0, 2000);
									}
									else
									{
										unk_0x5524CAF18378DF39(0, 500);
									}
									unk_0x7C8E9DE09D4AD3FF(0, Global_113000, 12f, 790699);
									unk_0x93C0674FC00824D0(uVar0);
									unk_0x4BD42B0527065BB6(Global_113001, uVar0);
									unk_0xD0557B139A542F12(&uVar0);
								}
							}
							else
							{
								unk_0xD844F5E50DAB6FF7(Global_113001, unk_0x4A8C381C258A124D(), 500f, -1, 0, 0);
							}
						}
						else
						{
							unk_0xD844F5E50DAB6FF7(Global_113001, unk_0x4A8C381C258A124D(), 500f, -1, 0, 0);
						}
					}
				}
				else if (unk_0x9B5C1660CCDF7189(Global_113001, joaat("script_task_wander_standard")) != 1 && unk_0x9B5C1660CCDF7189(Global_113001, joaat("script_task_wander_standard")) != 0)
				{
					unk_0x761F56E633460973(Global_113001, 1193033728, 0);
				}
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(Global_113001))
	{
		if (unk_0x110821AE6C63DD4F(Global_113001))
		{
			if (unk_0x7C9905528EE2C3AB(Global_113001, 0))
			{
				if (!unk_0x4FAFF4BCB7633475(Global_113001))
				{
					unk_0x788F35D395511DFE(Global_113001, 0, 1);
					unk_0xAAA71DD7E9059338(Global_113001, 0);
				}
				unk_0xF09E30AF1B8FB379(&Global_113001);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(Global_113000))
	{
		if (unk_0x110821AE6C63DD4F(Global_113000))
		{
			if (unk_0x7C9905528EE2C3AB(Global_113000, 0))
			{
				if (unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
				{
					unk_0x983B8E72C35B01F2(Global_113000, 0);
					unk_0xDD38B2935A3EAC56(Global_113000, 1, 0);
					unk_0x40891A689350468D(Global_113000, 0);
				}
				unk_0x68298CA6191CDFDB(&Global_113000);
			}
		}
	}
	Global_113001 = 0;
	Global_113000 = 0;
	StringCopy(&Global_113031, "NULL", 24);
	Global_113037 = -1;
}

int func_235(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
		{
			if (unk_0x4B423FAA24E8ABF0(*uParam0) == iParam1)
			{
				iVar0 = unk_0xFD5C5BBD1FE92BB7(*uParam0, -1, 0);
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (!unk_0x4FAFF4BCB7633475(iVar0))
					{
						if (!unk_0xCA038E64C65D1F9D(iVar0))
						{
							if (!unk_0x1B32E388988DD296(iVar0, 0))
							{
								if (unk_0x700C28A639389477(iVar0, uParam2))
								{
									if (unk_0xE99B9AC112F55D16(*uParam0, 1119092736))
									{
										iVar1 = unk_0x38A100E16C95161B(*uParam0);
										if (iVar1 != 3 && iVar1 != 2)
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
	return 0;
}

int func_236()
{
	return joaat("a_m_y_stlat_01");
}

int func_237()
{
	return joaat("taxi");
}

void func_238(bool bParam0)
{
	unk_0x0A0A06C514052E80(1);
	if (unk_0xC13AFEAFC3F7AD96("taxi"))
	{
		unk_0xF8211BE23F0D0552("taxi");
	}
	if (unk_0x78411E34CF90EA8C(uLocal_66))
	{
		if (unk_0xBC886554B5888A64(uLocal_66))
		{
			unk_0x2F30818D75D66C5B(0);
		}
		unk_0x4CBC5D1BC117616B(uLocal_66, 0);
		unk_0x85E6A1E36B5E2E4D(uLocal_66, 0);
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		unk_0x33311EBA9464741D();
		unk_0xF3E3EA936C653F22();
		unk_0x4D2F1CB87CBF249D(0);
	}
	Global_113017 = 0;
	if (unk_0xFC8BFE4B41177C22(iLocal_107))
	{
		unk_0x51C8BEA2005931AB(&iLocal_107);
		unk_0x55098D9E9AD58806(iLocal_106);
	}
	unk_0xD314260005F064BF(&uLocal_109);
	unk_0xD314260005F064BF(&uLocal_110);
	if (func_239(Global_113001))
	{
		if (unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_enter", 3))
		{
			unk_0x1D949F0AD44C7F05(Global_113001, "leanover_enter", &cLocal_822, -2f);
		}
		else if (unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_idle", 3))
		{
			unk_0x1D949F0AD44C7F05(Global_113001, "leanover_idle", &cLocal_822, -2f);
		}
		else if (unk_0x13CCB1AD131C1082(Global_113001, &cLocal_822, "leanover_exit", 3))
		{
			unk_0x1D949F0AD44C7F05(Global_113001, "leanover_exit", &cLocal_822, -2f);
		}
		if (unk_0x9E437CA2E2CAD79D(Global_113001, unk_0x4A8C381C258A124D()))
		{
			unk_0x84B06A81C98DA4B8(Global_113001);
		}
	}
	unk_0x268BE77F77533D03(&cLocal_822);
	if (iLocal_819 == 4)
	{
		if (iLocal_821 != 10)
		{
			if (iLocal_55)
			{
				if (unk_0x787F8EE1F6FBDC6D())
				{
					unk_0x6981C3213B841071();
				}
				iLocal_55 = 0;
			}
			func_162(0);
			if (unk_0xBC2EE32DE886BD08("FADE_OUT_WORLD_250MS_SCENE"))
			{
				unk_0xB43467C43086A6A1("FADE_OUT_WORLD_250MS_SCENE");
			}
			if (unk_0xFC8BFE4B41177C22(Global_113000))
			{
				if (unk_0xD9F5E1FEFD1329E4(Global_113000, 0))
				{
					unk_0x4DC72C4B884A6C59(Global_113000, 1);
					unk_0x5D7CD709B34C90F0(Global_113000, 0);
				}
			}
			if (bParam0)
			{
				if (unk_0x15CCE8886267624F() || unk_0x78ABC1D11B34F324())
				{
					if (!unk_0xDDED2C93E8FD5B69())
					{
						if ((!func_81() && !func_8()) && Global_101533 != 10)
						{
							unk_0x10B228D2FDB7AF16(250);
						}
					}
				}
			}
		}
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_3(Global_113000))
		{
			if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Global_113000, 1))
			{
				if (unk_0xFD5C5BBD1FE92BB7(Global_113000, -1, 0) != unk_0x4A8C381C258A124D())
				{
					if (!func_2(unk_0x4A8C381C258A124D(), joaat("script_task_leave_any_vehicle")) && !func_2(unk_0x4A8C381C258A124D(), joaat("script_task_leave_vehicle")))
					{
						unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
					}
				}
			}
		}
	}
	func_5();
	func_234();
	Global_113037 = -1;
	Global_113016 = 0;
	Global_113020 = 0;
	unk_0xBBC29EBE6E1A48FA();
}

int func_239(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

