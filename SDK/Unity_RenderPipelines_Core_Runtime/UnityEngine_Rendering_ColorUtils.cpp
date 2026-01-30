#include "UnityEngine_Rendering_ColorUtils.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "ColorUtils");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::get_lensImperfectionExposureScale()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lensImperfectionExposureScale");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::StandardIlluminantY(float x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StandardIlluminantY", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
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
UnityEngine_CoreModule::UnityEngine::Vector3 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::CIExyToLMS(float x, float y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CIExyToLMS", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
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
UnityEngine_CoreModule::UnityEngine::Vector3 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::ColorBalanceToLMSCoeffs(float temperature, float tint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ColorBalanceToLMSCoeffs", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&temperature;
	params[1] = (intptr_t)&tint;
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
mscorlib::System::ValueTuple_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4> Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::PrepareShadowsMidtonesHighlights(UnityEngine_CoreModule::UnityEngine::Vector4& inShadows, UnityEngine_CoreModule::UnityEngine::Vector4& inMidtones, UnityEngine_CoreModule::UnityEngine::Vector4& inHighlights)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareShadowsMidtonesHighlights", std::vector<std::string> { "UnityEngine.Vector4&", "UnityEngine.Vector4&", "UnityEngine.Vector4&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&inShadows;
	params[1] = (intptr_t)&inMidtones;
	params[2] = (intptr_t)&inHighlights;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::ValueTuple_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::ValueTuple_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4>));
		return ret;
	}
	return static_cast<mscorlib::System::ValueTuple_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4>>(*(mscorlib::System::ValueTuple_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4>*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::ValueTuple_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4> Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::PrepareLiftGammaGain(UnityEngine_CoreModule::UnityEngine::Vector4& inLift, UnityEngine_CoreModule::UnityEngine::Vector4& inGamma, UnityEngine_CoreModule::UnityEngine::Vector4& inGain)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareLiftGammaGain", std::vector<std::string> { "UnityEngine.Vector4&", "UnityEngine.Vector4&", "UnityEngine.Vector4&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&inLift;
	params[1] = (intptr_t)&inGamma;
	params[2] = (intptr_t)&inGain;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::ValueTuple_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::ValueTuple_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4>));
		return ret;
	}
	return static_cast<mscorlib::System::ValueTuple_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4>>(*(mscorlib::System::ValueTuple_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4>*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::ValueTuple_2<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4> Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::PrepareSplitToning(UnityEngine_CoreModule::UnityEngine::Vector4& inShadows, UnityEngine_CoreModule::UnityEngine::Vector4& inHighlights, float balance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareSplitToning", std::vector<std::string> { "UnityEngine.Vector4&", "UnityEngine.Vector4&", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&inShadows;
	params[1] = (intptr_t)&inHighlights;
	params[2] = (intptr_t)&balance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::ValueTuple_2<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::ValueTuple_2<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4>));
		return ret;
	}
	return static_cast<mscorlib::System::ValueTuple_2<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4>>(*(mscorlib::System::ValueTuple_2<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4>*)il2cpp_object_unbox(returnValue));
}
float Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::Luminance(UnityEngine_CoreModule::UnityEngine::Color& color)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Luminance", std::vector<std::string> { "UnityEngine.Color&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&color;
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
float Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::ComputeEV100(float aperture, float shutterSpeed, float ISO)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComputeEV100", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&aperture;
	params[1] = (intptr_t)&shutterSpeed;
	params[2] = (intptr_t)&ISO;
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
float Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::ConvertEV100ToExposure(float EV100)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertEV100ToExposure", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&EV100;
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
float Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::ConvertExposureToEV100(float exposure)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertExposureToEV100", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&exposure;
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
float Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::ComputeEV100FromAvgLuminance(float avgLuminance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComputeEV100FromAvgLuminance", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&avgLuminance;
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
float Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::ComputeISO(float aperture, float shutterSpeed, float targetEV100)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComputeISO", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&aperture;
	params[1] = (intptr_t)&shutterSpeed;
	params[2] = (intptr_t)&targetEV100;
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
uint32_t Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::ToHex(UnityEngine_CoreModule::UnityEngine::Color c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToHex", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&c;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Color Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::ToRGBA(uint32_t hex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToRGBA", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ColorUtils::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
