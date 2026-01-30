#include "Funly_SkyStudio_IBaseKeyframe.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Funly::SkyStudio::IBaseKeyframe::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Funly.SkyStudio", "IBaseKeyframe");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Funly::SkyStudio::IBaseKeyframe::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* Assembly_CSharp::Funly::SkyStudio::IBaseKeyframe::get_id()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_id");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
float Assembly_CSharp::Funly::SkyStudio::IBaseKeyframe::get_time()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_time");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Funly::SkyStudio::IBaseKeyframe::set_time(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_time", std::vector<std::string> { "System.Single" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Funly::SkyStudio::InterpolationCurve Assembly_CSharp::Funly::SkyStudio::IBaseKeyframe::get_interpolationCurve()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_interpolationCurve");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Funly::SkyStudio::InterpolationCurve ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Funly::SkyStudio::InterpolationCurve));
		return ret;
	}
	return static_cast<Assembly_CSharp::Funly::SkyStudio::InterpolationCurve>(*(Assembly_CSharp::Funly::SkyStudio::InterpolationCurve*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Funly::SkyStudio::IBaseKeyframe::set_interpolationCurve(Assembly_CSharp::Funly::SkyStudio::InterpolationCurve value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_interpolationCurve", std::vector<std::string> { "Funly.SkyStudio.InterpolationCurve" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Funly::SkyStudio::InterpolationDirection Assembly_CSharp::Funly::SkyStudio::IBaseKeyframe::get_interpolationDirection()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_interpolationDirection");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Funly::SkyStudio::InterpolationDirection ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Funly::SkyStudio::InterpolationDirection));
		return ret;
	}
	return static_cast<Assembly_CSharp::Funly::SkyStudio::InterpolationDirection>(*(Assembly_CSharp::Funly::SkyStudio::InterpolationDirection*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Funly::SkyStudio::IBaseKeyframe::set_interpolationDirection(Assembly_CSharp::Funly::SkyStudio::InterpolationDirection value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_interpolationDirection", std::vector<std::string> { "Funly.SkyStudio.InterpolationDirection" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
