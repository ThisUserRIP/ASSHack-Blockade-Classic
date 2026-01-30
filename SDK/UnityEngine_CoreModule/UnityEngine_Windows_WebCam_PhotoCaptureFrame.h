#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Windows_WebCam_CapturePixelFormat.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam
{
	struct PhotoCaptureFrame : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_NativePtr;
		int32_t _dataLength_k__BackingField;
		bool _hasLocationData_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Windows::WebCam::CapturePixelFormat _pixelFormat_k__BackingField;
		int32_t get_dataLength();
		void set_dataLength(int32_t value);
		void set_hasLocationData(bool value);
		void set_pixelFormat(UnityEngine_CoreModule::UnityEngine::Windows::WebCam::CapturePixelFormat value);
		int32_t GetDataLength();
		bool GetHasLocationData();
		UnityEngine_CoreModule::UnityEngine::Windows::WebCam::CapturePixelFormat GetCapturePixelFormat();
		void _ctor(intptr_t nativePtr);
		void Cleanup();
		void Dispose_Internal();
		void Dispose();
		void Finalize();
	};
}

