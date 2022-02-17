#include "fcnpc.hpp"

#include <string>

namespace FCNPC {

    int GetPluginVersion(char version[], const int size) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "S[" + std::to_string(size) + "]i";
        return sampgdk::InvokeNative(native, format.c_str(), version, size);
    }

    int SetUpdateRate(int rate) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), rate);
    }

    int GetUpdateRate() {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "";
        return sampgdk::InvokeNative(native, format.c_str());
    }

    int SetTickRate(int rate) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), rate);
    }

    int GetTickRate() {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "";
        return sampgdk::InvokeNative(native, format.c_str());
    }

    int UseMoveMode(int mode, bool use) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ib";
        return sampgdk::InvokeNative(native, format.c_str(), mode, use);
    }

    bool IsMoveModeUsed(int mode) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), mode);
    }

    int UseMovePathfinding(int pathfinding, bool use) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ib";
        return sampgdk::InvokeNative(native, format.c_str(), pathfinding, use);
    }

    bool IsMovePathfindingUsed(int pathfinding) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), pathfinding);
    }

    int UseCrashLog(bool use) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "b";
        return sampgdk::InvokeNative(native, format.c_str(), use);
    }

    bool IsCrashLogUsed() {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "";
        return !!sampgdk::InvokeNative(native, format.c_str());
    }

    int Create(const char name[]) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "s";
        return sampgdk::InvokeNative(native, format.c_str(), name);
    }

    int Destroy(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int Spawn(int npcid, int skinid, float x, float y, float z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iifff";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, skinid, x, y, z);
    }

    int Respawn(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    bool IsSpawned(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int Kill(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    bool IsDead(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    bool IsValid(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    bool IsStreamedIn(int npcid, int forplayerid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid, forplayerid);
    }

    bool IsStreamedInForAnyone(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int GetValidArray(int npcs[], const int size) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "A[" + std::to_string(size) + "]i";
        return sampgdk::InvokeNative(native, format.c_str(), npcs, size);
    }


    int SetPosition(int npcid, float x, float y, float z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ifff";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, x, y, z);
    }

    int GivePosition(int npcid, float x, float y, float z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ifff";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, x, y, z);
    }

    int GetPosition(int npcid, float *x, float *y, float *z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iRRR";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, x, y, z);
    }

    int SetAngle(int npcid, float angle) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "if";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, angle);
    }

    float GiveAngle(int npcid, float angle) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0.0f;
        const std::string format = "if";
        cell retval = sampgdk::InvokeNative(native, format.c_str(), npcid, angle);
        return amx_ctof(retval);
    }

    int SetAngleToPos(int npcid, float x, float y) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iff";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, x, y);
    }

    int SetAngleToPlayer(int npcid, int playerid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, playerid);
    }

    float GetAngle(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0.0f;
        const std::string format = "i";
        cell retval = sampgdk::InvokeNative(native, format.c_str(), npcid);
        return amx_ctof(retval);
    }

    int SetQuaternion(int npcid, float w, float x, float y, float z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iffff";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, w, x, y, z);
    }

    int GiveQuaternion(int npcid, float w, float x, float y, float z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iffff";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, w, x, y, z);
    }

    int GetQuaternion(int npcid, float *w, float *x, float *y, float *z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iRRRR";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, w, x, y, z);
    }

    int SetVelocity(int npcid, float x, float y, float z, bool update_pos) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ifffb";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, x, y, z, update_pos);
    }

    int GiveVelocity(int npcid, float x, float y, float z, bool update_pos) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ifffb";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, x, y, z, update_pos);
    }

    int GetVelocity(int npcid, float *x, float *y, float *z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iRRR";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, x, y, z);
    }

    int SetSpeed(int npcid, float speed) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "if";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, speed);
    }

    float GetSpeed(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0.0f;
        const std::string format = "i";
        cell retval = sampgdk::InvokeNative(native, format.c_str(), npcid);
        return amx_ctof(retval);
    }

    int SetInterior(int npcid, int interiorid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, interiorid);
    }

    int GetInterior(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int SetVirtualWorld(int npcid, int worldid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, worldid);
    }

    int GetVirtualWorld(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }


    int SetHealth(int npcid, float health) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "if";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, health);
    }

    float GiveHealth(int npcid, float health) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0.0f;
        const std::string format = "if";
        cell retval = sampgdk::InvokeNative(native, format.c_str(), npcid, health);
        return amx_ctof(retval);
    }

    float GetHealth(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0.0f;
        const std::string format = "i";
        cell retval = sampgdk::InvokeNative(native, format.c_str(), npcid);
        return amx_ctof(retval);
    }

    int SetArmour(int npcid, float armour) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "if";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, armour);
    }

    float GiveArmour(int npcid, float armour) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0.0f;
        const std::string format = "if";
        cell retval = sampgdk::InvokeNative(native, format.c_str(), npcid, armour);
        return amx_ctof(retval);
    }

    float GetArmour(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0.0f;
        const std::string format = "i";
        cell retval = sampgdk::InvokeNative(native, format.c_str(), npcid);
        return amx_ctof(retval);
    }


    int SetInvulnerable(int npcid, bool invulnerable) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ib";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, invulnerable);
    }

    bool IsInvulnerable(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid);
    }


    int SetSkin(int npcid, int skinid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, skinid);
    }

    int GetSkin(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }


    int SetWeapon(int npcid, int weaponid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, weaponid);
    }

    int GetWeapon(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int SetAmmo(int npcid, int ammo) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, ammo);
    }

    int GiveAmmo(int npcid, int ammo) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, ammo);
    }

    int GetAmmo(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int SetAmmoInClip(int npcid, int ammo) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, ammo);
    }

    int GiveAmmoInClip(int npcid, int ammo) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, ammo);
    }

    int GetAmmoInClip(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int SetWeaponSkillLevel(int npcid, int skill, int level) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, skill, level);
    }

    int GiveWeaponSkillLevel(int npcid, int skill, int level) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, skill, level);
    }

    int GetWeaponSkillLevel(int npcid, int skill) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, skill);
    }

    int SetWeaponState(int npcid, int weapon_state) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, weapon_state);
    }

    int GetWeaponState(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }


    int SetWeaponReloadTime(int npcid, int weaponid, int time) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, weaponid, time);
    }

    int GetWeaponReloadTime(int npcid, int weaponid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, weaponid);
    }

    int GetWeaponActualReloadTime(int npcid, int weaponid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, weaponid);
    }

    int SetWeaponShootTime(int npcid, int weaponid, int time) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, weaponid, time);
    }

    int GetWeaponShootTime(int npcid, int weaponid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, weaponid);
    }

    int SetWeaponClipSize(int npcid, int weaponid, int size) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, weaponid, size);
    }

    int GetWeaponClipSize(int npcid, int weaponid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, weaponid);
    }

    int GetWeaponActualClipSize(int npcid, int weaponid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, weaponid);
    }

    int SetWeaponAccuracy(int npcid, int weaponid, float accuracy) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iif";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, weaponid, accuracy);
    }

    float GetWeaponAccuracy(int npcid, int weaponid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0.0f;
        const std::string format = "ii";
        cell retval = sampgdk::InvokeNative(native, format.c_str(), npcid, weaponid);
        return amx_ctof(retval);
    }

    int SetWeaponInfo(int npcid, int weaponid, int reload_time, int shoot_time, int clip_size, float accuracy) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iiiiif";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, weaponid, reload_time, shoot_time, clip_size, accuracy);
    }

    int GetWeaponInfo(int npcid, int weaponid, int *reload_time, int *shoot_time, int *clip_size, float *accuracy) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iiRRRR";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, weaponid, reload_time, shoot_time, clip_size, accuracy);
    }

    int SetWeaponDefaultInfo(int weaponid, int reload_time, int shoot_time, int clip_size, float accuracy) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iiiif";
        return sampgdk::InvokeNative(native, format.c_str(), weaponid, reload_time, shoot_time, clip_size, accuracy);
    }

    int GetWeaponDefaultInfo(int weaponid, int *reload_time, int *shoot_time, int *clip_size, float *accuracy) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iRRRR";
        return sampgdk::InvokeNative(native, format.c_str(), weaponid, reload_time, shoot_time, clip_size, accuracy);
    }


    int SetKeys(int npcid, int ud_analog, int lr_analog, int keys) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iiii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, ud_analog, lr_analog, keys);
    }

    int GetKeys(int npcid, int *ud_analog, int *lr_analog, int *keys) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iRRR";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, ud_analog, lr_analog, keys);
    }


    int SetSpecialAction(int npcid, int actionid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, actionid);
    }

    int GetSpecialAction(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }


    int SetAnimation(int npcid, int animationid, float fDelta, int loop, int lockx, int locky, int freeze, int time) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iifiiiii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, animationid, fDelta, loop, lockx, locky, freeze, time);
    }

    int SetAnimationByName(int npcid, const char name[], float fDelta, int loop, int lockx, int locky, int freeze, int time) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "isfiiiii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, name, fDelta, loop, lockx, locky, freeze, time);
    }

    int ResetAnimation(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int GetAnimation(int npcid, int *animationid, float *fDelta, int *loop, int *lockx, int *locky, int *freeze, int *time) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iRRRRRRR";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, animationid, fDelta, loop, lockx, locky, freeze, time);
    }

    int ApplyAnimation(int npcid, const char animlib[], const char animname[], float fDelta, int loop, int lockx, int locky, int freeze, int time) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "issfiiiii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, animlib, animname, fDelta, loop, lockx, locky, freeze, time);
    }

    int ClearAnimations(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }


    int SetFightingStyle(int npcid, int style) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, style);
    }

    int GetFightingStyle(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }


    int UseReloading(int npcid, bool use) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ib";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, use);
    }

    bool IsReloadingUsed(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int UseInfiniteAmmo(int npcid, bool use) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ib";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, use);
    }

    bool IsInfiniteAmmoUsed(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid);
    }


    int GoTo(int npcid, float x, float y, float z, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance, int stop_delay) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ifffifiifbfi";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, x, y, z, type, speed, mode, pathfinding, radius, set_angle, min_distance, stop_delay);
    }

    int GoToPlayer(int npcid, int playerid, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance, float dist_check, int stop_delay) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iiifiifbffi";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, playerid, type, speed, mode, pathfinding, radius, set_angle, min_distance, dist_check, stop_delay);
    }

    int Stop(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    bool IsMoving(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    bool IsMovingAtPlayer(int npcid, int playerid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid, playerid);
    }

    int GetDestinationPoint(int npcid, float *x, float *y, float *z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iRRR";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, x, y, z);
    }


    int AimAt(int npcid, float x, float y, float z, bool shoot, int shoot_delay, bool set_angle, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ifffbibfffii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, x, y, z, shoot, shoot_delay, set_angle, offset_from_x, offset_from_y, offset_from_z, between_check_mode, between_check_flags);
    }

    int AimAtPlayer(int npcid, int playerid, bool shoot, int shoot_delay, bool set_angle, float offset_x, float offset_y, float offset_z, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iibibffffffii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, playerid, shoot, shoot_delay, set_angle, offset_x, offset_y, offset_z, offset_from_x, offset_from_y, offset_from_z, between_check_mode, between_check_flags);
    }

    int StopAim(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int MeleeAttack(int npcid, int delay, bool fighting_style) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iib";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, delay, fighting_style);
    }

    int StopAttack(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    bool IsAttacking(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    bool IsAiming(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    bool IsAimingAtPlayer(int npcid, int playerid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid, playerid);
    }

    int GetAimingPlayer(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    bool IsShooting(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    bool IsReloading(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int TriggerWeaponShot(int npcid, int weaponid, int hittype, int hitid, float x, float y, float z, bool is_hit, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iiiifffbfffii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, weaponid, hittype, hitid, x, y, z, is_hit, offset_from_x, offset_from_y, offset_from_z, between_check_mode, between_check_flags);
    }

    int GetClosestEntityInBetween(int npcid, float x, float y, float z, float range, int between_check_mode, int between_check_flags, float offset_from_x, float offset_from_y, float offset_from_z, int *entity_id, int *entity_type, int *object_owner_id, float *point_x, float *point_y, float *point_z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iffffiifffRRRRRR";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, x, y, z, range, between_check_mode, between_check_flags, offset_from_x, offset_from_y, offset_from_z, entity_id, entity_type, object_owner_id, point_x, point_y, point_z);
    }


    int EnterVehicle(int npcid, int vehicleid, int seatid, int type) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iiii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, vehicleid, seatid, type);
    }

    int ExitVehicle(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }


    int PutInVehicle(int npcid, int vehicleid, int seatid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, vehicleid, seatid);
    }

    int RemoveFromVehicle(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int GetVehicleID(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int GetVehicleSeat(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int UseVehicleSiren(int npcid, bool use) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ib";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, use);
    }

    bool IsVehicleSirenUsed(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int SetVehicleHealth(int npcid, float health) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "if";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, health);
    }

    float GetVehicleHealth(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0.0f;
        const std::string format = "i";
        cell retval = sampgdk::InvokeNative(native, format.c_str(), npcid);
        return amx_ctof(retval);
    }

    int SetVehicleHydraThrusters(int npcid, int direction) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, direction);
    }

    int GetVehicleHydraThrusters(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int SetVehicleGearState(int npcid, int gear_state) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, gear_state);
    }

    int GetVehicleGearState(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int SetVehicleTrainSpeed(int npcid, float speed) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "if";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, speed);
    }

    float GetVehicleTrainSpeed(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0.0f;
        const std::string format = "i";
        cell retval = sampgdk::InvokeNative(native, format.c_str(), npcid);
        return amx_ctof(retval);
    }


    int SetSurfingOffsets(int npcid, float x, float y, float z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ifff";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, x, y, z);
    }

    int GiveSurfingOffsets(int npcid, float x, float y, float z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ifff";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, x, y, z);
    }

    int GetSurfingOffsets(int npcid, float *x, float *y, float *z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iRRR";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, x, y, z);
    }

    int SetSurfingVehicle(int npcid, int vehicleid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, vehicleid);
    }

    int GetSurfingVehicle(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int SetSurfingObject(int npcid, int objectid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, objectid);
    }

    int GetSurfingObject(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int SetSurfingPlayerObject(int npcid, int objectid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, objectid);
    }

    int GetSurfingPlayerObject(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }


    int StopSurfing(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }


    int StartPlayingPlayback(int npcid, const char file[]) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "is";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, file);
    }

    int StopPlayingPlayback(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int PausePlayingPlayback(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int ResumePlayingPlayback(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int LoadPlayingPlayback(const char file[]) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "s";
        return sampgdk::InvokeNative(native, format.c_str(), file);
    }

    int UnloadPlayingPlayback(int recordid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), recordid);
    }

    int SetPlayingPlaybackPath(int npcid, const char path[]) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "is";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, path);
    }

    int GetPlayingPlaybackPath(int npcid, char path[], const int size) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iS[" + std::to_string(size) + "]i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, path, size);
    }


    int OpenNode(int nodeid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), nodeid);
    }

    int CloseNode(int nodeid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), nodeid);
    }

    bool IsNodeOpen(int nodeid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), nodeid);
    }

    int GetNodeType(int nodeid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), nodeid);
    }

    int SetNodePoint(int nodeid, int pointid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), nodeid, pointid);
    }

    int GetNodePointPosition(int nodeid, float *x, float *y, float *z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iRRR";
        return sampgdk::InvokeNative(native, format.c_str(), nodeid, x, y, z);
    }

    int GetNodePointCount(int nodeid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), nodeid);
    }

    int GetNodeInfo(int nodeid, int *vehnodes, int *pednodes, int *navinode) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iRRR";
        return sampgdk::InvokeNative(native, format.c_str(), nodeid, vehnodes, pednodes, navinode);
    }

    int PlayNode(int npcid, int nodeid, int type, float speed, int mode, float radius, bool set_angle) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iiififb";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, nodeid, type, speed, mode, radius, set_angle);
    }

    int StopPlayingNode(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int PausePlayingNode(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int ResumePlayingNode(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    bool IsPlayingNode(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    bool IsPlayingNodePaused(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), npcid);
    }


    int CreateMovePath() {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "";
        return sampgdk::InvokeNative(native, format.c_str());
    }

    int DestroyMovePath(int pathid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), pathid);
    }

    bool IsValidMovePath(int pathid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return !!sampgdk::InvokeNative(native, format.c_str(), pathid);
    }

    int AddPointToMovePath(int pathid, float x, float y, float z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ifff";
        return sampgdk::InvokeNative(native, format.c_str(), pathid, x, y, z);
    }

    int AddPointsToMovePath(int pathid, float points[][3], const int size) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iA[" + std::to_string(size) + "]i";
        return sampgdk::InvokeNative(native, format.c_str(), pathid, points, size);
    }

    int AddPointsToMovePath2(int pathid, float points_x[], float points_y[], float points_z[], const int size) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iA[" + std::to_string(size) + "]A[" + std::to_string(size) + "]A[" + std::to_string(size) + "]i";
        return sampgdk::InvokeNative(native, format.c_str(), pathid, points_x, points_y, points_z, size);
    }

    int RemovePointFromMovePath(int pathid, int pointid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), pathid, pointid);
    }

    bool IsValidMovePathPoint(int pathid, int pointid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return !!sampgdk::InvokeNative(native, format.c_str(), pathid, pointid);
    }

    int GetMovePathPoint(int pathid, int pointid, float *x, float *y, float *z) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iiRRR";
        return sampgdk::InvokeNative(native, format.c_str(), pathid, pointid, x, y, z);
    }

    int GetNumberMovePathPoint(int pathid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), pathid);
    }

    int GoByMovePath(int npcid, int pathid, int pointid, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "iiiifiifbf";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, pathid, pointid, type, speed, mode, pathfinding, radius, set_angle, min_distance);
    }


    int SetMoveMode(int npcid, int mode) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, mode);
    }

    int GetMoveMode(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "i";
        return sampgdk::InvokeNative(native, format.c_str(), npcid);
    }

    int SetMinHeightPosCall(int npcid, float height) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "if";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, height);
    }

    float GetMinHeightPosCall(int npcid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0.0f;
        const std::string format = "i";
        cell retval = sampgdk::InvokeNative(native, format.c_str(), npcid);
        return amx_ctof(retval);
    }


    int ShowInTabListForPlayer(int npcid, int forplayerid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, forplayerid);
    }

    int HideInTabListForPlayer(int npcid, int forplayerid) {
        const std::string native_name = "FCNPC_" + std::string(__func__);
        static AMX_NATIVE native = sampgdk::FindNative(native_name.c_str());
        if (!native) return sampgdk::logprintf(("Native not discovered: " + native_name).c_str()), 0;
        const std::string format = "ii";
        return sampgdk::InvokeNative(native, format.c_str(), npcid, forplayerid);
    }

    std::pair<bool, bool> callback_handle(AMX *amx, const char *name, cell *params, cell *retval) {
        const std::pair<bool, bool> not_found(false, false);

        const std::string name_str(name);

        if (name_str.compare(0, 8, "FCNPC_On") != 0) return not_found;

        if (name_str.compare(8, std::string::npos, "Create") == 0)
            return std::make_pair(true, OnCreate(params[1]));
        if (name_str.compare(8, std::string::npos, "Destroy") == 0)
            return std::make_pair(true, OnDestroy(params[1]));
        if (name_str.compare(8, std::string::npos, "Spawn") == 0)
            return std::make_pair(true, OnSpawn(params[1]));
        if (name_str.compare(8, std::string::npos, "Respawn") == 0)
            return std::make_pair(true, OnRespawn(params[1]));
        if (name_str.compare(8, std::string::npos, "Death") == 0)
            return std::make_pair(true, OnDeath(params[1], params[2], params[3]));
        if (name_str.compare(8, std::string::npos, "Update") == 0)
            return std::make_pair(true, OnUpdate(params[1]));
        if (name_str.compare(8, std::string::npos, "TakeDamage") == 0)
            return std::make_pair(true, OnTakeDamage(params[1], params[2], amx_ctof(params[3]), params[4], params[5]));
        if (name_str.compare(8, std::string::npos, "GiveDamage") == 0)
            return std::make_pair(true, OnGiveDamage(params[1], params[2], amx_ctof(params[3]), params[4], params[5]));
        if (name_str.compare(8, std::string::npos, "ReachDestination") == 0)
            return std::make_pair(true, OnReachDestination(params[1]));
        if (name_str.compare(8, std::string::npos, "WeaponShot") == 0)
            return std::make_pair(true, OnWeaponShot(params[1], params[2], params[3], params[4], amx_ctof(params[5]), amx_ctof(params[6]), amx_ctof(params[7])));
        if (name_str.compare(8, std::string::npos, "WeaponStateChange") == 0)
            return std::make_pair(true, OnWeaponStateChange(params[1], params[2]));
        if (name_str.compare(8, std::string::npos, "StreamIn") == 0)
            return std::make_pair(true, OnStreamIn(params[1], params[2]));
        if (name_str.compare(8, std::string::npos, "StreamOut") == 0)
            return std::make_pair(true, OnStreamOut(params[1], params[2]));
        if (name_str.compare(8, std::string::npos, "VehicleEntryComplete") == 0)
            return std::make_pair(true, OnVehicleEntryComplete(params[1], params[2], params[3]));
        if (name_str.compare(8, std::string::npos, "VehicleExitComplete") == 0)
            return std::make_pair(true, OnVehicleExitComplete(params[1], params[2]));
        if (name_str.compare(8, std::string::npos, "VehicleTakeDamage") == 0)
            return std::make_pair(true, OnVehicleTakeDamage(params[1], params[2], params[3], amx_ctof(params[4]), params[5], amx_ctof(params[6]), amx_ctof(params[7]), amx_ctof(params[8])));
        if (name_str.compare(8, std::string::npos, "FinishPlayback") == 0)
            return std::make_pair(true, OnFinishPlayback(params[1]));
        if (name_str.compare(8, std::string::npos, "FinishNode") == 0)
            return std::make_pair(true, OnFinishNode(params[1], params[2]));
        if (name_str.compare(8, std::string::npos, "FinishNodePoint") == 0)
            return std::make_pair(true, OnFinishNodePoint(params[1], params[2], params[3]));
        if (name_str.compare(8, std::string::npos, "ChangeNode") == 0)
            return std::make_pair(true, OnChangeNode(params[1], params[2], params[3]));
        if (name_str.compare(8, std::string::npos, "FinishMovePath") == 0)
            return std::make_pair(true, OnFinishMovePath(params[1], params[2]));
        if (name_str.compare(8, std::string::npos, "FinishMovePathPoint") == 0)
            return std::make_pair(true, OnFinishMovePathPoint(params[1], params[2], params[3]));
        if (name_str.compare(8, std::string::npos, "ChangeHeightPos") == 0)
            return std::make_pair(true, OnChangeHeightPos(params[1], amx_ctof(params[2]), amx_ctof(params[3])));

        return not_found;
    }

};
