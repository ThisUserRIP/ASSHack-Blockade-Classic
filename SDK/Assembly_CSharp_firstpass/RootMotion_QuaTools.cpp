#include "RootMotion_QuaTools.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::QuaTools::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion", "QuaTools");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::QuaTools::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Quaternion Assembly_CSharp_firstpass::RootMotion::QuaTools::Lerp(UnityEngine_CoreModule::UnityEngine::Quaternion fromRotation, UnityEngine_CoreModule::UnityEngine::Quaternion toRotation, float weight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Lerp", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Quaternion", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&fromRotation;
	params[1] = (intptr_t)&toRotation;
	params[2] = (intptr_t)&weight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion Assembly_CSharp_firstpass::RootMotion::QuaTools::Slerp(UnityEngine_CoreModule::UnityEngine::Quaternion fromRotation, UnityEngine_CoreModule::UnityEngine::Quaternion toRotation, float weight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Slerp", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Quaternion", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&fromRotation;
	params[1] = (intptr_t)&toRotation;
	params[2] = (intptr_t)&weight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion Assembly_CSharp_firstpass::RootMotion::QuaTools::LinearBlend(UnityEngine_CoreModule::UnityEngine::Quaternion q, float weight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LinearBlend", std::vector<std::string> { "UnityEngine.Quaternion", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&q;
	params[1] = (intptr_t)&weight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion Assembly_CSharp_firstpass::RootMotion::QuaTools::SphericalBlend(UnityEngine_CoreModule::UnityEngine::Quaternion q, float weight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SphericalBlend", std::vector<std::string> { "UnityEngine.Quaternion", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&q;
	params[1] = (intptr_t)&weight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion Assembly_CSharp_firstpass::RootMotion::QuaTools::FromToAroundAxis(UnityEngine_CoreModule::UnityEngine::Vector3 fromDirection, UnityEngine_CoreModule::UnityEngine::Vector3 toDirection, UnityEngine_CoreModule::UnityEngine::Vector3 axis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromToAroundAxis", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&fromDirection;
	params[1] = (intptr_t)&toDirection;
	params[2] = (intptr_t)&axis;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion Assembly_CSharp_firstpass::RootMotion::QuaTools::RotationToLocalSpace(UnityEngine_CoreModule::UnityEngine::Quaternion space, UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotationToLocalSpace", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&space;
	params[1] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion Assembly_CSharp_firstpass::RootMotion::QuaTools::FromToRotation(UnityEngine_CoreModule::UnityEngine::Quaternion from, UnityEngine_CoreModule::UnityEngine::Quaternion to)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromToRotation", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&from;
	params[1] = (intptr_t)&to;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::QuaTools::GetAxis(UnityEngine_CoreModule::UnityEngine::Vector3 v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxis", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&v;
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
UnityEngine_CoreModule::UnityEngine::Quaternion Assembly_CSharp_firstpass::RootMotion::QuaTools::ClampRotation(UnityEngine_CoreModule::UnityEngine::Quaternion rotation, float clampWeight, int32_t clampSmoothing)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClampRotation", std::vector<std::string> { "UnityEngine.Quaternion", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&rotation;
	params[1] = (intptr_t)&clampWeight;
	params[2] = (intptr_t)&clampSmoothing;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp_firstpass::RootMotion::QuaTools::ClampAngle(float angle, float clampWeight, int32_t clampSmoothing)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClampAngle", std::vector<std::string> { "System.Single", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&angle;
	params[1] = (intptr_t)&clampWeight;
	params[2] = (intptr_t)&clampSmoothing;
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
UnityEngine_CoreModule::UnityEngine::Quaternion Assembly_CSharp_firstpass::RootMotion::QuaTools::MatchRotation(UnityEngine_CoreModule::UnityEngine::Quaternion targetRotation, UnityEngine_CoreModule::UnityEngine::Vector3 targetforwardAxis, UnityEngine_CoreModule::UnityEngine::Vector3 targetUpAxis, UnityEngine_CoreModule::UnityEngine::Vector3 forwardAxis, UnityEngine_CoreModule::UnityEngine::Vector3 upAxis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchRotation", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&targetRotation;
	params[1] = (intptr_t)&targetforwardAxis;
	params[2] = (intptr_t)&targetUpAxis;
	params[3] = (intptr_t)&forwardAxis;
	params[4] = (intptr_t)&upAxis;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
