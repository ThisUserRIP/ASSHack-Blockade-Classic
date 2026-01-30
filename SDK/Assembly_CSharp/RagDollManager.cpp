#include "RagDollManager.h"

IL2CPP::Il2CppClass* Assembly_CSharp::RagDollManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "RagDollManager");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::RagDollManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::GameObject* Assembly_CSharp::RagDollManager::CreatePlayerRagDoll(UnityEngine_CoreModule::UnityEngine::GameObject* original, UnityEngine_CoreModule::UnityEngine::GameObject* attacker, int32_t victimID, bool hide, int32_t team, int32_t skin, int32_t weaponid, bool helmet, bool self, int32_t ha1, int32_t ha2, int32_t ha3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreatePlayerRagDoll", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.GameObject", "System.Int32", "System.Boolean", "System.Int32", "System.Int32", "System.Int32", "System.Boolean", "System.Boolean", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[12];
	params[0] = (intptr_t)original;
	params[1] = (intptr_t)attacker;
	params[2] = (intptr_t)&victimID;
	params[3] = (intptr_t)&hide;
	params[4] = (intptr_t)&team;
	params[5] = (intptr_t)&skin;
	params[6] = (intptr_t)&weaponid;
	params[7] = (intptr_t)&helmet;
	params[8] = (intptr_t)&self;
	params[9] = (intptr_t)&ha1;
	params[10] = (intptr_t)&ha2;
	params[11] = (intptr_t)&ha3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
void Assembly_CSharp::RagDollManager::CreateHelmetRagDoll(UnityEngine_CoreModule::UnityEngine::GameObject* original, int32_t team, int32_t skin, int32_t _headAttach)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateHelmetRagDoll", std::vector<std::string> { "UnityEngine.GameObject", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)original;
	params[1] = (intptr_t)&team;
	params[2] = (intptr_t)&skin;
	params[3] = (intptr_t)&_headAttach;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateGrenade(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateGrenade", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateSTIELHANDGRANATE(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSTIELHANDGRANATE", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateM18(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateM18", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateGG(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateGG", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateMolotov(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMolotov", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateMK3(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMK3", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateRKG3(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateRKG3", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateRocket(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateRocket", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateM202Rocket(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateM202Rocket", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateZombie(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateZombie", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateGP(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateGP", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateWeapon(UnityEngine_CoreModule::UnityEngine::GameObject* _pos, UnityEngine_CoreModule::UnityEngine::Vector3 _rot, UnityEngine_CoreModule::UnityEngine::Transform* attacker, int32_t wid, int32_t killerwid, Assembly_CSharp::Block* _block)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateWeapon", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.Vector3", "UnityEngine.Transform", "System.Int32", "System.Int32", "Block" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)_pos;
	params[1] = (intptr_t)&_rot;
	params[2] = (intptr_t)attacker;
	params[3] = (intptr_t)&wid;
	params[4] = (intptr_t)&killerwid;
	params[5] = (intptr_t)_block;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateMINEN(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMINEN", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateTank(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateTank", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateTankLight(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateTankLight", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateTankMedium(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateTankMedium", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateTankHeavy(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateTankHeavy", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateJeep(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz, int32_t _team)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateJeep", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[15];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	params[14] = (intptr_t)&_team;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateEmptyTankRagDoll(UnityEngine_CoreModule::UnityEngine::GameObject* original, uint8_t epic)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateEmptyTankRagDoll", std::vector<std::string> { "UnityEngine.GameObject", "System.Byte" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)original;
	params[1] = (intptr_t)&epic;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateEmptyJeepRagDoll(UnityEngine_CoreModule::UnityEngine::GameObject* original, uint8_t epic)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateEmptyJeepRagDoll", std::vector<std::string> { "UnityEngine.GameObject", "System.Byte" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)original;
	params[1] = (intptr_t)&epic;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateRPG7(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateRPG7", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateSnaryad(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSnaryad", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateZBK18M(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateZBK18M", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateZOF26(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateZOF26", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateMinefly(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMinefly", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateMine(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMine", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateATMine(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateATMine", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateC4(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateC4", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateSMOKE(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSMOKE", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateFLASH(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateFLASH", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateCrossbowArrow(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateCrossbowArrow", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateJavelinMissle(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateJavelinMissle", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreatePashalka(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreatePashalka", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateBigPashalka(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateBigPashalka", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateSnowball(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSnowball", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateMutagen(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMutagen", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateDeathCube(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDeathCube", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateDeathCubeFire(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDeathCubeFire", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateGhostBoss(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateGhostBoss", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::CreateGhost(int32_t id, int32_t uid, float px, float py, float pz, float rx, float ry, float rz, float fx, float fy, float fz, float tx, float ty, float tz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateGhost", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&uid;
	params[2] = (intptr_t)&px;
	params[3] = (intptr_t)&py;
	params[4] = (intptr_t)&pz;
	params[5] = (intptr_t)&rx;
	params[6] = (intptr_t)&ry;
	params[7] = (intptr_t)&rz;
	params[8] = (intptr_t)&fx;
	params[9] = (intptr_t)&fy;
	params[10] = (intptr_t)&fz;
	params[11] = (intptr_t)&tx;
	params[12] = (intptr_t)&ty;
	params[13] = (intptr_t)&tz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::RagDollManager::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
