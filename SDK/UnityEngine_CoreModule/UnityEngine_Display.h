#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_CoreModule::UnityEngine { struct Display; };
namespace UnityEngine_CoreModule::UnityEngine { struct Display_DisplaysUpdatedDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Display : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t nativeDisplay;
		struct StaticFields
		{
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Display*>* displays;
			UnityEngine_CoreModule::UnityEngine::Display* _mainDisplay;
			UnityEngine_CoreModule::UnityEngine::Display_DisplaysUpdatedDelegate* onDisplaysUpdated;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(intptr_t nativeDisplay);
		int32_t get_renderingWidth();
		int32_t get_renderingHeight();
		int32_t get_systemWidth();
		int32_t get_systemHeight();
		bool get_requiresSrgbBlitToBackbuffer();
		static UnityEngine_CoreModule::UnityEngine::Vector3 RelativeMouseAt(UnityEngine_CoreModule::UnityEngine::Vector3 inputMouseCoordinates);
		static UnityEngine_CoreModule::UnityEngine::Display* get_main();
		static void RecreateDisplayList(IL2CPP::Array<intptr_t>* nativeDisplay);
		static void FireDisplaysUpdated();
		static void GetSystemExtImpl(intptr_t nativeDisplay, int32_t& w, int32_t& h);
		static void GetRenderingExtImpl(intptr_t nativeDisplay, int32_t& w, int32_t& h);
		static int32_t RelativeMouseAtImpl(int32_t x, int32_t y, int32_t& rx, int32_t& ry);
		static bool RequiresSrgbBlitToBackbufferImpl(intptr_t nativeDisplay);
		static void _cctor();
	};
}

