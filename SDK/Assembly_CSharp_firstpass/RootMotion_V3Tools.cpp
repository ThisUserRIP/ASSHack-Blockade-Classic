#include "RootMotion_V3Tools.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::V3Tools::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion", "V3Tools");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::V3Tools::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::V3Tools::Lerp(UnityEngine_CoreModule::UnityEngine::Vector3 fromVector, UnityEngine_CoreModule::UnityEngine::Vector3 toVector, float weight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Lerp", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&fromVector;
	params[1] = (intptr_t)&toVector;
	params[2] = (intptr_t)&weight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::V3Tools::Slerp(UnityEngine_CoreModule::UnityEngine::Vector3 fromVector, UnityEngine_CoreModule::UnityEngine::Vector3 toVector, float weight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Slerp", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&fromVector;
	params[1] = (intptr_t)&toVector;
	params[2] = (intptr_t)&weight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::V3Tools::ExtractVertical(UnityEngine_CoreModule::UnityEngine::Vector3 v, UnityEngine_CoreModule::UnityEngine::Vector3 verticalAxis, float weight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExtractVertical", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&v;
	params[1] = (intptr_t)&verticalAxis;
	params[2] = (intptr_t)&weight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::V3Tools::ExtractHorizontal(UnityEngine_CoreModule::UnityEngine::Vector3 v, UnityEngine_CoreModule::UnityEngine::Vector3 normal, float weight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExtractHorizontal", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&v;
	params[1] = (intptr_t)&normal;
	params[2] = (intptr_t)&weight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::V3Tools::ClampDirection(UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_CoreModule::UnityEngine::Vector3 normalDirection, float clampWeight, int32_t clampSmoothing, bool& changed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClampDirection", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Int32", "System.Boolean&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&direction;
	params[1] = (intptr_t)&normalDirection;
	params[2] = (intptr_t)&clampWeight;
	params[3] = (intptr_t)&clampSmoothing;
	params[4] = (intptr_t)&changed;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::V3Tools::ClampDirection(UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_CoreModule::UnityEngine::Vector3 normalDirection, float clampWeight, int32_t clampSmoothing, float& clampValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClampDirection", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Int32", "System.Single&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&direction;
	params[1] = (intptr_t)&normalDirection;
	params[2] = (intptr_t)&clampWeight;
	params[3] = (intptr_t)&clampSmoothing;
	params[4] = (intptr_t)&clampValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::V3Tools::LineToPlane(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_CoreModule::UnityEngine::Vector3 planeNormal, UnityEngine_CoreModule::UnityEngine::Vector3 planePoint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LineToPlane", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)&direction;
	params[2] = (intptr_t)&planeNormal;
	params[3] = (intptr_t)&planePoint;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::V3Tools::PointToPlane(UnityEngine_CoreModule::UnityEngine::Vector3 point, UnityEngine_CoreModule::UnityEngine::Vector3 planePosition, UnityEngine_CoreModule::UnityEngine::Vector3 planeNormal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PointToPlane", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&point;
	params[1] = (intptr_t)&planePosition;
	params[2] = (intptr_t)&planeNormal;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
