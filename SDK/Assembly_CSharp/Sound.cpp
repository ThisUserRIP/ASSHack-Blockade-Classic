#include "Sound.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Sound::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "Sound");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Sound::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Sound::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_Weapon(int32_t weaponid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_Weapon", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&weaponid;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_Block(mscorlib::System::String* blockname)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_Block", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)blockname;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_Hit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_Hit");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_HitHelmet()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_HitHelmet");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_TraceHelmet()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_TraceHelmet");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_Walk(int32_t type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_Walk", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_Animal(int32_t type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_Animal", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_Jetpack()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_Jetpack");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_TankEnter(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_TankEnter", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_TankStand(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_TankStand", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_TankMove(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_TankMove", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_TankStart(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_TankStart", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_TankStop(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_TankStop", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_JeepStand(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_JeepStand", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_JeepMove(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_JeepMove", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_JeepStart(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_JeepStart", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_JeepStop(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_JeepStop", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_SnaryadFly(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_SnaryadFly", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_Pich(float koef, UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_Pich", std::vector<std::string> { "System.Single", "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&koef;
	params[1] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_TurretStart(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_TurretStart", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_TurretMove(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_TurretMove", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_TurretStop(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_TurretStop", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_Stop(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_Stop", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_Zoom()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_Zoom");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_TankZoom(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_TankZoom", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_ZM_Infected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_ZM_Infected");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_ZM_Ambient()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_ZM_Ambient");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_Death()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_Death");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_TNT()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_TNT");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_C4_Detonator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_C4_Detonator");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_MinePlace()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_MinePlace");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_GPLauncher()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_GPLauncher");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_WeaponTank(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_WeaponTank", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_WeaponMGTank(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_WeaponMGTank", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_UseModul(UnityEngine_AudioModule::UnityEngine::AudioSource* AS, int32_t module_index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_UseModul", std::vector<std::string> { "UnityEngine.AudioSource", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)AS;
	params[1] = (intptr_t)&module_index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_TankMGNoAmmo(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_TankMGNoAmmo", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_TankMGReload(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_TankMGReload", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_Present(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_Present", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_TankHit(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_TankHit", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_JavelinTargeting(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_JavelinTargeting", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_JavelinAIM(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_JavelinAIM", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_JavelinMissleAIM(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_JavelinMissleAIM", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_MinigunMotor(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_MinigunMotor", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_AudioModule::UnityEngine::AudioClip* Assembly_CSharp::Sound::GetDryFire()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDryFire");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AudioModule::UnityEngine::AudioClip*)returnValue;
}
UnityEngine_AudioModule::UnityEngine::AudioClip* Assembly_CSharp::Sound::GetReload()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetReload");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AudioModule::UnityEngine::AudioClip*)returnValue;
}
UnityEngine_AudioModule::UnityEngine::AudioClip* Assembly_CSharp::Sound::GetSnowballReload()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSnowballReload");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AudioModule::UnityEngine::AudioClip*)returnValue;
}
UnityEngine_AudioModule::UnityEngine::AudioClip* Assembly_CSharp::Sound::GetMineFly()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMineFly");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AudioModule::UnityEngine::AudioClip*)returnValue;
}
UnityEngine_AudioModule::UnityEngine::AudioClip* Assembly_CSharp::Sound::GetMolotovFly()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMolotovFly");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AudioModule::UnityEngine::AudioClip*)returnValue;
}
UnityEngine_AudioModule::UnityEngine::AudioClip* Assembly_CSharp::Sound::GetMolotovBurn()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMolotovBurn");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AudioModule::UnityEngine::AudioClip*)returnValue;
}
UnityEngine_AudioModule::UnityEngine::AudioClip* Assembly_CSharp::Sound::GetMolotovExplosion()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMolotovExplosion");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AudioModule::UnityEngine::AudioClip*)returnValue;
}
UnityEngine_AudioModule::UnityEngine::AudioClip* Assembly_CSharp::Sound::GetSelect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSelect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AudioModule::UnityEngine::AudioClip*)returnValue;
}
UnityEngine_AudioModule::UnityEngine::AudioClip* Assembly_CSharp::Sound::GetDeath()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDeath");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AudioModule::UnityEngine::AudioClip*)returnValue;
}
void Assembly_CSharp::Sound::PlaySound_SmokeGrenade(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_SmokeGrenade", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_ShieldHit(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_ShieldHit", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::PlaySound_SnowHit(UnityEngine_AudioModule::UnityEngine::AudioSource* AS)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound_SnowHit", std::vector<std::string> { "UnityEngine.AudioSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)AS;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Sound::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
