#include "Doozy_Engine_Utils_ColorModels_RGB.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.Utils.ColorModels", "RGB");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::_ctor(float R, float G, float B)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&R;
	params[1] = (intptr_t)&G;
	params[2] = (intptr_t)&B;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::Copy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Copy");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Color Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::Color(float alpha)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Color", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&alpha;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::HSL* Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::ToHSL()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToHSL");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::HSL*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::HSV* Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::ToHSV()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToHSV");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::HSV*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMY* Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::ToCMY()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToCMY");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMY*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMYK* Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::ToCMYK()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToCMYK");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMYK*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::XYZ* Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::ToXYZ()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToXYZ");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::XYZ*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::Validate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Validate");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB*)returnValue;
}
float Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::ValidateColor(float value, float min, float max)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateColor", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)&min;
	params[2] = (intptr_t)&max;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Vector3 Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::Factorize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Factorize");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::FactorizeColor(float value, float min, float max, float f)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FactorizeColor", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)&min;
	params[2] = (intptr_t)&max;
	params[3] = (intptr_t)&f;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::ToString(bool factorize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&factorize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB::ToHEX(bool addHashTag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToHEX", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&addHashTag;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
