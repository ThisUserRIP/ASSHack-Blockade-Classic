#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "UnityEngine_Experimental_GlobalIllumination_Lightmapping.h"
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct Lightmapping; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
#include "UnityEngine_Experimental_GlobalIllumination_LightDataGI.h"
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct LightDataGI; };
#include "Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination
{
	struct Lightmapping_RequestLightsDelegate : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Light*>* requests, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput);
		mscorlib::System::IAsyncResult* BeginInvoke(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Light*>* requests, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

