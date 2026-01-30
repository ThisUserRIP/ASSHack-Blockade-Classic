#include "UnityEngine_Windows_WebCam_VideoCapture.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Windows.WebCam", "VideoCapture");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture::MakeCaptureResult(int64_t hResult)
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
		UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult>(*(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture::InvokeOnCreatedVideoCaptureResourceDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback* callback, intptr_t nativePtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnCreatedVideoCaptureResourceDelegate", std::vector<std::string> { "UnityEngine.Windows.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)&nativePtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture::_ctor(intptr_t nativeCaptureObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&nativeCaptureObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture::InvokeOnVideoModeStartedDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback* callback, int64_t hResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnVideoModeStartedDelegate", std::vector<std::string> { "UnityEngine.Windows.WebCam.VideoCapture/OnVideoModeStartedCallback", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)&hResult;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture::InvokeOnVideoModeStoppedDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback* callback, int64_t hResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnVideoModeStoppedDelegate", std::vector<std::string> { "UnityEngine.Windows.WebCam.VideoCapture/OnVideoModeStoppedCallback", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)&hResult;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture::InvokeOnStartedRecordingVideoToDiskDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback* callback, int64_t hResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnStartedRecordingVideoToDiskDelegate", std::vector<std::string> { "UnityEngine.Windows.WebCam.VideoCapture/OnStartedRecordingVideoCallback", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)&hResult;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture::InvokeOnStoppedRecordingVideoToDiskDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback* callback, int64_t hResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnStoppedRecordingVideoToDiskDelegate", std::vector<std::string> { "UnityEngine.Windows.WebCam.VideoCapture/OnStoppedRecordingVideoCallback", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)&hResult;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture::Dispose_Internal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose_Internal");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture::DisposeThreaded_Internal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisposeThreaded_Internal");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
