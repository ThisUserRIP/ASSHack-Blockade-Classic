#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "UnityEngine_Windows_WebCam_VideoCapture_VideoCaptureResult.h"
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam { struct VideoCapture_VideoCaptureResult; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam { struct VideoCapture_OnVideoCaptureResourceCreatedCallback; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam { struct VideoCapture_OnVideoModeStartedCallback; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam { struct VideoCapture_OnVideoModeStoppedCallback; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam { struct VideoCapture_OnStartedRecordingVideoCallback; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam { struct VideoCapture_OnStoppedRecordingVideoCallback; };

namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam
{
	struct VideoCapture : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_NativePtr;
		struct StaticFields
		{
			int64_t HR_SUCCESS;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult MakeCaptureResult(int64_t hResult);
		static void InvokeOnCreatedVideoCaptureResourceDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback* callback, intptr_t nativePtr);
		void _ctor(intptr_t nativeCaptureObject);
		static void InvokeOnVideoModeStartedDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback* callback, int64_t hResult);
		static void InvokeOnVideoModeStoppedDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback* callback, int64_t hResult);
		static void InvokeOnStartedRecordingVideoToDiskDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback* callback, int64_t hResult);
		static void InvokeOnStoppedRecordingVideoToDiskDelegate(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback* callback, int64_t hResult);
		void Dispose();
		void Dispose_Internal();
		void Finalize();
		void DisposeThreaded_Internal();
		static void _cctor();
	};
}

