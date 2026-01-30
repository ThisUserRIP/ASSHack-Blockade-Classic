#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "UnityEngine_Windows_WebCam_PhotoCapture_PhotoCaptureResult.h"
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam { struct PhotoCapture_PhotoCaptureResult; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam { struct PhotoCapture_OnCaptureResourceCreatedCallback; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam { struct PhotoCapture_OnPhotoModeStartedCallback; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam { struct PhotoCapture_OnPhotoModeStoppedCallback; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam { struct PhotoCapture_OnCapturedToDiskCallback; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam { struct PhotoCapture_OnCapturedToMemoryCallback; };

namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam
{
	struct PhotoCapture : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_NativePtr;
		struct StaticFields
		{
			int64_t HR_SUCCESS;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult MakeCaptureResult(int64_t hResult);
		static void InvokeOnCreatedResourceDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback* callback, intptr_t nativePtr);
		void _ctor(intptr_t nativeCaptureObject);
		static void InvokeOnPhotoModeStartedDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback* callback, int64_t hResult);
		static void InvokeOnPhotoModeStoppedDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback* callback, int64_t hResult);
		static void InvokeOnCapturedPhotoToDiskDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback* callback, int64_t hResult);
		static void InvokeOnCapturedPhotoToMemoryDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback* callback, int64_t hResult, intptr_t photoCaptureFramePtr);
		void Dispose();
		void Dispose_Internal();
		void Finalize();
		void DisposeThreaded_Internal();
		static void _cctor();
	};
}

