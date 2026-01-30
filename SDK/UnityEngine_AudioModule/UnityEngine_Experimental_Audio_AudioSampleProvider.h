#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_AudioModule::UnityEngine::Experimental::Audio { struct AudioSampleProvider_SampleFramesHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_AudioModule::UnityEngine::Experimental::Audio
{
	struct AudioSampleProvider : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AudioModule::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler* sampleFramesAvailable;
		UnityEngine_AudioModule::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler* sampleFramesOverflow;
		void InvokeSampleFramesAvailable(int32_t sampleFrameCount);
		void InvokeSampleFramesOverflow(int32_t droppedSampleFrameCount);
	};
}

