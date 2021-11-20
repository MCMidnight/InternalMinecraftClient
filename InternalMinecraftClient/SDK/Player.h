#pragma once

class Player : public Actor {
private:
	virtual void TryroFunc0(); // this top function may mess with it :p
	virtual void Constructor1();
	virtual void Constructor2();
public:
	virtual int getLastHurtByMob(void);
	virtual void setLastHurtByMob(class Mob*);
	virtual int getLastHurtByPlayer(void);
	virtual void setLastHurtByPlayer(Player*);
	virtual int getLastHurtMob(void);
	virtual void setLastHurtMob(Actor*);
	virtual void outOfWorld(void);
	virtual void reloadHardcoded(); // removed
	virtual void reloadHardcodedClient(); // removed
	virtual void initializeComponents(); // removed
	virtual void reloadComponents(); // removed
	virtual void _serverInitItemStackIds(void);
	virtual void _doInitialMove(void);
	virtual void hasComponent(HashedString const&);
private:
	virtual void Constructor3();
	virtual void Constructor4();
public:
	virtual void reset(void);
	virtual int getOnDeathExperience(void);
	virtual int getOwnerEntityType(void);
	virtual void remove(void);
	virtual void setPos(Vector3 const&);
	virtual bool isRuntimePredictedMovementEnabled(void);
	virtual int getPredictedMovementValues(void);
	virtual int getPos(void);
	virtual int getPosOld(void);
	virtual float getPosExtrapolated(float);
	virtual float getAttachPos(ActorLocation, float);
	virtual int getFiringPos(void);
	virtual void setRot(Vector2 const&);
	virtual void move(Vector3 const&);
	virtual void move(IActorMovementProxy&, Vector3 const&);
	virtual float getInterpolatedRidingPosition(float);
	virtual float getInterpolatedBodyRot(float);
	virtual float getInterpolatedHeadRot(float);
	virtual float getInterpolatedBodyYaw(float);
	virtual int getYawSpeedInDegreesPerSecond(void);
	virtual float getInterpolatedWalkAnimSpeed(float);
	virtual float getInterpolatedRidingOffset(float);
	virtual void checkBlockCollisions(); // removed
	virtual void updateEntityInside(AABB const&);
	virtual void updateEntityInside(void);
	virtual bool isFireImmune(void);
	virtual void breaksFallingBlocks(void);
	virtual void blockedByShield(ActorDamageSource const&, Actor&);
	virtual void teleportTo(Vector3 const&, bool, int, int);
	virtual void tryTeleportTo(Vector3 const&, bool, bool, int, int);
	virtual void chorusFruitTeleport(Vector3 const&);
	virtual void lerpMotion(Vector3 const&);
	virtual void tryCreateAddActorPacket(void);
	virtual void normalTick(void);
	virtual void baseTick(void);
	virtual void vehicleTick(void);
	virtual void positionPassenger(Actor&, float);
	virtual int getRidingHeight(void);
	virtual void startRiding(Actor&);
	virtual void addPassenger(Actor&);
	virtual void flagPassengerToRemove(Actor&);
	virtual int getExitTip(std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, InputMode);
	virtual void intersects(Vector3 const&, Vector3 const&);
	virtual bool isInWall(void);
	virtual bool isInvisible(void);
	virtual void canShowNameTag(void);
	virtual void canExistInPeaceful(void);
	virtual void setNameTagVisible(bool);
private:
	virtual void TryroFunc67();
public:
	virtual int getNameTagAsHash(void);
private:
	virtual void TryroFunc69();
public:
	virtual void filterFormattedNameTag(UIProfanityContext const&);
	virtual void setNameTag(std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
	virtual int getAlwaysShowNameTag(void);
	virtual void setScoreTag(std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
private:
	virtual void TryroFunc74();
public:
	virtual bool isInWater(void);
	virtual void hasEnteredWater(void);
	virtual bool isInLava(void);
	virtual bool isUnderLiquid(MaterialType);
	virtual bool isOverWater(void);
	virtual void setBlockMovementSlowdownMultiplier(Vector3 const&);
	virtual void resetBlockMovementSlowdownMultiplier(void);
	virtual int getCameraOffset(void);
	virtual int getShadowHeightOffs(void);
	virtual int getShadowRadius(void);
	virtual float getHeadLookVector(float);
	virtual void canSeeInvisible(void);
	virtual void canSee(Actor const&);
	virtual void canSee(Vector3 const&);
	virtual bool isSkyLit(float);
	virtual float getBrightness(float);
	virtual void interactPreventDefault(void);
	virtual void playerTouch(Player&);
	virtual void onAboveBubbleColumn(bool);
	virtual void onInsideBubbleColumn(bool);
	virtual bool isImmobile(void);
	virtual bool isSilent(void);
	virtual bool isPickable(void);
	virtual bool isFishable(void);
	virtual bool isSleeping(void);
	virtual void setSleeping(bool);
	virtual bool isShootable(void);
	virtual void setSneaking(bool);
	virtual bool isBlocking(void);
	virtual bool isDamageBlocked(ActorDamageSource const&);
	virtual bool isAlive(void);
	virtual bool isOnFire(void);
	virtual bool isOnHotBlock(void);
	virtual bool isCreativeModeAllowed(void);
	virtual bool isSurfaceMob(void);
	virtual bool isTargetable(void);
	virtual bool isLocalPlayer(void);
	virtual bool isPlayer(void);
	virtual bool isAffectedByWaterBottle(void);
	virtual void canAttack(Actor*, bool);
	virtual void setTarget(Actor*);
	virtual void findAttackTarget(void);
	virtual bool isValidTarget(Actor*);
	virtual void attack(Actor&, ActorDamageCause const&);
	virtual void performRangedAttack(Actor&, float);
	virtual void adjustDamageAmount(int&);
	virtual int getEquipmentCount(void);
	virtual void setOwner(uint64_t);
	virtual void setSitting(bool);
	virtual void onTame(void);
	virtual void onFailedTame(void);
	virtual int getInventorySize(void);
	virtual int getEquipSlots(void);
	virtual int getChestSlots(void);
	virtual void setStanding(bool);
	virtual void canPowerJump(void);
	virtual void setCanPowerJump(bool);
	virtual bool isJumping(void);
	virtual bool isEnchanted(void);
	virtual void vehicleJumped(void);
	virtual void vehicleLanded(Vector3 const&, Vector3 const&);
	virtual void shouldRender(void);
	virtual void playAmbientSound(void);
	virtual int getAmbientSound(void);
	virtual bool isInvulnerableTo(ActorDamageSource const&);
	virtual int getBlockDamageCause(Block const&);
	virtual void actuallyHurt(int, ActorDamageSource const&, bool);
	virtual void animateHurt(void);
	virtual void doFireHurt(int);
	virtual void onLightningHit(void);
	virtual void onBounceStarted(BlockPos const&, Block const&);
	virtual void feed(int);
	virtual void handleEntityEvent(ActorEvent, int);
	virtual int getPickRadius(void);
	virtual int getActorRendererId(void);
	virtual void spawnAtLocation(int, int);
	virtual void spawnAtLocation(int, int, float);
	virtual void spawnAtLocation(Block const&, int);
	virtual void spawnAtLocation(Block const&, int, float);
	virtual void spawnAtLocation(ItemStack const&, float);
	virtual void despawn(void);
	virtual void killed(Actor&);
	virtual void awardKillScore(Actor&, int);
	virtual void setArmor(ArmorSlot, ItemStack const&);
	virtual int getArmor(ArmorSlot);
	virtual int getArmorMaterialTypeInSlot(ArmorSlot);
	virtual int getArmorMaterialTextureTypeInSlot(ArmorSlot);
	virtual int getArmorColorInSlot(ArmorSlot, int);
	virtual int getEquippedSlot(EquipmentSlot);
	virtual void setEquippedSlot(EquipmentSlot, ItemStack const&);
	virtual int getCarriedItem(void);
	virtual void setCarriedItem(ItemStack const&);
	virtual void setOffhandSlot(ItemStack const&);
	virtual int getEquippedTotem(void);
	virtual void consumeTotem(void);
	virtual void save(CompoundTag&);
	virtual void saveWithoutId(CompoundTag&);
	virtual void load(CompoundTag const&, DataLoadHelper&);
	virtual void loadLinks(CompoundTag const&, std::vector<ActorLink, std::allocator<ActorLink>>&, DataLoadHelper&);
	virtual int getEntityTypeId(void);
	virtual void queryEntityRenderer(void);
	virtual int getSourceUniqueID(void);
	virtual void setOnFire(int);
	virtual void extinguishFire(void);
	virtual void thawFreezeEffect(void);
	virtual void canFreeze(void);
	virtual bool isWearingLeatherArmor(void);
	virtual int getLiquidAABB(MaterialType);
	virtual void handleInsidePortal(BlockPos const&);
	virtual int getPortalCooldown(void);
	virtual int getPortalWaitTime(void);
	virtual int getDimensionId(void);
	virtual void canChangeDimensions(void);
	virtual void changeDimension(); // removed
	virtual void changeDimension2(ChangeDimensionPacket const&);
	virtual int getControllingPlayer(void);
	virtual void checkFallDamage(float, bool);
	virtual void causeFallDamage(float, float, ActorDamageSource);
	virtual void handleFallDistanceOnServer(float, float, bool);
	virtual void playSynchronizedSound(LevelSoundEvent, Vector3 const&, Block const&, bool);
	virtual void playSynchronizedSound(LevelSoundEvent, Vector3 const&, int, bool);
	virtual void onSynchedDataUpdate(int);
	virtual void canAddPassenger(Actor&);
	virtual void canPickupItem(ItemStack const&);
	virtual void canBePulledIntoVehicle(void);
	virtual void inCaravan(void);
	virtual bool isLeashableType(void);
	virtual void tickLeash(void);
	virtual void sendMotionPacketIfNeeded(void);
	virtual void canSynchronizeNewEntity(void);
	virtual void stopRiding(bool, bool, bool);
	virtual void startSwimming(void);
	virtual void stopSwimming(void);
	virtual void buildDebugInfo(std::basic_string<char, std::char_traits<char>, std::allocator<char>>&);
	virtual int getCommandPermissionLevel(void);
	virtual bool isClientSide(void);
	virtual int getMutableAttribute(Attribute const&);
	virtual int getAttribute(Attribute const&);
	virtual int getDeathTime(void);
	virtual void heal(int);
	virtual bool isInvertedHealAndHarm(void);
	virtual void canBeAffected(int);
	virtual void canBeAffected(MobEffectInstance const&);
	virtual void canBeAffectedByArrow(MobEffectInstance const&);
	virtual void onEffectAdded(MobEffectInstance&);
	virtual void onEffectUpdated(MobEffectInstance&);
	virtual void onEffectRemoved(MobEffectInstance&);
	virtual int getAnimationComponent(void);
	virtual void openContainerComponent(Player&);
	virtual void swing(void);
	virtual void useItem(ItemStackBase&, ItemUseMethod, bool);
	virtual void hasOutputSignal(uchar);
	virtual int getOutputSignal(void);
	virtual int getDebugText(std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>>&);
	virtual int getMapDecorationRotation(void);
	virtual int getPassengerYRotation(Actor const&);
	virtual int getYHeadRot(void);
	virtual bool isWorldBuilder(void);
	virtual bool isCreative(void);
	virtual bool isAdventure(void);
	virtual void add(ItemStack&);
	virtual void drop(ItemStack const&, bool);
	virtual int getInteraction(Player&, ActorInteraction&, Vector3 const&);
	virtual void canDestroyBlock(Block const&);
	virtual void setAuxValue(int);
	virtual void setSize(float, float);
	virtual void onOrphan(void);
	virtual void wobble(void);
	virtual void wasHurt(void);
	virtual void startSpinAttack(void);
	virtual void stopSpinAttack(void);
	virtual void setDamageNearbyMobs(bool);
	virtual void renderDebugServerState(Options const&);
	virtual void reloadLootTable(void);
	virtual void reloadLootTable(EquipmentTableDefinition const&);
	virtual int getDeletionDelayTimeSeconds(void);
	virtual void kill(void);
	virtual void die(ActorDamageSource const&);
	virtual void shouldDropDeathLoot(void);
	virtual void shouldTick(void);
	virtual void extractSnapshot(PlayerSnapshotComponent&);
	virtual void applySnapshot(PlayerSnapshotComponent const&, PlayerSnapshotComponent const&);
	virtual float getNextStep(float);
	virtual int getLootTable(void);
	virtual void interpolatorTick(void);
	virtual void updateEntitySpecificMolangVariables(RenderParams&);
	virtual void shouldTryMakeStepSound(void);
	virtual void canMakeStepSound(void);
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void markHurt(void);
	virtual void _getAnimationComponent(); // removed
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void _playStepSound(BlockPos const&, Block const&);
	virtual void _playFlySound(BlockPos const&, Block const&);
	virtual void _makeFlySound(void);
	virtual void checkInsideBlocks(float);
	virtual void pushOutOfBlocks(Vector3 const&);
	virtual void updateWaterState(void);
	virtual void doWaterSplashEffect(void);
	virtual void spawnTrailBubbles(void);
	virtual void updateInsideBlock(void);
	virtual void _removePassenger(uint64_t const&, bool, bool, bool);
	virtual void _onSizeUpdated(void);
	virtual void _doAutoAttackOnTouch(Actor&);
	virtual void knockback(Actor*, int, float, float, float, float, float);
	virtual void spawnAnim(void);
	virtual void setSprinting(bool);
	virtual int getHurtSound(void);
	virtual int getDeathSound(void);
	virtual int getItemInHandIcon(ItemStack const&, int);
	virtual int getSpeed(void);
	virtual void setSpeed(float);
	virtual int getJumpPower(void);
	virtual void hurtEffects(ActorDamageSource const&, int, bool, bool);
	virtual int getMeleeWeaponDamageBonus(Actor);
	virtual int getMeleeKnockbackBonus(void);
	virtual void travel(float, float, float);
	virtual void travel(class IMobMovementProxy&, float, float, float);
	virtual void applyFinalFriction(float, bool);
	virtual void updateWalkAnim(void);
	virtual void aiStep(void);
	virtual void aiStep2(class IMobMovementProxy&);
	virtual void pushActors(void);
	virtual void lookAt(Actor*, float, float);
	virtual bool isLookingAtAnEntity(void);
	virtual void checkSpawnRules(bool);
	virtual void checkSpawnObstruction(void);
	virtual float getAttackAnim(float);
	virtual int getItemUseDuration(void);
	virtual int getItemUseStartupProgress(void);
	virtual int getItemUseIntervalProgress(void);
	virtual int getItemUseIntervalAxis(void);
	virtual int getTimeAlongSwing(void);
	virtual void ate(void);
	virtual int getMaxHeadXRot(void);
	virtual bool isAlliedTo(Actor);
	virtual void doHurtTarget(Actor*, ActorDamageCause const&);
	virtual void canBeControlledByPassenger(void);
	virtual void leaveCaravan(void);
	virtual void joinCaravan(Actor);
	virtual void hasCaravanTail(void);
	virtual int getCaravanHead(void);
	virtual int getArmorValue(void);
	virtual int getArmorCoverPercentage(void);
	virtual void hurtArmorSlots(); // removed
	virtual void setDamagedArmor(class ArmorSlot, class ItemStack const&);
	virtual void sendArmorDamage(); // removed
	virtual void sendArmor(); // removed
	virtual void containerChanged(int);
	virtual void updateEquipment(void);
	virtual void clearEquipment(void);
	virtual int getAllArmor(void);
	virtual int getAllArmorID(void);
	virtual int getAllHand(void);
	virtual int getAllEquipment(void);
	virtual int getArmorTypeHash(void);
	virtual void dropEquipmentOnDeath(ActorDamageSource const&, int);
	virtual void dropEquipmentOnDeath(void);
	virtual void clearVanishEnchantedItemsOnDeath(void);
	virtual void sendInventory(bool);
	virtual int getDamageAfterMagicAbsorb(ActorDamageSource const&, int);
	virtual void createAIGoals(void);
	virtual void onBorn(Actor&, Actor&);
	virtual void setItemSlot(EquipmentSlot, ItemStack const&);
	virtual void setTransitioningSitting(bool);
	virtual void attackAnimation(Actor*, float);
	virtual int getAttackTime(void);
	virtual void _getWalkTargetValue(BlockPos const&);
	virtual void canExistWhenDisallowMob(void);
	virtual void useNewAi(void);
	virtual void ascendLadder(void);
	virtual void ascendBlockByJumping(void);
	virtual void descendBlockByCrouching(void);
	virtual void dropContainer(void);
	virtual void initBodyControl(void);
	virtual void jumpFromGround(void);
	virtual void jumpFromGround2(class IMobMovementProxy&);
	virtual void updateAi(void);
	virtual void newServerAiStep(void);
	virtual void _serverAiMobStep(void);
	virtual int getDamageAfterEnchantReduction(ActorDamageSource const&, int);
	virtual int getDamageAfterArmorAbsorb(ActorDamageSource const&, int);
	virtual void dropBags(void);
	virtual void tickDeath(void);
	virtual void updateGliding(void);
	virtual void _allowAscendingScaffolding(void);
	virtual void prepareRegion(ChunkSource&);
	virtual void destroyRegion(void);
	virtual void suspendRegion(void);
	virtual void resendAllChunks(void);
	virtual void _fireWillChangeDimension(void);
	virtual void _fireDimensionChanged(void);
	virtual void changeDimensionWithCredits(); // removed
	virtual void tickWorld(class Tick const&);
private:
	virtual void TryroFunc370();
public:
	virtual int getTickingOffsets(void);
	virtual void moveView(void);
	virtual void setName(std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
	virtual void checkMovementStats(Vector3 const&);
	virtual int getCurrentStructureFeature(void);
	virtual bool isAutoJumpEnabled(void);
	virtual void respawn(void);
	virtual void resetRot(void);
	virtual void resetPos(bool);
	virtual bool isInTrialMode(void);
	virtual void hasResource(int);
	virtual void completeUsingItem(void);
	virtual void setPermissions(class CommandPermissionLevel);
	virtual void startDestroying(void);
	virtual void stopDestroying(void);
	virtual void openPortfolio(void);
	virtual void openBook(int, bool, int, BlockActor*);
	virtual void openTrading(uint64_t const&, bool);
	virtual void canOpenContainerScreen(void);
	virtual void openChalkboard(class ChalkboardBlockActor&, bool);
	virtual void openNpcInteractScreen(); // removed
	virtual void openInventory(void);
	virtual void displayChatMessage(std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
	virtual void displayClientMessage(std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
	virtual void displayTextObjectMessage(TextHolder const&, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
	virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const&, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
	virtual void displayWhisperMessage(std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
	virtual void startSleepInBed(BlockPos const&);
	virtual void stopSleepInBed(bool, bool);
	virtual void canStartSleepInBed(void);
	virtual int getSleepTimer(void);
	virtual int getPreviousTickSleepTimer(void);
	virtual void openSign(BlockPos const&);
	virtual void playEmote(std::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
	virtual bool isHostingPlayer(void);
	virtual bool isLoading(void);
	virtual bool isPlayerInitialized(void);
	virtual void stopLoading(void);
	virtual void registerTrackedBoss(uint64_t);
	virtual void unRegisterTrackedBoss(uint64_t);
	virtual void setPlayerGameType(GameType);
	virtual void initHUDContainerManager(void);
	virtual void _crit(Actor&);
	virtual int getEventing(void);
	virtual int getUserId(void);
	virtual void sendEventPacket(class EventPacket&);
	virtual void addExperience(int);
	virtual void addLevels(int);
private:
	virtual void TryroFunc419();
	virtual void TryroFunc420();
public:
	virtual void inventoryChanged(class Container&, int, class ItemStack const&, class ItemStack const&, bool);
private:
	virtual void TryroFunc422();
public:
	virtual void deleteContainerManager(void);
	virtual void setFieldOfViewModifier(float);
	virtual bool is2DPositionRelevant(); // removed
	virtual bool isActorRelevant(Actor const&);
private:
	virtual void TryroFunc427();
public:
	virtual void onSuspension(void);
	virtual void onLinkedSlotsChanged(void);
	virtual void startCooldown(class Item const*);
	virtual int getItemCooldownLeft(HashedString const&);
	virtual int getItemCooldownLeft(uintptr_t);
	virtual int getMaxItemCooldownLeft(void);
	virtual bool isItemInCooldown(HashedString const&);
private:
	virtual void TryroFunc435();
	virtual void TryroFunc436();
public:
	virtual void sendNetworkPacket(Packet&);
private:
	virtual void TryroFunc438();
	virtual void TryroFunc439();
	virtual void TryroFunc440();
	virtual void TryroFunc441();
public:
	virtual void reportMovementTelemetry(class MovementEventType);
	virtual bool isSimulated(void);
private:
	virtual void TryroFunc444();
public:
	virtual int getMovementSettings(void);
	virtual void onMovePlayerPacketNormal(Vector3 const&, Vector2 const&, float);
	virtual void _createChunkSource(ChunkSource&);


};