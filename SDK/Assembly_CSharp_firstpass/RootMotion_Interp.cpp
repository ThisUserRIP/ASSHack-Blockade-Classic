#include "RootMotion_Interp.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::Interp::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion", "Interp");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::Interp::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float Assembly_CSharp_firstpass::RootMotion::Interp::Float(float t, Assembly_CSharp_firstpass::RootMotion::InterpolationMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Float", std::vector<std::string> { "System.Single", "RootMotion.InterpolationMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&mode;
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
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp_firstpass::RootMotion::Interp::V3(UnityEngine_CoreModule::UnityEngine::Vector3 v1, UnityEngine_CoreModule::UnityEngine::Vector3 v2, float t, Assembly_CSharp_firstpass::RootMotion::InterpolationMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "V3", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "RootMotion.InterpolationMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&v1;
	params[1] = (intptr_t)&v2;
	params[2] = (intptr_t)&t;
	params[3] = (intptr_t)&mode;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::LerpValue(float value, float target, float increaseSpeed, float decreaseSpeed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LerpValue", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)&target;
	params[2] = (intptr_t)&increaseSpeed;
	params[3] = (intptr_t)&decreaseSpeed;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::None(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "None", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::InOutCubic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InOutCubic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::InOutQuintic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InOutQuintic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::InQuintic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InQuintic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::InQuartic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InQuartic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::InCubic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InCubic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::InQuadratic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InQuadratic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::OutQuintic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OutQuintic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::OutQuartic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OutQuartic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::OutCubic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OutCubic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::OutInCubic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OutInCubic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::OutInQuartic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OutInQuartic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::BackInCubic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BackInCubic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::BackInQuartic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BackInQuartic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::OutBackCubic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OutBackCubic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::OutBackQuartic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OutBackQuartic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::OutElasticSmall(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OutElasticSmall", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::OutElasticBig(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OutElasticBig", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::InElasticSmall(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InElasticSmall", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::InElasticBig(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InElasticBig", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::InSine(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InSine", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::OutSine(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OutSine", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::InOutSine(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InOutSine", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::InElastic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InElastic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::OutElastic(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OutElastic", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::InBack(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InBack", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
float Assembly_CSharp_firstpass::RootMotion::Interp::OutBack(float t, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OutBack", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
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
void Assembly_CSharp_firstpass::RootMotion::Interp::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
