#ifndef FCNPC_HPP
#define FCNPC_HPP

#include "sampgdk.h"

#include <utility>

namespace FCNPC {

    // Definitions

    const int INCLUDE_VERSION = 202;

    const int ENTITY_CHECK_NONE = 0;
    const int ENTITY_CHECK_PLAYER = 1;
    const int ENTITY_CHECK_NPC = 2;
    const int ENTITY_CHECK_ACTOR = 4;
    const int ENTITY_CHECK_VEHICLE = 8;
    const int ENTITY_CHECK_OBJECT = 16;
    const int ENTITY_CHECK_POBJECT_ORIG = 32;
    const int ENTITY_CHECK_POBJECT_TARG = 64;
    const int ENTITY_CHECK_MAP = 128;
    const int ENTITY_CHECK_ALL = 255;

    const int ENTITY_MODE_AUTO = -1;
    const int ENTITY_MODE_NONE = 0;
    const int ENTITY_MODE_COLANDREAS = 1;

    const int MOVE_TYPE_AUTO = -1;
    const int MOVE_TYPE_WALK = 0;
    const int MOVE_TYPE_RUN = 1;
    const int MOVE_TYPE_SPRINT = 2;
    const int MOVE_TYPE_DRIVE = 3;

    const int MOVE_MODE_AUTO = -1;
    const int MOVE_MODE_NONE = 0;
    const int MOVE_MODE_MAPANDREAS = 1;
    const int MOVE_MODE_COLANDREAS = 2;

    const int MOVE_PATHFINDING_AUTO = -1;
    const int MOVE_PATHFINDING_NONE = 0;
    const int MOVE_PATHFINDING_Z = 1;
    const int MOVE_PATHFINDING_RAYCAST = 2;

    const double MOVE_SPEED_AUTO = -1.0;
    const double MOVE_SPEED_WALK = 0.1552086;
    const double MOVE_SPEED_RUN = 0.56444;
    const double MOVE_SPEED_SPRINT = 0.926784;

    const int MAX_NODES = 64;

    const int INVALID_MOVEPATH_ID = -1;
    const int INVALID_RECORD_ID = -1;

    // Natives

    int GetPluginVersion(char version[], const int size);
    int SetUpdateRate(int rate);
    int GetUpdateRate();
    int SetTickRate(int rate);
    int GetTickRate();
    int UseMoveMode(int mode, bool use);
    bool IsMoveModeUsed(int mode);
    int UseMovePathfinding(int pathfinding, bool use);
    bool IsMovePathfindingUsed(int pathfinding);
    int UseCrashLog(bool use);
    bool IsCrashLogUsed();

    int Create(const char name[]);
    int Destroy(int npcid);
    int Spawn(int npcid, int skinid, float x, float y, float z);
    int Respawn(int npcid);
    bool IsSpawned(int npcid);
    int Kill(int npcid);
    bool IsDead(int npcid);
    bool IsValid(int npcid);
    bool IsStreamedIn(int npcid, int forplayerid);
    bool IsStreamedInForAnyone(int npcid);
    int GetValidArray(int npcs[], const int size);

    int SetPosition(int npcid, float x, float y, float z);
    int GivePosition(int npcid, float x, float y, float z);
    int GetPosition(int npcid, float *x, float *y, float *z);
    int SetAngle(int npcid, float angle);
    float GiveAngle(int npcid, float angle);
    int SetAngleToPos(int npcid, float x, float y);
    int SetAngleToPlayer(int npcid, int playerid);
    float GetAngle(int npcid);
    int SetQuaternion(int npcid, float w, float x, float y, float z);
    int GiveQuaternion(int npcid, float w, float x, float y, float z);
    int GetQuaternion(int npcid, float *w, float *x, float *y, float *z);
    int SetVelocity(int npcid, float x, float y, float z, bool update_pos);
    int GiveVelocity(int npcid, float x, float y, float z, bool update_pos);
    int GetVelocity(int npcid, float *x, float *y, float *z);
    int SetSpeed(int npcid, float speed);
    float GetSpeed(int npcid);
    int SetInterior(int npcid, int interiorid);
    int GetInterior(int npcid);
    int SetVirtualWorld(int npcid, int worldid);
    int GetVirtualWorld(int npcid);

    int SetHealth(int npcid, float health);
    float GiveHealth(int npcid, float health);
    float GetHealth(int npcid);
    int SetArmour(int npcid, float armour);
    float GiveArmour(int npcid, float armour);
    float GetArmour(int npcid);

    int SetInvulnerable(int npcid, bool invulnerable);
    bool IsInvulnerable(int npcid);

    int SetSkin(int npcid, int skinid);
    int GetSkin(int npcid);

