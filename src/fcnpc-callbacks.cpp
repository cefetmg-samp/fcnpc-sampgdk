#include "fcnpc.hpp"

namespace FCNPC {

    bool OnCreate(int npcid) {
        return true;
    }

    bool OnDestroy(int npcid) {
        return true;
    }

    bool OnSpawn(int npcid) {
        return true;
    }

    bool OnRespawn(int npcid) {
        return true;
    }

    bool OnDeath(int npcid, int killerid, int reason) {
        return true;
    }

    bool OnUpdate(int npcid) {
        return true;
    }

    bool OnTakeDamage(int npcid, int issuerid, float amount, int weaponid, int bodypart) {
        return true;
    }

    bool OnGiveDamage(int npcid, int damagedid, float amount, int weaponid, int bodypart) {
        return true;
    }

    bool OnReachDestination(int npcid) {
        return true;
    }

    bool OnWeaponShot(int npcid, int weaponid, int hittype, int hitid, float fX, float fY, float fZ) {
        return true;
    }

    bool OnWeaponStateChange(int npcid, int weapon_state) {
        return true;
    }

    bool OnStreamIn(int npcid, int forplayerid) {
        return true;
    }

    bool OnStreamOut(int npcid, int forplayerid) {
        return true;
    }

    bool OnVehicleEntryComplete(int npcid, int vehicleid, int seatid) {
        return true;
    }

    bool OnVehicleExitComplete(int npcid, int vehicleid) {
        return true;
    }

    bool OnVehicleTakeDamage(int npcid, int issuerid, int vehicleid, float amount, int weaponid, float fX, float fY, float fZ) {
        return true;
    }

    bool OnFinishPlayback(int npcid) {
        return true;
    }

    bool OnFinishNode(int npcid, int nodeid) {
        return true;
    }

    bool OnFinishNodePoint(int npcid, int nodeid, int pointid) {
        return true;
    }

    bool OnChangeNode(int npcid, int newnodeid, int oldnodeid) {
        return true;
    }

    bool OnFinishMovePath(int npcid, int pathid) {
        return true;
    }

    bool OnFinishMovePathPoint(int npcid, int pathid, int pointid) {
        return true;
    }

    bool OnChangeHeightPos(int npcid, float newz, float oldz) {
        return true;
    }

};
