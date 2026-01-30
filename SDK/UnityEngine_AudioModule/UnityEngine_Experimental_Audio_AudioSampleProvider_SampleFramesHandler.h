#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "UnityEngine_Experimental_Audio_AudioSampleProvider.h"
namespace UnityEngine_AudioModule::UnityEngine::Experimental::Audio { struct AudioSampleProvider; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace UnityEngine_AudioModule::UnityEngine::Experimental::Audio
{
	struct AudioSampleProvider_SampleFramesHandler : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(UnityEngine_AudioModule::UnityEngine::Experimental::Audio::AudioSampleProvider* provider, uint32_t sampleFrameCount);
		mscorlib::System::IAsyncResult* BeginInvoke(UnityEngine_AudioModule::UnityEngine::Experimental::Audio::AudioSampleProvider* provider, uint32_t sampleFrameCount, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