    int SetWeapon(int npcid, int weaponid);
    int GetWeapon(int npcid);
    int SetAmmo(int npcid, int ammo);
    int GiveAmmo(int npcid, int ammo);
    int GetAmmo(int npcid);
    int SetAmmoInClip(int npcid, int ammo);
    int GiveAmmoInClip(int npcid, int ammo);
    int GetAmmoInClip(int npcid);
    int SetWeaponSkillLevel(int npcid, int skill, int level);
    int GiveWeaponSkillLevel(int npcid, int skill, int level);
    int GetWeaponSkillLevel(int npcid, int skill);
    int SetWeaponState(int npcid, int weapon_state);
    int GetWeaponState(int npcid);

    int SetWeaponReloadTime(int npcid, int weaponid, int time);
    int GetWeaponReloadTime(int npcid, int weaponid);
    int GetWeaponActualReloadTime(int npcid, int weaponid);
    int SetWeaponShootTime(int npcid, int weaponid, int time);
    int GetWeaponShootTime(int npcid, int weaponid);
    int SetWeaponClipSize(int npcid, int weaponid, int size);
    int GetWeaponClipSize(int npcid, int weaponid);
    int GetWeaponActualClipSize(int npcid, int weaponid);
    int SetWeaponAccuracy(int npcid, int weaponid, float accuracy);
    float GetWeaponAccuracy(int npcid, int weaponid);
    int SetWeaponInfo(int npcid, int weaponid, int reload_time, int shoot_time, int clip_size, float accuracy);
    int GetWeaponInfo(int npcid, int weaponid, int *reload_time, int *shoot_time, int *clip_size, float *accuracy);
    int SetWeaponDefaultInfo(int weaponid, int reload_time, int shoot_time, int clip_size, float accuracy);
    int GetWeaponDefaultInfo(int weaponid, int *reload_time, int *shoot_time, int *clip_size, float *accuracy);

    int SetKeys(int npcid, int ud_analog, int lr_analog, int keys);
    int GetKeys(int npcid, int *ud_analog, int *lr_analog, int *keys);

    int SetSpecialAction(int npcid, int actionid);
    int GetSpecialAction(int npcid);

    int SetAnimation(int npcid, int animationid, float fDelta, int loop, int lockx, int locky, int freeze, int time);
    int SetAnimationByName(int npcid, const char name[], float fDelta, int loop, int lockx, int locky, int freeze, int time);
    int ResetAnimation(int npcid);
    int GetAnimation(int npcid, int *animationid, float *fDelta, int *loop, int *lockx, int *locky, int *freeze, int *time);
    int ApplyAnimation(int npcid, const char animlib[], const char animname[], float fDelta, int loop, int lockx, int locky, int freeze, int time);
    int ClearAnimations(int npcid);

    int SetFightingStyle(int npcid, int style);
    int GetFightingStyle(int npcid);

    int UseReloading(int npcid, bool use);
    bool IsReloadingUsed(int npcid);
    int UseInfiniteAmmo(int npcid, bool use);
    bool IsInfiniteAmmoUsed(int npcid);

    int GoTo(int npcid, float x, float y, float z, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance, int stop_delay);
    int GoToPlayer(int npcid, int playerid, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance, float dist_check, int stop_delay);
    int Stop(int npcid);
    bool IsMoving(int npcid);
    bool IsMovingAtPlayer(int npcid, int playerid);
    int GetDestinationPoint(int npcid, float *x, float *y, float *z);

    int AimAt(int npcid, float x, float y, float z, bool shoot, int shoot_delay, bool set_angle, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags);
    int AimAtPlayer(int npcid, int playerid, bool shoot, int shoot_delay, bool set_angle, float offset_x, float offset_y, float offset_z, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags);
    int StopAim(int npcid);
    int MeleeAttack(int npcid, int delay, bool fighting_style);
    int StopAttack(int npcid);
    bool IsAttacking(int npcid);
    bool IsAiming(int npcid);
    bool IsAimingAtPlayer(int npcid, int playerid);
    int GetAimingPlayer(int npcid);
    bool IsShooting(int npcid);
    bool IsReloading(int npcid);
    int TriggerWeaponShot(int npcid, int weaponid, int hittype, int hitid, float x, float y, float z, bool is_hit, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags);
    int GetClosestEntityInBetween(int npcid, float x, float y, float z, float range, int between_check_mode, int between_check_flags, float offset_from_x, float offset_from_y, float offset_from_z, int *entity_id, int *entity_type, int *object_owner_id, float *point_x, float *point_y, float *point_z);

    int EnterVehicle(int npcid, int vehicleid, int seatid, int type);
    int ExitVehicle(int npcid);

    int PutInVehicle(int npcid, int vehicleid, int seatid);
    int RemoveFromVehicle(int npcid);
    int GetVehicleID(int npcid);
    int GetVehicleSeat(int npcid);
    int UseVehicleSiren(int npcid, bool use);
    bool IsVehicleSirenUsed(int npcid);
    int SetVehicleHealth(int npcid, float health);
    float GetVehicleHealth(int npcid);
    int SetVehicleHydraThrusters(int npcid, int direction);
    int GetVehicleHydraThrusters(int npcid);
    int SetVehicleGearState(int npcid, int gear_state);
    int GetVehicleGearState(int npcid);
    int SetVehicleTrainSpeed(int npcid, float speed);
    float GetVehicleTrainSpeed(int npcid);

