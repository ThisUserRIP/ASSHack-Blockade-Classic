#include "UnityEngine_ScreenCapture.h"

IL2CPP::Il2CppClass* UnityEngine_ScreenCaptureModule::UnityEngine::ScreenCapture::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.ScreenCaptureModule.dll", "UnityEngine", "ScreenCapture");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_ScreenCaptureModule::UnityEngine::ScreenCapture::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_ScreenCaptureModule::UnityEngine::ScreenCapture::CaptureScreenshot(mscorlib::System::String* filename)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CaptureScreenshot", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)filename;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_ScreenCaptureModule::UnityEngine::ScreenCapture::CaptureScreenshot(mscorlib::System::String* filename, int32_t superSize, UnityEngine_ScreenCaptureModule::UnityEngine::ScreenCapture_StereoScreenCaptureMode CaptureMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CaptureScreenshot", std::vector<std::string> { "System.String", "System.Int32", "UnityEngine.ScreenCapture/StereoScreenCaptureMode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)filename;
	params[1] = (intptr_t)&superSize;
	params[2] = (intptr_t)&CaptureMode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
