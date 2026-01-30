#include "UnityEngine_Windows_WebCam_PhotoCapture.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Windows.WebCam", "PhotoCapture");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture::MakeCaptureResult(int64_t hResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MakeCaptureResult", std::vector<std::string> { "System.Int64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hResult;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult>(*(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnCreatedResourceDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback* callback, intptr_t nativePtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnCreatedResourceDelegate", std::vector<std::string> { "UnityEngine.Windows.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)&nativePtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture::_ctor(intptr_t nativeCaptureObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&nativeCaptureObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnPhotoModeStartedDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback* callback, int64_t hResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnPhotoModeStartedDelegate", std::vector<std::string> { "UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStartedCallback", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)&hResult;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnPhotoModeStoppedDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback* callback, int64_t hResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnPhotoModeStoppedDelegate", std::vector<std::string> { "UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStoppedCallback", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)&hResult;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnCapturedPhotoToDiskDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback* callback, int64_t hResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnCapturedPhotoToDiskDelegate", std::vector<std::string> { "UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToDiskCallback", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)&hResult;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnCapturedPhotoToMemoryDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback* callback, int64_t hResult, intptr_t photoCaptureFramePtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnCapturedPhotoToMemoryDelegate", std::vector<std::string> { "UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback", "System.Int64", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)&hResult;
	params[2] = (intptr_t)&photoCaptureFramePtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture::Dispose_Internal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose_Internal");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture::DisposeThreaded_Internal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisposeThreaded_Internal");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