    int SetSurfingOffsets(int npcid, float x, float y, float z);
    int GiveSurfingOffsets(int npcid, float x, float y, float z);
    int GetSurfingOffsets(int npcid, float *x, float *y, float *z);
    int SetSurfingVehicle(int npcid, int vehicleid);
    int GetSurfingVehicle(int npcid);
    int SetSurfingObject(int npcid, int objectid);
    int GetSurfingObject(int npcid);
    int SetSurfingPlayerObject(int npcid, int objectid);
    int GetSurfingPlayerObject(int npcid);

    int StopSurfing(int npcid);

    int StartPlayingPlayback(int npcid, const char file[]);
    int StopPlayingPlayback(int npcid);
    int PausePlayingPlayback(int npcid);
    int ResumePlayingPlayback(int npcid);
    int LoadPlayingPlayback(const char file[]);
    int UnloadPlayingPlayback(int recordid);
    int SetPlayingPlaybackPath(int npcid, const char path[]);
    int GetPlayingPlaybackPath(int npcid, char path[], const int size);

    int OpenNode(int nodeid);
    int CloseNode(int nodeid);
    bool IsNodeOpen(int nodeid);
    int GetNodeType(int nodeid);
    int SetNodePoint(int nodeid, int pointid);
    int GetNodePointPosition(int nodeid, float *x, float *y, float *z);
    int GetNodePointCount(int nodeid);
    int GetNodeInfo(int nodeid, int *vehnodes, int *pednodes, int *navinode);
    int PlayNode(int npcid, int nodeid, int type, float speed, int mode, float radius, bool set_angle);
    int StopPlayingNode(int npcid);
    int PausePlayingNode(int npcid);
    int ResumePlayingNode(int npcid);
    bool IsPlayingNode(int npcid);
    bool IsPlayingNodePaused(int npcid);

    int CreateMovePath();
    int DestroyMovePath(int pathid);
    bool IsValidMovePath(int pathid);
    int AddPointToMovePath(int pathid, float x, float y, float z);
    int AddPointsToMovePath(int pathid, float points[][3], const int size);
    int AddPointsToMovePath2(int pathid, float points_x[], float points_y[], float points_z[], const int size);
    int RemovePointFromMovePath(int pathid, int pointid);
    bool IsValidMovePathPoint(int pathid, int pointid);
    int GetMovePathPoint(int pathid, int pointid, float *x, float *y, float *z);
    int GetNumberMovePathPoint(int pathid);
    int GoByMovePath(int npcid, int pathid, int pointid, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance);

    int SetMoveMode(int npcid, int mode);
    int GetMoveMode(int npcid);
    int SetMinHeightPosCall(int npcid, float height);
    float GetMinHeightPosCall(int npcid);

    int ShowInTabListForPlayer(int npcid, int forplayerid);
    int HideInTabListForPlayer(int npcid, int forplayerid);

    // Callbacks

    bool OnCreate(int npcid);
    bool OnDestroy(int npcid);
    bool OnSpawn(int npcid);
    bool OnRespawn(int npcid);
    bool OnDeath(int npcid, int killerid, int reason);
    bool OnUpdate(int npcid);

    bool OnTakeDamage(int npcid, int issuerid, float amount, int weaponid, int bodypart);
    bool OnGiveDamage(int npcid, int damagedid, float amount, int weaponid, int bodypart);

    bool OnReachDestination(int npcid);

    bool OnWeaponShot(int npcid, int weaponid, int hittype, int hitid, float fX, float fY, float fZ);
    bool OnWeaponStateChange(int npcid, int weapon_state);

    bool OnStreamIn(int npcid, int forplayerid);
    bool OnStreamOut(int npcid, int forplayerid);

    bool OnVehicleEntryComplete(int npcid, int vehicleid, int seatid);
    bool OnVehicleExitComplete(int npcid, int vehicleid);
    bool OnVehicleTakeDamage(int npcid, int issuerid, int vehicleid, float amount, int weaponid, float fX, float fY, float fZ);

    bool OnFinishPlayback(int npcid);

    bool OnFinishNode(int npcid, int nodeid);
    bool OnFinishNodePoint(int npcid, int nodeid, int pointid);
    bool OnChangeNode(int npcid, int newnodeid, int oldnodeid);

    bool OnFinishMovePath(int npcid, int pathid);
    bool OnFinishMovePathPoint(int npcid, int pathid, int pointid);

    bool OnChangeHeightPos(int npcid, float newz, float oldz);

    // callback_handle

    std::pair<bool, bool> callback_handle(AMX *amx, const char *name, cell *params, cell *retval);
};

#endif
