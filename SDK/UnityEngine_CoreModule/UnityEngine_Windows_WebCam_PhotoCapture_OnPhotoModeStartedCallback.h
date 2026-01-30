#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "UnityEngine_Windows_WebCam_PhotoCapture.h"
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam { struct PhotoCapture; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "UnityEngine_Windows_WebCam_PhotoCapture_PhotoCaptureResult.h"
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam { struct PhotoCapture_PhotoCaptureResult; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam
{
	struct PhotoCapture_OnPhotoModeStartedCallback : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult result);
		mscorlib::System::IAsyncResult* BeginInvoke(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult result, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

