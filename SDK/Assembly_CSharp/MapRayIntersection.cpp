#include "MapRayIntersection.h"

IL2CPP::Il2CppClass* Assembly_CSharp::MapRayIntersection::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "MapRayIntersection");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::MapRayIntersection::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> Assembly_CSharp::MapRayIntersection::Intersection(Assembly_CSharp::Map* map, UnityEngine_CoreModule::UnityEngine::Ray ray, float distance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Intersection", std::vector<std::string> { "Map", "UnityEngine.Ray", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)map;
	params[1] = (intptr_t)&ray;
	params[2] = (intptr_t)&distance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3>));
		return ret;
	}
	return static_cast<mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3>>(*(mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3>*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp::MapRayIntersection::BlockRayIntersection(UnityEngine_CoreModule::UnityEngine::Vector3 blockPos, UnityEngine_CoreModule::UnityEngine::Ray ray)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BlockRayIntersection", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Ray" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&blockPos;
	params[1] = (intptr_t)&ray;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::MapRayIntersection::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
