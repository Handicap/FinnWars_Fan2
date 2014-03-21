rem **** Filename: CommonSoldierData.inc
rem ** Make soldier be visible 3 times the normal culling distance
ObjectTemplate.cullRadiusScale 3.0
ObjectTemplate.hasDynamicShadow 1

rem .setSkeletonCollisionBone <bonename> <bone radius in meters> <up/down adjustment> <material> 
ObjectTemplate.setSkeletonCollisionBone Bip01_Head 0.02 2 40 
ObjectTemplate.setSkeletonCollisionBone Bip01_Spine2 0.08 -0.45 41
ObjectTemplate.setSkeletonCollisionBone Bip01_L_Forearm 0.02 0.0 42
ObjectTemplate.setSkeletonCollisionBone Bip01_R_Forearm 0.02 0.0 42
ObjectTemplate.setSkeletonCollisionBone Bip01_L_Calf 0.03 0.3 42
ObjectTemplate.setSkeletonCollisionBone Bip01_R_Calf 0.03 0.3 42
ObjectTemplate.setSkeletonCollisionBone Bip01_L_Foot 0.035 0 42
ObjectTemplate.setSkeletonCollisionBone Bip01_R_Foot 0.035 0 42


rem *** Different camera positions for different soldier poses.
objectTemplate.center1pHands -0.12/-1.56/0.1
rem objectTemplate.center1pHands -0.12/-1.56/0.1
ObjectTemplate.setPoseCameraPos c_BfSoldierStanding 0/0.65/0
ObjectTemplate.setPoseCameraPos c_BfSoldierCrouching 0/0.12/0
rem ObjectTemplate.setPoseCameraPos c_BfSoldierLying 0/-0.7/0
ObjectTemplate.setPoseCameraPos c_BfSoldierLying 0/-0.8/0.0
ObjectTemplate.setCharacterHeight -1.00

ObjectTemplate.geometry BodyCollision

ObjectTemplate.setParachuteDrag 20.00
ObjectTemplate.setParachuteSpeed 20.00

ObjectTemplate.HasArmor 1
ObjectTemplate.explosionForceMax 600
ObjectTemplate.explosionDamage 0.0
ObjectTemplate.HitPoints 30
ObjectTemplate.MaxHitPoints 30
ObjectTemplate.timeToLiveAfterDeath 20

rem pienempi speedmod vähentää törmäysvahinkoa.
rem ObjectTemplate.SpeedMod 0.5
ObjectTemplate.SpeedMod 1
ObjectTemplate.angleMod 1
ObjectTemplate.Material 40
ObjectTemplate.hasMobilePhysics 1
ObjectTemplate.drag 1.0
ObjectTemplate.mass 100
ObjectTemplate.hasCollisionPhysics 1
ObjectTemplate.hasResponsePhysics 1
rem ObjectTemplate.criticalDamage 20
rem ObjectTemplate.hpLostWhileCriticalDamage 0.01
rem ObjectTemplate.addArmorEffect 20 e_haavottuminen 0/-0.5/-1
rem ObjectTemplate.addArmorEffect 0 e_Blood3 0/0/0
rem ObjectTemplate.Grip c_PGFDummyGrip
ObjectTemplate.setAnimationState 0 Lb_Stand
ObjectTemplate.setAnimationState 1 Ub_StandAim
ObjectTemplate.setTurnLeftRightAngle 20.0 14.0
ObjectTemplate.setPointUpDownAngle 38.0  38.0
ObjectTemplate.setLiePointUpDownAngle 0.0 -6.0

rem tällä arvolla saa 1 persoonan kädet sekaisin :D
ObjectTemplate.set1pFov 0.47
ObjectTemplate.networkableInfo NetSoldierInfo
ObjectTemplate.hpLostWhileDamageFromWater 1
ObjectTemplate.WaterDamageDelay 30
ObjectTemplate.DamageFromWater 1
ObjectTemplate.zoomFov 0

rem Hud.Usethumbnailmap 0
Soldier.cameraShakeFactor 1.0

ObjectTemplate.isPortalPassing 1
ObjectTemplate.portalPassingPosition 0/0/0

objectTemplate.aiTemplate Soldier

ObjectTemplate.addTemplate SoldierEntry

ObjectTemplate.addTemplate SoldierCamera
ObjectTemplate.setIsFirstPersonPart 1

ObjectTemplate.addTemplate Parachute
ObjectTemplate.setPosition 0/0.3/0

ObjectTemplate.repairDistance 2.0
ObjectTemplate.disarmMinesDistance 2.0
ObjectTemplate.healDistance 2.0
ObjectTemplate.explosionForceMod 75

rem *** Medic ***
objectTemplate.healFactor 0.10
objectTemplate.selfHealFactor 0.04

rem *** engineer repair ***
objectTemplate.repairFactor 0.061

Soldier.setStrafeSpeed 0 3.0