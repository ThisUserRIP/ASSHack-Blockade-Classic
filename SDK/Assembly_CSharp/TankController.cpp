#include "TankController.h"

IL2CPP::Il2CppClass* Assembly_CSharp::TankController::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "TankController");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::TankController::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::TankController::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::TankController::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::TankController::OnGUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGUI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::TankController::DrawTankState(float rBy, float rTy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawTankState", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&rBy;
	params[1] = (intptr_t)&rTy;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::TankController::javelinAIM(int32_t aimIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "javelinAIM", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&aimIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::TankController::UnderAIM()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnderAIM");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
void Assembly_CSharp::TankController::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::TankController::hitChecker(UnityEngine_PhysicsModule::UnityEngine::RaycastHit hit, UnityEngine_CoreModule::UnityEngine::Ray ray, float rad)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hitChecker", std::vector<std::string> { "UnityEngine.RaycastHit", "UnityEngine.Ray", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hit;
	params[1] = (intptr_t)&ray;
	params[2] = (intptr_t)&rad;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::TankController::tryRayCast()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "tryRayCast");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::TankController::tryRepos()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "tryRepos");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::TankController::tryPreRepos()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "tryPreRepos");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp::TankController::getMaxY()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "getMaxY");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp::TankController::getYF()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "getYF");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp::TankController::getYB()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "getYB");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp::TankController::getYL()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "getYL");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp::TankController::getYR()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "getYR");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp::TankController::getMaxV()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "getMaxV");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::TankController::Fire()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Fire");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Nullable_1<Assembly_CSharp::Vector3i> Assembly_CSharp::TankController::GetPoint(UnityEngine_CoreModule::UnityEngine::Ray ray, float radius)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPoint", std::vector<std::string> { "UnityEngine.Ray", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ray;
	params[1] = (intptr_t)&radius;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Nullable_1<Assembly_CSharp::Vector3i> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Nullable_1<Assembly_CSharp::Vector3i>));
		return ret;
	}
	return static_cast<mscorlib::System::Nullable_1<Assembly_CSharp::Vector3i>>(*(mscorlib::System::Nullable_1<Assembly_CSharp::Vector3i>*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::TankController::weapon_attack_block(int32_t wid, Assembly_CSharp::Vector3i pointvalue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "weapon_attack_block", std::vector<std::string> { "System.Int32", "Vector3i" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&wid;
	params[1] = (intptr_t)&pointvalue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::TankController::NextSnaryad()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NextSnaryad");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::TankController::weapon_raycast(int32_t wid, float dist, int32_t blockdist)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "weapon_raycast", std::vector<std::string> { "System.Int32", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&wid;
	params[1] = (intptr_t)&dist;
	params[2] = (intptr_t)&blockdist;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Nullable_1<Assembly_CSharp::Vector3i> Assembly_CSharp::TankController::GetCursor(bool inside, int32_t radius)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCursor", std::vector<std::string> { "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&inside;
	params[1] = (intptr_t)&radius;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Nullable_1<Assembly_CSharp::Vector3i> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Nullable_1<Assembly_CSharp::Vector3i>));
		return ret;
	}
	return static_cast<mscorlib::System::Nullable_1<Assembly_CSharp::Vector3i>>(*(mscorlib::System::Nullable_1<Assembly_CSharp::Vector3i>*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::TankController::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
